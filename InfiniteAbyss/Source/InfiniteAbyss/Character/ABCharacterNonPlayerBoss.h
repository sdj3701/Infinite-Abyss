// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Character/ABCharacterBase.h"
#include "Interface/ABCharacterAIInterface.h"
#include "ABCharacterNonPlayerBoss.generated.h"

UCLASS()
class INFINITEABYSS_API AABCharacterNonPlayerBoss : public AABCharacterBase, public IABCharacterAIInterface
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

	FAICharacterAttackFinished OnAttackFinished;
	
	virtual void SetAIAttackDelegate(const FAICharacterAttackFinished& InOnAttackFinished) override;
	virtual void AttackByAI() override;
};
