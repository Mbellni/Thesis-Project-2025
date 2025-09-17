// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ReadyPlayerMeMemoryCache.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UReadyPlayerMeAvatarConfig;
class USkeletalMesh;
struct FAvatarMemoryCacheData;
struct FAvatarMetadata;
#ifdef READYPLAYERME_ReadyPlayerMeMemoryCache_generated_h
#error "ReadyPlayerMeMemoryCache.generated.h already included, missing '#pragma once' in ReadyPlayerMeMemoryCache.h"
#endif
#define READYPLAYERME_ReadyPlayerMeMemoryCache_generated_h

#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics; \
	READYPLAYERME_API static class UScriptStruct* StaticStruct();


template<> READYPLAYERME_API UScriptStruct* StaticStruct<struct FAvatarMemoryCacheData>();

#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_34_SPARSE_DATA
#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_34_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_34_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearAvatars); \
	DECLARE_FUNCTION(execClearAvatar); \
	DECLARE_FUNCTION(execAddAvatar); \
	DECLARE_FUNCTION(execGetAvatarCacheData);


#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_34_ACCESSORS
#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReadyPlayerMeMemoryCache(); \
	friend struct Z_Construct_UClass_UReadyPlayerMeMemoryCache_Statics; \
public: \
	DECLARE_CLASS(UReadyPlayerMeMemoryCache, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ReadyPlayerMe"), NO_API) \
	DECLARE_SERIALIZER(UReadyPlayerMeMemoryCache)


#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReadyPlayerMeMemoryCache(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReadyPlayerMeMemoryCache(UReadyPlayerMeMemoryCache&&); \
	NO_API UReadyPlayerMeMemoryCache(const UReadyPlayerMeMemoryCache&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReadyPlayerMeMemoryCache); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReadyPlayerMeMemoryCache); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReadyPlayerMeMemoryCache) \
	NO_API virtual ~UReadyPlayerMeMemoryCache();


#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_31_PROLOG
#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_34_SPARSE_DATA \
	FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_34_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_34_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_34_ACCESSORS \
	FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_34_INCLASS_NO_PURE_DECLS \
	FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> READYPLAYERME_API UClass* StaticClass<class UReadyPlayerMeMemoryCache>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
