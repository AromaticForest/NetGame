// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "NetGame/UserWidget/UMG_ChatWindow.h"

#include "HUDBase.generated.h"

/**
 * 
 */
UCLASS()
class NETGAME_API AHUDBase : public AHUD
{
	GENERATED_BODY()
protected:
	UPROPERTY()
	UUMG_ChatWindow* ChatWindow;
	
public:
	void CreateChatWindow();
	UPROPERTY(EditAnywhere)
	TSubclassOf< UUMG_ChatWindow> ChatWindowsClass;
	UUMG_ChatWindow* GetChatWindow();
};
