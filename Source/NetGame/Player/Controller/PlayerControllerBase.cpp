// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerControllerBase.h"

#include "NetGame/GameMode/HUD/HUDBase.h"
#include "Components/EditableTextBox.h"
#include "Components/ScrollBox.h"
#include "NetGame/GameMode/State/NetGameStateBase.h"
#include "NetGame/Player/State/PlayerStateBase.h"
#define LOCTEXT_NAMESPACE "UMG_Chat"

FText APlayerControllerBase::FormateMessageText(const FText& Text)
{
	FText PlayerName, PlayerGroup;
	if (APlayerStateBase* PS = GetPlayerState<APlayerStateBase>())
	{
		PlayerName = FText::FromString(PS->GetPlayerName());
		PlayerGroup = FText::FromString(PS->GetPlayerGroup());
	}
	FText ChanalText = NSLOCTEXT("UMG_Chat","Chanal","World");
	return FText::Format(NSLOCTEXT("UMG_Chat", "World", "[{0}][{1}][{2}]:[{3}]"), ChanalText,PlayerGroup,PlayerName,Text);
}

void APlayerControllerBase::SetTextColorByChanal(UTextBlock* TextBlock)
{
	TextBlock->SetColorAndOpacity(FLinearColor(1,0,0));
}

void APlayerControllerBase::Client_ReceiveMessage_Implementation(const FText& Message)
{
	UE_LOG(LogTemp, Log, TEXT("hello"));
}

void APlayerControllerBase::SendMessage(const FText& Message, EChatChanal Chanal)
{
	if (HasAuthority())
	{
		switch (Chanal)
		{
		default:
		case EChatChanal::ECC_World:
			if (ANetGameStateBase* GS = Cast<ANetGameStateBase>(GetWorld()->GetGameState()))
			{
				GS->Multi_ReceiveMessage_World(Message);
			}
			
			break;
		case EChatChanal::ECC_Group:
			
			break;
		case EChatChanal::ECC_Private:
			break;
		}
	}
	else
	{
		Server_SendMessage(Message, Chanal);
	}
}

void APlayerControllerBase::Server_SendMessage_Implementation(const FText& Message, EChatChanal Chanal)
{
	SendMessage(Message,Chanal);
}

bool APlayerControllerBase::Server_SendMessage_Validate(const FText& Message, EChatChanal Chanal)
{
	return true;
}
#undef LOCTEXT_NAMESPACE
