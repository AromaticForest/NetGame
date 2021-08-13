// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetGame/UserWidget/UMG_ChatWindow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMG_ChatWindow() {}
// Cross Module References
	NETGAME_API UClass* Z_Construct_UClass_UUMG_ChatWindow_NoRegister();
	NETGAME_API UClass* Z_Construct_UClass_UUMG_ChatWindow();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_NetGame();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
	UMG_API UClass* Z_Construct_UClass_UComboBoxString_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMG_ChatWindow::execOnTextCommit)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InText);
		P_GET_PROPERTY(FByteProperty,Z_Param_CommitType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTextCommit(Z_Param_Out_InText,ETextCommit::Type(Z_Param_CommitType));
		P_NATIVE_END;
	}
	void UUMG_ChatWindow::StaticRegisterNativesUUMG_ChatWindow()
	{
		UClass* Class = UUMG_ChatWindow::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTextCommit", &UUMG_ChatWindow::execOnTextCommit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMG_ChatWindow_OnTextCommit_Statics
	{
		struct UMG_ChatWindow_eventOnTextCommit_Parms
		{
			FText InText;
			TEnumAsByte<ETextCommit::Type> CommitType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CommitType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUMG_ChatWindow_OnTextCommit_Statics::NewProp_CommitType = { "CommitType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMG_ChatWindow_eventOnTextCommit_Parms, CommitType), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMG_ChatWindow_OnTextCommit_Statics::NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UUMG_ChatWindow_OnTextCommit_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMG_ChatWindow_eventOnTextCommit_Parms, InText), METADATA_PARAMS(Z_Construct_UFunction_UUMG_ChatWindow_OnTextCommit_Statics::NewProp_InText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMG_ChatWindow_OnTextCommit_Statics::NewProp_InText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMG_ChatWindow_OnTextCommit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMG_ChatWindow_OnTextCommit_Statics::NewProp_CommitType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMG_ChatWindow_OnTextCommit_Statics::NewProp_InText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMG_ChatWindow_OnTextCommit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UserWidget/UMG_ChatWindow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMG_ChatWindow_OnTextCommit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMG_ChatWindow, nullptr, "OnTextCommit", nullptr, nullptr, sizeof(UMG_ChatWindow_eventOnTextCommit_Parms), Z_Construct_UFunction_UUMG_ChatWindow_OnTextCommit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMG_ChatWindow_OnTextCommit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMG_ChatWindow_OnTextCommit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMG_ChatWindow_OnTextCommit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMG_ChatWindow_OnTextCommit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMG_ChatWindow_OnTextCommit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMG_ChatWindow_NoRegister()
	{
		return UUMG_ChatWindow::StaticClass();
	}
	struct Z_Construct_UClass_UUMG_ChatWindow_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MessageChanal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MessageChanal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MessageScrollBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MessageScrollBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMG_ChatWindow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_NetGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMG_ChatWindow_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMG_ChatWindow_OnTextCommit, "OnTextCommit" }, // 1103698546
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMG_ChatWindow_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UserWidget/UMG_ChatWindow.h" },
		{ "ModuleRelativePath", "UserWidget/UMG_ChatWindow.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMG_ChatWindow_Statics::NewProp_MessageChanal_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserWidget/UMG_ChatWindow.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMG_ChatWindow_Statics::NewProp_MessageChanal = { "MessageChanal", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMG_ChatWindow, MessageChanal), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMG_ChatWindow_Statics::NewProp_MessageChanal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMG_ChatWindow_Statics::NewProp_MessageChanal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMG_ChatWindow_Statics::NewProp_MessageScrollBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserWidget/UMG_ChatWindow.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMG_ChatWindow_Statics::NewProp_MessageScrollBox = { "MessageScrollBox", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMG_ChatWindow, MessageScrollBox), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMG_ChatWindow_Statics::NewProp_MessageScrollBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMG_ChatWindow_Statics::NewProp_MessageScrollBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMG_ChatWindow_Statics::NewProp_TextInput_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserWidget/UMG_ChatWindow.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMG_ChatWindow_Statics::NewProp_TextInput = { "TextInput", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMG_ChatWindow, TextInput), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMG_ChatWindow_Statics::NewProp_TextInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMG_ChatWindow_Statics::NewProp_TextInput_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMG_ChatWindow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMG_ChatWindow_Statics::NewProp_MessageChanal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMG_ChatWindow_Statics::NewProp_MessageScrollBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMG_ChatWindow_Statics::NewProp_TextInput,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMG_ChatWindow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMG_ChatWindow>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMG_ChatWindow_Statics::ClassParams = {
		&UUMG_ChatWindow::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMG_ChatWindow_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMG_ChatWindow_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMG_ChatWindow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMG_ChatWindow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMG_ChatWindow()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMG_ChatWindow_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMG_ChatWindow, 2645270897);
	template<> NETGAME_API UClass* StaticClass<UUMG_ChatWindow>()
	{
		return UUMG_ChatWindow::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMG_ChatWindow(Z_Construct_UClass_UUMG_ChatWindow, &UUMG_ChatWindow::StaticClass, TEXT("/Script/NetGame"), TEXT("UUMG_ChatWindow"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMG_ChatWindow);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
