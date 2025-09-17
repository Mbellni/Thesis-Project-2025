// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ERpmAvatarCreatorError : uint8;
struct FRpmUserAvatar;
class UTexture2D;
struct FRpmAvatarTemplate;
class USkeletalMesh;
#ifdef RPMAVATARCREATOR_RpmAvatarCreatorTypes_generated_h
#error "RpmAvatarCreatorTypes.generated.h already included, missing '#pragma once' in RpmAvatarCreatorTypes.h"
#endif
#define RPMAVATARCREATOR_RpmAvatarCreatorTypes_generated_h

#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorTypes_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRpmUserData_Statics; \
	RPMAVATARCREATOR_API static class UScriptStruct* StaticStruct();


template<> RPMAVATARCREATOR_API UScriptStruct* StaticStruct<struct FRpmUserData>();

#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorTypes_h_82_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRpmColorPalette_Statics; \
	RPMAVATARCREATOR_API static class UScriptStruct* StaticStruct();


template<> RPMAVATARCREATOR_API UScriptStruct* StaticStruct<struct FRpmColorPalette>();

#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorTypes_h_99_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics; \
	RPMAVATARCREATOR_API static class UScriptStruct* StaticStruct();


template<> RPMAVATARCREATOR_API UScriptStruct* StaticStruct<struct FRpmPartnerAsset>();

#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorTypes_h_141_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics; \
	RPMAVATARCREATOR_API static class UScriptStruct* StaticStruct();


template<> RPMAVATARCREATOR_API UScriptStruct* StaticStruct<struct FRpmAvatarProperties>();

#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorTypes_h_174_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRpmAvatarTemplate_Statics; \
	RPMAVATARCREATOR_API static class UScriptStruct* StaticStruct();


template<> RPMAVATARCREATOR_API UScriptStruct* StaticStruct<struct FRpmAvatarTemplate>();

#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorTypes_h_194_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRpmUserAvatar_Statics; \
	RPMAVATARCREATOR_API static class UScriptStruct* StaticStruct();


template<> RPMAVATARCREATOR_API UScriptStruct* StaticStruct<struct FRpmUserAvatar>();

