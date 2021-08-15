// Fill out your copyright notice in the Description page of Project Settings.

#include "Character_Chat.h"
#include "Kismet/GameplayStatics.h"
#include "NetGame/GameMode/HUD/HUDBase.h"
#include "NetGame/Player/Controller/PlayerControllerBase.h"


void ACharacter_Chat::ChatWindow()
{
	if (APlayerControllerBase* PC = Cast<APlayerControllerBase>(GetWorld()->GetFirstPlayerController()))
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
					HUD->GetChatWindow()->RemoveFromViewport();
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