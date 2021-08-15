// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NetGame/Player/Character/CharacterBase.h"
#include "Character_Chat.generated.h"

/**
 * 
 */
UCLASS()
class NETGAME_API ACharacter_Chat : public ACharacterBase
{
	GENERATED_BODY()
public:
	void ChatWindow();
};
