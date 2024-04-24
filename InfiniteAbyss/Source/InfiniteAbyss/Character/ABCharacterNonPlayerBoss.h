// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/ABCharacterBase.h"
#include "Engine/StreamableManager.h"
#include "Interface/ABCharacterAIInterface.h"
#include "Interface/ABCharacterBossAIInterface.h"
#include "ABCharacterNonPlayerBoss.generated.h"

UCLASS()
class INFINITEABYSS_API AABCharacterNonPlayerBoss : public AABCharacterBase, public IABCharacterAIInterface , public IABCharacterBossAIInterface
{
	GENERATED_BODY()

public:
	AABCharacterNonPlayerBoss();

protected:
	virtual void SetDead() override;

	//AI section
protected:
	virtual float GetAIPatrolRadius() override;
	virtual float GetAIDetectRange() override;
	virtual float GetAIAttackRange() override;
	virtual float GetAITurnSpeed() override;
	
	virtual void SetAIAttackDelegate(const FAICharacterAttackFinished& InOnAttackFinished) override;
	virtual void AttackByAI() override;
	
	FAICharacterAttackFinished OnAttackFinished;
	
	virtual void NotifyComboActionEnd() override;

	//AI Skill and Combo
protected:
	virtual float GetAICoolTime() override;
	
	virtual void ComboAttackByAI() override;
	virtual void SkillByAI() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Combo, Meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UAnimMontage> BossComboMontage;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Skill, Meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UAnimMontage> SkillActionMontage;
};
