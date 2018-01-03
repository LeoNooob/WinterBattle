// Fill out your copyright notice in the Description page of Project Settings.
#include "WBPlayerController.h"
#include "WinterBattleCharacter.h"

void AWBPlayerController::ChangeRotation()
{
	IsChangeRotation = true;
}

void AWBPlayerController::StopChangeRotation()
{
	IsChangeRotation = false;
}

void AWBPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	InputComponent->BindAction("ChangePlayerRotation", EInputEvent::IE_Pressed, this, &AWBPlayerController::ChangeRotation);
	InputComponent->BindAction("ChangePlayerRotation", EInputEvent::IE_Released, this, &AWBPlayerController::StopChangeRotation);
}

void AWBPlayerController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	if (IsChangeRotation == true)
	{
		FHitResult HitResult = FHitResult();
		GetHitResultUnderCursor(ECollisionChannel::ECC_WorldStatic, false, HitResult);
		FVector HitLocation = HitResult.Location;
		FVector Direction = HitLocation - GetPawn()->GetActorLocation();
		Direction.Z = 0;
		GetPawn()->SetActorRotation(Direction.Rotation());
	}
}
