// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "WBPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class WINTERBATTLE_API AWBPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	// Default is false that means character did not rotate
	bool IsChangeRotation = false;
	// Function that change IsChangeRotation to true.
	void ChangeRotation();
	// Function that change IsChangeRotation to false.
	void StopChangeRotation();
	// Override the SetupInputComponent() function in PlayerController.h
	virtual void SetupInputComponent() override;
	// Override the Tick(float DeltaSeconds) function in PlayerController.h
	virtual void Tick(float DeltaSeconds) override;

	
};
