// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ABCharacterNPC.generated.h"

UCLASS()
class INFINITEABYSS_API AABCharacterNPC : public ACharacter
{
    GENERATED_BODY()

public:
    AABCharacterNPC();

protected:
    UPROPERTY(VisibleAnywhere, Category = NPC, Meta = (AllowPrivateAccess = "true"))
        TObjectPtr<class UStaticMeshComponent> NPC;

    UPROPERTY(VisibleAnywhere, Category = NPC, Meta = (AllowPrivateAccess = "true"))
        TObjectPtr<class UBoxComponent> NPCTrigger;

    UFUNCTION()
        void OnStageTrggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepHitResult);


};