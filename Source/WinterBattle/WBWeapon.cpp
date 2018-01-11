// Fill out your copyright notice in the Description page of Project Settings.

#include "WBWeapon.h"



// Sets default values
AWBWeapon::AWBWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// Set WeaponMesh 
	WeaponMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WeaponMesh"));
}

// Called when the game starts or when spawned
void AWBWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWBWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
