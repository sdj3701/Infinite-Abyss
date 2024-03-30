// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ABInteractionInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UABInteractionInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class INFINITEABYSS_API IABInteractionInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void OnPlayerInteractionChanged(bool InInteraction) = 0;
    virtual bool IsInteraction() = 0;
};
