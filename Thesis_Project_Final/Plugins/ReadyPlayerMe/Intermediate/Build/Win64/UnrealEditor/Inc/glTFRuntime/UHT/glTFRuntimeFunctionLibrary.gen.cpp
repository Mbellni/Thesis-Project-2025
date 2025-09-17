// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdParty/glTFRuntime/Public/glTFRuntimeFunctionLibrary.h"
#include "ThirdParty/glTFRuntime/Public/glTFRuntimeParser.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeglTFRuntimeFunctionLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GLTFRUNTIME_API UClass* Z_Construct_UClass_UglTFRuntimeAsset_NoRegister();
	GLTFRUNTIME_API UClass* Z_Construct_UClass_UglTFRuntimeFunctionLibrary();
	GLTFRUNTIME_API UClass* Z_Construct_UClass_UglTFRuntimeFunctionLibrary_NoRegister();
	GLTFRUNTIME_API UFunction* Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeCommandResponse__DelegateSignature();
	GLTFRUNTIME_API UFunction* Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeHttpProgress__DelegateSignature();
	GLTFRUNTIME_API UFunction* Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeHttpResponse__DelegateSignature();
	GLTFRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FglTFRuntimeConfig();
	GLTFRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FglTFRuntimeMeshLOD();
	GLTFRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FglTFRuntimePathItem();
	UPackage* Z_Construct_UPackage__Script_glTFRuntime();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeHttpResponse__DelegateSignature_Statics
	{
		struct _Script_glTFRuntime_eventglTFRuntimeHttpResponse_Parms
		{
			UglTFRuntimeAsset* Asset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeHttpResponse__DelegateSignature_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_glTFRuntime_eventglTFRuntimeHttpResponse_Parms, Asset), Z_Construct_UClass_UglTFRuntimeAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeHttpResponse__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeHttpResponse__DelegateSignature_Statics::NewProp_Asset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeHttpResponse__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/glTFRuntimeFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeHttpResponse__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_glTFRuntime, nullptr, "glTFRuntimeHttpResponse__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeHttpResponse__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeHttpResponse__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeHttpResponse__DelegateSignature_Statics::_Script_glTFRuntime_eventglTFRuntimeHttpResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeHttpResponse__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeHttpResponse__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeHttpResponse__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeHttpResponse__DelegateSignature_Statics::_Script_glTFRuntime_eventglTFRuntimeHttpResponse_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeHttpResponse__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeHttpResponse__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FglTFRuntimeHttpResponse_DelegateWrapper(const FScriptDelegate& glTFRuntimeHttpResponse, UglTFRuntimeAsset* Asset)
{
	struct _Script_glTFRuntime_eventglTFRuntimeHttpResponse_Parms
	{
		UglTFRuntimeAsset* Asset;
	};
	_Script_glTFRuntime_eventglTFRuntimeHttpResponse_Parms Parms;
	Parms.Asset=Asset;
	glTFRuntimeHttpResponse.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeHttpProgress__DelegateSignature_Statics
	{
		struct _Script_glTFRuntime_eventglTFRuntimeHttpProgress_Parms
		{
			FglTFRuntimeConfig LoaderConfig;
			int32 BytesProcessed;
			int32 TotalBytes;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoaderConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LoaderConfig;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BytesProcessed;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TotalBytes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeHttpProgress__DelegateSignature_Statics::NewProp_LoaderConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeHttpProgress__DelegateSignature_Statics::NewProp_LoaderConfig = { "LoaderConfig", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_glTFRuntime_eventglTFRuntimeHttpProgress_Parms, LoaderConfig), Z_Construct_UScriptStruct_FglTFRuntimeConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeHttpProgress__DelegateSignature_Statics::NewProp_LoaderConfig_MetaData), Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeHttpProgress__DelegateSignature_Statics::NewProp_LoaderConfig_MetaData) }; // 4097679897
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeHttpProgress__DelegateSignature_Statics::NewProp_BytesProcessed = { "BytesProcessed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_glTFRuntime_eventglTFRuntimeHttpProgress_Parms, BytesProcessed), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeHttpProgress__DelegateSignature_Statics::NewProp_TotalBytes = { "TotalBytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_glTFRuntime_eventglTFRuntimeHttpProgress_Parms, TotalBytes), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeHttpProgress__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeHttpProgress__DelegateSignature_Statics::NewProp_LoaderConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeHttpProgress__DelegateSignature_Statics::NewProp_BytesProcessed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeHttpProgress__DelegateSignature_Statics::NewProp_TotalBytes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeHttpProgress__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/glTFRuntimeFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeHttpProgress__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_glTFRuntime, nullptr, "glTFRuntimeHttpProgress__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeHttpProgress__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeHttpProgress__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeHttpProgress__DelegateSignature_Statics::_Script_glTFRuntime_eventglTFRuntimeHttpProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeHttpProgress__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeHttpProgress__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeHttpProgress__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeHttpProgress__DelegateSignature_Statics::_Script_glTFRuntime_eventglTFRuntimeHttpProgress_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeHttpProgress__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeHttpProgress__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FglTFRuntimeHttpProgress_DelegateWrapper(const FScriptDelegate& glTFRuntimeHttpProgress, FglTFRuntimeConfig const& LoaderConfig, int32 BytesProcessed, int32 TotalBytes)
{
	struct _Script_glTFRuntime_eventglTFRuntimeHttpProgress_Parms
	{
		FglTFRuntimeConfig LoaderConfig;
		int32 BytesProcessed;
		int32 TotalBytes;
	};
	_Script_glTFRuntime_eventglTFRuntimeHttpProgress_Parms Parms;
	Parms.LoaderConfig=LoaderConfig;
	Parms.BytesProcessed=BytesProcessed;
	Parms.TotalBytes=TotalBytes;
	glTFRuntimeHttpProgress.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeCommandResponse__DelegateSignature_Statics
	{
		struct _Script_glTFRuntime_eventglTFRuntimeCommandResponse_Parms
		{
			UglTFRuntimeAsset* Asset;
			int32 ExitCode;
			FString StdErr;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExitCode_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExitCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StdErr_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StdErr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeCommandResponse__DelegateSignature_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_glTFRuntime_eventglTFRuntimeCommandResponse_Parms, Asset), Z_Construct_UClass_UglTFRuntimeAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeCommandResponse__DelegateSignature_Statics::NewProp_ExitCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeCommandResponse__DelegateSignature_Statics::NewProp_ExitCode = { "ExitCode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_glTFRuntime_eventglTFRuntimeCommandResponse_Parms, ExitCode), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeCommandResponse__DelegateSignature_Statics::NewProp_ExitCode_MetaData), Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeCommandResponse__DelegateSignature_Statics::NewProp_ExitCode_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeCommandResponse__DelegateSignature_Statics::NewProp_StdErr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeCommandResponse__DelegateSignature_Statics::NewProp_StdErr = { "StdErr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_glTFRuntime_eventglTFRuntimeCommandResponse_Parms, StdErr), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeCommandResponse__DelegateSignature_Statics::NewProp_StdErr_MetaData), Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeCommandResponse__DelegateSignature_Statics::NewProp_StdErr_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeCommandResponse__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeCommandResponse__DelegateSignature_Statics::NewProp_Asset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeCommandResponse__DelegateSignature_Statics::NewProp_ExitCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeCommandResponse__DelegateSignature_Statics::NewProp_StdErr,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeCommandResponse__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/glTFRuntimeFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeCommandResponse__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_glTFRuntime, nullptr, "glTFRuntimeCommandResponse__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeCommandResponse__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeCommandResponse__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeCommandResponse__DelegateSignature_Statics::_Script_glTFRuntime_eventglTFRuntimeCommandResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeCommandResponse__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeCommandResponse__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeCommandResponse__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeCommandResponse__DelegateSignature_Statics::_Script_glTFRuntime_eventglTFRuntimeCommandResponse_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeCommandResponse__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeCommandResponse__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FglTFRuntimeCommandResponse_DelegateWrapper(const FScriptDelegate& glTFRuntimeCommandResponse, UglTFRuntimeAsset* Asset, const int32 ExitCode, const FString& StdErr)
{
	struct _Script_glTFRuntime_eventglTFRuntimeCommandResponse_Parms
	{
		UglTFRuntimeAsset* Asset;
		int32 ExitCode;
		FString StdErr;
	};
	_Script_glTFRuntime_eventglTFRuntimeCommandResponse_Parms Parms;
	Parms.Asset=Asset;
	Parms.ExitCode=ExitCode;
	Parms.StdErr=StdErr;
	glTFRuntimeCommandResponse.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UglTFRuntimeFunctionLibrary::execglTFLoadAssetFromFileMapAsync)
	{
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_FileMap);
		P_GET_STRUCT_REF(FglTFRuntimeConfig,Z_Param_Out_LoaderConfig);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Completed);
		P_FINISH;
		P_NATIVE_BEGIN;
		UglTFRuntimeFunctionLibrary::glTFLoadAssetFromFileMapAsync(Z_Param_Out_FileMap,Z_Param_Out_LoaderConfig,FglTFRuntimeHttpResponse(Z_Param_Out_Completed));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeFunctionLibrary::execglTFLoadAssetFromFileMap)
	{
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_FileMap);
		P_GET_STRUCT_REF(FglTFRuntimeConfig,Z_Param_Out_LoaderConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UglTFRuntimeAsset**)Z_Param__Result=UglTFRuntimeFunctionLibrary::glTFLoadAssetFromFileMap(Z_Param_Out_FileMap,Z_Param_Out_LoaderConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeFunctionLibrary::execglTFLoadAssetFromCommand)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Command);
		P_GET_PROPERTY(FStrProperty,Z_Param_Arguments);
		P_GET_PROPERTY(FStrProperty,Z_Param_WorkingDirectory);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Completed);
		P_GET_STRUCT_REF(FglTFRuntimeConfig,Z_Param_Out_LoaderConfig);
		P_GET_PROPERTY(FIntProperty,Z_Param_ExpectedExitCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		UglTFRuntimeFunctionLibrary::glTFLoadAssetFromCommand(Z_Param_Command,Z_Param_Arguments,Z_Param_WorkingDirectory,FglTFRuntimeCommandResponse(Z_Param_Out_Completed),Z_Param_Out_LoaderConfig,Z_Param_ExpectedExitCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeFunctionLibrary::execglTFMergeRuntimeLODs)
	{
		P_GET_TARRAY_REF(FglTFRuntimeMeshLOD,Z_Param_Out_RuntimeLODs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FglTFRuntimeMeshLOD*)Z_Param__Result=UglTFRuntimeFunctionLibrary::glTFMergeRuntimeLODs(Z_Param_Out_RuntimeLODs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeFunctionLibrary::execglTFLoadAssetFromBase64Async)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Base64);
		P_GET_STRUCT_REF(FglTFRuntimeConfig,Z_Param_Out_LoaderConfig);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Completed);
		P_FINISH;
		P_NATIVE_BEGIN;
		UglTFRuntimeFunctionLibrary::glTFLoadAssetFromBase64Async(Z_Param_Base64,Z_Param_Out_LoaderConfig,FglTFRuntimeHttpResponse(Z_Param_Out_Completed));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeFunctionLibrary::execglTFLoadAssetFromBase64)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Base64);
		P_GET_STRUCT_REF(FglTFRuntimeConfig,Z_Param_Out_LoaderConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UglTFRuntimeAsset**)Z_Param__Result=UglTFRuntimeFunctionLibrary::glTFLoadAssetFromBase64(Z_Param_Base64,Z_Param_Out_LoaderConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeFunctionLibrary::execGetNormalsAsBytesFromglTFRuntimeLODPrimitive)
	{
		P_GET_STRUCT_REF(FglTFRuntimeMeshLOD,Z_Param_Out_RuntimeLOD);
		P_GET_PROPERTY(FIntProperty,Z_Param_PrimitiveIndex);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Bytes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UglTFRuntimeFunctionLibrary::GetNormalsAsBytesFromglTFRuntimeLODPrimitive(Z_Param_Out_RuntimeLOD,Z_Param_PrimitiveIndex,Z_Param_Out_Bytes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeFunctionLibrary::execGetPositionsAsBytesFromglTFRuntimeLODPrimitive)
	{
		P_GET_STRUCT_REF(FglTFRuntimeMeshLOD,Z_Param_Out_RuntimeLOD);
		P_GET_PROPERTY(FIntProperty,Z_Param_PrimitiveIndex);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Bytes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UglTFRuntimeFunctionLibrary::GetPositionsAsBytesFromglTFRuntimeLODPrimitive(Z_Param_Out_RuntimeLOD,Z_Param_PrimitiveIndex,Z_Param_Out_Bytes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeFunctionLibrary::execGetIndicesAsBytesFromglTFRuntimeLODPrimitive)
	{
		P_GET_STRUCT_REF(FglTFRuntimeMeshLOD,Z_Param_Out_RuntimeLOD);
		P_GET_PROPERTY(FIntProperty,Z_Param_PrimitiveIndex);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Bytes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UglTFRuntimeFunctionLibrary::GetIndicesAsBytesFromglTFRuntimeLODPrimitive(Z_Param_Out_RuntimeLOD,Z_Param_PrimitiveIndex,Z_Param_Out_Bytes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeFunctionLibrary::execglTFRuntimePathItemArrayFromJSONPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JSONPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FglTFRuntimePathItem>*)Z_Param__Result=UglTFRuntimeFunctionLibrary::glTFRuntimePathItemArrayFromJSONPath(Z_Param_JSONPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeFunctionLibrary::execglTFLoadAssetFromStringAsync)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonData);
		P_GET_STRUCT_REF(FglTFRuntimeConfig,Z_Param_Out_LoaderConfig);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Completed);
		P_FINISH;
		P_NATIVE_BEGIN;
		UglTFRuntimeFunctionLibrary::glTFLoadAssetFromStringAsync(Z_Param_JsonData,Z_Param_Out_LoaderConfig,FglTFRuntimeHttpResponse(Z_Param_Out_Completed));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeFunctionLibrary::execglTFLoadAssetFromFilenameAsync)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_GET_UBOOL(Z_Param_bPathRelativeToContent);
		P_GET_STRUCT_REF(FglTFRuntimeConfig,Z_Param_Out_LoaderConfig);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Completed);
		P_FINISH;
		P_NATIVE_BEGIN;
		UglTFRuntimeFunctionLibrary::glTFLoadAssetFromFilenameAsync(Z_Param_Filename,Z_Param_bPathRelativeToContent,Z_Param_Out_LoaderConfig,FglTFRuntimeHttpResponse(Z_Param_Out_Completed));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeFunctionLibrary::execglTFLoadAssetFromClipboard)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Completed);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ClipboardContent);
		P_GET_STRUCT_REF(FglTFRuntimeConfig,Z_Param_Out_LoaderConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UglTFRuntimeFunctionLibrary::glTFLoadAssetFromClipboard(FglTFRuntimeHttpResponse(Z_Param_Completed),Z_Param_Out_ClipboardContent,Z_Param_Out_LoaderConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeFunctionLibrary::execglTFLoadAssetFromData)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Data);
		P_GET_STRUCT_REF(FglTFRuntimeConfig,Z_Param_Out_LoaderConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UglTFRuntimeAsset**)Z_Param__Result=UglTFRuntimeFunctionLibrary::glTFLoadAssetFromData(Z_Param_Out_Data,Z_Param_Out_LoaderConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeFunctionLibrary::execglTFLoadAssetFromUrlWithProgress)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Url);
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_Headers);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Completed);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Progress);
		P_GET_STRUCT_REF(FglTFRuntimeConfig,Z_Param_Out_LoaderConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		UglTFRuntimeFunctionLibrary::glTFLoadAssetFromUrlWithProgress(Z_Param_Url,Z_Param_Out_Headers,FglTFRuntimeHttpResponse(Z_Param_Completed),FglTFRuntimeHttpProgress(Z_Param_Progress),Z_Param_Out_LoaderConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeFunctionLibrary::execglTFLoadAssetFromUrl)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Url);
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_Headers);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Completed);
		P_GET_STRUCT_REF(FglTFRuntimeConfig,Z_Param_Out_LoaderConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		UglTFRuntimeFunctionLibrary::glTFLoadAssetFromUrl(Z_Param_Url,Z_Param_Out_Headers,FglTFRuntimeHttpResponse(Z_Param_Completed),Z_Param_Out_LoaderConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeFunctionLibrary::execglTFLoadAssetFromString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonData);
		P_GET_STRUCT_REF(FglTFRuntimeConfig,Z_Param_Out_LoaderConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UglTFRuntimeAsset**)Z_Param__Result=UglTFRuntimeFunctionLibrary::glTFLoadAssetFromString(Z_Param_JsonData,Z_Param_Out_LoaderConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UglTFRuntimeFunctionLibrary::execglTFLoadAssetFromFilename)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_GET_UBOOL(Z_Param_bPathRelativeToContent);
		P_GET_STRUCT_REF(FglTFRuntimeConfig,Z_Param_Out_LoaderConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UglTFRuntimeAsset**)Z_Param__Result=UglTFRuntimeFunctionLibrary::glTFLoadAssetFromFilename(Z_Param_Filename,Z_Param_bPathRelativeToContent,Z_Param_Out_LoaderConfig);
		P_NATIVE_END;
	}
	void UglTFRuntimeFunctionLibrary::StaticRegisterNativesUglTFRuntimeFunctionLibrary()
	{
		UClass* Class = UglTFRuntimeFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIndicesAsBytesFromglTFRuntimeLODPrimitive", &UglTFRuntimeFunctionLibrary::execGetIndicesAsBytesFromglTFRuntimeLODPrimitive },
			{ "GetNormalsAsBytesFromglTFRuntimeLODPrimitive", &UglTFRuntimeFunctionLibrary::execGetNormalsAsBytesFromglTFRuntimeLODPrimitive },
			{ "GetPositionsAsBytesFromglTFRuntimeLODPrimitive", &UglTFRuntimeFunctionLibrary::execGetPositionsAsBytesFromglTFRuntimeLODPrimitive },
			{ "glTFLoadAssetFromBase64", &UglTFRuntimeFunctionLibrary::execglTFLoadAssetFromBase64 },
			{ "glTFLoadAssetFromBase64Async", &UglTFRuntimeFunctionLibrary::execglTFLoadAssetFromBase64Async },
			{ "glTFLoadAssetFromClipboard", &UglTFRuntimeFunctionLibrary::execglTFLoadAssetFromClipboard },
			{ "glTFLoadAssetFromCommand", &UglTFRuntimeFunctionLibrary::execglTFLoadAssetFromCommand },
			{ "glTFLoadAssetFromData", &UglTFRuntimeFunctionLibrary::execglTFLoadAssetFromData },
			{ "glTFLoadAssetFromFileMap", &UglTFRuntimeFunctionLibrary::execglTFLoadAssetFromFileMap },
			{ "glTFLoadAssetFromFileMapAsync", &UglTFRuntimeFunctionLibrary::execglTFLoadAssetFromFileMapAsync },
			{ "glTFLoadAssetFromFilename", &UglTFRuntimeFunctionLibrary::execglTFLoadAssetFromFilename },
			{ "glTFLoadAssetFromFilenameAsync", &UglTFRuntimeFunctionLibrary::execglTFLoadAssetFromFilenameAsync },
			{ "glTFLoadAssetFromString", &UglTFRuntimeFunctionLibrary::execglTFLoadAssetFromString },
			{ "glTFLoadAssetFromStringAsync", &UglTFRuntimeFunctionLibrary::execglTFLoadAssetFromStringAsync },
			{ "glTFLoadAssetFromUrl", &UglTFRuntimeFunctionLibrary::execglTFLoadAssetFromUrl },
			{ "glTFLoadAssetFromUrlWithProgress", &UglTFRuntimeFunctionLibrary::execglTFLoadAssetFromUrlWithProgress },
			{ "glTFMergeRuntimeLODs", &UglTFRuntimeFunctionLibrary::execglTFMergeRuntimeLODs },
			{ "glTFRuntimePathItemArrayFromJSONPath", &UglTFRuntimeFunctionLibrary::execglTFRuntimePathItemArrayFromJSONPath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetIndicesAsBytesFromglTFRuntimeLODPrimitive_Statics
	{
		struct glTFRuntimeFunctionLibrary_eventGetIndicesAsBytesFromglTFRuntimeLODPrimitive_Parms
		{
			FglTFRuntimeMeshLOD RuntimeLOD;
			int32 PrimitiveIndex;
			TArray<uint8> Bytes;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeLOD_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RuntimeLOD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimitiveIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PrimitiveIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bytes;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetIndicesAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_RuntimeLOD_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetIndicesAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_RuntimeLOD = { "RuntimeLOD", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventGetIndicesAsBytesFromglTFRuntimeLODPrimitive_Parms, RuntimeLOD), Z_Construct_UScriptStruct_FglTFRuntimeMeshLOD, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetIndicesAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_RuntimeLOD_MetaData), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetIndicesAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_RuntimeLOD_MetaData) }; // 1968242049
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetIndicesAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_PrimitiveIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetIndicesAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_PrimitiveIndex = { "PrimitiveIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventGetIndicesAsBytesFromglTFRuntimeLODPrimitive_Parms, PrimitiveIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetIndicesAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_PrimitiveIndex_MetaData), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetIndicesAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_PrimitiveIndex_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetIndicesAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetIndicesAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventGetIndicesAsBytesFromglTFRuntimeLODPrimitive_Parms, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetIndicesAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((glTFRuntimeFunctionLibrary_eventGetIndicesAsBytesFromglTFRuntimeLODPrimitive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetIndicesAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(glTFRuntimeFunctionLibrary_eventGetIndicesAsBytesFromglTFRuntimeLODPrimitive_Parms), &Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetIndicesAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetIndicesAsBytesFromglTFRuntimeLODPrimitive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetIndicesAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_RuntimeLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetIndicesAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_PrimitiveIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetIndicesAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_Bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetIndicesAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_Bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetIndicesAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetIndicesAsBytesFromglTFRuntimeLODPrimitive_Statics::Function_MetaDataParams[] = {
		{ "Category", "glTFRuntime" },
		{ "DisplayName", "Get an array of bytes containing the glTF Runtime LOD indices" },
		{ "ModuleRelativePath", "Public/glTFRuntimeFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetIndicesAsBytesFromglTFRuntimeLODPrimitive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeFunctionLibrary, nullptr, "GetIndicesAsBytesFromglTFRuntimeLODPrimitive", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetIndicesAsBytesFromglTFRuntimeLODPrimitive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetIndicesAsBytesFromglTFRuntimeLODPrimitive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetIndicesAsBytesFromglTFRuntimeLODPrimitive_Statics::glTFRuntimeFunctionLibrary_eventGetIndicesAsBytesFromglTFRuntimeLODPrimitive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetIndicesAsBytesFromglTFRuntimeLODPrimitive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetIndicesAsBytesFromglTFRuntimeLODPrimitive_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetIndicesAsBytesFromglTFRuntimeLODPrimitive_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetIndicesAsBytesFromglTFRuntimeLODPrimitive_Statics::glTFRuntimeFunctionLibrary_eventGetIndicesAsBytesFromglTFRuntimeLODPrimitive_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetIndicesAsBytesFromglTFRuntimeLODPrimitive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetIndicesAsBytesFromglTFRuntimeLODPrimitive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetNormalsAsBytesFromglTFRuntimeLODPrimitive_Statics
	{
		struct glTFRuntimeFunctionLibrary_eventGetNormalsAsBytesFromglTFRuntimeLODPrimitive_Parms
		{
			FglTFRuntimeMeshLOD RuntimeLOD;
			int32 PrimitiveIndex;
			TArray<uint8> Bytes;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeLOD_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RuntimeLOD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimitiveIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PrimitiveIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bytes;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetNormalsAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_RuntimeLOD_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetNormalsAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_RuntimeLOD = { "RuntimeLOD", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventGetNormalsAsBytesFromglTFRuntimeLODPrimitive_Parms, RuntimeLOD), Z_Construct_UScriptStruct_FglTFRuntimeMeshLOD, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetNormalsAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_RuntimeLOD_MetaData), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetNormalsAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_RuntimeLOD_MetaData) }; // 1968242049
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetNormalsAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_PrimitiveIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetNormalsAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_PrimitiveIndex = { "PrimitiveIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventGetNormalsAsBytesFromglTFRuntimeLODPrimitive_Parms, PrimitiveIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetNormalsAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_PrimitiveIndex_MetaData), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetNormalsAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_PrimitiveIndex_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetNormalsAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetNormalsAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventGetNormalsAsBytesFromglTFRuntimeLODPrimitive_Parms, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetNormalsAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((glTFRuntimeFunctionLibrary_eventGetNormalsAsBytesFromglTFRuntimeLODPrimitive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetNormalsAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(glTFRuntimeFunctionLibrary_eventGetNormalsAsBytesFromglTFRuntimeLODPrimitive_Parms), &Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetNormalsAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetNormalsAsBytesFromglTFRuntimeLODPrimitive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetNormalsAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_RuntimeLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetNormalsAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_PrimitiveIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetNormalsAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_Bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetNormalsAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_Bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetNormalsAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetNormalsAsBytesFromglTFRuntimeLODPrimitive_Statics::Function_MetaDataParams[] = {
		{ "Category", "glTFRuntime" },
		{ "DisplayName", "Get an array of bytes containing the glTF Runtime LOD normals" },
		{ "ModuleRelativePath", "Public/glTFRuntimeFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetNormalsAsBytesFromglTFRuntimeLODPrimitive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeFunctionLibrary, nullptr, "GetNormalsAsBytesFromglTFRuntimeLODPrimitive", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetNormalsAsBytesFromglTFRuntimeLODPrimitive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetNormalsAsBytesFromglTFRuntimeLODPrimitive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetNormalsAsBytesFromglTFRuntimeLODPrimitive_Statics::glTFRuntimeFunctionLibrary_eventGetNormalsAsBytesFromglTFRuntimeLODPrimitive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetNormalsAsBytesFromglTFRuntimeLODPrimitive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetNormalsAsBytesFromglTFRuntimeLODPrimitive_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetNormalsAsBytesFromglTFRuntimeLODPrimitive_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetNormalsAsBytesFromglTFRuntimeLODPrimitive_Statics::glTFRuntimeFunctionLibrary_eventGetNormalsAsBytesFromglTFRuntimeLODPrimitive_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetNormalsAsBytesFromglTFRuntimeLODPrimitive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetNormalsAsBytesFromglTFRuntimeLODPrimitive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetPositionsAsBytesFromglTFRuntimeLODPrimitive_Statics
	{
		struct glTFRuntimeFunctionLibrary_eventGetPositionsAsBytesFromglTFRuntimeLODPrimitive_Parms
		{
			FglTFRuntimeMeshLOD RuntimeLOD;
			int32 PrimitiveIndex;
			TArray<uint8> Bytes;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeLOD_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RuntimeLOD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimitiveIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PrimitiveIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bytes;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetPositionsAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_RuntimeLOD_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetPositionsAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_RuntimeLOD = { "RuntimeLOD", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventGetPositionsAsBytesFromglTFRuntimeLODPrimitive_Parms, RuntimeLOD), Z_Construct_UScriptStruct_FglTFRuntimeMeshLOD, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetPositionsAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_RuntimeLOD_MetaData), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetPositionsAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_RuntimeLOD_MetaData) }; // 1968242049
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetPositionsAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_PrimitiveIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetPositionsAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_PrimitiveIndex = { "PrimitiveIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventGetPositionsAsBytesFromglTFRuntimeLODPrimitive_Parms, PrimitiveIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetPositionsAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_PrimitiveIndex_MetaData), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetPositionsAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_PrimitiveIndex_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetPositionsAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetPositionsAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventGetPositionsAsBytesFromglTFRuntimeLODPrimitive_Parms, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetPositionsAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((glTFRuntimeFunctionLibrary_eventGetPositionsAsBytesFromglTFRuntimeLODPrimitive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetPositionsAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(glTFRuntimeFunctionLibrary_eventGetPositionsAsBytesFromglTFRuntimeLODPrimitive_Parms), &Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetPositionsAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetPositionsAsBytesFromglTFRuntimeLODPrimitive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetPositionsAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_RuntimeLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetPositionsAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_PrimitiveIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetPositionsAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_Bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetPositionsAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_Bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetPositionsAsBytesFromglTFRuntimeLODPrimitive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetPositionsAsBytesFromglTFRuntimeLODPrimitive_Statics::Function_MetaDataParams[] = {
		{ "Category", "glTFRuntime" },
		{ "DisplayName", "Get an array of bytes containing the glTF Runtime LOD positions" },
		{ "ModuleRelativePath", "Public/glTFRuntimeFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetPositionsAsBytesFromglTFRuntimeLODPrimitive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeFunctionLibrary, nullptr, "GetPositionsAsBytesFromglTFRuntimeLODPrimitive", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetPositionsAsBytesFromglTFRuntimeLODPrimitive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetPositionsAsBytesFromglTFRuntimeLODPrimitive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetPositionsAsBytesFromglTFRuntimeLODPrimitive_Statics::glTFRuntimeFunctionLibrary_eventGetPositionsAsBytesFromglTFRuntimeLODPrimitive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetPositionsAsBytesFromglTFRuntimeLODPrimitive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetPositionsAsBytesFromglTFRuntimeLODPrimitive_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetPositionsAsBytesFromglTFRuntimeLODPrimitive_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetPositionsAsBytesFromglTFRuntimeLODPrimitive_Statics::glTFRuntimeFunctionLibrary_eventGetPositionsAsBytesFromglTFRuntimeLODPrimitive_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetPositionsAsBytesFromglTFRuntimeLODPrimitive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetPositionsAsBytesFromglTFRuntimeLODPrimitive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64_Statics
	{
		struct glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromBase64_Parms
		{
			FString Base64;
			FglTFRuntimeConfig LoaderConfig;
			UglTFRuntimeAsset* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Base64_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Base64;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoaderConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LoaderConfig;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64_Statics::NewProp_Base64_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64_Statics::NewProp_Base64 = { "Base64", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromBase64_Parms, Base64), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64_Statics::NewProp_Base64_MetaData), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64_Statics::NewProp_Base64_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64_Statics::NewProp_LoaderConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64_Statics::NewProp_LoaderConfig = { "LoaderConfig", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromBase64_Parms, LoaderConfig), Z_Construct_UScriptStruct_FglTFRuntimeConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64_Statics::NewProp_LoaderConfig_MetaData), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64_Statics::NewProp_LoaderConfig_MetaData) }; // 4097679897
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromBase64_Parms, ReturnValue), Z_Construct_UClass_UglTFRuntimeAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64_Statics::NewProp_Base64,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64_Statics::NewProp_LoaderConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "LoaderConfig" },
		{ "Category", "glTFRuntime" },
		{ "DisplayName", "glTF Load Asset from Base64 String" },
		{ "ModuleRelativePath", "Public/glTFRuntimeFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeFunctionLibrary, nullptr, "glTFLoadAssetFromBase64", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64_Statics::glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromBase64_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64_Statics::glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromBase64_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64Async_Statics
	{
		struct glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromBase64Async_Parms
		{
			FString Base64;
			FglTFRuntimeConfig LoaderConfig;
			FScriptDelegate Completed;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Base64_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Base64;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoaderConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LoaderConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Completed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64Async_Statics::NewProp_Base64_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64Async_Statics::NewProp_Base64 = { "Base64", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromBase64Async_Parms, Base64), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64Async_Statics::NewProp_Base64_MetaData), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64Async_Statics::NewProp_Base64_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64Async_Statics::NewProp_LoaderConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64Async_Statics::NewProp_LoaderConfig = { "LoaderConfig", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromBase64Async_Parms, LoaderConfig), Z_Construct_UScriptStruct_FglTFRuntimeConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64Async_Statics::NewProp_LoaderConfig_MetaData), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64Async_Statics::NewProp_LoaderConfig_MetaData) }; // 4097679897
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64Async_Statics::NewProp_Completed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64Async_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromBase64Async_Parms, Completed), Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeHttpResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64Async_Statics::NewProp_Completed_MetaData), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64Async_Statics::NewProp_Completed_MetaData) }; // 2819681607
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64Async_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64Async_Statics::NewProp_Base64,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64Async_Statics::NewProp_LoaderConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64Async_Statics::NewProp_Completed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64Async_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "LoaderConfig" },
		{ "Category", "glTFRuntime" },
		{ "DisplayName", "glTF Load Asset from Base64 String Async" },
		{ "ModuleRelativePath", "Public/glTFRuntimeFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64Async_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeFunctionLibrary, nullptr, "glTFLoadAssetFromBase64Async", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64Async_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64Async_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64Async_Statics::glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromBase64Async_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64Async_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64Async_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64Async_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64Async_Statics::glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromBase64Async_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64Async()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64Async_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromClipboard_Statics
	{
		struct glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromClipboard_Parms
		{
			FScriptDelegate Completed;
			FString ClipboardContent;
			FglTFRuntimeConfig LoaderConfig;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Completed;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClipboardContent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoaderConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LoaderConfig;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromClipboard_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromClipboard_Parms, Completed), Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeHttpResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2819681607
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromClipboard_Statics::NewProp_ClipboardContent = { "ClipboardContent", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromClipboard_Parms, ClipboardContent), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromClipboard_Statics::NewProp_LoaderConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromClipboard_Statics::NewProp_LoaderConfig = { "LoaderConfig", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromClipboard_Parms, LoaderConfig), Z_Construct_UScriptStruct_FglTFRuntimeConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromClipboard_Statics::NewProp_LoaderConfig_MetaData), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromClipboard_Statics::NewProp_LoaderConfig_MetaData) }; // 4097679897
	void Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromClipboard_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromClipboard_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromClipboard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromClipboard_Parms), &Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromClipboard_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromClipboard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromClipboard_Statics::NewProp_Completed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromClipboard_Statics::NewProp_ClipboardContent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromClipboard_Statics::NewProp_LoaderConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromClipboard_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromClipboard_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "LoaderConfig" },
		{ "Category", "glTFRuntime" },
		{ "DisplayName", "glTF Load Asset from Clipboard" },
		{ "ModuleRelativePath", "Public/glTFRuntimeFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromClipboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeFunctionLibrary, nullptr, "glTFLoadAssetFromClipboard", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromClipboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromClipboard_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromClipboard_Statics::glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromClipboard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromClipboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromClipboard_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromClipboard_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromClipboard_Statics::glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromClipboard_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromClipboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromClipboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromCommand_Statics
	{
		struct glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromCommand_Parms
		{
			FString Command;
			FString Arguments;
			FString WorkingDirectory;
			FScriptDelegate Completed;
			FglTFRuntimeConfig LoaderConfig;
			int32 ExpectedExitCode;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Command;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Arguments_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Arguments;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkingDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_WorkingDirectory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Completed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoaderConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LoaderConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpectedExitCode_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedExitCode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromCommand_Statics::NewProp_Command_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromCommand_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromCommand_Parms, Command), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromCommand_Statics::NewProp_Command_MetaData), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromCommand_Statics::NewProp_Command_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromCommand_Statics::NewProp_Arguments_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromCommand_Statics::NewProp_Arguments = { "Arguments", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromCommand_Parms, Arguments), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromCommand_Statics::NewProp_Arguments_MetaData), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromCommand_Statics::NewProp_Arguments_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromCommand_Statics::NewProp_WorkingDirectory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromCommand_Statics::NewProp_WorkingDirectory = { "WorkingDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromCommand_Parms, WorkingDirectory), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromCommand_Statics::NewProp_WorkingDirectory_MetaData), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromCommand_Statics::NewProp_WorkingDirectory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromCommand_Statics::NewProp_Completed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromCommand_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromCommand_Parms, Completed), Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeCommandResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromCommand_Statics::NewProp_Completed_MetaData), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromCommand_Statics::NewProp_Completed_MetaData) }; // 44596095
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromCommand_Statics::NewProp_LoaderConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromCommand_Statics::NewProp_LoaderConfig = { "LoaderConfig", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromCommand_Parms, LoaderConfig), Z_Construct_UScriptStruct_FglTFRuntimeConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromCommand_Statics::NewProp_LoaderConfig_MetaData), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromCommand_Statics::NewProp_LoaderConfig_MetaData) }; // 4097679897
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromCommand_Statics::NewProp_ExpectedExitCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromCommand_Statics::NewProp_ExpectedExitCode = { "ExpectedExitCode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromCommand_Parms, ExpectedExitCode), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromCommand_Statics::NewProp_ExpectedExitCode_MetaData), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromCommand_Statics::NewProp_ExpectedExitCode_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromCommand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromCommand_Statics::NewProp_Command,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromCommand_Statics::NewProp_Arguments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromCommand_Statics::NewProp_WorkingDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromCommand_Statics::NewProp_Completed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromCommand_Statics::NewProp_LoaderConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromCommand_Statics::NewProp_ExpectedExitCode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromCommand_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "LoaderConfig" },
		{ "Category", "glTFRuntime" },
		{ "CPP_Default_ExpectedExitCode", "0" },
		{ "DisplayName", "glTF Load Asset from Command" },
		{ "ModuleRelativePath", "Public/glTFRuntimeFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeFunctionLibrary, nullptr, "glTFLoadAssetFromCommand", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromCommand_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromCommand_Statics::glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromCommand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromCommand_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromCommand_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromCommand_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromCommand_Statics::glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromCommand_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromData_Statics
	{
		struct glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromData_Parms
		{
			TArray<uint8> Data;
			FglTFRuntimeConfig LoaderConfig;
			UglTFRuntimeAsset* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoaderConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LoaderConfig;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromData_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromData_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromData_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromData_Statics::NewProp_Data_MetaData), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromData_Statics::NewProp_Data_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromData_Statics::NewProp_LoaderConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromData_Statics::NewProp_LoaderConfig = { "LoaderConfig", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromData_Parms, LoaderConfig), Z_Construct_UScriptStruct_FglTFRuntimeConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromData_Statics::NewProp_LoaderConfig_MetaData), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromData_Statics::NewProp_LoaderConfig_MetaData) }; // 4097679897
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromData_Parms, ReturnValue), Z_Construct_UClass_UglTFRuntimeAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromData_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromData_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromData_Statics::NewProp_LoaderConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromData_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "LoaderConfig" },
		{ "Category", "glTFRuntime" },
		{ "DisplayName", "glTF Load Asset from Data" },
		{ "ModuleRelativePath", "Public/glTFRuntimeFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeFunctionLibrary, nullptr, "glTFLoadAssetFromData", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromData_Statics::glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromData_Statics::glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMap_Statics
	{
		struct glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromFileMap_Parms
		{
			TMap<FString,FString> FileMap;
			FglTFRuntimeConfig LoaderConfig;
			UglTFRuntimeAsset* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_FileMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoaderConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LoaderConfig;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMap_Statics::NewProp_FileMap_ValueProp = { "FileMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMap_Statics::NewProp_FileMap_Key_KeyProp = { "FileMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMap_Statics::NewProp_FileMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMap_Statics::NewProp_FileMap = { "FileMap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromFileMap_Parms, FileMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMap_Statics::NewProp_FileMap_MetaData), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMap_Statics::NewProp_FileMap_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMap_Statics::NewProp_LoaderConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMap_Statics::NewProp_LoaderConfig = { "LoaderConfig", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromFileMap_Parms, LoaderConfig), Z_Construct_UScriptStruct_FglTFRuntimeConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMap_Statics::NewProp_LoaderConfig_MetaData), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMap_Statics::NewProp_LoaderConfig_MetaData) }; // 4097679897
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromFileMap_Parms, ReturnValue), Z_Construct_UClass_UglTFRuntimeAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMap_Statics::NewProp_FileMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMap_Statics::NewProp_FileMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMap_Statics::NewProp_FileMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMap_Statics::NewProp_LoaderConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMap_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "LoaderConfig" },
		{ "Category", "glTFRuntime" },
		{ "DisplayName", "glTF Load Asset from FileMap" },
		{ "ModuleRelativePath", "Public/glTFRuntimeFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeFunctionLibrary, nullptr, "glTFLoadAssetFromFileMap", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMap_Statics::glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromFileMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMap_Statics::glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromFileMap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMapAsync_Statics
	{
		struct glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromFileMapAsync_Parms
		{
			TMap<FString,FString> FileMap;
			FglTFRuntimeConfig LoaderConfig;
			FScriptDelegate Completed;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_FileMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoaderConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LoaderConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Completed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMapAsync_Statics::NewProp_FileMap_ValueProp = { "FileMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMapAsync_Statics::NewProp_FileMap_Key_KeyProp = { "FileMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMapAsync_Statics::NewProp_FileMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMapAsync_Statics::NewProp_FileMap = { "FileMap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromFileMapAsync_Parms, FileMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMapAsync_Statics::NewProp_FileMap_MetaData), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMapAsync_Statics::NewProp_FileMap_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMapAsync_Statics::NewProp_LoaderConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMapAsync_Statics::NewProp_LoaderConfig = { "LoaderConfig", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromFileMapAsync_Parms, LoaderConfig), Z_Construct_UScriptStruct_FglTFRuntimeConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMapAsync_Statics::NewProp_LoaderConfig_MetaData), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMapAsync_Statics::NewProp_LoaderConfig_MetaData) }; // 4097679897
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMapAsync_Statics::NewProp_Completed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMapAsync_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromFileMapAsync_Parms, Completed), Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeHttpResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMapAsync_Statics::NewProp_Completed_MetaData), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMapAsync_Statics::NewProp_Completed_MetaData) }; // 2819681607
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMapAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMapAsync_Statics::NewProp_FileMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMapAsync_Statics::NewProp_FileMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMapAsync_Statics::NewProp_FileMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMapAsync_Statics::NewProp_LoaderConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMapAsync_Statics::NewProp_Completed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMapAsync_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "LoaderConfig" },
		{ "Category", "glTFRuntime" },
		{ "DisplayName", "glTF Load Asset from FileMap Async" },
		{ "ModuleRelativePath", "Public/glTFRuntimeFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMapAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeFunctionLibrary, nullptr, "glTFLoadAssetFromFileMapAsync", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMapAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMapAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMapAsync_Statics::glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromFileMapAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMapAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMapAsync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMapAsync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMapAsync_Statics::glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromFileMapAsync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMapAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMapAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilename_Statics
	{
		struct glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromFilename_Parms
		{
			FString Filename;
			bool bPathRelativeToContent;
			FglTFRuntimeConfig LoaderConfig;
			UglTFRuntimeAsset* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPathRelativeToContent_MetaData[];
#endif
		static void NewProp_bPathRelativeToContent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPathRelativeToContent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoaderConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LoaderConfig;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilename_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilename_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromFilename_Parms, Filename), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilename_Statics::NewProp_Filename_MetaData), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilename_Statics::NewProp_Filename_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilename_Statics::NewProp_bPathRelativeToContent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilename_Statics::NewProp_bPathRelativeToContent_SetBit(void* Obj)
	{
		((glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromFilename_Parms*)Obj)->bPathRelativeToContent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilename_Statics::NewProp_bPathRelativeToContent = { "bPathRelativeToContent", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromFilename_Parms), &Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilename_Statics::NewProp_bPathRelativeToContent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilename_Statics::NewProp_bPathRelativeToContent_MetaData), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilename_Statics::NewProp_bPathRelativeToContent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilename_Statics::NewProp_LoaderConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilename_Statics::NewProp_LoaderConfig = { "LoaderConfig", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromFilename_Parms, LoaderConfig), Z_Construct_UScriptStruct_FglTFRuntimeConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilename_Statics::NewProp_LoaderConfig_MetaData), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilename_Statics::NewProp_LoaderConfig_MetaData) }; // 4097679897
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilename_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromFilename_Parms, ReturnValue), Z_Construct_UClass_UglTFRuntimeAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilename_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilename_Statics::NewProp_Filename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilename_Statics::NewProp_bPathRelativeToContent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilename_Statics::NewProp_LoaderConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilename_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilename_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "LoaderConfig" },
		{ "Category", "glTFRuntime" },
		{ "DisplayName", "glTF Load Asset from Filename" },
		{ "ModuleRelativePath", "Public/glTFRuntimeFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilename_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeFunctionLibrary, nullptr, "glTFLoadAssetFromFilename", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilename_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilename_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilename_Statics::glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromFilename_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilename_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilename_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilename_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilename_Statics::glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromFilename_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilename()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilename_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilenameAsync_Statics
	{
		struct glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromFilenameAsync_Parms
		{
			FString Filename;
			bool bPathRelativeToContent;
			FglTFRuntimeConfig LoaderConfig;
			FScriptDelegate Completed;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPathRelativeToContent_MetaData[];
#endif
		static void NewProp_bPathRelativeToContent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPathRelativeToContent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoaderConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LoaderConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Completed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilenameAsync_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilenameAsync_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromFilenameAsync_Parms, Filename), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilenameAsync_Statics::NewProp_Filename_MetaData), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilenameAsync_Statics::NewProp_Filename_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilenameAsync_Statics::NewProp_bPathRelativeToContent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilenameAsync_Statics::NewProp_bPathRelativeToContent_SetBit(void* Obj)
	{
		((glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromFilenameAsync_Parms*)Obj)->bPathRelativeToContent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilenameAsync_Statics::NewProp_bPathRelativeToContent = { "bPathRelativeToContent", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromFilenameAsync_Parms), &Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilenameAsync_Statics::NewProp_bPathRelativeToContent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilenameAsync_Statics::NewProp_bPathRelativeToContent_MetaData), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilenameAsync_Statics::NewProp_bPathRelativeToContent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilenameAsync_Statics::NewProp_LoaderConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilenameAsync_Statics::NewProp_LoaderConfig = { "LoaderConfig", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromFilenameAsync_Parms, LoaderConfig), Z_Construct_UScriptStruct_FglTFRuntimeConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilenameAsync_Statics::NewProp_LoaderConfig_MetaData), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilenameAsync_Statics::NewProp_LoaderConfig_MetaData) }; // 4097679897
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilenameAsync_Statics::NewProp_Completed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilenameAsync_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromFilenameAsync_Parms, Completed), Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeHttpResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilenameAsync_Statics::NewProp_Completed_MetaData), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilenameAsync_Statics::NewProp_Completed_MetaData) }; // 2819681607
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilenameAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilenameAsync_Statics::NewProp_Filename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilenameAsync_Statics::NewProp_bPathRelativeToContent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilenameAsync_Statics::NewProp_LoaderConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilenameAsync_Statics::NewProp_Completed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilenameAsync_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "LoaderConfig" },
		{ "Category", "glTFRuntime" },
		{ "DisplayName", "glTF Load Asset from Filename Async" },
		{ "ModuleRelativePath", "Public/glTFRuntimeFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilenameAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeFunctionLibrary, nullptr, "glTFLoadAssetFromFilenameAsync", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilenameAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilenameAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilenameAsync_Statics::glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromFilenameAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilenameAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilenameAsync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilenameAsync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilenameAsync_Statics::glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromFilenameAsync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilenameAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilenameAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromString_Statics
	{
		struct glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromString_Parms
		{
			FString JsonData;
			FglTFRuntimeConfig LoaderConfig;
			UglTFRuntimeAsset* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonData_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoaderConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LoaderConfig;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromString_Statics::NewProp_JsonData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromString_Statics::NewProp_JsonData = { "JsonData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromString_Parms, JsonData), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromString_Statics::NewProp_JsonData_MetaData), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromString_Statics::NewProp_JsonData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromString_Statics::NewProp_LoaderConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromString_Statics::NewProp_LoaderConfig = { "LoaderConfig", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromString_Parms, LoaderConfig), Z_Construct_UScriptStruct_FglTFRuntimeConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromString_Statics::NewProp_LoaderConfig_MetaData), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromString_Statics::NewProp_LoaderConfig_MetaData) }; // 4097679897
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromString_Parms, ReturnValue), Z_Construct_UClass_UglTFRuntimeAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromString_Statics::NewProp_JsonData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromString_Statics::NewProp_LoaderConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromString_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "LoaderConfig" },
		{ "Category", "glTFRuntime" },
		{ "DisplayName", "glTF Load Asset from String" },
		{ "ModuleRelativePath", "Public/glTFRuntimeFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeFunctionLibrary, nullptr, "glTFLoadAssetFromString", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromString_Statics::glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromString_Statics::glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromStringAsync_Statics
	{
		struct glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromStringAsync_Parms
		{
			FString JsonData;
			FglTFRuntimeConfig LoaderConfig;
			FScriptDelegate Completed;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonData_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoaderConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LoaderConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Completed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromStringAsync_Statics::NewProp_JsonData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromStringAsync_Statics::NewProp_JsonData = { "JsonData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromStringAsync_Parms, JsonData), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromStringAsync_Statics::NewProp_JsonData_MetaData), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromStringAsync_Statics::NewProp_JsonData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromStringAsync_Statics::NewProp_LoaderConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromStringAsync_Statics::NewProp_LoaderConfig = { "LoaderConfig", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromStringAsync_Parms, LoaderConfig), Z_Construct_UScriptStruct_FglTFRuntimeConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromStringAsync_Statics::NewProp_LoaderConfig_MetaData), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromStringAsync_Statics::NewProp_LoaderConfig_MetaData) }; // 4097679897
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromStringAsync_Statics::NewProp_Completed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromStringAsync_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromStringAsync_Parms, Completed), Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeHttpResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromStringAsync_Statics::NewProp_Completed_MetaData), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromStringAsync_Statics::NewProp_Completed_MetaData) }; // 2819681607
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromStringAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromStringAsync_Statics::NewProp_JsonData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromStringAsync_Statics::NewProp_LoaderConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromStringAsync_Statics::NewProp_Completed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromStringAsync_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "LoaderConfig" },
		{ "Category", "glTFRuntime" },
		{ "DisplayName", "glTF Load Asset from String Async" },
		{ "ModuleRelativePath", "Public/glTFRuntimeFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromStringAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeFunctionLibrary, nullptr, "glTFLoadAssetFromStringAsync", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromStringAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromStringAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromStringAsync_Statics::glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromStringAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromStringAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromStringAsync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromStringAsync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromStringAsync_Statics::glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromStringAsync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromStringAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromStringAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrl_Statics
	{
		struct glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromUrl_Parms
		{
			FString Url;
			TMap<FString,FString> Headers;
			FScriptDelegate Completed;
			FglTFRuntimeConfig LoaderConfig;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Headers_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Headers_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Headers_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Headers;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Completed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoaderConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LoaderConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrl_Statics::NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrl_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromUrl_Parms, Url), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrl_Statics::NewProp_Url_MetaData), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrl_Statics::NewProp_Url_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrl_Statics::NewProp_Headers_ValueProp = { "Headers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrl_Statics::NewProp_Headers_Key_KeyProp = { "Headers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrl_Statics::NewProp_Headers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrl_Statics::NewProp_Headers = { "Headers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromUrl_Parms, Headers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrl_Statics::NewProp_Headers_MetaData), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrl_Statics::NewProp_Headers_MetaData) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrl_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromUrl_Parms, Completed), Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeHttpResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2819681607
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrl_Statics::NewProp_LoaderConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrl_Statics::NewProp_LoaderConfig = { "LoaderConfig", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromUrl_Parms, LoaderConfig), Z_Construct_UScriptStruct_FglTFRuntimeConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrl_Statics::NewProp_LoaderConfig_MetaData), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrl_Statics::NewProp_LoaderConfig_MetaData) }; // 4097679897
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrl_Statics::NewProp_Url,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrl_Statics::NewProp_Headers_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrl_Statics::NewProp_Headers_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrl_Statics::NewProp_Headers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrl_Statics::NewProp_Completed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrl_Statics::NewProp_LoaderConfig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrl_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "LoaderConfig, Headers" },
		{ "Category", "glTFRuntime" },
		{ "DisplayName", "glTF Load Asset from Url" },
		{ "ModuleRelativePath", "Public/glTFRuntimeFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeFunctionLibrary, nullptr, "glTFLoadAssetFromUrl", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrl_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrl_Statics::glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromUrl_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrl_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrl_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrl_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrl_Statics::glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromUrl_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrlWithProgress_Statics
	{
		struct glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromUrlWithProgress_Parms
		{
			FString Url;
			TMap<FString,FString> Headers;
			FScriptDelegate Completed;
			FScriptDelegate Progress;
			FglTFRuntimeConfig LoaderConfig;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Headers_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Headers_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Headers_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Headers;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Completed;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Progress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoaderConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LoaderConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrlWithProgress_Statics::NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrlWithProgress_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromUrlWithProgress_Parms, Url), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrlWithProgress_Statics::NewProp_Url_MetaData), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrlWithProgress_Statics::NewProp_Url_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrlWithProgress_Statics::NewProp_Headers_ValueProp = { "Headers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrlWithProgress_Statics::NewProp_Headers_Key_KeyProp = { "Headers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrlWithProgress_Statics::NewProp_Headers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrlWithProgress_Statics::NewProp_Headers = { "Headers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromUrlWithProgress_Parms, Headers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrlWithProgress_Statics::NewProp_Headers_MetaData), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrlWithProgress_Statics::NewProp_Headers_MetaData) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrlWithProgress_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromUrlWithProgress_Parms, Completed), Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeHttpResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2819681607
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrlWithProgress_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromUrlWithProgress_Parms, Progress), Z_Construct_UDelegateFunction_glTFRuntime_glTFRuntimeHttpProgress__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3945698549
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrlWithProgress_Statics::NewProp_LoaderConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrlWithProgress_Statics::NewProp_LoaderConfig = { "LoaderConfig", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromUrlWithProgress_Parms, LoaderConfig), Z_Construct_UScriptStruct_FglTFRuntimeConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrlWithProgress_Statics::NewProp_LoaderConfig_MetaData), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrlWithProgress_Statics::NewProp_LoaderConfig_MetaData) }; // 4097679897
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrlWithProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrlWithProgress_Statics::NewProp_Url,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrlWithProgress_Statics::NewProp_Headers_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrlWithProgress_Statics::NewProp_Headers_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrlWithProgress_Statics::NewProp_Headers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrlWithProgress_Statics::NewProp_Completed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrlWithProgress_Statics::NewProp_Progress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrlWithProgress_Statics::NewProp_LoaderConfig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrlWithProgress_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "LoaderConfig, Headers" },
		{ "Category", "glTFRuntime" },
		{ "DisplayName", "glTF Load Asset from Url with Progress" },
		{ "ModuleRelativePath", "Public/glTFRuntimeFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrlWithProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeFunctionLibrary, nullptr, "glTFLoadAssetFromUrlWithProgress", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrlWithProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrlWithProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrlWithProgress_Statics::glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromUrlWithProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrlWithProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrlWithProgress_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrlWithProgress_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrlWithProgress_Statics::glTFRuntimeFunctionLibrary_eventglTFLoadAssetFromUrlWithProgress_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrlWithProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrlWithProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFMergeRuntimeLODs_Statics
	{
		struct glTFRuntimeFunctionLibrary_eventglTFMergeRuntimeLODs_Parms
		{
			TArray<FglTFRuntimeMeshLOD> RuntimeLODs;
			FglTFRuntimeMeshLOD ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_RuntimeLODs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeLODs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RuntimeLODs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFMergeRuntimeLODs_Statics::NewProp_RuntimeLODs_Inner = { "RuntimeLODs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FglTFRuntimeMeshLOD, METADATA_PARAMS(0, nullptr) }; // 1968242049
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFMergeRuntimeLODs_Statics::NewProp_RuntimeLODs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFMergeRuntimeLODs_Statics::NewProp_RuntimeLODs = { "RuntimeLODs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventglTFMergeRuntimeLODs_Parms, RuntimeLODs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFMergeRuntimeLODs_Statics::NewProp_RuntimeLODs_MetaData), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFMergeRuntimeLODs_Statics::NewProp_RuntimeLODs_MetaData) }; // 1968242049
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFMergeRuntimeLODs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventglTFMergeRuntimeLODs_Parms, ReturnValue), Z_Construct_UScriptStruct_FglTFRuntimeMeshLOD, METADATA_PARAMS(0, nullptr) }; // 1968242049
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFMergeRuntimeLODs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFMergeRuntimeLODs_Statics::NewProp_RuntimeLODs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFMergeRuntimeLODs_Statics::NewProp_RuntimeLODs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFMergeRuntimeLODs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFMergeRuntimeLODs_Statics::Function_MetaDataParams[] = {
		{ "Category", "glTFRuntime" },
		{ "DisplayName", "Merge multiple glTF Runtime LODs" },
		{ "ModuleRelativePath", "Public/glTFRuntimeFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFMergeRuntimeLODs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeFunctionLibrary, nullptr, "glTFMergeRuntimeLODs", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFMergeRuntimeLODs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFMergeRuntimeLODs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFMergeRuntimeLODs_Statics::glTFRuntimeFunctionLibrary_eventglTFMergeRuntimeLODs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFMergeRuntimeLODs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFMergeRuntimeLODs_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFMergeRuntimeLODs_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFMergeRuntimeLODs_Statics::glTFRuntimeFunctionLibrary_eventglTFMergeRuntimeLODs_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFMergeRuntimeLODs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFMergeRuntimeLODs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFRuntimePathItemArrayFromJSONPath_Statics
	{
		struct glTFRuntimeFunctionLibrary_eventglTFRuntimePathItemArrayFromJSONPath_Parms
		{
			FString JSONPath;
			TArray<FglTFRuntimePathItem> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JSONPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JSONPath;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFRuntimePathItemArrayFromJSONPath_Statics::NewProp_JSONPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFRuntimePathItemArrayFromJSONPath_Statics::NewProp_JSONPath = { "JSONPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventglTFRuntimePathItemArrayFromJSONPath_Parms, JSONPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFRuntimePathItemArrayFromJSONPath_Statics::NewProp_JSONPath_MetaData), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFRuntimePathItemArrayFromJSONPath_Statics::NewProp_JSONPath_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFRuntimePathItemArrayFromJSONPath_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FglTFRuntimePathItem, METADATA_PARAMS(0, nullptr) }; // 2417597737
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFRuntimePathItemArrayFromJSONPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeFunctionLibrary_eventglTFRuntimePathItemArrayFromJSONPath_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2417597737
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFRuntimePathItemArrayFromJSONPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFRuntimePathItemArrayFromJSONPath_Statics::NewProp_JSONPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFRuntimePathItemArrayFromJSONPath_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFRuntimePathItemArrayFromJSONPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFRuntimePathItemArrayFromJSONPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "glTFRuntime" },
		{ "DisplayName", "Make glTFRuntime PathItem Array from JSONPath String" },
		{ "ModuleRelativePath", "Public/glTFRuntimeFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFRuntimePathItemArrayFromJSONPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UglTFRuntimeFunctionLibrary, nullptr, "glTFRuntimePathItemArrayFromJSONPath", nullptr, nullptr, Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFRuntimePathItemArrayFromJSONPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFRuntimePathItemArrayFromJSONPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFRuntimePathItemArrayFromJSONPath_Statics::glTFRuntimeFunctionLibrary_eventglTFRuntimePathItemArrayFromJSONPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFRuntimePathItemArrayFromJSONPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFRuntimePathItemArrayFromJSONPath_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFRuntimePathItemArrayFromJSONPath_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFRuntimePathItemArrayFromJSONPath_Statics::glTFRuntimeFunctionLibrary_eventglTFRuntimePathItemArrayFromJSONPath_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFRuntimePathItemArrayFromJSONPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFRuntimePathItemArrayFromJSONPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UglTFRuntimeFunctionLibrary);
	UClass* Z_Construct_UClass_UglTFRuntimeFunctionLibrary_NoRegister()
	{
		return UglTFRuntimeFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UglTFRuntimeFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UglTFRuntimeFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_glTFRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UglTFRuntimeFunctionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UglTFRuntimeFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetIndicesAsBytesFromglTFRuntimeLODPrimitive, "GetIndicesAsBytesFromglTFRuntimeLODPrimitive" }, // 2123129918
		{ &Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetNormalsAsBytesFromglTFRuntimeLODPrimitive, "GetNormalsAsBytesFromglTFRuntimeLODPrimitive" }, // 3787905124
		{ &Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_GetPositionsAsBytesFromglTFRuntimeLODPrimitive, "GetPositionsAsBytesFromglTFRuntimeLODPrimitive" }, // 2851027433
		{ &Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64, "glTFLoadAssetFromBase64" }, // 658742538
		{ &Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromBase64Async, "glTFLoadAssetFromBase64Async" }, // 3620907831
		{ &Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromClipboard, "glTFLoadAssetFromClipboard" }, // 3958647184
		{ &Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromCommand, "glTFLoadAssetFromCommand" }, // 2654826537
		{ &Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromData, "glTFLoadAssetFromData" }, // 443047923
		{ &Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMap, "glTFLoadAssetFromFileMap" }, // 1968844085
		{ &Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFileMapAsync, "glTFLoadAssetFromFileMapAsync" }, // 916876427
		{ &Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilename, "glTFLoadAssetFromFilename" }, // 4054682097
		{ &Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromFilenameAsync, "glTFLoadAssetFromFilenameAsync" }, // 2627030620
		{ &Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromString, "glTFLoadAssetFromString" }, // 2028909751
		{ &Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromStringAsync, "glTFLoadAssetFromStringAsync" }, // 1237929449
		{ &Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrl, "glTFLoadAssetFromUrl" }, // 1472879945
		{ &Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFLoadAssetFromUrlWithProgress, "glTFLoadAssetFromUrlWithProgress" }, // 2052312260
		{ &Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFMergeRuntimeLODs, "glTFMergeRuntimeLODs" }, // 2534152997
		{ &Z_Construct_UFunction_UglTFRuntimeFunctionLibrary_glTFRuntimePathItemArrayFromJSONPath, "glTFRuntimePathItemArrayFromJSONPath" }, // 2124165155
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UglTFRuntimeFunctionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UglTFRuntimeFunctionLibrary_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "glTFRuntimeFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/glTFRuntimeFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UglTFRuntimeFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UglTFRuntimeFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UglTFRuntimeFunctionLibrary_Statics::ClassParams = {
		&UglTFRuntimeFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UglTFRuntimeFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UglTFRuntimeFunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UglTFRuntimeFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UglTFRuntimeFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UglTFRuntimeFunctionLibrary.OuterSingleton, Z_Construct_UClass_UglTFRuntimeFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UglTFRuntimeFunctionLibrary.OuterSingleton;
	}
	template<> GLTFRUNTIME_API UClass* StaticClass<UglTFRuntimeFunctionLibrary>()
	{
		return UglTFRuntimeFunctionLibrary::StaticClass();
	}
	UglTFRuntimeFunctionLibrary::UglTFRuntimeFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UglTFRuntimeFunctionLibrary);
	UglTFRuntimeFunctionLibrary::~UglTFRuntimeFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ThirdParty_glTFRuntime_Public_glTFRuntimeFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ThirdParty_glTFRuntime_Public_glTFRuntimeFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UglTFRuntimeFunctionLibrary, UglTFRuntimeFunctionLibrary::StaticClass, TEXT("UglTFRuntimeFunctionLibrary"), &Z_Registration_Info_UClass_UglTFRuntimeFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UglTFRuntimeFunctionLibrary), 786765330U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ThirdParty_glTFRuntime_Public_glTFRuntimeFunctionLibrary_h_4264771456(TEXT("/Script/glTFRuntime"),
		Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ThirdParty_glTFRuntime_Public_glTFRuntimeFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ThirdParty_glTFRuntime_Public_glTFRuntimeFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
