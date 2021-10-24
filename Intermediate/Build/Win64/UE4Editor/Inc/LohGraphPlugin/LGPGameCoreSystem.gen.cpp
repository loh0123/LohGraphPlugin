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
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPGraphComponentBase_NoRegister();
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProcessReaderTask_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProcessReaderTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ProcessReaderTask;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProcessWriterTask_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProcessWriterTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ProcessWriterTask;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RegisterComponents_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegisterComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_RegisterComponents;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULGPGameCoreSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_LohGraphPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPGameCoreSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Core System\n * \n * For Recording Writer / Reader Creation\n * - On Writer Create Add To List\n * - On Reader Create Add To List\n * For Thread Pool And Task Management\n * - Stop Reader Thread If Detect Writer Thread Need Work\n * - Auto Start Reader Thread After All Writer Thread Done\n */" },
		{ "IncludePath", "LGPGameCoreSystem.h" },
		{ "ModuleRelativePath", "Public/LGPGameCoreSystem.h" },
		{ "ToolTip", "Core System\n\nFor Recording Writer / Reader Creation\n- On Writer Create Add To List\n- On Reader Create Add To List\nFor Thread Pool And Task Management\n- Stop Reader Thread If Detect Writer Thread Need Work\n- Auto Start Reader Thread After All Writer Thread Done" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_ProcessReaderTask_ElementProp = { "ProcessReaderTask", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULGPGraphComponentBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_ProcessReaderTask_MetaData[] = {
		{ "Comment", "// Process Counter /////////////////////////\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LGPGameCoreSystem.h" },
		{ "ToolTip", "Process Counter /" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_ProcessReaderTask = { "ProcessReaderTask", nullptr, (EPropertyFlags)0x0040008000000008, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULGPGameCoreSystem, ProcessReaderTask), METADATA_PARAMS(Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_ProcessReaderTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_ProcessReaderTask_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_ProcessWriterTask_ElementProp = { "ProcessWriterTask", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULGPGraphComponentBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_ProcessWriterTask_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LGPGameCoreSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_ProcessWriterTask = { "ProcessWriterTask", nullptr, (EPropertyFlags)0x0040008000000008, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULGPGameCoreSystem, ProcessWriterTask), METADATA_PARAMS(Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_ProcessWriterTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_ProcessWriterTask_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_RegisterComponents_ElementProp = { "RegisterComponents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULGPGraphComponentBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_RegisterComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LGPGameCoreSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_RegisterComponents = { "RegisterComponents", nullptr, (EPropertyFlags)0x0040008000000008, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULGPGameCoreSystem, RegisterComponents), METADATA_PARAMS(Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_RegisterComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_RegisterComponents_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULGPGameCoreSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_ProcessReaderTask_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_ProcessReaderTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_ProcessWriterTask_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_ProcessWriterTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_RegisterComponents_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_RegisterComponents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULGPGameCoreSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULGPGameCoreSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULGPGameCoreSystem_Statics::ClassParams = {
		&ULGPGameCoreSystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULGPGameCoreSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULGPGameCoreSystem_Statics::PropPointers),
		0,
		0x009000A0u,
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
	IMPLEMENT_CLASS(ULGPGameCoreSystem, 2819870747);
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
