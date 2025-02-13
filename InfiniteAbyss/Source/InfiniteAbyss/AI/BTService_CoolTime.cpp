// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/BTService_CoolTime.h"
#include "ABAI.h"
#include "AIController.h"
#include "Interface/ABCharacterBossAIInterface.h"
#include "BehaviorTree//BlackboardComponent.h"
#include "Physics/ABCollision.h"
#include "DrawDebugHelpers.h"
#include "WorldPartition/ContentBundle/ContentBundleLog.h"


UBTService_CoolTime::UBTService_CoolTime()
{
	NodeName = TEXT("CoolTime");
	Interval = 0.5f;
	DetectCoolTime = 5.0f;
}

void UBTService_CoolTime::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	APawn* ControllingPawn = OwnerComp.GetAIOwner()->GetPawn();
	if(nullptr == ControllingPawn)
	{
		return;
	}

	UWorld* World = ControllingPawn->GetWorld();
	if(nullptr == World)
	{
		return;
	}

	IABCharacterBossAIInterface* BossAIPawn = Cast<IABCharacterBossAIInterface>(ControllingPawn);
	if(nullptr == BossAIPawn)
	{
		return;
	}

	DetectCoolTime = BossAIPawn->GetAICoolTime();
	UE_LOG(LogTemp, Log, TEXT("%f"),DetectCoolTime);

	if(DetectCoolTime <= 0)
	{
		BossAIPawn->SetAICoolTime(DetectCoolTime);
		OwnerComp.GetBlackboardComponent()->SetValueAsBool("SkillCheck", true);
		//DetectCoolTime = AIPawn->ComboAttackCoolTime();
	}
	else
	{
		DetectCoolTime -= Interval;
		BossAIPawn->SetAICoolTime(DetectCoolTime);
		OwnerComp.GetBlackboardComponent()->SetValueAsBool("SkillCheck", false);
	}

}
