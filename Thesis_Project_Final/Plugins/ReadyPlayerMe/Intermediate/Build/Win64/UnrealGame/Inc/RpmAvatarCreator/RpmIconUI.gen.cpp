// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RpmAvatarCreator/Public/UI/RpmIconUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRpmIconUI() {}
// Cross Module References
	RPMAVATARCREATOR_API UClass* Z_Construct_UClass_URpmIconUI_NoRegister();
	RPMAVATARCREATOR_API UClass* Z_Construct_UClass_URpmIconUI();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_RpmAvatarCreator();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	static FName NAME_URpmIconUI_SetIconTexture = FName(TEXT("SetIconTexture"));
	void URpmIconUI::SetIconTexture(UTexture2D* Texture)
	{
		RpmIconUI_eventSetIconTexture_Parms Parms;
		Parms.Texture=Texture;
		ProcessEvent(FindFunctionChecked(NAME_URpmIconUI_SetIconTexture),&Parms);
	}
	void URpmIconUI::StaticRegisterNativesURpmIconUI()
	{
	}
	struct Z_Construct_UFunction_URpmIconUI_SetIconTexture_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URpmIconUI_SetIconTexture_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RpmIconUI_eventSetIconTexture_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmIconUI_SetIconTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmIconUI_SetIconTexture_Statics::NewProp_Texture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmIconUI_SetIconTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Set Icon Texture" },
		{ "ModuleRelativePath", "Public/UI/RpmIconUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmIconUI_SetIconTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmIconUI, nullptr, "SetIconTexture", nullptr, nullptr, sizeof(RpmIconUI_eventSetIconTexture_Parms), Z_Construct_UFunction_URpmIconUI_SetIconTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmIconUI_SetIconTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URpmIconUI_SetIconTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmIconUI_SetIconTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URpmIconUI_SetIconTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmIconUI_SetIconTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URpmIconUI);
	UClass* Z_Construct_UClass_URpmIconUI_NoRegister()
	{
		return URpmIconUI::StaticClass();
	}
	struct Z_Construct_UClass_URpmIconUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IconSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URpmIconUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_RpmAvatarCreator,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URpmIconUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URpmIconUI_SetIconTexture, "SetIconTexture" }, // 359616935
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URpmIconUI_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/RpmIconUI.h" },
		{ "ModuleRelativePath", "Public/UI/RpmIconUI.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URpmIconUI_Statics::NewProp_IconSize_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/UI/RpmIconUI.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URpmIconUI_Statics::NewProp_IconSize = { "IconSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URpmIconUI, IconSize), METADATA_PARAMS(Z_Construct_UClass_URpmIconUI_Statics::NewProp_IconSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URpmIconUI_Statics::NewProp_IconSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URpmIconUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmIconUI_Statics::NewProp_IconSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URpmIconUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URpmIconUI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URpmIconUI_Statics::ClassParams = {
		&URpmIconUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URpmIconUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URpmIconUI_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_URpmIconUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URpmIconUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URpmIconUI()
	{
		if (!Z_Registration_Info_UClass_URpmIconUI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URpmIconUI.OuterSingleton, Z_Construct_UClass_URpmIconUI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URpmIconUI.OuterSingleton;
	}
	template<> RPMAVATARCREATOR_API UClass* StaticClass<URpmIconUI>()
	{
		return URpmIconUI::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URpmIconUI);
	struct Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmIconUI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmIconUI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URpmIconUI, URpmIconUI::StaticClass, TEXT("URpmIconUI"), &Z_Registration_Info_UClass_URpmIconUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URpmIconUI), 2518249996U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmIconUI_h_1589171535(TEXT("/Script/RpmAvatarCreator"),
		Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmIconUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmIconUI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
