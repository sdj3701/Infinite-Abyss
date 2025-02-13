// Fill out your copyright notice in the Description page of Project Settings.


#include "Gimmick/ABStageGimmick.h"
#include "Character/ABCharacterBaseNonPlayer.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Interface/ABGameInterface.h"
#include "Item/ABItemBox.h"
#include "Kismet/GameplayStatics.h"
#include "Physics/ABCollision.h"
#include "Kismet/GameplayStatics.h"
#include "Game/ABGameMode.h"

// Sets default values
AABStageGimmick::AABStageGimmick()
{
 	//Stage Sction
	Stage = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Stage"));
	RootComponent = Stage;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> StageMeshRef(TEXT("/Script/Engine.StaticMesh'/Game/ExternItemMap/LuosCaves/Meshes/Caves_XSections/SM_LCave_CRX_01.SM_LCave_CRX_01'"));
	if(StageMeshRef.Object)
	{
		Stage->SetStaticMesh(StageMeshRef.Object);
	}

	StageTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("StageTrigger"));
	StageTrigger->SetBoxExtent(FVector(775.0f,775.0f,250.0f));
	StageTrigger->SetupAttachment(Stage);
	StageTrigger->SetRelativeLocation(FVector(-1586.0f,0.0f,250.0f));
	StageTrigger->SetRelativeScale3D(FVector(2.0f,2.0f,1.0f));
	StageTrigger->SetCollisionProfileName(CPROFILE_ABTRIGGER);
	StageTrigger->OnComponentBeginOverlap.AddDynamic(this, &AABStageGimmick::OnStageTriggerBeginOverlap);

	//Gate Section
	static FName GateSockets[] = {TEXT("+XGate"), TEXT("-XGate"), TEXT("+YGate"), TEXT("-YGate")};
	static ConstructorHelpers::FObjectFinder<UStaticMesh> GateMeshRef(TEXT("/Script/Engine.StaticMesh'/Game/ExternItemMap/LuosCaves/Meshes/Props_Rocks/SM_LCave_P_Rock_57.SM_LCave_P_Rock_57'"));
	for(FName GateSocket : GateSockets)
	{
		UStaticMeshComponent* Gate = CreateDefaultSubobject<UStaticMeshComponent>(GateSocket);
		Gate->SetStaticMesh(GateMeshRef.Object);
		Gate->SetupAttachment(Stage, GateSocket);
		//소켓으로 문 위치를 조정하고 위치를 지정해줌
		Gate->SetRelativeLocation(FVector(0.0f,-80.5f, -600.0f));
		Gate->SetRelativeRotation(FRotator(0.0f,0.0f,0.0f));
		//TODO : Gate의 충돌이랑 Mesh를 끔
		Gate->SetVisibility(false);
		Gate->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		Gates.Add(GateSocket, Gate);

		FName TriggerName = *GateSocket.ToString().Append(TEXT("Trigger"));
		UBoxComponent* GateTrigger = CreateDefaultSubobject<UBoxComponent>(TriggerName);
		GateTrigger->SetBoxExtent(FVector(300.0f,300.0f,300.0f));
		GateTrigger->SetupAttachment(Stage, GateSocket);
		GateTrigger->SetRelativeLocation(FVector(70.0f, 0.0f, 250.0f));
		GateTrigger->SetCollisionProfileName(CPROFILE_ABTRIGGER);
		GateTrigger->OnComponentBeginOverlap.AddDynamic(this, &AABStageGimmick::OnGateTriggerBeginOverlap);
		GateTrigger->ComponentTags.Add(GateSocket);

		GateTriggers.Add(GateTrigger);
	}
	CloseTime = 1.0f;
	CloseSpeed = 0.1f;

	//State Section
	CurrentState = EStageState::READY;

	StateChangeActions.Add(EStageState::READY, FStageChangedDelegateWrapper(FOnStageChangedDelegate::CreateUObject(this, &AABStageGimmick::SetReady)));
	StateChangeActions.Add(EStageState::FIGHT, FStageChangedDelegateWrapper(FOnStageChangedDelegate::CreateUObject(this,&AABStageGimmick::SetFight)));
	StateChangeActions.Add(EStageState::REWARD, FStageChangedDelegateWrapper(FOnStageChangedDelegate::CreateUObject(this, &AABStageGimmick::SetChooseReward)));
	StateChangeActions.Add(EStageState::NEXT, FStageChangedDelegateWrapper(FOnStageChangedDelegate::CreateUObject(this, &AABStageGimmick::SetChooseNext)));

	//Fight Section
	OpponentSpawnTime = 2.0f;
	OpponentClass = AABCharacterBaseNonPlayer::StaticClass();

	//Reward Section
	RewardBoxClass = AABItemBox::StaticClass();
	for(FName GateSocket: GateSockets)
	{
		FVector BoxLocation = Stage->GetSocketLocation(GateSocket)/2;
		RewardBoxLocations.Add(GateSocket, BoxLocation);
	}

	//Stage Stat
	CurrentStageNum = 0;
}

