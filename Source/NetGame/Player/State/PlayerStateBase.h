// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "PlayerStateBase.generated.h"

/**
 * 
 */
UCLASS()
class NETGAME_API APlayerStateBase : public APlayerState
{
	GENERATED_BODY()
protected:
public:
	//Debug On Public 
	UPROPERTY(BlueprintReadWrite)
	FString PlayerName;
	UPROPERTY(BlueprintReadWrite)
	FString PlayerGroup;
	FString GetPlayerName();
	FString GetPlayerGroup();
};
