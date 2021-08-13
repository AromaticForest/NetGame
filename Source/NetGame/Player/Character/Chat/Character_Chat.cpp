// Fill out your copyright notice in the Description page of Project Settings.


#include "Character_Chat.h"

#include "Components/EditableTextBox.h"
#include "Components/TextBlock.h"
#include "Kismet/GameplayStatics.h"
#include "NetGame/GameMode/HUD/HUDBase.h"
#define LOCTEXT_NAMESPACE "UMG_Chat"

void ACharacter_Chat::ChatWindow()
{
	if (APlayerController* PC = Cast<APlayerController>(GetWorld()->GetFirstPlayerController()))
	{
		if (AHUDBase* HUD = Cast<AHUDBase>(PC->GetHUD()))
		{
			if (!HUD->GetChatWindow())
			{
				HUD->CreateChatWindow();
				HUD->GetChatWindow()->AddToViewport();
			}
			else
			{
				if (HUD->GetChatWindow()->IsInViewport())
				{
					HUD->GetChatWindow()->RemoveFromParent();
				}
				else
				{
					HUD->GetChatWindow()->AddToViewport();
				}
			}
			PC->bShowMouseCursor = HUD->GetChatWindow()->IsInViewport();
		}
	}
}

FText ACharacter_Chat::FormateMessageText(const FText& Intext)
{
	if (APlayerController* PC = Cast<APlayerController>(GetWorld()->GetFirstPlayerController()))
	{
		if (AHUDBase* HUD = Cast<AHUDBase>(PC->GetHUD()))
		{
			FText PlayerName, PlayerGroup;
			///
			///Get PlayerState  On Sever!!!
			/*if (APlayerStateBase* PlayerState =UGameplayStatics::GetPlayerController(GetWorld(),0)->GetPlayerState<APlayerStateBase>())
			{
				PlayerGroup = FText::FromString(PlayerState->GetPlayerGroup());
				PlayerName = FText::FromString(PlayerState->GetPlayerName());
			}*/
			FText Message = FText::Format(
				LOCTEXT("UMG_Chat", "[{0}][{1}] {2}:{3}"),
				FText::FromString(HUD->GetChatWindow()->MessageChanal->GetSelectedOption()), PlayerGroup,
				PlayerName, Intext);
			return Message;
		}
	}
	return Intext;
}

void ACharacter_Chat::SetTextColorByChanal(UTextBlock* MessageText)
{
	if (APlayerController* PC = Cast<APlayerController>(GetWorld()->GetFirstPlayerController()))
	{
		if (AHUDBase* HUD = Cast<AHUDBase>(PC->GetHUD()))
		{
			FSlateColor InColor(FLinearColor(1.0f, 0.0f, 1.0f));
			switch (HUD->GetChatWindow()->MessageChanal->GetSelectedIndex())
			{
			default:
			case 0:
				MessageText->SetColorAndOpacity(FLinearColor(1.0f, 0.0f, 1.0f));
				break;
			case 1: MessageText->SetColorAndOpacity(FLinearColor(0.0f, 1.0f, 1.0f));
				break;
			case 2: MessageText->SetColorAndOpacity(FLinearColor(1.0f, 1.0f, 0.0f));
				break;
			}
		}
	}
}

void ACharacter_Chat::SendMessage(const FText& Message)
{
	if (HasAuthority())
	{
		Multi_SendMessage(Message);
	}
	else
	{
		Sever_SendMessage(Message);
	}
}

void ACharacter_Chat::Sever_SendMessage_Implementation(const FText& Message)
{
	Multi_SendMessage(Message);
}

bool ACharacter_Chat::Sever_SendMessage_Validate(const FText& Message)
{
	return true;
}

void ACharacter_Chat::Multi_SendMessage_Implementation(const FText& Message)
{
	if (APlayerController* PC = Cast<APlayerController>(GetWorld()->GetFirstPlayerController()))
	{
		if (AHUDBase* HUD = Cast<AHUDBase>(PC->GetHUD()))
		{
			UTextBlock* MessageText = NewObject<UTextBlock>();
			SetTextColorByChanal(MessageText);
			MessageText->SetText(FormateMessageText(Message));
			HUD->GetChatWindow()->MessageScrollBox->AddChild(MessageText);
			HUD->GetChatWindow()->TextInput->SetText(FText());
		}
	}
}
#undef LOCTEXT_NAMESPACE
