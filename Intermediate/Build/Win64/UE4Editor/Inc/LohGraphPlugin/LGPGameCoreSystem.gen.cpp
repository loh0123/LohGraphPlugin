// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LohGraphPlugin/Public/LGPGameCoreSystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLGPGameCoreSystem() {}
// Cross Module References
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPGameCoreSystem_NoRegister();
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPGameCoreSystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_LohGraphPlugin();
// End Cross Module References
	void ULGPGameCoreSystem::StaticRegisterNativesULGPGameCoreSystem()
	{
	}
	UClass* Z_Construct_UClass_ULGPGameCoreSystem_NoRegister()
	{
		return ULGPGameCoreSystem::StaticClass();
	}
	struct Z_Construct_UClass_ULGPGameCoreSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULGPGameCoreSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_LohGraphPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPGameCoreSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Core System\n * \n * For Recording Writer / Reader Creation\n * - On Writer Create Add To List\n * - On Reader Create Add To List\n * For Thread Pool And Task Management\n * \n */" },
		{ "IncludePath", "LGPGameCoreSystem.h" },
		{ "ModuleRelativePath", "Public/LGPGameCoreSystem.h" },
		{ "ToolTip", "Core System\n\nFor Recording Writer / Reader Creation\n- On Writer Create Add To List\n- On Reader Create Add To List\nFor Thread Pool And Task Management" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULGPGameCoreSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULGPGameCoreSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULGPGameCoreSystem_Statics::ClassParams = {
		&ULGPGameCoreSystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULGPGameCoreSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPGameCoreSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULGPGameCoreSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULGPGameCoreSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULGPGameCoreSystem, 941948779);
	template<> LOHGRAPHPLUGIN_API UClass* StaticClass<ULGPGameCoreSystem>()
	{
		return ULGPGameCoreSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULGPGameCoreSystem(Z_Construct_UClass_ULGPGameCoreSystem, &ULGPGameCoreSystem::StaticClass, TEXT("/Script/LohGraphPlugin"), TEXT("ULGPGameCoreSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULGPGameCoreSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
