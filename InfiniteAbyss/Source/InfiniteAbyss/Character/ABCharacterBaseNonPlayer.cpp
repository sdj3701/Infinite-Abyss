// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/ABCharacterBaseNonPlayer.h"
#include "Engine/AssetManager.h"
#include "AI/ABAIController.h"
#include "CharacterStat/ABCharacterStatComponent.h"

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

float AABCharacterBaseNonPlayer::GetAIPatrolRadius()
{
	return 800.0f;
}

float AABCharacterBaseNonPlayer::GetAIDetectRange()
{
	return 400.0f;
}

float AABCharacterBaseNonPlayer::GetAIAttackRange()
{
	return Stat->GetTotalStat().AttackRange + Stat->GetAttackRadius() * 2;
}

float AABCharacterBaseNonPlayer::GetAITurnSpeed()
{
	return 2.0f;
}

void AABCharacterBaseNonPlayer::SetAIAttackDelegate(const FAICharacterAttackFinished& InOnAttackFinished)
{
	OnAttackFinished = InOnAttackFinished;
}

void AABCharacterBaseNonPlayer::AttackByAI()
{
	ProcessComboCommand();
}

void AABCharacterBaseNonPlayer::NotifyComboActionEnd()
{
	Super::NotifyComboActionEnd();
	OnAttackFinished.ExecuteIfBound();
}
