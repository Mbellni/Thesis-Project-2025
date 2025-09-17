// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReadyPlayerMe/Public/ReadyPlayerMePreloadAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReadyPlayerMePreloadAction() {}
// Cross Module References
	READYPLAYERME_API UScriptStruct* Z_Construct_UScriptStruct_FAvatarPreloadData();
	UPackage* Z_Construct_UPackage__Script_ReadyPlayerMe();
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeAvatarConfig_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	GLTFRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FglTFRuntimeSkeletalMeshConfig();
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeAutoLodConfig_NoRegister();
	READYPLAYERME_API UFunction* Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarPreloadCompleted__DelegateSignature();
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMePreloadAction_NoRegister();
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMePreloadAction();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	READYPLAYERME_API UScriptStruct* Z_Construct_UScriptStruct_FAvatarMetadata();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeAvatarLoader_NoRegister();
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeMemoryCache_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AvatarPreloadData;
class UScriptStruct* FAvatarPreloadData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AvatarPreloadData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AvatarPreloadData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAvatarPreloadData, Z_Construct_UPackage__Script_ReadyPlayerMe(), TEXT("AvatarPreloadData"));
	}
	return Z_Registration_Info_UScriptStruct_AvatarPreloadData.OuterSingleton;
}
template<> READYPLAYERME_API UScriptStruct* StaticStruct<FAvatarPreloadData>()
{
	return FAvatarPreloadData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAvatarPreloadData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_AvatarIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvatarIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AvatarIds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvatarConfig_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AvatarConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetSkeleton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetSkeleton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletalMeshConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoLodConfig_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AutoLodConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMePreloadAction.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAvatarPreloadData>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_AvatarIds_Inner = { "AvatarIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_AvatarIds_MetaData[] = {
		{ "Category", "ReadyPlayerMe" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMePreloadAction.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_AvatarIds = { "AvatarIds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAvatarPreloadData, AvatarIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_AvatarIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_AvatarIds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_AvatarConfig_MetaData[] = {
		{ "Category", "ReadyPlayerMe" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMePreloadAction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_AvatarConfig = { "AvatarConfig", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAvatarPreloadData, AvatarConfig), Z_Construct_UClass_UReadyPlayerMeAvatarConfig_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_AvatarConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_AvatarConfig_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_TargetSkeleton_MetaData[] = {
		{ "Category", "ReadyPlayerMe" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMePreloadAction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_TargetSkeleton = { "TargetSkeleton", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAvatarPreloadData, TargetSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_TargetSkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_TargetSkeleton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_SkeletalMeshConfig_MetaData[] = {
		{ "Category", "ReadyPlayerMe" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMePreloadAction.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_SkeletalMeshConfig = { "SkeletalMeshConfig", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAvatarPreloadData, SkeletalMeshConfig), Z_Construct_UScriptStruct_FglTFRuntimeSkeletalMeshConfig, METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_SkeletalMeshConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_SkeletalMeshConfig_MetaData)) }; // 1416497278
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_AutoLodConfig_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMePreloadAction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_AutoLodConfig = { "AutoLodConfig", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAvatarPreloadData, AutoLodConfig), Z_Construct_UClass_UReadyPlayerMeAutoLodConfig_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_AutoLodConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_AutoLodConfig_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_AvatarIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_AvatarIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_AvatarConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_TargetSkeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_SkeletalMeshConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_AutoLodConfig,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ReadyPlayerMe,
		nullptr,
		&NewStructOps,
		"AvatarPreloadData",
		sizeof(FAvatarPreloadData),
		alignof(FAvatarPreloadData),
		Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAvatarPreloadData()
	{
		if (!Z_Registration_Info_UScriptStruct_AvatarPreloadData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AvatarPreloadData.InnerSingleton, Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AvatarPreloadData.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarPreloadCompleted__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarPreloadCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReadyPlayerMePreloadAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarPreloadCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ReadyPlayerMe, nullptr, "AvatarPreloadCompleted__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarPreloadCompleted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarPreloadCompleted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarPreloadCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarPreloadCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UReadyPlayerMePreloadAction::execOnAvatarLoadFailed)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ErrorMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAvatarLoadFailed(Z_Param_ErrorMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadyPlayerMePreloadAction::execOnAvatarDownloaded)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
		P_GET_STRUCT_REF(FAvatarMetadata,Z_Param_Out_Metadata);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAvatarDownloaded(Z_Param_SkeletalMesh,Z_Param_Out_Metadata);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadyPlayerMePreloadAction::execPreloadAvatarsAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FAvatarPreloadData,Z_Param_Out_PreloadData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UReadyPlayerMePreloadAction**)Z_Param__Result=UReadyPlayerMePreloadAction::PreloadAvatarsAsync(Z_Param_WorldContextObject,Z_Param_Out_PreloadData);
		P_NATIVE_END;
	}
	void UReadyPlayerMePreloadAction::StaticRegisterNativesUReadyPlayerMePreloadAction()
	{
		UClass* Class = UReadyPlayerMePreloadAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAvatarDownloaded", &UReadyPlayerMePreloadAction::execOnAvatarDownloaded },
			{ "OnAvatarLoadFailed", &UReadyPlayerMePreloadAction::execOnAvatarLoadFailed },
			{ "PreloadAvatarsAsync", &UReadyPlayerMePreloadAction::execPreloadAvatarsAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarDownloaded_Statics
	{
		struct ReadyPlayerMePreloadAction_eventOnAvatarDownloaded_Parms
		{
			USkeletalMesh* SkeletalMesh;
			FAvatarMetadata Metadata;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarDownloaded_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadyPlayerMePreloadAction_eventOnAvatarDownloaded_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarDownloaded_Statics::NewProp_Metadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarDownloaded_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadyPlayerMePreloadAction_eventOnAvatarDownloaded_Parms, Metadata), Z_Construct_UScriptStruct_FAvatarMetadata, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarDownloaded_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarDownloaded_Statics::NewProp_Metadata_MetaData)) }; // 1141125426
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarDownloaded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarDownloaded_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarDownloaded_Statics::NewProp_Metadata,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarDownloaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReadyPlayerMePreloadAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarDownloaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMePreloadAction, nullptr, "OnAvatarDownloaded", nullptr, nullptr, sizeof(Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarDownloaded_Statics::ReadyPlayerMePreloadAction_eventOnAvatarDownloaded_Parms), Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarDownloaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarDownloaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarDownloaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarDownloaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarDownloaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarDownloaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarLoadFailed_Statics
	{
		struct ReadyPlayerMePreloadAction_eventOnAvatarLoadFailed_Parms
		{
			FString ErrorMessage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarLoadFailed_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarLoadFailed_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadyPlayerMePreloadAction_eventOnAvatarLoadFailed_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarLoadFailed_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarLoadFailed_Statics::NewProp_ErrorMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarLoadFailed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarLoadFailed_Statics::NewProp_ErrorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarLoadFailed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReadyPlayerMePreloadAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarLoadFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMePreloadAction, nullptr, "OnAvatarLoadFailed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarLoadFailed_Statics::ReadyPlayerMePreloadAction_eventOnAvatarLoadFailed_Parms), Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarLoadFailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarLoadFailed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarLoadFailed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarLoadFailed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarLoadFailed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarLoadFailed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadyPlayerMePreloadAction_PreloadAvatarsAsync_Statics
	{
		struct ReadyPlayerMePreloadAction_eventPreloadAvatarsAsync_Parms
		{
			UObject* WorldContextObject;
			FAvatarPreloadData PreloadData;
			UReadyPlayerMePreloadAction* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreloadData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreloadData;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReadyPlayerMePreloadAction_PreloadAvatarsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadyPlayerMePreloadAction_eventPreloadAvatarsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMePreloadAction_PreloadAvatarsAsync_Statics::NewProp_PreloadData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReadyPlayerMePreloadAction_PreloadAvatarsAsync_Statics::NewProp_PreloadData = { "PreloadData", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadyPlayerMePreloadAction_eventPreloadAvatarsAsync_Parms, PreloadData), Z_Construct_UScriptStruct_FAvatarPreloadData, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMePreloadAction_PreloadAvatarsAsync_Statics::NewProp_PreloadData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMePreloadAction_PreloadAvatarsAsync_Statics::NewProp_PreloadData_MetaData)) }; // 1689982141
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReadyPlayerMePreloadAction_PreloadAvatarsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadyPlayerMePreloadAction_eventPreloadAvatarsAsync_Parms, ReturnValue), Z_Construct_UClass_UReadyPlayerMePreloadAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMePreloadAction_PreloadAvatarsAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMePreloadAction_PreloadAvatarsAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMePreloadAction_PreloadAvatarsAsync_Statics::NewProp_PreloadData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMePreloadAction_PreloadAvatarsAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMePreloadAction_PreloadAvatarsAsync_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "PreloadData" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Ready Player Me" },
		{ "Comment", "/**\n\x09 * Preloads the avatar data so the avatars would be instantiated instantly when loading them from the ReadyPlayerMeComponent.\n\x09 * \n\x09 * @param WorldContextObject Object is passed automatically through the blueprint interface.\n\x09 * @param PreloadData List of avatar data needed for preloading.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMePreloadAction.h" },
		{ "ToolTip", "Preloads the avatar data so the avatars would be instantiated instantly when loading them from the ReadyPlayerMeComponent.\n\n@param WorldContextObject Object is passed automatically through the blueprint interface.\n@param PreloadData List of avatar data needed for preloading." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMePreloadAction_PreloadAvatarsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMePreloadAction, nullptr, "PreloadAvatarsAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_UReadyPlayerMePreloadAction_PreloadAvatarsAsync_Statics::ReadyPlayerMePreloadAction_eventPreloadAvatarsAsync_Parms), Z_Construct_UFunction_UReadyPlayerMePreloadAction_PreloadAvatarsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMePreloadAction_PreloadAvatarsAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMePreloadAction_PreloadAvatarsAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMePreloadAction_PreloadAvatarsAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadyPlayerMePreloadAction_PreloadAvatarsAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMePreloadAction_PreloadAvatarsAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReadyPlayerMePreloadAction);
	UClass* Z_Construct_UClass_UReadyPlayerMePreloadAction_NoRegister()
	{
		return UReadyPlayerMePreloadAction::StaticClass();
	}
	struct Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AvatarLoaders_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AvatarLoaders_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvatarLoaders_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AvatarLoaders;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MemoryCache_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MemoryCache;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ReadyPlayerMe,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarDownloaded, "OnAvatarDownloaded" }, // 3949036759
		{ &Z_Construct_UFunction_UReadyPlayerMePreloadAction_OnAvatarLoadFailed, "OnAvatarLoadFailed" }, // 2231269016
		{ &Z_Construct_UFunction_UReadyPlayerMePreloadAction_PreloadAvatarsAsync, "PreloadAvatarsAsync" }, // 2186421142
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Async action, responsible for preloading avatars in memory to be used in the same game session.\n */" },
		{ "IncludePath", "ReadyPlayerMePreloadAction.h" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMePreloadAction.h" },
		{ "ToolTip", "Async action, responsible for preloading avatars in memory to be used in the same game session." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::NewProp_OnCompleted_MetaData[] = {
		{ "Comment", "/** Success callback. Called when the avatars are preloaded. */" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMePreloadAction.h" },
		{ "ToolTip", "Success callback. Called when the avatars are preloaded." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReadyPlayerMePreloadAction, OnCompleted), Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarPreloadCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::NewProp_OnCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::NewProp_OnCompleted_MetaData)) }; // 2781339531
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::NewProp_OnFailed_MetaData[] = {
		{ "Comment", "/** Failure callback. If the preload operation fails, the failure callback will be called. */" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMePreloadAction.h" },
		{ "ToolTip", "Failure callback. If the preload operation fails, the failure callback will be called." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::NewProp_OnFailed = { "OnFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReadyPlayerMePreloadAction, OnFailed), Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarPreloadCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::NewProp_OnFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::NewProp_OnFailed_MetaData)) }; // 2781339531
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::NewProp_AvatarLoaders_ValueProp = { "AvatarLoaders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UReadyPlayerMeAvatarLoader_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::NewProp_AvatarLoaders_Key_KeyProp = { "AvatarLoaders_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::NewProp_AvatarLoaders_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReadyPlayerMePreloadAction.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::NewProp_AvatarLoaders = { "AvatarLoaders", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReadyPlayerMePreloadAction, AvatarLoaders), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::NewProp_AvatarLoaders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::NewProp_AvatarLoaders_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::NewProp_MemoryCache_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReadyPlayerMePreloadAction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::NewProp_MemoryCache = { "MemoryCache", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReadyPlayerMePreloadAction, MemoryCache), Z_Construct_UClass_UReadyPlayerMeMemoryCache_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::NewProp_MemoryCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::NewProp_MemoryCache_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::NewProp_OnCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::NewProp_OnFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::NewProp_AvatarLoaders_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::NewProp_AvatarLoaders_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::NewProp_AvatarLoaders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::NewProp_MemoryCache,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReadyPlayerMePreloadAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::ClassParams = {
		&UReadyPlayerMePreloadAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReadyPlayerMePreloadAction()
	{
		if (!Z_Registration_Info_UClass_UReadyPlayerMePreloadAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReadyPlayerMePreloadAction.OuterSingleton, Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReadyPlayerMePreloadAction.OuterSingleton;
	}
	template<> READYPLAYERME_API UClass* StaticClass<UReadyPlayerMePreloadAction>()
	{
		return UReadyPlayerMePreloadAction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReadyPlayerMePreloadAction);
	struct Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h_Statics::ScriptStructInfo[] = {
		{ FAvatarPreloadData::StaticStruct, Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewStructOps, TEXT("AvatarPreloadData"), &Z_Registration_Info_UScriptStruct_AvatarPreloadData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAvatarPreloadData), 1689982141U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReadyPlayerMePreloadAction, UReadyPlayerMePreloadAction::StaticClass, TEXT("UReadyPlayerMePreloadAction"), &Z_Registration_Info_UClass_UReadyPlayerMePreloadAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReadyPlayerMePreloadAction), 3219807486U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h_1290650612(TEXT("/Script/ReadyPlayerMe"),
		Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
