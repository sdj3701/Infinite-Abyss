// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/ABCharacterPlayer.h"
#include "ABCharacterControlData.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "InputMappingContext.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "UI/ABHUDWidget.h"
#include "CharacterStat/ABCharacterStatComponent.h"
#include "Interface/ABGameInterface.h"
#include "Game/ABGameMode.h"
#include "Player/ABPlayerController.h"
#include "UI/NPCTalkWidget.h"

AABCharacterPlayer::AABCharacterPlayer()
{
	//Camera
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f;
	CameraBoom->bUsePawnControlRotation = true;

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;

	//Input
	static ConstructorHelpers::FObjectFinder<UInputAction> InputActionJumpRef(TEXT("/Script/EnhancedInput.InputAction'/Game/InfiniteAbyss/Input/Actions/IA_Jump.IA_Jump'"));
	if (nullptr != InputActionJumpRef.Object)
	{
		JumpAction = InputActionJumpRef.Object;
	}
	
	static ConstructorHelpers::FObjectFinder<UInputAction> InputChangeActionControlRef(TEXT("/Script/EnhancedInput.InputAction'/Game/InfiniteAbyss/Input/Actions/IA_ChangeControl.IA_ChangeControl'"));
	if (nullptr != InputChangeActionControlRef.Object)
	{
		ChangeControlAction = InputChangeActionControlRef.Object;
	}

	static ConstructorHelpers::FObjectFinder<UInputAction> InputActionShoulderMoveRef(TEXT("/Script/EnhancedInput.InputAction'/Game/InfiniteAbyss/Input/Actions/IA_ShoulderMove.IA_ShoulderMove'"));
	if (nullptr != InputActionShoulderMoveRef.Object)
	{
		ShoulderMoveAction = InputActionShoulderMoveRef.Object;
	}

	static ConstructorHelpers::FObjectFinder<UInputAction> InputActionShoulderLookRef(TEXT("/Script/EnhancedInput.InputAction'/Game/InfiniteAbyss/Input/Actions/IA_ShoulderLook.IA_ShoulderLook'"));
	if (nullptr != InputActionShoulderLookRef.Object)
	{
		ShoulderLookAction = InputActionShoulderLookRef.Object;
	}

	static ConstructorHelpers::FObjectFinder<UInputAction> InputActionAttackRef(TEXT("/Script/EnhancedInput.InputAction'/Game/InfiniteAbyss/Input/Actions/IA_Attack.IA_Attack'"));
	if (nullptr != InputActionAttackRef.Object)
	{
		AttackAction = InputActionAttackRef.Object;
	}

	static ConstructorHelpers::FObjectFinder<UInputAction> InputActionInteractionRef(TEXT("/Script/EnhancedInput.InputAction'/Game/InfiniteAbyss/Input/Actions/IA_Interaction.IA_Interaction'"));
	if(nullptr != InputActionInteractionRef.Object)
	{
		InteractionAction = InputActionInteractionRef.Object;
	}

	static ConstructorHelpers::FObjectFinder<UInputAction> InputActionRollRef(TEXT("/Script/EnhancedInput.InputAction'/Game/InfiniteAbyss/Input/Actions/IA_Roll.IA_Roll'"));
	if(nullptr != InputActionRollRef.Object)
	{
		RollAction = InputActionRollRef.Object;
	}

	// Roll Animation
	static ConstructorHelpers::FObjectFinder<UAnimMontage> RollMontageRef(TEXT("/Script/Engine.AnimMontage'/Game/ExternAssets/FemaleMilitaryOfficer/Animations/AM_Roll.AM_Roll'"));
	if(RollMontageRef.Object)
	{
		RollActionMontage = RollMontageRef.Object;
	}
	
	CurrentCharacterControlType = ECharacterControlType::Shoulder;
	CurrentInteractionType = EInteractionType::Default;
}

void AABCharacterPlayer::BeginPlay()
{
	Super::BeginPlay();

	APlayerController* PlayerController = Cast<APlayerController>(GetController());
	if(PlayerController)
	{
		EnableInput(PlayerController);
	}
	
	SetCharacterControl(CurrentCharacterControlType);
	SetInteractionType(CurrentInteractionType);
}

void AABCharacterPlayer::SetDead()
{
	Super::SetDead();

	APlayerController* PlayerController = Cast<APlayerController>(GetController());
	if(PlayerController)
	{
		DisableInput(PlayerController);

		IABGameInterface* ABGameMode = Cast<IABGameInterface>(GetWorld()->GetAuthGameMode());
		if(ABGameMode)
		{
			ABGameMode->OnPlayerDead();
		}
	}
}

void AABCharacterPlayer::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent);

	EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &ACharacter::Jump);
	EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);
	EnhancedInputComponent->BindAction(ChangeControlAction, ETriggerEvent::Triggered, this, &AABCharacterPlayer::ChangeCharacterControl);
	EnhancedInputComponent->BindAction(ShoulderMoveAction, ETriggerEvent::Triggered, this, &AABCharacterPlayer::ShoulderMove);
	EnhancedInputComponent->BindAction(ShoulderLookAction, ETriggerEvent::Triggered, this, &AABCharacterPlayer::ShoulderLook);
	EnhancedInputComponent->BindAction(AttackAction, ETriggerEvent::Triggered, this, &AABCharacterPlayer::Attack);
	//G key input Code
	EnhancedInputComponent->BindAction(InteractionAction, ETriggerEvent::Triggered, this, &AABCharacterPlayer::ChangeInteractionType);
	EnhancedInputComponent->BindAction(RollAction, ETriggerEvent::Triggered, this, &AABCharacterPlayer::PlayRoll);
}

