// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RpmAvatarCreator/Private/Downloaders/RpmImageDownloader.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRpmImageDownloader() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	RPMAVATARCREATOR_API UClass* Z_Construct_UClass_URpmImageDownloader();
	RPMAVATARCREATOR_API UClass* Z_Construct_UClass_URpmImageDownloader_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RpmAvatarCreator();
// End Cross Module References
	void URpmImageDownloader::StaticRegisterNativesURpmImageDownloader()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URpmImageDownloader);
	UClass* Z_Construct_UClass_URpmImageDownloader_NoRegister()
	{
		return URpmImageDownloader::StaticClass();
	}
	struct Z_Construct_UClass_URpmImageDownloader_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ImageMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ImageMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ImageMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URpmImageDownloader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RpmAvatarCreator,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URpmImageDownloader_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URpmImageDownloader_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Downloaders/RpmImageDownloader.h" },
		{ "ModuleRelativePath", "Private/Downloaders/RpmImageDownloader.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URpmImageDownloader_Statics::NewProp_ImageMap_ValueProp = { "ImageMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URpmImageDownloader_Statics::NewProp_ImageMap_Key_KeyProp = { "ImageMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URpmImageDownloader_Statics::NewProp_ImageMap_MetaData[] = {
		{ "ModuleRelativePath", "Private/Downloaders/RpmImageDownloader.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URpmImageDownloader_Statics::NewProp_ImageMap = { "ImageMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URpmImageDownloader, ImageMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URpmImageDownloader_Statics::NewProp_ImageMap_MetaData), Z_Construct_UClass_URpmImageDownloader_Statics::NewProp_ImageMap_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URpmImageDownloader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmImageDownloader_Statics::NewProp_ImageMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmImageDownloader_Statics::NewProp_ImageMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmImageDownloader_Statics::NewProp_ImageMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URpmImageDownloader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URpmImageDownloader>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URpmImageDownloader_Statics::ClassParams = {
		&URpmImageDownloader::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URpmImageDownloader_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URpmImageDownloader_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URpmImageDownloader_Statics::Class_MetaDataParams), Z_Construct_UClass_URpmImageDownloader_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URpmImageDownloader_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_URpmImageDownloader()
	{
		if (!Z_Registration_Info_UClass_URpmImageDownloader.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URpmImageDownloader.OuterSingleton, Z_Construct_UClass_URpmImageDownloader_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URpmImageDownloader.OuterSingleton;
	}
	template<> RPMAVATARCREATOR_API UClass* StaticClass<URpmImageDownloader>()
	{
		return URpmImageDownloader::StaticClass();
	}
	URpmImageDownloader::URpmImageDownloader(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URpmImageDownloader);
	URpmImageDownloader::~URpmImageDownloader() {}
	struct Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Private_Downloaders_RpmImageDownloader_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Private_Downloaders_RpmImageDownloader_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URpmImageDownloader, URpmImageDownloader::StaticClass, TEXT("URpmImageDownloader"), &Z_Registration_Info_UClass_URpmImageDownloader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URpmImageDownloader), 447992661U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Private_Downloaders_RpmImageDownloader_h_2878594401(TEXT("/Script/RpmAvatarCreator"),
		Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Private_Downloaders_RpmImageDownloader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Private_Downloaders_RpmImageDownloader_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
