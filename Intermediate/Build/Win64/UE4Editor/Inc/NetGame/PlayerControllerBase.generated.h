// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EChatChanal : uint8;
#ifdef NETGAME_PlayerControllerBase_generated_h
#error "PlayerControllerBase.generated.h already included, missing '#pragma once' in PlayerControllerBase.h"
#endif
#define NETGAME_PlayerControllerBase_generated_h

#define NetGame_Source_NetGame_Player_Controller_PlayerControllerBase_h_17_SPARSE_DATA
#define NetGame_Source_NetGame_Player_Controller_PlayerControllerBase_h_17_RPC_WRAPPERS \
	virtual bool Server_SendMessage_Validate(FText const& , EChatChanal ); \
	virtual void Server_SendMessage_Implementation(FText const& Message, EChatChanal Chanal); \
	virtual void Client_ReceiveMessage_Implementation(FText const& Text); \
 \
	DECLARE_FUNCTION(execServer_SendMessage); \
	DECLARE_FUNCTION(execClient_ReceiveMessage);


#define NetGame_Source_NetGame_Player_Controller_PlayerControllerBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_SendMessage_Validate(FText const& , EChatChanal ); \
	virtual void Server_SendMessage_Implementation(FText const& Message, EChatChanal Chanal); \
	virtual void Client_ReceiveMessage_Implementation(FText const& Text); \
 \
	DECLARE_FUNCTION(execServer_SendMessage); \
	DECLARE_FUNCTION(execClient_ReceiveMessage);


#define NetGame_Source_NetGame_Player_Controller_PlayerControllerBase_h_17_EVENT_PARMS \
	struct PlayerControllerBase_eventClient_ReceiveMessage_Parms \
	{ \
		FText Text; \
	}; \
	struct PlayerControllerBase_eventServer_SendMessage_Parms \
	{ \
		FText Message; \
		EChatChanal Chanal; \
	};


#define NetGame_Source_NetGame_Player_Controller_PlayerControllerBase_h_17_CALLBACK_WRAPPERS
#define NetGame_Source_NetGame_Player_Controller_PlayerControllerBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerControllerBase(); \
	friend struct Z_Construct_UClass_APlayerControllerBase_Statics; \
public: \
	DECLARE_CLASS(APlayerControllerBase, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetGame"), NO_API) \
	DECLARE_SERIALIZER(APlayerControllerBase)


#define NetGame_Source_NetGame_Player_Controller_PlayerControllerBase_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerControllerBase(); \
	friend struct Z_Construct_UClass_APlayerControllerBase_Statics; \
public: \
	DECLARE_CLASS(APlayerControllerBase, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetGame"), NO_API) \
	DECLARE_SERIALIZER(APlayerControllerBase)


#define NetGame_Source_NetGame_Player_Controller_PlayerControllerBase_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerControllerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerControllerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerControllerBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerControllerBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerControllerBase(APlayerControllerBase&&); \
	NO_API APlayerControllerBase(const APlayerControllerBase&); \
public:


#define NetGame_Source_NetGame_Player_Controller_PlayerControllerBase_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerControllerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerControllerBase(APlayerControllerBase&&); \
	NO_API APlayerControllerBase(const APlayerControllerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerControllerBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerControllerBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerControllerBase)


#define NetGame_Source_NetGame_Player_Controller_PlayerControllerBase_h_17_PRIVATE_PROPERTY_OFFSET
#define NetGame_Source_NetGame_Player_Controller_PlayerControllerBase_h_14_PROLOG \
	NetGame_Source_NetGame_Player_Controller_PlayerControllerBase_h_17_EVENT_PARMS


#define NetGame_Source_NetGame_Player_Controller_PlayerControllerBase_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetGame_Source_NetGame_Player_Controller_PlayerControllerBase_h_17_PRIVATE_PROPERTY_OFFSET \
	NetGame_Source_NetGame_Player_Controller_PlayerControllerBase_h_17_SPARSE_DATA \
	NetGame_Source_NetGame_Player_Controller_PlayerControllerBase_h_17_RPC_WRAPPERS \
	NetGame_Source_NetGame_Player_Controller_PlayerControllerBase_h_17_CALLBACK_WRAPPERS \
	NetGame_Source_NetGame_Player_Controller_PlayerControllerBase_h_17_INCLASS \
	NetGame_Source_NetGame_Player_Controller_PlayerControllerBase_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NetGame_Source_NetGame_Player_Controller_PlayerControllerBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetGame_Source_NetGame_Player_Controller_PlayerControllerBase_h_17_PRIVATE_PROPERTY_OFFSET \
	NetGame_Source_NetGame_Player_Controller_PlayerControllerBase_h_17_SPARSE_DATA \
	NetGame_Source_NetGame_Player_Controller_PlayerControllerBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	NetGame_Source_NetGame_Player_Controller_PlayerControllerBase_h_17_CALLBACK_WRAPPERS \
	NetGame_Source_NetGame_Player_Controller_PlayerControllerBase_h_17_INCLASS_NO_PURE_DECLS \
	NetGame_Source_NetGame_Player_Controller_PlayerControllerBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETGAME_API UClass* StaticClass<class APlayerControllerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NetGame_Source_NetGame_Player_Controller_PlayerControllerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
