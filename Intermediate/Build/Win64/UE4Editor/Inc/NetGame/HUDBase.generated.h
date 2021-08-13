// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETGAME_HUDBase_generated_h
#error "HUDBase.generated.h already included, missing '#pragma once' in HUDBase.h"
#endif
#define NETGAME_HUDBase_generated_h

#define NetGame_Source_NetGame_GameMode_HUD_HUDBase_h_17_SPARSE_DATA
#define NetGame_Source_NetGame_GameMode_HUD_HUDBase_h_17_RPC_WRAPPERS
#define NetGame_Source_NetGame_GameMode_HUD_HUDBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define NetGame_Source_NetGame_GameMode_HUD_HUDBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHUDBase(); \
	friend struct Z_Construct_UClass_AHUDBase_Statics; \
public: \
	DECLARE_CLASS(AHUDBase, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetGame"), NO_API) \
	DECLARE_SERIALIZER(AHUDBase)


#define NetGame_Source_NetGame_GameMode_HUD_HUDBase_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAHUDBase(); \
	friend struct Z_Construct_UClass_AHUDBase_Statics; \
public: \
	DECLARE_CLASS(AHUDBase, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetGame"), NO_API) \
	DECLARE_SERIALIZER(AHUDBase)


#define NetGame_Source_NetGame_GameMode_HUD_HUDBase_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHUDBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHUDBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHUDBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHUDBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHUDBase(AHUDBase&&); \
	NO_API AHUDBase(const AHUDBase&); \
public:


#define NetGame_Source_NetGame_GameMode_HUD_HUDBase_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHUDBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHUDBase(AHUDBase&&); \
	NO_API AHUDBase(const AHUDBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHUDBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHUDBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHUDBase)


#define NetGame_Source_NetGame_GameMode_HUD_HUDBase_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ChatWindow() { return STRUCT_OFFSET(AHUDBase, ChatWindow); }


#define NetGame_Source_NetGame_GameMode_HUD_HUDBase_h_14_PROLOG
#define NetGame_Source_NetGame_GameMode_HUD_HUDBase_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetGame_Source_NetGame_GameMode_HUD_HUDBase_h_17_PRIVATE_PROPERTY_OFFSET \
	NetGame_Source_NetGame_GameMode_HUD_HUDBase_h_17_SPARSE_DATA \
	NetGame_Source_NetGame_GameMode_HUD_HUDBase_h_17_RPC_WRAPPERS \
	NetGame_Source_NetGame_GameMode_HUD_HUDBase_h_17_INCLASS \
	NetGame_Source_NetGame_GameMode_HUD_HUDBase_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NetGame_Source_NetGame_GameMode_HUD_HUDBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetGame_Source_NetGame_GameMode_HUD_HUDBase_h_17_PRIVATE_PROPERTY_OFFSET \
	NetGame_Source_NetGame_GameMode_HUD_HUDBase_h_17_SPARSE_DATA \
	NetGame_Source_NetGame_GameMode_HUD_HUDBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	NetGame_Source_NetGame_GameMode_HUD_HUDBase_h_17_INCLASS_NO_PURE_DECLS \
	NetGame_Source_NetGame_GameMode_HUD_HUDBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETGAME_API UClass* StaticClass<class AHUDBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NetGame_Source_NetGame_GameMode_HUD_HUDBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
