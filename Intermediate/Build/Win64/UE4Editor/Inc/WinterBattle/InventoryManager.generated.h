// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWBWeapon;
#ifdef WINTERBATTLE_InventoryManager_generated_h
#error "InventoryManager.generated.h already included, missing '#pragma once' in InventoryManager.h"
#endif
#define WINTERBATTLE_InventoryManager_generated_h

#define WinterBattle_Source_WinterBattle_InventoryManager_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Fire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddWeapon) \
	{ \
		P_GET_OBJECT(AWBWeapon,Z_Param_w); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddWeapon(Z_Param_w); \
		P_NATIVE_END; \
	}


#define WinterBattle_Source_WinterBattle_InventoryManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Fire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddWeapon) \
	{ \
		P_GET_OBJECT(AWBWeapon,Z_Param_w); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddWeapon(Z_Param_w); \
		P_NATIVE_END; \
	}


#define WinterBattle_Source_WinterBattle_InventoryManager_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryManager(); \
	friend WINTERBATTLE_API class UClass* Z_Construct_UClass_UInventoryManager(); \
public: \
	DECLARE_CLASS(UInventoryManager, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/WinterBattle"), NO_API) \
	DECLARE_SERIALIZER(UInventoryManager) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define WinterBattle_Source_WinterBattle_InventoryManager_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUInventoryManager(); \
	friend WINTERBATTLE_API class UClass* Z_Construct_UClass_UInventoryManager(); \
public: \
	DECLARE_CLASS(UInventoryManager, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/WinterBattle"), NO_API) \
	DECLARE_SERIALIZER(UInventoryManager) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define WinterBattle_Source_WinterBattle_InventoryManager_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryManager(UInventoryManager&&); \
	NO_API UInventoryManager(const UInventoryManager&); \
public:


#define WinterBattle_Source_WinterBattle_InventoryManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryManager(UInventoryManager&&); \
	NO_API UInventoryManager(const UInventoryManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventoryManager)


#define WinterBattle_Source_WinterBattle_InventoryManager_h_15_PRIVATE_PROPERTY_OFFSET
#define WinterBattle_Source_WinterBattle_InventoryManager_h_12_PROLOG
#define WinterBattle_Source_WinterBattle_InventoryManager_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WinterBattle_Source_WinterBattle_InventoryManager_h_15_PRIVATE_PROPERTY_OFFSET \
	WinterBattle_Source_WinterBattle_InventoryManager_h_15_RPC_WRAPPERS \
	WinterBattle_Source_WinterBattle_InventoryManager_h_15_INCLASS \
	WinterBattle_Source_WinterBattle_InventoryManager_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define WinterBattle_Source_WinterBattle_InventoryManager_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WinterBattle_Source_WinterBattle_InventoryManager_h_15_PRIVATE_PROPERTY_OFFSET \
	WinterBattle_Source_WinterBattle_InventoryManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	WinterBattle_Source_WinterBattle_InventoryManager_h_15_INCLASS_NO_PURE_DECLS \
	WinterBattle_Source_WinterBattle_InventoryManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID WinterBattle_Source_WinterBattle_InventoryManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
