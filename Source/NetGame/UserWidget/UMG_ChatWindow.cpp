// Fill out your copyright notice in the Description page of Project Settings.


#include "UMG_ChatWindow.h"
#include "Components/EditableTextBox.h"
#include "NetGame/Player/Controller/PlayerControllerBase.h"
#include "Components/ComboBoxString.h"

void UUMG_ChatWindow::NativeConstruct()
{
	Super::NativeConstruct();
	TextInput->OnTextCommitted.AddDynamic(this, &UUMG_ChatWindow::OnTextCommit);
}

void UUMG_ChatWindow::OnTextCommit(const FText& InText, ETextCommit::Type CommitType)
{
	if (CommitType == ETextCommit::OnEnter)
	{
		if (APlayerControllerBase* PC = Cast<APlayerControllerBase>(GetOwningPlayer()))
		{
			PC->SendMessage(InText, GetChanalByOoeration());
		}
	}
}

EChatChanal UUMG_ChatWindow::GetChanalByOoeration()
{
	switch (MessageChanal->GetSelectedIndex())
	{
		default:
		case 0:
			return EChatChanal::ECC_World;
		case 1:
			return EChatChanal::ECC_Group;
		case 2:
			return EChatChanal::ECC_Private;
	}
}
