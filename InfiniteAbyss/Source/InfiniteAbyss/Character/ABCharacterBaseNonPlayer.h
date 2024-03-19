// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/ABCharacterBase.h"
#include "ABCharacterBaseNonPlayer.generated.h"

/**
 * 
 */
UCLASS()
class INFINITEABYSS_API AABCharacterBaseNonPlayer : public AABCharacterBase
{
	GENERATED_BODY()

public:
	AABCharacterBaseNonPlayer();

protected:
	void  SetDead() override;
};
