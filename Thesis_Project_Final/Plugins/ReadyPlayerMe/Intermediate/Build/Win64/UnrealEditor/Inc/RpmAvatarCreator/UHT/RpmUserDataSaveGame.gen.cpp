// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RpmAvatarCreator/Public/RpmUserDataSaveGame.h"
#include "RpmAvatarCreator/Public/RpmAvatarCreatorTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRpmUserDataSaveGame() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	RPMAVATARCREATOR_API UClass* Z_Construct_UClass_URpmUserDataSaveGame();
	RPMAVATARCREATOR_API UClass* Z_Construct_UClass_URpmUserDataSaveGame_NoRegister();
	RPMAVATARCREATOR_API UScriptStruct* Z_Construct_UScriptStruct_FRpmUserData();
	UPackage* Z_Construct_UPackage__Script_RpmAvatarCreator();
// End Cross Module References
	void URpmUserDataSaveGame::StaticRegisterNativesURpmUserDataSaveGame()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URpmUserDataSaveGame);
	UClass* Z_Construct_UClass_URpmUserDataSaveGame_NoRegister()
	{
		return URpmUserDataSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_URpmUserDataSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URpmUserDataSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_RpmAvatarCreator,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URpmUserDataSaveGame_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URpmUserDataSaveGame_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RpmUserDataSaveGame.h" },
		{ "ModuleRelativePath", "Public/RpmUserDataSaveGame.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URpmUserDataSaveGame_Statics::NewProp_UserData_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/RpmUserDataSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URpmUserDataSaveGame_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URpmUserDataSaveGame, UserData), Z_Construct_UScriptStruct_FRpmUserData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URpmUserDataSaveGame_Statics::NewProp_UserData_MetaData), Z_Construct_UClass_URpmUserDataSaveGame_Statics::NewProp_UserData_MetaData) }; // 770032418
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URpmUserDataSaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URpmUserDataSaveGame_Statics::NewProp_UserData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URpmUserDataSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URpmUserDataSaveGame>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URpmUserDataSaveGame_Statics::ClassParams = {
		&URpmUserDataSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URpmUserDataSaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URpmUserDataSaveGame_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URpmUserDataSaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_URpmUserDataSaveGame_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URpmUserDataSaveGame_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_URpmUserDataSaveGame()
	{
		if (!Z_Registration_Info_UClass_URpmUserDataSaveGame.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URpmUserDataSaveGame.OuterSingleton, Z_Construct_UClass_URpmUserDataSaveGame_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URpmUserDataSaveGame.OuterSingleton;
	}
	template<> RPMAVATARCREATOR_API UClass* StaticClass<URpmUserDataSaveGame>()
	{
		return URpmUserDataSaveGame::StaticClass();
	}
	URpmUserDataSaveGame::URpmUserDataSaveGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URpmUserDataSaveGame);
	URpmUserDataSaveGame::~URpmUserDataSaveGame() {}
	struct Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmUserDataSaveGame_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmUserDataSaveGame_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URpmUserDataSaveGame, URpmUserDataSaveGame::StaticClass, TEXT("URpmUserDataSaveGame"), &Z_Registration_Info_UClass_URpmUserDataSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URpmUserDataSaveGame), 2211481389U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmUserDataSaveGame_h_3987952636(TEXT("/Script/RpmAvatarCreator"),
		Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmUserDataSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_UE5_3_BPBlank_53_Plugins_ReadyPlayerMe_Source_RpmAvatarCreator_Public_RpmUserDataSaveGame_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
