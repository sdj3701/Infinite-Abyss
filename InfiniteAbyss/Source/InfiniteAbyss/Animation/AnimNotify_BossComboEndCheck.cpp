// Fill out your copyright notice in the Description page of Project Settings.


#include "Animation/AnimNotify_BossComboEndCheck.h"
#include "Interface/ABCharacterBossAIInterface.h"

UAnimNotify_BossComboEndCheck::UAnimNotify_BossComboEndCheck()
{
}

void UAnimNotify_BossComboEndCheck::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,
                                           const FAnimNotifyEventReference& EventReference)
{
	Super::Notify(MeshComp, Animation, EventReference);
	if(MeshComp)
	{
		IABCharacterBossAIInterface* AttackPawn = Cast<IABCharacterBossAIInterface>( MeshComp->GetOwner());
		if(AttackPawn)
		{
			AttackPawn->ComboEndCheck();
		}
	}
}
