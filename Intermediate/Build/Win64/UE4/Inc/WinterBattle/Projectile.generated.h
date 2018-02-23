// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WINTERBATTLE_Projectile_generated_h
#error "Projectile.generated.h already included, missing '#pragma once' in Projectile.h"
#endif
#define WINTERBATTLE_Projectile_generated_h

#define WinterBattle_Source_WinterBattle_Projectile_h_12_RPC_WRAPPERS
#define WinterBattle_Source_WinterBattle_Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define WinterBattle_Source_WinterBattle_Projectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectile(); \
	friend WINTERBATTLE_API class UClass* Z_Construct_UClass_AProjectile(); \
public: \
	DECLARE_CLASS(AProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/WinterBattle"), NO_API) \
	DECLARE_SERIALIZER(AProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define WinterBattle_Source_WinterBattle_Projectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAProjectile(); \
	friend WINTERBATTLE_API class UClass* Z_Construct_UClass_AProjectile(); \
public: \
	DECLARE_CLASS(AProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/WinterBattle"), NO_API) \
	DECLARE_SERIALIZER(AProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define WinterBattle_Source_WinterBattle_Projectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile(AProjectile&&); \
	NO_API AProjectile(const AProjectile&); \
public:


#define WinterBattle_Source_WinterBattle_Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile(AProjectile&&); \
	NO_API AProjectile(const AProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectile)


#define WinterBattle_Source_WinterBattle_Projectile_h_12_PRIVATE_PROPERTY_OFFSET
#define WinterBattle_Source_WinterBattle_Projectile_h_9_PROLOG
#define WinterBattle_Source_WinterBattle_Projectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WinterBattle_Source_WinterBattle_Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	WinterBattle_Source_WinterBattle_Projectile_h_12_RPC_WRAPPERS \
	WinterBattle_Source_WinterBattle_Projectile_h_12_INCLASS \
	WinterBattle_Source_WinterBattle_Projectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define WinterBattle_Source_WinterBattle_Projectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WinterBattle_Source_WinterBattle_Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	WinterBattle_Source_WinterBattle_Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	WinterBattle_Source_WinterBattle_Projectile_h_12_INCLASS_NO_PURE_DECLS \
	WinterBattle_Source_WinterBattle_Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID WinterBattle_Source_WinterBattle_Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
