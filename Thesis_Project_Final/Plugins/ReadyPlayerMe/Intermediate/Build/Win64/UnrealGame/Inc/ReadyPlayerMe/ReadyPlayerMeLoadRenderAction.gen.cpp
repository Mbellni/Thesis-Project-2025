// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReadyPlayerMe/Public/ReadyPlayerMeLoadRenderAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReadyPlayerMeLoadRenderAction() {}
// Cross Module References
	READYPLAYERME_API UFunction* Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageCompleted__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ReadyPlayerMe();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeLoadRenderAction_NoRegister();
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeLoadRenderAction();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	READYPLAYERME_API UScriptStruct* Z_Construct_UScriptStruct_FRpmAvatarRenderProperties();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageCompleted__DelegateSignature_Statics
	{
		struct _Script_ReadyPlayerMe_eventDownloadImageCompleted_Parms
		{
			UTexture2D* Texture;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageCompleted__DelegateSignature_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ReadyPlayerMe_eventDownloadImageCompleted_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageCompleted__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageCompleted__DelegateSignature_Statics::NewProp_Texture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReadyPlayerMeLoadRenderAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ReadyPlayerMe, nullptr, "DownloadImageCompleted__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageCompleted__DelegateSignature_Statics::_Script_ReadyPlayerMe_eventDownloadImageCompleted_Parms), Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageCompleted__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageCompleted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageCompleted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UReadyPlayerMeLoadRenderAction::execOnImageDownloaded)
	{
		P_GET_UBOOL(Z_Param_bSuccess);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnImageDownloaded(Z_Param_bSuccess);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadyPlayerMeLoadRenderAction::execLoadAvatarRenderAsync)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Url);
		P_GET_STRUCT_REF(FRpmAvatarRenderProperties,Z_Param_Out_Properties);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UReadyPlayerMeLoadRenderAction**)Z_Param__Result=UReadyPlayerMeLoadRenderAction::LoadAvatarRenderAsync(Z_Param_Url,Z_Param_Out_Properties);
		P_NATIVE_END;
	}
	void UReadyPlayerMeLoadRenderAction::StaticRegisterNativesUReadyPlayerMeLoadRenderAction()
	{
		UClass* Class = UReadyPlayerMeLoadRenderAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadAvatarRenderAsync", &UReadyPlayerMeLoadRenderAction::execLoadAvatarRenderAsync },
			{ "OnImageDownloaded", &UReadyPlayerMeLoadRenderAction::execOnImageDownloaded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_LoadAvatarRenderAsync_Statics
	{
		struct ReadyPlayerMeLoadRenderAction_eventLoadAvatarRenderAsync_Parms
		{
			FString Url;
			FRpmAvatarRenderProperties Properties;
			UReadyPlayerMeLoadRenderAction* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Properties;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_LoadAvatarRenderAsync_Statics::NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_LoadAvatarRenderAsync_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadyPlayerMeLoadRenderAction_eventLoadAvatarRenderAsync_Parms, Url), METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_LoadAvatarRenderAsync_Statics::NewProp_Url_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_LoadAvatarRenderAsync_Statics::NewProp_Url_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_LoadAvatarRenderAsync_Statics::NewProp_Properties_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_LoadAvatarRenderAsync_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadyPlayerMeLoadRenderAction_eventLoadAvatarRenderAsync_Parms, Properties), Z_Construct_UScriptStruct_FRpmAvatarRenderProperties, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_LoadAvatarRenderAsync_Statics::NewProp_Properties_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_LoadAvatarRenderAsync_Statics::NewProp_Properties_MetaData)) }; // 2192713662
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_LoadAvatarRenderAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadyPlayerMeLoadRenderAction_eventLoadAvatarRenderAsync_Parms, ReturnValue), Z_Construct_UClass_UReadyPlayerMeLoadRenderAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_LoadAvatarRenderAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_LoadAvatarRenderAsync_Statics::NewProp_Url,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_LoadAvatarRenderAsync_Statics::NewProp_Properties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_LoadAvatarRenderAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_LoadAvatarRenderAsync_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Properties" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Ready Player Me" },
		{ "Comment", "/**\n\x09 * Creates load render async action.\n\x09 *\n\x09 * @param Url Model url.\n\x09 * @param Properties The properties for defining the render environment.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeLoadRenderAction.h" },
		{ "ToolTip", "Creates load render async action.\n\n@param Url Model url.\n@param Properties The properties for defining the render environment." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_LoadAvatarRenderAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeLoadRenderAction, nullptr, "LoadAvatarRenderAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_LoadAvatarRenderAsync_Statics::ReadyPlayerMeLoadRenderAction_eventLoadAvatarRenderAsync_Parms), Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_LoadAvatarRenderAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_LoadAvatarRenderAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_LoadAvatarRenderAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_LoadAvatarRenderAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_LoadAvatarRenderAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_LoadAvatarRenderAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_OnImageDownloaded_Statics
	{
		struct ReadyPlayerMeLoadRenderAction_eventOnImageDownloaded_Parms
		{
			bool bSuccess;
		};
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_OnImageDownloaded_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((ReadyPlayerMeLoadRenderAction_eventOnImageDownloaded_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_OnImageDownloaded_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ReadyPlayerMeLoadRenderAction_eventOnImageDownloaded_Parms), &Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_OnImageDownloaded_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_OnImageDownloaded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_OnImageDownloaded_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_OnImageDownloaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReadyPlayerMeLoadRenderAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_OnImageDownloaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeLoadRenderAction, nullptr, "OnImageDownloaded", nullptr, nullptr, sizeof(Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_OnImageDownloaded_Statics::ReadyPlayerMeLoadRenderAction_eventOnImageDownloaded_Parms), Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_OnImageDownloaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_OnImageDownloaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_OnImageDownloaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_OnImageDownloaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_OnImageDownloaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_OnImageDownloaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReadyPlayerMeLoadRenderAction);
	UClass* Z_Construct_UClass_UReadyPlayerMeLoadRenderAction_NoRegister()
	{
		return UReadyPlayerMeLoadRenderAction::StaticClass();
	}
	struct Z_Construct_UClass_UReadyPlayerMeLoadRenderAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompleted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFailed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReadyPlayerMeLoadRenderAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ReadyPlayerMe,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UReadyPlayerMeLoadRenderAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_LoadAvatarRenderAsync, "LoadAvatarRenderAsync" }, // 1022903190
		{ &Z_Construct_UFunction_UReadyPlayerMeLoadRenderAction_OnImageDownloaded, "OnImageDownloaded" }, // 3337155869
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeLoadRenderAction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Async action, responsible for Loading rendered image from the avatar url.\n */" },
		{ "IncludePath", "ReadyPlayerMeLoadRenderAction.h" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeLoadRenderAction.h" },
		{ "ToolTip", "Async action, responsible for Loading rendered image from the avatar url." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeLoadRenderAction_Statics::NewProp_OnCompleted_MetaData[] = {
		{ "Comment", "/** Success callback. Called when the render is loaded and provides the avatar texture as an argument. */" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeLoadRenderAction.h" },
		{ "ToolTip", "Success callback. Called when the render is loaded and provides the avatar texture as an argument." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UReadyPlayerMeLoadRenderAction_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReadyPlayerMeLoadRenderAction, OnCompleted), Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UReadyPlayerMeLoadRenderAction_Statics::NewProp_OnCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeLoadRenderAction_Statics::NewProp_OnCompleted_MetaData)) }; // 3566031394
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeLoadRenderAction_Statics::NewProp_OnFailed_MetaData[] = {
		{ "Comment", "/** Failure callback. If the render operation fails, the failure callback will be called. */" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeLoadRenderAction.h" },
		{ "ToolTip", "Failure callback. If the render operation fails, the failure callback will be called." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UReadyPlayerMeLoadRenderAction_Statics::NewProp_OnFailed = { "OnFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReadyPlayerMeLoadRenderAction, OnFailed), Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UReadyPlayerMeLoadRenderAction_Statics::NewProp_OnFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeLoadRenderAction_Statics::NewProp_OnFailed_MetaData)) }; // 3566031394
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReadyPlayerMeLoadRenderAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeLoadRenderAction_Statics::NewProp_OnCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeLoadRenderAction_Statics::NewProp_OnFailed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReadyPlayerMeLoadRenderAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReadyPlayerMeLoadRenderAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReadyPlayerMeLoadRenderAction_Statics::ClassParams = {
		&UReadyPlayerMeLoadRenderAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UReadyPlayerMeLoadRenderAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeLoadRenderAction_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UReadyPlayerMeLoadRenderAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeLoadRenderAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReadyPlayerMeLoadRenderAction()
	{
		if (!Z_Registration_Info_UClass_UReadyPlayerMeLoadRenderAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReadyPlayerMeLoadRenderAction.OuterSingleton, Z_Construct_UClass_UReadyPlayerMeLoadRenderAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReadyPlayerMeLoadRenderAction.OuterSingleton;
	}
	template<> READYPLAYERME_API UClass* StaticClass<UReadyPlayerMeLoadRenderAction>()
	{
		return UReadyPlayerMeLoadRenderAction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReadyPlayerMeLoadRenderAction);
	struct Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeLoadRenderAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeLoadRenderAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReadyPlayerMeLoadRenderAction, UReadyPlayerMeLoadRenderAction::StaticClass, TEXT("UReadyPlayerMeLoadRenderAction"), &Z_Registration_Info_UClass_UReadyPlayerMeLoadRenderAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReadyPlayerMeLoadRenderAction), 3619356482U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeLoadRenderAction_h_78263851(TEXT("/Script/ReadyPlayerMe"),
		Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeLoadRenderAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeLoadRenderAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
