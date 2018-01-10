// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WINTERBATTLE_WBPlayerController_generated_h
#error "WBPlayerController.generated.h already included, missing '#pragma once' in WBPlayerController.h"
#endif
#define WINTERBATTLE_WBPlayerController_generated_h

#define WinterBattle_Source_WinterBattle_WBPlayerController_h_15_RPC_WRAPPERS
#define WinterBattle_Source_WinterBattle_WBPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define WinterBattle_Source_WinterBattle_WBPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWBPlayerController(); \
	friend WINTERBATTLE_API class UClass* Z_Construct_UClass_AWBPlayerController(); \
public: \
	DECLARE_CLASS(AWBPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/WinterBattle"), NO_API) \
	DECLARE_SERIALIZER(AWBPlayerController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define WinterBattle_Source_WinterBattle_WBPlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAWBPlayerController(); \
	friend WINTERBATTLE_API class UClass* Z_Construct_UClass_AWBPlayerController(); \
public: \
	DECLARE_CLASS(AWBPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/WinterBattle"), NO_API) \
	DECLARE_SERIALIZER(AWBPlayerController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define WinterBattle_Source_WinterBattle_WBPlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWBPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWBPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWBPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWBPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWBPlayerController(AWBPlayerController&&); \
	NO_API AWBPlayerController(const AWBPlayerController&); \
public:


#define WinterBattle_Source_WinterBattle_WBPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWBPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWBPlayerController(AWBPlayerController&&); \
	NO_API AWBPlayerController(const AWBPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWBPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWBPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWBPlayerController)


#define WinterBattle_Source_WinterBattle_WBPlayerController_h_15_PRIVATE_PROPERTY_OFFSET
#define WinterBattle_Source_WinterBattle_WBPlayerController_h_12_PROLOG
#define WinterBattle_Source_WinterBattle_WBPlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WinterBattle_Source_WinterBattle_WBPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	WinterBattle_Source_WinterBattle_WBPlayerController_h_15_RPC_WRAPPERS \
	WinterBattle_Source_WinterBattle_WBPlayerController_h_15_INCLASS \
	WinterBattle_Source_WinterBattle_WBPlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define WinterBattle_Source_WinterBattle_WBPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WinterBattle_Source_WinterBattle_WBPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	WinterBattle_Source_WinterBattle_WBPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	WinterBattle_Source_WinterBattle_WBPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	WinterBattle_Source_WinterBattle_WBPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID WinterBattle_Source_WinterBattle_WBPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
