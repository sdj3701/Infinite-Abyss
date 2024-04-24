// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BTService_CoolTime.generated.h"

/**
 * 
 */
UCLASS()
class INFINITEABYSS_API UBTService_CoolTime : public UBTService
{
	GENERATED_BODY()
public:
	UBTService_CoolTime();
	float DetectCoolTime;

protected:
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
};
