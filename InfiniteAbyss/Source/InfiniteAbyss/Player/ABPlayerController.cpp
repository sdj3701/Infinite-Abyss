// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/ABPlayerController.h"
#include "UI/ABHUDWidget.h"
#include "UI/NPCTalkWidget.h"

AABPlayerController::AABPlayerController()
{
	static ConstructorHelpers::FClassFinder<UABHUDWidget> ABHUDWidgetRef(TEXT("/Game/InfiniteAbyss/UI/WBP_ABHUD.WBP_ABHUD_C"));
	if(ABHUDWidgetRef.Class)
	{
		ABHUDWidgetClass = ABHUDWidgetRef.Class;
	}
}

void AABPlayerController::GameScoreChanged(int32 NewScore)
{
	K2_OnScoreChange(NewScore);
}

void AABPlayerController::GameClear()
{
	K2_OnGameClear();
}

void AABPlayerController::GameOver()
{
	K2_OnGameOver();
}

void AABPlayerController::MouseCursorOn()
{
	int32 ScreenWidth = GEngine->GameViewport->Viewport->GetSizeXY().X;
	int32 ScreenHeight = GEngine->GameViewport->Viewport->GetSizeXY().Y;
	FVector2D ScreenCenter(ScreenWidth * 0.5f, ScreenHeight * 0.5f);
	SetMouseLocation(ScreenCenter.X, ScreenCenter.Y);

	FInputModeGameAndUI GameAndUIInputMode;
	GameAndUIInputMode.SetLockMouseToViewportBehavior(EMouseLockMode::LockInFullscreen);
	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	PlayerController->bShowMouseCursor = true;
	SetInputMode(GameAndUIInputMode);
}

void AABPlayerController::MouseCursorOff()
{
	FInputModeGameOnly GameOnlyInputMode;
	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	PlayerController->bShowMouseCursor = false;
	SetInputMode(GameOnlyInputMode);
}

void AABPlayerController::BeginPlay()
{
	Super::BeginPlay();

	FInputModeGameOnly GameOnlyInputMode;
	SetInputMode(GameOnlyInputMode);

	ABHUDWidget = CreateWidget<UABHUDWidget>(this, ABHUDWidgetClass);
	if(ABHUDWidget)
	{
		ABHUDWidget->AddToViewport();
	}
}
