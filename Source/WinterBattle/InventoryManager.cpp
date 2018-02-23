// Fill out your copyright notice in the Description page of Project Settings.

#include "InventoryManager.h"
#include "WinterBattle.h"


UInventoryManager::UInventoryManager() {
}

void UInventoryManager::AddWeapon(AWBWeapon* w)
{
	WeaponList.Add(w);
	if (CurrentWeapon == nullptr)
	{
		CurrentWeapon = w;
	}
}

void UInventoryManager::Fire()
{
}

