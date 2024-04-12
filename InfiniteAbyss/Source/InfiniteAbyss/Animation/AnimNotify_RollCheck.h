// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_RollCheck.generated.h"

/**
 * 
 */
UCLASS()
class INFINITEABYSS_API UAnimNotify_RollCheck : public UAnimNotify
{
	GENERATED_BODY()
public:
	UAnimNotify_RollCheck();

protected:
	void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) override;
	
};
