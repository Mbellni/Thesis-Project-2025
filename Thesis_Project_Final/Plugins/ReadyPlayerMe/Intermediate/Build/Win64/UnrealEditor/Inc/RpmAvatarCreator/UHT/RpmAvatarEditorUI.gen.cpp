// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RpmAvatarCreator/Public/UI/RpmAvatarEditorUI.h"
#include "RpmAvatarCreator/Public/RpmAvatarCreatorTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRpmAvatarEditorUI() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	RPMAVATARCREATOR_API UClass* Z_Construct_UClass_URpmAssetButtonUI_NoRegister();
	RPMAVATARCREATOR_API UClass* Z_Construct_UClass_URpmAvatarCreatorApi_NoRegister();
	RPMAVATARCREATOR_API UClass* Z_Construct_UClass_URpmAvatarEditorUI();
	RPMAVATARCREATOR_API UClass* Z_Construct_UClass_URpmAvatarEditorUI_NoRegister();
	RPMAVATARCREATOR_API UClass* Z_Construct_UClass_URpmColorButtonUI_NoRegister();
	RPMAVATARCREATOR_API UClass* Z_Construct_UClass_URpmIconUI_NoRegister();
	RPMAVATARCREATOR_API UClass* Z_Construct_UClass_URpmTemplateButtonUI_NoRegister();
	RPMAVATARCREATOR_API UEnum* Z_Construct_UEnum_RpmAvatarCreator_ERpmPartnerAssetColor();
	RPMAVATARCREATOR_API UEnum* Z_Construct_UEnum_RpmAvatarCreator_ERpmPartnerAssetType();
	RPMAVATARCREATOR_API UFunction* Z_Construct_UDelegateFunction_RpmAvatarCreator_ImageDownloadCompleted__DelegateSignature();
	RPMAVATARCREATOR_API UFunction* Z_Construct_UDelegateFunction_RpmAvatarCreator_UpdateLockedAssetsCompleted__DelegateSignature();
	RPMAVATARCREATOR_API UScriptStruct* Z_Construct_UScriptStruct_FRpmAvatarTemplate();
	RPMAVATARCREATOR_API UScriptStruct* Z_Construct_UScriptStruct_FRpmPartnerAsset();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UWrapBox_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RpmAvatarCreator();
