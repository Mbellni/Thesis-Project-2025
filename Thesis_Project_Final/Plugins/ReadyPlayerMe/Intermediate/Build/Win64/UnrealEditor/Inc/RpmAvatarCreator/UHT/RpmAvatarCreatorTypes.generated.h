// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RpmAvatarCreatorTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMesh;
class UTexture2D;
enum class ERpmAvatarCreatorError : uint8;
struct FRpmAvatarTemplate;
struct FRpmUserAvatar;
#ifdef RPMAVATARCREATOR_RpmAvatarCreatorTypes_generated_h
#error "RpmAvatarCreatorTypes.generated.h already included, missing '#pragma once' in RpmAvatarCreatorTypes.h"
#endif
#define RPMAVATARCREATOR_RpmAvatarCreatorTypes_generated_h

#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorTypes_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRpmUserData_Statics; \
	RPMAVATARCREATOR_API static class UScriptStruct* StaticStruct();


template<> RPMAVATARCREATOR_API UScriptStruct* StaticStruct<struct FRpmUserData>();

#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorTypes_h_82_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRpmColorPalette_Statics; \
	RPMAVATARCREATOR_API static class UScriptStruct* StaticStruct();


template<> RPMAVATARCREATOR_API UScriptStruct* StaticStruct<struct FRpmColorPalette>();

#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorTypes_h_99_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics; \
	RPMAVATARCREATOR_API static class UScriptStruct* StaticStruct();


template<> RPMAVATARCREATOR_API UScriptStruct* StaticStruct<struct FRpmPartnerAsset>();

#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorTypes_h_141_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics; \
	RPMAVATARCREATOR_API static class UScriptStruct* StaticStruct();


template<> RPMAVATARCREATOR_API UScriptStruct* StaticStruct<struct FRpmAvatarProperties>();

#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorTypes_h_174_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRpmAvatarTemplate_Statics; \
	RPMAVATARCREATOR_API static class UScriptStruct* StaticStruct();


template<> RPMAVATARCREATOR_API UScriptStruct* StaticStruct<struct FRpmAvatarTemplate>();

#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorTypes_h_194_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRpmUserAvatar_Statics; \
	RPMAVATARCREATOR_API static class UScriptStruct* StaticStruct();


template<> RPMAVATARCREATOR_API UScriptStruct* StaticStruct<struct FRpmUserAvatar>();

#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorTypes_h_224_DELEGATE \
RPMAVATARCREATOR_API void FAvatarCreatorFailed_DelegateWrapper(const FScriptDelegate& AvatarCreatorFailed, ERpmAvatarCreatorError Error);


#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorTypes_h_226_DELEGATE \
RPMAVATARCREATOR_API void FAuthenticationCompleted_DelegateWrapper(const FScriptDelegate& AuthenticationCompleted);


#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorTypes_h_228_DELEGATE \
RPMAVATARCREATOR_API void FAvatarSaveCompleted_DelegateWrapper(const FScriptDelegate& AvatarSaveCompleted, const FString& Url);


#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorTypes_h_230_DELEGATE \
RPMAVATARCREATOR_API void FAvatarDeleteCompleted_DelegateWrapper(const FScriptDelegate& AvatarDeleteCompleted);


#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorTypes_h_232_DELEGATE \
RPMAVATARCREATOR_API void FAvatarEditorReady_DelegateWrapper(const FScriptDelegate& AvatarEditorReady);


#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorTypes_h_234_DELEGATE \
RPMAVATARCREATOR_API void FUpdateLockedAssetsCompleted_DelegateWrapper(const FScriptDelegate& UpdateLockedAssetsCompleted);


#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorTypes_h_236_DELEGATE \
RPMAVATARCREATOR_API void FUserAvatarsDownloadCompleted_DelegateWrapper(const FScriptDelegate& UserAvatarsDownloadCompleted, TArray<FRpmUserAvatar> const& UserAvatars);


#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorTypes_h_238_DELEGATE \
RPMAVATARCREATOR_API void FImageDownloadCompleted_DelegateWrapper(const FScriptDelegate& ImageDownloadCompleted, UTexture2D* Image, const FString& Url);


