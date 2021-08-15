// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetGame/Player/Controller/PlayerControllerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerControllerBase() {}
// Cross Module References
	NETGAME_API UClass* Z_Construct_UClass_APlayerControllerBase_NoRegister();
	NETGAME_API UClass* Z_Construct_UClass_APlayerControllerBase();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_NetGame();
	NETGAME_API UEnum* Z_Construct_UEnum_NetGame_EChatChanal();
// End Cross Module References
	DEFINE_FUNCTION(APlayerControllerBase::execServer_SendMessage)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_Message);
		P_GET_ENUM(EChatChanal,Z_Param_Chanal);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SendMessage_Validate(Z_Param_Message,EChatChanal(Z_Param_Chanal)))
		{
			RPC_ValidateFailed(TEXT("Server_SendMessage_Validate"));
			return;
		}
		P_THIS->Server_SendMessage_Implementation(Z_Param_Message,EChatChanal(Z_Param_Chanal));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerControllerBase::execClient_ReceiveMessage)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_Text);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_ReceiveMessage_Implementation(Z_Param_Text);
		P_NATIVE_END;
	}
	static FName NAME_APlayerControllerBase_Client_ReceiveMessage = FName(TEXT("Client_ReceiveMessage"));
	void APlayerControllerBase::Client_ReceiveMessage(FText const& Text)
	{
		PlayerControllerBase_eventClient_ReceiveMessage_Parms Parms;
		Parms.Text=Text;
		ProcessEvent(FindFunctionChecked(NAME_APlayerControllerBase_Client_ReceiveMessage),&Parms);
	}
	static FName NAME_APlayerControllerBase_Server_SendMessage = FName(TEXT("Server_SendMessage"));
	void APlayerControllerBase::Server_SendMessage(FText const& Message, EChatChanal Chanal)
	{
		PlayerControllerBase_eventServer_SendMessage_Parms Parms;
		Parms.Message=Message;
		Parms.Chanal=Chanal;
		ProcessEvent(FindFunctionChecked(NAME_APlayerControllerBase_Server_SendMessage),&Parms);
	}
	void APlayerControllerBase::StaticRegisterNativesAPlayerControllerBase()
	{
		UClass* Class = APlayerControllerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Client_ReceiveMessage", &APlayerControllerBase::execClient_ReceiveMessage },
			{ "Server_SendMessage", &APlayerControllerBase::execServer_SendMessage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerControllerBase_Client_ReceiveMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerControllerBase_Client_ReceiveMessage_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_APlayerControllerBase_Client_ReceiveMessage_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerControllerBase_eventClient_ReceiveMessage_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_APlayerControllerBase_Client_ReceiveMessage_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerControllerBase_Client_ReceiveMessage_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerControllerBase_Client_ReceiveMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerControllerBase_Client_ReceiveMessage_Statics::NewProp_Text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerControllerBase_Client_ReceiveMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/Controller/PlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerControllerBase_Client_ReceiveMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerControllerBase, nullptr, "Client_ReceiveMessage", nullptr, nullptr, sizeof(PlayerControllerBase_eventClient_ReceiveMessage_Parms), Z_Construct_UFunction_APlayerControllerBase_Client_ReceiveMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerControllerBase_Client_ReceiveMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerControllerBase_Client_ReceiveMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerControllerBase_Client_ReceiveMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerControllerBase_Client_ReceiveMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerControllerBase_Client_ReceiveMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerControllerBase_Server_SendMessage_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Chanal;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Chanal_Underlying;
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APlayerControllerBase_Server_SendMessage_Statics::NewProp_Chanal = { "Chanal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerControllerBase_eventServer_SendMessage_Parms, Chanal), Z_Construct_UEnum_NetGame_EChatChanal, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerControllerBase_Server_SendMessage_Statics::NewProp_Chanal_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerControllerBase_Server_SendMessage_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_APlayerControllerBase_Server_SendMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerControllerBase_eventServer_SendMessage_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_APlayerControllerBase_Server_SendMessage_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerControllerBase_Server_SendMessage_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerControllerBase_Server_SendMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerControllerBase_Server_SendMessage_Statics::NewProp_Chanal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerControllerBase_Server_SendMessage_Statics::NewProp_Chanal_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerControllerBase_Server_SendMessage_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerControllerBase_Server_SendMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/Controller/PlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerControllerBase_Server_SendMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerControllerBase, nullptr, "Server_SendMessage", nullptr, nullptr, sizeof(PlayerControllerBase_eventServer_SendMessage_Parms), Z_Construct_UFunction_APlayerControllerBase_Server_SendMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerControllerBase_Server_SendMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerControllerBase_Server_SendMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerControllerBase_Server_SendMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerControllerBase_Server_SendMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerControllerBase_Server_SendMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlayerControllerBase_NoRegister()
	{
		return APlayerControllerBase::StaticClass();
	}
	struct Z_Construct_UClass_APlayerControllerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerControllerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_NetGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerControllerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerControllerBase_Client_ReceiveMessage, "Client_ReceiveMessage" }, // 3006346848
		{ &Z_Construct_UFunction_APlayerControllerBase_Server_SendMessage, "Server_SendMessage" }, // 653628126
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerControllerBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Player/Controller/PlayerControllerBase.h" },
		{ "ModuleRelativePath", "Player/Controller/PlayerControllerBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerControllerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerControllerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerControllerBase_Statics::ClassParams = {
		&APlayerControllerBase::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerControllerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerControllerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerControllerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerControllerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerControllerBase, 3372185142);
	template<> NETGAME_API UClass* StaticClass<APlayerControllerBase>()
	{
		return APlayerControllerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerControllerBase(Z_Construct_UClass_APlayerControllerBase, &APlayerControllerBase::StaticClass, TEXT("/Script/NetGame"), TEXT("APlayerControllerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerControllerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
