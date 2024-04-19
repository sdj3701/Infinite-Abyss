// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "ABBossAIController.generated.h"

/**
 * 
 */
UCLASS()
class INFINITEABYSS_API AABBossAIController : public AAIController
{
	GENERATED_BODY()
	
public:	
	AABBossAIController();
	
	void RunAI();
	void StopAI();

protected:
	//어떤 컨트롤러가 폰에 빙의 해서 조정을 할때 생기는 이벤트
	virtual void OnPossess(APawn* InPawn) override;
	
private:
	UPROPERTY()
	TObjectPtr<class UBlackboardData> BBAsset;

	UPROPERTY()
	TObjectPtr<class UBehaviorTree> BTAsset;
	
};
