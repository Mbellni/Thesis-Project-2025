// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ReadyPlayerMePreloadAction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UReadyPlayerMePreloadAction;
class USkeletalMesh;
struct FAvatarMetadata;
struct FAvatarPreloadData;
#ifdef READYPLAYERME_ReadyPlayerMePreloadAction_generated_h
#error "ReadyPlayerMePreloadAction.generated.h already included, missing '#pragma once' in ReadyPlayerMePreloadAction.h"
#endif
#define READYPLAYERME_ReadyPlayerMePreloadAction_generated_h

#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAvatarPreloadData_Statics; \
	READYPLAYERME_API static class UScriptStruct* StaticStruct();


template<> READYPLAYERME_API UScriptStruct* StaticStruct<struct FAvatarPreloadData>();

#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h_32_DELEGATE \
READYPLAYERME_API void FAvatarPreloadCompleted_DelegateWrapper(const FMulticastScriptDelegate& AvatarPreloadCompleted);


#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h_40_SPARSE_DATA
#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h_40_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h_40_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAvatarLoadFailed); \
	DECLARE_FUNCTION(execOnAvatarDownloaded); \
	DECLARE_FUNCTION(execPreloadAvatarsAsync);


#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h_40_ACCESSORS
#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReadyPlayerMePreloadAction(); \
	friend struct Z_Construct_UClass_UReadyPlayerMePreloadAction_Statics; \
public: \
	DECLARE_CLASS(UReadyPlayerMePreloadAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ReadyPlayerMe"), NO_API) \
	DECLARE_SERIALIZER(UReadyPlayerMePreloadAction)


#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReadyPlayerMePreloadAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReadyPlayerMePreloadAction(UReadyPlayerMePreloadAction&&); \
	NO_API UReadyPlayerMePreloadAction(const UReadyPlayerMePreloadAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReadyPlayerMePreloadAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReadyPlayerMePreloadAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReadyPlayerMePreloadAction) \
	NO_API virtual ~UReadyPlayerMePreloadAction();


#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h_37_PROLOG
#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h_40_SPARSE_DATA \
	FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h_40_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h_40_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h_40_ACCESSORS \
	FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h_40_INCLASS_NO_PURE_DECLS \
	FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> READYPLAYERME_API UClass* StaticClass<class UReadyPlayerMePreloadAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMePreloadAction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