void AABStageGimmick::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	SetState(CurrentState);
}

void AABStageGimmick::OnStageTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
                                                UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepHitResult)
{
	SetState(EStageState::FIGHT);
}

void AABStageGimmick::OnGateTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
                                                UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepHitResult)
{
	check(OverlappedComponent->ComponentTags.Num() == 1);
	FName ComponentTag = OverlappedComponent->ComponentTags[0];
	FName SocketName = FName(*ComponentTag.ToString().Left(2));
	check(Stage->DoesSocketExist(SocketName));

	FVector NewLocation = Stage->GetSocketLocation(SocketName);
	TArray<FOverlapResult> OverlapResults;
	FCollisionQueryParams CollisionQueryParam(SCENE_QUERY_STAT(GateTriggers),false,this);
	bool bResult = GetWorld()->OverlapMultiByObjectType(
		OverlapResults,
		NewLocation,
		FQuat::Identity,
		FCollisionObjectQueryParams::InitType::AllObjects,
		FCollisionShape::MakeSphere(775.0f),
		CollisionQueryParam
		);
	if(!bResult)
	{
		FTransform NewTransform(NewLocation);
		AABStageGimmick* NewGimmick = GetWorld()->SpawnActorDeferred<AABStageGimmick>(AABStageGimmick::StaticClass(), NewTransform);
		if(NewGimmick)
		{
			NewGimmick->SetStageNum(CurrentStageNum +1);
			NewGimmick->FinishSpawning(NewTransform);
		}
	}
}

