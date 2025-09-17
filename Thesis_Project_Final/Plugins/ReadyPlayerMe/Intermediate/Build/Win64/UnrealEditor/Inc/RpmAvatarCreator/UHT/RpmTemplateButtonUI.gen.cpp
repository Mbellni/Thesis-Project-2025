// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RpmAvatarCreator/Public/UI/RpmTemplateButtonUI.h"
#include "RpmAvatarCreator/Public/RpmAvatarCreatorTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRpmTemplateButtonUI() {}
// Cross Module References
	RPMAVATARCREATOR_API UClass* Z_Construct_UClass_URpmIconUI();
	RPMAVATARCREATOR_API UClass* Z_Construct_UClass_URpmTemplateButtonUI();
	RPMAVATARCREATOR_API UClass* Z_Construct_UClass_URpmTemplateButtonUI_NoRegister();
	RPMAVATARCREATOR_API UFunction* Z_Construct_UDelegateFunction_RpmAvatarCreator_TemplateButtonSelected__DelegateSignature();
	RPMAVATARCREATOR_API UScriptStruct* Z_Construct_UScriptStruct_FRpmAvatarTemplate();
	UPackage* Z_Construct_UPackage__Script_RpmAvatarCreator();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_RpmAvatarCreator_TemplateButtonSelected__DelegateSignature_Statics
	{
		struct _Script_RpmAvatarCreator_eventTemplateButtonSelected_Parms
		{
			FRpmAvatarTemplate Template;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Template_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Template;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RpmAvatarCreator_TemplateButtonSelected__DelegateSignature_Statics::NewProp_Template_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_RpmAvatarCreator_TemplateButtonSelected__DelegateSignature_Statics::NewProp_Template = { "Template", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RpmAvatarCreator_eventTemplateButtonSelected_Parms, Template), Z_Construct_UScriptStruct_FRpmAvatarTemplate, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RpmAvatarCreator_TemplateButtonSelected__DelegateSignature_Statics::NewProp_Template_MetaData), Z_Construct_UDelegateFunction_RpmAvatarCreator_TemplateButtonSelected__DelegateSignature_Statics::NewProp_Template_MetaData) }; // 2342159353
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RpmAvatarCreator_TemplateButtonSelected__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RpmAvatarCreator_TemplateButtonSelected__DelegateSignature_Statics::NewProp_Template,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RpmAvatarCreator_TemplateButtonSelected__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/RpmTemplateButtonUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RpmAvatarCreator_TemplateButtonSelected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RpmAvatarCreator, nullptr, "TemplateButtonSelected__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RpmAvatarCreator_TemplateButtonSelected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RpmAvatarCreator_TemplateButtonSelected__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RpmAvatarCreator_TemplateButtonSelected__DelegateSignature_Statics::_Script_RpmAvatarCreator_eventTemplateButtonSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RpmAvatarCreator_TemplateButtonSelected__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RpmAvatarCreator_TemplateButtonSelected__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RpmAvatarCreator_TemplateButtonSelected__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_RpmAvatarCreator_TemplateButtonSelected__DelegateSignature_Statics::_Script_RpmAvatarCreator_eventTemplateButtonSelected_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_RpmAvatarCreator_TemplateButtonSelected__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RpmAvatarCreator_TemplateButtonSelected__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FTemplateButtonSelected_DelegateWrapper(const FMulticastScriptDelegate& TemplateButtonSelected, FRpmAvatarTemplate const& Template)
{
	struct _Script_RpmAvatarCreator_eventTemplateButtonSelected_Parms
	{
		FRpmAvatarTemplate Template;
	};
	_Script_RpmAvatarCreator_eventTemplateButtonSelected_Parms Parms;
	Parms.Template=Template;
	TemplateButtonSelected.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct RpmTemplateButtonUI_eventSetSelected_Parms
	{
		bool Selected;
	};
	static FName NAME_URpmTemplateButtonUI_SetSelected = FName(TEXT("SetSelected"));
	void URpmTemplateButtonUI::SetSelected(bool Selected)
	{
		RpmTemplateButtonUI_eventSetSelected_Parms Parms;
		Parms.Selected=Selected ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_URpmTemplateButtonUI_SetSelected),&Parms);
	}
	static FName NAME_URpmTemplateButtonUI_UpdateUI = FName(TEXT("UpdateUI"));
	void URpmTemplateButtonUI::UpdateUI()
	{
		ProcessEvent(FindFunctionChecked(NAME_URpmTemplateButtonUI_UpdateUI),NULL);
	}
	void URpmTemplateButtonUI::StaticRegisterNativesURpmTemplateButtonUI()
	{
	}
	struct Z_Construct_UFunction_URpmTemplateButtonUI_SetSelected_Statics
	{
		static void NewProp_Selected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Selected;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URpmTemplateButtonUI_SetSelected_Statics::NewProp_Selected_SetBit(void* Obj)
	{
		((RpmTemplateButtonUI_eventSetSelected_Parms*)Obj)->Selected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URpmTemplateButtonUI_SetSelected_Statics::NewProp_Selected = { "Selected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RpmTemplateButtonUI_eventSetSelected_Parms), &Z_Construct_UFunction_URpmTemplateButtonUI_SetSelected_Statics::NewProp_Selected_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmTemplateButtonUI_SetSelected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmTemplateButtonUI_SetSelected_Statics::NewProp_Selected,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmTemplateButtonUI_SetSelected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Set Selected" },
		{ "ModuleRelativePath", "Public/UI/RpmTemplateButtonUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmTemplateButtonUI_SetSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmTemplateButtonUI, nullptr, "SetSelected", nullptr, nullptr, Z_Construct_UFunction_URpmTemplateButtonUI_SetSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmTemplateButtonUI_SetSelected_Statics::PropPointers), sizeof(RpmTemplateButtonUI_eventSetSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmTemplateButtonUI_SetSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_URpmTemplateButtonUI_SetSelected_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmTemplateButtonUI_SetSelected_Statics::PropPointers) < 2048);
	static_assert(sizeof(RpmTemplateButtonUI_eventSetSelected_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URpmTemplateButtonUI_SetSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmTemplateButtonUI_SetSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URpmTemplateButtonUI_UpdateUI_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmTemplateButtonUI_UpdateUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Update UI" },
		{ "ModuleRelativePath", "Public/UI/RpmTemplateButtonUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmTemplateButtonUI_UpdateUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmTemplateButtonUI, nullptr, "UpdateUI", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmTemplateButtonUI_UpdateUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_URpmTemplateButtonUI_UpdateUI_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_URpmTemplateButtonUI_UpdateUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmTemplateButtonUI_UpdateUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URpmTemplateButtonUI);
	UClass* Z_Construct_UClass_URpmTemplateButtonUI_NoRegister()
	{
		return URpmTemplateButtonUI::StaticClass();
	}
	struct Z_Construct_UClass_URpmTemplateButtonUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateButtonSelected_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_TemplateButtonSelected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Template_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Template;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URpmTemplateButtonUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URpmIconUI,
		(UObject* (*)())Z_Construct_UPackage__Script_RpmAvatarCreator,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URpmTemplateButtonUI_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_URpmTemplateButtonUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URpmTemplateButtonUI_SetSelected, "SetSelected" }, // 1843071660
		{ &Z_Construct_UFunction_URpmTemplateButtonUI_UpdateUI, "UpdateUI" }, // 4191065167
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URpmTemplateButtonUI_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URpmTemplateButtonUI_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/RpmTemplateButtonUI.h" },
		{ "ModuleRelativePath", "Public/UI/RpmTemplateButtonUI.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URpmTemplateButtonUI_Statics::NewProp_TemplateButtonSelected_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/UI/RpmTemplateButtonUI.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URpmTemplateButtonUI_Statics::NewProp_TemplateButtonSelected = { "TemplateButtonSelected", nullptr, (EPropertyFlags)0x0010100000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URpmTemplateButtonUI, TemplateButtonSelected), Z_Construct_UDelegateFunction_RpmAvatarCreator_TemplateButtonSelected__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URpmTemplateButtonUI_Statics::NewProp_TemplateButtonSelected_MetaData), Z_Construct_UClass_URpmTemplateButtonUI_Statics::NewProp_TemplateButtonSelected_MetaData) }; // 3765665216
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URpmTemplateButtonUI_Statics::NewProp_Template_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/UI/RpmTemplateButtonUI.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URpmTemplateButtonUI_Statics::NewProp_Template = { "Template", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URpmTemplateButtonUI, Template), Z_Construct_UScriptStruct_FRpmAvatarTemplate, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URpmTemplateButtonUI_Statics::NewProp_Template_MetaData), Z_Construct_UClass_URpmTemplateButtonUI_Statics::NewProp_Template_MetaData) }; // 2342159353
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URpmTemplateButtonUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmTemplateButtonUI_Statics::NewProp_TemplateButtonSelected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmTemplateButtonUI_Statics::NewProp_Template,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URpmTemplateButtonUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URpmTemplateButtonUI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URpmTemplateButtonUI_Statics::ClassParams = {
		&URpmTemplateButtonUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URpmTemplateButtonUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URpmTemplateButtonUI_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URpmTemplateButtonUI_Statics::Class_MetaDataParams), Z_Construct_UClass_URpmTemplateButtonUI_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URpmTemplateButtonUI_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_URpmTemplateButtonUI()
	{
		if (!Z_Registration_Info_UClass_URpmTemplateButtonUI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URpmTemplateButtonUI.OuterSingleton, Z_Construct_UClass_URpmTemplateButtonUI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URpmTemplateButtonUI.OuterSingleton;
	}
	template<> RPMAVATARCREATOR_API UClass* StaticClass<URpmTemplateButtonUI>()
	{
		return URpmTemplateButtonUI::StaticClass();
	}
	URpmTemplateButtonUI::URpmTemplateButtonUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URpmTemplateButtonUI);
	URpmTemplateButtonUI::~URpmTemplateButtonUI() {}
	struct Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmTemplateButtonUI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmTemplateButtonUI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URpmTemplateButtonUI, URpmTemplateButtonUI::StaticClass, TEXT("URpmTemplateButtonUI"), &Z_Registration_Info_UClass_URpmTemplateButtonUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URpmTemplateButtonUI), 574914970U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmTemplateButtonUI_h_292378305(TEXT("/Script/RpmAvatarCreator"),
		Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmTemplateButtonUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmTemplateButtonUI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
