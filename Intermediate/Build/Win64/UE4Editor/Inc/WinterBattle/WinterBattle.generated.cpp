// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "WinterBattle.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1WinterBattle() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	AIMODULE_API class UClass* Z_Construct_UClass_AAIController();
	ENGINE_API class UClass* Z_Construct_UClass_APlayerController();
	ENGINE_API class UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API class UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();

	WINTERBATTLE_API class UClass* Z_Construct_UClass_AProjectile_NoRegister();
	WINTERBATTLE_API class UClass* Z_Construct_UClass_AProjectile();
	WINTERBATTLE_API class UClass* Z_Construct_UClass_AWBAIController_NoRegister();
	WINTERBATTLE_API class UClass* Z_Construct_UClass_AWBAIController();
	WINTERBATTLE_API class UClass* Z_Construct_UClass_AWBPlayerController_NoRegister();
	WINTERBATTLE_API class UClass* Z_Construct_UClass_AWBPlayerController();
	WINTERBATTLE_API class UClass* Z_Construct_UClass_AWBWeapon_NoRegister();
	WINTERBATTLE_API class UClass* Z_Construct_UClass_AWBWeapon();
	WINTERBATTLE_API class UClass* Z_Construct_UClass_AWinterBattleCharacter_NoRegister();
	WINTERBATTLE_API class UClass* Z_Construct_UClass_AWinterBattleCharacter();
	WINTERBATTLE_API class UClass* Z_Construct_UClass_AWinterBattleGameMode_NoRegister();
	WINTERBATTLE_API class UClass* Z_Construct_UClass_AWinterBattleGameMode();
	WINTERBATTLE_API class UPackage* Z_Construct_UPackage__Script_WinterBattle();
	void AProjectile::StaticRegisterNativesAProjectile()
	{
	}
	UClass* Z_Construct_UClass_AProjectile_NoRegister()
	{
		return AProjectile::StaticClass();
	}
	UClass* Z_Construct_UClass_AProjectile()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_WinterBattle();
			OuterClass = AProjectile::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				static TCppClassTypeInfo<TCppClassTypeTraits<AProjectile> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Projectile.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Projectile.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProjectile, 3237901086);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectile(Z_Construct_UClass_AProjectile, &AProjectile::StaticClass, TEXT("/Script/WinterBattle"), TEXT("AProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectile);
	void AWBAIController::StaticRegisterNativesAWBAIController()
	{
	}
	UClass* Z_Construct_UClass_AWBAIController_NoRegister()
	{
		return AWBAIController::StaticClass();
	}
	UClass* Z_Construct_UClass_AWBAIController()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AAIController();
			Z_Construct_UPackage__Script_WinterBattle();
			OuterClass = AWBAIController::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900280;


				static TCppClassTypeInfo<TCppClassTypeTraits<AWBAIController> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("WBAIController.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("WBAIController.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWBAIController, 1803631772);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWBAIController(Z_Construct_UClass_AWBAIController, &AWBAIController::StaticClass, TEXT("/Script/WinterBattle"), TEXT("AWBAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWBAIController);
	void AWBPlayerController::StaticRegisterNativesAWBPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AWBPlayerController_NoRegister()
	{
		return AWBPlayerController::StaticClass();
	}
	UClass* Z_Construct_UClass_AWBPlayerController()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APlayerController();
			Z_Construct_UPackage__Script_WinterBattle();
			OuterClass = AWBPlayerController::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900284;


				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<AWBPlayerController> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("WBPlayerController.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("WBPlayerController.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWBPlayerController, 95575991);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWBPlayerController(Z_Construct_UClass_AWBPlayerController, &AWBPlayerController::StaticClass, TEXT("/Script/WinterBattle"), TEXT("AWBPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWBPlayerController);
	void AWBWeapon::StaticRegisterNativesAWBWeapon()
	{
	}
	UClass* Z_Construct_UClass_AWBWeapon_NoRegister()
	{
		return AWBWeapon::StaticClass();
	}
	UClass* Z_Construct_UClass_AWBWeapon()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_WinterBattle();
			OuterClass = AWBWeapon::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_WeaponMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WeaponMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WeaponMesh, AWBWeapon), 0x00100000000a001d, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<AWBWeapon> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("WBWeapon.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("WBWeapon.h"));
				MetaData->SetValue(NewProp_WeaponMesh, TEXT("Category"), TEXT("Character"));
				MetaData->SetValue(NewProp_WeaponMesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_WeaponMesh, TEXT("ModuleRelativePath"), TEXT("WBWeapon.h"));
				MetaData->SetValue(NewProp_WeaponMesh, TEXT("ToolTip"), TEXT("Sets a weapon mesh"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWBWeapon, 1875009972);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWBWeapon(Z_Construct_UClass_AWBWeapon, &AWBWeapon::StaticClass, TEXT("/Script/WinterBattle"), TEXT("AWBWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWBWeapon);
	void AWinterBattleCharacter::StaticRegisterNativesAWinterBattleCharacter()
	{
	}
	UClass* Z_Construct_UClass_AWinterBattleCharacter_NoRegister()
	{
		return AWinterBattleCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AWinterBattleCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_WinterBattle();
			OuterClass = AWinterBattleCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20800080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_BaseLookUpRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseLookUpRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseLookUpRate, AWinterBattleCharacter), 0x0010000000020015);
				UProperty* NewProp_BaseTurnRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseTurnRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseTurnRate, AWinterBattleCharacter), 0x0010000000020015);
				UProperty* NewProp_FollowCamera = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FollowCamera"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(FollowCamera, AWinterBattleCharacter), 0x00400000000a001d, Z_Construct_UClass_UCameraComponent_NoRegister());
				UProperty* NewProp_CameraBoom = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CameraBoom"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CameraBoom, AWinterBattleCharacter), 0x00400000000a001d, Z_Construct_UClass_USpringArmComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<AWinterBattleCharacter> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("WinterBattleCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("WinterBattleCharacter.h"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("ModuleRelativePath"), TEXT("WinterBattleCharacter.h"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("ToolTip"), TEXT("Base look up/down rate, in deg/sec. Other scaling may affect final rate."));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("ModuleRelativePath"), TEXT("WinterBattleCharacter.h"));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("ToolTip"), TEXT("Base turn rate, in deg/sec. Other scaling may affect final turn rate."));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("ModuleRelativePath"), TEXT("WinterBattleCharacter.h"));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("ToolTip"), TEXT("Follow camera"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("ModuleRelativePath"), TEXT("WinterBattleCharacter.h"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("ToolTip"), TEXT("Camera boom positioning the camera behind the character"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWinterBattleCharacter, 1250847604);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWinterBattleCharacter(Z_Construct_UClass_AWinterBattleCharacter, &AWinterBattleCharacter::StaticClass, TEXT("/Script/WinterBattle"), TEXT("AWinterBattleCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWinterBattleCharacter);
	void AWinterBattleGameMode::StaticRegisterNativesAWinterBattleGameMode()
	{
	}
	UClass* Z_Construct_UClass_AWinterBattleGameMode_NoRegister()
	{
		return AWinterBattleGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AWinterBattleGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_WinterBattle();
			OuterClass = AWinterBattleGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20880288;


				static TCppClassTypeInfo<TCppClassTypeTraits<AWinterBattleGameMode> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("WinterBattleGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("WinterBattleGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWinterBattleGameMode, 4166428364);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWinterBattleGameMode(Z_Construct_UClass_AWinterBattleGameMode, &AWinterBattleGameMode::StaticClass, TEXT("/Script/WinterBattle"), TEXT("AWinterBattleGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWinterBattleGameMode);
	UPackage* Z_Construct_UPackage__Script_WinterBattle()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/WinterBattle")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xB94E5AD4;
			Guid.B = 0x6BB6BA34;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
