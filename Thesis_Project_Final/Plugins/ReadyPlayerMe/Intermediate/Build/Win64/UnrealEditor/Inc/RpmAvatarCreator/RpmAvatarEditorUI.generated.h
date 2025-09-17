// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRpmAvatarTemplate;
enum class ERpmPartnerAssetColor : uint8;
struct FRpmPartnerAsset;
class UTexture2D;
class UWrapBox;
class URpmAvatarCreatorApi;
class USkeletalMesh;
#ifdef RPMAVATARCREATOR_RpmAvatarEditorUI_generated_h
#error "RpmAvatarEditorUI.generated.h already included, missing '#pragma once' in RpmAvatarEditorUI.h"
#endif
#define RPMAVATARCREATOR_RpmAvatarEditorUI_generated_h

#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAvatarEditorUI_h_16_SPARSE_DATA
#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAvatarEditorUI_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTemplateButtonClicked); \
	DECLARE_FUNCTION(execOnColorButtonClicked); \
	DECLARE_FUNCTION(execOnAssetButtonClicked); \
	DECLARE_FUNCTION(execOnUpdateLockedAssetsCompleted); \
	DECLARE_FUNCTION(execOnBadgeIconDownloaded); \
	DECLARE_FUNCTION(execOnTemplateIconDownloaded); \
	DECLARE_FUNCTION(execOnAssetIconDownloaded); \
	DECLARE_FUNCTION(execAreModularOutfitsDisabled); \
	DECLARE_FUNCTION(execIsCustomizableAssetSelected); \
	DECLARE_FUNCTION(execDownloadAssetIcons); \
	DECLARE_FUNCTION(execUpdateLockedAssets); \
	DECLARE_FUNCTION(execDiscardAvatarDraft); \
	DECLARE_FUNCTION(execSetupAssets); \
	DECLARE_FUNCTION(execSetupTemplates); \
	DECLARE_FUNCTION(execInit);


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAvatarEditorUI_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTemplateButtonClicked); \
	DECLARE_FUNCTION(execOnColorButtonClicked); \
	DECLARE_FUNCTION(execOnAssetButtonClicked); \
	DECLARE_FUNCTION(execOnUpdateLockedAssetsCompleted); \
	DECLARE_FUNCTION(execOnBadgeIconDownloaded); \
	DECLARE_FUNCTION(execOnTemplateIconDownloaded); \
	DECLARE_FUNCTION(execOnAssetIconDownloaded); \
	DECLARE_FUNCTION(execAreModularOutfitsDisabled); \
	DECLARE_FUNCTION(execIsCustomizableAssetSelected); \
	DECLARE_FUNCTION(execDownloadAssetIcons); \
	DECLARE_FUNCTION(execUpdateLockedAssets); \
	DECLARE_FUNCTION(execDiscardAvatarDraft); \
	DECLARE_FUNCTION(execSetupAssets); \
	DECLARE_FUNCTION(execSetupTemplates); \
	DECLARE_FUNCTION(execInit);


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAvatarEditorUI_h_16_EVENT_PARMS \
	struct RpmAvatarEditorUI_eventAssetSelected_Parms \
	{ \
		FRpmPartnerAsset Asset; \
	}; \
	struct RpmAvatarEditorUI_eventPreviewDownloaded_Parms \
	{ \
		const USkeletalMesh* SkeletalMesh; \
	}; \
	struct RpmAvatarEditorUI_eventTemplateSelected_Parms \
	{ \
		FRpmAvatarTemplate Template; \
	};


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAvatarEditorUI_h_16_CALLBACK_WRAPPERS
#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAvatarEditorUI_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURpmAvatarEditorUI(); \
	friend struct Z_Construct_UClass_URpmAvatarEditorUI_Statics; \
public: \
	DECLARE_CLASS(URpmAvatarEditorUI, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/RpmAvatarCreator"), NO_API) \
	DECLARE_SERIALIZER(URpmAvatarEditorUI)


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAvatarEditorUI_h_16_INCLASS \
private: \
	static void StaticRegisterNativesURpmAvatarEditorUI(); \
	friend struct Z_Construct_UClass_URpmAvatarEditorUI_Statics; \
public: \
	DECLARE_CLASS(URpmAvatarEditorUI, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/RpmAvatarCreator"), NO_API) \
	DECLARE_SERIALIZER(URpmAvatarEditorUI)


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAvatarEditorUI_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URpmAvatarEditorUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URpmAvatarEditorUI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URpmAvatarEditorUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URpmAvatarEditorUI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URpmAvatarEditorUI(URpmAvatarEditorUI&&); \
	NO_API URpmAvatarEditorUI(const URpmAvatarEditorUI&); \
public:


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAvatarEditorUI_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URpmAvatarEditorUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URpmAvatarEditorUI(URpmAvatarEditorUI&&); \
	NO_API URpmAvatarEditorUI(const URpmAvatarEditorUI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URpmAvatarEditorUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URpmAvatarEditorUI); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URpmAvatarEditorUI)


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAvatarEditorUI_h_13_PROLOG \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAvatarEditorUI_h_16_EVENT_PARMS


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAvatarEditorUI_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAvatarEditorUI_h_16_SPARSE_DATA \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAvatarEditorUI_h_16_RPC_WRAPPERS \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAvatarEditorUI_h_16_CALLBACK_WRAPPERS \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAvatarEditorUI_h_16_INCLASS \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAvatarEditorUI_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAvatarEditorUI_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAvatarEditorUI_h_16_SPARSE_DATA \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAvatarEditorUI_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAvatarEditorUI_h_16_CALLBACK_WRAPPERS \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAvatarEditorUI_h_16_INCLASS_NO_PURE_DECLS \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAvatarEditorUI_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPMAVATARCREATOR_API UClass* StaticClass<class URpmAvatarEditorUI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAvatarEditorUI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
