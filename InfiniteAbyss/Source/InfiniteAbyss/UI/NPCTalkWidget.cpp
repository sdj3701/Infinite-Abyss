// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/NPCTalkWidget.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Interface/ABCharacterWidgetInterface.h"
#include "Interface/ABCharacterHUDInterface.h"


UNPCTalkWidget::UNPCTalkWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	QuestText = "This game has many quests. My character completed 5 daily quests We are on a quest exploring the dungeon and defeating the boss.";
}

void UNPCTalkWidget::NativeConstruct()
{
	Super::NativeConstruct();
	//UI 기능 초기화
	UITextBlock = Cast<UTextBlock>(GetWidgetFromName(TEXT("TextBox")));
	ensure(UITextBlock);
	
	IABCharacterWidgetInterface* CharacterWidget = Cast<IABCharacterWidgetInterface>(OwningActor);
	if(CharacterWidget)
	{
		CharacterWidget->SetupCharacterWidget(this);
	}

	AcceptButton= Cast<UButton>(GetWidgetFromName(TEXT("AcceptButton")));
	if(AcceptButton)
	{
		AcceptButton->OnClicked.AddDynamic(this, &UNPCTalkWidget::OnButtonClick);
	}
	
}

void UNPCTalkWidget::UpdateTextBlock(FString NewQuestText)
{
	ensure(QuestText!="");
	if(UITextBlock)
	{
		UITextBlock->SetText(FText::FromString(NewQuestText));
	}
}

void UNPCTalkWidget::OnButtonClick()
{
	//TODO : 눌렀으니까 퀘스트 창이 닫히기 
	UE_LOG(LogTemp, Log, TEXT("Button on Click"));
	IABCharacterHUDInterface* HUDPawn = Cast<IABCharacterHUDInterface>(GetOwningPlayerPawn());
	if(HUDPawn)
	{
		HUDPawn->SetupTalkWidget(this);
	}
}
