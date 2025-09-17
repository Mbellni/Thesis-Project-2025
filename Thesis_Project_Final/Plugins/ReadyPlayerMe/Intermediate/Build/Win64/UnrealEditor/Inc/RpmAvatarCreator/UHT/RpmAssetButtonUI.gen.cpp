// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RpmAvatarCreator/Public/UI/RpmAssetButtonUI.h"
#include "RpmAvatarCreator/Public/RpmAvatarCreatorTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRpmAssetButtonUI() {}
// Cross Module References
	RPMAVATARCREATOR_API UClass* Z_Construct_UClass_URpmAssetButtonUI();
	RPMAVATARCREATOR_API UClass* Z_Construct_UClass_URpmAssetButtonUI_NoRegister();
	RPMAVATARCREATOR_API UClass* Z_Construct_UClass_URpmIconUI();
	RPMAVATARCREATOR_API UFunction* Z_Construct_UDelegateFunction_RpmAvatarCreator_AssetButtonSelected__DelegateSignature();
	RPMAVATARCREATOR_API UScriptStruct* Z_Construct_UScriptStruct_FRpmPartnerAsset();
	UPackage* Z_Construct_UPackage__Script_RpmAvatarCreator();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_RpmAvatarCreator_AssetButtonSelected__DelegateSignature_Statics
	{
		struct _Script_RpmAvatarCreator_eventAssetButtonSelected_Parms
		{
			FRpmPartnerAsset Asset;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Asset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RpmAvatarCreator_AssetButtonSelected__DelegateSignature_Statics::NewProp_Asset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_RpmAvatarCreator_AssetButtonSelected__DelegateSignature_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RpmAvatarCreator_eventAssetButtonSelected_Parms, Asset), Z_Construct_UScriptStruct_FRpmPartnerAsset, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RpmAvatarCreator_AssetButtonSelected__DelegateSignature_Statics::NewProp_Asset_MetaData), Z_Construct_UDelegateFunction_RpmAvatarCreator_AssetButtonSelected__DelegateSignature_Statics::NewProp_Asset_MetaData) }; // 1838537580
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RpmAvatarCreator_AssetButtonSelected__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RpmAvatarCreator_AssetButtonSelected__DelegateSignature_Statics::NewProp_Asset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RpmAvatarCreator_AssetButtonSelected__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/RpmAssetButtonUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RpmAvatarCreator_AssetButtonSelected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RpmAvatarCreator, nullptr, "AssetButtonSelected__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RpmAvatarCreator_AssetButtonSelected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RpmAvatarCreator_AssetButtonSelected__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RpmAvatarCreator_AssetButtonSelected__DelegateSignature_Statics::_Script_RpmAvatarCreator_eventAssetButtonSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RpmAvatarCreator_AssetButtonSelected__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RpmAvatarCreator_AssetButtonSelected__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RpmAvatarCreator_AssetButtonSelected__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_RpmAvatarCreator_AssetButtonSelected__DelegateSignature_Statics::_Script_RpmAvatarCreator_eventAssetButtonSelected_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_RpmAvatarCreator_AssetButtonSelected__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RpmAvatarCreator_AssetButtonSelected__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAssetButtonSelected_DelegateWrapper(const FMulticastScriptDelegate& AssetButtonSelected, FRpmPartnerAsset const& Asset)
{
	struct _Script_RpmAvatarCreator_eventAssetButtonSelected_Parms
	{
		FRpmPartnerAsset Asset;
	};
	_Script_RpmAvatarCreator_eventAssetButtonSelected_Parms Parms;
	Parms.Asset=Asset;
	AssetButtonSelected.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct RpmAssetButtonUI_eventSetSelected_Parms
	{
		bool Selected;
	};
	static FName NAME_URpmAssetButtonUI_SetSelected = FName(TEXT("SetSelected"));
	void URpmAssetButtonUI::SetSelected(bool Selected)
	{
		RpmAssetButtonUI_eventSetSelected_Parms Parms;
		Parms.Selected=Selected ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_URpmAssetButtonUI_SetSelected),&Parms);
	}
	static FName NAME_URpmAssetButtonUI_UpdateUI = FName(TEXT("UpdateUI"));
	void URpmAssetButtonUI::UpdateUI()
	{
		ProcessEvent(FindFunctionChecked(NAME_URpmAssetButtonUI_UpdateUI),NULL);
	}
	void URpmAssetButtonUI::StaticRegisterNativesURpmAssetButtonUI()
	{
	}
	struct Z_Construct_UFunction_URpmAssetButtonUI_SetSelected_Statics
	{
		static void NewProp_Selected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Selected;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URpmAssetButtonUI_SetSelected_Statics::NewProp_Selected_SetBit(void* Obj)
	{
		((RpmAssetButtonUI_eventSetSelected_Parms*)Obj)->Selected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URpmAssetButtonUI_SetSelected_Statics::NewProp_Selected = { "Selected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RpmAssetButtonUI_eventSetSelected_Parms), &Z_Construct_UFunction_URpmAssetButtonUI_SetSelected_Statics::NewProp_Selected_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAssetButtonUI_SetSelected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAssetButtonUI_SetSelected_Statics::NewProp_Selected,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAssetButtonUI_SetSelected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Set Selected" },
		{ "ModuleRelativePath", "Public/UI/RpmAssetButtonUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAssetButtonUI_SetSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAssetButtonUI, nullptr, "SetSelected", nullptr, nullptr, Z_Construct_UFunction_URpmAssetButtonUI_SetSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAssetButtonUI_SetSelected_Statics::PropPointers), sizeof(RpmAssetButtonUI_eventSetSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAssetButtonUI_SetSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_URpmAssetButtonUI_SetSelected_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAssetButtonUI_SetSelected_Statics::PropPointers) < 2048);
	static_assert(sizeof(RpmAssetButtonUI_eventSetSelected_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URpmAssetButtonUI_SetSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAssetButtonUI_SetSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URpmAssetButtonUI_UpdateUI_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAssetButtonUI_UpdateUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Update UI" },
		{ "ModuleRelativePath", "Public/UI/RpmAssetButtonUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAssetButtonUI_UpdateUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAssetButtonUI, nullptr, "UpdateUI", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAssetButtonUI_UpdateUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_URpmAssetButtonUI_UpdateUI_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_URpmAssetButtonUI_UpdateUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAssetButtonUI_UpdateUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URpmAssetButtonUI);
	UClass* Z_Construct_UClass_URpmAssetButtonUI_NoRegister()
	{
		return URpmAssetButtonUI::StaticClass();
	}
	struct Z_Construct_UClass_URpmAssetButtonUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetButtonSelected_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AssetButtonSelected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Asset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSelected_MetaData[];
#endif
		static void NewProp_bIsSelected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSelected;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URpmAssetButtonUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URpmIconUI,
		(UObject* (*)())Z_Construct_UPackage__Script_RpmAvatarCreator,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URpmAssetButtonUI_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_URpmAssetButtonUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URpmAssetButtonUI_SetSelected, "SetSelected" }, // 2241355151
		{ &Z_Construct_UFunction_URpmAssetButtonUI_UpdateUI, "UpdateUI" }, // 1577875570
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URpmAssetButtonUI_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URpmAssetButtonUI_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/RpmAssetButtonUI.h" },
		{ "ModuleRelativePath", "Public/UI/RpmAssetButtonUI.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URpmAssetButtonUI_Statics::NewProp_AssetButtonSelected_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/UI/RpmAssetButtonUI.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URpmAssetButtonUI_Statics::NewProp_AssetButtonSelected = { "AssetButtonSelected", nullptr, (EPropertyFlags)0x0010100000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URpmAssetButtonUI, AssetButtonSelected), Z_Construct_UDelegateFunction_RpmAvatarCreator_AssetButtonSelected__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URpmAssetButtonUI_Statics::NewProp_AssetButtonSelected_MetaData), Z_Construct_UClass_URpmAssetButtonUI_Statics::NewProp_AssetButtonSelected_MetaData) }; // 2982420454
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URpmAssetButtonUI_Statics::NewProp_Asset_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/UI/RpmAssetButtonUI.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URpmAssetButtonUI_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URpmAssetButtonUI, Asset), Z_Construct_UScriptStruct_FRpmPartnerAsset, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URpmAssetButtonUI_Statics::NewProp_Asset_MetaData), Z_Construct_UClass_URpmAssetButtonUI_Statics::NewProp_Asset_MetaData) }; // 1838537580
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URpmAssetButtonUI_Statics::NewProp_bIsSelected_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/UI/RpmAssetButtonUI.h" },
	};
#endif
	void Z_Construct_UClass_URpmAssetButtonUI_Statics::NewProp_bIsSelected_SetBit(void* Obj)
	{
		((URpmAssetButtonUI*)Obj)->bIsSelected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URpmAssetButtonUI_Statics::NewProp_bIsSelected = { "bIsSelected", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URpmAssetButtonUI), &Z_Construct_UClass_URpmAssetButtonUI_Statics::NewProp_bIsSelected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URpmAssetButtonUI_Statics::NewProp_bIsSelected_MetaData), Z_Construct_UClass_URpmAssetButtonUI_Statics::NewProp_bIsSelected_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URpmAssetButtonUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAssetButtonUI_Statics::NewProp_AssetButtonSelected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAssetButtonUI_Statics::NewProp_Asset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAssetButtonUI_Statics::NewProp_bIsSelected,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URpmAssetButtonUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URpmAssetButtonUI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URpmAssetButtonUI_Statics::ClassParams = {
		&URpmAssetButtonUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URpmAssetButtonUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URpmAssetButtonUI_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URpmAssetButtonUI_Statics::Class_MetaDataParams), Z_Construct_UClass_URpmAssetButtonUI_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URpmAssetButtonUI_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_URpmAssetButtonUI()
	{
		if (!Z_Registration_Info_UClass_URpmAssetButtonUI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URpmAssetButtonUI.OuterSingleton, Z_Construct_UClass_URpmAssetButtonUI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URpmAssetButtonUI.OuterSingleton;
	}
	template<> RPMAVATARCREATOR_API UClass* StaticClass<URpmAssetButtonUI>()
	{
		return URpmAssetButtonUI::StaticClass();
	}
	URpmAssetButtonUI::URpmAssetButtonUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URpmAssetButtonUI);
	URpmAssetButtonUI::~URpmAssetButtonUI() {}
	struct Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAssetButtonUI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAssetButtonUI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URpmAssetButtonUI, URpmAssetButtonUI::StaticClass, TEXT("URpmAssetButtonUI"), &Z_Registration_Info_UClass_URpmAssetButtonUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URpmAssetButtonUI), 3129964862U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAssetButtonUI_h_1145250864(TEXT("/Script/RpmAvatarCreator"),
		Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAssetButtonUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAssetButtonUI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
