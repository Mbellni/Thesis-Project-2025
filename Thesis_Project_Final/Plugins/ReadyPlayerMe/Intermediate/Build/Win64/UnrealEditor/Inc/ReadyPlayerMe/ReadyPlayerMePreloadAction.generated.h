// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMesh;
struct FAvatarMetadata;
class UObject;
struct FAvatarPreloadData;
class UReadyPlayerMePreloadAction;
#ifdef READYPLAYERME_ReadyPlayerMePreloadAction_generated_h
#error "ReadyPlayerMePreloadAction.generated.h already included, missing '#pragma once' in ReadyPlayerMePreloadAction.h"
#endif
#define READYPLAYERME_ReadyPlayerMePreloadAction_generated_h

#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAvatarPreloadData_Statics; \
	READYPLAYERME_API static class UScriptStruct* StaticStruct();


template<> READYPLAYERME_API UScriptStruct* StaticStruct<struct FAvatarPreloadData>();

#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h_32_DELEGATE \
static inline void FAvatarPreloadCompleted_DelegateWrapper(const FMulticastScriptDelegate& AvatarPreloadCompleted) \
{ \
	AvatarPreloadCompleted.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h_40_SPARSE_DATA
#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h_40_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAvatarLoadFailed); \
	DECLARE_FUNCTION(execOnAvatarDownloaded); \
	DECLARE_FUNCTION(execPreloadAvatarsAsync);


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAvatarLoadFailed); \
	DECLARE_FUNCTION(execOnAvatarDownloaded); \
	DECLARE_FUNCTION(execPreloadAvatarsAsync);


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReadyPlayerMePreloadAction(); \
	friend struct Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics; \
public: \
	DECLARE_CLASS(UReadyPlayerMePreloadAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ReadyPlayerMe"), NO_API) \
	DECLARE_SERIALIZER(UReadyPlayerMePreloadAction)


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUReadyPlayerMePreloadAction(); \
	friend struct Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics; \
public: \
	DECLARE_CLASS(UReadyPlayerMePreloadAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ReadyPlayerMe"), NO_API) \
	DECLARE_SERIALIZER(UReadyPlayerMePreloadAction)


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReadyPlayerMePreloadAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReadyPlayerMePreloadAction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReadyPlayerMePreloadAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReadyPlayerMePreloadAction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReadyPlayerMePreloadAction(UReadyPlayerMePreloadAction&&); \
	NO_API UReadyPlayerMePreloadAction(const UReadyPlayerMePreloadAction&); \
public:


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReadyPlayerMePreloadAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReadyPlayerMePreloadAction(UReadyPlayerMePreloadAction&&); \
	NO_API UReadyPlayerMePreloadAction(const UReadyPlayerMePreloadAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReadyPlayerMePreloadAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReadyPlayerMePreloadAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReadyPlayerMePreloadAction)


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h_37_PROLOG
#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h_40_SPARSE_DATA \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h_40_RPC_WRAPPERS \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h_40_INCLASS \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h_40_SPARSE_DATA \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h_40_INCLASS_NO_PURE_DECLS \
	FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> READYPLAYERME_API UClass* StaticClass<class UReadyPlayerMePreloadAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
