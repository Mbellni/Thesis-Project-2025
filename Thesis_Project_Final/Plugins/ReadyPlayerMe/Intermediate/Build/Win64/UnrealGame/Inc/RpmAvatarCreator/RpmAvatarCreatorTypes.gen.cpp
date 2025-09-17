// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RpmAvatarCreator/Public/RpmAvatarCreatorTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRpmAvatarCreatorTypes() {}
// Cross Module References
	RPMAVATARCREATOR_API UScriptStruct* Z_Construct_UScriptStruct_FRpmUserData();
	UPackage* Z_Construct_UPackage__Script_RpmAvatarCreator();
	RPMAVATARCREATOR_API UEnum* Z_Construct_UEnum_RpmAvatarCreator_ERpmPartnerAssetType();
	RPMAVATARCREATOR_API UEnum* Z_Construct_UEnum_RpmAvatarCreator_ERpmPartnerAssetColor();
	RPMAVATARCREATOR_API UScriptStruct* Z_Construct_UScriptStruct_FRpmColorPalette();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	RPMAVATARCREATOR_API UScriptStruct* Z_Construct_UScriptStruct_FRpmPartnerAsset();
	READYPLAYERME_API UEnum* Z_Construct_UEnum_ReadyPlayerMe_EAvatarGender();
	RPMAVATARCREATOR_API UScriptStruct* Z_Construct_UScriptStruct_FRpmAvatarProperties();
	READYPLAYERME_API UEnum* Z_Construct_UEnum_ReadyPlayerMe_EAvatarBodyType();
	RPMAVATARCREATOR_API UScriptStruct* Z_Construct_UScriptStruct_FRpmAvatarTemplate();
	RPMAVATARCREATOR_API UScriptStruct* Z_Construct_UScriptStruct_FRpmUserAvatar();
	RPMAVATARCREATOR_API UEnum* Z_Construct_UEnum_RpmAvatarCreator_ERpmAvatarCreatorError();
	RPMAVATARCREATOR_API UFunction* Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarCreatorFailed__DelegateSignature();
	RPMAVATARCREATOR_API UFunction* Z_Construct_UDelegateFunction_RpmAvatarCreator_AuthenticationCompleted__DelegateSignature();
	RPMAVATARCREATOR_API UFunction* Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarSaveCompleted__DelegateSignature();
	RPMAVATARCREATOR_API UFunction* Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarDeleteCompleted__DelegateSignature();
	RPMAVATARCREATOR_API UFunction* Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarEditorReady__DelegateSignature();
	RPMAVATARCREATOR_API UFunction* Z_Construct_UDelegateFunction_RpmAvatarCreator_UpdateLockedAssetsCompleted__DelegateSignature();
	RPMAVATARCREATOR_API UFunction* Z_Construct_UDelegateFunction_RpmAvatarCreator_UserAvatarsDownloadCompleted__DelegateSignature();
	RPMAVATARCREATOR_API UFunction* Z_Construct_UDelegateFunction_RpmAvatarCreator_ImageDownloadCompleted__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	RPMAVATARCREATOR_API UFunction* Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarTemplatesDownloadCompleted__DelegateSignature();
	RPMAVATARCREATOR_API UFunction* Z_Construct_UDelegateFunction_RpmAvatarCreator_PreviewDownloadCompleted__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	RPMAVATARCREATOR_API UFunction* Z_Construct_UDelegateFunction_RpmAvatarCreator_SessionExpired__DelegateSignature();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RpmUserData;
