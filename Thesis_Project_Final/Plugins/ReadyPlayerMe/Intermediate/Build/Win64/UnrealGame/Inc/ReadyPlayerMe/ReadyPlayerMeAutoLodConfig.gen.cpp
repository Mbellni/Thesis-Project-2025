// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReadyPlayerMe/Public/ReadyPlayerMeAutoLodConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReadyPlayerMeAutoLodConfig() {}
// Cross Module References
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeAutoLodConfig_NoRegister();
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeAutoLodConfig();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_ReadyPlayerMe();
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeAvatarConfig_NoRegister();
// End Cross Module References
	void UReadyPlayerMeAutoLodConfig::StaticRegisterNativesUReadyPlayerMeAutoLodConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReadyPlayerMeAutoLodConfig);
	UClass* Z_Construct_UClass_UReadyPlayerMeAutoLodConfig_NoRegister()
	{
		return UReadyPlayerMeAutoLodConfig::StaticClass();
	}
	struct Z_Construct_UClass_UReadyPlayerMeAutoLodConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AutoLodConfigs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoLodConfigs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AutoLodConfigs;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LODScreenSizes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODScreenSizes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LODScreenSizes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReadyPlayerMeAutoLodConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ReadyPlayerMe,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeAutoLodConfig_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base data asset class that provides configuration for the avatar loader.\n * For customization create a blueprint data asset subclass. \n */" },
		{ "IncludePath", "ReadyPlayerMeAutoLodConfig.h" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeAutoLodConfig.h" },
		{ "ToolTip", "Base data asset class that provides configuration for the avatar loader.\nFor customization create a blueprint data asset subclass." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReadyPlayerMeAutoLodConfig_Statics::NewProp_AutoLodConfigs_Inner = { "AutoLodConfigs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UReadyPlayerMeAvatarConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeAutoLodConfig_Statics::NewProp_AutoLodConfigs_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "Comment", "/** Provides ability to select the texture channels that need to be included in the avatar */" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeAutoLodConfig.h" },
		{ "ToolTip", "Provides ability to select the texture channels that need to be included in the avatar" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UReadyPlayerMeAutoLodConfig_Statics::NewProp_AutoLodConfigs = { "AutoLodConfigs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReadyPlayerMeAutoLodConfig, AutoLodConfigs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UReadyPlayerMeAutoLodConfig_Statics::NewProp_AutoLodConfigs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeAutoLodConfig_Statics::NewProp_AutoLodConfigs_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReadyPlayerMeAutoLodConfig_Statics::NewProp_LODScreenSizes_Inner = { "LODScreenSizes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeAutoLodConfig_Statics::NewProp_LODScreenSizes_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeAutoLodConfig.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UReadyPlayerMeAutoLodConfig_Statics::NewProp_LODScreenSizes = { "LODScreenSizes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReadyPlayerMeAutoLodConfig, LODScreenSizes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UReadyPlayerMeAutoLodConfig_Statics::NewProp_LODScreenSizes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeAutoLodConfig_Statics::NewProp_LODScreenSizes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReadyPlayerMeAutoLodConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeAutoLodConfig_Statics::NewProp_AutoLodConfigs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeAutoLodConfig_Statics::NewProp_AutoLodConfigs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeAutoLodConfig_Statics::NewProp_LODScreenSizes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeAutoLodConfig_Statics::NewProp_LODScreenSizes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReadyPlayerMeAutoLodConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReadyPlayerMeAutoLodConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReadyPlayerMeAutoLodConfig_Statics::ClassParams = {
		&UReadyPlayerMeAutoLodConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UReadyPlayerMeAutoLodConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeAutoLodConfig_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UReadyPlayerMeAutoLodConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeAutoLodConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReadyPlayerMeAutoLodConfig()
	{
		if (!Z_Registration_Info_UClass_UReadyPlayerMeAutoLodConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReadyPlayerMeAutoLodConfig.OuterSingleton, Z_Construct_UClass_UReadyPlayerMeAutoLodConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReadyPlayerMeAutoLodConfig.OuterSingleton;
	}
	template<> READYPLAYERME_API UClass* StaticClass<UReadyPlayerMeAutoLodConfig>()
	{
		return UReadyPlayerMeAutoLodConfig::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReadyPlayerMeAutoLodConfig);
	struct Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAutoLodConfig_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAutoLodConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReadyPlayerMeAutoLodConfig, UReadyPlayerMeAutoLodConfig::StaticClass, TEXT("UReadyPlayerMeAutoLodConfig"), &Z_Registration_Info_UClass_UReadyPlayerMeAutoLodConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReadyPlayerMeAutoLodConfig), 3749244090U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAutoLodConfig_h_3854416643(TEXT("/Script/ReadyPlayerMe"),
		Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAutoLodConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAutoLodConfig_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
