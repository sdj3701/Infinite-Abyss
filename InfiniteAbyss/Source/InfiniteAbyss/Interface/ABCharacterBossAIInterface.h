// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ABCharacterBossAIInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UABCharacterBossAIInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class INFINITEABYSS_API IABCharacterBossAIInterface
{
	GENERATED_BODY()

public:
	virtual float ComboAttackCoolTime() = 0;
	
	virtual float GetAICoolTime() = 0;
	virtual float SetAICoolTime(float InCoolTime) = 0;
	
	virtual void ComboAttackByAI() = 0;
	virtual void SkillByAI() = 0;
};
