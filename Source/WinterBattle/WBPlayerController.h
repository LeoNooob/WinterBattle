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
	bool IsChangeRotation = false;
	void ChangeRotation();
	void StopChangeRotation();
	
	virtual void SetupInputComponent() override;
	virtual void Tick(float DeltaSeconds) override;
	
};
