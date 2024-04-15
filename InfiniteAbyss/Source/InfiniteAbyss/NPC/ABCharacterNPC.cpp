// Fill out your copyright notice in the Description page of Project Settings.


#include "NPC/ABCharacterNPC.h"
#include "Character/ABCharacterBase.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/PrimitiveComponent.h"
#include "Physics/ABCollision.h"
#include "Character/ABCharacterPlayer.h"

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

    static ConstructorHelpers::FClassFinder<UAnimInstance> AnimInstanceClassRef(TEXT("/Game/ExternAssets/MedievalGirl/Demo/Animations/ABP_NPCCharacter.ABP_NPCCharacter_C"));
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
    NPCTrigger->OnComponentEndOverlap.AddDynamic(this, &AABCharacterNPC::OnBoxTriggerEndOverlap);

    bIsOverlapping = false;
    
}

void AABCharacterNPC::OnBoxTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
                                               UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepHitResult)
{
    bIsOverlapping = true;
    
    FVector LookVector = OtherActor->GetActorLocation() - this->GetActorLocation();
    LookVector.Z = 0.0f;
    FRotator TargetRot = LookVector.Rotation();
    TargetRot.Yaw -= 90.0f;
    TargetRot.Yaw = FMath::FindDeltaAngleDegrees(0.0f, TargetRot.Yaw);
    this->SetActorRotation(TargetRot);

    if(OtherActor->IsA<AABCharacterBase>())
    {
        AABCharacterBase* Interaction = Cast<AABCharacterBase>(OtherActor);
        if(!Interaction->IsInteraction())
            Interaction->OnPlayerInteractionChanged(bIsOverlapping);
    }
}

void AABCharacterNPC::OnBoxTriggerEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
    bIsOverlapping = false;
    AABCharacterPlayer* Player = Cast<AABCharacterPlayer>(OtherActor);
    if(Player)
    {
        if(OtherActor->IsA<AABCharacterBase>())
        {
            AABCharacterBase* Interaction = Cast<AABCharacterBase>(OtherActor);
            if(Interaction->IsInteraction())
                Interaction->OnPlayerInteractionChanged(bIsOverlapping);
        }
    }
}
