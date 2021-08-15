// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/TextBlock.h"
#include "GameFramework/PlayerController.h"
#include "NetGame/NetGame.h"
#include "PlayerControllerBase.generated.h"

/**
 * 
 */
UCLASS()
class NETGAME_API APlayerControllerBase : public APlayerController
{
	GENERATED_BODY()
protected:
	UFUNCTION(Client,Reliable)
	void Client_ReceiveMessage(const FText& Text);
public:
	void SendMessage(const FText& Message, EChatChanal Chanal);
	UFUNCTION(Server,Reliable,WithValidation)
	void Server_SendMessage(const FText& Message, EChatChanal Chanal);
	FText FormateMessageText(const FText& Text);
	void SetTextColorByChanal(UTextBlock* TextBlock);
};
