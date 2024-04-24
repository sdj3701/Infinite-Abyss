// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/BTDecorator_CoolTimeCheck.h"
#include "ABAI.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Interface/ABCharacterBossAIInterface.h"

UBTDecorator_CoolTimeCheck::UBTDecorator_CoolTimeCheck()
{
	NodeName = TEXT("CoolTimeCheck");
}

bool UBTDecorator_CoolTimeCheck::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	bool bResult = Super::CalculateRawConditionValue(OwnerComp, NodeMemory);

	APawn* ControllingPawn = OwnerComp.GetAIOwner()->GetPawn();
	if(nullptr == ControllingPawn)
	{
		return false;
	}

	IABCharacterBossAIInterface* AIPawn	= Cast<IABCharacterBossAIInterface>(ControllingPawn);
	if(nullptr == AIPawn)
	{
		return false;
	}

	APawn* Target = Cast<APawn>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(BBKEY_TARGET));
	if(nullptr == Target)
	{
		return false;
	}

	float AttackRangeWithRadius = AIPawn->GetAICoolTime();
	bResult = (0 >= AttackRangeWithRadius);
	
	return bResult;
}
