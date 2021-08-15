// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETGAME_Character_Chat_generated_h
#error "Character_Chat.generated.h already included, missing '#pragma once' in Character_Chat.h"
#endif
#define NETGAME_Character_Chat_generated_h

#define NetGame_Source_NetGame_Player_Character_Chat_Character_Chat_h_15_SPARSE_DATA
#define NetGame_Source_NetGame_Player_Character_Chat_Character_Chat_h_15_RPC_WRAPPERS
#define NetGame_Source_NetGame_Player_Character_Chat_Character_Chat_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define NetGame_Source_NetGame_Player_Character_Chat_Character_Chat_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharacter_Chat(); \
	friend struct Z_Construct_UClass_ACharacter_Chat_Statics; \
public: \
	DECLARE_CLASS(ACharacter_Chat, ACharacterBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetGame"), NO_API) \
	DECLARE_SERIALIZER(ACharacter_Chat)


#define NetGame_Source_NetGame_Player_Character_Chat_Character_Chat_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACharacter_Chat(); \
	friend struct Z_Construct_UClass_ACharacter_Chat_Statics; \
public: \
	DECLARE_CLASS(ACharacter_Chat, ACharacterBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetGame"), NO_API) \
	DECLARE_SERIALIZER(ACharacter_Chat)


#define NetGame_Source_NetGame_Player_Character_Chat_Character_Chat_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACharacter_Chat(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACharacter_Chat) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacter_Chat); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacter_Chat); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacter_Chat(ACharacter_Chat&&); \
	NO_API ACharacter_Chat(const ACharacter_Chat&); \
public:


#define NetGame_Source_NetGame_Player_Character_Chat_Character_Chat_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACharacter_Chat() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacter_Chat(ACharacter_Chat&&); \
	NO_API ACharacter_Chat(const ACharacter_Chat&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacter_Chat); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacter_Chat); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACharacter_Chat)


#define NetGame_Source_NetGame_Player_Character_Chat_Character_Chat_h_15_PRIVATE_PROPERTY_OFFSET
#define NetGame_Source_NetGame_Player_Character_Chat_Character_Chat_h_12_PROLOG
#define NetGame_Source_NetGame_Player_Character_Chat_Character_Chat_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetGame_Source_NetGame_Player_Character_Chat_Character_Chat_h_15_PRIVATE_PROPERTY_OFFSET \
	NetGame_Source_NetGame_Player_Character_Chat_Character_Chat_h_15_SPARSE_DATA \
	NetGame_Source_NetGame_Player_Character_Chat_Character_Chat_h_15_RPC_WRAPPERS \
	NetGame_Source_NetGame_Player_Character_Chat_Character_Chat_h_15_INCLASS \
	NetGame_Source_NetGame_Player_Character_Chat_Character_Chat_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NetGame_Source_NetGame_Player_Character_Chat_Character_Chat_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetGame_Source_NetGame_Player_Character_Chat_Character_Chat_h_15_PRIVATE_PROPERTY_OFFSET \
	NetGame_Source_NetGame_Player_Character_Chat_Character_Chat_h_15_SPARSE_DATA \
	NetGame_Source_NetGame_Player_Character_Chat_Character_Chat_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	NetGame_Source_NetGame_Player_Character_Chat_Character_Chat_h_15_INCLASS_NO_PURE_DECLS \
	NetGame_Source_NetGame_Player_Character_Chat_Character_Chat_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETGAME_API UClass* StaticClass<class ACharacter_Chat>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NetGame_Source_NetGame_Player_Character_Chat_Character_Chat_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
