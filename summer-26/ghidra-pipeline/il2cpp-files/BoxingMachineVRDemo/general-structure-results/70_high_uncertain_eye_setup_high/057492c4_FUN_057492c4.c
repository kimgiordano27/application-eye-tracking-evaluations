/*
FUNCTION_NAME: FUN_057492c4
ENTRY_POINT: 057492c4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_057492c4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  
  puVar3 = Meta_XR_EnvironmentDepth_EnvironmentDepthManager_TypeInfo;
  if ((DAT_06b7fe7a & 1) == 0) {
    FUN_02d6084c(System_Linq_Expressions_ExpressionStringBuilder_TypeInfo);
    FUN_02d6084c(System_Linq_Expressions_ExpressionType_TypeInfo);
    FUN_02d6084c(UnityEngine_InputSystem_UI_ExtendedAxisEventData_TypeInfo);
    FUN_02d6084c(UnityEngine_InputSystem_UI_ExtendedPointerEventData_TypeInfo);
    FUN_02d6084c(System_ComponentModel_ExtendedPropertyDescriptor_TypeInfo);
    FUN_02d6084c(System_ComponentModel_ExtenderProvidedPropertyAttribute_TypeInfo);
    FUN_02d6084c(PTR_DAT_06778308);
    FUN_02d6084c(Newtonsoft_Json_Serialization_ExtensionDataGetter_TypeInfo);
    FUN_02d6084c(System_Runtime_Serialization_ExtensionDataMember_TypeInfo);
    FUN_02d6084c(PTR_DAT_06766e90);
    FUN_02d6084c(PTR_DAT_06766e98);
    FUN_02d6084c(System_Runtime_Serialization_ExtensionDataObject_TypeInfo);
    FUN_02d6084c(PTR_DAT_06774060);
    FUN_02d6084c(System_Runtime_Serialization_ExtensionDataReader_TypeInfo);
    FUN_02d6084c(Newtonsoft_Json_Serialization_ExtensionDataSetter_TypeInfo);
    FUN_02d6084c(Unity_VisualScripting_ExtensionMethodCache_TypeInfo);
    FUN_02d6084c(PTR_DAT_0677f228);
    FUN_02d6084c(PTR_DAT_06762e38);
    FUN_02d6084c(
                UnityEngine_XR_ARFoundation_ARTrackableManager<XRAnchorSubsystem,_XRAnchorSubsystemDescriptor,_XRAnchorSubsystem_Provider,_XRAnchor,_ARAnchor>_TypeInfo
                );
    FUN_02d6084c(TMPro_Extents_TypeInfo);
    FUN_02d6084c(Unity_Services_Core_Configuration_ExternalUserId_TypeInfo);
    FUN_02d6084c(Unity_Services_Core_ExternalUserIdProperty_TypeInfo);
    FUN_02d6084c(UnityEngine_UIElements_UIR_ExtraRenderChainVEData_TypeInfo);
    FUN_02d6084c(UnityEngine_Timeline_Extrapolation_TypeInfo);
    FUN_02d6084c(Meta_XR_EnvironmentDepth_EnvironmentDepthManager_TypeInfo);
    FUN_02d6084c(UnityEngine_XR_OpenXR_Features_Interactions_EyeTrackingUsages_TypeInfo);
    FUN_02d6084c(UnityEngine_XR_Eyes_TypeInfo);
    FUN_02d6084c(RootMotion_FinalIK_FABRIKRoot_TypeInfo);
    FUN_02d6084c(RootMotion_FinalIK_FBIKChain_TypeInfo);
    FUN_02d6084c(PTR_DAT_067740a8);
    FUN_02d6084c(PTR_DAT_06780888);
    FUN_02d6084c(FBIKEarlyInit_TypeInfo);
    FUN_02d6084c(Newtonsoft_Json_Utilities_FSharpFunction_TypeInfo);
    FUN_02d6084c(Newtonsoft_Json_Utilities_FSharpUtils_TypeInfo);
    DAT_06b7fe7a = 1;
  }
  lVar4 = *(long *)puVar3;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar4 = *(long *)puVar3;
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
  thunk_FUN_02d6f164();
  if (lVar4 == 0) {
    plVar5 = (long *)thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06762e38);
    FUN_04fb2710(plVar5,0);
    puVar1 = PTR_DAT_0675e258;
    lVar4 = *(long *)(PTR_DAT_0675e258 + 0x28);
    if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar6 = FUN_05015c2c(lVar4 + 0x20,0);
    uVar7 = FUN_05015c2c(*(undefined8 *)System_Linq_Expressions_ExpressionType_TypeInfo,0);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    (**(code **)(*plVar5 + 0x318))(plVar5,uVar6,uVar7,*(undefined8 *)(*plVar5 + 800));
    uVar6 = FUN_05015c2c(*(long *)(puVar1 + 0x18) + 0x20,0);
    uVar7 = FUN_05015c2c(*(undefined8 *)UnityEngine_InputSystem_UI_ExtendedAxisEventData_TypeInfo,0)
    ;
    (**(code **)(*plVar5 + 0x318))(plVar5,uVar6,uVar7,*(undefined8 *)(*plVar5 + 800));
    uVar6 = FUN_05015c2c(*(long *)(puVar1 + 0x30) + 0x20,0);
    uVar7 = FUN_05015c2c(*(undefined8 *)
                          UnityEngine_XR_OpenXR_Features_Interactions_EyeTrackingUsages_TypeInfo,0);
    (**(code **)(*plVar5 + 0x318))(plVar5,uVar6,uVar7,*(undefined8 *)(*plVar5 + 800));
    uVar6 = FUN_05015c2c(*(long *)(puVar1 + 0x88) + 0x20,0);
    uVar7 = FUN_05015c2c(*(undefined8 *)UnityEngine_InputSystem_UI_ExtendedPointerEventData_TypeInfo
                         ,0);
    (**(code **)(*plVar5 + 0x318))(plVar5,uVar6,uVar7,*(undefined8 *)(*plVar5 + 800));
    uVar6 = FUN_05015c2c(*(long *)(puVar1 + 0x80) + 0x20,0);
    uVar7 = FUN_05015c2c(*(undefined8 *)System_Runtime_Serialization_ExtensionDataReader_TypeInfo,0)
    ;
    (**(code **)(*plVar5 + 0x318))(plVar5,uVar6,uVar7,*(undefined8 *)(*plVar5 + 800));
    uVar6 = FUN_05015c2c(*(long *)(puVar1 + 0x90) + 0x20,0);
    uVar7 = FUN_05015c2c(*(undefined8 *)RootMotion_FinalIK_FABRIKRoot_TypeInfo,0);
    (**(code **)(*plVar5 + 0x318))(plVar5,uVar6,uVar7,*(undefined8 *)(*plVar5 + 800));
    uVar6 = FUN_05015c2c(*(long *)(puVar1 + 0x48) + 0x20,0);
    uVar7 = FUN_05015c2c(*(undefined8 *)Unity_Services_Core_Configuration_ExternalUserId_TypeInfo,0)
    ;
    (**(code **)(*plVar5 + 0x318))(plVar5,uVar6,uVar7,*(undefined8 *)(*plVar5 + 800));
    uVar6 = FUN_05015c2c(*(long *)(puVar1 + 0x38) + 0x20,0);
    uVar7 = FUN_05015c2c(*(undefined8 *)TMPro_Extents_TypeInfo,0);
    (**(code **)(*plVar5 + 0x318))(plVar5,uVar6,uVar7,*(undefined8 *)(*plVar5 + 800));
    uVar6 = FUN_05015c2c(*(long *)(puVar1 + 0x68) + 0x20,0);
    uVar7 = FUN_05015c2c(*(undefined8 *)Unity_Services_Core_ExternalUserIdProperty_TypeInfo,0);
    (**(code **)(*plVar5 + 0x318))(plVar5,uVar6,uVar7,*(undefined8 *)(*plVar5 + 800));
    uVar6 = FUN_05015c2c(*(long *)(puVar1 + 0x78) + 0x20,0);
    uVar7 = FUN_05015c2c(*(undefined8 *)UnityEngine_XR_Eyes_TypeInfo,0);
    (**(code **)(*plVar5 + 0x318))(plVar5,uVar6,uVar7,*(undefined8 *)(*plVar5 + 800));
    uVar6 = FUN_05015c2c(*(long *)(puVar1 + 0x40) + 0x20,0);
    uVar7 = FUN_05015c2c(*(undefined8 *)FBIKEarlyInit_TypeInfo,0);
    (**(code **)(*plVar5 + 0x318))(plVar5,uVar6,uVar7,*(undefined8 *)(*plVar5 + 800));
    uVar6 = FUN_05015c2c(*(long *)(puVar1 + 0x50) + 0x20,0);
    uVar7 = FUN_05015c2c(*(undefined8 *)Newtonsoft_Json_Utilities_FSharpFunction_TypeInfo,0);
    (**(code **)(*plVar5 + 0x318))(plVar5,uVar6,uVar7,*(undefined8 *)(*plVar5 + 800));
    uVar6 = FUN_05015c2c(*(long *)(puVar1 + 0x70) + 0x20,0);
    uVar7 = FUN_05015c2c(*(undefined8 *)Newtonsoft_Json_Utilities_FSharpUtils_TypeInfo,0);
    (**(code **)(*plVar5 + 0x318))(plVar5,uVar6,uVar7,*(undefined8 *)(*plVar5 + 800));
    uVar6 = FUN_05015c2c(*(long *)(puVar1 + 0x10) + 0x20,0);
    puVar2 = PTR_DAT_06780888;
    uVar7 = FUN_05015c2c(*(undefined8 *)PTR_DAT_06780888,0);
    (**(code **)(*plVar5 + 0x318))(plVar5,uVar6,uVar7,*(undefined8 *)(*plVar5 + 800));
    uVar6 = FUN_05015c2c(*(long *)(puVar1 + 0x20) + 0x20,0);
    uVar7 = FUN_05015c2c(*(undefined8 *)puVar2,0);
    (**(code **)(*plVar5 + 0x318))(plVar5,uVar6,uVar7,*(undefined8 *)(*plVar5 + 800));
    uVar6 = FUN_05015c2c(*(undefined8 *)PTR_DAT_06778308,0);
    uVar7 = FUN_05015c2c(*(undefined8 *)
                          System_ComponentModel_ExtenderProvidedPropertyAttribute_TypeInfo,0);
    (**(code **)(*plVar5 + 0x318))(plVar5,uVar6,uVar7,*(undefined8 *)(*plVar5 + 800));
    uVar6 = FUN_05015c2c(*(undefined8 *)PTR_DAT_06766e98,0);
    uVar7 = FUN_05015c2c(*(undefined8 *)Newtonsoft_Json_Serialization_ExtensionDataGetter_TypeInfo,0
                        );
    (**(code **)(*plVar5 + 0x318))(plVar5,uVar6,uVar7,*(undefined8 *)(*plVar5 + 800));
    uVar6 = FUN_05015c2c(*(undefined8 *)PTR_DAT_06766e90,0);
    uVar7 = FUN_05015c2c(*(undefined8 *)System_Runtime_Serialization_ExtensionDataMember_TypeInfo,0)
    ;
    (**(code **)(*plVar5 + 0x318))(plVar5,uVar6,uVar7,*(undefined8 *)(*plVar5 + 800));
    uVar6 = FUN_05015c2c(*(undefined8 *)PTR_DAT_06774060,0);
    uVar7 = FUN_05015c2c(*(undefined8 *)System_Runtime_Serialization_ExtensionDataObject_TypeInfo,0)
    ;
    (**(code **)(*plVar5 + 0x318))(plVar5,uVar6,uVar7,*(undefined8 *)(*plVar5 + 800));
    uVar6 = FUN_05015c2c(*(undefined8 *)PTR_DAT_067740a8,0);
    uVar7 = FUN_05015c2c(*(undefined8 *)RootMotion_FinalIK_FBIKChain_TypeInfo,0);
    (**(code **)(*plVar5 + 0x318))(plVar5,uVar6,uVar7,*(undefined8 *)(*plVar5 + 800));
    uVar6 = FUN_05015c2c(*(undefined8 *)PTR_DAT_0677f228,0);
    uVar7 = FUN_05015c2c(*(undefined8 *)Unity_VisualScripting_ExtensionMethodCache_TypeInfo,0);
    (**(code **)(*plVar5 + 0x318))(plVar5,uVar6,uVar7,*(undefined8 *)(*plVar5 + 800));
    uVar6 = FUN_05015c2c(*(long *)(puVar1 + 0xa0) + 0x20,0);
    uVar7 = FUN_05015c2c(*(undefined8 *)System_Linq_Expressions_ExpressionStringBuilder_TypeInfo,0);
    (**(code **)(*plVar5 + 0x318))(plVar5,uVar6,uVar7,*(undefined8 *)(*plVar5 + 800));
    uVar6 = FUN_05015c2c(*(undefined8 *)
                          UnityEngine_XR_ARFoundation_ARTrackableManager<XRAnchorSubsystem,_XRAnchorSubsystemDescriptor,_XRAnchorSubsystem_Provider,_XRAnchor,_ARAnchor>_TypeInfo
                         ,0);
    uVar7 = FUN_05015c2c(*(undefined8 *)System_ComponentModel_ExtendedPropertyDescriptor_TypeInfo,0)
    ;
    (**(code **)(*plVar5 + 0x318))(plVar5,uVar6,uVar7,*(undefined8 *)(*plVar5 + 800));
    uVar6 = FUN_05015c2c(*(long *)(puVar1 + 0x98) + 0x20,0);
    uVar7 = FUN_05015c2c(*(undefined8 *)Newtonsoft_Json_Serialization_ExtensionDataSetter_TypeInfo,0
                        );
    (**(code **)(*plVar5 + 0x318))(plVar5,uVar6,uVar7,*(undefined8 *)(*plVar5 + 800));
    lVar4 = *(long *)puVar3;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar4 = *(long *)puVar3;
    }
    uVar7 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x18);
    uVar6 = FUN_05015c2c(*(undefined8 *)UnityEngine_Timeline_Extrapolation_TypeInfo,0);
    (**(code **)(*plVar5 + 0x318))(plVar5,uVar7,uVar6,*(undefined8 *)(*plVar5 + 800));
    uVar7 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
    uVar6 = FUN_05015c2c(*(undefined8 *)UnityEngine_UIElements_UIR_ExtraRenderChainVEData_TypeInfo,0
                        );
    (**(code **)(*plVar5 + 0x318))(plVar5,uVar7,uVar6,*(undefined8 *)(*plVar5 + 800));
    thunk_FUN_02d6f164();
    plVar8 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
    *plVar8 = (long)plVar5;
    thunk_FUN_02dd37b4(plVar8,plVar5);
  }
  lVar4 = *(long *)puVar3;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar4 = *(long *)puVar3;
  }
  uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10);
  thunk_FUN_02d6f164();
  return uVar6;
}


