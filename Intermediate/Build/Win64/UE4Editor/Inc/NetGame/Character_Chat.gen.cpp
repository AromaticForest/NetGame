// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetGame/Player/Character/Chat/Character_Chat.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacter_Chat() {}
// Cross Module References
	NETGAME_API UClass* Z_Construct_UClass_ACharacter_Chat_NoRegister();
	NETGAME_API UClass* Z_Construct_UClass_ACharacter_Chat();
	NETGAME_API UClass* Z_Construct_UClass_ACharacterBase();
	UPackage* Z_Construct_UPackage__Script_NetGame();
// End Cross Module References
	void ACharacter_Chat::StaticRegisterNativesACharacter_Chat()
	{
	}
	UClass* Z_Construct_UClass_ACharacter_Chat_NoRegister()
	{
		return ACharacter_Chat::StaticClass();
	}
	struct Z_Construct_UClass_ACharacter_Chat_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACharacter_Chat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NetGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Chat_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/Character/Chat/Character_Chat.h" },
		{ "ModuleRelativePath", "Player/Character/Chat/Character_Chat.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACharacter_Chat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacter_Chat>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACharacter_Chat_Statics::ClassParams = {
		&ACharacter_Chat::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACharacter_Chat_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Chat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACharacter_Chat()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACharacter_Chat_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACharacter_Chat, 559200804);
	template<> NETGAME_API UClass* StaticClass<ACharacter_Chat>()
	{
		return ACharacter_Chat::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACharacter_Chat(Z_Construct_UClass_ACharacter_Chat, &ACharacter_Chat::StaticClass, TEXT("/Script/NetGame"), TEXT("ACharacter_Chat"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacter_Chat);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
