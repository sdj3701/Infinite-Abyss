// Fill out your copyright notice in the Description page of Project Settings.


#include "Gimmick/MapChangeController.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Physics/ABCollision.h"
#include "Character/ABCharacterBase.h"


// Sets default values
AMapChangeController::AMapChangeController()
{
	bIsOverlapping = false;
	
	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Trigger"));
	RootComponent = TriggerBox;

	TriggerBox->SetBoxExtent(FVector(300.0f,300.0f,300.0f));
	TriggerBox->SetCollisionProfileName(CPROFILE_ABTRIGGER);
	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &AMapChangeController::OnStageTriggerBeginOverlap );
}

void AMapChangeController::OnStageTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepHitResult)
{
	APawn* Pawn = Cast<APawn>(OtherActor);
	if(Pawn)
	{
		UGameplayStatics::OpenLevel(this, *TransferLevelName);
		bIsOverlapping = true;
		if(OtherActor->IsA<AABCharacterBase>())
		{
			AABCharacterBase* Interaction = Cast<AABCharacterBase>(OtherActor);
			if(!Interaction->IsInteraction())
				Interaction->OnPlayerInteractionChanged(bIsOverlapping);
		}
	}
}



