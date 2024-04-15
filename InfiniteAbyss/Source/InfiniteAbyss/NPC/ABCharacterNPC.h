// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Character/ABCharacterBase.h"
#include "Interface/ABCharacterNPCInterface.h"
#include "ABCharacterNPC.generated.h"

UCLASS()
class INFINITEABYSS_API AABCharacterNPC : public AABCharacterBase, public IABCharacterNPCInterface
{
    GENERATED_BODY()

public:
    AABCharacterNPC();

protected:
    UPROPERTY(VisibleAnywhere, Category = NPC, Meta = (AllowPrivateAccess = "true"))
    TObjectPtr<class UStaticMeshComponent> NPC;

    UPROPERTY(VisibleAnywhere, Category = NPC, Meta = (AllowPrivateAccess = "true"))
    TObjectPtr<class UBoxComponent> NPCTrigger;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Collision")
    bool bIsOverlapping;

    virtual AActor* GetNPCActor() const override
    {
        return const_cast<AABCharacterNPC*>(this);
    }
    
    UFUNCTION()
    void OnBoxTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepHitResult);

    UFUNCTION()
    void OnBoxTriggerEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

};