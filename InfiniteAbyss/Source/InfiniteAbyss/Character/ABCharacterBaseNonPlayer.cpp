// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/ABCharacterBaseNonPlayer.h"
#include "Engine/AssetManager.h"
#include "AI/ABAIController.h"

AABCharacterBaseNonPlayer::AABCharacterBaseNonPlayer()
{
	GetMesh()->SetHiddenInGame(true);

	AIControllerClass = AABAIController::StaticClass();
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
}

void AABCharacterBaseNonPlayer::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	ensure(NPCMeshes.Num() > 0);
	int32 RandIndex = FMath::RandRange(0,NPCMeshes.Num() -1 );
	NPCMeshHandle = UAssetManager::Get().GetStreamableManager().RequestAsyncLoad(NPCMeshes[RandIndex], FStreamableDelegate::CreateUObject(this, &AABCharacterBaseNonPlayer::NPCMeshLoadCompleted));
}

void AABCharacterBaseNonPlayer::SetDead()
{
	Super::SetDead();

	FTimerHandle DeadTimerhandle;
	GetWorld()->GetTimerManager().SetTimer(DeadTimerhandle, FTimerDelegate::CreateLambda(
		[&]()
		{
			Destroy();
		}
		), DeadEventDelayTime, false);
}

void AABCharacterBaseNonPlayer::NPCMeshLoadCompleted()
{
	if(NPCMeshHandle.IsValid())
	{
		USkeletalMesh* NPCMesh = Cast<USkeletalMesh>(NPCMeshHandle->GetLoadedAsset());
		if(NPCMesh)
		{
			GetMesh()->SetSkeletalMesh(NPCMesh);
			GetMesh()->SetHiddenInGame(false);
		}
	}
	NPCMeshHandle->ReleaseHandle();
}
