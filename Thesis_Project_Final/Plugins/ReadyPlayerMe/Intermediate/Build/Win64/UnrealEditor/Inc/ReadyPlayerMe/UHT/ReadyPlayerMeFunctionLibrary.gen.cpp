// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReadyPlayerMe/Public/ReadyPlayerMeFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReadyPlayerMeFunctionLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeFunctionLibrary();
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeFunctionLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ReadyPlayerMe();
// End Cross Module References
	DEFINE_FUNCTION(UReadyPlayerMeFunctionLibrary::execClearAvatarFromMemory)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_AvatarId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UReadyPlayerMeFunctionLibrary::ClearAvatarFromMemory(Z_Param_WorldContextObject,Z_Param_AvatarId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadyPlayerMeFunctionLibrary::execClearAvatarsFromMemory)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UReadyPlayerMeFunctionLibrary::ClearAvatarsFromMemory(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadyPlayerMeFunctionLibrary::execGetAvatarId)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Url);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UReadyPlayerMeFunctionLibrary::GetAvatarId(Z_Param_Url);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadyPlayerMeFunctionLibrary::execGetAvatarCacheSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=UReadyPlayerMeFunctionLibrary::GetAvatarCacheSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadyPlayerMeFunctionLibrary::execGetCachedAvatarCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UReadyPlayerMeFunctionLibrary::GetCachedAvatarCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadyPlayerMeFunctionLibrary::execIsAvatarCacheEmpty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UReadyPlayerMeFunctionLibrary::IsAvatarCacheEmpty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadyPlayerMeFunctionLibrary::execClearAvatarFromCache)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_AvatarId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UReadyPlayerMeFunctionLibrary::ClearAvatarFromCache(Z_Param_WorldContextObject,Z_Param_AvatarId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadyPlayerMeFunctionLibrary::execClearAvatarCache)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UReadyPlayerMeFunctionLibrary::ClearAvatarCache(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void UReadyPlayerMeFunctionLibrary::StaticRegisterNativesUReadyPlayerMeFunctionLibrary()
	{
		UClass* Class = UReadyPlayerMeFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearAvatarCache", &UReadyPlayerMeFunctionLibrary::execClearAvatarCache },
			{ "ClearAvatarFromCache", &UReadyPlayerMeFunctionLibrary::execClearAvatarFromCache },
			{ "ClearAvatarFromMemory", &UReadyPlayerMeFunctionLibrary::execClearAvatarFromMemory },
			{ "ClearAvatarsFromMemory", &UReadyPlayerMeFunctionLibrary::execClearAvatarsFromMemory },
			{ "GetAvatarCacheSize", &UReadyPlayerMeFunctionLibrary::execGetAvatarCacheSize },
			{ "GetAvatarId", &UReadyPlayerMeFunctionLibrary::execGetAvatarId },
			{ "GetCachedAvatarCount", &UReadyPlayerMeFunctionLibrary::execGetCachedAvatarCount },
			{ "IsAvatarCacheEmpty", &UReadyPlayerMeFunctionLibrary::execIsAvatarCacheEmpty },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarCache_Statics
	{
		struct ReadyPlayerMeFunctionLibrary_eventClearAvatarCache_Parms
		{
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarCache_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarCache_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadyPlayerMeFunctionLibrary_eventClearAvatarCache_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarCache_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarCache_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarCache_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me | Avatar Caching" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Clears all avatars from the persistent cache. */" },
#endif
		{ "DisplayName", "Clear Avatar Cache" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clears all avatars from the persistent cache." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeFunctionLibrary, nullptr, "ClearAvatarCache", nullptr, nullptr, Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarCache_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarCache_Statics::ReadyPlayerMeFunctionLibrary_eventClearAvatarCache_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarCache_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarCache_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarCache_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarCache_Statics::ReadyPlayerMeFunctionLibrary_eventClearAvatarCache_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarFromCache_Statics
	{
		struct ReadyPlayerMeFunctionLibrary_eventClearAvatarFromCache_Parms
		{
			const UObject* WorldContextObject;
			FString AvatarId;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarFromCache_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarFromCache_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadyPlayerMeFunctionLibrary_eventClearAvatarFromCache_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarFromCache_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarFromCache_Statics::NewProp_WorldContextObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarFromCache_Statics::NewProp_AvatarId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarFromCache_Statics::NewProp_AvatarId = { "AvatarId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadyPlayerMeFunctionLibrary_eventClearAvatarFromCache_Parms, AvatarId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarFromCache_Statics::NewProp_AvatarId_MetaData), Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarFromCache_Statics::NewProp_AvatarId_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarFromCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarFromCache_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarFromCache_Statics::NewProp_AvatarId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarFromCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me | Avatar Caching" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Clears a specific avatar from persistent cache. */" },
#endif
		{ "DisplayName", "Clear Avatar From Cache" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clears a specific avatar from persistent cache." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarFromCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeFunctionLibrary, nullptr, "ClearAvatarFromCache", nullptr, nullptr, Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarFromCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarFromCache_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarFromCache_Statics::ReadyPlayerMeFunctionLibrary_eventClearAvatarFromCache_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarFromCache_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarFromCache_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarFromCache_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarFromCache_Statics::ReadyPlayerMeFunctionLibrary_eventClearAvatarFromCache_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarFromCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarFromCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarFromMemory_Statics
	{
		struct ReadyPlayerMeFunctionLibrary_eventClearAvatarFromMemory_Parms
		{
			const UObject* WorldContextObject;
			FString AvatarId;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarFromMemory_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarFromMemory_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadyPlayerMeFunctionLibrary_eventClearAvatarFromMemory_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarFromMemory_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarFromMemory_Statics::NewProp_WorldContextObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarFromMemory_Statics::NewProp_AvatarId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarFromMemory_Statics::NewProp_AvatarId = { "AvatarId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadyPlayerMeFunctionLibrary_eventClearAvatarFromMemory_Parms, AvatarId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarFromMemory_Statics::NewProp_AvatarId_MetaData), Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarFromMemory_Statics::NewProp_AvatarId_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarFromMemory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarFromMemory_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarFromMemory_Statics::NewProp_AvatarId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarFromMemory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me | Memory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Clears a specific avatar from the memory. */" },
#endif
		{ "DisplayName", "Clear Avatar From Memory" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clears a specific avatar from the memory." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarFromMemory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeFunctionLibrary, nullptr, "ClearAvatarFromMemory", nullptr, nullptr, Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarFromMemory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarFromMemory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarFromMemory_Statics::ReadyPlayerMeFunctionLibrary_eventClearAvatarFromMemory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarFromMemory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarFromMemory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarFromMemory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarFromMemory_Statics::ReadyPlayerMeFunctionLibrary_eventClearAvatarFromMemory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarFromMemory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarFromMemory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarsFromMemory_Statics
	{
		struct ReadyPlayerMeFunctionLibrary_eventClearAvatarsFromMemory_Parms
		{
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarsFromMemory_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarsFromMemory_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadyPlayerMeFunctionLibrary_eventClearAvatarsFromMemory_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarsFromMemory_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarsFromMemory_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarsFromMemory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarsFromMemory_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarsFromMemory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me | Memory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Clears all avatars from the memory cache. */" },
#endif
		{ "DisplayName", "Clear Avatars From Memory" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clears all avatars from the memory cache." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarsFromMemory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeFunctionLibrary, nullptr, "ClearAvatarsFromMemory", nullptr, nullptr, Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarsFromMemory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarsFromMemory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarsFromMemory_Statics::ReadyPlayerMeFunctionLibrary_eventClearAvatarsFromMemory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarsFromMemory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarsFromMemory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarsFromMemory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarsFromMemory_Statics::ReadyPlayerMeFunctionLibrary_eventClearAvatarsFromMemory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarsFromMemory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarsFromMemory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarCacheSize_Statics
	{
		struct ReadyPlayerMeFunctionLibrary_eventGetAvatarCacheSize_Parms
		{
			int64 ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarCacheSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadyPlayerMeFunctionLibrary_eventGetAvatarCacheSize_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarCacheSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarCacheSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarCacheSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me | Avatar Caching" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Total Avatars stored in persistent cache. */" },
#endif
		{ "DisplayName", "Get Avatar Cache Size" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Total Avatars stored in persistent cache." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarCacheSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeFunctionLibrary, nullptr, "GetAvatarCacheSize", nullptr, nullptr, Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarCacheSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarCacheSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarCacheSize_Statics::ReadyPlayerMeFunctionLibrary_eventGetAvatarCacheSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarCacheSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarCacheSize_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarCacheSize_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarCacheSize_Statics::ReadyPlayerMeFunctionLibrary_eventGetAvatarCacheSize_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarCacheSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarCacheSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarId_Statics
	{
		struct ReadyPlayerMeFunctionLibrary_eventGetAvatarId_Parms
		{
			FString Url;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarId_Statics::NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarId_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadyPlayerMeFunctionLibrary_eventGetAvatarId_Parms, Url), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarId_Statics::NewProp_Url_MetaData), Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarId_Statics::NewProp_Url_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadyPlayerMeFunctionLibrary_eventGetAvatarId_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarId_Statics::NewProp_Url,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get unique id of the avatar. */" },
#endif
		{ "DisplayName", "Get Avatar Id" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get unique id of the avatar." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeFunctionLibrary, nullptr, "GetAvatarId", nullptr, nullptr, Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarId_Statics::ReadyPlayerMeFunctionLibrary_eventGetAvatarId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarId_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarId_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarId_Statics::ReadyPlayerMeFunctionLibrary_eventGetAvatarId_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetCachedAvatarCount_Statics
	{
		struct ReadyPlayerMeFunctionLibrary_eventGetCachedAvatarCount_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetCachedAvatarCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadyPlayerMeFunctionLibrary_eventGetCachedAvatarCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetCachedAvatarCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetCachedAvatarCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetCachedAvatarCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me | Avatar Caching" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Total Avatars stored in persistent cache. */" },
#endif
		{ "DisplayName", "Get Cached Avatar Count" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Total Avatars stored in persistent cache." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetCachedAvatarCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeFunctionLibrary, nullptr, "GetCachedAvatarCount", nullptr, nullptr, Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetCachedAvatarCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetCachedAvatarCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetCachedAvatarCount_Statics::ReadyPlayerMeFunctionLibrary_eventGetCachedAvatarCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetCachedAvatarCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetCachedAvatarCount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetCachedAvatarCount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetCachedAvatarCount_Statics::ReadyPlayerMeFunctionLibrary_eventGetCachedAvatarCount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetCachedAvatarCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetCachedAvatarCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsAvatarCacheEmpty_Statics
	{
		struct ReadyPlayerMeFunctionLibrary_eventIsAvatarCacheEmpty_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsAvatarCacheEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ReadyPlayerMeFunctionLibrary_eventIsAvatarCacheEmpty_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsAvatarCacheEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ReadyPlayerMeFunctionLibrary_eventIsAvatarCacheEmpty_Parms), &Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsAvatarCacheEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsAvatarCacheEmpty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsAvatarCacheEmpty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsAvatarCacheEmpty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me | Avatar Caching" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Is there any avatars present in the persistent cache. */" },
#endif
		{ "DisplayName", "Is Avatar Cache Empty" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is there any avatars present in the persistent cache." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsAvatarCacheEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeFunctionLibrary, nullptr, "IsAvatarCacheEmpty", nullptr, nullptr, Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsAvatarCacheEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsAvatarCacheEmpty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsAvatarCacheEmpty_Statics::ReadyPlayerMeFunctionLibrary_eventIsAvatarCacheEmpty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsAvatarCacheEmpty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsAvatarCacheEmpty_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsAvatarCacheEmpty_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsAvatarCacheEmpty_Statics::ReadyPlayerMeFunctionLibrary_eventIsAvatarCacheEmpty_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsAvatarCacheEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsAvatarCacheEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReadyPlayerMeFunctionLibrary);
	UClass* Z_Construct_UClass_UReadyPlayerMeFunctionLibrary_NoRegister()
	{
		return UReadyPlayerMeFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UReadyPlayerMeFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReadyPlayerMeFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ReadyPlayerMe,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeFunctionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UReadyPlayerMeFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarCache, "ClearAvatarCache" }, // 2199843723
		{ &Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarFromCache, "ClearAvatarFromCache" }, // 552827388
		{ &Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarFromMemory, "ClearAvatarFromMemory" }, // 2169990999
		{ &Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarsFromMemory, "ClearAvatarsFromMemory" }, // 4097136044
		{ &Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarCacheSize, "GetAvatarCacheSize" }, // 133233946
		{ &Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarId, "GetAvatarId" }, // 2484247370
		{ &Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetCachedAvatarCount, "GetCachedAvatarCount" }, // 388866160
		{ &Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsAvatarCacheEmpty, "IsAvatarCacheEmpty" }, // 1717630646
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeFunctionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeFunctionLibrary_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Static functions to be used from the blueprint.\n */" },
#endif
		{ "IncludePath", "ReadyPlayerMeFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Static functions to be used from the blueprint." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReadyPlayerMeFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReadyPlayerMeFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReadyPlayerMeFunctionLibrary_Statics::ClassParams = {
		&UReadyPlayerMeFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UReadyPlayerMeFunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UReadyPlayerMeFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UReadyPlayerMeFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReadyPlayerMeFunctionLibrary.OuterSingleton, Z_Construct_UClass_UReadyPlayerMeFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReadyPlayerMeFunctionLibrary.OuterSingleton;
	}
	template<> READYPLAYERME_API UClass* StaticClass<UReadyPlayerMeFunctionLibrary>()
	{
		return UReadyPlayerMeFunctionLibrary::StaticClass();
	}
	UReadyPlayerMeFunctionLibrary::UReadyPlayerMeFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReadyPlayerMeFunctionLibrary);
	UReadyPlayerMeFunctionLibrary::~UReadyPlayerMeFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReadyPlayerMeFunctionLibrary, UReadyPlayerMeFunctionLibrary::StaticClass, TEXT("UReadyPlayerMeFunctionLibrary"), &Z_Registration_Info_UClass_UReadyPlayerMeFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReadyPlayerMeFunctionLibrary), 3412279466U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeFunctionLibrary_h_2161937311(TEXT("/Script/ReadyPlayerMe"),
		Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
