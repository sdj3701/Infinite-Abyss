// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_CoolTimeCheck.generated.h"

/**
 * 
 */
UCLASS()
class INFINITEABYSS_API UBTDecorator_CoolTimeCheck : public UBTDecorator
{
	GENERATED_BODY()
public:
	UBTDecorator_CoolTimeCheck();

protected:
	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;
};
