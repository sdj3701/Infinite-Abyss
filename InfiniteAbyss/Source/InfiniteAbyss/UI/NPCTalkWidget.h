// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "NPCTalkWidget.generated.h"


/**
 * 
 */
UCLASS()
class INFINITEABYSS_API UNPCTalkWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	UNPCTalkWidget(const FObjectInitializer& ObjectInitializer);

protected:
	virtual void NativeConstruct() override;
	
public:
	FORCEINLINE void SetQuestText(FString NewQuestText) { QuestText = NewQuestText;}
	void UpdateTextBlock (FString NewQuestText);

protected:
	//text 컨트롤에 대한 오브젝트 포인터
	UPROPERTY()
	TObjectPtr<class UTextBlock> UITextBlock;

	UPROPERTY()
	FString QuestText;
};
