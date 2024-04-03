// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MapChangeController.generated.h"

UCLASS()
class INFINITEABYSS_API AMapChangeController : public AActor
{
	GENERATED_BODY()
	
public:	
	AMapChangeController();

protected:
	UFUNCTION()
	void OnStageTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepHitResult);

private:
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Meta = (AllowPrivateAccess = "true"))
	FString TransferLevelName;

	UPROPERTY()
	TObjectPtr<class UBoxComponent> TriggerBox;

};
