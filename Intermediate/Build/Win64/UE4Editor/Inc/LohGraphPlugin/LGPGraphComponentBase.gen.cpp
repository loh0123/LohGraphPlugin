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
