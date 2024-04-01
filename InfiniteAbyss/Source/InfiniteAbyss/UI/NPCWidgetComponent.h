// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "NPCWidgetComponent.generated.h"

/**
 * 
 */
UCLASS()
class INFINITEABYSS_API UNPCWidgetComponent : public UWidgetComponent
{
	GENERATED_BODY()
	
protected:
    virtual void InitWidget() override;
};
