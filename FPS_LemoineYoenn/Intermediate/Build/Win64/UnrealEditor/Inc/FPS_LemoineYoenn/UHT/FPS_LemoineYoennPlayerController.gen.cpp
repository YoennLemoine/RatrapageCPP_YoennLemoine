// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS_LemoineYoenn/FPS_LemoineYoennPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPS_LemoineYoennPlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	FPS_LEMOINEYOENN_API UClass* Z_Construct_UClass_AFPS_LemoineYoennPlayerController();
	FPS_LEMOINEYOENN_API UClass* Z_Construct_UClass_AFPS_LemoineYoennPlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FPS_LemoineYoenn();
// End Cross Module References
	void AFPS_LemoineYoennPlayerController::StaticRegisterNativesAFPS_LemoineYoennPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFPS_LemoineYoennPlayerController);
	UClass* Z_Construct_UClass_AFPS_LemoineYoennPlayerController_NoRegister()
	{
		return AFPS_LemoineYoennPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AFPS_LemoineYoennPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPS_LemoineYoennPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS_LemoineYoenn,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_LemoineYoennPlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPS_LemoineYoennPlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "FPS_LemoineYoennPlayerController.h" },
		{ "ModuleRelativePath", "FPS_LemoineYoennPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPS_LemoineYoennPlayerController_Statics::NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "FPS_LemoineYoennPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPS_LemoineYoennPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPS_LemoineYoennPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_LemoineYoennPlayerController_Statics::NewProp_InputMappingContext_MetaData), Z_Construct_UClass_AFPS_LemoineYoennPlayerController_Statics::NewProp_InputMappingContext_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPS_LemoineYoennPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPS_LemoineYoennPlayerController_Statics::NewProp_InputMappingContext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPS_LemoineYoennPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPS_LemoineYoennPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPS_LemoineYoennPlayerController_Statics::ClassParams = {
		&AFPS_LemoineYoennPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFPS_LemoineYoennPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_LemoineYoennPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_LemoineYoennPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPS_LemoineYoennPlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_LemoineYoennPlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AFPS_LemoineYoennPlayerController()
	{
		if (!Z_Registration_Info_UClass_AFPS_LemoineYoennPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPS_LemoineYoennPlayerController.OuterSingleton, Z_Construct_UClass_AFPS_LemoineYoennPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFPS_LemoineYoennPlayerController.OuterSingleton;
	}
	template<> FPS_LEMOINEYOENN_API UClass* StaticClass<AFPS_LemoineYoennPlayerController>()
	{
		return AFPS_LemoineYoennPlayerController::StaticClass();
	}
	AFPS_LemoineYoennPlayerController::AFPS_LemoineYoennPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPS_LemoineYoennPlayerController);
	AFPS_LemoineYoennPlayerController::~AFPS_LemoineYoennPlayerController() {}
	struct Z_CompiledInDeferFile_FID_Users_ylemoine_Documents_Unreal_Projects_FPS_LemoineYoenn_Source_FPS_LemoineYoenn_FPS_LemoineYoennPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ylemoine_Documents_Unreal_Projects_FPS_LemoineYoenn_Source_FPS_LemoineYoenn_FPS_LemoineYoennPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFPS_LemoineYoennPlayerController, AFPS_LemoineYoennPlayerController::StaticClass, TEXT("AFPS_LemoineYoennPlayerController"), &Z_Registration_Info_UClass_AFPS_LemoineYoennPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPS_LemoineYoennPlayerController), 2774961558U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ylemoine_Documents_Unreal_Projects_FPS_LemoineYoenn_Source_FPS_LemoineYoenn_FPS_LemoineYoennPlayerController_h_819149893(TEXT("/Script/FPS_LemoineYoenn"),
		Z_CompiledInDeferFile_FID_Users_ylemoine_Documents_Unreal_Projects_FPS_LemoineYoenn_Source_FPS_LemoineYoenn_FPS_LemoineYoennPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ylemoine_Documents_Unreal_Projects_FPS_LemoineYoenn_Source_FPS_LemoineYoenn_FPS_LemoineYoennPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS