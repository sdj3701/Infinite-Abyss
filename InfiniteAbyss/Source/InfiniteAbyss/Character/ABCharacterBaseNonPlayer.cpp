// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/ABCharacterBaseNonPlayer.h"

AABCharacterBaseNonPlayer::AABCharacterBaseNonPlayer()
{
}

void AABCharacterBaseNonPlayer::SetDead()
{
	Super::SetDead();

	FTimerHandle DeadTimerhandle;
	GetWorld()->GetTimerManager().SetTimer(DeadTimerhandle, FTimerDelegate::CreateLambda(
		[&]()
		{
			Destroy();
		}
		), DeadEventDelayTime, false);
}
