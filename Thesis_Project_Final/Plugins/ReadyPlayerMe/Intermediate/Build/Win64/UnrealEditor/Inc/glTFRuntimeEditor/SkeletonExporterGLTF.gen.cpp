// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "glTFRuntimeEditor/Public/SkeletonExporterGLTF.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletonExporterGLTF() {}
// Cross Module References
	GLTFRUNTIMEEDITOR_API UClass* Z_Construct_UClass_USkeletonExporterGLTF_NoRegister();
	GLTFRUNTIMEEDITOR_API UClass* Z_Construct_UClass_USkeletonExporterGLTF();
	ENGINE_API UClass* Z_Construct_UClass_UExporter();
	UPackage* Z_Construct_UPackage__Script_glTFRuntimeEditor();
// End Cross Module References
	void USkeletonExporterGLTF::StaticRegisterNativesUSkeletonExporterGLTF()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkeletonExporterGLTF);
	UClass* Z_Construct_UClass_USkeletonExporterGLTF_NoRegister()
	{
		return USkeletonExporterGLTF::StaticClass();
	}
	struct Z_Construct_UClass_USkeletonExporterGLTF_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkeletonExporterGLTF_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UExporter,
		(UObject* (*)())Z_Construct_UPackage__Script_glTFRuntimeEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletonExporterGLTF_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SkeletonExporterGLTF.h" },
		{ "ModuleRelativePath", "Public/SkeletonExporterGLTF.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkeletonExporterGLTF_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkeletonExporterGLTF>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkeletonExporterGLTF_Statics::ClassParams = {
		&USkeletonExporterGLTF::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USkeletonExporterGLTF_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletonExporterGLTF_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkeletonExporterGLTF()
	{
		if (!Z_Registration_Info_UClass_USkeletonExporterGLTF.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkeletonExporterGLTF.OuterSingleton, Z_Construct_UClass_USkeletonExporterGLTF_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkeletonExporterGLTF.OuterSingleton;
	}
	template<> GLTFRUNTIMEEDITOR_API UClass* StaticClass<USkeletonExporterGLTF>()
	{
		return USkeletonExporterGLTF::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkeletonExporterGLTF);
	struct Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ThirdParty_glTFRuntimeEditor_Public_SkeletonExporterGLTF_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ThirdParty_glTFRuntimeEditor_Public_SkeletonExporterGLTF_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USkeletonExporterGLTF, USkeletonExporterGLTF::StaticClass, TEXT("USkeletonExporterGLTF"), &Z_Registration_Info_UClass_USkeletonExporterGLTF, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkeletonExporterGLTF), 3296044335U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ThirdParty_glTFRuntimeEditor_Public_SkeletonExporterGLTF_h_265525070(TEXT("/Script/glTFRuntimeEditor"),
		Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ThirdParty_glTFRuntimeEditor_Public_SkeletonExporterGLTF_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ThirdParty_glTFRuntimeEditor_Public_SkeletonExporterGLTF_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
