// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/BTService_CoolTime.h"
#include "ABAI.h"
#include "AIController.h"
#include "Interface/ABCharacterBossAIInterface.h"
#include "BehaviorTree//BlackboardComponent.h"
#include "Physics/ABCollision.h"
#include "DrawDebugHelpers.h"


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

	FVector Center = ControllingPawn->GetActorLocation();
	UWorld* World = ControllingPawn->GetWorld();
	if(nullptr == World)
	{
		return;
	}

	IABCharacterBossAIInterface* AIPawn = Cast<IABCharacterBossAIInterface>(ControllingPawn);
	if(nullptr == AIPawn)
	{
		return;
	}

	DetectCoolTime -= Interval;
	if(DetectCoolTime <= 0)
	{
		AIPawn->ComboAttackByAI();
		DetectCoolTime = AIPawn->GetAICoolTime();
		OwnerComp.GetBlackboardComponent()->SetValueAsBool("SkillCheck", true);
	}
	else
	{
		OwnerComp.GetBlackboardComponent()->SetValueAsBool("SkillCheck", false);
	}

}
