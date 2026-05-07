// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FlatNodesSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFlatNodesSettings() {}

// ********** Begin Cross Module References ********************************************************
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
FLATNODES_API UClass* Z_Construct_UClass_UFlatNodesSettings();
FLATNODES_API UClass* Z_Construct_UClass_UFlatNodesSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_FlatNodes();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFlatNodesSettings *******************************************************
void UFlatNodesSettings::StaticRegisterNativesUFlatNodesSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UFlatNodesSettings;
UClass* UFlatNodesSettings::GetPrivateStaticClass()
{
	using TClass = UFlatNodesSettings;
	if (!Z_Registration_Info_UClass_UFlatNodesSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FlatNodesSettings"),
			Z_Registration_Info_UClass_UFlatNodesSettings.InnerSingleton,
			StaticRegisterNativesUFlatNodesSettings,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UFlatNodesSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UFlatNodesSettings_NoRegister()
{
	return UFlatNodesSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFlatNodesSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Configure the Flat Nodes plug-in.\n */" },
		{ "IncludePath", "FlatNodesSettings.h" },
		{ "ModuleRelativePath", "Public/FlatNodesSettings.h" },
		{ "ToolTip", "Configure the Flat Nodes plug-in." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHeaderUseGradient_MetaData[] = {
		{ "Category", "Header" },
		{ "Comment", "/** Whether to use gradient on node header or not. Default: false */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Use Gradient" },
		{ "ModuleRelativePath", "Public/FlatNodesSettings.h" },
		{ "ToolTip", "Whether to use gradient on node header or not. Default: false" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeaderBrightness_MetaData[] = {
		{ "Category", "Header" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Brightness of node header. Default: 0.25 */" },
		{ "DisplayName", "Brightness" },
		{ "EditCondition", "!bHeaderUseGradient" },
		{ "ModuleRelativePath", "Public/FlatNodesSettings.h" },
		{ "ToolTip", "Brightness of node header. Default: 0.25" },
	};
#endif // WITH_METADATA
	static void NewProp_bHeaderUseGradient_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHeaderUseGradient;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeaderBrightness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlatNodesSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UFlatNodesSettings_Statics::NewProp_bHeaderUseGradient_SetBit(void* Obj)
{
	((UFlatNodesSettings*)Obj)->bHeaderUseGradient = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFlatNodesSettings_Statics::NewProp_bHeaderUseGradient = { "bHeaderUseGradient", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFlatNodesSettings), &Z_Construct_UClass_UFlatNodesSettings_Statics::NewProp_bHeaderUseGradient_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHeaderUseGradient_MetaData), NewProp_bHeaderUseGradient_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlatNodesSettings_Statics::NewProp_HeaderBrightness = { "HeaderBrightness", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlatNodesSettings, HeaderBrightness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeaderBrightness_MetaData), NewProp_HeaderBrightness_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlatNodesSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlatNodesSettings_Statics::NewProp_bHeaderUseGradient,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlatNodesSettings_Statics::NewProp_HeaderBrightness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlatNodesSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFlatNodesSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_FlatNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlatNodesSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlatNodesSettings_Statics::ClassParams = {
	&UFlatNodesSettings::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFlatNodesSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFlatNodesSettings_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFlatNodesSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UFlatNodesSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFlatNodesSettings()
{
	if (!Z_Registration_Info_UClass_UFlatNodesSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlatNodesSettings.OuterSingleton, Z_Construct_UClass_UFlatNodesSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFlatNodesSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFlatNodesSettings);
UFlatNodesSettings::~UFlatNodesSettings() {}
// ********** End Class UFlatNodesSettings *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FlatNodes_Source_FlatNodes_Public_FlatNodesSettings_h__Script_FlatNodes_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFlatNodesSettings, UFlatNodesSettings::StaticClass, TEXT("UFlatNodesSettings"), &Z_Registration_Info_UClass_UFlatNodesSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlatNodesSettings), 4082942327U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FlatNodes_Source_FlatNodes_Public_FlatNodesSettings_h__Script_FlatNodes_2553985167(TEXT("/Script/FlatNodes"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FlatNodes_Source_FlatNodes_Public_FlatNodesSettings_h__Script_FlatNodes_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FlatNodes_Source_FlatNodes_Public_FlatNodesSettings_h__Script_FlatNodes_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
