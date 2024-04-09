// Fill out your copyright notice in the Description page of Project Settings.


#include "Gimmick/ABNPCSpawner.h"

#include "Character/ABCharacterBase.h"
#include "Character/ABCharacterBaseNonPlayer.h"
#include "Character/ABCharacterPlayer.h"
#include "Components/BoxComponent.h"
#include "Interface/ABGameInterface.h"
#include "Physics/ABCollision.h"

AABNPCSpawner::AABNPCSpawner()
{
	SpawnTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("SpawnTrigger"));\
	SpawnTrigger->SetBoxExtent(FVector(300.0f,300.0f,300.0f));
	SpawnTrigger->SetCollisionProfileName(CPROFILE_ABTRIGGER);
	SpawnTrigger->OnComponentBeginOverlap.AddDynamic(this, &AABNPCSpawner::OnStageTriggerBeginOverlap);

	//클래스 동적 생성
	OpponentClass = AABCharacterBaseNonPlayer::StaticClass();
}

void AABNPCSpawner::OnStageTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepHitResult)
{
	AABCharacterPlayer* Player = Cast<AABCharacterPlayer>(OtherActor);
	if(Player)
	{
		const FTransform SpawnTransform(GetActorLocation() + FVector(100,0,0));
		AABCharacterBaseNonPlayer* ABOpponentCharacter = GetWorld()->SpawnActorDeferred<AABCharacterBaseNonPlayer>(OpponentClass, SpawnTransform);
		if(ABOpponentCharacter)
		{
			ABOpponentCharacter->OnDestroyed.AddDynamic(this, &AABNPCSpawner::OnOpponentDestroyed);
			ABOpponentCharacter->SetLevel(0);
			ABOpponentCharacter->FinishSpawning(SpawnTransform);
		}
	}
}

void AABNPCSpawner::OnOpponentDestroyed(AActor* DestroyedActor)
{
	UE_LOG(LogTemp, Log, TEXT("OnOpponentDestroyed"));
}
