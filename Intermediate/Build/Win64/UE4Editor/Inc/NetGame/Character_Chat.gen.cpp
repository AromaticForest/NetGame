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
	DEFINE_FUNCTION(ACharacter_Chat::execMulti_SendMessage)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multi_SendMessage_Implementation(Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter_Chat::execSever_SendMessage)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Sever_SendMessage_Validate(Z_Param_Message))
		{
			RPC_ValidateFailed(TEXT("Sever_SendMessage_Validate"));
			return;
		}
		P_THIS->Sever_SendMessage_Implementation(Z_Param_Message);
		P_NATIVE_END;
	}
	static FName NAME_ACharacter_Chat_Multi_SendMessage = FName(TEXT("Multi_SendMessage"));
	void ACharacter_Chat::Multi_SendMessage(FText const& Message)
	{
		Character_Chat_eventMulti_SendMessage_Parms Parms;
		Parms.Message=Message;
		ProcessEvent(FindFunctionChecked(NAME_ACharacter_Chat_Multi_SendMessage),&Parms);
	}
	static FName NAME_ACharacter_Chat_Sever_SendMessage = FName(TEXT("Sever_SendMessage"));
	void ACharacter_Chat::Sever_SendMessage(FText const& Message)
	{
		Character_Chat_eventSever_SendMessage_Parms Parms;
		Parms.Message=Message;
		ProcessEvent(FindFunctionChecked(NAME_ACharacter_Chat_Sever_SendMessage),&Parms);
	}
	void ACharacter_Chat::StaticRegisterNativesACharacter_Chat()
	{
		UClass* Class = ACharacter_Chat::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multi_SendMessage", &ACharacter_Chat::execMulti_SendMessage },
			{ "Sever_SendMessage", &ACharacter_Chat::execSever_SendMessage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACharacter_Chat_Multi_SendMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_Chat_Multi_SendMessage_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ACharacter_Chat_Multi_SendMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Character_Chat_eventMulti_SendMessage_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_ACharacter_Chat_Multi_SendMessage_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Chat_Multi_SendMessage_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacter_Chat_Multi_SendMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_Chat_Multi_SendMessage_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_Chat_Multi_SendMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/Character/Chat/Character_Chat.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_Chat_Multi_SendMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter_Chat, nullptr, "Multi_SendMessage", nullptr, nullptr, sizeof(Character_Chat_eventMulti_SendMessage_Parms), Z_Construct_UFunction_ACharacter_Chat_Multi_SendMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Chat_Multi_SendMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_Chat_Multi_SendMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Chat_Multi_SendMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_Chat_Multi_SendMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacter_Chat_Multi_SendMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_Chat_Sever_SendMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_Chat_Sever_SendMessage_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ACharacter_Chat_Sever_SendMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Character_Chat_eventSever_SendMessage_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_ACharacter_Chat_Sever_SendMessage_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Chat_Sever_SendMessage_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacter_Chat_Sever_SendMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_Chat_Sever_SendMessage_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_Chat_Sever_SendMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/Character/Chat/Character_Chat.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_Chat_Sever_SendMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter_Chat, nullptr, "Sever_SendMessage", nullptr, nullptr, sizeof(Character_Chat_eventSever_SendMessage_Parms), Z_Construct_UFunction_ACharacter_Chat_Sever_SendMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Chat_Sever_SendMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_Chat_Sever_SendMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Chat_Sever_SendMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_Chat_Sever_SendMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacter_Chat_Sever_SendMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACharacter_Chat_NoRegister()
	{
		return ACharacter_Chat::StaticClass();
	}
	struct Z_Construct_UClass_ACharacter_Chat_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	const FClassFunctionLinkInfo Z_Construct_UClass_ACharacter_Chat_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACharacter_Chat_Multi_SendMessage, "Multi_SendMessage" }, // 1937383210
		{ &Z_Construct_UFunction_ACharacter_Chat_Sever_SendMessage, "Sever_SendMessage" }, // 4170902967
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
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(ACharacter_Chat, 3235311751);
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
