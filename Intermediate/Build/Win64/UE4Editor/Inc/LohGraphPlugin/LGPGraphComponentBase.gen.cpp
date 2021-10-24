// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LohGraphPlugin/Public/LGPGraphComponentBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLGPGraphComponentBase() {}
// Cross Module References
	LOHGRAPHPLUGIN_API UEnum* Z_Construct_UEnum_LohGraphPlugin_EGraphComponentType();
	UPackage* Z_Construct_UPackage__Script_LohGraphPlugin();
	LOHGRAPHPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLGPWeightPrefab();
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPGraphComponentBase_NoRegister();
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPGraphComponentBase();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPGameCoreSystem_NoRegister();
// End Cross Module References
	static UEnum* EGraphComponentType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_LohGraphPlugin_EGraphComponentType, Z_Construct_UPackage__Script_LohGraphPlugin(), TEXT("EGraphComponentType"));
		}
		return Singleton;
	}
	template<> LOHGRAPHPLUGIN_API UEnum* StaticEnum<EGraphComponentType>()
	{
		return EGraphComponentType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGraphComponentType(EGraphComponentType_StaticEnum, TEXT("/Script/LohGraphPlugin"), TEXT("EGraphComponentType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_LohGraphPlugin_EGraphComponentType_Hash() { return 562972972U; }
	UEnum* Z_Construct_UEnum_LohGraphPlugin_EGraphComponentType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_LohGraphPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGraphComponentType"), 0, Get_Z_Construct_UEnum_LohGraphPlugin_EGraphComponentType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGraphComponentType::Base", (int64)EGraphComponentType::Base },
				{ "EGraphComponentType::Reader", (int64)EGraphComponentType::Reader },
				{ "EGraphComponentType::Writer", (int64)EGraphComponentType::Writer },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Base.DisplayName", "Base" },
				{ "Base.Name", "EGraphComponentType::Base" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/LGPGraphComponentBase.h" },
				{ "Reader.DisplayName", "Reader" },
				{ "Reader.Name", "EGraphComponentType::Reader" },
				{ "Writer.DisplayName", "Writer" },
				{ "Writer.Name", "EGraphComponentType::Writer" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_LohGraphPlugin,
				nullptr,
				"EGraphComponentType",
				"EGraphComponentType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FLGPWeightPrefab::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOHGRAPHPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FLGPWeightPrefab_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLGPWeightPrefab, Z_Construct_UPackage__Script_LohGraphPlugin(), TEXT("LGPWeightPrefab"), sizeof(FLGPWeightPrefab), Get_Z_Construct_UScriptStruct_FLGPWeightPrefab_Hash());
	}
	return Singleton;
}
template<> LOHGRAPHPLUGIN_API UScriptStruct* StaticStruct<FLGPWeightPrefab>()
{
	return FLGPWeightPrefab::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLGPWeightPrefab(FLGPWeightPrefab::StaticStruct, TEXT("/Script/LohGraphPlugin"), TEXT("LGPWeightPrefab"), false, nullptr, nullptr);
static struct FScriptStruct_LohGraphPlugin_StaticRegisterNativesFLGPWeightPrefab
{
	FScriptStruct_LohGraphPlugin_StaticRegisterNativesFLGPWeightPrefab()
	{
		UScriptStruct::DeferCppStructOps<FLGPWeightPrefab>(FName(TEXT("LGPWeightPrefab")));
	}
} ScriptStruct_LohGraphPlugin_StaticRegisterNativesFLGPWeightPrefab;
	struct Z_Construct_UScriptStruct_FLGPWeightPrefab_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeightList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WeightList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeBufferMultiply_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NodeBufferMultiply;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceToTargetMultiply_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceToTargetMultiply;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceToStartMultiply_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceToStartMultiply;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StepMultiply_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StepMultiply;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLGPWeightPrefab_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LGPGraphComponentBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLGPWeightPrefab_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLGPWeightPrefab>();
	}
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLGPWeightPrefab_Statics::NewProp_WeightList_Inner = { "WeightList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLGPWeightPrefab_Statics::NewProp_WeightList_MetaData[] = {
		{ "Category", "LGSTypePrefab | Variable" },
		{ "ModuleRelativePath", "Public/LGPGraphComponentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLGPWeightPrefab_Statics::NewProp_WeightList = { "WeightList", nullptr, (EPropertyFlags)0x0010000000000041, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLGPWeightPrefab, WeightList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLGPWeightPrefab_Statics::NewProp_WeightList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLGPWeightPrefab_Statics::NewProp_WeightList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLGPWeightPrefab_Statics::NewProp_NodeBufferMultiply_MetaData[] = {
		{ "Category", "LGSTypePrefab | Variable" },
		{ "ModuleRelativePath", "Public/LGPGraphComponentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLGPWeightPrefab_Statics::NewProp_NodeBufferMultiply = { "NodeBufferMultiply", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLGPWeightPrefab, NodeBufferMultiply), METADATA_PARAMS(Z_Construct_UScriptStruct_FLGPWeightPrefab_Statics::NewProp_NodeBufferMultiply_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLGPWeightPrefab_Statics::NewProp_NodeBufferMultiply_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLGPWeightPrefab_Statics::NewProp_DistanceToTargetMultiply_MetaData[] = {
		{ "Category", "LGSTypePrefab | Variable" },
		{ "ModuleRelativePath", "Public/LGPGraphComponentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLGPWeightPrefab_Statics::NewProp_DistanceToTargetMultiply = { "DistanceToTargetMultiply", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLGPWeightPrefab, DistanceToTargetMultiply), METADATA_PARAMS(Z_Construct_UScriptStruct_FLGPWeightPrefab_Statics::NewProp_DistanceToTargetMultiply_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLGPWeightPrefab_Statics::NewProp_DistanceToTargetMultiply_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLGPWeightPrefab_Statics::NewProp_DistanceToStartMultiply_MetaData[] = {
		{ "Category", "LGSTypePrefab | Variable" },
		{ "ModuleRelativePath", "Public/LGPGraphComponentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLGPWeightPrefab_Statics::NewProp_DistanceToStartMultiply = { "DistanceToStartMultiply", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLGPWeightPrefab, DistanceToStartMultiply), METADATA_PARAMS(Z_Construct_UScriptStruct_FLGPWeightPrefab_Statics::NewProp_DistanceToStartMultiply_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLGPWeightPrefab_Statics::NewProp_DistanceToStartMultiply_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLGPWeightPrefab_Statics::NewProp_StepMultiply_MetaData[] = {
		{ "Category", "LGSTypePrefab | Variable" },
		{ "ModuleRelativePath", "Public/LGPGraphComponentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLGPWeightPrefab_Statics::NewProp_StepMultiply = { "StepMultiply", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLGPWeightPrefab, StepMultiply), METADATA_PARAMS(Z_Construct_UScriptStruct_FLGPWeightPrefab_Statics::NewProp_StepMultiply_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLGPWeightPrefab_Statics::NewProp_StepMultiply_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLGPWeightPrefab_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLGPWeightPrefab_Statics::NewProp_WeightList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLGPWeightPrefab_Statics::NewProp_WeightList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLGPWeightPrefab_Statics::NewProp_NodeBufferMultiply,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLGPWeightPrefab_Statics::NewProp_DistanceToTargetMultiply,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLGPWeightPrefab_Statics::NewProp_DistanceToStartMultiply,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLGPWeightPrefab_Statics::NewProp_StepMultiply,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLGPWeightPrefab_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohGraphPlugin,
		nullptr,
		&NewStructOps,
		"LGPWeightPrefab",
		sizeof(FLGPWeightPrefab),
		alignof(FLGPWeightPrefab),
		Z_Construct_UScriptStruct_FLGPWeightPrefab_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLGPWeightPrefab_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLGPWeightPrefab_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLGPWeightPrefab_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLGPWeightPrefab()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLGPWeightPrefab_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LohGraphPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LGPWeightPrefab"), sizeof(FLGPWeightPrefab), Get_Z_Construct_UScriptStruct_FLGPWeightPrefab_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLGPWeightPrefab_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLGPWeightPrefab_Hash() { return 3196177693U; }
	void ULGPGraphComponentBase::StaticRegisterNativesULGPGraphComponentBase()
	{
	}
	UClass* Z_Construct_UClass_ULGPGraphComponentBase_NoRegister()
	{
		return ULGPGraphComponentBase::StaticClass();
	}
	struct Z_Construct_UClass_ULGPGraphComponentBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoreSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CoreSystem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULGPGraphComponentBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LohGraphPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPGraphComponentBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LGPGraphComponentBase.h" },
		{ "ModuleRelativePath", "Public/LGPGraphComponentBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPGraphComponentBase_Statics::NewProp_CoreSystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/LGPGraphComponentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULGPGraphComponentBase_Statics::NewProp_CoreSystem = { "CoreSystem", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULGPGraphComponentBase, CoreSystem), Z_Construct_UClass_ULGPGameCoreSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULGPGraphComponentBase_Statics::NewProp_CoreSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPGraphComponentBase_Statics::NewProp_CoreSystem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULGPGraphComponentBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPGraphComponentBase_Statics::NewProp_CoreSystem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULGPGraphComponentBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULGPGraphComponentBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULGPGraphComponentBase_Statics::ClassParams = {
		&ULGPGraphComponentBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULGPGraphComponentBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULGPGraphComponentBase_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULGPGraphComponentBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPGraphComponentBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULGPGraphComponentBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULGPGraphComponentBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULGPGraphComponentBase, 2260000796);
	template<> LOHGRAPHPLUGIN_API UClass* StaticClass<ULGPGraphComponentBase>()
	{
		return ULGPGraphComponentBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULGPGraphComponentBase(Z_Construct_UClass_ULGPGraphComponentBase, &ULGPGraphComponentBase::StaticClass, TEXT("/Script/LohGraphPlugin"), TEXT("ULGPGraphComponentBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULGPGraphComponentBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