void AABStageGimmick::OpenAllGates()
{
	ElapsedTime =0;

	for(auto Gate : Gates)
	{
		Gate.Value->SetRelativeLocation(FVector::ZeroVector);
		StartLocation = (Gate.Value)->GetRelativeLocation();
		EndLocation = FVector(0.0f,0.0f,-600.0f);

		GetWorldTimerManager().SetTimer(TimerHandle_GateMove, this, &AABStageGimmick::MoveGate, MoveInterval, true, 0.0f);
		
	}

	for(auto Gate : Gates)
	{
		(Gate.Value)->SetVisibility(false);
		(Gate.Value)->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
}

void AABStageGimmick::CloseAllGates()
{
	ElapsedTime =0;

	for(auto Gate : Gates)
	{
		(Gate.Value)->SetVisibility(true);
		(Gate.Value)->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		(Gate.Value)->SetRelativeLocation(FVector(0.0f,0.0f, -600.0f));
		
		StartLocation = (Gate.Value)->GetRelativeLocation();
		EndLocation = FVector::ZeroVector;

		GetWorldTimerManager().SetTimer(TimerHandle_GateMove, this, &AABStageGimmick::MoveGate, MoveInterval, true, 0.0f);
	}
}

void AABStageGimmick::MoveGate()
{
	ElapsedTime += MoveInterval;

	float Alpha = FMath::Clamp(ElapsedTime / MoveTime, 0.0f, 1.0f); // 보간 계수
	FVector NewLocation = FMath::Lerp(StartLocation, EndLocation, Alpha); // 보간된 위치

	// 게이트 이동
	for (auto Gate : Gates)
	{
		(Gate.Value)->SetRelativeLocation(NewLocation);
	}

	// 이동이 완료되면 타이머 중지
	if (Alpha >= 1.0f)
	{
		GetWorldTimerManager().ClearTimer(TimerHandle_GateMove);
	}
}

void AABStageGimmick::SetState(EStageState InNewState)
{
	CurrentState = InNewState;

	if(StateChangeActions.Contains(InNewState))
	{
		StateChangeActions[CurrentState].StageDelegate.ExecuteIfBound();
	}
}

void AABStageGimmick::SetReady()
{
	StageTrigger->SetCollisionProfileName(CPROFILE_ABTRIGGER);
	for(auto GateTrigger : GateTriggers)
	{
		GateTrigger->SetCollisionProfileName(TEXT("NoCollision"));
	}
	OpenAllGates();
}

void AABStageGimmick::SetFight()
{
	StageTrigger->SetCollisionProfileName(TEXT("NoCollision"));
	for(auto GateTrigger : GateTriggers)
	{
		GateTrigger->SetCollisionProfileName(TEXT("NoCollision"));
	}
	CloseAllGates();
	
	GetWorld()->GetTimerManager().SetTimer(OpponentTimerHandle, this, &AABStageGimmick::OnOpponentSpawn, OpponentSpawnTime, false);
}

void AABStageGimmick::SetChooseReward()
{
	StageTrigger->SetCollisionProfileName(TEXT("NoCollision"));
	for(auto GateTrigger : GateTriggers)
	{
		GateTrigger->SetCollisionProfileName(TEXT("NoCollision"));
	}
	
	CloseAllGates();
	SpawnRewardBoxes();
}

void AABStageGimmick::SetChooseNext()
{
	StageTrigger->SetCollisionProfileName(TEXT("NoCollision"));
	for(auto GateTrigger : GateTriggers)
	{
		GateTrigger->SetCollisionProfileName(CPROFILE_ABTRIGGER);
	}
	OpenAllGates();
}

void AABStageGimmick::OnOpponentDestroyed(AActor* DestroyedActor)
{
	IABGameInterface* ABGameMode = Cast<IABGameInterface>(GetWorld()->GetAuthGameMode());
	if(ABGameMode)
	{
		ABGameMode->OnPlayerScoreChanged(CurrentStageNum);
		if(ABGameMode->IsGameCleared())
		{
			return;
		}
	}
	SetState(EStageState::REWARD);
}

void AABStageGimmick::OnOpponentSpawn()
{
	//캐릭터 스폰 위치 설정
	const FTransform SpawnTransform((GetActorLocation() + FVector::UpVector * 88.0f)) ;
	//UE_LOG(LogTemp,Log,TEXT("%f, %f, %f"),SpawnTransform.GetLocation().X, SpawnTransform.GetLocation().Y,SpawnTransform.GetLocation().Z);
	AABCharacterBaseNonPlayer* ABOpponentCharacter = GetWorld()->SpawnActorDeferred<AABCharacterBaseNonPlayer>(OpponentClass,SpawnTransform );
	if(ABOpponentCharacter)
	{
		ABOpponentCharacter->OnDestroyed.AddDynamic(this, &AABStageGimmick::OnOpponentDestroyed);
		ABOpponentCharacter->SetLevel(CurrentStageNum);
		ABOpponentCharacter->FinishSpawning(SpawnTransform);
	}
}

void AABStageGimmick::OnRewardTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepHitResult)
{
	for(const auto& RewardBox : RewardBoxes)
	{
		if(RewardBox.IsValid())
		{
			AABItemBox* ValidItemBox = RewardBox.Get();
			AActor* OverlappedBox = OverlappedComponent->GetOwner();
			if(OverlappedBox != ValidItemBox)
			{
				ValidItemBox->Destroy();
			}
		}
	}
	SetState(EStageState::NEXT);
}

void AABStageGimmick::SpawnRewardBoxes()
{
	for(const auto& RewardBoxLocation : RewardBoxLocations)
	{
		FTransform SpawnTransform(GetActorLocation() + RewardBoxLocation.Value + FVector(0.0f,0.0f,30.0f));
		AABItemBox* RewardBoxActor = GetWorld()->SpawnActorDeferred<AABItemBox>(RewardBoxClass, SpawnTransform);
		if(RewardBoxActor)
		{
			RewardBoxActor->Tags.Add(RewardBoxLocation.Key);
			RewardBoxActor->GetTrigger()->OnComponentBeginOverlap.AddDynamic(this, &AABStageGimmick::OnRewardTriggerBeginOverlap);
			RewardBoxes.Add(RewardBoxActor);
		}
	}

	for(const auto& RewardBox : RewardBoxes)
	{
		if(RewardBox.IsValid())
		{
			RewardBox.Get()->FinishSpawning(RewardBox.Get()->GetActorTransform());
		}
	}
}

