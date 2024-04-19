// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/ABCharacterNonPlayerBoss.h"
#include "AI/ABAIController.h"
#include "AI/ABBossAIController.h"
#include "CharacterStat/ABCharacterStatComponent.h"
#include "Character/ABCharacterBase.h"
#include "Components/CapsuleComponent.h"

// Sets default values
AABCharacterNonPlayerBoss::AABCharacterNonPlayerBoss()
{
	//TODO : Mesh
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	GetCapsuleComponent()->InitCapsuleSize(42.0f, 96.0f);
	GetCapsuleComponent()->SetCollisionProfileName(TEXT("NPC"));
	
	GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -95.0f), FRotator(0.0f, 0.0f, 0.0f));
	GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);
	GetMesh()->SetCollisionProfileName(TEXT("BossMesh"));
	
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> BossRef(TEXT("/Script/Engine.SkeletalMesh'/Game/ExternAssets/SwordVFX/Characters/Mannequins/Meshes/SKM_Manny.SKM_Manny'"));
	if(BossRef.Object)
	{
		UE_LOG(LogTemp, Log , TEXT("YesMEsh"));
		GetMesh()->SetSkeletalMesh(BossRef.Object);
	}

	AIControllerClass = AABBossAIController::StaticClass();
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
}

void AABCharacterNonPlayerBoss::SetDead()
{
	Super::SetDead();
	
	AABAIController* ABAIContorller = Cast<AABAIController>(GetController());
	if(ABAIContorller)
	{
		ABAIContorller->StopAI();
	}
	
	FTimerHandle DeadTimerhandle;
	GetWorld()->GetTimerManager().SetTimer(DeadTimerhandle, FTimerDelegate::CreateLambda(
		[&]()
		{
			Destroy();
		}
		), DeadEventDelayTime, false);
}

float AABCharacterNonPlayerBoss::GetAIPatrolRadius()
{
	return 4000.0f;
}

float AABCharacterNonPlayerBoss::GetAIDetectRange()
{
	return 500.0f;
}

float AABCharacterNonPlayerBoss::GetAIAttackRange()
{
	return Stat->GetTotalStat().AttackRange + Stat->GetAttackRadius() * 2;
}

float AABCharacterNonPlayerBoss::GetAITurnSpeed()
{
	return 1.0f;
}

void AABCharacterNonPlayerBoss::SetAIAttackDelegate(const FAICharacterAttackFinished& InOnAttackFinished)
{
	OnAttackFinished = InOnAttackFinished;
}

void AABCharacterNonPlayerBoss::AttackByAI()
{
	ProcessComboCommand();
}

void AABCharacterNonPlayerBoss::NotifyComboActionEnd()
{
	Super::NotifyComboActionEnd();
	OnAttackFinished.ExecuteIfBound();
}


