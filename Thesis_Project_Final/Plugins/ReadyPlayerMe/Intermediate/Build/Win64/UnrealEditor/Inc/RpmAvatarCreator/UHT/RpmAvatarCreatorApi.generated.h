// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RpmAvatarCreatorApi.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ERpmAvatarCreatorError : uint8;
enum class ERpmPartnerAssetColor : uint8;
enum class ERpmPartnerAssetType : uint8;
struct FRpmAvatarTemplate;
struct FRpmColorPalette;
struct FRpmPartnerAsset;
struct FRpmUserData;
#ifdef RPMAVATARCREATOR_RpmAvatarCreatorApi_generated_h
#error "RpmAvatarCreatorApi.generated.h already included, missing '#pragma once' in RpmAvatarCreatorApi.h"
#endif
#define RPMAVATARCREATOR_RpmAvatarCreatorApi_generated_h

#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorApi_h_13_SPARSE_DATA
#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorApi_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorApi_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorApi_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExecuteEditorReadyCallback); \
	DECLARE_FUNCTION(execPropertiesDownloaded); \
	DECLARE_FUNCTION(execGetAvatarTemplates); \
	DECLARE_FUNCTION(execGetColorPalettes); \
	DECLARE_FUNCTION(execGetFilteredPartnerAssets); \
	DECLARE_FUNCTION(execDownloadImage); \
	DECLARE_FUNCTION(execUpdateLockedAssets); \
	DECLARE_FUNCTION(execDeleteAvatar); \
	DECLARE_FUNCTION(execSaveAvatar); \
	DECLARE_FUNCTION(execDownloadUserAvatars); \
	DECLARE_FUNCTION(execDownloadAvatarTemplates); \
	DECLARE_FUNCTION(execPrecompileAvatar); \
	DECLARE_FUNCTION(execUpdateAvatarColor); \
	DECLARE_FUNCTION(execUpdateAvatarAsset); \
	DECLARE_FUNCTION(execPrepareEditor); \
	DECLARE_FUNCTION(execLogOut); \
	DECLARE_FUNCTION(execConfirmActivationCode); \
	DECLARE_FUNCTION(execAuthStart); \
	DECLARE_FUNCTION(execAuthAnonymous); \
	DECLARE_FUNCTION(execGetUserData); \
	DECLARE_FUNCTION(execSetSessionExpiredDelegate); \
	DECLARE_FUNCTION(execSetPreviewDownloadedDelegate); \
	DECLARE_FUNCTION(execInitialize);


#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorApi_h_13_ACCESSORS
#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorApi_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURpmAvatarCreatorApi(); \
	friend struct Z_Construct_UClass_URpmAvatarCreatorApi_Statics; \
public: \
	DECLARE_CLASS(URpmAvatarCreatorApi, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RpmAvatarCreator"), NO_API) \
	DECLARE_SERIALIZER(URpmAvatarCreatorApi)


#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorApi_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URpmAvatarCreatorApi(URpmAvatarCreatorApi&&); \
	NO_API URpmAvatarCreatorApi(const URpmAvatarCreatorApi&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URpmAvatarCreatorApi); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URpmAvatarCreatorApi); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URpmAvatarCreatorApi) \
	NO_API virtual ~URpmAvatarCreatorApi();


#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorApi_h_10_PROLOG
#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorApi_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorApi_h_13_SPARSE_DATA \
	FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorApi_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorApi_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorApi_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorApi_h_13_ACCESSORS \
	FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorApi_h_13_INCLASS_NO_PURE_DECLS \
	FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorApi_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPMAVATARCREATOR_API UClass* StaticClass<class URpmAvatarCreatorApi>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorApi_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
