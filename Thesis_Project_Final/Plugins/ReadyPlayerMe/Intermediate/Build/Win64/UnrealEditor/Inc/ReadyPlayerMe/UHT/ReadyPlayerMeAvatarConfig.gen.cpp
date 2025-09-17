// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReadyPlayerMe/Public/ReadyPlayerMeAvatarConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReadyPlayerMeAvatarConfig() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeAvatarConfig();
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeAvatarConfig_NoRegister();
	READYPLAYERME_API UEnum* Z_Construct_UEnum_ReadyPlayerMe_EAvatarLod();
	READYPLAYERME_API UEnum* Z_Construct_UEnum_ReadyPlayerMe_EAvatarMorphTarget();
	READYPLAYERME_API UEnum* Z_Construct_UEnum_ReadyPlayerMe_EAvatarPose();
	READYPLAYERME_API UEnum* Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureAtlas();
	READYPLAYERME_API UEnum* Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureChannel();
	READYPLAYERME_API UEnum* Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureSizeLimit();
	READYPLAYERME_API UEnum* Z_Construct_UEnum_ReadyPlayerMe_EStandardMorphTargetGroup();
	UPackage* Z_Construct_UPackage__Script_ReadyPlayerMe();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAvatarPose;
	static UEnum* EAvatarPose_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAvatarPose.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAvatarPose.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ReadyPlayerMe_EAvatarPose, (UObject*)Z_Construct_UPackage__Script_ReadyPlayerMe(), TEXT("EAvatarPose"));
		}
		return Z_Registration_Info_UEnum_EAvatarPose.OuterSingleton;
	}
	template<> READYPLAYERME_API UEnum* StaticEnum<EAvatarPose>()
	{
		return EAvatarPose_StaticEnum();
	}
	struct Z_Construct_UEnum_ReadyPlayerMe_EAvatarPose_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ReadyPlayerMe_EAvatarPose_Statics::Enumerators[] = {
		{ "EAvatarPose::APose", (int64)EAvatarPose::APose },
		{ "EAvatarPose::TPose", (int64)EAvatarPose::TPose },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ReadyPlayerMe_EAvatarPose_Statics::Enum_MetaDataParams[] = {
		{ "APose.DisplayName", "A-Pose" },
		{ "APose.Name", "EAvatarPose::APose" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeAvatarConfig.h" },
		{ "TPose.DisplayName", "T-Pose" },
		{ "TPose.Name", "EAvatarPose::TPose" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ReadyPlayerMe_EAvatarPose_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ReadyPlayerMe,
		nullptr,
		"EAvatarPose",
		"EAvatarPose",
		Z_Construct_UEnum_ReadyPlayerMe_EAvatarPose_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ReadyPlayerMe_EAvatarPose_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ReadyPlayerMe_EAvatarPose_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ReadyPlayerMe_EAvatarPose_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ReadyPlayerMe_EAvatarPose()
	{
		if (!Z_Registration_Info_UEnum_EAvatarPose.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAvatarPose.InnerSingleton, Z_Construct_UEnum_ReadyPlayerMe_EAvatarPose_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAvatarPose.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAvatarLod;
	static UEnum* EAvatarLod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAvatarLod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAvatarLod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ReadyPlayerMe_EAvatarLod, (UObject*)Z_Construct_UPackage__Script_ReadyPlayerMe(), TEXT("EAvatarLod"));
		}
		return Z_Registration_Info_UEnum_EAvatarLod.OuterSingleton;
	}
	template<> READYPLAYERME_API UEnum* StaticEnum<EAvatarLod>()
	{
		return EAvatarLod_StaticEnum();
	}
	struct Z_Construct_UEnum_ReadyPlayerMe_EAvatarLod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ReadyPlayerMe_EAvatarLod_Statics::Enumerators[] = {
		{ "EAvatarLod::High", (int64)EAvatarLod::High },
		{ "EAvatarLod::Medium", (int64)EAvatarLod::Medium },
		{ "EAvatarLod::Low", (int64)EAvatarLod::Low },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ReadyPlayerMe_EAvatarLod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "High.DisplayName", "High (0)" },
		{ "High.Name", "EAvatarLod::High" },
		{ "Low.DisplayName", "Low (2)" },
		{ "Low.Name", "EAvatarLod::Low" },
		{ "Medium.DisplayName", "Medium (1)" },
		{ "Medium.Name", "EAvatarLod::Medium" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeAvatarConfig.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ReadyPlayerMe_EAvatarLod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ReadyPlayerMe,
		nullptr,
		"EAvatarLod",
		"EAvatarLod",
		Z_Construct_UEnum_ReadyPlayerMe_EAvatarLod_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ReadyPlayerMe_EAvatarLod_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ReadyPlayerMe_EAvatarLod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ReadyPlayerMe_EAvatarLod_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ReadyPlayerMe_EAvatarLod()
	{
		if (!Z_Registration_Info_UEnum_EAvatarLod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAvatarLod.InnerSingleton, Z_Construct_UEnum_ReadyPlayerMe_EAvatarLod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAvatarLod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAvatarTextureAtlas;
	static UEnum* EAvatarTextureAtlas_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAvatarTextureAtlas.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAvatarTextureAtlas.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureAtlas, (UObject*)Z_Construct_UPackage__Script_ReadyPlayerMe(), TEXT("EAvatarTextureAtlas"));
		}
		return Z_Registration_Info_UEnum_EAvatarTextureAtlas.OuterSingleton;
	}
	template<> READYPLAYERME_API UEnum* StaticEnum<EAvatarTextureAtlas>()
	{
		return EAvatarTextureAtlas_StaticEnum();
	}
	struct Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureAtlas_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureAtlas_Statics::Enumerators[] = {
		{ "EAvatarTextureAtlas::None", (int64)EAvatarTextureAtlas::None },
		{ "EAvatarTextureAtlas::High", (int64)EAvatarTextureAtlas::High },
		{ "EAvatarTextureAtlas::Medium", (int64)EAvatarTextureAtlas::Medium },
		{ "EAvatarTextureAtlas::Low", (int64)EAvatarTextureAtlas::Low },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureAtlas_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "High.DisplayName", "High (1024)" },
		{ "High.Name", "EAvatarTextureAtlas::High" },
		{ "Low.DisplayName", "Low (256)" },
		{ "Low.Name", "EAvatarTextureAtlas::Low" },
		{ "Medium.DisplayName", "Medium (512)" },
		{ "Medium.Name", "EAvatarTextureAtlas::Medium" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeAvatarConfig.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EAvatarTextureAtlas::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureAtlas_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ReadyPlayerMe,
		nullptr,
		"EAvatarTextureAtlas",
		"EAvatarTextureAtlas",
		Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureAtlas_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureAtlas_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureAtlas_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureAtlas_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureAtlas()
	{
		if (!Z_Registration_Info_UEnum_EAvatarTextureAtlas.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAvatarTextureAtlas.InnerSingleton, Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureAtlas_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAvatarTextureAtlas.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAvatarTextureSizeLimit;
	static UEnum* EAvatarTextureSizeLimit_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAvatarTextureSizeLimit.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAvatarTextureSizeLimit.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureSizeLimit, (UObject*)Z_Construct_UPackage__Script_ReadyPlayerMe(), TEXT("EAvatarTextureSizeLimit"));
		}
		return Z_Registration_Info_UEnum_EAvatarTextureSizeLimit.OuterSingleton;
	}
	template<> READYPLAYERME_API UEnum* StaticEnum<EAvatarTextureSizeLimit>()
	{
		return EAvatarTextureSizeLimit_StaticEnum();
	}
	struct Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureSizeLimit_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureSizeLimit_Statics::Enumerators[] = {
		{ "EAvatarTextureSizeLimit::Limit_1024", (int64)EAvatarTextureSizeLimit::Limit_1024 },
		{ "EAvatarTextureSizeLimit::Limit_512", (int64)EAvatarTextureSizeLimit::Limit_512 },
		{ "EAvatarTextureSizeLimit::Limit_256", (int64)EAvatarTextureSizeLimit::Limit_256 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureSizeLimit_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Limit_1024.DisplayName", "1024" },
		{ "Limit_1024.Name", "EAvatarTextureSizeLimit::Limit_1024" },
		{ "Limit_256.DisplayName", "256" },
		{ "Limit_256.Name", "EAvatarTextureSizeLimit::Limit_256" },
		{ "Limit_512.DisplayName", "512" },
		{ "Limit_512.Name", "EAvatarTextureSizeLimit::Limit_512" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeAvatarConfig.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureSizeLimit_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ReadyPlayerMe,
		nullptr,
		"EAvatarTextureSizeLimit",
		"EAvatarTextureSizeLimit",
		Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureSizeLimit_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureSizeLimit_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureSizeLimit_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureSizeLimit_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureSizeLimit()
	{
		if (!Z_Registration_Info_UEnum_EAvatarTextureSizeLimit.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAvatarTextureSizeLimit.InnerSingleton, Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureSizeLimit_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAvatarTextureSizeLimit.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAvatarTextureChannel;
	static UEnum* EAvatarTextureChannel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAvatarTextureChannel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAvatarTextureChannel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureChannel, (UObject*)Z_Construct_UPackage__Script_ReadyPlayerMe(), TEXT("EAvatarTextureChannel"));
		}
		return Z_Registration_Info_UEnum_EAvatarTextureChannel.OuterSingleton;
	}
	template<> READYPLAYERME_API UEnum* StaticEnum<EAvatarTextureChannel>()
	{
		return EAvatarTextureChannel_StaticEnum();
	}
	struct Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureChannel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureChannel_Statics::Enumerators[] = {
		{ "EAvatarTextureChannel::BaseColor", (int64)EAvatarTextureChannel::BaseColor },
		{ "EAvatarTextureChannel::Normal", (int64)EAvatarTextureChannel::Normal },
		{ "EAvatarTextureChannel::MetallicRoughness", (int64)EAvatarTextureChannel::MetallicRoughness },
		{ "EAvatarTextureChannel::Emissive", (int64)EAvatarTextureChannel::Emissive },
		{ "EAvatarTextureChannel::Occlusion", (int64)EAvatarTextureChannel::Occlusion },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureChannel_Statics::Enum_MetaDataParams[] = {
		{ "BaseColor.DisplayName", "Base Color" },
		{ "BaseColor.Name", "EAvatarTextureChannel::BaseColor" },
		{ "BlueprintType", "true" },
		{ "Emissive.DisplayName", "Emissive" },
		{ "Emissive.Name", "EAvatarTextureChannel::Emissive" },
		{ "MetallicRoughness.DisplayName", "Metallic Roughness" },
		{ "MetallicRoughness.Name", "EAvatarTextureChannel::MetallicRoughness" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeAvatarConfig.h" },
		{ "Normal.DisplayName", "Normal" },
		{ "Normal.Name", "EAvatarTextureChannel::Normal" },
		{ "Occlusion.DisplayName", "Occlusion" },
		{ "Occlusion.Name", "EAvatarTextureChannel::Occlusion" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureChannel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ReadyPlayerMe,
		nullptr,
		"EAvatarTextureChannel",
		"EAvatarTextureChannel",
		Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureChannel_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureChannel_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureChannel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureChannel_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureChannel()
	{
		if (!Z_Registration_Info_UEnum_EAvatarTextureChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAvatarTextureChannel.InnerSingleton, Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureChannel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAvatarTextureChannel.InnerSingleton;
	}
	void UReadyPlayerMeAvatarConfig::StaticRegisterNativesUReadyPlayerMeAvatarConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReadyPlayerMeAvatarConfig);
	UClass* Z_Construct_UClass_UReadyPlayerMeAvatarConfig_NoRegister()
	{
		return UReadyPlayerMeAvatarConfig::StaticClass();
	}
	struct Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Lod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Lod;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Pose_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pose_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Pose;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TextureAtlas_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureAtlas_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TextureAtlas;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TextureSizeLimit_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureSizeLimit_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TextureSizeLimit;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TextureChannels_ElementProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TextureChannels_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureChannels_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_TextureChannels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseHands_MetaData[];
#endif
		static void NewProp_bUseHands_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHands;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseMeshOptCompression_MetaData[];
#endif
		static void NewProp_bUseMeshOptCompression_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMeshOptCompression;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseDracoMeshCompression_MetaData[];
#endif
		static void NewProp_bUseDracoMeshCompression_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDracoMeshCompression;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MorphTargetGroups_ElementProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MorphTargetGroups_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MorphTargetGroups_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_MorphTargetGroups;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MorphTargets_ElementProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MorphTargets_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MorphTargets_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_MorphTargets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ReadyPlayerMe,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Base data asset class that provides configuration for the avatar loader.\n * For customization create a blueprint data asset subclass. \n */" },
#endif
		{ "IncludePath", "ReadyPlayerMeAvatarConfig.h" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeAvatarConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base data asset class that provides configuration for the avatar loader.\nFor customization create a blueprint data asset subclass." },
#endif
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_Lod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_Lod_MetaData[] = {
		{ "Category", "Ready Player Me" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mesh Level of detail. The avatar with high LOD is detailed, but at the same time heavier to load. */" },
#endif
		{ "ModuleRelativePath", "Public/ReadyPlayerMeAvatarConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mesh Level of detail. The avatar with high LOD is detailed, but at the same time heavier to load." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_Lod = { "Lod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReadyPlayerMeAvatarConfig, Lod), Z_Construct_UEnum_ReadyPlayerMe_EAvatarLod, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_Lod_MetaData), Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_Lod_MetaData) }; // 3386689712
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_Pose_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_Pose_MetaData[] = {
		{ "Category", "Ready Player Me" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Avatar Pose. */" },
#endif
		{ "ModuleRelativePath", "Public/ReadyPlayerMeAvatarConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Avatar Pose." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReadyPlayerMeAvatarConfig, Pose), Z_Construct_UEnum_ReadyPlayerMe_EAvatarPose, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_Pose_MetaData), Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_Pose_MetaData) }; // 2642870161
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_TextureAtlas_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_TextureAtlas_MetaData[] = {
		{ "Category", "Ready Player Me" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** By enabling texture atlas the textures will be merged into a single texture.\n\x09 * With the texture atlas enabled the avatar will be rendered with a single draw call. */" },
#endif
		{ "ModuleRelativePath", "Public/ReadyPlayerMeAvatarConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "By enabling texture atlas the textures will be merged into a single texture.\nWith the texture atlas enabled the avatar will be rendered with a single draw call." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_TextureAtlas = { "TextureAtlas", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReadyPlayerMeAvatarConfig, TextureAtlas), Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureAtlas, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_TextureAtlas_MetaData), Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_TextureAtlas_MetaData) }; // 2480776325
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_TextureSizeLimit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_TextureSizeLimit_MetaData[] = {
		{ "Category", "Ready Player Me" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Provides ability to change the texture size. */" },
#endif
		{ "ModuleRelativePath", "Public/ReadyPlayerMeAvatarConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Provides ability to change the texture size." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_TextureSizeLimit = { "TextureSizeLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReadyPlayerMeAvatarConfig, TextureSizeLimit), Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureSizeLimit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_TextureSizeLimit_MetaData), Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_TextureSizeLimit_MetaData) }; // 3373069284
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_TextureChannels_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_TextureChannels_ElementProp = { "TextureChannels", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_ReadyPlayerMe_EAvatarTextureChannel, METADATA_PARAMS(0, nullptr) }; // 1506558143
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_TextureChannels_MetaData[] = {
		{ "Category", "Ready Player Me" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Provides ability to select the texture channels that need to be included in the avatar */" },
#endif
		{ "ModuleRelativePath", "Public/ReadyPlayerMeAvatarConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Provides ability to select the texture channels that need to be included in the avatar" },
#endif
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_TextureChannels = { "TextureChannels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReadyPlayerMeAvatarConfig, TextureChannels), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_TextureChannels_MetaData), Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_TextureChannels_MetaData) }; // 1506558143
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_bUseHands_MetaData[] = {
		{ "Category", "Ready Player Me" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If set to true the hands of the avatars will be included. This property applies only to the half-body avatars. */" },
#endif
		{ "ModuleRelativePath", "Public/ReadyPlayerMeAvatarConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If set to true the hands of the avatars will be included. This property applies only to the half-body avatars." },
#endif
	};
#endif
	void Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_bUseHands_SetBit(void* Obj)
	{
		((UReadyPlayerMeAvatarConfig*)Obj)->bUseHands = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_bUseHands = { "bUseHands", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UReadyPlayerMeAvatarConfig), &Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_bUseHands_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_bUseHands_MetaData), Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_bUseHands_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_bUseMeshOptCompression_MetaData[] = {
		{ "Category", "Ready Player Me" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If set to true the avatar will be compressed with the Mesh-Opt compression.\n\x09 * Mesh-Opt compression will effectively reduce the size of the avatar by compressing the mesh geometry.\n\x09 *\n\x09 * @note Currently Mesh-Opt compression only works when the `TextureAtlas` property is set.\n\x09 * @note Mesh-Opt compression should not be used along with the Draco compression.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ReadyPlayerMeAvatarConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If set to true the avatar will be compressed with the Mesh-Opt compression.\nMesh-Opt compression will effectively reduce the size of the avatar by compressing the mesh geometry.\n\n@note Currently Mesh-Opt compression only works when the `TextureAtlas` property is set.\n@note Mesh-Opt compression should not be used along with the Draco compression." },
#endif
	};
#endif
	void Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_bUseMeshOptCompression_SetBit(void* Obj)
	{
		((UReadyPlayerMeAvatarConfig*)Obj)->bUseMeshOptCompression = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_bUseMeshOptCompression = { "bUseMeshOptCompression", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UReadyPlayerMeAvatarConfig), &Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_bUseMeshOptCompression_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_bUseMeshOptCompression_MetaData), Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_bUseMeshOptCompression_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_bUseDracoMeshCompression_MetaData[] = {
		{ "Category", "Ready Player Me" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If set to true the avatar will be compressed with the Draco mesh compression.\n\x09 *\n\x09 * @note If the glTFRuntimeDraco plugin is not listed as a project dependency, this property will be ignored.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ReadyPlayerMeAvatarConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If set to true the avatar will be compressed with the Draco mesh compression.\n\n@note If the glTFRuntimeDraco plugin is not listed as a project dependency, this property will be ignored." },
#endif
	};
#endif
	void Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_bUseDracoMeshCompression_SetBit(void* Obj)
	{
		((UReadyPlayerMeAvatarConfig*)Obj)->bUseDracoMeshCompression = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_bUseDracoMeshCompression = { "bUseDracoMeshCompression", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UReadyPlayerMeAvatarConfig), &Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_bUseDracoMeshCompression_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_bUseDracoMeshCompression_MetaData), Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_bUseDracoMeshCompression_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_MorphTargetGroups_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_MorphTargetGroups_ElementProp = { "MorphTargetGroups", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_ReadyPlayerMe_EStandardMorphTargetGroup, METADATA_PARAMS(0, nullptr) }; // 3279916669
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_MorphTargetGroups_MetaData[] = {
		{ "Category", "Ready Player Me" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The selected morph target groups (blend shapes) will be included in the avatar. */" },
#endif
		{ "ModuleRelativePath", "Public/ReadyPlayerMeAvatarConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The selected morph target groups (blend shapes) will be included in the avatar." },
#endif
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_MorphTargetGroups = { "MorphTargetGroups", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReadyPlayerMeAvatarConfig, MorphTargetGroups), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_MorphTargetGroups_MetaData), Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_MorphTargetGroups_MetaData) }; // 3279916669
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_MorphTargets_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_MorphTargets_ElementProp = { "MorphTargets", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_ReadyPlayerMe_EAvatarMorphTarget, METADATA_PARAMS(0, nullptr) }; // 3688376472
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_MorphTargets_MetaData[] = {
		{ "Category", "Ready Player Me" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The selected morph targets (blend shapes) will be included in the avatar. */" },
#endif
		{ "ModuleRelativePath", "Public/ReadyPlayerMeAvatarConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The selected morph targets (blend shapes) will be included in the avatar." },
#endif
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_MorphTargets = { "MorphTargets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReadyPlayerMeAvatarConfig, MorphTargets), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_MorphTargets_MetaData), Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_MorphTargets_MetaData) }; // 3688376472
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_Lod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_Lod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_Pose_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_Pose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_TextureAtlas_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_TextureAtlas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_TextureSizeLimit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_TextureSizeLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_TextureChannels_ElementProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_TextureChannels_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_TextureChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_bUseHands,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_bUseMeshOptCompression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_bUseDracoMeshCompression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_MorphTargetGroups_ElementProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_MorphTargetGroups_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_MorphTargetGroups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_MorphTargets_ElementProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_MorphTargets_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::NewProp_MorphTargets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReadyPlayerMeAvatarConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::ClassParams = {
		&UReadyPlayerMeAvatarConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UReadyPlayerMeAvatarConfig()
	{
		if (!Z_Registration_Info_UClass_UReadyPlayerMeAvatarConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReadyPlayerMeAvatarConfig.OuterSingleton, Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReadyPlayerMeAvatarConfig.OuterSingleton;
	}
	template<> READYPLAYERME_API UClass* StaticClass<UReadyPlayerMeAvatarConfig>()
	{
		return UReadyPlayerMeAvatarConfig::StaticClass();
	}
	UReadyPlayerMeAvatarConfig::UReadyPlayerMeAvatarConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReadyPlayerMeAvatarConfig);
	UReadyPlayerMeAvatarConfig::~UReadyPlayerMeAvatarConfig() {}
	struct Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarConfig_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarConfig_h_Statics::EnumInfo[] = {
		{ EAvatarPose_StaticEnum, TEXT("EAvatarPose"), &Z_Registration_Info_UEnum_EAvatarPose, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2642870161U) },
		{ EAvatarLod_StaticEnum, TEXT("EAvatarLod"), &Z_Registration_Info_UEnum_EAvatarLod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3386689712U) },
		{ EAvatarTextureAtlas_StaticEnum, TEXT("EAvatarTextureAtlas"), &Z_Registration_Info_UEnum_EAvatarTextureAtlas, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2480776325U) },
		{ EAvatarTextureSizeLimit_StaticEnum, TEXT("EAvatarTextureSizeLimit"), &Z_Registration_Info_UEnum_EAvatarTextureSizeLimit, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3373069284U) },
		{ EAvatarTextureChannel_StaticEnum, TEXT("EAvatarTextureChannel"), &Z_Registration_Info_UEnum_EAvatarTextureChannel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1506558143U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReadyPlayerMeAvatarConfig, UReadyPlayerMeAvatarConfig::StaticClass, TEXT("UReadyPlayerMeAvatarConfig"), &Z_Registration_Info_UClass_UReadyPlayerMeAvatarConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReadyPlayerMeAvatarConfig), 3869301705U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarConfig_h_2610038309(TEXT("/Script/ReadyPlayerMe"),
		Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarConfig_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarConfig_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarConfig_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
