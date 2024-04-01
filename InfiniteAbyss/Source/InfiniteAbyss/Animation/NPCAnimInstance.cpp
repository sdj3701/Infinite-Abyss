// Fill out your copyright notice in the Description page of Project Settings.


#include "Animation/NPCAnimInstance.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

UNPCAnimInstance::UNPCAnimInstance()
{
	MovingThreshould = 3.0f;
}

void UNPCAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	Owner = Cast<ACharacter>(GetOwningActor());
	if(Owner)
	{
		Movement = Owner->GetCharacterMovement();
	}
}

void UNPCAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	if(Movement)
	{
		Velocity = Movement->Velocity;
		GroundSpeed = Velocity.Size2D();
		bIsIdle = GroundSpeed  < MovingThreshould;		
	}
}