#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorTypes_h_240_DELEGATE \
RPMAVATARCREATOR_API void FAvatarTemplatesDownloadCompleted_DelegateWrapper(const FScriptDelegate& AvatarTemplatesDownloadCompleted, TArray<FRpmAvatarTemplate> const& AvatarTemplates);


#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorTypes_h_244_DELEGATE \
RPMAVATARCREATOR_API void FPreviewDownloadCompleted_DelegateWrapper(const FScriptDelegate& PreviewDownloadCompleted, const USkeletalMesh* SkeletalMesh);


#define FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorTypes_h_246_DELEGATE \
RPMAVATARCREATOR_API void FSessionExpired_DelegateWrapper(const FScriptDelegate& SessionExpired);


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorTypes_h


#define FOREACH_ENUM_ERPMPARTNERASSETTYPE(op) \
	op(ERpmPartnerAssetType::BeardStyle) \
	op(ERpmPartnerAssetType::EyeColor) \
	op(ERpmPartnerAssetType::EyeShape) \
	op(ERpmPartnerAssetType::EyebrowStyle) \
	op(ERpmPartnerAssetType::FaceMask) \
	op(ERpmPartnerAssetType::FaceShape) \
	op(ERpmPartnerAssetType::Glasses) \
	op(ERpmPartnerAssetType::HairStyle) \
	op(ERpmPartnerAssetType::Headwear) \
	op(ERpmPartnerAssetType::Facewear) \
	op(ERpmPartnerAssetType::LipShape) \
	op(ERpmPartnerAssetType::NoseShape) \
	op(ERpmPartnerAssetType::Outfit) \
	op(ERpmPartnerAssetType::Top) \
	op(ERpmPartnerAssetType::Bottom) \
	op(ERpmPartnerAssetType::Footwear) \
	op(ERpmPartnerAssetType::Shirt) 

enum class ERpmPartnerAssetType : uint8;
template<> struct TIsUEnumClass<ERpmPartnerAssetType> { enum { Value = true }; };
template<> RPMAVATARCREATOR_API UEnum* StaticEnum<ERpmPartnerAssetType>();

#define FOREACH_ENUM_ERPMPARTNERASSETCOLOR(op) \
	op(ERpmPartnerAssetColor::SkinColor) \
	op(ERpmPartnerAssetColor::HairColor) \
	op(ERpmPartnerAssetColor::BeardColor) \
	op(ERpmPartnerAssetColor::EyebrowColor) 

enum class ERpmPartnerAssetColor : uint8;
template<> struct TIsUEnumClass<ERpmPartnerAssetColor> { enum { Value = true }; };
template<> RPMAVATARCREATOR_API UEnum* StaticEnum<ERpmPartnerAssetColor>();

#define FOREACH_ENUM_ERPMAVATARCREATORERROR(op) \
	op(ERpmAvatarCreatorError::None) \
	op(ERpmAvatarCreatorError::AuthenticationFailure) \
	op(ERpmAvatarCreatorError::SendActivationCodeFailure) \
	op(ERpmAvatarCreatorError::ConfirmActivationCodeFailure) \
	op(ERpmAvatarCreatorError::AssetDownloadFailure) \
	op(ERpmAvatarCreatorError::ColorDownloadFailure) \
	op(ERpmAvatarCreatorError::AvatarTemplateFailure) \
	op(ERpmAvatarCreatorError::UserAvatarDownloadFailure) \
	op(ERpmAvatarCreatorError::MetadataDownloadFailure) \
	op(ERpmAvatarCreatorError::AvatarCreateFailure) \
	op(ERpmAvatarCreatorError::AvatarPreviewFailure) \
	op(ERpmAvatarCreatorError::AvatarSaveFailure) \
	op(ERpmAvatarCreatorError::AvatarDeleteFailure) 

enum class ERpmAvatarCreatorError : uint8;
template<> struct TIsUEnumClass<ERpmAvatarCreatorError> { enum { Value = true }; };
template<> RPMAVATARCREATOR_API UEnum* StaticEnum<ERpmAvatarCreatorError>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
