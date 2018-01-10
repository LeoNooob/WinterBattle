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
	//Super the SetupInputComponent() for adding new operation.
	Super::SetupInputComponent();
	//When mouse button is pressed, character start to change the rotation.
	//when the button is released, character stop to change the rotation.
	InputComponent->BindAction("ChangePlayerRotation", EInputEvent::IE_Pressed, this, &AWBPlayerController::ChangeRotation);
	InputComponent->BindAction("ChangePlayerRotation", EInputEvent::IE_Released, this, &AWBPlayerController::StopChangeRotation);
}

void AWBPlayerController::Tick(float DeltaSeconds)
{
	//Super the Tick() for adding new event.
	Super::Tick(DeltaSeconds);
	//When IsChangeRotation is true, the character will always keep changing rotation.
	if (IsChangeRotation == true)
	{
		//get the location of the mouse click.
		FHitResult HitResult = FHitResult();
		GetHitResultUnderCursor(ECollisionChannel::ECC_WorldStatic, false, HitResult);
		//get vector by compare the location of character with the mouse click.
		FVector HitLocation = HitResult.Location;
		FVector Direction = HitLocation - GetPawn()->GetActorLocation();
		//Since the game is top-down view, only need to keep horizontal coordinates(x and y).
		Direction.Z = 0;
		//Rotate the character according to the vector.
		GetPawn()->SetActorRotation(Direction.Rotation());
	}
}
