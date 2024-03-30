// Fill out your copyright notice in the Description page of Project Settings.


#include "NPC/ABCharacterNPC.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/PrimitiveComponent.h"
#include "Physics/ABCollision.h"

// Sets default values
AABCharacterNPC::AABCharacterNPC()
{
    bUseControllerRotationPitch = false;
    bUseControllerRotationYaw = false;
    bUseControllerRotationRoll = false;

    GetCapsuleComponent()->InitCapsuleSize(42.0f, 96.0f);
    GetCapsuleComponent()->SetCollisionProfileName(TEXT("NPC"));

    GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -95.0f), FRotator(0.0f, 0.0f, 0.0f));
    GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);
    GetMesh()->SetCollisionProfileName(TEXT("NPCMesh"));

    static ConstructorHelpers::FObjectFinder<USkeletalMesh> NPCMeshRef(TEXT("/Script/Engine.SkeletalMesh'/Game/ExternAssets/MedievalGirl/Mesh/SK_MedievalGirl.SK_MedievalGirl'"));
    if (NPCMeshRef.Object)
    {
        GetMesh()->SetSkeletalMesh(NPCMeshRef.Object);
    }

    static ConstructorHelpers::FClassFinder<UAnimInstance> AnimInstanceClassRef(TEXT("Game/ExternAssets/MedievalGirl/Demo/Animations/ThirdPerson_AnimBP.ThirdPerson_AnimBP_C"));
    if (AnimInstanceClassRef.Class)
    {
        GetMesh()->SetAnimInstanceClass(AnimInstanceClassRef.Class);
    }

    NPCTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("NPCTrigger"));
    NPCTrigger->SetBoxExtent(FVector(100.0f, 100.0f, 100.0f));
    NPCTrigger->SetRelativeLocation(FVector(0.0f, 0.0f, 50.0f));
    NPCTrigger->SetupAttachment(GetMesh());
    NPCTrigger->SetCollisionProfileName(CPROFILE_ABTRIGGER);
    NPCTrigger->OnComponentBeginOverlap.AddDynamic(this, &AABCharacterNPC::OnBoxTriggerBeginOverlap);

    UE_LOG(LogTemp, Log, TEXT("NPC Trigger event binding: %s"), NPCTrigger->OnComponentBeginOverlap.IsBound() ? TEXT("Success") : TEXT("Failed"));

    bIsOverlapping = false;

}

void AABCharacterNPC::OnBoxTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepHitResult)
{
    UE_LOG(LogTemp, Log, TEXT("%s"), *OtherActor->GetName());
    
    bIsOverlapping = true;
    UE_LOG(LogTemp, Log, TEXT("bIsOverlapping: %s"), bIsOverlapping ? TEXT("true") : TEXT("false"));
}