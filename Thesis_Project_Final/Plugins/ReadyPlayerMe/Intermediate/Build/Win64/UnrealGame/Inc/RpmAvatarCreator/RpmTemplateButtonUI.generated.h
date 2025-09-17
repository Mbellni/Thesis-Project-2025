// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRpmAvatarTemplate;
#ifdef RPMAVATARCREATOR_RpmTemplateButtonUI_generated_h
#error "RpmTemplateButtonUI.generated.h already included, missing '#pragma once' in RpmTemplateButtonUI.h"
#endif
#define RPMAVATARCREATOR_RpmTemplateButtonUI_generated_h

#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmTemplateButtonUI_h_10_DELEGATE \
struct _Script_RpmAvatarCreator_eventTemplateButtonSelected_Parms \
{ \
	FRpmAvatarTemplate Template; \
}; \
static inline void FTemplateButtonSelected_DelegateWrapper(const FMulticastScriptDelegate& TemplateButtonSelected, FRpmAvatarTemplate const& Template) \
{ \
	_Script_RpmAvatarCreator_eventTemplateButtonSelected_Parms Parms; \
	Parms.Template=Template; \
	TemplateButtonSelected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmTemplateButtonUI_h_15_SPARSE_DATA
#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmTemplateButtonUI_h_15_RPC_WRAPPERS
#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmTemplateButtonUI_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmTemplateButtonUI_h_15_EVENT_PARMS \
	struct RpmTemplateButtonUI_eventSetSelected_Parms \
	{ \
		bool Selected; \
	};


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmTemplateButtonUI_h_15_CALLBACK_WRAPPERS
#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmTemplateButtonUI_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURpmTemplateButtonUI(); \
	friend struct Z_Construct_UClass_URpmTemplateButtonUI_Statics; \
public: \
	DECLARE_CLASS(URpmTemplateButtonUI, URpmIconUI, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/RpmAvatarCreator"), NO_API) \
	DECLARE_SERIALIZER(URpmTemplateButtonUI)


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmTemplateButtonUI_h_15_INCLASS \
private: \
	static void StaticRegisterNativesURpmTemplateButtonUI(); \
	friend struct Z_Construct_UClass_URpmTemplateButtonUI_Statics; \
public: \
	DECLARE_CLASS(URpmTemplateButtonUI, URpmIconUI, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/RpmAvatarCreator"), NO_API) \
	DECLARE_SERIALIZER(URpmTemplateButtonUI)


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmTemplateButtonUI_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URpmTemplateButtonUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URpmTemplateButtonUI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URpmTemplateButtonUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URpmTemplateButtonUI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URpmTemplateButtonUI(URpmTemplateButtonUI&&); \
	NO_API URpmTemplateButtonUI(const URpmTemplateButtonUI&); \
public:


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmTemplateButtonUI_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URpmTemplateButtonUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URpmTemplateButtonUI(URpmTemplateButtonUI&&); \
	NO_API URpmTemplateButtonUI(const URpmTemplateButtonUI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URpmTemplateButtonUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URpmTemplateButtonUI); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URpmTemplateButtonUI)


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmTemplateButtonUI_h_12_PROLOG \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmTemplateButtonUI_h_15_EVENT_PARMS


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmTemplateButtonUI_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmTemplateButtonUI_h_15_SPARSE_DATA \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmTemplateButtonUI_h_15_RPC_WRAPPERS \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmTemplateButtonUI_h_15_CALLBACK_WRAPPERS \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmTemplateButtonUI_h_15_INCLASS \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmTemplateButtonUI_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmTemplateButtonUI_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmTemplateButtonUI_h_15_SPARSE_DATA \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmTemplateButtonUI_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmTemplateButtonUI_h_15_CALLBACK_WRAPPERS \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmTemplateButtonUI_h_15_INCLASS_NO_PURE_DECLS \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmTemplateButtonUI_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPMAVATARCREATOR_API UClass* StaticClass<class URpmTemplateButtonUI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_UI_RpmTemplateButtonUI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
