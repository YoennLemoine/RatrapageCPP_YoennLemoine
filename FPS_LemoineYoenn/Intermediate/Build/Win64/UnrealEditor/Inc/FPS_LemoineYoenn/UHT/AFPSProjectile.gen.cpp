// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS_LemoineYoenn/Public/AFPSProjectile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAFPSProjectile() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	FPS_LEMOINEYOENN_API UClass* Z_Construct_UClass_AAFPSProjectile();
	FPS_LEMOINEYOENN_API UClass* Z_Construct_UClass_AAFPSProjectile_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FPS_LemoineYoenn();
// End Cross Module References
	void AAFPSProjectile::StaticRegisterNativesAAFPSProjectile()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAFPSProjectile);
	UClass* Z_Construct_UClass_AAFPSProjectile_NoRegister()
	{
		return AAFPSProjectile::StaticClass();
	}
	struct Z_Construct_UClass_AAFPSProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Projectile_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Projectile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAFPSProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS_LemoineYoenn,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAFPSProjectile_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAFPSProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AFPSProjectile.h" },
		{ "ModuleRelativePath", "Public/AFPSProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAFPSProjectile_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AFPSProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAFPSProjectile_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAFPSProjectile, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAFPSProjectile_Statics::NewProp_Mesh_MetaData), Z_Construct_UClass_AAFPSProjectile_Statics::NewProp_Mesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAFPSProjectile_Statics::NewProp_Projectile_MetaData[] = {
		{ "Category", "Movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AFPSProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAFPSProjectile_Statics::NewProp_Projectile = { "Projectile", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAFPSProjectile, Projectile), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAFPSProjectile_Statics::NewProp_Projectile_MetaData), Z_Construct_UClass_AAFPSProjectile_Statics::NewProp_Projectile_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAFPSProjectile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAFPSProjectile_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAFPSProjectile_Statics::NewProp_Projectile,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAFPSProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAFPSProjectile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAFPSProjectile_Statics::ClassParams = {
		&AAFPSProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAFPSProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAFPSProjectile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAFPSProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_AAFPSProjectile_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAFPSProjectile_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAFPSProjectile()
	{
		if (!Z_Registration_Info_UClass_AAFPSProjectile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAFPSProjectile.OuterSingleton, Z_Construct_UClass_AAFPSProjectile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAFPSProjectile.OuterSingleton;
	}
	template<> FPS_LEMOINEYOENN_API UClass* StaticClass<AAFPSProjectile>()
	{
		return AAFPSProjectile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAFPSProjectile);
	AAFPSProjectile::~AAFPSProjectile() {}
	struct Z_CompiledInDeferFile_FID_Users_ylemoine_Documents_Unreal_Projects_FPS_LemoineYoenn_Source_FPS_LemoineYoenn_Public_AFPSProjectile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ylemoine_Documents_Unreal_Projects_FPS_LemoineYoenn_Source_FPS_LemoineYoenn_Public_AFPSProjectile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAFPSProjectile, AAFPSProjectile::StaticClass, TEXT("AAFPSProjectile"), &Z_Registration_Info_UClass_AAFPSProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAFPSProjectile), 179276366U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ylemoine_Documents_Unreal_Projects_FPS_LemoineYoenn_Source_FPS_LemoineYoenn_Public_AFPSProjectile_h_2443249871(TEXT("/Script/FPS_LemoineYoenn"),
		Z_CompiledInDeferFile_FID_Users_ylemoine_Documents_Unreal_Projects_FPS_LemoineYoenn_Source_FPS_LemoineYoenn_Public_AFPSProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ylemoine_Documents_Unreal_Projects_FPS_LemoineYoenn_Source_FPS_LemoineYoenn_Public_AFPSProjectile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
