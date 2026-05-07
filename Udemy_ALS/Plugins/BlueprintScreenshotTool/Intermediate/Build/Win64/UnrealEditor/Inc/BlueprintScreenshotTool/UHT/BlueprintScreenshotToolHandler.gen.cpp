// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintScreenshotToolHandler.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBlueprintScreenshotToolHandler() {}

// ********** Begin Cross Module References ********************************************************
BLUEPRINTSCREENSHOTTOOL_API UClass* Z_Construct_UClass_UBlueprintScreenshotToolHandler();
BLUEPRINTSCREENSHOTTOOL_API UClass* Z_Construct_UClass_UBlueprintScreenshotToolHandler_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_BlueprintScreenshotTool();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBlueprintScreenshotToolHandler ******************************************
void UBlueprintScreenshotToolHandler::StaticRegisterNativesUBlueprintScreenshotToolHandler()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBlueprintScreenshotToolHandler;
UClass* UBlueprintScreenshotToolHandler::GetPrivateStaticClass()
{
	using TClass = UBlueprintScreenshotToolHandler;
	if (!Z_Registration_Info_UClass_UBlueprintScreenshotToolHandler.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BlueprintScreenshotToolHandler"),
			Z_Registration_Info_UClass_UBlueprintScreenshotToolHandler.InnerSingleton,
			StaticRegisterNativesUBlueprintScreenshotToolHandler,
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
	return Z_Registration_Info_UClass_UBlueprintScreenshotToolHandler.InnerSingleton;
}
UClass* Z_Construct_UClass_UBlueprintScreenshotToolHandler_NoRegister()
{
	return UBlueprintScreenshotToolHandler::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBlueprintScreenshotToolHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintScreenshotToolHandler.h" },
		{ "ModuleRelativePath", "Public/BlueprintScreenshotToolHandler.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintScreenshotToolHandler>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBlueprintScreenshotToolHandler_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintScreenshotTool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintScreenshotToolHandler_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintScreenshotToolHandler_Statics::ClassParams = {
	&UBlueprintScreenshotToolHandler::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintScreenshotToolHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlueprintScreenshotToolHandler_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlueprintScreenshotToolHandler()
{
	if (!Z_Registration_Info_UClass_UBlueprintScreenshotToolHandler.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintScreenshotToolHandler.OuterSingleton, Z_Construct_UClass_UBlueprintScreenshotToolHandler_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlueprintScreenshotToolHandler.OuterSingleton;
}
UBlueprintScreenshotToolHandler::UBlueprintScreenshotToolHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintScreenshotToolHandler);
UBlueprintScreenshotToolHandler::~UBlueprintScreenshotToolHandler() {}
// ********** End Class UBlueprintScreenshotToolHandler ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintScreenshotTool_Source_BlueprintScreenshotTool_Public_BlueprintScreenshotToolHandler_h__Script_BlueprintScreenshotTool_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintScreenshotToolHandler, UBlueprintScreenshotToolHandler::StaticClass, TEXT("UBlueprintScreenshotToolHandler"), &Z_Registration_Info_UClass_UBlueprintScreenshotToolHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintScreenshotToolHandler), 3045923846U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintScreenshotTool_Source_BlueprintScreenshotTool_Public_BlueprintScreenshotToolHandler_h__Script_BlueprintScreenshotTool_2208035780(TEXT("/Script/BlueprintScreenshotTool"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintScreenshotTool_Source_BlueprintScreenshotTool_Public_BlueprintScreenshotToolHandler_h__Script_BlueprintScreenshotTool_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintScreenshotTool_Source_BlueprintScreenshotTool_Public_BlueprintScreenshotToolHandler_h__Script_BlueprintScreenshotTool_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
