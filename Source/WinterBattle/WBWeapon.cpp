// Fill out your copyright notice in the Description page of Project Settings.

#include "WBWeapon.h"
#include "WinterBattleCharacter.h"
#include "Engine.h"


// Sets default values
AWBWeapon::AWBWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// Set WeaponMesh 
	USceneComponent* Root = CreateDefaultSubobject<USceneComponent>("Root");
	WeaponMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WeaponMesh"));
	WeaponMesh->AttachTo(Root);
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
