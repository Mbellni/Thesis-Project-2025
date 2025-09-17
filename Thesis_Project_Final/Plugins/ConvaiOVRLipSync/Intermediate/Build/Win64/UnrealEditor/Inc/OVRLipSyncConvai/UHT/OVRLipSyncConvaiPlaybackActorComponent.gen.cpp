// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OVRLipSyncConvai/Private/OVRLipSyncConvaiPlaybackActorComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOVRLipSyncConvaiPlaybackActorComponent() {}
// Cross Module References
	CONVAI_API UClass* Z_Construct_UClass_UConvaiLipSyncInterface_NoRegister();
	OVRLIPSYNC_API UClass* Z_Construct_UClass_UOVRLipSyncActorComponentBase();
	OVRLIPSYNC_API UClass* Z_Construct_UClass_UOVRLipSyncFrameSequence_NoRegister();
	OVRLIPSYNCCONVAI_API UClass* Z_Construct_UClass_UConvaiOVRLipSyncComponent();
	OVRLIPSYNCCONVAI_API UClass* Z_Construct_UClass_UConvaiOVRLipSyncComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OVRLipSyncConvai();
// End Cross Module References
	void UConvaiOVRLipSyncComponent::StaticRegisterNativesUConvaiOVRLipSyncComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConvaiOVRLipSyncComponent);
	UClass* Z_Construct_UClass_UConvaiOVRLipSyncComponent_NoRegister()
	{
		return UConvaiOVRLipSyncComponent::StaticClass();
	}
	struct Z_Construct_UClass_UConvaiOVRLipSyncComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequences_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sequences_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Sequences;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SequenceDurations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceDurations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SequenceDurations;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConvaiOVRLipSyncComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOVRLipSyncActorComponentBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OVRLipSyncConvai,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConvaiOVRLipSyncComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConvaiOVRLipSyncComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "DisplayName", "Convai OVR LipSync" },
		{ "IncludePath", "OVRLipSyncConvaiPlaybackActorComponent.h" },
		{ "ModuleRelativePath", "Private/OVRLipSyncConvaiPlaybackActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConvaiOVRLipSyncComponent_Statics::NewProp_Sequences_Inner = { "Sequences", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOVRLipSyncFrameSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConvaiOVRLipSyncComponent_Statics::NewProp_Sequences_MetaData[] = {
		{ "ModuleRelativePath", "Private/OVRLipSyncConvaiPlaybackActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UConvaiOVRLipSyncComponent_Statics::NewProp_Sequences = { "Sequences", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConvaiOVRLipSyncComponent, Sequences), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UConvaiOVRLipSyncComponent_Statics::NewProp_Sequences_MetaData), Z_Construct_UClass_UConvaiOVRLipSyncComponent_Statics::NewProp_Sequences_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UConvaiOVRLipSyncComponent_Statics::NewProp_SequenceDurations_Inner = { "SequenceDurations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConvaiOVRLipSyncComponent_Statics::NewProp_SequenceDurations_MetaData[] = {
		{ "ModuleRelativePath", "Private/OVRLipSyncConvaiPlaybackActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UConvaiOVRLipSyncComponent_Statics::NewProp_SequenceDurations = { "SequenceDurations", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConvaiOVRLipSyncComponent, SequenceDurations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UConvaiOVRLipSyncComponent_Statics::NewProp_SequenceDurations_MetaData), Z_Construct_UClass_UConvaiOVRLipSyncComponent_Statics::NewProp_SequenceDurations_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConvaiOVRLipSyncComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvaiOVRLipSyncComponent_Statics::NewProp_Sequences_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvaiOVRLipSyncComponent_Statics::NewProp_Sequences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvaiOVRLipSyncComponent_Statics::NewProp_SequenceDurations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvaiOVRLipSyncComponent_Statics::NewProp_SequenceDurations,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UConvaiOVRLipSyncComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UConvaiLipSyncInterface_NoRegister, (int32)VTABLE_OFFSET(UConvaiOVRLipSyncComponent, IConvaiLipSyncInterface), false },  // 710464614
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConvaiOVRLipSyncComponent_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConvaiOVRLipSyncComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConvaiOVRLipSyncComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConvaiOVRLipSyncComponent_Statics::ClassParams = {
		&UConvaiOVRLipSyncComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UConvaiOVRLipSyncComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UConvaiOVRLipSyncComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UConvaiOVRLipSyncComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UConvaiOVRLipSyncComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConvaiOVRLipSyncComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UConvaiOVRLipSyncComponent()
	{
		if (!Z_Registration_Info_UClass_UConvaiOVRLipSyncComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConvaiOVRLipSyncComponent.OuterSingleton, Z_Construct_UClass_UConvaiOVRLipSyncComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConvaiOVRLipSyncComponent.OuterSingleton;
	}
	template<> OVRLIPSYNCCONVAI_API UClass* StaticClass<UConvaiOVRLipSyncComponent>()
	{
		return UConvaiOVRLipSyncComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConvaiOVRLipSyncComponent);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ConvaiOVRLipSync_Source_OVRLipSyncConvai_Private_OVRLipSyncConvaiPlaybackActorComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ConvaiOVRLipSync_Source_OVRLipSyncConvai_Private_OVRLipSyncConvaiPlaybackActorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UConvaiOVRLipSyncComponent, UConvaiOVRLipSyncComponent::StaticClass, TEXT("UConvaiOVRLipSyncComponent"), &Z_Registration_Info_UClass_UConvaiOVRLipSyncComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConvaiOVRLipSyncComponent), 817251742U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ConvaiOVRLipSync_Source_OVRLipSyncConvai_Private_OVRLipSyncConvaiPlaybackActorComponent_h_2357597778(TEXT("/Script/OVRLipSyncConvai"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ConvaiOVRLipSync_Source_OVRLipSyncConvai_Private_OVRLipSyncConvaiPlaybackActorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ConvaiOVRLipSync_Source_OVRLipSyncConvai_Private_OVRLipSyncConvaiPlaybackActorComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
