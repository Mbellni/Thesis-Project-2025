// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReadyPlayerMe/Private/ReadyPlayerMeGlbLoader.h"
#include "ThirdParty/glTFRuntime/Public/glTFRuntimeParser.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReadyPlayerMeGlbLoader() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	GLTFRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FglTFRuntimeSkeletalMeshConfig();
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeGlbLoader();
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeGlbLoader_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ReadyPlayerMe();
// End Cross Module References
	DEFINE_FUNCTION(UReadyPlayerMeGlbLoader::execOnSkeletalMeshLoaded)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSkeletalMeshLoaded(Z_Param_SkeletalMesh);
		P_NATIVE_END;
	}
	void UReadyPlayerMeGlbLoader::StaticRegisterNativesUReadyPlayerMeGlbLoader()
	{
		UClass* Class = UReadyPlayerMeGlbLoader::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSkeletalMeshLoaded", &UReadyPlayerMeGlbLoader::execOnSkeletalMeshLoaded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UReadyPlayerMeGlbLoader_OnSkeletalMeshLoaded_Statics
	{
		struct ReadyPlayerMeGlbLoader_eventOnSkeletalMeshLoaded_Parms
		{
			USkeletalMesh* SkeletalMesh;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReadyPlayerMeGlbLoader_OnSkeletalMeshLoaded_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadyPlayerMeGlbLoader_eventOnSkeletalMeshLoaded_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeGlbLoader_OnSkeletalMeshLoaded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeGlbLoader_OnSkeletalMeshLoaded_Statics::NewProp_SkeletalMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeGlbLoader_OnSkeletalMeshLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ReadyPlayerMeGlbLoader.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeGlbLoader_OnSkeletalMeshLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeGlbLoader, nullptr, "OnSkeletalMeshLoaded", nullptr, nullptr, Z_Construct_UFunction_UReadyPlayerMeGlbLoader_OnSkeletalMeshLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeGlbLoader_OnSkeletalMeshLoaded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReadyPlayerMeGlbLoader_OnSkeletalMeshLoaded_Statics::ReadyPlayerMeGlbLoader_eventOnSkeletalMeshLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeGlbLoader_OnSkeletalMeshLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReadyPlayerMeGlbLoader_OnSkeletalMeshLoaded_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeGlbLoader_OnSkeletalMeshLoaded_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UReadyPlayerMeGlbLoader_OnSkeletalMeshLoaded_Statics::ReadyPlayerMeGlbLoader_eventOnSkeletalMeshLoaded_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UReadyPlayerMeGlbLoader_OnSkeletalMeshLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeGlbLoader_OnSkeletalMeshLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReadyPlayerMeGlbLoader);
	UClass* Z_Construct_UClass_UReadyPlayerMeGlbLoader_NoRegister()
	{
		return UReadyPlayerMeGlbLoader::StaticClass();
	}
	struct Z_Construct_UClass_UReadyPlayerMeGlbLoader_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetSkeleton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetSkeleton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletalMeshConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReadyPlayerMeGlbLoader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ReadyPlayerMe,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeGlbLoader_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UReadyPlayerMeGlbLoader_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UReadyPlayerMeGlbLoader_OnSkeletalMeshLoaded, "OnSkeletalMeshLoaded" }, // 1642346131
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeGlbLoader_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeGlbLoader_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ReadyPlayerMeGlbLoader.h" },
		{ "ModuleRelativePath", "Private/ReadyPlayerMeGlbLoader.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeGlbLoader_Statics::NewProp_TargetSkeleton_MetaData[] = {
		{ "ModuleRelativePath", "Private/ReadyPlayerMeGlbLoader.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReadyPlayerMeGlbLoader_Statics::NewProp_TargetSkeleton = { "TargetSkeleton", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReadyPlayerMeGlbLoader, TargetSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeGlbLoader_Statics::NewProp_TargetSkeleton_MetaData), Z_Construct_UClass_UReadyPlayerMeGlbLoader_Statics::NewProp_TargetSkeleton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeGlbLoader_Statics::NewProp_SkeletalMeshConfig_MetaData[] = {
		{ "ModuleRelativePath", "Private/ReadyPlayerMeGlbLoader.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UReadyPlayerMeGlbLoader_Statics::NewProp_SkeletalMeshConfig = { "SkeletalMeshConfig", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReadyPlayerMeGlbLoader, SkeletalMeshConfig), Z_Construct_UScriptStruct_FglTFRuntimeSkeletalMeshConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeGlbLoader_Statics::NewProp_SkeletalMeshConfig_MetaData), Z_Construct_UClass_UReadyPlayerMeGlbLoader_Statics::NewProp_SkeletalMeshConfig_MetaData) }; // 2192125489
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReadyPlayerMeGlbLoader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeGlbLoader_Statics::NewProp_TargetSkeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeGlbLoader_Statics::NewProp_SkeletalMeshConfig,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReadyPlayerMeGlbLoader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReadyPlayerMeGlbLoader>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReadyPlayerMeGlbLoader_Statics::ClassParams = {
		&UReadyPlayerMeGlbLoader::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UReadyPlayerMeGlbLoader_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeGlbLoader_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeGlbLoader_Statics::Class_MetaDataParams), Z_Construct_UClass_UReadyPlayerMeGlbLoader_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeGlbLoader_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UReadyPlayerMeGlbLoader()
	{
		if (!Z_Registration_Info_UClass_UReadyPlayerMeGlbLoader.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReadyPlayerMeGlbLoader.OuterSingleton, Z_Construct_UClass_UReadyPlayerMeGlbLoader_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReadyPlayerMeGlbLoader.OuterSingleton;
	}
	template<> READYPLAYERME_API UClass* StaticClass<UReadyPlayerMeGlbLoader>()
	{
		return UReadyPlayerMeGlbLoader::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReadyPlayerMeGlbLoader);
	UReadyPlayerMeGlbLoader::~UReadyPlayerMeGlbLoader() {}
	struct Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Private_ReadyPlayerMeGlbLoader_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Private_ReadyPlayerMeGlbLoader_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReadyPlayerMeGlbLoader, UReadyPlayerMeGlbLoader::StaticClass, TEXT("UReadyPlayerMeGlbLoader"), &Z_Registration_Info_UClass_UReadyPlayerMeGlbLoader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReadyPlayerMeGlbLoader), 2451195413U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Private_ReadyPlayerMeGlbLoader_h_1621014863(TEXT("/Script/ReadyPlayerMe"),
		Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Private_ReadyPlayerMeGlbLoader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Private_ReadyPlayerMeGlbLoader_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
