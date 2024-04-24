// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_ComboAttack.generated.h"

/**
 * 
 */
UCLASS()
class INFINITEABYSS_API UBTTask_ComboAttack : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UBTTask_ComboAttack();
	
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
};
