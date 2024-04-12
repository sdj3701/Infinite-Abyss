// Fill out your copyright notice in the Description page of Project Settings.


#include "Animation/AnimNotify_RollCheck.h"

#include "Interface/ABAnimationRollInterface.h"

UAnimNotify_RollCheck::UAnimNotify_RollCheck()
{
}

void UAnimNotify_RollCheck::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,
                                   const FAnimNotifyEventReference& EventReference)
{
	Super::Notify(MeshComp, Animation, EventReference);
	if(MeshComp)
	{
		IABAnimationRollInterface* AttackPawn = Cast<IABAnimationRollInterface>( MeshComp->GetOwner());
		if(AttackPawn)
		{
			AttackPawn->RollEndCheck();
		}
	}
}
