// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
struct FRpmAvatarRenderProperties;
class UReadyPlayerMeLoadRenderAction;
#ifdef READYPLAYERME_ReadyPlayerMeLoadRenderAction_generated_h
#error "ReadyPlayerMeLoadRenderAction.generated.h already included, missing '#pragma once' in ReadyPlayerMeLoadRenderAction.h"
#endif
#define READYPLAYERME_ReadyPlayerMeLoadRenderAction_generated_h

#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeLoadRenderAction_h_10_DELEGATE \
struct _Script_ReadyPlayerMe_eventDownloadImageCompleted_Parms \
{ \
	UTexture2D* Texture; \
}; \
static inline void FDownloadImageCompleted_DelegateWrapper(const FMulticastScriptDelegate& DownloadImageCompleted, UTexture2D* Texture) \
{ \
	_Script_ReadyPlayerMe_eventDownloadImageCompleted_Parms Parms; \
	Parms.Texture=Texture; \
	DownloadImageCompleted.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeLoadRenderAction_h_18_SPARSE_DATA
#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeLoadRenderAction_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnImageDownloaded); \
	DECLARE_FUNCTION(execLoadAvatarRenderAsync);


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeLoadRenderAction_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnImageDownloaded); \
	DECLARE_FUNCTION(execLoadAvatarRenderAsync);


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeLoadRenderAction_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReadyPlayerMeLoadRenderAction(); \
	friend struct Z_Construct_UClass_UReadyPlayerMeLoadRenderAction_Statics; \
public: \
	DECLARE_CLASS(UReadyPlayerMeLoadRenderAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ReadyPlayerMe"), NO_API) \
	DECLARE_SERIALIZER(UReadyPlayerMeLoadRenderAction)


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeLoadRenderAction_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUReadyPlayerMeLoadRenderAction(); \
	friend struct Z_Construct_UClass_UReadyPlayerMeLoadRenderAction_Statics; \
public: \
	DECLARE_CLASS(UReadyPlayerMeLoadRenderAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ReadyPlayerMe"), NO_API) \
	DECLARE_SERIALIZER(UReadyPlayerMeLoadRenderAction)


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeLoadRenderAction_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReadyPlayerMeLoadRenderAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReadyPlayerMeLoadRenderAction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReadyPlayerMeLoadRenderAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReadyPlayerMeLoadRenderAction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReadyPlayerMeLoadRenderAction(UReadyPlayerMeLoadRenderAction&&); \
	NO_API UReadyPlayerMeLoadRenderAction(const UReadyPlayerMeLoadRenderAction&); \
public:


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeLoadRenderAction_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReadyPlayerMeLoadRenderAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReadyPlayerMeLoadRenderAction(UReadyPlayerMeLoadRenderAction&&); \
	NO_API UReadyPlayerMeLoadRenderAction(const UReadyPlayerMeLoadRenderAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReadyPlayerMeLoadRenderAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReadyPlayerMeLoadRenderAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReadyPlayerMeLoadRenderAction)


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeLoadRenderAction_h_15_PROLOG
#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeLoadRenderAction_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeLoadRenderAction_h_18_SPARSE_DATA \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeLoadRenderAction_h_18_RPC_WRAPPERS \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeLoadRenderAction_h_18_INCLASS \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeLoadRenderAction_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeLoadRenderAction_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeLoadRenderAction_h_18_SPARSE_DATA \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeLoadRenderAction_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeLoadRenderAction_h_18_INCLASS_NO_PURE_DECLS \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeLoadRenderAction_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> READYPLAYERME_API UClass* StaticClass<class UReadyPlayerMeLoadRenderAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeLoadRenderAction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
