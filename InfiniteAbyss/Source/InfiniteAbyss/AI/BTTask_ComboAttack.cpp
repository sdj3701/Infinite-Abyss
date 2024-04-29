// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/BTTask_ComboAttack.h"
#include "AIController.h"
#include "Interface/ABCharacterAIInterface.h"
#include "Interface/ABCharacterBossAIInterface.h"

UBTTask_ComboAttack::UBTTask_ComboAttack()
{
}

EBTNodeResult::Type UBTTask_ComboAttack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	 EBTNodeResult::Type Result = Super::ExecuteTask(OwnerComp, NodeMemory);

	APawn* ControllingPawn = Cast<APawn>(OwnerComp.GetAIOwner()->GetPawn());
	if(nullptr == ControllingPawn)
	{
		return EBTNodeResult::Failed;
	}

	IABCharacterAIInterface* AIPawn = Cast<IABCharacterAIInterface>(ControllingPawn);
	if(nullptr == AIPawn)
	{
		return EBTNodeResult::Failed;
	}
	IABCharacterBossAIInterface* BossAIPawn = Cast<IABCharacterBossAIInterface>(ControllingPawn);
	if(nullptr == BossAIPawn)
	{
		return EBTNodeResult::Failed;
	}

	FAICharacterAttackFinished OnAttackFinished;
	OnAttackFinished.BindLambda(
		[&]()
		{
			FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
		}
	);

	AIPawn->SetAIAttackDelegate(OnAttackFinished);
	if(BossAIPawn->GetAICoolTime() <= 0)
	{
		BossAIPawn->ComboAttackByAI();
		// TODO : 사용과 동시에 쿨타임을 돌리고 싶으면 여기서 작업 OR 콤보 공격이 끝나고 쿨타임을 적용하고 싶으면 ComboEnd에서 작업
		BossAIPawn->SetAICoolTime(BossAIPawn->ComboAttackCoolTime());
	}
	
	return EBTNodeResult::Succeeded;
}
