// Fill out your copyright notice in the Description page of Project Settings.


#include "NetGameStateBase.h"

#include "Components/EditableTextBox.h"
#include "NetGame/GameMode/HUD/HUDBase.h"
#include "NetGame/Player/Controller/PlayerControllerBase.h"
#include "Components/ScrollBox.h"
void ANetGameStateBase::Multi_ReceiveMessage_World_Implementation(const FText& Message)
{
	if (APlayerControllerBase* PC = Cast<APlayerControllerBase>(GetWorld()->GetFirstPlayerController()))
	{
		if (AHUDBase* HUD = Cast<AHUDBase>(PC->GetHUD()))
		{
			UTextBlock* MessageText = NewObject<UTextBlock>();
			PC->SetTextColorByChanal(MessageText);
			MessageText->SetText(PC->FormateMessageText(Message));
			HUD->GetChatWindow()->MessageScrollBox->AddChild(MessageText);
			HUD->GetChatWindow()->TextInput->SetText(FText());
			UE_LOG(LogTemp, Log, TEXT("hello%s"));
		}
	}

}

void ANetGameStateBase::Server_ReceiveMessage_World_Implementation(const FText& Message)
{
	Multi_ReceiveMessage_World(Message);
}

bool ANetGameStateBase::Server_ReceiveMessage_World_Validate(const FText& Message)
{
	return true;
}
