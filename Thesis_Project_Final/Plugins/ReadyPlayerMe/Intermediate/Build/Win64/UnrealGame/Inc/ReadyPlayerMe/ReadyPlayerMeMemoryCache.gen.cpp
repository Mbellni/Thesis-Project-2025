// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReadyPlayerMe/Public/ReadyPlayerMeMemoryCache.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReadyPlayerMeMemoryCache() {}
// Cross Module References
	READYPLAYERME_API UScriptStruct* Z_Construct_UScriptStruct_FAvatarMemoryCacheData();
	UPackage* Z_Construct_UPackage__Script_ReadyPlayerMe();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	READYPLAYERME_API UScriptStruct* Z_Construct_UScriptStruct_FAvatarMetadata();
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeMemoryCache_NoRegister();
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeMemoryCache();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeAvatarConfig_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AvatarMemoryCacheData;
class UScriptStruct* FAvatarMemoryCacheData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AvatarMemoryCacheData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AvatarMemoryCacheData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAvatarMemoryCacheData, Z_Construct_UPackage__Script_ReadyPlayerMe(), TEXT("AvatarMemoryCacheData"));
	}
	return Z_Registration_Info_UScriptStruct_AvatarMemoryCacheData.OuterSingleton;
}
template<> READYPLAYERME_API UScriptStruct* StaticStruct<FAvatarMemoryCacheData>()
{
	return FAvatarMemoryCacheData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvatarId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AvatarId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvatarConfigHash_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AvatarConfigHash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeMemoryCache.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAvatarMemoryCacheData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::NewProp_AvatarId_MetaData[] = {
		{ "Category", "ReadyPlayerMe" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeMemoryCache.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::NewProp_AvatarId = { "AvatarId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAvatarMemoryCacheData, AvatarId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::NewProp_AvatarId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::NewProp_AvatarId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::NewProp_AvatarConfigHash_MetaData[] = {
		{ "Category", "ReadyPlayerMe" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeMemoryCache.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::NewProp_AvatarConfigHash = { "AvatarConfigHash", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAvatarMemoryCacheData, AvatarConfigHash), METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::NewProp_AvatarConfigHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::NewProp_AvatarConfigHash_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "ReadyPlayerMe" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeMemoryCache.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAvatarMemoryCacheData, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::NewProp_Metadata_MetaData[] = {
		{ "Category", "ReadyPlayerMe" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeMemoryCache.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAvatarMemoryCacheData, Metadata), Z_Construct_UScriptStruct_FAvatarMetadata, METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::NewProp_Metadata_MetaData)) }; // 1141125426
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::NewProp_AvatarId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::NewProp_AvatarConfigHash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::NewProp_Metadata,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ReadyPlayerMe,
		nullptr,
		&NewStructOps,
		"AvatarMemoryCacheData",
		sizeof(FAvatarMemoryCacheData),
		alignof(FAvatarMemoryCacheData),
		Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAvatarMemoryCacheData()
	{
		if (!Z_Registration_Info_UScriptStruct_AvatarMemoryCacheData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AvatarMemoryCacheData.InnerSingleton, Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AvatarMemoryCacheData.InnerSingleton;
	}
	DEFINE_FUNCTION(UReadyPlayerMeMemoryCache::execClearAvatars)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAvatars();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadyPlayerMeMemoryCache::execClearAvatar)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AvatarId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAvatar(Z_Param_AvatarId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadyPlayerMeMemoryCache::execAddAvatar)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AvatarId);
		P_GET_OBJECT(UReadyPlayerMeAvatarConfig,Z_Param_AvatarConfig);
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
		P_GET_STRUCT_REF(FAvatarMetadata,Z_Param_Out_Metadata);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAvatar(Z_Param_AvatarId,Z_Param_AvatarConfig,Z_Param_SkeletalMesh,Z_Param_Out_Metadata);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadyPlayerMeMemoryCache::execGetAvatarCacheData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AvatarId);
		P_GET_OBJECT(UReadyPlayerMeAvatarConfig,Z_Param_AvatarConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAvatarMemoryCacheData*)Z_Param__Result=P_THIS->GetAvatarCacheData(Z_Param_AvatarId,Z_Param_AvatarConfig);
		P_NATIVE_END;
	}
	void UReadyPlayerMeMemoryCache::StaticRegisterNativesUReadyPlayerMeMemoryCache()
	{
		UClass* Class = UReadyPlayerMeMemoryCache::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAvatar", &UReadyPlayerMeMemoryCache::execAddAvatar },
			{ "ClearAvatar", &UReadyPlayerMeMemoryCache::execClearAvatar },
			{ "ClearAvatars", &UReadyPlayerMeMemoryCache::execClearAvatars },
			{ "GetAvatarCacheData", &UReadyPlayerMeMemoryCache::execGetAvatarCacheData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UReadyPlayerMeMemoryCache_AddAvatar_Statics
	{
		struct ReadyPlayerMeMemoryCache_eventAddAvatar_Parms
		{
			FString AvatarId;
			UReadyPlayerMeAvatarConfig* AvatarConfig;
			USkeletalMesh* SkeletalMesh;
			FAvatarMetadata Metadata;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvatarId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AvatarId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AvatarConfig;
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeMemoryCache_AddAvatar_Statics::NewProp_AvatarId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadyPlayerMeMemoryCache_AddAvatar_Statics::NewProp_AvatarId = { "AvatarId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadyPlayerMeMemoryCache_eventAddAvatar_Parms, AvatarId), METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_AddAvatar_Statics::NewProp_AvatarId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_AddAvatar_Statics::NewProp_AvatarId_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReadyPlayerMeMemoryCache_AddAvatar_Statics::NewProp_AvatarConfig = { "AvatarConfig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadyPlayerMeMemoryCache_eventAddAvatar_Parms, AvatarConfig), Z_Construct_UClass_UReadyPlayerMeAvatarConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReadyPlayerMeMemoryCache_AddAvatar_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadyPlayerMeMemoryCache_eventAddAvatar_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeMemoryCache_AddAvatar_Statics::NewProp_Metadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReadyPlayerMeMemoryCache_AddAvatar_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadyPlayerMeMemoryCache_eventAddAvatar_Parms, Metadata), Z_Construct_UScriptStruct_FAvatarMetadata, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_AddAvatar_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_AddAvatar_Statics::NewProp_Metadata_MetaData)) }; // 1141125426
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeMemoryCache_AddAvatar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeMemoryCache_AddAvatar_Statics::NewProp_AvatarId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeMemoryCache_AddAvatar_Statics::NewProp_AvatarConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeMemoryCache_AddAvatar_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeMemoryCache_AddAvatar_Statics::NewProp_Metadata,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeMemoryCache_AddAvatar_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "Comment", "/**\n\x09 * Adds an already loaded avatar to the memory.\n\x09 *\n\x09 * @param AvatarId Avatar Id or url.\n\x09 * @param AvatarConfig Avatar config.\n\x09 * @param SkeletalMesh Preloaded skeletalMesh of the avatar.\n\x09 * @param Metadata Preloaded avatar Metadata.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeMemoryCache.h" },
		{ "ToolTip", "Adds an already loaded avatar to the memory.\n\n@param AvatarId Avatar Id or url.\n@param AvatarConfig Avatar config.\n@param SkeletalMesh Preloaded skeletalMesh of the avatar.\n@param Metadata Preloaded avatar Metadata." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeMemoryCache_AddAvatar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeMemoryCache, nullptr, "AddAvatar", nullptr, nullptr, sizeof(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_AddAvatar_Statics::ReadyPlayerMeMemoryCache_eventAddAvatar_Parms), Z_Construct_UFunction_UReadyPlayerMeMemoryCache_AddAvatar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_AddAvatar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_AddAvatar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_AddAvatar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadyPlayerMeMemoryCache_AddAvatar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeMemoryCache_AddAvatar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadyPlayerMeMemoryCache_ClearAvatar_Statics
	{
		struct ReadyPlayerMeMemoryCache_eventClearAvatar_Parms
		{
			FString AvatarId;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvatarId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AvatarId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeMemoryCache_ClearAvatar_Statics::NewProp_AvatarId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadyPlayerMeMemoryCache_ClearAvatar_Statics::NewProp_AvatarId = { "AvatarId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadyPlayerMeMemoryCache_eventClearAvatar_Parms, AvatarId), METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_ClearAvatar_Statics::NewProp_AvatarId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_ClearAvatar_Statics::NewProp_AvatarId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeMemoryCache_ClearAvatar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeMemoryCache_ClearAvatar_Statics::NewProp_AvatarId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeMemoryCache_ClearAvatar_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "Comment", "/**\n\x09 * Removes specific avatar data from the memory.\n\x09 *\n\x09 * @param AvatarId Avatar Id or url.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeMemoryCache.h" },
		{ "ToolTip", "Removes specific avatar data from the memory.\n\n@param AvatarId Avatar Id or url." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeMemoryCache_ClearAvatar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeMemoryCache, nullptr, "ClearAvatar", nullptr, nullptr, sizeof(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_ClearAvatar_Statics::ReadyPlayerMeMemoryCache_eventClearAvatar_Parms), Z_Construct_UFunction_UReadyPlayerMeMemoryCache_ClearAvatar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_ClearAvatar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_ClearAvatar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_ClearAvatar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadyPlayerMeMemoryCache_ClearAvatar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeMemoryCache_ClearAvatar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadyPlayerMeMemoryCache_ClearAvatars_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeMemoryCache_ClearAvatars_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "Comment", "/** Clears all avatars from the memory. */" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeMemoryCache.h" },
		{ "ToolTip", "Clears all avatars from the memory." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeMemoryCache_ClearAvatars_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeMemoryCache, nullptr, "ClearAvatars", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_ClearAvatars_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_ClearAvatars_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadyPlayerMeMemoryCache_ClearAvatars()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeMemoryCache_ClearAvatars_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadyPlayerMeMemoryCache_GetAvatarCacheData_Statics
	{
		struct ReadyPlayerMeMemoryCache_eventGetAvatarCacheData_Parms
		{
			FString AvatarId;
			UReadyPlayerMeAvatarConfig* AvatarConfig;
			FAvatarMemoryCacheData ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvatarId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AvatarId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AvatarConfig;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeMemoryCache_GetAvatarCacheData_Statics::NewProp_AvatarId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadyPlayerMeMemoryCache_GetAvatarCacheData_Statics::NewProp_AvatarId = { "AvatarId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadyPlayerMeMemoryCache_eventGetAvatarCacheData_Parms, AvatarId), METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_GetAvatarCacheData_Statics::NewProp_AvatarId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_GetAvatarCacheData_Statics::NewProp_AvatarId_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReadyPlayerMeMemoryCache_GetAvatarCacheData_Statics::NewProp_AvatarConfig = { "AvatarConfig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadyPlayerMeMemoryCache_eventGetAvatarCacheData_Parms, AvatarConfig), Z_Construct_UClass_UReadyPlayerMeAvatarConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReadyPlayerMeMemoryCache_GetAvatarCacheData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadyPlayerMeMemoryCache_eventGetAvatarCacheData_Parms, ReturnValue), Z_Construct_UScriptStruct_FAvatarMemoryCacheData, METADATA_PARAMS(nullptr, 0) }; // 3909275008
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeMemoryCache_GetAvatarCacheData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeMemoryCache_GetAvatarCacheData_Statics::NewProp_AvatarId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeMemoryCache_GetAvatarCacheData_Statics::NewProp_AvatarConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeMemoryCache_GetAvatarCacheData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeMemoryCache_GetAvatarCacheData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "Comment", "/**\n\x09 * Returns the preload avatar data for a specific avatar.\n\x09 *\n\x09 * @param AvatarId Avatar url.\n\x09 * @param AvatarConfig Avatar config.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeMemoryCache.h" },
		{ "ToolTip", "Returns the preload avatar data for a specific avatar.\n\n@param AvatarId Avatar url.\n@param AvatarConfig Avatar config." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeMemoryCache_GetAvatarCacheData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeMemoryCache, nullptr, "GetAvatarCacheData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_GetAvatarCacheData_Statics::ReadyPlayerMeMemoryCache_eventGetAvatarCacheData_Parms), Z_Construct_UFunction_UReadyPlayerMeMemoryCache_GetAvatarCacheData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_GetAvatarCacheData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_GetAvatarCacheData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_GetAvatarCacheData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadyPlayerMeMemoryCache_GetAvatarCacheData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeMemoryCache_GetAvatarCacheData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReadyPlayerMeMemoryCache);
	UClass* Z_Construct_UClass_UReadyPlayerMeMemoryCache_NoRegister()
	{
		return UReadyPlayerMeMemoryCache::StaticClass();
	}
	struct Z_Construct_UClass_UReadyPlayerMeMemoryCache_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedAvatars_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedAvatars_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedAvatars;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReadyPlayerMeMemoryCache_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ReadyPlayerMe,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UReadyPlayerMeMemoryCache_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UReadyPlayerMeMemoryCache_AddAvatar, "AddAvatar" }, // 1739139910
		{ &Z_Construct_UFunction_UReadyPlayerMeMemoryCache_ClearAvatar, "ClearAvatar" }, // 1304143429
		{ &Z_Construct_UFunction_UReadyPlayerMeMemoryCache_ClearAvatars, "ClearAvatars" }, // 977544465
		{ &Z_Construct_UFunction_UReadyPlayerMeMemoryCache_GetAvatarCacheData, "GetAvatarCacheData" }, // 4162034935
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeMemoryCache_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Is used to preload avatars and store the cached skeletal meshes.\n * Cached avatars will be instantiated instantly. \n */" },
		{ "IncludePath", "ReadyPlayerMeMemoryCache.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeMemoryCache.h" },
		{ "ToolTip", "Is used to preload avatars and store the cached skeletal meshes.\nCached avatars will be instantiated instantly." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UReadyPlayerMeMemoryCache_Statics::NewProp_CachedAvatars_Inner = { "CachedAvatars", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAvatarMemoryCacheData, METADATA_PARAMS(nullptr, 0) }; // 3909275008
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeMemoryCache_Statics::NewProp_CachedAvatars_MetaData[] = {
		{ "Category", "ReadyPlayerMe" },
		{ "Comment", "/** Avatar Data for all the preloaded avatars. */" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeMemoryCache.h" },
		{ "ToolTip", "Avatar Data for all the preloaded avatars." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UReadyPlayerMeMemoryCache_Statics::NewProp_CachedAvatars = { "CachedAvatars", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReadyPlayerMeMemoryCache, CachedAvatars), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UReadyPlayerMeMemoryCache_Statics::NewProp_CachedAvatars_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeMemoryCache_Statics::NewProp_CachedAvatars_MetaData)) }; // 3909275008
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReadyPlayerMeMemoryCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeMemoryCache_Statics::NewProp_CachedAvatars_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeMemoryCache_Statics::NewProp_CachedAvatars,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReadyPlayerMeMemoryCache_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReadyPlayerMeMemoryCache>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReadyPlayerMeMemoryCache_Statics::ClassParams = {
		&UReadyPlayerMeMemoryCache::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UReadyPlayerMeMemoryCache_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeMemoryCache_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UReadyPlayerMeMemoryCache_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeMemoryCache_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReadyPlayerMeMemoryCache()
	{
		if (!Z_Registration_Info_UClass_UReadyPlayerMeMemoryCache.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReadyPlayerMeMemoryCache.OuterSingleton, Z_Construct_UClass_UReadyPlayerMeMemoryCache_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReadyPlayerMeMemoryCache.OuterSingleton;
	}
	template<> READYPLAYERME_API UClass* StaticClass<UReadyPlayerMeMemoryCache>()
	{
		return UReadyPlayerMeMemoryCache::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReadyPlayerMeMemoryCache);
	struct Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_Statics::ScriptStructInfo[] = {
		{ FAvatarMemoryCacheData::StaticStruct, Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::NewStructOps, TEXT("AvatarMemoryCacheData"), &Z_Registration_Info_UScriptStruct_AvatarMemoryCacheData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAvatarMemoryCacheData), 3909275008U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReadyPlayerMeMemoryCache, UReadyPlayerMeMemoryCache::StaticClass, TEXT("UReadyPlayerMeMemoryCache"), &Z_Registration_Info_UClass_UReadyPlayerMeMemoryCache, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReadyPlayerMeMemoryCache), 2699380904U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_1814274742(TEXT("/Script/ReadyPlayerMe"),
		Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
