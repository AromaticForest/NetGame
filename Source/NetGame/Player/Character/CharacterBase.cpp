// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterBase.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PawnMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
// Sets default values
ACharacterBase::ACharacterBase()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>("SpringArmComponent");
	CameraComponent = CreateDefaultSubobject<UCameraComponent>("CameraComponent");
	CameraComponent->SetupAttachment(SpringArmComponent);
	SpringArmComponent->SetupAttachment(RootComponent);
	GetCharacterMovement()->NavAgentProps.bCanCrouch=true;
}

// Called when the game starts or when spawned
void ACharacterBase::BeginPlay()
{
	Super::BeginPlay();
}

void ACharacterBase::BindInput(UInputComponent* PlayerInput)
{
	PlayerInput->BindAxis(TEXT("MoveForward"), this, &ACharacterBase::MoveForeward);
	PlayerInput->BindAxis(TEXT("MoveRight"), this, &ACharacterBase::MoveRight);
	PlayerInput->BindAxis(TEXT("Turn"), this, &ACharacterBase::Turn);
	PlayerInput->BindAxis(TEXT("LookUp"), this, &ACharacterBase::LookUp);
	PlayerInput->BindAction(TEXT("Jump"), IE_Pressed, this, &ACharacterBase::Jump);
	PlayerInput->BindAction(TEXT("Crouch"), IE_Pressed, this, &ACharacterBase::DoCrouch);
	PlayerInput->BindAction(TEXT("Crouch"), IE_Released, this, &ACharacterBase::DoCrouch);
	PlayerInput->BindAction(TEXT("Fire"), IE_Pressed, this, &ACharacterBase::Fire);
	PlayerInput->BindAction(TEXT("Aim"), IE_Pressed, this, &ACharacterBase::Aim);
	PlayerInput->BindAction(TEXT("ChatWindow"), IE_Pressed, this, &ACharacterBase::ChatWindow);
}

void ACharacterBase::MoveForeward(float value)
{
	
	AddMovementInput(GetActorForwardVector(), value);
}

void ACharacterBase::MoveRight(float value)
{
	AddMovementInput(GetActorRightVector(), value);
}

void ACharacterBase::Turn(float value)
{
	AddControllerYawInput(value);
}

void ACharacterBase::LookUp(float value)
{
	AddControllerPitchInput(value);
}

void ACharacterBase::DoJump()
{
	Jump();
}

void ACharacterBase::Fire()
{
	//play Animon montage
	
}

void ACharacterBase::Aim()
{
	//play Animon montage
}

void ACharacterBase::DoCrouch()
{
	if (CanCrouch())
	{
		Crouch();
	}
	else
	{
		UnCrouch();
	}
}

void ACharacterBase::ChatWindow()
{
	UE_LOG(LogTemp,Log, TEXT("Character Base"));
}

// Called every frame
void ACharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ACharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	BindInput(PlayerInputComponent);
}
