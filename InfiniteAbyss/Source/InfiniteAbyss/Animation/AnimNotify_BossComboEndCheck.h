// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_BossComboEndCheck.generated.h"

/**
 * 
 */
UCLASS()
class INFINITEABYSS_API UAnimNotify_BossComboEndCheck : public UAnimNotify
{
	GENERATED_BODY()
public:
	UAnimNotify_BossComboEndCheck();

protected:
	void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) override;
};
