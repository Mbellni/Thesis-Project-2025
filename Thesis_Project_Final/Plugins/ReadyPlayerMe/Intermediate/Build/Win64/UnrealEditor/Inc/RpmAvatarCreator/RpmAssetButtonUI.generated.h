// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRpmPartnerAsset;
#ifdef RPMAVATARCREATOR_RpmAssetButtonUI_generated_h
#error "RpmAssetButtonUI.generated.h already included, missing '#pragma once' in RpmAssetButtonUI.h"
#endif
#define RPMAVATARCREATOR_RpmAssetButtonUI_generated_h

#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAssetButtonUI_h_10_DELEGATE \
struct _Script_RpmAvatarCreator_eventAssetButtonSelected_Parms \
{ \
	FRpmPartnerAsset Asset; \
}; \
static inline void FAssetButtonSelected_DelegateWrapper(const FMulticastScriptDelegate& AssetButtonSelected, FRpmPartnerAsset const& Asset) \
{ \
	_Script_RpmAvatarCreator_eventAssetButtonSelected_Parms Parms; \
	Parms.Asset=Asset; \
	AssetButtonSelected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAssetButtonUI_h_15_SPARSE_DATA
#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAssetButtonUI_h_15_RPC_WRAPPERS
#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAssetButtonUI_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAssetButtonUI_h_15_EVENT_PARMS \
	struct RpmAssetButtonUI_eventSetSelected_Parms \
	{ \
		bool Selected; \
	};


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAssetButtonUI_h_15_CALLBACK_WRAPPERS
#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAssetButtonUI_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURpmAssetButtonUI(); \
	friend struct Z_Construct_UClass_URpmAssetButtonUI_Statics; \
public: \
	DECLARE_CLASS(URpmAssetButtonUI, URpmIconUI, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/RpmAvatarCreator"), NO_API) \
	DECLARE_SERIALIZER(URpmAssetButtonUI)


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAssetButtonUI_h_15_INCLASS \
private: \
	static void StaticRegisterNativesURpmAssetButtonUI(); \
	friend struct Z_Construct_UClass_URpmAssetButtonUI_Statics; \
public: \
	DECLARE_CLASS(URpmAssetButtonUI, URpmIconUI, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/RpmAvatarCreator"), NO_API) \
	DECLARE_SERIALIZER(URpmAssetButtonUI)


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAssetButtonUI_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URpmAssetButtonUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URpmAssetButtonUI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URpmAssetButtonUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URpmAssetButtonUI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URpmAssetButtonUI(URpmAssetButtonUI&&); \
	NO_API URpmAssetButtonUI(const URpmAssetButtonUI&); \
public:


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAssetButtonUI_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URpmAssetButtonUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URpmAssetButtonUI(URpmAssetButtonUI&&); \
	NO_API URpmAssetButtonUI(const URpmAssetButtonUI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URpmAssetButtonUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URpmAssetButtonUI); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URpmAssetButtonUI)


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAssetButtonUI_h_12_PROLOG \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAssetButtonUI_h_15_EVENT_PARMS


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAssetButtonUI_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAssetButtonUI_h_15_SPARSE_DATA \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAssetButtonUI_h_15_RPC_WRAPPERS \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAssetButtonUI_h_15_CALLBACK_WRAPPERS \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAssetButtonUI_h_15_INCLASS \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAssetButtonUI_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAssetButtonUI_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAssetButtonUI_h_15_SPARSE_DATA \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAssetButtonUI_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAssetButtonUI_h_15_CALLBACK_WRAPPERS \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAssetButtonUI_h_15_INCLASS_NO_PURE_DECLS \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAssetButtonUI_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPMAVATARCREATOR_API UClass* StaticClass<class URpmAssetButtonUI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmAssetButtonUI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
