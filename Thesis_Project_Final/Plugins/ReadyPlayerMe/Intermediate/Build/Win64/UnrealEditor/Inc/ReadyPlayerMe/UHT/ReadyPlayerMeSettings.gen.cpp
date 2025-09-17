// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReadyPlayerMe/Public/ReadyPlayerMeSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReadyPlayerMeSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeSettings();
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeSettings_NoRegister();
	READYPLAYERME_API UScriptStruct* Z_Construct_UScriptStruct_FRpmAvatarCacheSettings();
	UPackage* Z_Construct_UPackage__Script_ReadyPlayerMe();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RpmAvatarCacheSettings;
class UScriptStruct* FRpmAvatarCacheSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RpmAvatarCacheSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RpmAvatarCacheSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRpmAvatarCacheSettings, (UObject*)Z_Construct_UPackage__Script_ReadyPlayerMe(), TEXT("RpmAvatarCacheSettings"));
	}
	return Z_Registration_Info_UScriptStruct_RpmAvatarCacheSettings.OuterSingleton;
}
template<> READYPLAYERME_API UScriptStruct* StaticStruct<FRpmAvatarCacheSettings>()
{
	return FRpmAvatarCacheSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRpmAvatarCacheSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAvatarCaching_MetaData[];
#endif
		static void NewProp_bEnableAvatarCaching_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAvatarCaching;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAutomaticCacheCleaning_MetaData[];
#endif
		static void NewProp_bEnableAutomaticCacheCleaning_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAutomaticCacheCleaning;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedAvatarLimit_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CachedAvatarLimit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRpmAvatarCacheSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReadyPlayerMeSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRpmAvatarCacheSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRpmAvatarCacheSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRpmAvatarCacheSettings_Statics::NewProp_bEnableAvatarCaching_MetaData[] = {
		{ "Category", "Avatar Caching" },
		{ "DisplayName", "Enable Avatar Caching" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If checked, the loaded avatars will be saved in the local storage." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FRpmAvatarCacheSettings_Statics::NewProp_bEnableAvatarCaching_SetBit(void* Obj)
	{
		((FRpmAvatarCacheSettings*)Obj)->bEnableAvatarCaching = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRpmAvatarCacheSettings_Statics::NewProp_bEnableAvatarCaching = { "bEnableAvatarCaching", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRpmAvatarCacheSettings), &Z_Construct_UScriptStruct_FRpmAvatarCacheSettings_Statics::NewProp_bEnableAvatarCaching_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmAvatarCacheSettings_Statics::NewProp_bEnableAvatarCaching_MetaData), Z_Construct_UScriptStruct_FRpmAvatarCacheSettings_Statics::NewProp_bEnableAvatarCaching_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRpmAvatarCacheSettings_Statics::NewProp_bEnableAutomaticCacheCleaning_MetaData[] = {
		{ "Category", "Avatar Caching | Automated Cleanup" },
		{ "DisplayName", "Enable Automatic Avatar Cache Cleaning" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If checked, the old avatars will be automatically removed if the number of the saved avatars exceeds the cached avatar limit." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FRpmAvatarCacheSettings_Statics::NewProp_bEnableAutomaticCacheCleaning_SetBit(void* Obj)
	{
		((FRpmAvatarCacheSettings*)Obj)->bEnableAutomaticCacheCleaning = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRpmAvatarCacheSettings_Statics::NewProp_bEnableAutomaticCacheCleaning = { "bEnableAutomaticCacheCleaning", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRpmAvatarCacheSettings), &Z_Construct_UScriptStruct_FRpmAvatarCacheSettings_Statics::NewProp_bEnableAutomaticCacheCleaning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmAvatarCacheSettings_Statics::NewProp_bEnableAutomaticCacheCleaning_MetaData), Z_Construct_UScriptStruct_FRpmAvatarCacheSettings_Statics::NewProp_bEnableAutomaticCacheCleaning_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRpmAvatarCacheSettings_Statics::NewProp_CachedAvatarLimit_MetaData[] = {
		{ "Category", "Avatar Caching | Automated Cleanup" },
		{ "DisplayName", "Cached Avatar Limit" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The limit of the cached avatars, when the limit is exceeded and the automatic cleaning is enabled the old avatars will automatically be cleaned." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRpmAvatarCacheSettings_Statics::NewProp_CachedAvatarLimit = { "CachedAvatarLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRpmAvatarCacheSettings, CachedAvatarLimit), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmAvatarCacheSettings_Statics::NewProp_CachedAvatarLimit_MetaData), Z_Construct_UScriptStruct_FRpmAvatarCacheSettings_Statics::NewProp_CachedAvatarLimit_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRpmAvatarCacheSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpmAvatarCacheSettings_Statics::NewProp_bEnableAvatarCaching,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpmAvatarCacheSettings_Statics::NewProp_bEnableAutomaticCacheCleaning,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpmAvatarCacheSettings_Statics::NewProp_CachedAvatarLimit,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRpmAvatarCacheSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ReadyPlayerMe,
		nullptr,
		&NewStructOps,
		"RpmAvatarCacheSettings",
		Z_Construct_UScriptStruct_FRpmAvatarCacheSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmAvatarCacheSettings_Statics::PropPointers),
		sizeof(FRpmAvatarCacheSettings),
		alignof(FRpmAvatarCacheSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmAvatarCacheSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRpmAvatarCacheSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmAvatarCacheSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRpmAvatarCacheSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_RpmAvatarCacheSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RpmAvatarCacheSettings.InnerSingleton, Z_Construct_UScriptStruct_FRpmAvatarCacheSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RpmAvatarCacheSettings.InnerSingleton;
	}
	void UReadyPlayerMeSettings::StaticRegisterNativesUReadyPlayerMeSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReadyPlayerMeSettings);
	UClass* Z_Construct_UClass_UReadyPlayerMeSettings_NoRegister()
	{
		return UReadyPlayerMeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UReadyPlayerMeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AppId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Subdomain_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Subdomain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bKeepLoadedAvatarsInMemory_MetaData[];
#endif
		static void NewProp_bKeepLoadedAvatarsInMemory_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepLoadedAvatarsInMemory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvatarCacheSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AvatarCacheSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReadyPlayerMeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_ReadyPlayerMe,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Ready Player Me" },
		{ "IncludePath", "ReadyPlayerMeSettings.h" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeSettings_Statics::NewProp_AppId_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "App ID" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The App ID is used to identify your application. You can find it in the Ready Player Me application dashboard in studio https://studio.readyplayer.me/applications." },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UReadyPlayerMeSettings_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReadyPlayerMeSettings, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeSettings_Statics::NewProp_AppId_MetaData), Z_Construct_UClass_UReadyPlayerMeSettings_Statics::NewProp_AppId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeSettings_Statics::NewProp_Subdomain_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Subdomain" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Subdomain is used to identify your application. You can find it in the Ready Player Me application dashboard in studio https://studio.readyplayer.me/applications." },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UReadyPlayerMeSettings_Statics::NewProp_Subdomain = { "Subdomain", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReadyPlayerMeSettings, Subdomain), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeSettings_Statics::NewProp_Subdomain_MetaData), Z_Construct_UClass_UReadyPlayerMeSettings_Statics::NewProp_Subdomain_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeSettings_Statics::NewProp_bKeepLoadedAvatarsInMemory_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Keep Loaded Avatars In Memory" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If checked, the loaded avatars will be kept in the memory and will be reused afterwards." },
#endif
	};
#endif
	void Z_Construct_UClass_UReadyPlayerMeSettings_Statics::NewProp_bKeepLoadedAvatarsInMemory_SetBit(void* Obj)
	{
		((UReadyPlayerMeSettings*)Obj)->bKeepLoadedAvatarsInMemory = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReadyPlayerMeSettings_Statics::NewProp_bKeepLoadedAvatarsInMemory = { "bKeepLoadedAvatarsInMemory", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UReadyPlayerMeSettings), &Z_Construct_UClass_UReadyPlayerMeSettings_Statics::NewProp_bKeepLoadedAvatarsInMemory_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeSettings_Statics::NewProp_bKeepLoadedAvatarsInMemory_MetaData), Z_Construct_UClass_UReadyPlayerMeSettings_Statics::NewProp_bKeepLoadedAvatarsInMemory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeSettings_Statics::NewProp_AvatarCacheSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Avatar Cache Settings" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Settings for saving the avatars in the local storage." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UReadyPlayerMeSettings_Statics::NewProp_AvatarCacheSettings = { "AvatarCacheSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReadyPlayerMeSettings, AvatarCacheSettings), Z_Construct_UScriptStruct_FRpmAvatarCacheSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeSettings_Statics::NewProp_AvatarCacheSettings_MetaData), Z_Construct_UClass_UReadyPlayerMeSettings_Statics::NewProp_AvatarCacheSettings_MetaData) }; // 3649683861
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReadyPlayerMeSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeSettings_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeSettings_Statics::NewProp_Subdomain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeSettings_Statics::NewProp_bKeepLoadedAvatarsInMemory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeSettings_Statics::NewProp_AvatarCacheSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReadyPlayerMeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReadyPlayerMeSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReadyPlayerMeSettings_Statics::ClassParams = {
		&UReadyPlayerMeSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UReadyPlayerMeSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UReadyPlayerMeSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UReadyPlayerMeSettings()
	{
		if (!Z_Registration_Info_UClass_UReadyPlayerMeSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReadyPlayerMeSettings.OuterSingleton, Z_Construct_UClass_UReadyPlayerMeSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReadyPlayerMeSettings.OuterSingleton;
	}
	template<> READYPLAYERME_API UClass* StaticClass<UReadyPlayerMeSettings>()
	{
		return UReadyPlayerMeSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReadyPlayerMeSettings);
	UReadyPlayerMeSettings::~UReadyPlayerMeSettings() {}
	struct Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeSettings_h_Statics::ScriptStructInfo[] = {
		{ FRpmAvatarCacheSettings::StaticStruct, Z_Construct_UScriptStruct_FRpmAvatarCacheSettings_Statics::NewStructOps, TEXT("RpmAvatarCacheSettings"), &Z_Registration_Info_UScriptStruct_RpmAvatarCacheSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRpmAvatarCacheSettings), 3649683861U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReadyPlayerMeSettings, UReadyPlayerMeSettings::StaticClass, TEXT("UReadyPlayerMeSettings"), &Z_Registration_Info_UClass_UReadyPlayerMeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReadyPlayerMeSettings), 2675240473U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeSettings_h_2611420926(TEXT("/Script/ReadyPlayerMe"),
		Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
