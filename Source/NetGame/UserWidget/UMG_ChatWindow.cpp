// Fill out your copyright notice in the Description page of Project Settings.


#include "UMG_ChatWindow.h"
#include "Components/EditableTextBox.h"
#include "Kismet/GameplayStatics.h"
#include "NetGame/Player/Character/Chat/Character_Chat.h"


UUMG_ChatWindow::UUMG_ChatWindow(const FObjectInitializer& ObjectInitializer): Super(ObjectInitializer)
{
}

void UUMG_ChatWindow::NativeConstruct()
{
	TextInput->OnTextCommitted.AddDynamic(this, &UUMG_ChatWindow::OnTextCommit);
	SetOwningPlayer(GetWorld()->GetFirstPlayerController());
}

void UUMG_ChatWindow::OnTextCommit(const FText& InText, ETextCommit::Type CommitType)
{
	if (CommitType == ETextCommit::OnEnter)
	{
		if (ACharacter_Chat* Character_Chat = Cast<
			ACharacter_Chat>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0)))
		{
			Character_Chat->SendMessage(InText);
		}
	}
}
