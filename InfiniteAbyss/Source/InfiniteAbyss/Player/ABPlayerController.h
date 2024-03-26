// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ABPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class INFINITEABYSS_API AABPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	AABPlayerController();
	
protected:
	virtual void BeginPlay() override;

	//HUD Section
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HUD)
	TSubclassOf<class UABHUDWidget> ABHUDWidgetClass;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = HUD)
	TObjectPtr<class UABHUDWidget> ABHUDWidget;

};
