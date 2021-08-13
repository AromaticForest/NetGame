// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "NetGame/Player/Character/CharacterBase.h"
#include "Character_Chat.generated.h"
class UTextBlock;
/**
 * 
 */
UCLASS()
class NETGAME_API ACharacter_Chat : public ACharacterBase
{
	GENERATED_BODY()
protected:
	virtual void ChatWindow() override;
	FText FormateMessageText(const FText& Intext);
	void SetTextColorByChanal(UTextBlock* MessageText);

	UFUNCTION(Server, Reliable, WithValidation)
	void Sever_SendMessage(const FText& Message);
	UFUNCTION(NetMulticast, Reliable)
	void Multi_SendMessage(const FText& Message);
public:
	void SendMessage(const FText& Message);
};
