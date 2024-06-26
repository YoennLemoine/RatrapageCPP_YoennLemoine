// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS_LemoineYoenn/FPS_LemoineYoennGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPS_LemoineYoennGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	FPS_LEMOINEYOENN_API UClass* Z_Construct_UClass_AFPS_LemoineYoennGameMode();
	FPS_LEMOINEYOENN_API UClass* Z_Construct_UClass_AFPS_LemoineYoennGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FPS_LemoineYoenn();
// End Cross Module References
	void AFPS_LemoineYoennGameMode::StaticRegisterNativesAFPS_LemoineYoennGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFPS_LemoineYoennGameMode);
	UClass* Z_Construct_UClass_AFPS_LemoineYoennGameMode_NoRegister()
	{
		return AFPS_LemoineYoennGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFPS_LemoineYoennGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPS_LemoineYoennGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS_LemoineYoenn,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_LemoineYoennGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPS_LemoineYoennGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FPS_LemoineYoennGameMode.h" },
		{ "ModuleRelativePath", "FPS_LemoineYoennGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPS_LemoineYoennGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPS_LemoineYoennGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPS_LemoineYoennGameMode_Statics::ClassParams = {
		&AFPS_LemoineYoennGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_LemoineYoennGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPS_LemoineYoennGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AFPS_LemoineYoennGameMode()
	{
		if (!Z_Registration_Info_UClass_AFPS_LemoineYoennGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPS_LemoineYoennGameMode.OuterSingleton, Z_Construct_UClass_AFPS_LemoineYoennGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFPS_LemoineYoennGameMode.OuterSingleton;
	}
	template<> FPS_LEMOINEYOENN_API UClass* StaticClass<AFPS_LemoineYoennGameMode>()
	{
		return AFPS_LemoineYoennGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPS_LemoineYoennGameMode);
	AFPS_LemoineYoennGameMode::~AFPS_LemoineYoennGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_ylemoine_Documents_Unreal_Projects_FPS_LemoineYoenn_Source_FPS_LemoineYoenn_FPS_LemoineYoennGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ylemoine_Documents_Unreal_Projects_FPS_LemoineYoenn_Source_FPS_LemoineYoenn_FPS_LemoineYoennGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFPS_LemoineYoennGameMode, AFPS_LemoineYoennGameMode::StaticClass, TEXT("AFPS_LemoineYoennGameMode"), &Z_Registration_Info_UClass_AFPS_LemoineYoennGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPS_LemoineYoennGameMode), 2098451705U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ylemoine_Documents_Unreal_Projects_FPS_LemoineYoenn_Source_FPS_LemoineYoenn_FPS_LemoineYoennGameMode_h_3676178524(TEXT("/Script/FPS_LemoineYoenn"),
		Z_CompiledInDeferFile_FID_Users_ylemoine_Documents_Unreal_Projects_FPS_LemoineYoenn_Source_FPS_LemoineYoenn_FPS_LemoineYoennGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ylemoine_Documents_Unreal_Projects_FPS_LemoineYoenn_Source_FPS_LemoineYoenn_FPS_LemoineYoennGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