void AABCharacterPlayer::ChangeCharacterControl()
{
	if(CurrentCharacterControlType == ECharacterControlType::Quater)
	{
		SetCharacterControl(ECharacterControlType::Shoulder);
	}
	else if(CurrentCharacterControlType == ECharacterControlType::Shoulder)
	{
		SetCharacterControl(ECharacterControlType::Quater);
	}
}

void AABCharacterPlayer::SetCharacterControl(ECharacterControlType NewCharacterControlType)
{
	UABCharacterControlData* NewCharacterControl = CharacterControlManager[NewCharacterControlType];
	check(NewCharacterControl);
	
	APlayerController* PlayerController = CastChecked<APlayerController>(GetController());
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
	{
		Subsystem->ClearAllMappings();
		UInputMappingContext* NewMappingContext = NewCharacterControl->InputMappingContext;
		if(NewMappingContext)
		{
			Subsystem->AddMappingContext(NewMappingContext,0);
		}
	}
	CurrentCharacterControlType = NewCharacterControlType;
}

void AABCharacterPlayer::SetCharacterControlData(const UABCharacterControlData* CharacterControlData)
{
	Super::SetCharacterControlData(CharacterControlData);

	CameraBoom->TargetArmLength = CharacterControlData->TargetArmLength;
	CameraBoom->SetRelativeRotation(CharacterControlData->RelativeRotation);
	CameraBoom->bUsePawnControlRotation = CharacterControlData->bUsePawnControlRotation;
	CameraBoom->bInheritPitch = CharacterControlData->bInheritPitch;
	CameraBoom->bInheritYaw = CharacterControlData->bInheritYaw;
	CameraBoom->bInheritRoll = CharacterControlData->bInheritRoll;
	CameraBoom->bDoCollisionTest = CharacterControlData->bDoCollisionTest;
}

void AABCharacterPlayer::ChangeInteractionType()
{
	if(CurrentInteractionType == EInteractionType::Default && IsInteraction() == true)
	{
		SetInteractionType(EInteractionType::Talking);
	}
	else if(CurrentInteractionType == EInteractionType::Talking && IsInteraction() == false)
	{
		SetInteractionType(EInteractionType::Default);
	}
}

void AABCharacterPlayer::SetInteractionType(EInteractionType NewInteractionType)
{
	CurrentInteractionType = NewInteractionType;
	if(CurrentInteractionType == EInteractionType::Talking )
	{
		TalkInteraction();
	}
	else if(CurrentInteractionType == EInteractionType::Default)
	{
		EndTalkInteraction();
	}
}

void AABCharacterPlayer::PlayRoll()
{
	if(!bIsRollCheck)
	{
		UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
		AnimInstance->StopAllMontages(0.0f);
		AnimInstance->Montage_Play(RollActionMontage, 1.0f);
		bIsRollCheck = true;
	}
}

void AABCharacterPlayer::RollEndCheck()
{
	bIsRollCheck = false;
}

void AABCharacterPlayer::ShoulderMove(const FInputActionValue& Value)
{
	FVector2D MovementVector = Value.Get<FVector2D>();

	const FRotator Rotation = Controller->GetControlRotation();
	const FRotator YawRotation(0, Rotation.Yaw, 0);

	const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

	AddMovementInput(ForwardDirection, MovementVector.X);
	AddMovementInput(RightDirection, MovementVector.Y);
}

void AABCharacterPlayer::ShoulderLook(const FInputActionValue& Value)
{
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	AddControllerYawInput(LookAxisVector.X);
	AddControllerPitchInput(LookAxisVector.Y);
}

void AABCharacterPlayer::Attack()
{
	ProcessComboCommand();
}

void AABCharacterPlayer::SetupHUDWidget(UABHUDWidget* InHUDWidget)
{
	if(InHUDWidget)
	{
		InHUDWidget->UpdateStat(Stat->GetBaseStat(),Stat->GetModifierStat());
		InHUDWidget->UpdateHpBar(Stat->GetCurrentHp());

		Stat->OnStatChanged.AddUObject(InHUDWidget, &UABHUDWidget::UpdateStat);
		Stat->OnHpChanged.AddUObject(InHUDWidget, &UABHUDWidget::UpdateHpBar);
	}
}

void AABCharacterPlayer::SetupTalkWidget(UNPCTalkWidget* InNPCTaleWidget)
{
	if(InNPCTaleWidget)
	{
		SetInteractionType(EInteractionType::Default);
	}
}

void AABCharacterPlayer::TalkInteraction()
{
	//TODO : UI를 구현해야함 Widget Blueprint를 생성한다음 관리를 하는게 좋음 텍스트는 액셀이나 TEXT파일로 관리해서 불러와서 글자 하나씩 출력
	
	DialogueBoxWidget->AddToViewport();
	MouseOn();
}

void AABCharacterPlayer::EndTalkInteraction()
{
	DialogueBoxWidget->RemoveFromParent();
	MouseOff();
}

void AABCharacterPlayer::MouseOn()
{
	APlayerController* PlayerController = Cast<APlayerController>(GetController());
	if(PlayerController)
	{
		AABPlayerController* ABPlayerController = Cast<AABPlayerController>(PlayerController);
		if(ABPlayerController)
		{
			ABPlayerController->MouseCursorOn();
		}
	}
}

void AABCharacterPlayer::MouseOff()
{
	APlayerController* PlayerController = Cast<APlayerController>(GetController());
	if(PlayerController)
	{
		AABPlayerController* ABPlayerController = Cast<AABPlayerController>(PlayerController);
		if(ABPlayerController)
		{
			ABPlayerController->MouseCursorOff();
		}
	}
}
