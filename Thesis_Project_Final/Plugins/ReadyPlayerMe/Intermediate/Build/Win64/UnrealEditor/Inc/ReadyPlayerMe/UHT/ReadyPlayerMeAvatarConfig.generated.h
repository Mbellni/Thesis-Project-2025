// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ReadyPlayerMeAvatarConfig.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef READYPLAYERME_ReadyPlayerMeAvatarConfig_generated_h
#error "ReadyPlayerMeAvatarConfig.generated.h already included, missing '#pragma once' in ReadyPlayerMeAvatarConfig.h"
#endif
#define READYPLAYERME_ReadyPlayerMeAvatarConfig_generated_h

#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarConfig_h_59_SPARSE_DATA
#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarConfig_h_59_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarConfig_h_59_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarConfig_h_59_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarConfig_h_59_ACCESSORS
#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarConfig_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReadyPlayerMeAvatarConfig(); \
	friend struct Z_Construct_UClass_UReadyPlayerMeAvatarConfig_Statics; \
public: \
	DECLARE_CLASS(UReadyPlayerMeAvatarConfig, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ReadyPlayerMe"), NO_API) \
	DECLARE_SERIALIZER(UReadyPlayerMeAvatarConfig)


#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarConfig_h_59_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReadyPlayerMeAvatarConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReadyPlayerMeAvatarConfig(UReadyPlayerMeAvatarConfig&&); \
	NO_API UReadyPlayerMeAvatarConfig(const UReadyPlayerMeAvatarConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReadyPlayerMeAvatarConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReadyPlayerMeAvatarConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReadyPlayerMeAvatarConfig) \
	NO_API virtual ~UReadyPlayerMeAvatarConfig();


#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarConfig_h_56_PROLOG
#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarConfig_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarConfig_h_59_SPARSE_DATA \
	FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarConfig_h_59_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarConfig_h_59_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarConfig_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarConfig_h_59_ACCESSORS \
	FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarConfig_h_59_INCLASS_NO_PURE_DECLS \
	FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarConfig_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> READYPLAYERME_API UClass* StaticClass<class UReadyPlayerMeAvatarConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarConfig_h


#define FOREACH_ENUM_EAVATARPOSE(op) \
	op(EAvatarPose::APose) \
	op(EAvatarPose::TPose) 

enum class EAvatarPose : uint8;
template<> struct TIsUEnumClass<EAvatarPose> { enum { Value = true }; };
template<> READYPLAYERME_API UEnum* StaticEnum<EAvatarPose>();

#define FOREACH_ENUM_EAVATARLOD(op) \
	op(EAvatarLod::High) \
	op(EAvatarLod::Medium) \
	op(EAvatarLod::Low) 

enum class EAvatarLod : uint8;
template<> struct TIsUEnumClass<EAvatarLod> { enum { Value = true }; };
template<> READYPLAYERME_API UEnum* StaticEnum<EAvatarLod>();

#define FOREACH_ENUM_EAVATARTEXTUREATLAS(op) \
	op(EAvatarTextureAtlas::None) \
	op(EAvatarTextureAtlas::High) \
	op(EAvatarTextureAtlas::Medium) \
	op(EAvatarTextureAtlas::Low) 

enum class EAvatarTextureAtlas : uint8;
template<> struct TIsUEnumClass<EAvatarTextureAtlas> { enum { Value = true }; };
template<> READYPLAYERME_API UEnum* StaticEnum<EAvatarTextureAtlas>();

#define FOREACH_ENUM_EAVATARTEXTURESIZELIMIT(op) \
	op(EAvatarTextureSizeLimit::Limit_1024) \
	op(EAvatarTextureSizeLimit::Limit_512) \
	op(EAvatarTextureSizeLimit::Limit_256) 

enum class EAvatarTextureSizeLimit : uint8;
template<> struct TIsUEnumClass<EAvatarTextureSizeLimit> { enum { Value = true }; };
template<> READYPLAYERME_API UEnum* StaticEnum<EAvatarTextureSizeLimit>();

#define FOREACH_ENUM_EAVATARTEXTURECHANNEL(op) \
	op(EAvatarTextureChannel::BaseColor) \
	op(EAvatarTextureChannel::Normal) \
	op(EAvatarTextureChannel::MetallicRoughness) \
	op(EAvatarTextureChannel::Emissive) \
	op(EAvatarTextureChannel::Occlusion) 

enum class EAvatarTextureChannel : uint8;
template<> struct TIsUEnumClass<EAvatarTextureChannel> { enum { Value = true }; };
template<> READYPLAYERME_API UEnum* StaticEnum<EAvatarTextureChannel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