// End Cross Module References
	DEFINE_FUNCTION(URpmAvatarEditorUI::execOnTemplateButtonClicked)
	{
		P_GET_STRUCT_REF(FRpmAvatarTemplate,Z_Param_Out_Template);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTemplateButtonClicked(Z_Param_Out_Template);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URpmAvatarEditorUI::execOnColorButtonClicked)
	{
		P_GET_ENUM(ERpmPartnerAssetColor,Z_Param_AssetColor);
		P_GET_PROPERTY(FIntProperty,Z_Param_ColorIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnColorButtonClicked(ERpmPartnerAssetColor(Z_Param_AssetColor),Z_Param_ColorIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URpmAvatarEditorUI::execOnAssetButtonClicked)
	{
		P_GET_STRUCT_REF(FRpmPartnerAsset,Z_Param_Out_Asset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAssetButtonClicked(Z_Param_Out_Asset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URpmAvatarEditorUI::execOnUpdateLockedAssetsCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUpdateLockedAssetsCompleted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URpmAvatarEditorUI::execOnBadgeIconDownloaded)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_Image);
		P_GET_PROPERTY(FStrProperty,Z_Param_Url);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBadgeIconDownloaded(Z_Param_Image,Z_Param_Url);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URpmAvatarEditorUI::execOnTemplateIconDownloaded)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_Image);
		P_GET_PROPERTY(FStrProperty,Z_Param_Url);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTemplateIconDownloaded(Z_Param_Image,Z_Param_Url);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URpmAvatarEditorUI::execOnAssetIconDownloaded)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_Image);
		P_GET_PROPERTY(FStrProperty,Z_Param_Url);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAssetIconDownloaded(Z_Param_Image,Z_Param_Url);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URpmAvatarEditorUI::execAreModularOutfitsDisabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AreModularOutfitsDisabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URpmAvatarEditorUI::execIsCustomizableAssetSelected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCustomizableAssetSelected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URpmAvatarEditorUI::execDownloadAssetIcons)
	{
		P_GET_OBJECT(UWrapBox,Z_Param_AssetContainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DownloadAssetIcons(Z_Param_AssetContainer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URpmAvatarEditorUI::execUpdateLockedAssets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateLockedAssets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URpmAvatarEditorUI::execDiscardAvatarDraft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DiscardAvatarDraft();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URpmAvatarEditorUI::execSetupAssets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupAssets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URpmAvatarEditorUI::execSetupTemplates)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupTemplates();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URpmAvatarEditorUI::execInit)
	{
		P_GET_OBJECT(URpmAvatarCreatorApi,Z_Param_Api);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init(Z_Param_Api);
		P_NATIVE_END;
	}
	struct RpmAvatarEditorUI_eventAssetSelected_Parms
	{
		FRpmPartnerAsset Asset;
	};
	struct RpmAvatarEditorUI_eventPreviewDownloaded_Parms
	{
		const USkeletalMesh* SkeletalMesh;
	};
	struct RpmAvatarEditorUI_eventTemplateSelected_Parms
	{
		FRpmAvatarTemplate Template;
	};
	static FName NAME_URpmAvatarEditorUI_AssetSelected = FName(TEXT("AssetSelected"));
	void URpmAvatarEditorUI::AssetSelected(FRpmPartnerAsset const& Asset)
	{
		RpmAvatarEditorUI_eventAssetSelected_Parms Parms;
		Parms.Asset=Asset;
		ProcessEvent(FindFunctionChecked(NAME_URpmAvatarEditorUI_AssetSelected),&Parms);
	}
	static FName NAME_URpmAvatarEditorUI_AssetUnlocked = FName(TEXT("AssetUnlocked"));
	void URpmAvatarEditorUI::AssetUnlocked()
	{
		ProcessEvent(FindFunctionChecked(NAME_URpmAvatarEditorUI_AssetUnlocked),NULL);
	}
	static FName NAME_URpmAvatarEditorUI_ColorSelected = FName(TEXT("ColorSelected"));
	void URpmAvatarEditorUI::ColorSelected()
	{
		ProcessEvent(FindFunctionChecked(NAME_URpmAvatarEditorUI_ColorSelected),NULL);
	}
	static FName NAME_URpmAvatarEditorUI_PreviewDownloaded = FName(TEXT("PreviewDownloaded"));
	void URpmAvatarEditorUI::PreviewDownloaded(const USkeletalMesh* SkeletalMesh)
	{
		RpmAvatarEditorUI_eventPreviewDownloaded_Parms Parms;
		Parms.SkeletalMesh=SkeletalMesh;
		ProcessEvent(FindFunctionChecked(NAME_URpmAvatarEditorUI_PreviewDownloaded),&Parms);
	}
	static FName NAME_URpmAvatarEditorUI_TemplateSelected = FName(TEXT("TemplateSelected"));
	void URpmAvatarEditorUI::TemplateSelected(FRpmAvatarTemplate const& Template)
	{
		RpmAvatarEditorUI_eventTemplateSelected_Parms Parms;
		Parms.Template=Template;
		ProcessEvent(FindFunctionChecked(NAME_URpmAvatarEditorUI_TemplateSelected),&Parms);
	}
	void URpmAvatarEditorUI::StaticRegisterNativesURpmAvatarEditorUI()
	{
		UClass* Class = URpmAvatarEditorUI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AreModularOutfitsDisabled", &URpmAvatarEditorUI::execAreModularOutfitsDisabled },
			{ "DiscardAvatarDraft", &URpmAvatarEditorUI::execDiscardAvatarDraft },
			{ "DownloadAssetIcons", &URpmAvatarEditorUI::execDownloadAssetIcons },
			{ "Init", &URpmAvatarEditorUI::execInit },
			{ "IsCustomizableAssetSelected", &URpmAvatarEditorUI::execIsCustomizableAssetSelected },
			{ "OnAssetButtonClicked", &URpmAvatarEditorUI::execOnAssetButtonClicked },
			{ "OnAssetIconDownloaded", &URpmAvatarEditorUI::execOnAssetIconDownloaded },
			{ "OnBadgeIconDownloaded", &URpmAvatarEditorUI::execOnBadgeIconDownloaded },
			{ "OnColorButtonClicked", &URpmAvatarEditorUI::execOnColorButtonClicked },
			{ "OnTemplateButtonClicked", &URpmAvatarEditorUI::execOnTemplateButtonClicked },
			{ "OnTemplateIconDownloaded", &URpmAvatarEditorUI::execOnTemplateIconDownloaded },
			{ "OnUpdateLockedAssetsCompleted", &URpmAvatarEditorUI::execOnUpdateLockedAssetsCompleted },
			{ "SetupAssets", &URpmAvatarEditorUI::execSetupAssets },
			{ "SetupTemplates", &URpmAvatarEditorUI::execSetupTemplates },
			{ "UpdateLockedAssets", &URpmAvatarEditorUI::execUpdateLockedAssets },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URpmAvatarEditorUI_AreModularOutfitsDisabled_Statics
	{
		struct RpmAvatarEditorUI_eventAreModularOutfitsDisabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URpmAvatarEditorUI_AreModularOutfitsDisabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RpmAvatarEditorUI_eventAreModularOutfitsDisabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URpmAvatarEditorUI_AreModularOutfitsDisabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RpmAvatarEditorUI_eventAreModularOutfitsDisabled_Parms), &Z_Construct_UFunction_URpmAvatarEditorUI_AreModularOutfitsDisabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarEditorUI_AreModularOutfitsDisabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarEditorUI_AreModularOutfitsDisabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarEditorUI_AreModularOutfitsDisabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Are Modular Outfits Disabled" },
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarEditorUI_AreModularOutfitsDisabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarEditorUI, nullptr, "AreModularOutfitsDisabled", nullptr, nullptr, Z_Construct_UFunction_URpmAvatarEditorUI_AreModularOutfitsDisabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_AreModularOutfitsDisabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_URpmAvatarEditorUI_AreModularOutfitsDisabled_Statics::RpmAvatarEditorUI_eventAreModularOutfitsDisabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_AreModularOutfitsDisabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_URpmAvatarEditorUI_AreModularOutfitsDisabled_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_AreModularOutfitsDisabled_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URpmAvatarEditorUI_AreModularOutfitsDisabled_Statics::RpmAvatarEditorUI_eventAreModularOutfitsDisabled_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URpmAvatarEditorUI_AreModularOutfitsDisabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarEditorUI_AreModularOutfitsDisabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URpmAvatarEditorUI_AssetSelected_Statics
	{
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarEditorUI_AssetSelected_Statics::NewProp_Asset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URpmAvatarEditorUI_AssetSelected_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RpmAvatarEditorUI_eventAssetSelected_Parms, Asset), Z_Construct_UScriptStruct_FRpmPartnerAsset, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_AssetSelected_Statics::NewProp_Asset_MetaData), Z_Construct_UFunction_URpmAvatarEditorUI_AssetSelected_Statics::NewProp_Asset_MetaData) }; // 1838537580
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarEditorUI_AssetSelected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarEditorUI_AssetSelected_Statics::NewProp_Asset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarEditorUI_AssetSelected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Asset Selected" },
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarEditorUI_AssetSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarEditorUI, nullptr, "AssetSelected", nullptr, nullptr, Z_Construct_UFunction_URpmAvatarEditorUI_AssetSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_AssetSelected_Statics::PropPointers), sizeof(RpmAvatarEditorUI_eventAssetSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_AssetSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_URpmAvatarEditorUI_AssetSelected_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_AssetSelected_Statics::PropPointers) < 2048);
	static_assert(sizeof(RpmAvatarEditorUI_eventAssetSelected_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URpmAvatarEditorUI_AssetSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarEditorUI_AssetSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URpmAvatarEditorUI_AssetUnlocked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarEditorUI_AssetUnlocked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Asset Unlocked" },
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarEditorUI_AssetUnlocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarEditorUI, nullptr, "AssetUnlocked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_AssetUnlocked_Statics::Function_MetaDataParams), Z_Construct_UFunction_URpmAvatarEditorUI_AssetUnlocked_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_URpmAvatarEditorUI_AssetUnlocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarEditorUI_AssetUnlocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URpmAvatarEditorUI_ColorSelected_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarEditorUI_ColorSelected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Color Selected" },
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarEditorUI_ColorSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarEditorUI, nullptr, "ColorSelected", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_ColorSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_URpmAvatarEditorUI_ColorSelected_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_URpmAvatarEditorUI_ColorSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarEditorUI_ColorSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URpmAvatarEditorUI_DiscardAvatarDraft_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarEditorUI_DiscardAvatarDraft_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Discard Avatar Draft" },
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarEditorUI_DiscardAvatarDraft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarEditorUI, nullptr, "DiscardAvatarDraft", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_DiscardAvatarDraft_Statics::Function_MetaDataParams), Z_Construct_UFunction_URpmAvatarEditorUI_DiscardAvatarDraft_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_URpmAvatarEditorUI_DiscardAvatarDraft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarEditorUI_DiscardAvatarDraft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URpmAvatarEditorUI_DownloadAssetIcons_Statics
	{
		struct RpmAvatarEditorUI_eventDownloadAssetIcons_Parms
		{
			const UWrapBox* AssetContainer;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetContainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetContainer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarEditorUI_DownloadAssetIcons_Statics::NewProp_AssetContainer_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URpmAvatarEditorUI_DownloadAssetIcons_Statics::NewProp_AssetContainer = { "AssetContainer", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RpmAvatarEditorUI_eventDownloadAssetIcons_Parms, AssetContainer), Z_Construct_UClass_UWrapBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_DownloadAssetIcons_Statics::NewProp_AssetContainer_MetaData), Z_Construct_UFunction_URpmAvatarEditorUI_DownloadAssetIcons_Statics::NewProp_AssetContainer_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarEditorUI_DownloadAssetIcons_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarEditorUI_DownloadAssetIcons_Statics::NewProp_AssetContainer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarEditorUI_DownloadAssetIcons_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "DownloadAssetIcons" },
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarEditorUI_DownloadAssetIcons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarEditorUI, nullptr, "DownloadAssetIcons", nullptr, nullptr, Z_Construct_UFunction_URpmAvatarEditorUI_DownloadAssetIcons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_DownloadAssetIcons_Statics::PropPointers), sizeof(Z_Construct_UFunction_URpmAvatarEditorUI_DownloadAssetIcons_Statics::RpmAvatarEditorUI_eventDownloadAssetIcons_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_DownloadAssetIcons_Statics::Function_MetaDataParams), Z_Construct_UFunction_URpmAvatarEditorUI_DownloadAssetIcons_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_DownloadAssetIcons_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URpmAvatarEditorUI_DownloadAssetIcons_Statics::RpmAvatarEditorUI_eventDownloadAssetIcons_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URpmAvatarEditorUI_DownloadAssetIcons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarEditorUI_DownloadAssetIcons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URpmAvatarEditorUI_Init_Statics
	{
		struct RpmAvatarEditorUI_eventInit_Parms
		{
			URpmAvatarCreatorApi* Api;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Api;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URpmAvatarEditorUI_Init_Statics::NewProp_Api = { "Api", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RpmAvatarEditorUI_eventInit_Parms, Api), Z_Construct_UClass_URpmAvatarCreatorApi_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarEditorUI_Init_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarEditorUI_Init_Statics::NewProp_Api,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarEditorUI_Init_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Init" },
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarEditorUI_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarEditorUI, nullptr, "Init", nullptr, nullptr, Z_Construct_UFunction_URpmAvatarEditorUI_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_Init_Statics::PropPointers), sizeof(Z_Construct_UFunction_URpmAvatarEditorUI_Init_Statics::RpmAvatarEditorUI_eventInit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_URpmAvatarEditorUI_Init_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_Init_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URpmAvatarEditorUI_Init_Statics::RpmAvatarEditorUI_eventInit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URpmAvatarEditorUI_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarEditorUI_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URpmAvatarEditorUI_IsCustomizableAssetSelected_Statics
	{
		struct RpmAvatarEditorUI_eventIsCustomizableAssetSelected_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URpmAvatarEditorUI_IsCustomizableAssetSelected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RpmAvatarEditorUI_eventIsCustomizableAssetSelected_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URpmAvatarEditorUI_IsCustomizableAssetSelected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RpmAvatarEditorUI_eventIsCustomizableAssetSelected_Parms), &Z_Construct_UFunction_URpmAvatarEditorUI_IsCustomizableAssetSelected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarEditorUI_IsCustomizableAssetSelected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarEditorUI_IsCustomizableAssetSelected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarEditorUI_IsCustomizableAssetSelected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Is Customizable Asset Selected" },
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarEditorUI_IsCustomizableAssetSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarEditorUI, nullptr, "IsCustomizableAssetSelected", nullptr, nullptr, Z_Construct_UFunction_URpmAvatarEditorUI_IsCustomizableAssetSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_IsCustomizableAssetSelected_Statics::PropPointers), sizeof(Z_Construct_UFunction_URpmAvatarEditorUI_IsCustomizableAssetSelected_Statics::RpmAvatarEditorUI_eventIsCustomizableAssetSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_IsCustomizableAssetSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_URpmAvatarEditorUI_IsCustomizableAssetSelected_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_IsCustomizableAssetSelected_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URpmAvatarEditorUI_IsCustomizableAssetSelected_Statics::RpmAvatarEditorUI_eventIsCustomizableAssetSelected_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URpmAvatarEditorUI_IsCustomizableAssetSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarEditorUI_IsCustomizableAssetSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetButtonClicked_Statics
	{
		struct RpmAvatarEditorUI_eventOnAssetButtonClicked_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetButtonClicked_Statics::NewProp_Asset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetButtonClicked_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RpmAvatarEditorUI_eventOnAssetButtonClicked_Parms, Asset), Z_Construct_UScriptStruct_FRpmPartnerAsset, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetButtonClicked_Statics::NewProp_Asset_MetaData), Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetButtonClicked_Statics::NewProp_Asset_MetaData) }; // 1838537580
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetButtonClicked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetButtonClicked_Statics::NewProp_Asset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarEditorUI, nullptr, "OnAssetButtonClicked", nullptr, nullptr, Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetButtonClicked_Statics::PropPointers), sizeof(Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetButtonClicked_Statics::RpmAvatarEditorUI_eventOnAssetButtonClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetButtonClicked_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetButtonClicked_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetButtonClicked_Statics::RpmAvatarEditorUI_eventOnAssetButtonClicked_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetIconDownloaded_Statics
	{
		struct RpmAvatarEditorUI_eventOnAssetIconDownloaded_Parms
		{
			UTexture2D* Image;
			FString Url;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Image;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetIconDownloaded_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RpmAvatarEditorUI_eventOnAssetIconDownloaded_Parms, Image), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetIconDownloaded_Statics::NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetIconDownloaded_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RpmAvatarEditorUI_eventOnAssetIconDownloaded_Parms, Url), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetIconDownloaded_Statics::NewProp_Url_MetaData), Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetIconDownloaded_Statics::NewProp_Url_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetIconDownloaded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetIconDownloaded_Statics::NewProp_Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetIconDownloaded_Statics::NewProp_Url,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetIconDownloaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetIconDownloaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarEditorUI, nullptr, "OnAssetIconDownloaded", nullptr, nullptr, Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetIconDownloaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetIconDownloaded_Statics::PropPointers), sizeof(Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetIconDownloaded_Statics::RpmAvatarEditorUI_eventOnAssetIconDownloaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetIconDownloaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetIconDownloaded_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetIconDownloaded_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetIconDownloaded_Statics::RpmAvatarEditorUI_eventOnAssetIconDownloaded_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetIconDownloaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetIconDownloaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URpmAvatarEditorUI_OnBadgeIconDownloaded_Statics
	{
		struct RpmAvatarEditorUI_eventOnBadgeIconDownloaded_Parms
		{
			UTexture2D* Image;
			FString Url;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Image;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URpmAvatarEditorUI_OnBadgeIconDownloaded_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RpmAvatarEditorUI_eventOnBadgeIconDownloaded_Parms, Image), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarEditorUI_OnBadgeIconDownloaded_Statics::NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URpmAvatarEditorUI_OnBadgeIconDownloaded_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RpmAvatarEditorUI_eventOnBadgeIconDownloaded_Parms, Url), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_OnBadgeIconDownloaded_Statics::NewProp_Url_MetaData), Z_Construct_UFunction_URpmAvatarEditorUI_OnBadgeIconDownloaded_Statics::NewProp_Url_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarEditorUI_OnBadgeIconDownloaded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarEditorUI_OnBadgeIconDownloaded_Statics::NewProp_Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarEditorUI_OnBadgeIconDownloaded_Statics::NewProp_Url,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarEditorUI_OnBadgeIconDownloaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarEditorUI_OnBadgeIconDownloaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarEditorUI, nullptr, "OnBadgeIconDownloaded", nullptr, nullptr, Z_Construct_UFunction_URpmAvatarEditorUI_OnBadgeIconDownloaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_OnBadgeIconDownloaded_Statics::PropPointers), sizeof(Z_Construct_UFunction_URpmAvatarEditorUI_OnBadgeIconDownloaded_Statics::RpmAvatarEditorUI_eventOnBadgeIconDownloaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_OnBadgeIconDownloaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_URpmAvatarEditorUI_OnBadgeIconDownloaded_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_OnBadgeIconDownloaded_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URpmAvatarEditorUI_OnBadgeIconDownloaded_Statics::RpmAvatarEditorUI_eventOnBadgeIconDownloaded_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URpmAvatarEditorUI_OnBadgeIconDownloaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarEditorUI_OnBadgeIconDownloaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URpmAvatarEditorUI_OnColorButtonClicked_Statics
	{
		struct RpmAvatarEditorUI_eventOnColorButtonClicked_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URpmAvatarEditorUI_OnColorButtonClicked_Statics::NewProp_AssetColor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URpmAvatarEditorUI_OnColorButtonClicked_Statics::NewProp_AssetColor = { "AssetColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RpmAvatarEditorUI_eventOnColorButtonClicked_Parms, AssetColor), Z_Construct_UEnum_RpmAvatarCreator_ERpmPartnerAssetColor, METADATA_PARAMS(0, nullptr) }; // 2061967593
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URpmAvatarEditorUI_OnColorButtonClicked_Statics::NewProp_ColorIndex = { "ColorIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RpmAvatarEditorUI_eventOnColorButtonClicked_Parms, ColorIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarEditorUI_OnColorButtonClicked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarEditorUI_OnColorButtonClicked_Statics::NewProp_AssetColor_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarEditorUI_OnColorButtonClicked_Statics::NewProp_AssetColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarEditorUI_OnColorButtonClicked_Statics::NewProp_ColorIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarEditorUI_OnColorButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarEditorUI_OnColorButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarEditorUI, nullptr, "OnColorButtonClicked", nullptr, nullptr, Z_Construct_UFunction_URpmAvatarEditorUI_OnColorButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_OnColorButtonClicked_Statics::PropPointers), sizeof(Z_Construct_UFunction_URpmAvatarEditorUI_OnColorButtonClicked_Statics::RpmAvatarEditorUI_eventOnColorButtonClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_OnColorButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_URpmAvatarEditorUI_OnColorButtonClicked_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_OnColorButtonClicked_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URpmAvatarEditorUI_OnColorButtonClicked_Statics::RpmAvatarEditorUI_eventOnColorButtonClicked_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URpmAvatarEditorUI_OnColorButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarEditorUI_OnColorButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateButtonClicked_Statics
	{
		struct RpmAvatarEditorUI_eventOnTemplateButtonClicked_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateButtonClicked_Statics::NewProp_Template_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateButtonClicked_Statics::NewProp_Template = { "Template", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RpmAvatarEditorUI_eventOnTemplateButtonClicked_Parms, Template), Z_Construct_UScriptStruct_FRpmAvatarTemplate, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateButtonClicked_Statics::NewProp_Template_MetaData), Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateButtonClicked_Statics::NewProp_Template_MetaData) }; // 2342159353
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateButtonClicked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateButtonClicked_Statics::NewProp_Template,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarEditorUI, nullptr, "OnTemplateButtonClicked", nullptr, nullptr, Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateButtonClicked_Statics::PropPointers), sizeof(Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateButtonClicked_Statics::RpmAvatarEditorUI_eventOnTemplateButtonClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateButtonClicked_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateButtonClicked_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateButtonClicked_Statics::RpmAvatarEditorUI_eventOnTemplateButtonClicked_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateIconDownloaded_Statics
	{
		struct RpmAvatarEditorUI_eventOnTemplateIconDownloaded_Parms
		{
			UTexture2D* Image;
			FString Url;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Image;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateIconDownloaded_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RpmAvatarEditorUI_eventOnTemplateIconDownloaded_Parms, Image), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateIconDownloaded_Statics::NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateIconDownloaded_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RpmAvatarEditorUI_eventOnTemplateIconDownloaded_Parms, Url), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateIconDownloaded_Statics::NewProp_Url_MetaData), Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateIconDownloaded_Statics::NewProp_Url_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateIconDownloaded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateIconDownloaded_Statics::NewProp_Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateIconDownloaded_Statics::NewProp_Url,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateIconDownloaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateIconDownloaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarEditorUI, nullptr, "OnTemplateIconDownloaded", nullptr, nullptr, Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateIconDownloaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateIconDownloaded_Statics::PropPointers), sizeof(Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateIconDownloaded_Statics::RpmAvatarEditorUI_eventOnTemplateIconDownloaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateIconDownloaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateIconDownloaded_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateIconDownloaded_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateIconDownloaded_Statics::RpmAvatarEditorUI_eventOnTemplateIconDownloaded_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateIconDownloaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateIconDownloaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URpmAvatarEditorUI_OnUpdateLockedAssetsCompleted_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarEditorUI_OnUpdateLockedAssetsCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarEditorUI_OnUpdateLockedAssetsCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarEditorUI, nullptr, "OnUpdateLockedAssetsCompleted", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_OnUpdateLockedAssetsCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_URpmAvatarEditorUI_OnUpdateLockedAssetsCompleted_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_URpmAvatarEditorUI_OnUpdateLockedAssetsCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarEditorUI_OnUpdateLockedAssetsCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URpmAvatarEditorUI_PreviewDownloaded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarEditorUI_PreviewDownloaded_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URpmAvatarEditorUI_PreviewDownloaded_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RpmAvatarEditorUI_eventPreviewDownloaded_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_PreviewDownloaded_Statics::NewProp_SkeletalMesh_MetaData), Z_Construct_UFunction_URpmAvatarEditorUI_PreviewDownloaded_Statics::NewProp_SkeletalMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarEditorUI_PreviewDownloaded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarEditorUI_PreviewDownloaded_Statics::NewProp_SkeletalMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarEditorUI_PreviewDownloaded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Preview Downloaded" },
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarEditorUI_PreviewDownloaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarEditorUI, nullptr, "PreviewDownloaded", nullptr, nullptr, Z_Construct_UFunction_URpmAvatarEditorUI_PreviewDownloaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_PreviewDownloaded_Statics::PropPointers), sizeof(RpmAvatarEditorUI_eventPreviewDownloaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_PreviewDownloaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_URpmAvatarEditorUI_PreviewDownloaded_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_PreviewDownloaded_Statics::PropPointers) < 2048);
	static_assert(sizeof(RpmAvatarEditorUI_eventPreviewDownloaded_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URpmAvatarEditorUI_PreviewDownloaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarEditorUI_PreviewDownloaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URpmAvatarEditorUI_SetupAssets_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarEditorUI_SetupAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Setup Assets" },
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarEditorUI_SetupAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarEditorUI, nullptr, "SetupAssets", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_SetupAssets_Statics::Function_MetaDataParams), Z_Construct_UFunction_URpmAvatarEditorUI_SetupAssets_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_URpmAvatarEditorUI_SetupAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarEditorUI_SetupAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URpmAvatarEditorUI_SetupTemplates_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarEditorUI_SetupTemplates_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Setup Templates" },
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarEditorUI_SetupTemplates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarEditorUI, nullptr, "SetupTemplates", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_SetupTemplates_Statics::Function_MetaDataParams), Z_Construct_UFunction_URpmAvatarEditorUI_SetupTemplates_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_URpmAvatarEditorUI_SetupTemplates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarEditorUI_SetupTemplates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URpmAvatarEditorUI_TemplateSelected_Statics
	{
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarEditorUI_TemplateSelected_Statics::NewProp_Template_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URpmAvatarEditorUI_TemplateSelected_Statics::NewProp_Template = { "Template", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RpmAvatarEditorUI_eventTemplateSelected_Parms, Template), Z_Construct_UScriptStruct_FRpmAvatarTemplate, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_TemplateSelected_Statics::NewProp_Template_MetaData), Z_Construct_UFunction_URpmAvatarEditorUI_TemplateSelected_Statics::NewProp_Template_MetaData) }; // 2342159353
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarEditorUI_TemplateSelected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarEditorUI_TemplateSelected_Statics::NewProp_Template,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarEditorUI_TemplateSelected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Template Selected" },
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarEditorUI_TemplateSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarEditorUI, nullptr, "TemplateSelected", nullptr, nullptr, Z_Construct_UFunction_URpmAvatarEditorUI_TemplateSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_TemplateSelected_Statics::PropPointers), sizeof(RpmAvatarEditorUI_eventTemplateSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_TemplateSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_URpmAvatarEditorUI_TemplateSelected_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_TemplateSelected_Statics::PropPointers) < 2048);
	static_assert(sizeof(RpmAvatarEditorUI_eventTemplateSelected_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URpmAvatarEditorUI_TemplateSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarEditorUI_TemplateSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URpmAvatarEditorUI_UpdateLockedAssets_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarEditorUI_UpdateLockedAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Update Locked Assets" },
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarEditorUI_UpdateLockedAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarEditorUI, nullptr, "UpdateLockedAssets", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarEditorUI_UpdateLockedAssets_Statics::Function_MetaDataParams), Z_Construct_UFunction_URpmAvatarEditorUI_UpdateLockedAssets_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_URpmAvatarEditorUI_UpdateLockedAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarEditorUI_UpdateLockedAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URpmAvatarEditorUI);
	UClass* Z_Construct_UClass_URpmAvatarEditorUI_NoRegister()
	{
		return URpmAvatarEditorUI::StaticClass();
	}
	struct Z_Construct_UClass_URpmAvatarEditorUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetContainerMap_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AssetContainerMap_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AssetContainerMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetContainerMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AssetContainerMap;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ColorContainerMap_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ColorContainerMap_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorContainerMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorContainerMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ColorContainerMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateContainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TemplateContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetButtonClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AssetButtonClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EyeColorButtonClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_EyeColorButtonClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorButtonClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ColorButtonClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateButtonClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TemplateButtonClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BadgeIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BadgeIcon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvatarCreatorApi_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AvatarCreatorApi;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetIconDownloadCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_AssetIconDownloadCompleted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateIconDownloadCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_TemplateIconDownloadCompleted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BadgeIconDownloadCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_BadgeIconDownloadCompleted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateLockedAssetsCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_UpdateLockedAssetsCompleted;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetImageMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetImageMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetImageMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AssetImageMap;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TemplateImageMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_TemplateImageMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateImageMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_TemplateImageMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URpmAvatarEditorUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_RpmAvatarCreator,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URpmAvatarEditorUI_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_URpmAvatarEditorUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URpmAvatarEditorUI_AreModularOutfitsDisabled, "AreModularOutfitsDisabled" }, // 3681837800
		{ &Z_Construct_UFunction_URpmAvatarEditorUI_AssetSelected, "AssetSelected" }, // 3818212759
		{ &Z_Construct_UFunction_URpmAvatarEditorUI_AssetUnlocked, "AssetUnlocked" }, // 3337429485
		{ &Z_Construct_UFunction_URpmAvatarEditorUI_ColorSelected, "ColorSelected" }, // 2128459982
		{ &Z_Construct_UFunction_URpmAvatarEditorUI_DiscardAvatarDraft, "DiscardAvatarDraft" }, // 3340686300
		{ &Z_Construct_UFunction_URpmAvatarEditorUI_DownloadAssetIcons, "DownloadAssetIcons" }, // 3179688818
		{ &Z_Construct_UFunction_URpmAvatarEditorUI_Init, "Init" }, // 1708195038
		{ &Z_Construct_UFunction_URpmAvatarEditorUI_IsCustomizableAssetSelected, "IsCustomizableAssetSelected" }, // 113661151
		{ &Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetButtonClicked, "OnAssetButtonClicked" }, // 1198042195
		{ &Z_Construct_UFunction_URpmAvatarEditorUI_OnAssetIconDownloaded, "OnAssetIconDownloaded" }, // 1160438538
		{ &Z_Construct_UFunction_URpmAvatarEditorUI_OnBadgeIconDownloaded, "OnBadgeIconDownloaded" }, // 2506369567
		{ &Z_Construct_UFunction_URpmAvatarEditorUI_OnColorButtonClicked, "OnColorButtonClicked" }, // 1590188473
		{ &Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateButtonClicked, "OnTemplateButtonClicked" }, // 2071808200
		{ &Z_Construct_UFunction_URpmAvatarEditorUI_OnTemplateIconDownloaded, "OnTemplateIconDownloaded" }, // 1076239868
		{ &Z_Construct_UFunction_URpmAvatarEditorUI_OnUpdateLockedAssetsCompleted, "OnUpdateLockedAssetsCompleted" }, // 2540615047
		{ &Z_Construct_UFunction_URpmAvatarEditorUI_PreviewDownloaded, "PreviewDownloaded" }, // 226845083
		{ &Z_Construct_UFunction_URpmAvatarEditorUI_SetupAssets, "SetupAssets" }, // 860864985
		{ &Z_Construct_UFunction_URpmAvatarEditorUI_SetupTemplates, "SetupTemplates" }, // 1949492006
		{ &Z_Construct_UFunction_URpmAvatarEditorUI_TemplateSelected, "TemplateSelected" }, // 2659117117
		{ &Z_Construct_UFunction_URpmAvatarEditorUI_UpdateLockedAssets, "UpdateLockedAssets" }, // 4291309418
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URpmAvatarEditorUI_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URpmAvatarEditorUI_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/RpmAvatarEditorUI.h" },
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AssetContainerMap_ValueProp = { "AssetContainerMap", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UWrapBox_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AssetContainerMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AssetContainerMap_Key_KeyProp = { "AssetContainerMap_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_RpmAvatarCreator_ERpmPartnerAssetType, METADATA_PARAMS(0, nullptr) }; // 3225098066
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AssetContainerMap_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AssetContainerMap = { "AssetContainerMap", nullptr, (EPropertyFlags)0x002008800000000c, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URpmAvatarEditorUI, AssetContainerMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AssetContainerMap_MetaData), Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AssetContainerMap_MetaData) }; // 3225098066
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_ColorContainerMap_ValueProp = { "ColorContainerMap", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UWrapBox_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_ColorContainerMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_ColorContainerMap_Key_KeyProp = { "ColorContainerMap_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_RpmAvatarCreator_ERpmPartnerAssetColor, METADATA_PARAMS(0, nullptr) }; // 2061967593
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_ColorContainerMap_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_ColorContainerMap = { "ColorContainerMap", nullptr, (EPropertyFlags)0x002008800000000c, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URpmAvatarEditorUI, ColorContainerMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_ColorContainerMap_MetaData), Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_ColorContainerMap_MetaData) }; // 2061967593
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_TemplateContainer_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_TemplateContainer = { "TemplateContainer", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URpmAvatarEditorUI, TemplateContainer), Z_Construct_UClass_UWrapBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_TemplateContainer_MetaData), Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_TemplateContainer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AssetButtonClass_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AssetButtonClass = { "AssetButtonClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URpmAvatarEditorUI, AssetButtonClass), Z_Construct_UClass_UClass, Z_Construct_UClass_URpmAssetButtonUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AssetButtonClass_MetaData), Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AssetButtonClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_EyeColorButtonClass_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_EyeColorButtonClass = { "EyeColorButtonClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URpmAvatarEditorUI, EyeColorButtonClass), Z_Construct_UClass_UClass, Z_Construct_UClass_URpmAssetButtonUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_EyeColorButtonClass_MetaData), Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_EyeColorButtonClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_ColorButtonClass_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_ColorButtonClass = { "ColorButtonClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URpmAvatarEditorUI, ColorButtonClass), Z_Construct_UClass_UClass, Z_Construct_UClass_URpmColorButtonUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_ColorButtonClass_MetaData), Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_ColorButtonClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_TemplateButtonClass_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_TemplateButtonClass = { "TemplateButtonClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URpmAvatarEditorUI, TemplateButtonClass), Z_Construct_UClass_UClass, Z_Construct_UClass_URpmTemplateButtonUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_TemplateButtonClass_MetaData), Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_TemplateButtonClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_BadgeIcon_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_BadgeIcon = { "BadgeIcon", nullptr, (EPropertyFlags)0x002208000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URpmAvatarEditorUI, BadgeIcon), Z_Construct_UClass_URpmIconUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_BadgeIcon_MetaData), Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_BadgeIcon_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AvatarCreatorApi_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AvatarCreatorApi = { "AvatarCreatorApi", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URpmAvatarEditorUI, AvatarCreatorApi), Z_Construct_UClass_URpmAvatarCreatorApi_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AvatarCreatorApi_MetaData), Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AvatarCreatorApi_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AssetIconDownloadCompleted_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AssetIconDownloadCompleted = { "AssetIconDownloadCompleted", nullptr, (EPropertyFlags)0x0040000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URpmAvatarEditorUI, AssetIconDownloadCompleted), Z_Construct_UDelegateFunction_RpmAvatarCreator_ImageDownloadCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AssetIconDownloadCompleted_MetaData), Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AssetIconDownloadCompleted_MetaData) }; // 3510617771
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_TemplateIconDownloadCompleted_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_TemplateIconDownloadCompleted = { "TemplateIconDownloadCompleted", nullptr, (EPropertyFlags)0x0040000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URpmAvatarEditorUI, TemplateIconDownloadCompleted), Z_Construct_UDelegateFunction_RpmAvatarCreator_ImageDownloadCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_TemplateIconDownloadCompleted_MetaData), Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_TemplateIconDownloadCompleted_MetaData) }; // 3510617771
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_BadgeIconDownloadCompleted_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_BadgeIconDownloadCompleted = { "BadgeIconDownloadCompleted", nullptr, (EPropertyFlags)0x0040000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URpmAvatarEditorUI, BadgeIconDownloadCompleted), Z_Construct_UDelegateFunction_RpmAvatarCreator_ImageDownloadCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_BadgeIconDownloadCompleted_MetaData), Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_BadgeIconDownloadCompleted_MetaData) }; // 3510617771
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_UpdateLockedAssetsCompleted_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_UpdateLockedAssetsCompleted = { "UpdateLockedAssetsCompleted", nullptr, (EPropertyFlags)0x0040000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URpmAvatarEditorUI, UpdateLockedAssetsCompleted), Z_Construct_UDelegateFunction_RpmAvatarCreator_UpdateLockedAssetsCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_UpdateLockedAssetsCompleted_MetaData), Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_UpdateLockedAssetsCompleted_MetaData) }; // 1730332937
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AssetImageMap_ValueProp = { "AssetImageMap", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_URpmAssetButtonUI_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AssetImageMap_Key_KeyProp = { "AssetImageMap_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AssetImageMap_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AssetImageMap = { "AssetImageMap", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URpmAvatarEditorUI, AssetImageMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AssetImageMap_MetaData), Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AssetImageMap_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_TemplateImageMap_ValueProp = { "TemplateImageMap", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_URpmTemplateButtonUI_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_TemplateImageMap_Key_KeyProp = { "TemplateImageMap_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_TemplateImageMap_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/RpmAvatarEditorUI.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_TemplateImageMap = { "TemplateImageMap", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URpmAvatarEditorUI, TemplateImageMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_TemplateImageMap_MetaData), Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_TemplateImageMap_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URpmAvatarEditorUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AssetContainerMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AssetContainerMap_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AssetContainerMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AssetContainerMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_ColorContainerMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_ColorContainerMap_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_ColorContainerMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_ColorContainerMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_TemplateContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AssetButtonClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_EyeColorButtonClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_ColorButtonClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_TemplateButtonClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_BadgeIcon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AvatarCreatorApi,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AssetIconDownloadCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_TemplateIconDownloadCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_BadgeIconDownloadCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_UpdateLockedAssetsCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AssetImageMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AssetImageMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_AssetImageMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_TemplateImageMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_TemplateImageMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarEditorUI_Statics::NewProp_TemplateImageMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URpmAvatarEditorUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URpmAvatarEditorUI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URpmAvatarEditorUI_Statics::ClassParams = {
		&URpmAvatarEditorUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URpmAvatarEditorUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URpmAvatarEditorUI_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URpmAvatarEditorUI_Statics::Class_MetaDataParams), Z_Construct_UClass_URpmAvatarEditorUI_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URpmAvatarEditorUI_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_URpmAvatarEditorUI()
	{
		if (!Z_Registration_Info_UClass_URpmAvatarEditorUI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URpmAvatarEditorUI.OuterSingleton, Z_Construct_UClass_URpmAvatarEditorUI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URpmAvatarEditorUI.OuterSingleton;
	}
	template<> RPMAVATARCREATOR_API UClass* StaticClass<URpmAvatarEditorUI>()
	{
		return URpmAvatarEditorUI::StaticClass();
	}
	URpmAvatarEditorUI::URpmAvatarEditorUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URpmAvatarEditorUI);
	URpmAvatarEditorUI::~URpmAvatarEditorUI() {}
	struct Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAvatarEditorUI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAvatarEditorUI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URpmAvatarEditorUI, URpmAvatarEditorUI::StaticClass, TEXT("URpmAvatarEditorUI"), &Z_Registration_Info_UClass_URpmAvatarEditorUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URpmAvatarEditorUI), 2375165468U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAvatarEditorUI_h_1440577548(TEXT("/Script/RpmAvatarCreator"),
		Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAvatarEditorUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAvatarEditorUI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
