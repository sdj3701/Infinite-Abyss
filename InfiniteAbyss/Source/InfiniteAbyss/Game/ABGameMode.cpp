// Fill out your copyright notice in the Description page of Project Settings.


#include "Game/ABGameMode.h"

#include "Player/ABPlayerController.h"

AABGameMode::AABGameMode()
{
	PlayerControllerClass = AABPlayerController::StaticClass();
}
