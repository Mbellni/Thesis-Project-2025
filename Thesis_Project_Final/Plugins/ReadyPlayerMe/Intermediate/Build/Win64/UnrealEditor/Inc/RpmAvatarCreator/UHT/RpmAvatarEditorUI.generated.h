// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/RpmAvatarEditorUI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URpmAvatarCreatorApi;
class USkeletalMesh;
class UTexture2D;
class UWrapBox;
enum class ERpmPartnerAssetColor : uint8;
struct FRpmAvatarTemplate;
struct FRpmPartnerAsset;
#ifdef RPMAVATARCREATOR_RpmAvatarEditorUI_generated_h
#error "RpmAvatarEditorUI.generated.h already included, missing '#pragma once' in RpmAvatarEditorUI.h"
#endif
#define RPMAVATARCREATOR_RpmAvatarEditorUI_generated_h

#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAvatarEditorUI_h_16_SPARSE_DATA
#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAvatarEditorUI_h_16_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAvatarEditorUI_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAvatarEditorUI_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAvatarEditorUI_h_16_ACCESSORS
#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAvatarEditorUI_h_16_CALLBACK_WRAPPERS
#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAvatarEditorUI_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURpmAvatarEditorUI(); \
	friend struct Z_Construct_UClass_URpmAvatarEditorUI_Statics; \
public: \
	DECLARE_CLASS(URpmAvatarEditorUI, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/RpmAvatarCreator"), NO_API) \
	DECLARE_SERIALIZER(URpmAvatarEditorUI)


#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAvatarEditorUI_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URpmAvatarEditorUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URpmAvatarEditorUI(URpmAvatarEditorUI&&); \
	NO_API URpmAvatarEditorUI(const URpmAvatarEditorUI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URpmAvatarEditorUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URpmAvatarEditorUI); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URpmAvatarEditorUI) \
	NO_API virtual ~URpmAvatarEditorUI();


#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAvatarEditorUI_h_13_PROLOG
#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAvatarEditorUI_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAvatarEditorUI_h_16_SPARSE_DATA \
	FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAvatarEditorUI_h_16_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAvatarEditorUI_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAvatarEditorUI_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAvatarEditorUI_h_16_ACCESSORS \
	FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAvatarEditorUI_h_16_CALLBACK_WRAPPERS \
	FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAvatarEditorUI_h_16_INCLASS_NO_PURE_DECLS \
	FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAvatarEditorUI_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPMAVATARCREATOR_API UClass* StaticClass<class URpmAvatarEditorUI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAvatarEditorUI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
