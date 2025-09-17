// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RpmAvatarCreator/Public/UI/RpmColorButtonUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRpmColorButtonUI() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	RPMAVATARCREATOR_API UClass* Z_Construct_UClass_URpmColorButtonUI();
	RPMAVATARCREATOR_API UClass* Z_Construct_UClass_URpmColorButtonUI_NoRegister();
	RPMAVATARCREATOR_API UEnum* Z_Construct_UEnum_RpmAvatarCreator_ERpmPartnerAssetColor();
	RPMAVATARCREATOR_API UFunction* Z_Construct_UDelegateFunction_RpmAvatarCreator_ColorButtonSelected__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_RpmAvatarCreator();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_RpmAvatarCreator_ColorButtonSelected__DelegateSignature_Statics
	{
		struct _Script_RpmAvatarCreator_eventColorButtonSelected_Parms
		{
			ERpmPartnerAssetColor AssetColor;
			int32 ColorIndex;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AssetColor_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AssetColor;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ColorIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_RpmAvatarCreator_ColorButtonSelected__DelegateSignature_Statics::NewProp_AssetColor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_RpmAvatarCreator_ColorButtonSelected__DelegateSignature_Statics::NewProp_AssetColor = { "AssetColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RpmAvatarCreator_eventColorButtonSelected_Parms, AssetColor), Z_Construct_UEnum_RpmAvatarCreator_ERpmPartnerAssetColor, METADATA_PARAMS(0, nullptr) }; // 2061967593
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_RpmAvatarCreator_ColorButtonSelected__DelegateSignature_Statics::NewProp_ColorIndex = { "ColorIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RpmAvatarCreator_eventColorButtonSelected_Parms, ColorIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RpmAvatarCreator_ColorButtonSelected__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RpmAvatarCreator_ColorButtonSelected__DelegateSignature_Statics::NewProp_AssetColor_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RpmAvatarCreator_ColorButtonSelected__DelegateSignature_Statics::NewProp_AssetColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RpmAvatarCreator_ColorButtonSelected__DelegateSignature_Statics::NewProp_ColorIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RpmAvatarCreator_ColorButtonSelected__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/RpmColorButtonUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RpmAvatarCreator_ColorButtonSelected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RpmAvatarCreator, nullptr, "ColorButtonSelected__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RpmAvatarCreator_ColorButtonSelected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RpmAvatarCreator_ColorButtonSelected__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RpmAvatarCreator_ColorButtonSelected__DelegateSignature_Statics::_Script_RpmAvatarCreator_eventColorButtonSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RpmAvatarCreator_ColorButtonSelected__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RpmAvatarCreator_ColorButtonSelected__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RpmAvatarCreator_ColorButtonSelected__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_RpmAvatarCreator_ColorButtonSelected__DelegateSignature_Statics::_Script_RpmAvatarCreator_eventColorButtonSelected_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_RpmAvatarCreator_ColorButtonSelected__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RpmAvatarCreator_ColorButtonSelected__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FColorButtonSelected_DelegateWrapper(const FMulticastScriptDelegate& ColorButtonSelected, ERpmPartnerAssetColor AssetColor, int32 ColorIndex)
{
	struct _Script_RpmAvatarCreator_eventColorButtonSelected_Parms
	{
		ERpmPartnerAssetColor AssetColor;
		int32 ColorIndex;
	};
	_Script_RpmAvatarCreator_eventColorButtonSelected_Parms Parms;
	Parms.AssetColor=AssetColor;
	Parms.ColorIndex=ColorIndex;
	ColorButtonSelected.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct RpmColorButtonUI_eventSetSelected_Parms
	{
		bool IsSelected;
	};
	static FName NAME_URpmColorButtonUI_SetSelected = FName(TEXT("SetSelected"));
	void URpmColorButtonUI::SetSelected(bool IsSelected)
	{
		RpmColorButtonUI_eventSetSelected_Parms Parms;
		Parms.IsSelected=IsSelected ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_URpmColorButtonUI_SetSelected),&Parms);
	}
	static FName NAME_URpmColorButtonUI_UpdateUI = FName(TEXT("UpdateUI"));
	void URpmColorButtonUI::UpdateUI()
	{
		ProcessEvent(FindFunctionChecked(NAME_URpmColorButtonUI_UpdateUI),NULL);
	}
	void URpmColorButtonUI::StaticRegisterNativesURpmColorButtonUI()
	{
	}
	struct Z_Construct_UFunction_URpmColorButtonUI_SetSelected_Statics
	{
		static void NewProp_IsSelected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSelected;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URpmColorButtonUI_SetSelected_Statics::NewProp_IsSelected_SetBit(void* Obj)
	{
		((RpmColorButtonUI_eventSetSelected_Parms*)Obj)->IsSelected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URpmColorButtonUI_SetSelected_Statics::NewProp_IsSelected = { "IsSelected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RpmColorButtonUI_eventSetSelected_Parms), &Z_Construct_UFunction_URpmColorButtonUI_SetSelected_Statics::NewProp_IsSelected_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmColorButtonUI_SetSelected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmColorButtonUI_SetSelected_Statics::NewProp_IsSelected,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmColorButtonUI_SetSelected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Set Selected" },
		{ "ModuleRelativePath", "Public/UI/RpmColorButtonUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmColorButtonUI_SetSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmColorButtonUI, nullptr, "SetSelected", nullptr, nullptr, Z_Construct_UFunction_URpmColorButtonUI_SetSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmColorButtonUI_SetSelected_Statics::PropPointers), sizeof(RpmColorButtonUI_eventSetSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmColorButtonUI_SetSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_URpmColorButtonUI_SetSelected_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmColorButtonUI_SetSelected_Statics::PropPointers) < 2048);
	static_assert(sizeof(RpmColorButtonUI_eventSetSelected_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URpmColorButtonUI_SetSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmColorButtonUI_SetSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URpmColorButtonUI_UpdateUI_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmColorButtonUI_UpdateUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Update UI" },
		{ "ModuleRelativePath", "Public/UI/RpmColorButtonUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmColorButtonUI_UpdateUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmColorButtonUI, nullptr, "UpdateUI", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmColorButtonUI_UpdateUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_URpmColorButtonUI_UpdateUI_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_URpmColorButtonUI_UpdateUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmColorButtonUI_UpdateUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URpmColorButtonUI);
	UClass* Z_Construct_UClass_URpmColorButtonUI_NoRegister()
	{
		return URpmColorButtonUI::StaticClass();
	}
	struct Z_Construct_UClass_URpmColorButtonUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorButtonSelected_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ColorButtonSelected;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AssetColor_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetColor_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AssetColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ColorIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RgbColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RgbColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URpmColorButtonUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_RpmAvatarCreator,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URpmColorButtonUI_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_URpmColorButtonUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URpmColorButtonUI_SetSelected, "SetSelected" }, // 3102608347
		{ &Z_Construct_UFunction_URpmColorButtonUI_UpdateUI, "UpdateUI" }, // 4014061850
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URpmColorButtonUI_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URpmColorButtonUI_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/RpmColorButtonUI.h" },
		{ "ModuleRelativePath", "Public/UI/RpmColorButtonUI.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URpmColorButtonUI_Statics::NewProp_ColorButtonSelected_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/UI/RpmColorButtonUI.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URpmColorButtonUI_Statics::NewProp_ColorButtonSelected = { "ColorButtonSelected", nullptr, (EPropertyFlags)0x0010100000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URpmColorButtonUI, ColorButtonSelected), Z_Construct_UDelegateFunction_RpmAvatarCreator_ColorButtonSelected__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URpmColorButtonUI_Statics::NewProp_ColorButtonSelected_MetaData), Z_Construct_UClass_URpmColorButtonUI_Statics::NewProp_ColorButtonSelected_MetaData) }; // 1758159383
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URpmColorButtonUI_Statics::NewProp_AssetColor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URpmColorButtonUI_Statics::NewProp_AssetColor_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/UI/RpmColorButtonUI.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URpmColorButtonUI_Statics::NewProp_AssetColor = { "AssetColor", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URpmColorButtonUI, AssetColor), Z_Construct_UEnum_RpmAvatarCreator_ERpmPartnerAssetColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URpmColorButtonUI_Statics::NewProp_AssetColor_MetaData), Z_Construct_UClass_URpmColorButtonUI_Statics::NewProp_AssetColor_MetaData) }; // 2061967593
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URpmColorButtonUI_Statics::NewProp_ColorIndex_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/UI/RpmColorButtonUI.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URpmColorButtonUI_Statics::NewProp_ColorIndex = { "ColorIndex", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URpmColorButtonUI, ColorIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URpmColorButtonUI_Statics::NewProp_ColorIndex_MetaData), Z_Construct_UClass_URpmColorButtonUI_Statics::NewProp_ColorIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URpmColorButtonUI_Statics::NewProp_RgbColor_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/UI/RpmColorButtonUI.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URpmColorButtonUI_Statics::NewProp_RgbColor = { "RgbColor", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URpmColorButtonUI, RgbColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URpmColorButtonUI_Statics::NewProp_RgbColor_MetaData), Z_Construct_UClass_URpmColorButtonUI_Statics::NewProp_RgbColor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URpmColorButtonUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmColorButtonUI_Statics::NewProp_ColorButtonSelected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmColorButtonUI_Statics::NewProp_AssetColor_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmColorButtonUI_Statics::NewProp_AssetColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmColorButtonUI_Statics::NewProp_ColorIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmColorButtonUI_Statics::NewProp_RgbColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URpmColorButtonUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URpmColorButtonUI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URpmColorButtonUI_Statics::ClassParams = {
		&URpmColorButtonUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URpmColorButtonUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URpmColorButtonUI_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URpmColorButtonUI_Statics::Class_MetaDataParams), Z_Construct_UClass_URpmColorButtonUI_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URpmColorButtonUI_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_URpmColorButtonUI()
	{
		if (!Z_Registration_Info_UClass_URpmColorButtonUI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URpmColorButtonUI.OuterSingleton, Z_Construct_UClass_URpmColorButtonUI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URpmColorButtonUI.OuterSingleton;
	}
	template<> RPMAVATARCREATOR_API UClass* StaticClass<URpmColorButtonUI>()
	{
		return URpmColorButtonUI::StaticClass();
	}
	URpmColorButtonUI::URpmColorButtonUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URpmColorButtonUI);
	URpmColorButtonUI::~URpmColorButtonUI() {}
	struct Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmColorButtonUI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmColorButtonUI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URpmColorButtonUI, URpmColorButtonUI::StaticClass, TEXT("URpmColorButtonUI"), &Z_Registration_Info_UClass_URpmColorButtonUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URpmColorButtonUI), 2542181292U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmColorButtonUI_h_1631847823(TEXT("/Script/RpmAvatarCreator"),
		Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmColorButtonUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmColorButtonUI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
