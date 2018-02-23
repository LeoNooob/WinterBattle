// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WBWeapon.h"
#include "InventoryManager.generated.h"

/**
 * 
 */
UCLASS()
class WINTERBATTLE_API UInventoryManager : public UObject
{
	GENERATED_BODY()
		UInventoryManager();
public:
	UPROPERTY(BlueprintReadWrite, Category = "InventoryManager")
		TArray<AWBWeapon*> WeaponList;
	UPROPERTY(BlueprintReadWrite, Category = "InventoryManager")
		AWBWeapon* CurrentWeapon;
	UPROPERTY(BlueprintReadWrite, Category = "InventoryManager")
		INT32 CurrentWeaponIndex = 0;
	
public:
	UFUNCTION(BlueprintCallable, Category = "InventoryManager")
		void AddWeapon(AWBWeapon* w);
	UFUNCTION(BlueprintCallable, Category = "InventoryManager")
		void Fire();
		
};
