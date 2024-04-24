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
		GetMesh()->SetSkeletalMesh(BossRef.Object);
	}

	static ConstructorHelpers::FClassFinder<UAnimInstance> BossAniRef(TEXT("/Game/ExternAssets/Oriental_Sword_AnimSet/demo/Characters/Mannequins/Rigs/ABP_ABBossCharacter.ABP_ABBossCharacter_C"));
	if(BossAniRef.Class)
	{
		GetMesh()->SetAnimInstanceClass(BossAniRef.Class);
	}

	static ConstructorHelpers::FObjectFinder<UAnimMontage> BossComboActionRef(TEXT("/Script/Engine.AnimMontage'/Game/ExternAssets/FemaleMilitaryOfficer/Animations/SwordAnimSet/AM_ABBossCombo.AM_ABBossCombo'"));
	if(BossComboActionRef.Object)
	{
		BossComboMontage = BossComboActionRef.Object;
	}

	AIControllerClass = AABBossAIController::StaticClass();
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
}

void AABCharacterNonPlayerBoss::SetDead()
{
	Super::SetDead();
	
	AABBossAIController* ABBossAIContorller = Cast<AABBossAIController>(GetController());

	if(ABBossAIContorller)
	{
		ABBossAIContorller->StopAI();
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
	return 800.0f;
}

float AABCharacterNonPlayerBoss::GetAIDetectRange()
{
	return 400.0f;
}

float AABCharacterNonPlayerBoss::GetAIAttackRange()
{
	return Stat->GetTotalStat().AttackRange + Stat->GetAttackRadius() * 2;
}

float AABCharacterNonPlayerBoss::GetAITurnSpeed()
{
	return 2.0f;
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

float AABCharacterNonPlayerBoss::GetAICoolTime()
{
	return 5.0f;
}

void AABCharacterNonPlayerBoss::ComboAttackByAI()
{
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	AnimInstance->StopAllMontages(0.0f);
	AnimInstance->Montage_Play(BossComboMontage, 1.0f);
	UE_LOG(LogTemp, Log, TEXT("Combo On"));
}

void AABCharacterNonPlayerBoss::SkillByAI()
{
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	AnimInstance->StopAllMontages(0.0f);
	AnimInstance->Montage_Play(BossComboMontage, 1.0f);
	UE_LOG(LogTemp, Log, TEXT("Skill On"));
}


