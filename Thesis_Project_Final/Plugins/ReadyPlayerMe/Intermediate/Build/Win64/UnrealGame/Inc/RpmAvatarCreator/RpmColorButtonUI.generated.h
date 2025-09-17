// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ERpmPartnerAssetColor : uint8;
#ifdef RPMAVATARCREATOR_RpmColorButtonUI_generated_h
#error "RpmColorButtonUI.generated.h already included, missing '#pragma once' in RpmColorButtonUI.h"
#endif
#define RPMAVATARCREATOR_RpmColorButtonUI_generated_h

#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmColorButtonUI_h_10_DELEGATE \
struct _Script_RpmAvatarCreator_eventColorButtonSelected_Parms \
{ \
	ERpmPartnerAssetColor AssetColor; \
	int32 ColorIndex; \
}; \
static inline void FColorButtonSelected_DelegateWrapper(const FMulticastScriptDelegate& ColorButtonSelected, ERpmPartnerAssetColor AssetColor, int32 ColorIndex) \
{ \
	_Script_RpmAvatarCreator_eventColorButtonSelected_Parms Parms; \
	Parms.AssetColor=AssetColor; \
	Parms.ColorIndex=ColorIndex; \
	ColorButtonSelected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmColorButtonUI_h_15_SPARSE_DATA
#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmColorButtonUI_h_15_RPC_WRAPPERS
#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmColorButtonUI_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmColorButtonUI_h_15_EVENT_PARMS \
	struct RpmColorButtonUI_eventSetSelected_Parms \
	{ \
		bool IsSelected; \
	};


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmColorButtonUI_h_15_CALLBACK_WRAPPERS
#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmColorButtonUI_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURpmColorButtonUI(); \
	friend struct Z_Construct_UClass_URpmColorButtonUI_Statics; \
public: \
	DECLARE_CLASS(URpmColorButtonUI, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/RpmAvatarCreator"), NO_API) \
	DECLARE_SERIALIZER(URpmColorButtonUI)


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmColorButtonUI_h_15_INCLASS \
private: \
	static void StaticRegisterNativesURpmColorButtonUI(); \
	friend struct Z_Construct_UClass_URpmColorButtonUI_Statics; \
public: \
	DECLARE_CLASS(URpmColorButtonUI, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/RpmAvatarCreator"), NO_API) \
	DECLARE_SERIALIZER(URpmColorButtonUI)


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmColorButtonUI_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URpmColorButtonUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URpmColorButtonUI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URpmColorButtonUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URpmColorButtonUI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URpmColorButtonUI(URpmColorButtonUI&&); \
	NO_API URpmColorButtonUI(const URpmColorButtonUI&); \
public:


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmColorButtonUI_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URpmColorButtonUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URpmColorButtonUI(URpmColorButtonUI&&); \
	NO_API URpmColorButtonUI(const URpmColorButtonUI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URpmColorButtonUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URpmColorButtonUI); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URpmColorButtonUI)


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmColorButtonUI_h_12_PROLOG \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmColorButtonUI_h_15_EVENT_PARMS


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmColorButtonUI_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmColorButtonUI_h_15_SPARSE_DATA \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmColorButtonUI_h_15_RPC_WRAPPERS \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmColorButtonUI_h_15_CALLBACK_WRAPPERS \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmColorButtonUI_h_15_INCLASS \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmColorButtonUI_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmColorButtonUI_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmColorButtonUI_h_15_SPARSE_DATA \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmColorButtonUI_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmColorButtonUI_h_15_CALLBACK_WRAPPERS \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmColorButtonUI_h_15_INCLASS_NO_PURE_DECLS \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmColorButtonUI_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPMAVATARCREATOR_API UClass* StaticClass<class URpmColorButtonUI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmColorButtonUI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