class UScriptStruct* FRpmUserData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RpmUserData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RpmUserData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRpmUserData, Z_Construct_UPackage__Script_RpmAvatarCreator(), TEXT("RpmUserData"));
	}
	return Z_Registration_Info_UScriptStruct_RpmUserData.OuterSingleton;
}
template<> RPMAVATARCREATOR_API UScriptStruct* StaticStruct<FRpmUserData>()
{
	return FRpmUserData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRpmUserData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAuthenticated_MetaData[];
#endif
		static void NewProp_bIsAuthenticated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAuthenticated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsExistingUser_MetaData[];
#endif
		static void NewProp_bIsExistingUser_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsExistingUser;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Token_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Token;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RefreshToken_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RefreshToken;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Subdomain_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Subdomain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AppId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Email_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Email;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRpmUserData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRpmUserData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRpmUserData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRpmUserData_Statics::NewProp_bIsAuthenticated_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRpmUserData_Statics::NewProp_bIsAuthenticated_SetBit(void* Obj)
	{
		((FRpmUserData*)Obj)->bIsAuthenticated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRpmUserData_Statics::NewProp_bIsAuthenticated = { "bIsAuthenticated", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRpmUserData), &Z_Construct_UScriptStruct_FRpmUserData_Statics::NewProp_bIsAuthenticated_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRpmUserData_Statics::NewProp_bIsAuthenticated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmUserData_Statics::NewProp_bIsAuthenticated_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRpmUserData_Statics::NewProp_bIsExistingUser_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRpmUserData_Statics::NewProp_bIsExistingUser_SetBit(void* Obj)
	{
		((FRpmUserData*)Obj)->bIsExistingUser = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRpmUserData_Statics::NewProp_bIsExistingUser = { "bIsExistingUser", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRpmUserData), &Z_Construct_UScriptStruct_FRpmUserData_Statics::NewProp_bIsExistingUser_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRpmUserData_Statics::NewProp_bIsExistingUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmUserData_Statics::NewProp_bIsExistingUser_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRpmUserData_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRpmUserData_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRpmUserData, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FRpmUserData_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmUserData_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRpmUserData_Statics::NewProp_Token_MetaData[] = {
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRpmUserData_Statics::NewProp_Token = { "Token", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRpmUserData, Token), METADATA_PARAMS(Z_Construct_UScriptStruct_FRpmUserData_Statics::NewProp_Token_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmUserData_Statics::NewProp_Token_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRpmUserData_Statics::NewProp_RefreshToken_MetaData[] = {
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRpmUserData_Statics::NewProp_RefreshToken = { "RefreshToken", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRpmUserData, RefreshToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FRpmUserData_Statics::NewProp_RefreshToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmUserData_Statics::NewProp_RefreshToken_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRpmUserData_Statics::NewProp_Subdomain_MetaData[] = {
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRpmUserData_Statics::NewProp_Subdomain = { "Subdomain", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRpmUserData, Subdomain), METADATA_PARAMS(Z_Construct_UScriptStruct_FRpmUserData_Statics::NewProp_Subdomain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmUserData_Statics::NewProp_Subdomain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRpmUserData_Statics::NewProp_AppId_MetaData[] = {
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRpmUserData_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRpmUserData, AppId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRpmUserData_Statics::NewProp_AppId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmUserData_Statics::NewProp_AppId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRpmUserData_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRpmUserData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRpmUserData, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FRpmUserData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmUserData_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRpmUserData_Statics::NewProp_Email_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRpmUserData_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRpmUserData, Email), METADATA_PARAMS(Z_Construct_UScriptStruct_FRpmUserData_Statics::NewProp_Email_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmUserData_Statics::NewProp_Email_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRpmUserData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpmUserData_Statics::NewProp_bIsAuthenticated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpmUserData_Statics::NewProp_bIsExistingUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpmUserData_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpmUserData_Statics::NewProp_Token,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpmUserData_Statics::NewProp_RefreshToken,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpmUserData_Statics::NewProp_Subdomain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpmUserData_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpmUserData_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpmUserData_Statics::NewProp_Email,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRpmUserData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RpmAvatarCreator,
		nullptr,
		&NewStructOps,
		"RpmUserData",
		sizeof(FRpmUserData),
		alignof(FRpmUserData),
		Z_Construct_UScriptStruct_FRpmUserData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmUserData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRpmUserData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmUserData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRpmUserData()
	{
		if (!Z_Registration_Info_UScriptStruct_RpmUserData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RpmUserData.InnerSingleton, Z_Construct_UScriptStruct_FRpmUserData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RpmUserData.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERpmPartnerAssetType;
	static UEnum* ERpmPartnerAssetType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERpmPartnerAssetType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERpmPartnerAssetType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RpmAvatarCreator_ERpmPartnerAssetType, Z_Construct_UPackage__Script_RpmAvatarCreator(), TEXT("ERpmPartnerAssetType"));
		}
		return Z_Registration_Info_UEnum_ERpmPartnerAssetType.OuterSingleton;
	}
	template<> RPMAVATARCREATOR_API UEnum* StaticEnum<ERpmPartnerAssetType>()
	{
		return ERpmPartnerAssetType_StaticEnum();
	}
	struct Z_Construct_UEnum_RpmAvatarCreator_ERpmPartnerAssetType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RpmAvatarCreator_ERpmPartnerAssetType_Statics::Enumerators[] = {
		{ "ERpmPartnerAssetType::BeardStyle", (int64)ERpmPartnerAssetType::BeardStyle },
		{ "ERpmPartnerAssetType::EyeColor", (int64)ERpmPartnerAssetType::EyeColor },
		{ "ERpmPartnerAssetType::EyeShape", (int64)ERpmPartnerAssetType::EyeShape },
		{ "ERpmPartnerAssetType::EyebrowStyle", (int64)ERpmPartnerAssetType::EyebrowStyle },
		{ "ERpmPartnerAssetType::FaceMask", (int64)ERpmPartnerAssetType::FaceMask },
		{ "ERpmPartnerAssetType::FaceShape", (int64)ERpmPartnerAssetType::FaceShape },
		{ "ERpmPartnerAssetType::Glasses", (int64)ERpmPartnerAssetType::Glasses },
		{ "ERpmPartnerAssetType::HairStyle", (int64)ERpmPartnerAssetType::HairStyle },
		{ "ERpmPartnerAssetType::Headwear", (int64)ERpmPartnerAssetType::Headwear },
		{ "ERpmPartnerAssetType::Facewear", (int64)ERpmPartnerAssetType::Facewear },
		{ "ERpmPartnerAssetType::LipShape", (int64)ERpmPartnerAssetType::LipShape },
		{ "ERpmPartnerAssetType::NoseShape", (int64)ERpmPartnerAssetType::NoseShape },
		{ "ERpmPartnerAssetType::Outfit", (int64)ERpmPartnerAssetType::Outfit },
		{ "ERpmPartnerAssetType::Top", (int64)ERpmPartnerAssetType::Top },
		{ "ERpmPartnerAssetType::Bottom", (int64)ERpmPartnerAssetType::Bottom },
		{ "ERpmPartnerAssetType::Footwear", (int64)ERpmPartnerAssetType::Footwear },
		{ "ERpmPartnerAssetType::Shirt", (int64)ERpmPartnerAssetType::Shirt },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RpmAvatarCreator_ERpmPartnerAssetType_Statics::Enum_MetaDataParams[] = {
		{ "BeardStyle.Name", "ERpmPartnerAssetType::BeardStyle" },
		{ "BlueprintType", "true" },
		{ "Bottom.Name", "ERpmPartnerAssetType::Bottom" },
		{ "EyebrowStyle.Name", "ERpmPartnerAssetType::EyebrowStyle" },
		{ "EyeColor.Name", "ERpmPartnerAssetType::EyeColor" },
		{ "EyeShape.Name", "ERpmPartnerAssetType::EyeShape" },
		{ "FaceMask.Name", "ERpmPartnerAssetType::FaceMask" },
		{ "FaceShape.Name", "ERpmPartnerAssetType::FaceShape" },
		{ "Facewear.Name", "ERpmPartnerAssetType::Facewear" },
		{ "Footwear.Name", "ERpmPartnerAssetType::Footwear" },
		{ "Glasses.Name", "ERpmPartnerAssetType::Glasses" },
		{ "HairStyle.Name", "ERpmPartnerAssetType::HairStyle" },
		{ "Headwear.Name", "ERpmPartnerAssetType::Headwear" },
		{ "LipShape.Name", "ERpmPartnerAssetType::LipShape" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorTypes.h" },
		{ "NoseShape.Name", "ERpmPartnerAssetType::NoseShape" },
		{ "Outfit.Name", "ERpmPartnerAssetType::Outfit" },
		{ "Shirt.Name", "ERpmPartnerAssetType::Shirt" },
		{ "Top.Name", "ERpmPartnerAssetType::Top" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RpmAvatarCreator_ERpmPartnerAssetType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RpmAvatarCreator,
		nullptr,
		"ERpmPartnerAssetType",
		"ERpmPartnerAssetType",
		Z_Construct_UEnum_RpmAvatarCreator_ERpmPartnerAssetType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RpmAvatarCreator_ERpmPartnerAssetType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RpmAvatarCreator_ERpmPartnerAssetType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RpmAvatarCreator_ERpmPartnerAssetType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RpmAvatarCreator_ERpmPartnerAssetType()
	{
		if (!Z_Registration_Info_UEnum_ERpmPartnerAssetType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERpmPartnerAssetType.InnerSingleton, Z_Construct_UEnum_RpmAvatarCreator_ERpmPartnerAssetType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERpmPartnerAssetType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERpmPartnerAssetColor;
	static UEnum* ERpmPartnerAssetColor_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERpmPartnerAssetColor.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERpmPartnerAssetColor.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RpmAvatarCreator_ERpmPartnerAssetColor, Z_Construct_UPackage__Script_RpmAvatarCreator(), TEXT("ERpmPartnerAssetColor"));
		}
		return Z_Registration_Info_UEnum_ERpmPartnerAssetColor.OuterSingleton;
	}
	template<> RPMAVATARCREATOR_API UEnum* StaticEnum<ERpmPartnerAssetColor>()
	{
		return ERpmPartnerAssetColor_StaticEnum();
	}
	struct Z_Construct_UEnum_RpmAvatarCreator_ERpmPartnerAssetColor_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RpmAvatarCreator_ERpmPartnerAssetColor_Statics::Enumerators[] = {
		{ "ERpmPartnerAssetColor::SkinColor", (int64)ERpmPartnerAssetColor::SkinColor },
		{ "ERpmPartnerAssetColor::HairColor", (int64)ERpmPartnerAssetColor::HairColor },
		{ "ERpmPartnerAssetColor::BeardColor", (int64)ERpmPartnerAssetColor::BeardColor },
		{ "ERpmPartnerAssetColor::EyebrowColor", (int64)ERpmPartnerAssetColor::EyebrowColor },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RpmAvatarCreator_ERpmPartnerAssetColor_Statics::Enum_MetaDataParams[] = {
		{ "BeardColor.Name", "ERpmPartnerAssetColor::BeardColor" },
		{ "BlueprintType", "true" },
		{ "EyebrowColor.Name", "ERpmPartnerAssetColor::EyebrowColor" },
		{ "HairColor.Name", "ERpmPartnerAssetColor::HairColor" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorTypes.h" },
		{ "SkinColor.Name", "ERpmPartnerAssetColor::SkinColor" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RpmAvatarCreator_ERpmPartnerAssetColor_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RpmAvatarCreator,
		nullptr,
		"ERpmPartnerAssetColor",
		"ERpmPartnerAssetColor",
		Z_Construct_UEnum_RpmAvatarCreator_ERpmPartnerAssetColor_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RpmAvatarCreator_ERpmPartnerAssetColor_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RpmAvatarCreator_ERpmPartnerAssetColor_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RpmAvatarCreator_ERpmPartnerAssetColor_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RpmAvatarCreator_ERpmPartnerAssetColor()
	{
		if (!Z_Registration_Info_UEnum_ERpmPartnerAssetColor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERpmPartnerAssetColor.InnerSingleton, Z_Construct_UEnum_RpmAvatarCreator_ERpmPartnerAssetColor_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERpmPartnerAssetColor.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RpmColorPalette;
class UScriptStruct* FRpmColorPalette::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RpmColorPalette.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RpmColorPalette.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRpmColorPalette, Z_Construct_UPackage__Script_RpmAvatarCreator(), TEXT("RpmColorPalette"));
	}
	return Z_Registration_Info_UScriptStruct_RpmColorPalette.OuterSingleton;
}
template<> RPMAVATARCREATOR_API UScriptStruct* StaticStruct<FRpmColorPalette>()
{
	return FRpmColorPalette::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRpmColorPalette_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_AssetColor_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetColor_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AssetColor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RgbColors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RgbColors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RgbColors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRpmColorPalette_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRpmColorPalette_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRpmColorPalette>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRpmColorPalette_Statics::NewProp_AssetColor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRpmColorPalette_Statics::NewProp_AssetColor_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRpmColorPalette_Statics::NewProp_AssetColor = { "AssetColor", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRpmColorPalette, AssetColor), Z_Construct_UEnum_RpmAvatarCreator_ERpmPartnerAssetColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRpmColorPalette_Statics::NewProp_AssetColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmColorPalette_Statics::NewProp_AssetColor_MetaData)) }; // 717790046
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRpmColorPalette_Statics::NewProp_RgbColors_Inner = { "RgbColors", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRpmColorPalette_Statics::NewProp_RgbColors_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRpmColorPalette_Statics::NewProp_RgbColors = { "RgbColors", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRpmColorPalette, RgbColors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRpmColorPalette_Statics::NewProp_RgbColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmColorPalette_Statics::NewProp_RgbColors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRpmColorPalette_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpmColorPalette_Statics::NewProp_AssetColor_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpmColorPalette_Statics::NewProp_AssetColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpmColorPalette_Statics::NewProp_RgbColors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpmColorPalette_Statics::NewProp_RgbColors,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRpmColorPalette_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RpmAvatarCreator,
		nullptr,
		&NewStructOps,
		"RpmColorPalette",
		sizeof(FRpmColorPalette),
		alignof(FRpmColorPalette),
		Z_Construct_UScriptStruct_FRpmColorPalette_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmColorPalette_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRpmColorPalette_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmColorPalette_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRpmColorPalette()
	{
		if (!Z_Registration_Info_UScriptStruct_RpmColorPalette.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RpmColorPalette.InnerSingleton, Z_Construct_UScriptStruct_FRpmColorPalette_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RpmColorPalette.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RpmPartnerAsset;
class UScriptStruct* FRpmPartnerAsset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RpmPartnerAsset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RpmPartnerAsset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRpmPartnerAsset, Z_Construct_UPackage__Script_RpmAvatarCreator(), TEXT("RpmPartnerAsset"));
	}
	return Z_Registration_Info_UScriptStruct_RpmPartnerAsset.OuterSingleton;
}
template<> RPMAVATARCREATOR_API UScriptStruct* StaticStruct<FRpmPartnerAsset>()
{
	return FRpmPartnerAsset::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AssetType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AssetType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Gender_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gender_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Gender;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconUrl_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_IconUrl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BadgeUrl_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BadgeUrl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLocked_MetaData[];
#endif
		static void NewProp_bIsLocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLocked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Price_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Price;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCustomizable_MetaData[];
#endif
		static void NewProp_bIsCustomizable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCustomizable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRpmPartnerAsset>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000030005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRpmPartnerAsset, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000030005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRpmPartnerAsset, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewProp_AssetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewProp_AssetType_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewProp_AssetType = { "AssetType", nullptr, (EPropertyFlags)0x0010000000030005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRpmPartnerAsset, AssetType), Z_Construct_UEnum_RpmAvatarCreator_ERpmPartnerAssetType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewProp_AssetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewProp_AssetType_MetaData)) }; // 294232875
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewProp_Gender_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewProp_Gender_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010000000030005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRpmPartnerAsset, Gender), Z_Construct_UEnum_ReadyPlayerMe_EAvatarGender, METADATA_PARAMS(Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewProp_Gender_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewProp_Gender_MetaData)) }; // 1993969138
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewProp_IconUrl_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewProp_IconUrl = { "IconUrl", nullptr, (EPropertyFlags)0x0010000000030005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRpmPartnerAsset, IconUrl), METADATA_PARAMS(Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewProp_IconUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewProp_IconUrl_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewProp_BadgeUrl_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewProp_BadgeUrl = { "BadgeUrl", nullptr, (EPropertyFlags)0x0010000000030005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRpmPartnerAsset, BadgeUrl), METADATA_PARAMS(Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewProp_BadgeUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewProp_BadgeUrl_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewProp_bIsLocked_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewProp_bIsLocked_SetBit(void* Obj)
	{
		((FRpmPartnerAsset*)Obj)->bIsLocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewProp_bIsLocked = { "bIsLocked", nullptr, (EPropertyFlags)0x0010000000030005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRpmPartnerAsset), &Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewProp_bIsLocked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewProp_bIsLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewProp_bIsLocked_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewProp_Price_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewProp_Price = { "Price", nullptr, (EPropertyFlags)0x0010000000030005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRpmPartnerAsset, Price), METADATA_PARAMS(Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewProp_Price_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewProp_Price_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewProp_bIsCustomizable_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewProp_bIsCustomizable_SetBit(void* Obj)
	{
		((FRpmPartnerAsset*)Obj)->bIsCustomizable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewProp_bIsCustomizable = { "bIsCustomizable", nullptr, (EPropertyFlags)0x0010000000030005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRpmPartnerAsset), &Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewProp_bIsCustomizable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewProp_bIsCustomizable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewProp_bIsCustomizable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewProp_AssetType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewProp_AssetType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewProp_Gender_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewProp_Gender,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewProp_IconUrl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewProp_BadgeUrl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewProp_bIsLocked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewProp_Price,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewProp_bIsCustomizable,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RpmAvatarCreator,
		nullptr,
		&NewStructOps,
		"RpmPartnerAsset",
		sizeof(FRpmPartnerAsset),
		alignof(FRpmPartnerAsset),
		Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRpmPartnerAsset()
	{
		if (!Z_Registration_Info_UScriptStruct_RpmPartnerAsset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RpmPartnerAsset.InnerSingleton, Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RpmPartnerAsset.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RpmAvatarProperties;
class UScriptStruct* FRpmAvatarProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RpmAvatarProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RpmAvatarProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRpmAvatarProperties, Z_Construct_UPackage__Script_RpmAvatarCreator(), TEXT("RpmAvatarProperties"));
	}
	return Z_Registration_Info_UScriptStruct_RpmAvatarProperties.OuterSingleton;
}
template<> RPMAVATARCREATOR_API UScriptStruct* StaticStruct<FRpmAvatarProperties>()
{
	return FRpmAvatarProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Partner_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Partner;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Gender_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gender_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Gender;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BodyType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BodyType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Colors_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Colors_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Colors_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Colors_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Colors;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Assets_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Assets_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Assets_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Assets_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Assets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Base64Image_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Base64Image;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRpmAvatarProperties>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRpmAvatarProperties, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::NewProp_Partner_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::NewProp_Partner = { "Partner", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRpmAvatarProperties, Partner), METADATA_PARAMS(Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::NewProp_Partner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::NewProp_Partner_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::NewProp_Gender_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::NewProp_Gender_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRpmAvatarProperties, Gender), Z_Construct_UEnum_ReadyPlayerMe_EAvatarGender, METADATA_PARAMS(Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::NewProp_Gender_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::NewProp_Gender_MetaData)) }; // 1993969138
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::NewProp_BodyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::NewProp_BodyType_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::NewProp_BodyType = { "BodyType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRpmAvatarProperties, BodyType), Z_Construct_UEnum_ReadyPlayerMe_EAvatarBodyType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::NewProp_BodyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::NewProp_BodyType_MetaData)) }; // 3166209864
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::NewProp_Colors_ValueProp = { "Colors", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::NewProp_Colors_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::NewProp_Colors_Key_KeyProp = { "Colors_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_RpmAvatarCreator_ERpmPartnerAssetColor, METADATA_PARAMS(nullptr, 0) }; // 717790046
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::NewProp_Colors_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorTypes.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::NewProp_Colors = { "Colors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRpmAvatarProperties, Colors), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::NewProp_Colors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::NewProp_Colors_MetaData)) }; // 717790046
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::NewProp_Assets_ValueProp = { "Assets", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::NewProp_Assets_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::NewProp_Assets_Key_KeyProp = { "Assets_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_RpmAvatarCreator_ERpmPartnerAssetType, METADATA_PARAMS(nullptr, 0) }; // 294232875
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::NewProp_Assets_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorTypes.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::NewProp_Assets = { "Assets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRpmAvatarProperties, Assets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::NewProp_Assets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::NewProp_Assets_MetaData)) }; // 294232875
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::NewProp_Base64Image_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::NewProp_Base64Image = { "Base64Image", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRpmAvatarProperties, Base64Image), METADATA_PARAMS(Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::NewProp_Base64Image_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::NewProp_Base64Image_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::NewProp_Partner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::NewProp_Gender_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::NewProp_Gender,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::NewProp_BodyType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::NewProp_BodyType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::NewProp_Colors_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::NewProp_Colors_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::NewProp_Colors_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::NewProp_Colors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::NewProp_Assets_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::NewProp_Assets_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::NewProp_Assets_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::NewProp_Assets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::NewProp_Base64Image,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RpmAvatarCreator,
		nullptr,
		&NewStructOps,
		"RpmAvatarProperties",
		sizeof(FRpmAvatarProperties),
		alignof(FRpmAvatarProperties),
		Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRpmAvatarProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_RpmAvatarProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RpmAvatarProperties.InnerSingleton, Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RpmAvatarProperties.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RpmAvatarTemplate;
class UScriptStruct* FRpmAvatarTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RpmAvatarTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RpmAvatarTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRpmAvatarTemplate, Z_Construct_UPackage__Script_RpmAvatarCreator(), TEXT("RpmAvatarTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_RpmAvatarTemplate.OuterSingleton;
}
template<> RPMAVATARCREATOR_API UScriptStruct* StaticStruct<FRpmAvatarTemplate>()
{
	return FRpmAvatarTemplate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRpmAvatarTemplate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageUrl_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ImageUrl;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Gender_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gender_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Gender;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRpmAvatarTemplate_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRpmAvatarTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRpmAvatarTemplate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRpmAvatarTemplate_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRpmAvatarTemplate_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRpmAvatarTemplate, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FRpmAvatarTemplate_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmAvatarTemplate_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRpmAvatarTemplate_Statics::NewProp_ImageUrl_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRpmAvatarTemplate_Statics::NewProp_ImageUrl = { "ImageUrl", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRpmAvatarTemplate, ImageUrl), METADATA_PARAMS(Z_Construct_UScriptStruct_FRpmAvatarTemplate_Statics::NewProp_ImageUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmAvatarTemplate_Statics::NewProp_ImageUrl_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRpmAvatarTemplate_Statics::NewProp_Gender_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRpmAvatarTemplate_Statics::NewProp_Gender_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRpmAvatarTemplate_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRpmAvatarTemplate, Gender), Z_Construct_UEnum_ReadyPlayerMe_EAvatarGender, METADATA_PARAMS(Z_Construct_UScriptStruct_FRpmAvatarTemplate_Statics::NewProp_Gender_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmAvatarTemplate_Statics::NewProp_Gender_MetaData)) }; // 1993969138
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRpmAvatarTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpmAvatarTemplate_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpmAvatarTemplate_Statics::NewProp_ImageUrl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpmAvatarTemplate_Statics::NewProp_Gender_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpmAvatarTemplate_Statics::NewProp_Gender,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRpmAvatarTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RpmAvatarCreator,
		nullptr,
		&NewStructOps,
		"RpmAvatarTemplate",
		sizeof(FRpmAvatarTemplate),
		alignof(FRpmAvatarTemplate),
		Z_Construct_UScriptStruct_FRpmAvatarTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmAvatarTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRpmAvatarTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmAvatarTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRpmAvatarTemplate()
	{
		if (!Z_Registration_Info_UScriptStruct_RpmAvatarTemplate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RpmAvatarTemplate.InnerSingleton, Z_Construct_UScriptStruct_FRpmAvatarTemplate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RpmAvatarTemplate.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RpmUserAvatar;
class UScriptStruct* FRpmUserAvatar::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RpmUserAvatar.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RpmUserAvatar.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRpmUserAvatar, Z_Construct_UPackage__Script_RpmAvatarCreator(), TEXT("RpmUserAvatar"));
	}
	return Z_Registration_Info_UScriptStruct_RpmUserAvatar.OuterSingleton;
}
template<> RPMAVATARCREATOR_API UScriptStruct* StaticStruct<FRpmUserAvatar>()
{
	return FRpmUserAvatar::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRpmUserAvatar_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Partner_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Partner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageUrl_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ImageUrl;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRpmUserAvatar_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRpmUserAvatar_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRpmUserAvatar>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRpmUserAvatar_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRpmUserAvatar_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRpmUserAvatar, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FRpmUserAvatar_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmUserAvatar_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRpmUserAvatar_Statics::NewProp_Partner_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRpmUserAvatar_Statics::NewProp_Partner = { "Partner", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRpmUserAvatar, Partner), METADATA_PARAMS(Z_Construct_UScriptStruct_FRpmUserAvatar_Statics::NewProp_Partner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmUserAvatar_Statics::NewProp_Partner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRpmUserAvatar_Statics::NewProp_ImageUrl_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRpmUserAvatar_Statics::NewProp_ImageUrl = { "ImageUrl", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRpmUserAvatar, ImageUrl), METADATA_PARAMS(Z_Construct_UScriptStruct_FRpmUserAvatar_Statics::NewProp_ImageUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmUserAvatar_Statics::NewProp_ImageUrl_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRpmUserAvatar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpmUserAvatar_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpmUserAvatar_Statics::NewProp_Partner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpmUserAvatar_Statics::NewProp_ImageUrl,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRpmUserAvatar_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RpmAvatarCreator,
		nullptr,
		&NewStructOps,
		"RpmUserAvatar",
		sizeof(FRpmUserAvatar),
		alignof(FRpmUserAvatar),
		Z_Construct_UScriptStruct_FRpmUserAvatar_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmUserAvatar_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRpmUserAvatar_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpmUserAvatar_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRpmUserAvatar()
	{
		if (!Z_Registration_Info_UScriptStruct_RpmUserAvatar.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RpmUserAvatar.InnerSingleton, Z_Construct_UScriptStruct_FRpmUserAvatar_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RpmUserAvatar.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERpmAvatarCreatorError;
	static UEnum* ERpmAvatarCreatorError_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERpmAvatarCreatorError.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERpmAvatarCreatorError.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RpmAvatarCreator_ERpmAvatarCreatorError, Z_Construct_UPackage__Script_RpmAvatarCreator(), TEXT("ERpmAvatarCreatorError"));
		}
		return Z_Registration_Info_UEnum_ERpmAvatarCreatorError.OuterSingleton;
	}
	template<> RPMAVATARCREATOR_API UEnum* StaticEnum<ERpmAvatarCreatorError>()
	{
		return ERpmAvatarCreatorError_StaticEnum();
	}
	struct Z_Construct_UEnum_RpmAvatarCreator_ERpmAvatarCreatorError_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RpmAvatarCreator_ERpmAvatarCreatorError_Statics::Enumerators[] = {
		{ "ERpmAvatarCreatorError::None", (int64)ERpmAvatarCreatorError::None },
		{ "ERpmAvatarCreatorError::AuthenticationFailure", (int64)ERpmAvatarCreatorError::AuthenticationFailure },
		{ "ERpmAvatarCreatorError::SendActivationCodeFailure", (int64)ERpmAvatarCreatorError::SendActivationCodeFailure },
		{ "ERpmAvatarCreatorError::ConfirmActivationCodeFailure", (int64)ERpmAvatarCreatorError::ConfirmActivationCodeFailure },
		{ "ERpmAvatarCreatorError::AssetDownloadFailure", (int64)ERpmAvatarCreatorError::AssetDownloadFailure },
		{ "ERpmAvatarCreatorError::ColorDownloadFailure", (int64)ERpmAvatarCreatorError::ColorDownloadFailure },
		{ "ERpmAvatarCreatorError::AvatarTemplateFailure", (int64)ERpmAvatarCreatorError::AvatarTemplateFailure },
		{ "ERpmAvatarCreatorError::UserAvatarDownloadFailure", (int64)ERpmAvatarCreatorError::UserAvatarDownloadFailure },
		{ "ERpmAvatarCreatorError::MetadataDownloadFailure", (int64)ERpmAvatarCreatorError::MetadataDownloadFailure },
		{ "ERpmAvatarCreatorError::AvatarCreateFailure", (int64)ERpmAvatarCreatorError::AvatarCreateFailure },
		{ "ERpmAvatarCreatorError::AvatarPreviewFailure", (int64)ERpmAvatarCreatorError::AvatarPreviewFailure },
		{ "ERpmAvatarCreatorError::AvatarSaveFailure", (int64)ERpmAvatarCreatorError::AvatarSaveFailure },
		{ "ERpmAvatarCreatorError::AvatarDeleteFailure", (int64)ERpmAvatarCreatorError::AvatarDeleteFailure },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RpmAvatarCreator_ERpmAvatarCreatorError_Statics::Enum_MetaDataParams[] = {
		{ "AssetDownloadFailure.Name", "ERpmAvatarCreatorError::AssetDownloadFailure" },
		{ "AuthenticationFailure.Name", "ERpmAvatarCreatorError::AuthenticationFailure" },
		{ "AvatarCreateFailure.Name", "ERpmAvatarCreatorError::AvatarCreateFailure" },
		{ "AvatarDeleteFailure.Name", "ERpmAvatarCreatorError::AvatarDeleteFailure" },
		{ "AvatarPreviewFailure.Name", "ERpmAvatarCreatorError::AvatarPreviewFailure" },
		{ "AvatarSaveFailure.Name", "ERpmAvatarCreatorError::AvatarSaveFailure" },
		{ "AvatarTemplateFailure.Name", "ERpmAvatarCreatorError::AvatarTemplateFailure" },
		{ "BlueprintType", "true" },
		{ "ColorDownloadFailure.Name", "ERpmAvatarCreatorError::ColorDownloadFailure" },
		{ "ConfirmActivationCodeFailure.Name", "ERpmAvatarCreatorError::ConfirmActivationCodeFailure" },
		{ "MetadataDownloadFailure.Name", "ERpmAvatarCreatorError::MetadataDownloadFailure" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorTypes.h" },
		{ "None.Name", "ERpmAvatarCreatorError::None" },
		{ "SendActivationCodeFailure.Name", "ERpmAvatarCreatorError::SendActivationCodeFailure" },
		{ "UserAvatarDownloadFailure.Name", "ERpmAvatarCreatorError::UserAvatarDownloadFailure" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RpmAvatarCreator_ERpmAvatarCreatorError_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RpmAvatarCreator,
		nullptr,
		"ERpmAvatarCreatorError",
		"ERpmAvatarCreatorError",
		Z_Construct_UEnum_RpmAvatarCreator_ERpmAvatarCreatorError_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RpmAvatarCreator_ERpmAvatarCreatorError_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RpmAvatarCreator_ERpmAvatarCreatorError_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RpmAvatarCreator_ERpmAvatarCreatorError_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RpmAvatarCreator_ERpmAvatarCreatorError()
	{
		if (!Z_Registration_Info_UEnum_ERpmAvatarCreatorError.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERpmAvatarCreatorError.InnerSingleton, Z_Construct_UEnum_RpmAvatarCreator_ERpmAvatarCreatorError_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERpmAvatarCreatorError.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarCreatorFailed__DelegateSignature_Statics
	{
		struct _Script_RpmAvatarCreator_eventAvatarCreatorFailed_Parms
		{
			ERpmAvatarCreatorError Error;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Error_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Error;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarCreatorFailed__DelegateSignature_Statics::NewProp_Error_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarCreatorFailed__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_RpmAvatarCreator_eventAvatarCreatorFailed_Parms, Error), Z_Construct_UEnum_RpmAvatarCreator_ERpmAvatarCreatorError, METADATA_PARAMS(nullptr, 0) }; // 1015991342
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarCreatorFailed__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarCreatorFailed__DelegateSignature_Statics::NewProp_Error_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarCreatorFailed__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarCreatorFailed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarCreatorFailed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RpmAvatarCreator, nullptr, "AvatarCreatorFailed__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarCreatorFailed__DelegateSignature_Statics::_Script_RpmAvatarCreator_eventAvatarCreatorFailed_Parms), Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarCreatorFailed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarCreatorFailed__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarCreatorFailed__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarCreatorFailed__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarCreatorFailed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarCreatorFailed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_RpmAvatarCreator_AuthenticationCompleted__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RpmAvatarCreator_AuthenticationCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RpmAvatarCreator_AuthenticationCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RpmAvatarCreator, nullptr, "AuthenticationCompleted__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RpmAvatarCreator_AuthenticationCompleted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RpmAvatarCreator_AuthenticationCompleted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RpmAvatarCreator_AuthenticationCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RpmAvatarCreator_AuthenticationCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarSaveCompleted__DelegateSignature_Statics
	{
		struct _Script_RpmAvatarCreator_eventAvatarSaveCompleted_Parms
		{
			FString Url;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarSaveCompleted__DelegateSignature_Statics::NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarSaveCompleted__DelegateSignature_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_RpmAvatarCreator_eventAvatarSaveCompleted_Parms, Url), METADATA_PARAMS(Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarSaveCompleted__DelegateSignature_Statics::NewProp_Url_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarSaveCompleted__DelegateSignature_Statics::NewProp_Url_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarSaveCompleted__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarSaveCompleted__DelegateSignature_Statics::NewProp_Url,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarSaveCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarSaveCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RpmAvatarCreator, nullptr, "AvatarSaveCompleted__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarSaveCompleted__DelegateSignature_Statics::_Script_RpmAvatarCreator_eventAvatarSaveCompleted_Parms), Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarSaveCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarSaveCompleted__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarSaveCompleted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarSaveCompleted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarSaveCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarSaveCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarDeleteCompleted__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarDeleteCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarDeleteCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RpmAvatarCreator, nullptr, "AvatarDeleteCompleted__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarDeleteCompleted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarDeleteCompleted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarDeleteCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarDeleteCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarEditorReady__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarEditorReady__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarEditorReady__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RpmAvatarCreator, nullptr, "AvatarEditorReady__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarEditorReady__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarEditorReady__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarEditorReady__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarEditorReady__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_RpmAvatarCreator_UpdateLockedAssetsCompleted__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RpmAvatarCreator_UpdateLockedAssetsCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RpmAvatarCreator_UpdateLockedAssetsCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RpmAvatarCreator, nullptr, "UpdateLockedAssetsCompleted__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RpmAvatarCreator_UpdateLockedAssetsCompleted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RpmAvatarCreator_UpdateLockedAssetsCompleted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RpmAvatarCreator_UpdateLockedAssetsCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RpmAvatarCreator_UpdateLockedAssetsCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_RpmAvatarCreator_UserAvatarsDownloadCompleted__DelegateSignature_Statics
	{
		struct _Script_RpmAvatarCreator_eventUserAvatarsDownloadCompleted_Parms
		{
			TArray<FRpmUserAvatar> UserAvatars;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserAvatars_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserAvatars_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UserAvatars;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_RpmAvatarCreator_UserAvatarsDownloadCompleted__DelegateSignature_Statics::NewProp_UserAvatars_Inner = { "UserAvatars", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRpmUserAvatar, METADATA_PARAMS(nullptr, 0) }; // 560267408
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RpmAvatarCreator_UserAvatarsDownloadCompleted__DelegateSignature_Statics::NewProp_UserAvatars_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_RpmAvatarCreator_UserAvatarsDownloadCompleted__DelegateSignature_Statics::NewProp_UserAvatars = { "UserAvatars", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_RpmAvatarCreator_eventUserAvatarsDownloadCompleted_Parms, UserAvatars), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_RpmAvatarCreator_UserAvatarsDownloadCompleted__DelegateSignature_Statics::NewProp_UserAvatars_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RpmAvatarCreator_UserAvatarsDownloadCompleted__DelegateSignature_Statics::NewProp_UserAvatars_MetaData)) }; // 560267408
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RpmAvatarCreator_UserAvatarsDownloadCompleted__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RpmAvatarCreator_UserAvatarsDownloadCompleted__DelegateSignature_Statics::NewProp_UserAvatars_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RpmAvatarCreator_UserAvatarsDownloadCompleted__DelegateSignature_Statics::NewProp_UserAvatars,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RpmAvatarCreator_UserAvatarsDownloadCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RpmAvatarCreator_UserAvatarsDownloadCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RpmAvatarCreator, nullptr, "UserAvatarsDownloadCompleted__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_RpmAvatarCreator_UserAvatarsDownloadCompleted__DelegateSignature_Statics::_Script_RpmAvatarCreator_eventUserAvatarsDownloadCompleted_Parms), Z_Construct_UDelegateFunction_RpmAvatarCreator_UserAvatarsDownloadCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RpmAvatarCreator_UserAvatarsDownloadCompleted__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RpmAvatarCreator_UserAvatarsDownloadCompleted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RpmAvatarCreator_UserAvatarsDownloadCompleted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RpmAvatarCreator_UserAvatarsDownloadCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RpmAvatarCreator_UserAvatarsDownloadCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_RpmAvatarCreator_ImageDownloadCompleted__DelegateSignature_Statics
	{
		struct _Script_RpmAvatarCreator_eventImageDownloadCompleted_Parms
		{
			UTexture2D* Image;
			FString Url;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Image;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_RpmAvatarCreator_ImageDownloadCompleted__DelegateSignature_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_RpmAvatarCreator_eventImageDownloadCompleted_Parms, Image), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RpmAvatarCreator_ImageDownloadCompleted__DelegateSignature_Statics::NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_RpmAvatarCreator_ImageDownloadCompleted__DelegateSignature_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_RpmAvatarCreator_eventImageDownloadCompleted_Parms, Url), METADATA_PARAMS(Z_Construct_UDelegateFunction_RpmAvatarCreator_ImageDownloadCompleted__DelegateSignature_Statics::NewProp_Url_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RpmAvatarCreator_ImageDownloadCompleted__DelegateSignature_Statics::NewProp_Url_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RpmAvatarCreator_ImageDownloadCompleted__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RpmAvatarCreator_ImageDownloadCompleted__DelegateSignature_Statics::NewProp_Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RpmAvatarCreator_ImageDownloadCompleted__DelegateSignature_Statics::NewProp_Url,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RpmAvatarCreator_ImageDownloadCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RpmAvatarCreator_ImageDownloadCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RpmAvatarCreator, nullptr, "ImageDownloadCompleted__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_RpmAvatarCreator_ImageDownloadCompleted__DelegateSignature_Statics::_Script_RpmAvatarCreator_eventImageDownloadCompleted_Parms), Z_Construct_UDelegateFunction_RpmAvatarCreator_ImageDownloadCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RpmAvatarCreator_ImageDownloadCompleted__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RpmAvatarCreator_ImageDownloadCompleted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RpmAvatarCreator_ImageDownloadCompleted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RpmAvatarCreator_ImageDownloadCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RpmAvatarCreator_ImageDownloadCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarTemplatesDownloadCompleted__DelegateSignature_Statics
	{
		struct _Script_RpmAvatarCreator_eventAvatarTemplatesDownloadCompleted_Parms
		{
			TArray<FRpmAvatarTemplate> AvatarTemplates;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AvatarTemplates_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvatarTemplates_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AvatarTemplates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarTemplatesDownloadCompleted__DelegateSignature_Statics::NewProp_AvatarTemplates_Inner = { "AvatarTemplates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRpmAvatarTemplate, METADATA_PARAMS(nullptr, 0) }; // 541676217
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarTemplatesDownloadCompleted__DelegateSignature_Statics::NewProp_AvatarTemplates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarTemplatesDownloadCompleted__DelegateSignature_Statics::NewProp_AvatarTemplates = { "AvatarTemplates", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_RpmAvatarCreator_eventAvatarTemplatesDownloadCompleted_Parms, AvatarTemplates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarTemplatesDownloadCompleted__DelegateSignature_Statics::NewProp_AvatarTemplates_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarTemplatesDownloadCompleted__DelegateSignature_Statics::NewProp_AvatarTemplates_MetaData)) }; // 541676217
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarTemplatesDownloadCompleted__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarTemplatesDownloadCompleted__DelegateSignature_Statics::NewProp_AvatarTemplates_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarTemplatesDownloadCompleted__DelegateSignature_Statics::NewProp_AvatarTemplates,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarTemplatesDownloadCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarTemplatesDownloadCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RpmAvatarCreator, nullptr, "AvatarTemplatesDownloadCompleted__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarTemplatesDownloadCompleted__DelegateSignature_Statics::_Script_RpmAvatarCreator_eventAvatarTemplatesDownloadCompleted_Parms), Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarTemplatesDownloadCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarTemplatesDownloadCompleted__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarTemplatesDownloadCompleted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarTemplatesDownloadCompleted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarTemplatesDownloadCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarTemplatesDownloadCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_RpmAvatarCreator_PreviewDownloadCompleted__DelegateSignature_Statics
	{
		struct _Script_RpmAvatarCreator_eventPreviewDownloadCompleted_Parms
		{
			const USkeletalMesh* SkeletalMesh;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RpmAvatarCreator_PreviewDownloadCompleted__DelegateSignature_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_RpmAvatarCreator_PreviewDownloadCompleted__DelegateSignature_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_RpmAvatarCreator_eventPreviewDownloadCompleted_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_RpmAvatarCreator_PreviewDownloadCompleted__DelegateSignature_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RpmAvatarCreator_PreviewDownloadCompleted__DelegateSignature_Statics::NewProp_SkeletalMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RpmAvatarCreator_PreviewDownloadCompleted__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RpmAvatarCreator_PreviewDownloadCompleted__DelegateSignature_Statics::NewProp_SkeletalMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RpmAvatarCreator_PreviewDownloadCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RpmAvatarCreator_PreviewDownloadCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RpmAvatarCreator, nullptr, "PreviewDownloadCompleted__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_RpmAvatarCreator_PreviewDownloadCompleted__DelegateSignature_Statics::_Script_RpmAvatarCreator_eventPreviewDownloadCompleted_Parms), Z_Construct_UDelegateFunction_RpmAvatarCreator_PreviewDownloadCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RpmAvatarCreator_PreviewDownloadCompleted__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RpmAvatarCreator_PreviewDownloadCompleted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RpmAvatarCreator_PreviewDownloadCompleted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RpmAvatarCreator_PreviewDownloadCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RpmAvatarCreator_PreviewDownloadCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_RpmAvatarCreator_SessionExpired__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RpmAvatarCreator_SessionExpired__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RpmAvatarCreator_SessionExpired__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RpmAvatarCreator, nullptr, "SessionExpired__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RpmAvatarCreator_SessionExpired__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RpmAvatarCreator_SessionExpired__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RpmAvatarCreator_SessionExpired__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RpmAvatarCreator_SessionExpired__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorTypes_h_Statics::EnumInfo[] = {
		{ ERpmPartnerAssetType_StaticEnum, TEXT("ERpmPartnerAssetType"), &Z_Registration_Info_UEnum_ERpmPartnerAssetType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 294232875U) },
		{ ERpmPartnerAssetColor_StaticEnum, TEXT("ERpmPartnerAssetColor"), &Z_Registration_Info_UEnum_ERpmPartnerAssetColor, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 717790046U) },
		{ ERpmAvatarCreatorError_StaticEnum, TEXT("ERpmAvatarCreatorError"), &Z_Registration_Info_UEnum_ERpmAvatarCreatorError, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1015991342U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorTypes_h_Statics::ScriptStructInfo[] = {
		{ FRpmUserData::StaticStruct, Z_Construct_UScriptStruct_FRpmUserData_Statics::NewStructOps, TEXT("RpmUserData"), &Z_Registration_Info_UScriptStruct_RpmUserData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRpmUserData), 262635238U) },
		{ FRpmColorPalette::StaticStruct, Z_Construct_UScriptStruct_FRpmColorPalette_Statics::NewStructOps, TEXT("RpmColorPalette"), &Z_Registration_Info_UScriptStruct_RpmColorPalette, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRpmColorPalette), 3906301919U) },
		{ FRpmPartnerAsset::StaticStruct, Z_Construct_UScriptStruct_FRpmPartnerAsset_Statics::NewStructOps, TEXT("RpmPartnerAsset"), &Z_Registration_Info_UScriptStruct_RpmPartnerAsset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRpmPartnerAsset), 1108987381U) },
		{ FRpmAvatarProperties::StaticStruct, Z_Construct_UScriptStruct_FRpmAvatarProperties_Statics::NewStructOps, TEXT("RpmAvatarProperties"), &Z_Registration_Info_UScriptStruct_RpmAvatarProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRpmAvatarProperties), 2166798487U) },
		{ FRpmAvatarTemplate::StaticStruct, Z_Construct_UScriptStruct_FRpmAvatarTemplate_Statics::NewStructOps, TEXT("RpmAvatarTemplate"), &Z_Registration_Info_UScriptStruct_RpmAvatarTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRpmAvatarTemplate), 541676217U) },
		{ FRpmUserAvatar::StaticStruct, Z_Construct_UScriptStruct_FRpmUserAvatar_Statics::NewStructOps, TEXT("RpmUserAvatar"), &Z_Registration_Info_UScriptStruct_RpmUserAvatar, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRpmUserAvatar), 560267408U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorTypes_h_4131792838(TEXT("/Script/RpmAvatarCreator"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
