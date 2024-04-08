// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/NPCWidgetComponent.h"
#include "ABUserWidget.h"
#include "UI/NPCTalkWidget.h"

void UNPCWidgetComponent::InitWidget()
{
	Super::InitWidget();

	UABUserWidget* ABUserWidget = Cast<UABUserWidget>(GetWidget());
	if(ABUserWidget)
	{
		ABUserWidget->SetOwningActor(GetOwner());
		ABUserWidget->SetVisibility(ESlateVisibility::Hidden); 
	}
}
