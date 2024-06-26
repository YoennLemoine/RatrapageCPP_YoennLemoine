// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS_LemoineYoenn/Public/AFPSCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAFPSCharacter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	FPS_LEMOINEYOENN_API UClass* Z_Construct_UClass_AAFPSCharacter();
	FPS_LEMOINEYOENN_API UClass* Z_Construct_UClass_AAFPSCharacter_NoRegister();
	FPS_LEMOINEYOENN_API UClass* Z_Construct_UClass_AAFPSProjectile_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FPS_LemoineYoenn();
// End Cross Module References
	void AAFPSCharacter::StaticRegisterNativesAAFPSCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAFPSCharacter);
	UClass* Z_Construct_UClass_AAFPSCharacter_NoRegister()
	{
		return AAFPSCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AAFPSCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAFPSCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS_LemoineYoenn,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAFPSCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAFPSCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AFPSCharacter.h" },
		{ "ModuleRelativePath", "Public/AFPSCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAFPSCharacter_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "AFPSCharacter" },
		{ "ModuleRelativePath", "Public/AFPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAFPSCharacter_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAFPSCharacter, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AAFPSProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAFPSCharacter_Statics::NewProp_ProjectileClass_MetaData), Z_Construct_UClass_AAFPSCharacter_Statics::NewProp_ProjectileClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAFPSCharacter_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "Category", "AFPSCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AFPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAFPSCharacter_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAFPSCharacter, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAFPSCharacter_Statics::NewProp_CameraComponent_MetaData), Z_Construct_UClass_AAFPSCharacter_Statics::NewProp_CameraComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAFPSCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/AFPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAFPSCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAFPSCharacter, BaseTurnRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAFPSCharacter_Statics::NewProp_BaseTurnRate_MetaData), Z_Construct_UClass_AAFPSCharacter_Statics::NewProp_BaseTurnRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAFPSCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/AFPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAFPSCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAFPSCharacter, BaseLookUpRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAFPSCharacter_Statics::NewProp_BaseLookUpRate_MetaData), Z_Construct_UClass_AAFPSCharacter_Statics::NewProp_BaseLookUpRate_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAFPSCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAFPSCharacter_Statics::NewProp_ProjectileClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAFPSCharacter_Statics::NewProp_CameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAFPSCharacter_Statics::NewProp_BaseTurnRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAFPSCharacter_Statics::NewProp_BaseLookUpRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAFPSCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAFPSCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAFPSCharacter_Statics::ClassParams = {
		&AAFPSCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAFPSCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAFPSCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAFPSCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AAFPSCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAFPSCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAFPSCharacter()
	{
		if (!Z_Registration_Info_UClass_AAFPSCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAFPSCharacter.OuterSingleton, Z_Construct_UClass_AAFPSCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAFPSCharacter.OuterSingleton;
	}
	template<> FPS_LEMOINEYOENN_API UClass* StaticClass<AAFPSCharacter>()
	{
		return AAFPSCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAFPSCharacter);
	AAFPSCharacter::~AAFPSCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_ylemoine_Documents_Unreal_Projects_FPS_LemoineYoenn_Source_FPS_LemoineYoenn_Public_AFPSCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ylemoine_Documents_Unreal_Projects_FPS_LemoineYoenn_Source_FPS_LemoineYoenn_Public_AFPSCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAFPSCharacter, AAFPSCharacter::StaticClass, TEXT("AAFPSCharacter"), &Z_Registration_Info_UClass_AAFPSCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAFPSCharacter), 148801438U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ylemoine_Documents_Unreal_Projects_FPS_LemoineYoenn_Source_FPS_LemoineYoenn_Public_AFPSCharacter_h_4158222958(TEXT("/Script/FPS_LemoineYoenn"),
		Z_CompiledInDeferFile_FID_Users_ylemoine_Documents_Unreal_Projects_FPS_LemoineYoenn_Source_FPS_LemoineYoenn_Public_AFPSCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ylemoine_Documents_Unreal_Projects_FPS_LemoineYoenn_Source_FPS_LemoineYoenn_Public_AFPSCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
