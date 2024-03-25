// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/ABCharacterBase.h"
#include "Engine/StreamableManager.h"
#include "ABCharacterBaseNonPlayer.generated.h"

/**
 * 
 */
UCLASS(Config = InfiniteAbyss)
class INFINITEABYSS_API AABCharacterBaseNonPlayer : public AABCharacterBase
{
	GENERATED_BODY()

public:
	AABCharacterBaseNonPlayer();
protected:
	virtual void PostInitializeComponents() override; 
protected:
	void SetDead() override;
	void NPCMeshLoadCompleted();

	UPROPERTY(config)
	TArray<FSoftObjectPath> NPCMeshes;

	TSharedPtr<FStreamableHandle> NPCMeshHandle;
};
