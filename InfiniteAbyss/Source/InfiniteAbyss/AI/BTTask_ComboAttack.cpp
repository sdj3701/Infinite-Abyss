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
	// TODO : 스킬 쿨타임 갱신 코드 추가
	UE_LOG(LogTemp, Log, TEXT("Check : %f"), BossAIPawn->GetAICoolTime());
	if(BossAIPawn->GetAICoolTime() <= 0)
	{
		UE_LOG(LogTemp, Log, TEXT("Test"));
		BossAIPawn->ComboAttackByAI();
		BossAIPawn->SetAICoolTime(BossAIPawn->ComboAttackCoolTime());
		UE_LOG(LogTemp, Log, TEXT("Check : %f"), BossAIPawn->GetAICoolTime());
	}
	
	return EBTNodeResult::Succeeded;
}
