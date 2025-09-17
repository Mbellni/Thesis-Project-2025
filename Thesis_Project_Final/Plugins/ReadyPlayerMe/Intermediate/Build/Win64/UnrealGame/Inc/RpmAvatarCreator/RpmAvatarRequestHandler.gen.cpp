// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RpmAvatarCreator/Private/Downloaders/RpmAvatarRequestHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRpmAvatarRequestHandler() {}
// Cross Module References
	RPMAVATARCREATOR_API UClass* Z_Construct_UClass_URpmAvatarRequestHandler_NoRegister();
	RPMAVATARCREATOR_API UClass* Z_Construct_UClass_URpmAvatarRequestHandler();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_RpmAvatarCreator();
	RPMAVATARCREATOR_API UFunction* Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarDeleteCompleted__DelegateSignature();
	RPMAVATARCREATOR_API UFunction* Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarCreatorFailed__DelegateSignature();
	RPMAVATARCREATOR_API UFunction* Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarSaveCompleted__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	RPMAVATARCREATOR_API UClass* Z_Construct_UClass_URpmImageDownloader_NoRegister();
	RPMAVATARCREATOR_API UFunction* Z_Construct_UDelegateFunction_RpmAvatarCreator_PreviewDownloadCompleted__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(URpmAvatarRequestHandler::execOnPrecompileCompleted)
	{
		P_GET_UBOOL(Z_Param_bSuccess);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPrecompileCompleted(Z_Param_bSuccess);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URpmAvatarRequestHandler::execOnPropertiesRequestCompleted)
	{
		P_GET_UBOOL(Z_Param_bSuccess);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPropertiesRequestCompleted(Z_Param_bSuccess);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URpmAvatarRequestHandler::execOnModelDownloadCompleted)
	{
		P_GET_UBOOL(Z_Param_bSuccess);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnModelDownloadCompleted(Z_Param_bSuccess);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URpmAvatarRequestHandler::execOnDeleteAvatarCompleted)
	{
		P_GET_UBOOL(Z_Param_bSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_AvatarDeleteCompleted);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Failed);
		P_GET_PROPERTY(FStrProperty,Z_Param_AvatarId);
		P_GET_UBOOL(Z_Param_bIsDraft);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDeleteAvatarCompleted(Z_Param_bSuccess,FAvatarDeleteCompleted(Z_Param_AvatarDeleteCompleted),FAvatarCreatorFailed(Z_Param_Failed),Z_Param_AvatarId,Z_Param_bIsDraft);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URpmAvatarRequestHandler::execOnSaveAvatarCompleted)
	{
		P_GET_UBOOL(Z_Param_bSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_AvatarSaveCompleted);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Failed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSaveAvatarCompleted(Z_Param_bSuccess,FAvatarSaveCompleted(Z_Param_AvatarSaveCompleted),FAvatarCreatorFailed(Z_Param_Failed));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URpmAvatarRequestHandler::execOnUpdateAvatarCompleted)
	{
		P_GET_UBOOL(Z_Param_bSuccess);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUpdateAvatarCompleted(Z_Param_bSuccess);
		P_NATIVE_END;
	}
	void URpmAvatarRequestHandler::StaticRegisterNativesURpmAvatarRequestHandler()
	{
		UClass* Class = URpmAvatarRequestHandler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnDeleteAvatarCompleted", &URpmAvatarRequestHandler::execOnDeleteAvatarCompleted },
			{ "OnModelDownloadCompleted", &URpmAvatarRequestHandler::execOnModelDownloadCompleted },
			{ "OnPrecompileCompleted", &URpmAvatarRequestHandler::execOnPrecompileCompleted },
			{ "OnPropertiesRequestCompleted", &URpmAvatarRequestHandler::execOnPropertiesRequestCompleted },
			{ "OnSaveAvatarCompleted", &URpmAvatarRequestHandler::execOnSaveAvatarCompleted },
			{ "OnUpdateAvatarCompleted", &URpmAvatarRequestHandler::execOnUpdateAvatarCompleted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URpmAvatarRequestHandler_OnDeleteAvatarCompleted_Statics
	{
		struct RpmAvatarRequestHandler_eventOnDeleteAvatarCompleted_Parms
		{
			bool bSuccess;
			FScriptDelegate AvatarDeleteCompleted;
			FScriptDelegate Failed;
			FString AvatarId;
			bool bIsDraft;
		};
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_AvatarDeleteCompleted;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Failed;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AvatarId;
		static void NewProp_bIsDraft_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDraft;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URpmAvatarRequestHandler_OnDeleteAvatarCompleted_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((RpmAvatarRequestHandler_eventOnDeleteAvatarCompleted_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URpmAvatarRequestHandler_OnDeleteAvatarCompleted_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RpmAvatarRequestHandler_eventOnDeleteAvatarCompleted_Parms), &Z_Construct_UFunction_URpmAvatarRequestHandler_OnDeleteAvatarCompleted_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URpmAvatarRequestHandler_OnDeleteAvatarCompleted_Statics::NewProp_AvatarDeleteCompleted = { "AvatarDeleteCompleted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RpmAvatarRequestHandler_eventOnDeleteAvatarCompleted_Parms, AvatarDeleteCompleted), Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarDeleteCompleted__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 3056720707
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URpmAvatarRequestHandler_OnDeleteAvatarCompleted_Statics::NewProp_Failed = { "Failed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RpmAvatarRequestHandler_eventOnDeleteAvatarCompleted_Parms, Failed), Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarCreatorFailed__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 929214670
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URpmAvatarRequestHandler_OnDeleteAvatarCompleted_Statics::NewProp_AvatarId = { "AvatarId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RpmAvatarRequestHandler_eventOnDeleteAvatarCompleted_Parms, AvatarId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URpmAvatarRequestHandler_OnDeleteAvatarCompleted_Statics::NewProp_bIsDraft_SetBit(void* Obj)
	{
		((RpmAvatarRequestHandler_eventOnDeleteAvatarCompleted_Parms*)Obj)->bIsDraft = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URpmAvatarRequestHandler_OnDeleteAvatarCompleted_Statics::NewProp_bIsDraft = { "bIsDraft", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RpmAvatarRequestHandler_eventOnDeleteAvatarCompleted_Parms), &Z_Construct_UFunction_URpmAvatarRequestHandler_OnDeleteAvatarCompleted_Statics::NewProp_bIsDraft_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarRequestHandler_OnDeleteAvatarCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarRequestHandler_OnDeleteAvatarCompleted_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarRequestHandler_OnDeleteAvatarCompleted_Statics::NewProp_AvatarDeleteCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarRequestHandler_OnDeleteAvatarCompleted_Statics::NewProp_Failed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarRequestHandler_OnDeleteAvatarCompleted_Statics::NewProp_AvatarId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarRequestHandler_OnDeleteAvatarCompleted_Statics::NewProp_bIsDraft,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarRequestHandler_OnDeleteAvatarCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Downloaders/RpmAvatarRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarRequestHandler_OnDeleteAvatarCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarRequestHandler, nullptr, "OnDeleteAvatarCompleted", nullptr, nullptr, sizeof(Z_Construct_UFunction_URpmAvatarRequestHandler_OnDeleteAvatarCompleted_Statics::RpmAvatarRequestHandler_eventOnDeleteAvatarCompleted_Parms), Z_Construct_UFunction_URpmAvatarRequestHandler_OnDeleteAvatarCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarRequestHandler_OnDeleteAvatarCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarRequestHandler_OnDeleteAvatarCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarRequestHandler_OnDeleteAvatarCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URpmAvatarRequestHandler_OnDeleteAvatarCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarRequestHandler_OnDeleteAvatarCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URpmAvatarRequestHandler_OnModelDownloadCompleted_Statics
	{
		struct RpmAvatarRequestHandler_eventOnModelDownloadCompleted_Parms
		{
			bool bSuccess;
		};
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URpmAvatarRequestHandler_OnModelDownloadCompleted_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((RpmAvatarRequestHandler_eventOnModelDownloadCompleted_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URpmAvatarRequestHandler_OnModelDownloadCompleted_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RpmAvatarRequestHandler_eventOnModelDownloadCompleted_Parms), &Z_Construct_UFunction_URpmAvatarRequestHandler_OnModelDownloadCompleted_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarRequestHandler_OnModelDownloadCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarRequestHandler_OnModelDownloadCompleted_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarRequestHandler_OnModelDownloadCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Downloaders/RpmAvatarRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarRequestHandler_OnModelDownloadCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarRequestHandler, nullptr, "OnModelDownloadCompleted", nullptr, nullptr, sizeof(Z_Construct_UFunction_URpmAvatarRequestHandler_OnModelDownloadCompleted_Statics::RpmAvatarRequestHandler_eventOnModelDownloadCompleted_Parms), Z_Construct_UFunction_URpmAvatarRequestHandler_OnModelDownloadCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarRequestHandler_OnModelDownloadCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarRequestHandler_OnModelDownloadCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarRequestHandler_OnModelDownloadCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URpmAvatarRequestHandler_OnModelDownloadCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarRequestHandler_OnModelDownloadCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URpmAvatarRequestHandler_OnPrecompileCompleted_Statics
	{
		struct RpmAvatarRequestHandler_eventOnPrecompileCompleted_Parms
		{
			bool bSuccess;
		};
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URpmAvatarRequestHandler_OnPrecompileCompleted_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((RpmAvatarRequestHandler_eventOnPrecompileCompleted_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URpmAvatarRequestHandler_OnPrecompileCompleted_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RpmAvatarRequestHandler_eventOnPrecompileCompleted_Parms), &Z_Construct_UFunction_URpmAvatarRequestHandler_OnPrecompileCompleted_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarRequestHandler_OnPrecompileCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarRequestHandler_OnPrecompileCompleted_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarRequestHandler_OnPrecompileCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Downloaders/RpmAvatarRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarRequestHandler_OnPrecompileCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarRequestHandler, nullptr, "OnPrecompileCompleted", nullptr, nullptr, sizeof(Z_Construct_UFunction_URpmAvatarRequestHandler_OnPrecompileCompleted_Statics::RpmAvatarRequestHandler_eventOnPrecompileCompleted_Parms), Z_Construct_UFunction_URpmAvatarRequestHandler_OnPrecompileCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarRequestHandler_OnPrecompileCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarRequestHandler_OnPrecompileCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarRequestHandler_OnPrecompileCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URpmAvatarRequestHandler_OnPrecompileCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarRequestHandler_OnPrecompileCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URpmAvatarRequestHandler_OnPropertiesRequestCompleted_Statics
	{
		struct RpmAvatarRequestHandler_eventOnPropertiesRequestCompleted_Parms
		{
			bool bSuccess;
		};
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URpmAvatarRequestHandler_OnPropertiesRequestCompleted_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((RpmAvatarRequestHandler_eventOnPropertiesRequestCompleted_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URpmAvatarRequestHandler_OnPropertiesRequestCompleted_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RpmAvatarRequestHandler_eventOnPropertiesRequestCompleted_Parms), &Z_Construct_UFunction_URpmAvatarRequestHandler_OnPropertiesRequestCompleted_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarRequestHandler_OnPropertiesRequestCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarRequestHandler_OnPropertiesRequestCompleted_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarRequestHandler_OnPropertiesRequestCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Downloaders/RpmAvatarRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarRequestHandler_OnPropertiesRequestCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarRequestHandler, nullptr, "OnPropertiesRequestCompleted", nullptr, nullptr, sizeof(Z_Construct_UFunction_URpmAvatarRequestHandler_OnPropertiesRequestCompleted_Statics::RpmAvatarRequestHandler_eventOnPropertiesRequestCompleted_Parms), Z_Construct_UFunction_URpmAvatarRequestHandler_OnPropertiesRequestCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarRequestHandler_OnPropertiesRequestCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarRequestHandler_OnPropertiesRequestCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarRequestHandler_OnPropertiesRequestCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URpmAvatarRequestHandler_OnPropertiesRequestCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarRequestHandler_OnPropertiesRequestCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URpmAvatarRequestHandler_OnSaveAvatarCompleted_Statics
	{
		struct RpmAvatarRequestHandler_eventOnSaveAvatarCompleted_Parms
		{
			bool bSuccess;
			FScriptDelegate AvatarSaveCompleted;
			FScriptDelegate Failed;
		};
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_AvatarSaveCompleted;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Failed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URpmAvatarRequestHandler_OnSaveAvatarCompleted_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((RpmAvatarRequestHandler_eventOnSaveAvatarCompleted_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URpmAvatarRequestHandler_OnSaveAvatarCompleted_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RpmAvatarRequestHandler_eventOnSaveAvatarCompleted_Parms), &Z_Construct_UFunction_URpmAvatarRequestHandler_OnSaveAvatarCompleted_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URpmAvatarRequestHandler_OnSaveAvatarCompleted_Statics::NewProp_AvatarSaveCompleted = { "AvatarSaveCompleted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RpmAvatarRequestHandler_eventOnSaveAvatarCompleted_Parms, AvatarSaveCompleted), Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarSaveCompleted__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 2393907198
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URpmAvatarRequestHandler_OnSaveAvatarCompleted_Statics::NewProp_Failed = { "Failed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RpmAvatarRequestHandler_eventOnSaveAvatarCompleted_Parms, Failed), Z_Construct_UDelegateFunction_RpmAvatarCreator_AvatarCreatorFailed__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 929214670
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarRequestHandler_OnSaveAvatarCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarRequestHandler_OnSaveAvatarCompleted_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarRequestHandler_OnSaveAvatarCompleted_Statics::NewProp_AvatarSaveCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarRequestHandler_OnSaveAvatarCompleted_Statics::NewProp_Failed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarRequestHandler_OnSaveAvatarCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Downloaders/RpmAvatarRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarRequestHandler_OnSaveAvatarCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarRequestHandler, nullptr, "OnSaveAvatarCompleted", nullptr, nullptr, sizeof(Z_Construct_UFunction_URpmAvatarRequestHandler_OnSaveAvatarCompleted_Statics::RpmAvatarRequestHandler_eventOnSaveAvatarCompleted_Parms), Z_Construct_UFunction_URpmAvatarRequestHandler_OnSaveAvatarCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarRequestHandler_OnSaveAvatarCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarRequestHandler_OnSaveAvatarCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarRequestHandler_OnSaveAvatarCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URpmAvatarRequestHandler_OnSaveAvatarCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarRequestHandler_OnSaveAvatarCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URpmAvatarRequestHandler_OnUpdateAvatarCompleted_Statics
	{
		struct RpmAvatarRequestHandler_eventOnUpdateAvatarCompleted_Parms
		{
			bool bSuccess;
		};
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URpmAvatarRequestHandler_OnUpdateAvatarCompleted_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((RpmAvatarRequestHandler_eventOnUpdateAvatarCompleted_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URpmAvatarRequestHandler_OnUpdateAvatarCompleted_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RpmAvatarRequestHandler_eventOnUpdateAvatarCompleted_Parms), &Z_Construct_UFunction_URpmAvatarRequestHandler_OnUpdateAvatarCompleted_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URpmAvatarRequestHandler_OnUpdateAvatarCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URpmAvatarRequestHandler_OnUpdateAvatarCompleted_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URpmAvatarRequestHandler_OnUpdateAvatarCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Downloaders/RpmAvatarRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URpmAvatarRequestHandler_OnUpdateAvatarCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URpmAvatarRequestHandler, nullptr, "OnUpdateAvatarCompleted", nullptr, nullptr, sizeof(Z_Construct_UFunction_URpmAvatarRequestHandler_OnUpdateAvatarCompleted_Statics::RpmAvatarRequestHandler_eventOnUpdateAvatarCompleted_Parms), Z_Construct_UFunction_URpmAvatarRequestHandler_OnUpdateAvatarCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarRequestHandler_OnUpdateAvatarCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URpmAvatarRequestHandler_OnUpdateAvatarCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URpmAvatarRequestHandler_OnUpdateAvatarCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URpmAvatarRequestHandler_OnUpdateAvatarCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URpmAvatarRequestHandler_OnUpdateAvatarCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URpmAvatarRequestHandler);
	UClass* Z_Construct_UClass_URpmAvatarRequestHandler_NoRegister()
	{
		return URpmAvatarRequestHandler::StaticClass();
	}
	struct Z_Construct_UClass_URpmAvatarRequestHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageDownloader_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ImageDownloader;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPreviewDownloaded_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnPreviewDownloaded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetSkeleton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetSkeleton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URpmAvatarRequestHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RpmAvatarCreator,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URpmAvatarRequestHandler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URpmAvatarRequestHandler_OnDeleteAvatarCompleted, "OnDeleteAvatarCompleted" }, // 2686182334
		{ &Z_Construct_UFunction_URpmAvatarRequestHandler_OnModelDownloadCompleted, "OnModelDownloadCompleted" }, // 3899586841
		{ &Z_Construct_UFunction_URpmAvatarRequestHandler_OnPrecompileCompleted, "OnPrecompileCompleted" }, // 1519622009
		{ &Z_Construct_UFunction_URpmAvatarRequestHandler_OnPropertiesRequestCompleted, "OnPropertiesRequestCompleted" }, // 2776762350
		{ &Z_Construct_UFunction_URpmAvatarRequestHandler_OnSaveAvatarCompleted, "OnSaveAvatarCompleted" }, // 3840039650
		{ &Z_Construct_UFunction_URpmAvatarRequestHandler_OnUpdateAvatarCompleted, "OnUpdateAvatarCompleted" }, // 610544712
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URpmAvatarRequestHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Downloaders/RpmAvatarRequestHandler.h" },
		{ "ModuleRelativePath", "Private/Downloaders/RpmAvatarRequestHandler.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URpmAvatarRequestHandler_Statics::NewProp_Mesh_MetaData[] = {
		{ "ModuleRelativePath", "Private/Downloaders/RpmAvatarRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URpmAvatarRequestHandler_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URpmAvatarRequestHandler, Mesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URpmAvatarRequestHandler_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URpmAvatarRequestHandler_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URpmAvatarRequestHandler_Statics::NewProp_ImageDownloader_MetaData[] = {
		{ "ModuleRelativePath", "Private/Downloaders/RpmAvatarRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URpmAvatarRequestHandler_Statics::NewProp_ImageDownloader = { "ImageDownloader", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URpmAvatarRequestHandler, ImageDownloader), Z_Construct_UClass_URpmImageDownloader_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URpmAvatarRequestHandler_Statics::NewProp_ImageDownloader_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URpmAvatarRequestHandler_Statics::NewProp_ImageDownloader_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URpmAvatarRequestHandler_Statics::NewProp_OnPreviewDownloaded_MetaData[] = {
		{ "ModuleRelativePath", "Private/Downloaders/RpmAvatarRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_URpmAvatarRequestHandler_Statics::NewProp_OnPreviewDownloaded = { "OnPreviewDownloaded", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URpmAvatarRequestHandler, OnPreviewDownloaded), Z_Construct_UDelegateFunction_RpmAvatarCreator_PreviewDownloadCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URpmAvatarRequestHandler_Statics::NewProp_OnPreviewDownloaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URpmAvatarRequestHandler_Statics::NewProp_OnPreviewDownloaded_MetaData)) }; // 1538242321
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URpmAvatarRequestHandler_Statics::NewProp_TargetSkeleton_MetaData[] = {
		{ "ModuleRelativePath", "Private/Downloaders/RpmAvatarRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URpmAvatarRequestHandler_Statics::NewProp_TargetSkeleton = { "TargetSkeleton", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URpmAvatarRequestHandler, TargetSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URpmAvatarRequestHandler_Statics::NewProp_TargetSkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URpmAvatarRequestHandler_Statics::NewProp_TargetSkeleton_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URpmAvatarRequestHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarRequestHandler_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarRequestHandler_Statics::NewProp_ImageDownloader,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarRequestHandler_Statics::NewProp_OnPreviewDownloaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmAvatarRequestHandler_Statics::NewProp_TargetSkeleton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URpmAvatarRequestHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URpmAvatarRequestHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URpmAvatarRequestHandler_Statics::ClassParams = {
		&URpmAvatarRequestHandler::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URpmAvatarRequestHandler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URpmAvatarRequestHandler_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URpmAvatarRequestHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URpmAvatarRequestHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URpmAvatarRequestHandler()
	{
		if (!Z_Registration_Info_UClass_URpmAvatarRequestHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URpmAvatarRequestHandler.OuterSingleton, Z_Construct_UClass_URpmAvatarRequestHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URpmAvatarRequestHandler.OuterSingleton;
	}
	template<> RPMAVATARCREATOR_API UClass* StaticClass<URpmAvatarRequestHandler>()
	{
		return URpmAvatarRequestHandler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URpmAvatarRequestHandler);
	struct Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Private_Downloaders_RpmAvatarRequestHandler_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Private_Downloaders_RpmAvatarRequestHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URpmAvatarRequestHandler, URpmAvatarRequestHandler::StaticClass, TEXT("URpmAvatarRequestHandler"), &Z_Registration_Info_UClass_URpmAvatarRequestHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URpmAvatarRequestHandler), 1873089433U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Private_Downloaders_RpmAvatarRequestHandler_h_846115080(TEXT("/Script/RpmAvatarCreator"),
		Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Private_Downloaders_RpmAvatarRequestHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Anmol_ConvaiPlugins_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Private_Downloaders_RpmAvatarRequestHandler_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
