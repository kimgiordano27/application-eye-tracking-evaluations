/*
FUNCTION_NAME: FUN_05f6e780
ENTRY_POINT: 05f6e780
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2
*/


void FUN_05f6e780(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  
  puVar10 = Meta_XR_EnvironmentDepth_EnvironmentDepthManager_TypeInfo;
  puVar9 = System_Environment_TypeInfo;
  puVar8 = System_IO_EnumerationOptions_TypeInfo;
  puVar7 = Unity_VisualScripting_EnumerableCloner_TypeInfo;
  puVar6 = Google_Protobuf_Reflection_EnumValueOptions_TypeInfo;
  puVar5 = Google_Protobuf_Reflection_EnumValueDescriptorProto_TypeInfo;
  puVar4 = Google_Protobuf_Reflection_EnumValueDescriptor_TypeInfo;
  puVar3 = System_Runtime_Remoting_Contexts_DynamicPropertyCollection_TypeInfo;
  puVar2 = PTR_DAT_065cb098;
  puVar1 = PTR_DAT_065cb090;
  if ((DAT_06a81c3a & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Runtime_Remoting_Contexts_DynamicPropertyCollection_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cb090);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cb098);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Meta_XR_EnvironmentDepthManagerRaycastExtensions_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cfc98);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cfc90);
    AkMIDIEventCallbackInfo__get_byProgramNum(Meta_XR_EnvironmentDepthRaycaster_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_0663d640);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_IO_EnumerationOptions_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Meta_XR_EnvironmentDepth_EnvironmentDepthUtils_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Meta_XR_EnvironmentDepth_EnvironmentDepthManager_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Protobuf_Reflection_EnumValueDescriptorProto_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Environment_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Google_Protobuf_Reflection_EnumValueOptions_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Niantic_Peridot_Telemetry_EnvironmentMetadata_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Unity_VisualScripting_EnumerableCloner_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Protobuf_Reflection_EnumValueDescriptor_TypeInfo);
    DAT_06a81c3a = 1;
  }
  uVar11 = FUN_05ea9644(*(undefined8 *)puVar4,1,0,0,0);
  **(undefined8 **)(*(long *)puVar3 + 0xb8) = uVar11;
  uVar11 = FUN_05ea9644(*(undefined8 *)puVar5,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = uVar11;
  uVar11 = FUN_05ea9644(*(undefined8 *)puVar6,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10) = uVar11;
  uVar11 = FUN_05ea9644(*(undefined8 *)puVar7,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18) = uVar11;
  uVar11 = FUN_05ea9644(*(undefined8 *)puVar8,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20) = uVar11;
  uVar11 = FUN_05ea9644(*(undefined8 *)puVar9,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28) = uVar11;
  uVar11 = FUN_05ea9644(*(undefined8 *)puVar10,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x30) = uVar11;
  uVar11 = FUN_05ea9644(*(undefined8 *)Meta_XR_EnvironmentDepth_EnvironmentDepthUtils_TypeInfo,1,0,0
                        ,0);
  *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x38) = uVar11;
  uVar11 = FUN_05ea9644(*(undefined8 *)Niantic_Peridot_Telemetry_EnvironmentMetadata_TypeInfo,1,0,0,
                        0);
  lVar12 = *(long *)(*(long *)puVar3 + 0xb8);
  *(undefined8 *)(lVar12 + 0x40) = uVar11;
  *(undefined8 *)(lVar12 + 0x48) = *(undefined8 *)PTR_DAT_0663d640;
  uVar11 = thunk_FUN_02cea894(*(undefined8 *)Meta_XR_EnvironmentDepthRaycaster_TypeInfo);
  System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
            (uVar11,*(undefined8 *)Meta_XR_EnvironmentDepthManagerRaycastExtensions_TypeInfo);
  *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x58) = uVar11;
  uVar11 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
  FUN_04b3af64(uVar11,*(undefined8 *)puVar1);
  *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x60) = uVar11;
  uVar11 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cfc90);
  System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
            (uVar11,*(undefined8 *)PTR_DAT_065cfc98);
  *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x68) = uVar11;
  uVar11 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
  FUN_04b3af64(uVar11,*(undefined8 *)puVar1);
  *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x70) = uVar11;
  return;
}