#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorTypes_h_224_DELEGATE \
struct _Script_RpmAvatarCreator_eventAvatarCreatorFailed_Parms \
{ \
	ERpmAvatarCreatorError Error; \
}; \
static inline void FAvatarCreatorFailed_DelegateWrapper(const FScriptDelegate& AvatarCreatorFailed, ERpmAvatarCreatorError Error) \
{ \
	_Script_RpmAvatarCreator_eventAvatarCreatorFailed_Parms Parms; \
	Parms.Error=Error; \
	AvatarCreatorFailed.ProcessDelegate<UObject>(&Parms); \
}


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorTypes_h_226_DELEGATE \
static inline void FAuthenticationCompleted_DelegateWrapper(const FScriptDelegate& AuthenticationCompleted) \
{ \
	AuthenticationCompleted.ProcessDelegate<UObject>(NULL); \
}


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorTypes_h_228_DELEGATE \
struct _Script_RpmAvatarCreator_eventAvatarSaveCompleted_Parms \
{ \
	FString Url; \
}; \
static inline void FAvatarSaveCompleted_DelegateWrapper(const FScriptDelegate& AvatarSaveCompleted, const FString& Url) \
{ \
	_Script_RpmAvatarCreator_eventAvatarSaveCompleted_Parms Parms; \
	Parms.Url=Url; \
	AvatarSaveCompleted.ProcessDelegate<UObject>(&Parms); \
}


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorTypes_h_230_DELEGATE \
static inline void FAvatarDeleteCompleted_DelegateWrapper(const FScriptDelegate& AvatarDeleteCompleted) \
{ \
	AvatarDeleteCompleted.ProcessDelegate<UObject>(NULL); \
}


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorTypes_h_232_DELEGATE \
static inline void FAvatarEditorReady_DelegateWrapper(const FScriptDelegate& AvatarEditorReady) \
{ \
	AvatarEditorReady.ProcessDelegate<UObject>(NULL); \
}


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorTypes_h_234_DELEGATE \
static inline void FUpdateLockedAssetsCompleted_DelegateWrapper(const FScriptDelegate& UpdateLockedAssetsCompleted) \
{ \
	UpdateLockedAssetsCompleted.ProcessDelegate<UObject>(NULL); \
}


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorTypes_h_236_DELEGATE \
struct _Script_RpmAvatarCreator_eventUserAvatarsDownloadCompleted_Parms \
{ \
	TArray<FRpmUserAvatar> UserAvatars; \
}; \
static inline void FUserAvatarsDownloadCompleted_DelegateWrapper(const FScriptDelegate& UserAvatarsDownloadCompleted, TArray<FRpmUserAvatar> const& UserAvatars) \
{ \
	_Script_RpmAvatarCreator_eventUserAvatarsDownloadCompleted_Parms Parms; \
	Parms.UserAvatars=UserAvatars; \
	UserAvatarsDownloadCompleted.ProcessDelegate<UObject>(&Parms); \
}


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorTypes_h_238_DELEGATE \
struct _Script_RpmAvatarCreator_eventImageDownloadCompleted_Parms \
{ \
	UTexture2D* Image; \
	FString Url; \
}; \
static inline void FImageDownloadCompleted_DelegateWrapper(const FScriptDelegate& ImageDownloadCompleted, UTexture2D* Image, const FString& Url) \
{ \
	_Script_RpmAvatarCreator_eventImageDownloadCompleted_Parms Parms; \
	Parms.Image=Image; \
	Parms.Url=Url; \
	ImageDownloadCompleted.ProcessDelegate<UObject>(&Parms); \
}


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorTypes_h_240_DELEGATE \
struct _Script_RpmAvatarCreator_eventAvatarTemplatesDownloadCompleted_Parms \
{ \
	TArray<FRpmAvatarTemplate> AvatarTemplates; \
}; \
static inline void FAvatarTemplatesDownloadCompleted_DelegateWrapper(const FScriptDelegate& AvatarTemplatesDownloadCompleted, TArray<FRpmAvatarTemplate> const& AvatarTemplates) \
{ \
	_Script_RpmAvatarCreator_eventAvatarTemplatesDownloadCompleted_Parms Parms; \
	Parms.AvatarTemplates=AvatarTemplates; \
	AvatarTemplatesDownloadCompleted.ProcessDelegate<UObject>(&Parms); \
}


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorTypes_h_244_DELEGATE \
struct _Script_RpmAvatarCreator_eventPreviewDownloadCompleted_Parms \
{ \
	const USkeletalMesh* SkeletalMesh; \
}; \
static inline void FPreviewDownloadCompleted_DelegateWrapper(const FScriptDelegate& PreviewDownloadCompleted, const USkeletalMesh* SkeletalMesh) \
{ \
	_Script_RpmAvatarCreator_eventPreviewDownloadCompleted_Parms Parms; \
	Parms.SkeletalMesh=SkeletalMesh; \
	PreviewDownloadCompleted.ProcessDelegate<UObject>(&Parms); \
}


#define FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorTypes_h_246_DELEGATE \
static inline void FSessionExpired_DelegateWrapper(const FScriptDelegate& SessionExpired) \
{ \
	SessionExpired.ProcessDelegate<UObject>(NULL); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorTypes_h


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
template<> RPMAVATARCREATOR_API UEnum* StaticEnum<ERpmPartnerAssetType>();

#define FOREACH_ENUM_ERPMPARTNERASSETCOLOR(op) \
	op(ERpmPartnerAssetColor::SkinColor) \
	op(ERpmPartnerAssetColor::HairColor) \
	op(ERpmPartnerAssetColor::BeardColor) \
	op(ERpmPartnerAssetColor::EyebrowColor) 

enum class ERpmPartnerAssetColor : uint8;
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
template<> RPMAVATARCREATOR_API UEnum* StaticEnum<ERpmAvatarCreatorError>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
