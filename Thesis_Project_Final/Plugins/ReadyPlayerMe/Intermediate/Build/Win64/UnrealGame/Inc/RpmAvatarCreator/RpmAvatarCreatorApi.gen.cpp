// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RpmAvatarCreator/Public/RpmAvatarCreatorApi.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRpmAvatarCreatorApi() {}
// Cross Module References
	RPMAVATARCREATOR_API UClass* Z_Construct_UClass_URpmAvatarCreatorApi_NoRegister();
	RPMAVATARCREATOR_API UClass* Z_Construct_UClass_URpmAvatarCreatorApi();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_RpmAvatarCreator();
	RPMAVATARCREATOR_API UFunction* Z_Construct_UDelegateFunction_RpmAvatarCreator_AuthenticationCompleted__DelegateSignature();
	RPMAVATARCREATOR_API UFunction* Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarCreatorFailed__DelegateSignature();
	RPMAVATARCREATOR_API UFunction* Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarDeleteCompleted__DelegateSignature();
	RPMAVATARCREATOR_API UFunction* Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarTemplatesDownloadCompleted__DelegateSignature();
	RPMAVATARCREATOR_API UFunction* Z_Construct_UDelegateFunction_RpmAvatarCreator_ImageDownloadCompleted__DelegateSignature();
	RPMAVATARCREATOR_API UFunction* Z_Construct_UDelegateFunction_RpmAvatarCreator_UserAvatarsDownloadCompleted__DelegateSignature();
	RPMAVATARCREATOR_API UEnum* Z_Construct_UEnum_RpmAvatarCreator_ERpmAvatarCreatorError();
	RPMAVATARCREATOR_API UScriptStruct* Z_Construct_UScriptStruct_FRpmAvatarTemplate();
	RPMAVATARCREATOR_API UScriptStruct* Z_Construct_UScriptStruct_FRpmColorPalette();
	RPMAVATARCREATOR_API UScriptStruct* Z_Construct_UScriptStruct_FRpmPartnerAsset();
	RPMAVATARCREATOR_API UScriptStruct* Z_Construct_UScriptStruct_FRpmUserData();
	RPMAVATARCREATOR_API UEnum* Z_Construct_UEnum_RpmAvatarCreator_ERpmPartnerAssetType();
	RPMAVATARCREATOR_API UFunction* Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarEditorReady__DelegateSignature();
	RPMAVATARCREATOR_API UFunction* Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarSaveCompleted__DelegateSignature();
	RPMAVATARCREATOR_API UFunction* Z_Construct_UDelegateFunction_RpmAvatarCreator_PreviewDownloadCompleted__DelegateSignature();
	RPMAVATARCREATOR_API UFunction* Z_Construct_UDelegateFunction_RpmAvatarCreator_SessionExpired__DelegateSignature();
	RPMAVATARCREATOR_API UEnum* Z_Construct_UEnum_RpmAvatarCreator_ERpmPartnerAssetColor();
	RPMAVATARCREATOR_API UFunction* Z_Construct_UDelegateFunction_RpmAvatarCreator_UpdateLockedAssetsCompleted__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	RPMAVATARCREATOR_API UScriptStruct* Z_Construct_UScriptStruct_FRpmAvatarProperties();
	READYPLAYERME_API UEnum* Z_Construct_UEnum_ReadyPlayerMe_EAvatarBodyType();
	RPMAVATARCREATOR_API UClass* Z_Construct_UClass_URpmImageDownloader_NoRegister();
	RPMAVATARCREATOR_API UClass* Z_Construct_UClass_URpmAvatarRequestHandler_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(URpmAvatarCreatorApi::execExecuteEditorReadyCallback)
	{
		P_GET_UBOOL(Z_Param_bSuccess);
		P_GET_ENUM(ERpmAvatarCreatorError,Z_Param_Error);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteEditorReadyCallback(Z_Param_bSuccess,ERpmAvatarCreatorError(Z_Param_Error));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URpmAvatarCreatorApi::execPropertiesDownloaded)
	{
		P_GET_UBOOL(Z_Param_bSuccess);
		P_GET_ENUM(ERpmAvatarCreatorError,Z_Param_Error);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PropertiesDownloaded(Z_Param_bSuccess,ERpmAvatarCreatorError(Z_Param_Error));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URpmAvatarCreatorApi::execGetAvatarTemplates)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FRpmAvatarTemplate>*)Z_Param__Result=P_THIS->GetAvatarTemplates();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URpmAvatarCreatorApi::execGetColorPalettes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FRpmColorPalette>*)Z_Param__Result=P_THIS->GetColorPalettes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URpmAvatarCreatorApi::execGetFilteredPartnerAssets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FRpmPartnerAsset>*)Z_Param__Result=P_THIS->GetFilteredPartnerAssets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URpmAvatarCreatorApi::execDownloadImage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Url);
		P_GET_PROPERTY(FIntProperty,Z_Param_Size);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_DownloadCompleted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DownloadImage(Z_Param_Url,Z_Param_Size,FImageDownloadCompleted(Z_Param_Out_DownloadCompleted));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URpmAvatarCreatorApi::execUpdateLockedAssets)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_UpdateLockedAssetsCompleted);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Failed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateLockedAssets(FUpdateLockedAssetsCompleted(Z_Param_Out_UpdateLockedAssetsCompleted),FAvatarCreatorFailed(Z_Param_Out_Failed));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URpmAvatarCreatorApi::execDeleteAvatar)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AvatarId);
		P_GET_UBOOL(Z_Param_bIsDraft);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_AvatarDeleteCompleted);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Failed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteAvatar(Z_Param_AvatarId,Z_Param_bIsDraft,FAvatarDeleteCompleted(Z_Param_Out_AvatarDeleteCompleted),FAvatarCreatorFailed(Z_Param_Out_Failed));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URpmAvatarCreatorApi::execSaveAvatar)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_AvatarSaveCompleted);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Failed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveAvatar(FAvatarSaveCompleted(Z_Param_Out_AvatarSaveCompleted),FAvatarCreatorFailed(Z_Param_Out_Failed));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URpmAvatarCreatorApi::execDownloadUserAvatars)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_DownloadCompleted);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Failed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DownloadUserAvatars(FUserAvatarsDownloadCompleted(Z_Param_Out_DownloadCompleted),FAvatarCreatorFailed(Z_Param_Out_Failed));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URpmAvatarCreatorApi::execDownloadAvatarTemplates)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_DownloadCompleted);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Failed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DownloadAvatarTemplates(FAvatarTemplatesDownloadCompleted(Z_Param_Out_DownloadCompleted),FAvatarCreatorFailed(Z_Param_Out_Failed));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URpmAvatarCreatorApi::execPrecompileAvatar)
	{
		P_GET_ENUM(ERpmPartnerAssetType,Z_Param_AssetType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrecompileAvatar(ERpmPartnerAssetType(Z_Param_AssetType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URpmAvatarCreatorApi::execUpdateAvatarColor)
	{
		P_GET_ENUM(ERpmPartnerAssetColor,Z_Param_AssetColor);
		P_GET_PROPERTY(FIntProperty,Z_Param_ColorIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAvatarColor(ERpmPartnerAssetColor(Z_Param_AssetColor),Z_Param_ColorIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URpmAvatarCreatorApi::execUpdateAvatarAsset)
	{
		P_GET_ENUM(ERpmPartnerAssetType,Z_Param_AssetType);
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAvatarAsset(ERpmPartnerAssetType(Z_Param_AssetType),Z_Param_AssetId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URpmAvatarCreatorApi::execPrepareEditor)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_EditorReady);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Failed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrepareEditor(FAvatarEditorReady(Z_Param_Out_EditorReady),FAvatarCreatorFailed(Z_Param_Out_Failed));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URpmAvatarCreatorApi::execLogOut)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LogOut();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URpmAvatarCreatorApi::execConfirmActivationCode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Code);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Completed);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Failed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConfirmActivationCode(Z_Param_Code,FAuthenticationCompleted(Z_Param_Out_Completed),FAvatarCreatorFailed(Z_Param_Out_Failed));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URpmAvatarCreatorApi::execAuthStart)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Email);
		P_GET_UBOOL(Z_Param_bIsTypeCode);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Completed);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Failed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AuthStart(Z_Param_Email,Z_Param_bIsTypeCode,FAuthenticationCompleted(Z_Param_Out_Completed),FAvatarCreatorFailed(Z_Param_Out_Failed));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URpmAvatarCreatorApi::execAuthAnonymous)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Completed);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Failed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AuthAnonymous(FAuthenticationCompleted(Z_Param_Out_Completed),FAvatarCreatorFailed(Z_Param_Out_Failed));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URpmAvatarCreatorApi::execGetUserData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRpmUserData*)Z_Param__Result=P_THIS->GetUserData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URpmAvatarCreatorApi::execSetSessionExpiredDelegate)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_SessionExpired);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSessionExpiredDelegate(FSessionExpired(Z_Param_Out_SessionExpired));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URpmAvatarCreatorApi::execSetPreviewDownloadedDelegate)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PreviewDownloaded);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPreviewDownloadedDelegate(FPreviewDownloadCompleted(Z_Param_Out_PreviewDownloaded));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URpmAvatarCreatorApi::execInitialize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initialize();
		P_NATIVE_END;
	}
	void URpmAvatarCreatorApi::StaticRegisterNativesURpmAvatarCreatorApi()
	{
		UClass* Class = URpmAvatarCreatorApi::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AuthAnonymous", &URpmAvatarCreatorApi::execAuthAnonymous },
			{ "AuthStart", &URpmAvatarCreatorApi::execAuthStart },
			{ "ConfirmActivationCode", &URpmAvatarCreatorApi::execConfirmActivationCode },
			{ "DeleteAvatar", &URpmAvatarCreatorApi::execDeleteAvatar },
			{ "DownloadAvatarTemplates", &URpmAvatarCreatorApi::execDownloadAvatarTemplates },
			{ "DownloadImage", &URpmAvatarCreatorApi::execDownloadImage },
			{ "DownloadUserAvatars", &URpmAvatarCreatorApi::execDownloadUserAvatars },
			{ "ExecuteEditorReadyCallback", &URpmAvatarCreatorApi::execExecuteEditorReadyCallback },
			{ "GetAvatarTemplates", &URpmAvatarCreatorApi::execGetAvatarTemplates },
			{ "GetColorPalettes", &URpmAvatarCreatorApi::execGetColorPalettes },
			{ "GetFilteredPartnerAssets", &URpmAvatarCreatorApi::execGetFilteredPartnerAssets },
			{ "GetUserData", &URpmAvatarCreatorApi::execGetUserData },
			{ "Initialize", &URpmAvatarCreatorApi::execInitialize },
			{ "LogOut", &URpmAvatarCreatorApi::execLogOut },
			{ "PrecompileAvatar", &URpmAvatarCreatorApi::execPrecompileAvatar },
			{ "PrepareEditor", &URpmAvatarCreatorApi::execPrepareEditor },
			{ "PropertiesDownloaded", &URpmAvatarCreatorApi::execPropertiesDownloaded },
			{ "SaveAvatar", &URpmAvatarCreatorApi::execSaveAvatar },
			{ "SetPreviewDownloadedDelegate", &URpmAvatarCreatorApi::execSetPreviewDownloadedDelegate },
			{ "SetSessionExpiredDelegate", &URpmAvatarCreatorApi::execSetSessionExpiredDelegate },
			{ "UpdateAvatarAsset", &URpmAvatarCreatorApi::execUpdateAvatarAsset },
			{ "UpdateAvatarColor", &URpmAvatarCreatorApi::execUpdateAvatarColor },
			{ "UpdateLockedAssets", &URpmAvatarCreatorApi::execUpdateLockedAssets },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URpmAvatarCreatorApi_AuthAnonymous_Statics
	{
		struct RpmAvatarCreatorApi_eventAuthAnonymous_Parms
		{
			FScriptDelegate Completed;
			FScriptDelegate Failed;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Completed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Failed_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Failed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarCreatorApi_AuthAnonymous_Statics::NewProp_Completed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URpmAvatarCreatorApi_AuthAnonymous_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RpmAvatarCreatorApi_eventAuthAnonymous_Parms, Completed), Z_Construct_UDelegateFunction_RpmAvatarCreator_AuthenticationCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarCreatorApi_AuthAnonymous_Statics::NewProp_Completed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_AuthAnonymous_Statics::NewProp_Completed_MetaData)) }; // 927586863
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarCreatorApi_AuthAnonymous_Statics::NewProp_Failed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URpmAvatarCreatorApi_AuthAnonymous_Statics::NewProp_Failed = { "Failed", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RpmAvatarCreatorApi_eventAuthAnonymous_Parms, Failed), Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarCreatorFailed__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarCreatorApi_AuthAnonymous_Statics::NewProp_Failed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_AuthAnonymous_Statics::NewProp_Failed_MetaData)) }; // 929214670
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarCreatorApi_AuthAnonymous_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorApi_AuthAnonymous_Statics::NewProp_Completed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorApi_AuthAnonymous_Statics::NewProp_Failed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarCreatorApi_AuthAnonymous_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Authorize Anonymous" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorApi.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarCreatorApi_AuthAnonymous_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarCreatorApi, nullptr, "AuthAnonymous", nullptr, nullptr, sizeof(Z_Construct_UFunction_URpmAvatarCreatorApi_AuthAnonymous_Statics::RpmAvatarCreatorApi_eventAuthAnonymous_Parms), Z_Construct_UFunction_URpmAvatarCreatorApi_AuthAnonymous_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_AuthAnonymous_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarCreatorApi_AuthAnonymous_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_AuthAnonymous_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URpmAvatarCreatorApi_AuthAnonymous()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarCreatorApi_AuthAnonymous_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URpmAvatarCreatorApi_AuthStart_Statics
	{
		struct RpmAvatarCreatorApi_eventAuthStart_Parms
		{
			FString Email;
			bool bIsTypeCode;
			FScriptDelegate Completed;
			FScriptDelegate Failed;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Email_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Email;
		static void NewProp_bIsTypeCode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTypeCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Completed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Failed_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Failed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarCreatorApi_AuthStart_Statics::NewProp_Email_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URpmAvatarCreatorApi_AuthStart_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RpmAvatarCreatorApi_eventAuthStart_Parms, Email), METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarCreatorApi_AuthStart_Statics::NewProp_Email_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_AuthStart_Statics::NewProp_Email_MetaData)) };
	void Z_Construct_UFunction_URpmAvatarCreatorApi_AuthStart_Statics::NewProp_bIsTypeCode_SetBit(void* Obj)
	{
		((RpmAvatarCreatorApi_eventAuthStart_Parms*)Obj)->bIsTypeCode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URpmAvatarCreatorApi_AuthStart_Statics::NewProp_bIsTypeCode = { "bIsTypeCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RpmAvatarCreatorApi_eventAuthStart_Parms), &Z_Construct_UFunction_URpmAvatarCreatorApi_AuthStart_Statics::NewProp_bIsTypeCode_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarCreatorApi_AuthStart_Statics::NewProp_Completed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URpmAvatarCreatorApi_AuthStart_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RpmAvatarCreatorApi_eventAuthStart_Parms, Completed), Z_Construct_UDelegateFunction_RpmAvatarCreator_AuthenticationCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarCreatorApi_AuthStart_Statics::NewProp_Completed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_AuthStart_Statics::NewProp_Completed_MetaData)) }; // 927586863
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarCreatorApi_AuthStart_Statics::NewProp_Failed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URpmAvatarCreatorApi_AuthStart_Statics::NewProp_Failed = { "Failed", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RpmAvatarCreatorApi_eventAuthStart_Parms, Failed), Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarCreatorFailed__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarCreatorApi_AuthStart_Statics::NewProp_Failed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_AuthStart_Statics::NewProp_Failed_MetaData)) }; // 929214670
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarCreatorApi_AuthStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorApi_AuthStart_Statics::NewProp_Email,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorApi_AuthStart_Statics::NewProp_bIsTypeCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorApi_AuthStart_Statics::NewProp_Completed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorApi_AuthStart_Statics::NewProp_Failed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarCreatorApi_AuthStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Authorization Start" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorApi.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarCreatorApi_AuthStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarCreatorApi, nullptr, "AuthStart", nullptr, nullptr, sizeof(Z_Construct_UFunction_URpmAvatarCreatorApi_AuthStart_Statics::RpmAvatarCreatorApi_eventAuthStart_Parms), Z_Construct_UFunction_URpmAvatarCreatorApi_AuthStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_AuthStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarCreatorApi_AuthStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_AuthStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URpmAvatarCreatorApi_AuthStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarCreatorApi_AuthStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URpmAvatarCreatorApi_ConfirmActivationCode_Statics
	{
		struct RpmAvatarCreatorApi_eventConfirmActivationCode_Parms
		{
			FString Code;
			FScriptDelegate Completed;
			FScriptDelegate Failed;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Code;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Completed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Failed_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Failed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarCreatorApi_ConfirmActivationCode_Statics::NewProp_Code_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URpmAvatarCreatorApi_ConfirmActivationCode_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RpmAvatarCreatorApi_eventConfirmActivationCode_Parms, Code), METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarCreatorApi_ConfirmActivationCode_Statics::NewProp_Code_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_ConfirmActivationCode_Statics::NewProp_Code_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarCreatorApi_ConfirmActivationCode_Statics::NewProp_Completed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URpmAvatarCreatorApi_ConfirmActivationCode_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RpmAvatarCreatorApi_eventConfirmActivationCode_Parms, Completed), Z_Construct_UDelegateFunction_RpmAvatarCreator_AuthenticationCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarCreatorApi_ConfirmActivationCode_Statics::NewProp_Completed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_ConfirmActivationCode_Statics::NewProp_Completed_MetaData)) }; // 927586863
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarCreatorApi_ConfirmActivationCode_Statics::NewProp_Failed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URpmAvatarCreatorApi_ConfirmActivationCode_Statics::NewProp_Failed = { "Failed", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RpmAvatarCreatorApi_eventConfirmActivationCode_Parms, Failed), Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarCreatorFailed__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarCreatorApi_ConfirmActivationCode_Statics::NewProp_Failed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_ConfirmActivationCode_Statics::NewProp_Failed_MetaData)) }; // 929214670
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarCreatorApi_ConfirmActivationCode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorApi_ConfirmActivationCode_Statics::NewProp_Code,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorApi_ConfirmActivationCode_Statics::NewProp_Completed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorApi_ConfirmActivationCode_Statics::NewProp_Failed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarCreatorApi_ConfirmActivationCode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Confirm Activation Code" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorApi.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarCreatorApi_ConfirmActivationCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarCreatorApi, nullptr, "ConfirmActivationCode", nullptr, nullptr, sizeof(Z_Construct_UFunction_URpmAvatarCreatorApi_ConfirmActivationCode_Statics::RpmAvatarCreatorApi_eventConfirmActivationCode_Parms), Z_Construct_UFunction_URpmAvatarCreatorApi_ConfirmActivationCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_ConfirmActivationCode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarCreatorApi_ConfirmActivationCode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_ConfirmActivationCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URpmAvatarCreatorApi_ConfirmActivationCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarCreatorApi_ConfirmActivationCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URpmAvatarCreatorApi_DeleteAvatar_Statics
	{
		struct RpmAvatarCreatorApi_eventDeleteAvatar_Parms
		{
			FString AvatarId;
			bool bIsDraft;
			FScriptDelegate AvatarDeleteCompleted;
			FScriptDelegate Failed;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvatarId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AvatarId;
		static void NewProp_bIsDraft_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDraft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvatarDeleteCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_AvatarDeleteCompleted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Failed_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Failed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarCreatorApi_DeleteAvatar_Statics::NewProp_AvatarId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URpmAvatarCreatorApi_DeleteAvatar_Statics::NewProp_AvatarId = { "AvatarId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RpmAvatarCreatorApi_eventDeleteAvatar_Parms, AvatarId), METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarCreatorApi_DeleteAvatar_Statics::NewProp_AvatarId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_DeleteAvatar_Statics::NewProp_AvatarId_MetaData)) };
	void Z_Construct_UFunction_URpmAvatarCreatorApi_DeleteAvatar_Statics::NewProp_bIsDraft_SetBit(void* Obj)
	{
		((RpmAvatarCreatorApi_eventDeleteAvatar_Parms*)Obj)->bIsDraft = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URpmAvatarCreatorApi_DeleteAvatar_Statics::NewProp_bIsDraft = { "bIsDraft", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RpmAvatarCreatorApi_eventDeleteAvatar_Parms), &Z_Construct_UFunction_URpmAvatarCreatorApi_DeleteAvatar_Statics::NewProp_bIsDraft_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarCreatorApi_DeleteAvatar_Statics::NewProp_AvatarDeleteCompleted_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URpmAvatarCreatorApi_DeleteAvatar_Statics::NewProp_AvatarDeleteCompleted = { "AvatarDeleteCompleted", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RpmAvatarCreatorApi_eventDeleteAvatar_Parms, AvatarDeleteCompleted), Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarDeleteCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarCreatorApi_DeleteAvatar_Statics::NewProp_AvatarDeleteCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_DeleteAvatar_Statics::NewProp_AvatarDeleteCompleted_MetaData)) }; // 3056720707
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarCreatorApi_DeleteAvatar_Statics::NewProp_Failed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URpmAvatarCreatorApi_DeleteAvatar_Statics::NewProp_Failed = { "Failed", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RpmAvatarCreatorApi_eventDeleteAvatar_Parms, Failed), Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarCreatorFailed__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarCreatorApi_DeleteAvatar_Statics::NewProp_Failed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_DeleteAvatar_Statics::NewProp_Failed_MetaData)) }; // 929214670
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarCreatorApi_DeleteAvatar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorApi_DeleteAvatar_Statics::NewProp_AvatarId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorApi_DeleteAvatar_Statics::NewProp_bIsDraft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorApi_DeleteAvatar_Statics::NewProp_AvatarDeleteCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorApi_DeleteAvatar_Statics::NewProp_Failed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarCreatorApi_DeleteAvatar_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "AvatarDeleteCompleted,Failed" },
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Delete Avatar" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorApi.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarCreatorApi_DeleteAvatar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarCreatorApi, nullptr, "DeleteAvatar", nullptr, nullptr, sizeof(Z_Construct_UFunction_URpmAvatarCreatorApi_DeleteAvatar_Statics::RpmAvatarCreatorApi_eventDeleteAvatar_Parms), Z_Construct_UFunction_URpmAvatarCreatorApi_DeleteAvatar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_DeleteAvatar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarCreatorApi_DeleteAvatar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_DeleteAvatar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URpmAvatarCreatorApi_DeleteAvatar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarCreatorApi_DeleteAvatar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadAvatarTemplates_Statics
	{
		struct RpmAvatarCreatorApi_eventDownloadAvatarTemplates_Parms
		{
			FScriptDelegate DownloadCompleted;
			FScriptDelegate Failed;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DownloadCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_DownloadCompleted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Failed_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Failed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadAvatarTemplates_Statics::NewProp_DownloadCompleted_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadAvatarTemplates_Statics::NewProp_DownloadCompleted = { "DownloadCompleted", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RpmAvatarCreatorApi_eventDownloadAvatarTemplates_Parms, DownloadCompleted), Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarTemplatesDownloadCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadAvatarTemplates_Statics::NewProp_DownloadCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadAvatarTemplates_Statics::NewProp_DownloadCompleted_MetaData)) }; // 1625871777
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadAvatarTemplates_Statics::NewProp_Failed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadAvatarTemplates_Statics::NewProp_Failed = { "Failed", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RpmAvatarCreatorApi_eventDownloadAvatarTemplates_Parms, Failed), Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarCreatorFailed__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadAvatarTemplates_Statics::NewProp_Failed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadAvatarTemplates_Statics::NewProp_Failed_MetaData)) }; // 929214670
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadAvatarTemplates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadAvatarTemplates_Statics::NewProp_DownloadCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadAvatarTemplates_Statics::NewProp_Failed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadAvatarTemplates_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Download Avatar Templates" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorApi.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadAvatarTemplates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarCreatorApi, nullptr, "DownloadAvatarTemplates", nullptr, nullptr, sizeof(Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadAvatarTemplates_Statics::RpmAvatarCreatorApi_eventDownloadAvatarTemplates_Parms), Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadAvatarTemplates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadAvatarTemplates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadAvatarTemplates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadAvatarTemplates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadAvatarTemplates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadAvatarTemplates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadImage_Statics
	{
		struct RpmAvatarCreatorApi_eventDownloadImage_Parms
		{
			FString Url;
			int32 Size;
			FScriptDelegate DownloadCompleted;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DownloadCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_DownloadCompleted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadImage_Statics::NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadImage_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RpmAvatarCreatorApi_eventDownloadImage_Parms, Url), METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadImage_Statics::NewProp_Url_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadImage_Statics::NewProp_Url_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadImage_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RpmAvatarCreatorApi_eventDownloadImage_Parms, Size), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadImage_Statics::NewProp_DownloadCompleted_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadImage_Statics::NewProp_DownloadCompleted = { "DownloadCompleted", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RpmAvatarCreatorApi_eventDownloadImage_Parms, DownloadCompleted), Z_Construct_UDelegateFunction_RpmAvatarCreator_ImageDownloadCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadImage_Statics::NewProp_DownloadCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadImage_Statics::NewProp_DownloadCompleted_MetaData)) }; // 319334976
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadImage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadImage_Statics::NewProp_Url,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadImage_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadImage_Statics::NewProp_DownloadCompleted,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadImage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Download Image" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorApi.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarCreatorApi, nullptr, "DownloadImage", nullptr, nullptr, sizeof(Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadImage_Statics::RpmAvatarCreatorApi_eventDownloadImage_Parms), Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadUserAvatars_Statics
	{
		struct RpmAvatarCreatorApi_eventDownloadUserAvatars_Parms
		{
			FScriptDelegate DownloadCompleted;
			FScriptDelegate Failed;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DownloadCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_DownloadCompleted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Failed_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Failed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadUserAvatars_Statics::NewProp_DownloadCompleted_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadUserAvatars_Statics::NewProp_DownloadCompleted = { "DownloadCompleted", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RpmAvatarCreatorApi_eventDownloadUserAvatars_Parms, DownloadCompleted), Z_Construct_UDelegateFunction_RpmAvatarCreator_UserAvatarsDownloadCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadUserAvatars_Statics::NewProp_DownloadCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadUserAvatars_Statics::NewProp_DownloadCompleted_MetaData)) }; // 1793327996
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadUserAvatars_Statics::NewProp_Failed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadUserAvatars_Statics::NewProp_Failed = { "Failed", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RpmAvatarCreatorApi_eventDownloadUserAvatars_Parms, Failed), Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarCreatorFailed__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadUserAvatars_Statics::NewProp_Failed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadUserAvatars_Statics::NewProp_Failed_MetaData)) }; // 929214670
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadUserAvatars_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadUserAvatars_Statics::NewProp_DownloadCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadUserAvatars_Statics::NewProp_Failed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadUserAvatars_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Download User Avatars" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorApi.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadUserAvatars_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarCreatorApi, nullptr, "DownloadUserAvatars", nullptr, nullptr, sizeof(Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadUserAvatars_Statics::RpmAvatarCreatorApi_eventDownloadUserAvatars_Parms), Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadUserAvatars_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadUserAvatars_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadUserAvatars_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadUserAvatars_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadUserAvatars()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadUserAvatars_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URpmAvatarCreatorApi_ExecuteEditorReadyCallback_Statics
	{
		struct RpmAvatarCreatorApi_eventExecuteEditorReadyCallback_Parms
		{
			bool bSuccess;
			ERpmAvatarCreatorError Error;
		};
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Error_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Error;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URpmAvatarCreatorApi_ExecuteEditorReadyCallback_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((RpmAvatarCreatorApi_eventExecuteEditorReadyCallback_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URpmAvatarCreatorApi_ExecuteEditorReadyCallback_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RpmAvatarCreatorApi_eventExecuteEditorReadyCallback_Parms), &Z_Construct_UFunction_URpmAvatarCreatorApi_ExecuteEditorReadyCallback_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URpmAvatarCreatorApi_ExecuteEditorReadyCallback_Statics::NewProp_Error_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URpmAvatarCreatorApi_ExecuteEditorReadyCallback_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RpmAvatarCreatorApi_eventExecuteEditorReadyCallback_Parms, Error), Z_Construct_UEnum_RpmAvatarCreator_ERpmAvatarCreatorError, METADATA_PARAMS(nullptr, 0) }; // 1015991342
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarCreatorApi_ExecuteEditorReadyCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorApi_ExecuteEditorReadyCallback_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorApi_ExecuteEditorReadyCallback_Statics::NewProp_Error_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorApi_ExecuteEditorReadyCallback_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarCreatorApi_ExecuteEditorReadyCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorApi.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarCreatorApi_ExecuteEditorReadyCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarCreatorApi, nullptr, "ExecuteEditorReadyCallback", nullptr, nullptr, sizeof(Z_Construct_UFunction_URpmAvatarCreatorApi_ExecuteEditorReadyCallback_Statics::RpmAvatarCreatorApi_eventExecuteEditorReadyCallback_Parms), Z_Construct_UFunction_URpmAvatarCreatorApi_ExecuteEditorReadyCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_ExecuteEditorReadyCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarCreatorApi_ExecuteEditorReadyCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_ExecuteEditorReadyCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URpmAvatarCreatorApi_ExecuteEditorReadyCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarCreatorApi_ExecuteEditorReadyCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URpmAvatarCreatorApi_GetAvatarTemplates_Statics
	{
		struct RpmAvatarCreatorApi_eventGetAvatarTemplates_Parms
		{
			TArray<FRpmAvatarTemplate> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URpmAvatarCreatorApi_GetAvatarTemplates_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRpmAvatarTemplate, METADATA_PARAMS(nullptr, 0) }; // 541676217
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URpmAvatarCreatorApi_GetAvatarTemplates_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RpmAvatarCreatorApi_eventGetAvatarTemplates_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 541676217
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarCreatorApi_GetAvatarTemplates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorApi_GetAvatarTemplates_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorApi_GetAvatarTemplates_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarCreatorApi_GetAvatarTemplates_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Get Avatar Templates" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorApi.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarCreatorApi_GetAvatarTemplates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarCreatorApi, nullptr, "GetAvatarTemplates", nullptr, nullptr, sizeof(Z_Construct_UFunction_URpmAvatarCreatorApi_GetAvatarTemplates_Statics::RpmAvatarCreatorApi_eventGetAvatarTemplates_Parms), Z_Construct_UFunction_URpmAvatarCreatorApi_GetAvatarTemplates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_GetAvatarTemplates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarCreatorApi_GetAvatarTemplates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_GetAvatarTemplates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URpmAvatarCreatorApi_GetAvatarTemplates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarCreatorApi_GetAvatarTemplates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URpmAvatarCreatorApi_GetColorPalettes_Statics
	{
		struct RpmAvatarCreatorApi_eventGetColorPalettes_Parms
		{
			TArray<FRpmColorPalette> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URpmAvatarCreatorApi_GetColorPalettes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRpmColorPalette, METADATA_PARAMS(nullptr, 0) }; // 3906301919
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URpmAvatarCreatorApi_GetColorPalettes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RpmAvatarCreatorApi_eventGetColorPalettes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3906301919
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarCreatorApi_GetColorPalettes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorApi_GetColorPalettes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorApi_GetColorPalettes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarCreatorApi_GetColorPalettes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Get Color Palettes" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorApi.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarCreatorApi_GetColorPalettes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarCreatorApi, nullptr, "GetColorPalettes", nullptr, nullptr, sizeof(Z_Construct_UFunction_URpmAvatarCreatorApi_GetColorPalettes_Statics::RpmAvatarCreatorApi_eventGetColorPalettes_Parms), Z_Construct_UFunction_URpmAvatarCreatorApi_GetColorPalettes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_GetColorPalettes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarCreatorApi_GetColorPalettes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_GetColorPalettes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URpmAvatarCreatorApi_GetColorPalettes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarCreatorApi_GetColorPalettes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URpmAvatarCreatorApi_GetFilteredPartnerAssets_Statics
	{
		struct RpmAvatarCreatorApi_eventGetFilteredPartnerAssets_Parms
		{
			TArray<FRpmPartnerAsset> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URpmAvatarCreatorApi_GetFilteredPartnerAssets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRpmPartnerAsset, METADATA_PARAMS(nullptr, 0) }; // 1108987381
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URpmAvatarCreatorApi_GetFilteredPartnerAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RpmAvatarCreatorApi_eventGetFilteredPartnerAssets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1108987381
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarCreatorApi_GetFilteredPartnerAssets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorApi_GetFilteredPartnerAssets_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorApi_GetFilteredPartnerAssets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarCreatorApi_GetFilteredPartnerAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Get Filtered Partner Assets" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorApi.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarCreatorApi_GetFilteredPartnerAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarCreatorApi, nullptr, "GetFilteredPartnerAssets", nullptr, nullptr, sizeof(Z_Construct_UFunction_URpmAvatarCreatorApi_GetFilteredPartnerAssets_Statics::RpmAvatarCreatorApi_eventGetFilteredPartnerAssets_Parms), Z_Construct_UFunction_URpmAvatarCreatorApi_GetFilteredPartnerAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_GetFilteredPartnerAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarCreatorApi_GetFilteredPartnerAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_GetFilteredPartnerAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URpmAvatarCreatorApi_GetFilteredPartnerAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarCreatorApi_GetFilteredPartnerAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URpmAvatarCreatorApi_GetUserData_Statics
	{
		struct RpmAvatarCreatorApi_eventGetUserData_Parms
		{
			FRpmUserData ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URpmAvatarCreatorApi_GetUserData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RpmAvatarCreatorApi_eventGetUserData_Parms, ReturnValue), Z_Construct_UScriptStruct_FRpmUserData, METADATA_PARAMS(nullptr, 0) }; // 262635238
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarCreatorApi_GetUserData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorApi_GetUserData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarCreatorApi_GetUserData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Get User Data" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorApi.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarCreatorApi_GetUserData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarCreatorApi, nullptr, "GetUserData", nullptr, nullptr, sizeof(Z_Construct_UFunction_URpmAvatarCreatorApi_GetUserData_Statics::RpmAvatarCreatorApi_eventGetUserData_Parms), Z_Construct_UFunction_URpmAvatarCreatorApi_GetUserData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_GetUserData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarCreatorApi_GetUserData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_GetUserData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URpmAvatarCreatorApi_GetUserData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarCreatorApi_GetUserData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URpmAvatarCreatorApi_Initialize_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarCreatorApi_Initialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Initialize" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorApi.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarCreatorApi_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarCreatorApi, nullptr, "Initialize", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarCreatorApi_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URpmAvatarCreatorApi_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarCreatorApi_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URpmAvatarCreatorApi_LogOut_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarCreatorApi_LogOut_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "LogOut" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorApi.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarCreatorApi_LogOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarCreatorApi, nullptr, "LogOut", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarCreatorApi_LogOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_LogOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URpmAvatarCreatorApi_LogOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarCreatorApi_LogOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URpmAvatarCreatorApi_PrecompileAvatar_Statics
	{
		struct RpmAvatarCreatorApi_eventPrecompileAvatar_Parms
		{
			ERpmPartnerAssetType AssetType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AssetType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AssetType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URpmAvatarCreatorApi_PrecompileAvatar_Statics::NewProp_AssetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URpmAvatarCreatorApi_PrecompileAvatar_Statics::NewProp_AssetType = { "AssetType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RpmAvatarCreatorApi_eventPrecompileAvatar_Parms, AssetType), Z_Construct_UEnum_RpmAvatarCreator_ERpmPartnerAssetType, METADATA_PARAMS(nullptr, 0) }; // 294232875
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarCreatorApi_PrecompileAvatar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorApi_PrecompileAvatar_Statics::NewProp_AssetType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorApi_PrecompileAvatar_Statics::NewProp_AssetType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarCreatorApi_PrecompileAvatar_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Precompile Avatar" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorApi.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarCreatorApi_PrecompileAvatar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarCreatorApi, nullptr, "PrecompileAvatar", nullptr, nullptr, sizeof(Z_Construct_UFunction_URpmAvatarCreatorApi_PrecompileAvatar_Statics::RpmAvatarCreatorApi_eventPrecompileAvatar_Parms), Z_Construct_UFunction_URpmAvatarCreatorApi_PrecompileAvatar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_PrecompileAvatar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarCreatorApi_PrecompileAvatar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_PrecompileAvatar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URpmAvatarCreatorApi_PrecompileAvatar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarCreatorApi_PrecompileAvatar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URpmAvatarCreatorApi_PrepareEditor_Statics
	{
		struct RpmAvatarCreatorApi_eventPrepareEditor_Parms
		{
			FScriptDelegate EditorReady;
			FScriptDelegate Failed;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorReady_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_EditorReady;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Failed_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Failed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarCreatorApi_PrepareEditor_Statics::NewProp_EditorReady_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URpmAvatarCreatorApi_PrepareEditor_Statics::NewProp_EditorReady = { "EditorReady", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RpmAvatarCreatorApi_eventPrepareEditor_Parms, EditorReady), Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarEditorReady__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarCreatorApi_PrepareEditor_Statics::NewProp_EditorReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_PrepareEditor_Statics::NewProp_EditorReady_MetaData)) }; // 3792584050
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarCreatorApi_PrepareEditor_Statics::NewProp_Failed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URpmAvatarCreatorApi_PrepareEditor_Statics::NewProp_Failed = { "Failed", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RpmAvatarCreatorApi_eventPrepareEditor_Parms, Failed), Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarCreatorFailed__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarCreatorApi_PrepareEditor_Statics::NewProp_Failed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_PrepareEditor_Statics::NewProp_Failed_MetaData)) }; // 929214670
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarCreatorApi_PrepareEditor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorApi_PrepareEditor_Statics::NewProp_EditorReady,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorApi_PrepareEditor_Statics::NewProp_Failed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarCreatorApi_PrepareEditor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Prepare Editor" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorApi.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarCreatorApi_PrepareEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarCreatorApi, nullptr, "PrepareEditor", nullptr, nullptr, sizeof(Z_Construct_UFunction_URpmAvatarCreatorApi_PrepareEditor_Statics::RpmAvatarCreatorApi_eventPrepareEditor_Parms), Z_Construct_UFunction_URpmAvatarCreatorApi_PrepareEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_PrepareEditor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarCreatorApi_PrepareEditor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_PrepareEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URpmAvatarCreatorApi_PrepareEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarCreatorApi_PrepareEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URpmAvatarCreatorApi_PropertiesDownloaded_Statics
	{
		struct RpmAvatarCreatorApi_eventPropertiesDownloaded_Parms
		{
			bool bSuccess;
			ERpmAvatarCreatorError Error;
		};
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Error_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Error;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URpmAvatarCreatorApi_PropertiesDownloaded_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((RpmAvatarCreatorApi_eventPropertiesDownloaded_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URpmAvatarCreatorApi_PropertiesDownloaded_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RpmAvatarCreatorApi_eventPropertiesDownloaded_Parms), &Z_Construct_UFunction_URpmAvatarCreatorApi_PropertiesDownloaded_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URpmAvatarCreatorApi_PropertiesDownloaded_Statics::NewProp_Error_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URpmAvatarCreatorApi_PropertiesDownloaded_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RpmAvatarCreatorApi_eventPropertiesDownloaded_Parms, Error), Z_Construct_UEnum_RpmAvatarCreator_ERpmAvatarCreatorError, METADATA_PARAMS(nullptr, 0) }; // 1015991342
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarCreatorApi_PropertiesDownloaded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorApi_PropertiesDownloaded_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorApi_PropertiesDownloaded_Statics::NewProp_Error_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorApi_PropertiesDownloaded_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarCreatorApi_PropertiesDownloaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorApi.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarCreatorApi_PropertiesDownloaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarCreatorApi, nullptr, "PropertiesDownloaded", nullptr, nullptr, sizeof(Z_Construct_UFunction_URpmAvatarCreatorApi_PropertiesDownloaded_Statics::RpmAvatarCreatorApi_eventPropertiesDownloaded_Parms), Z_Construct_UFunction_URpmAvatarCreatorApi_PropertiesDownloaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_PropertiesDownloaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarCreatorApi_PropertiesDownloaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_PropertiesDownloaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URpmAvatarCreatorApi_PropertiesDownloaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarCreatorApi_PropertiesDownloaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URpmAvatarCreatorApi_SaveAvatar_Statics
	{
		struct RpmAvatarCreatorApi_eventSaveAvatar_Parms
		{
			FScriptDelegate AvatarSaveCompleted;
			FScriptDelegate Failed;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvatarSaveCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_AvatarSaveCompleted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Failed_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Failed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarCreatorApi_SaveAvatar_Statics::NewProp_AvatarSaveCompleted_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URpmAvatarCreatorApi_SaveAvatar_Statics::NewProp_AvatarSaveCompleted = { "AvatarSaveCompleted", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RpmAvatarCreatorApi_eventSaveAvatar_Parms, AvatarSaveCompleted), Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarSaveCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarCreatorApi_SaveAvatar_Statics::NewProp_AvatarSaveCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_SaveAvatar_Statics::NewProp_AvatarSaveCompleted_MetaData)) }; // 2393907198
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarCreatorApi_SaveAvatar_Statics::NewProp_Failed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URpmAvatarCreatorApi_SaveAvatar_Statics::NewProp_Failed = { "Failed", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RpmAvatarCreatorApi_eventSaveAvatar_Parms, Failed), Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarCreatorFailed__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarCreatorApi_SaveAvatar_Statics::NewProp_Failed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_SaveAvatar_Statics::NewProp_Failed_MetaData)) }; // 929214670
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarCreatorApi_SaveAvatar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorApi_SaveAvatar_Statics::NewProp_AvatarSaveCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorApi_SaveAvatar_Statics::NewProp_Failed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarCreatorApi_SaveAvatar_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Save Avatar" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorApi.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarCreatorApi_SaveAvatar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarCreatorApi, nullptr, "SaveAvatar", nullptr, nullptr, sizeof(Z_Construct_UFunction_URpmAvatarCreatorApi_SaveAvatar_Statics::RpmAvatarCreatorApi_eventSaveAvatar_Parms), Z_Construct_UFunction_URpmAvatarCreatorApi_SaveAvatar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_SaveAvatar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarCreatorApi_SaveAvatar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_SaveAvatar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URpmAvatarCreatorApi_SaveAvatar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarCreatorApi_SaveAvatar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URpmAvatarCreatorApi_SetPreviewDownloadedDelegate_Statics
	{
		struct RpmAvatarCreatorApi_eventSetPreviewDownloadedDelegate_Parms
		{
			FScriptDelegate PreviewDownloaded;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewDownloaded_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_PreviewDownloaded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarCreatorApi_SetPreviewDownloadedDelegate_Statics::NewProp_PreviewDownloaded_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URpmAvatarCreatorApi_SetPreviewDownloadedDelegate_Statics::NewProp_PreviewDownloaded = { "PreviewDownloaded", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RpmAvatarCreatorApi_eventSetPreviewDownloadedDelegate_Parms, PreviewDownloaded), Z_Construct_UDelegateFunction_RpmAvatarCreator_PreviewDownloadCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarCreatorApi_SetPreviewDownloadedDelegate_Statics::NewProp_PreviewDownloaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_SetPreviewDownloadedDelegate_Statics::NewProp_PreviewDownloaded_MetaData)) }; // 1538242321
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarCreatorApi_SetPreviewDownloadedDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorApi_SetPreviewDownloadedDelegate_Statics::NewProp_PreviewDownloaded,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarCreatorApi_SetPreviewDownloadedDelegate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Set Preview Downloaded Delegate" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorApi.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarCreatorApi_SetPreviewDownloadedDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarCreatorApi, nullptr, "SetPreviewDownloadedDelegate", nullptr, nullptr, sizeof(Z_Construct_UFunction_URpmAvatarCreatorApi_SetPreviewDownloadedDelegate_Statics::RpmAvatarCreatorApi_eventSetPreviewDownloadedDelegate_Parms), Z_Construct_UFunction_URpmAvatarCreatorApi_SetPreviewDownloadedDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_SetPreviewDownloadedDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarCreatorApi_SetPreviewDownloadedDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_SetPreviewDownloadedDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URpmAvatarCreatorApi_SetPreviewDownloadedDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarCreatorApi_SetPreviewDownloadedDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URpmAvatarCreatorApi_SetSessionExpiredDelegate_Statics
	{
		struct RpmAvatarCreatorApi_eventSetSessionExpiredDelegate_Parms
		{
			FScriptDelegate SessionExpired;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionExpired_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_SessionExpired;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarCreatorApi_SetSessionExpiredDelegate_Statics::NewProp_SessionExpired_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URpmAvatarCreatorApi_SetSessionExpiredDelegate_Statics::NewProp_SessionExpired = { "SessionExpired", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RpmAvatarCreatorApi_eventSetSessionExpiredDelegate_Parms, SessionExpired), Z_Construct_UDelegateFunction_RpmAvatarCreator_SessionExpired__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarCreatorApi_SetSessionExpiredDelegate_Statics::NewProp_SessionExpired_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_SetSessionExpiredDelegate_Statics::NewProp_SessionExpired_MetaData)) }; // 2600664320
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarCreatorApi_SetSessionExpiredDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorApi_SetSessionExpiredDelegate_Statics::NewProp_SessionExpired,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarCreatorApi_SetSessionExpiredDelegate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Set Session Expired Delegate" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorApi.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarCreatorApi_SetSessionExpiredDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarCreatorApi, nullptr, "SetSessionExpiredDelegate", nullptr, nullptr, sizeof(Z_Construct_UFunction_URpmAvatarCreatorApi_SetSessionExpiredDelegate_Statics::RpmAvatarCreatorApi_eventSetSessionExpiredDelegate_Parms), Z_Construct_UFunction_URpmAvatarCreatorApi_SetSessionExpiredDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_SetSessionExpiredDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarCreatorApi_SetSessionExpiredDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_SetSessionExpiredDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URpmAvatarCreatorApi_SetSessionExpiredDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarCreatorApi_SetSessionExpiredDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateAvatarAsset_Statics
	{
		struct RpmAvatarCreatorApi_eventUpdateAvatarAsset_Parms
		{
			ERpmPartnerAssetType AssetType;
			FString AssetId;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AssetType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AssetType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateAvatarAsset_Statics::NewProp_AssetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateAvatarAsset_Statics::NewProp_AssetType = { "AssetType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RpmAvatarCreatorApi_eventUpdateAvatarAsset_Parms, AssetType), Z_Construct_UEnum_RpmAvatarCreator_ERpmPartnerAssetType, METADATA_PARAMS(nullptr, 0) }; // 294232875
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateAvatarAsset_Statics::NewProp_AssetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateAvatarAsset_Statics::NewProp_AssetId = { "AssetId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RpmAvatarCreatorApi_eventUpdateAvatarAsset_Parms, AssetId), METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateAvatarAsset_Statics::NewProp_AssetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateAvatarAsset_Statics::NewProp_AssetId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateAvatarAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateAvatarAsset_Statics::NewProp_AssetType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateAvatarAsset_Statics::NewProp_AssetType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateAvatarAsset_Statics::NewProp_AssetId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateAvatarAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Update Avatar Asset" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorApi.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateAvatarAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarCreatorApi, nullptr, "UpdateAvatarAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateAvatarAsset_Statics::RpmAvatarCreatorApi_eventUpdateAvatarAsset_Parms), Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateAvatarAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateAvatarAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateAvatarAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateAvatarAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateAvatarAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateAvatarAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateAvatarColor_Statics
	{
		struct RpmAvatarCreatorApi_eventUpdateAvatarColor_Parms
		{
			ERpmPartnerAssetColor AssetColor;
			int32 ColorIndex;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AssetColor_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AssetColor;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ColorIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateAvatarColor_Statics::NewProp_AssetColor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateAvatarColor_Statics::NewProp_AssetColor = { "AssetColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RpmAvatarCreatorApi_eventUpdateAvatarColor_Parms, AssetColor), Z_Construct_UEnum_RpmAvatarCreator_ERpmPartnerAssetColor, METADATA_PARAMS(nullptr, 0) }; // 717790046
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateAvatarColor_Statics::NewProp_ColorIndex = { "ColorIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RpmAvatarCreatorApi_eventUpdateAvatarColor_Parms, ColorIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateAvatarColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateAvatarColor_Statics::NewProp_AssetColor_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateAvatarColor_Statics::NewProp_AssetColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateAvatarColor_Statics::NewProp_ColorIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateAvatarColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Update Avatar Color" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorApi.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateAvatarColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarCreatorApi, nullptr, "UpdateAvatarColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateAvatarColor_Statics::RpmAvatarCreatorApi_eventUpdateAvatarColor_Parms), Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateAvatarColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateAvatarColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateAvatarColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateAvatarColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateAvatarColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateAvatarColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateLockedAssets_Statics
	{
		struct RpmAvatarCreatorApi_eventUpdateLockedAssets_Parms
		{
			FScriptDelegate UpdateLockedAssetsCompleted;
			FScriptDelegate Failed;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateLockedAssetsCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_UpdateLockedAssetsCompleted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Failed_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Failed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateLockedAssets_Statics::NewProp_UpdateLockedAssetsCompleted_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateLockedAssets_Statics::NewProp_UpdateLockedAssetsCompleted = { "UpdateLockedAssetsCompleted", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RpmAvatarCreatorApi_eventUpdateLockedAssets_Parms, UpdateLockedAssetsCompleted), Z_Construct_UDelegateFunction_RpmAvatarCreator_UpdateLockedAssetsCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateLockedAssets_Statics::NewProp_UpdateLockedAssetsCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateLockedAssets_Statics::NewProp_UpdateLockedAssetsCompleted_MetaData)) }; // 1726712781
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateLockedAssets_Statics::NewProp_Failed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateLockedAssets_Statics::NewProp_Failed = { "Failed", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RpmAvatarCreatorApi_eventUpdateLockedAssets_Parms, Failed), Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarCreatorFailed__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateLockedAssets_Statics::NewProp_Failed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateLockedAssets_Statics::NewProp_Failed_MetaData)) }; // 929214670
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateLockedAssets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateLockedAssets_Statics::NewProp_UpdateLockedAssetsCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateLockedAssets_Statics::NewProp_Failed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateLockedAssets_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "UpdateLockedAssetsCompleted,Failed" },
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Update Locked Assets" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorApi.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateLockedAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarCreatorApi, nullptr, "UpdateLockedAssets", nullptr, nullptr, sizeof(Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateLockedAssets_Statics::RpmAvatarCreatorApi_eventUpdateLockedAssets_Parms), Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateLockedAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateLockedAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateLockedAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateLockedAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateLockedAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateLockedAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URpmAvatarCreatorApi);
	UClass* Z_Construct_UClass_URpmAvatarCreatorApi_NoRegister()
	{
		return URpmAvatarCreatorApi::StaticClass();
	}
	struct Z_Construct_UClass_URpmAvatarCreatorApi_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetSkeleton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetSkeleton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvatarProperties_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AvatarProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedAvatarTemplateId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedAvatarTemplateId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BodyType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BodyType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageDownloader_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ImageDownloader;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvatarRequestHandler_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AvatarRequestHandler;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URpmAvatarCreatorApi_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RpmAvatarCreator,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URpmAvatarCreatorApi_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URpmAvatarCreatorApi_AuthAnonymous, "AuthAnonymous" }, // 3264234710
		{ &Z_Construct_UFunction_URpmAvatarCreatorApi_AuthStart, "AuthStart" }, // 2684353908
		{ &Z_Construct_UFunction_URpmAvatarCreatorApi_ConfirmActivationCode, "ConfirmActivationCode" }, // 2112340048
		{ &Z_Construct_UFunction_URpmAvatarCreatorApi_DeleteAvatar, "DeleteAvatar" }, // 3981843729
		{ &Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadAvatarTemplates, "DownloadAvatarTemplates" }, // 1804584296
		{ &Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadImage, "DownloadImage" }, // 1778841401
		{ &Z_Construct_UFunction_URpmAvatarCreatorApi_DownloadUserAvatars, "DownloadUserAvatars" }, // 456441439
		{ &Z_Construct_UFunction_URpmAvatarCreatorApi_ExecuteEditorReadyCallback, "ExecuteEditorReadyCallback" }, // 3259171411
		{ &Z_Construct_UFunction_URpmAvatarCreatorApi_GetAvatarTemplates, "GetAvatarTemplates" }, // 1516101342
		{ &Z_Construct_UFunction_URpmAvatarCreatorApi_GetColorPalettes, "GetColorPalettes" }, // 3887762475
		{ &Z_Construct_UFunction_URpmAvatarCreatorApi_GetFilteredPartnerAssets, "GetFilteredPartnerAssets" }, // 625027372
		{ &Z_Construct_UFunction_URpmAvatarCreatorApi_GetUserData, "GetUserData" }, // 307440508
		{ &Z_Construct_UFunction_URpmAvatarCreatorApi_Initialize, "Initialize" }, // 327456621
		{ &Z_Construct_UFunction_URpmAvatarCreatorApi_LogOut, "LogOut" }, // 519445412
		{ &Z_Construct_UFunction_URpmAvatarCreatorApi_PrecompileAvatar, "PrecompileAvatar" }, // 3352701815
		{ &Z_Construct_UFunction_URpmAvatarCreatorApi_PrepareEditor, "PrepareEditor" }, // 3035423639
		{ &Z_Construct_UFunction_URpmAvatarCreatorApi_PropertiesDownloaded, "PropertiesDownloaded" }, // 273346372
		{ &Z_Construct_UFunction_URpmAvatarCreatorApi_SaveAvatar, "SaveAvatar" }, // 735947793
		{ &Z_Construct_UFunction_URpmAvatarCreatorApi_SetPreviewDownloadedDelegate, "SetPreviewDownloadedDelegate" }, // 889111639
		{ &Z_Construct_UFunction_URpmAvatarCreatorApi_SetSessionExpiredDelegate, "SetSessionExpiredDelegate" }, // 250877985
		{ &Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateAvatarAsset, "UpdateAvatarAsset" }, // 707838662
		{ &Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateAvatarColor, "UpdateAvatarColor" }, // 2396079437
		{ &Z_Construct_UFunction_URpmAvatarCreatorApi_UpdateLockedAssets, "UpdateLockedAssets" }, // 633263109
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URpmAvatarCreatorApi_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RpmAvatarCreatorApi.h" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorApi.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URpmAvatarCreatorApi_Statics::NewProp_TargetSkeleton_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorApi.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URpmAvatarCreatorApi_Statics::NewProp_TargetSkeleton = { "TargetSkeleton", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URpmAvatarCreatorApi, TargetSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URpmAvatarCreatorApi_Statics::NewProp_TargetSkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URpmAvatarCreatorApi_Statics::NewProp_TargetSkeleton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URpmAvatarCreatorApi_Statics::NewProp_AvatarProperties_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorApi.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URpmAvatarCreatorApi_Statics::NewProp_AvatarProperties = { "AvatarProperties", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URpmAvatarCreatorApi, AvatarProperties), Z_Construct_UScriptStruct_FRpmAvatarProperties, METADATA_PARAMS(Z_Construct_UClass_URpmAvatarCreatorApi_Statics::NewProp_AvatarProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URpmAvatarCreatorApi_Statics::NewProp_AvatarProperties_MetaData)) }; // 2166798487
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URpmAvatarCreatorApi_Statics::NewProp_SelectedAvatarTemplateId_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorApi.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URpmAvatarCreatorApi_Statics::NewProp_SelectedAvatarTemplateId = { "SelectedAvatarTemplateId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URpmAvatarCreatorApi, SelectedAvatarTemplateId), METADATA_PARAMS(Z_Construct_UClass_URpmAvatarCreatorApi_Statics::NewProp_SelectedAvatarTemplateId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URpmAvatarCreatorApi_Statics::NewProp_SelectedAvatarTemplateId_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URpmAvatarCreatorApi_Statics::NewProp_BodyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URpmAvatarCreatorApi_Statics::NewProp_BodyType_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorApi.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URpmAvatarCreatorApi_Statics::NewProp_BodyType = { "BodyType", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URpmAvatarCreatorApi, BodyType), Z_Construct_UEnum_ReadyPlayerMe_EAvatarBodyType, METADATA_PARAMS(Z_Construct_UClass_URpmAvatarCreatorApi_Statics::NewProp_BodyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URpmAvatarCreatorApi_Statics::NewProp_BodyType_MetaData)) }; // 3166209864
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URpmAvatarCreatorApi_Statics::NewProp_ImageDownloader_MetaData[] = {
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorApi.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URpmAvatarCreatorApi_Statics::NewProp_ImageDownloader = { "ImageDownloader", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URpmAvatarCreatorApi, ImageDownloader), Z_Construct_UClass_URpmImageDownloader_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URpmAvatarCreatorApi_Statics::NewProp_ImageDownloader_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URpmAvatarCreatorApi_Statics::NewProp_ImageDownloader_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URpmAvatarCreatorApi_Statics::NewProp_AvatarRequestHandler_MetaData[] = {
		{ "ModuleRelativePath", "Public/RpmAvatarCreatorApi.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URpmAvatarCreatorApi_Statics::NewProp_AvatarRequestHandler = { "AvatarRequestHandler", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URpmAvatarCreatorApi, AvatarRequestHandler), Z_Construct_UClass_URpmAvatarRequestHandler_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URpmAvatarCreatorApi_Statics::NewProp_AvatarRequestHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URpmAvatarCreatorApi_Statics::NewProp_AvatarRequestHandler_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URpmAvatarCreatorApi_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarCreatorApi_Statics::NewProp_TargetSkeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarCreatorApi_Statics::NewProp_AvatarProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarCreatorApi_Statics::NewProp_SelectedAvatarTemplateId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarCreatorApi_Statics::NewProp_BodyType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarCreatorApi_Statics::NewProp_BodyType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarCreatorApi_Statics::NewProp_ImageDownloader,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarCreatorApi_Statics::NewProp_AvatarRequestHandler,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URpmAvatarCreatorApi_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URpmAvatarCreatorApi>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URpmAvatarCreatorApi_Statics::ClassParams = {
		&URpmAvatarCreatorApi::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URpmAvatarCreatorApi_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URpmAvatarCreatorApi_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URpmAvatarCreatorApi_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URpmAvatarCreatorApi_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URpmAvatarCreatorApi()
	{
		if (!Z_Registration_Info_UClass_URpmAvatarCreatorApi.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URpmAvatarCreatorApi.OuterSingleton, Z_Construct_UClass_URpmAvatarCreatorApi_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URpmAvatarCreatorApi.OuterSingleton;
	}
	template<> RPMAVATARCREATOR_API UClass* StaticClass<URpmAvatarCreatorApi>()
	{
		return URpmAvatarCreatorApi::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URpmAvatarCreatorApi);
	struct Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorApi_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorApi_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URpmAvatarCreatorApi, URpmAvatarCreatorApi::StaticClass, TEXT("URpmAvatarCreatorApi"), &Z_Registration_Info_UClass_URpmAvatarCreatorApi, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URpmAvatarCreatorApi), 546933220U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorApi_h_802746638(TEXT("/Script/RpmAvatarCreator"),
		Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorApi_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmAvatarCreatorApi_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
