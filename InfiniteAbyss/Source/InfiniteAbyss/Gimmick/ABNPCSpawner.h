// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ABNPCSpawner.generated.h"

UCLASS()
class INFINITEABYSS_API AABNPCSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	AABNPCSpawner();

protected:
	//Spawn Section
	UPROPERTY(VisibleAnywhere, Category = Spawn ,Meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UBoxComponent> SpawnTrigger;
	
	UFUNCTION()
    void OnStageTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepHitResult);

	UPROPERTY(EditAnywhere, Category = Fight, Meta = (AllowPrivateAccess ="true"))
	TSubclassOf<class AABCharacterBaseNonPlayer> OpponentClass;
	
	//Item Section
	UFUNCTION()
	void OnOpponentDestroyed(AActor* DestroyedActor);

	void SpawnRewardBoxes(AActor* DestroyedActor);

	UPROPERTY(VisibleAnywhere, Category = Reward, Meta = (AllowPrivateAccess = "true"))
	TSubclassOf<class AABItemBox> RewardBoxClass;
	
	UPROPERTY(VisibleAnywhere, Category = Reward, Meta = (AllowPrivateAccess = "true"))
	TArray<TWeakObjectPtr<class AABItemBox>> RewardBoxes;
};
