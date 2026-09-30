/*
FUNCTION_NAME: FUN_055fdb28
ENTRY_POINT: 055fdb28
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;pose_vector;telemetry
EVIDENCE: weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_4
*/


void FUN_055fdb28(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  puVar7 = 
  UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<CompilerContextData>>_TypeInfo
  ;
  puVar6 = 
  System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_TypeInfo;
  puVar5 = 
  System_Collections_Generic_Dictionary<UnityTransport_SendTarget,_BatchedSendQueue>_TypeInfo;
  puVar4 = 
  System_Collections_Generic_Dictionary<UnityPlayerAccountSettings_SupportedScopesEnum,_string>_TypeInfo
  ;
  puVar3 = 
  System_Collections_Generic_Dictionary<TypeConverterRegistry_ConverterKey,_Delegate>_TypeInfo;
  puVar2 = System_Collections_Generic_Dictionary<TypeArray_TypeArrayKey,_TypeArray>_TypeInfo;
  puVar1 = System_Collections_Generic_Dictionary<SymbolStore_Key,_Symbol>_TypeInfo;
  if ((DAT_06dbb8ef & 1) == 0) {
    FUN_02d965b8(
                UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<CompilerContextData>>_TypeInfo
                );
    FUN_02d965b8(
                System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_TypeInfo
                );
    FUN_02d965b8(System_Collections_Generic_Dictionary<TypeArray_TypeArrayKey,_TypeArray>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_Dictionary<SymbolStore_Key,_Symbol>_TypeInfo);
    FUN_02d965b8(
                System_Collections_Generic_Dictionary<UnityPlayerAccountSettings_SupportedScopesEnum,_string>_TypeInfo
                );
    FUN_02d965b8(
                System_Collections_Generic_Dictionary<TypeConverterRegistry_ConverterKey,_Delegate>_TypeInfo
                );
    FUN_02d965b8(
                System_Collections_Generic_Dictionary<UnityTransport_SendTarget,_BatchedSendQueue>_TypeInfo
                );
    DAT_06dbb8ef = 1;
  }
  FUN_0552aca4(param_1,0);
  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
  FUN_03e9972c(uVar8,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x10) = uVar8;
  LeanTween__value((undefined8 *)(param_1 + 0x10),uVar8);
  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
  FUN_0400f984(uVar8,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x18) = uVar8;
  LeanTween__value((undefined8 *)(param_1 + 0x18),uVar8);
  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
  FUN_055effa8();
  *(undefined8 *)(param_1 + 0x20) = uVar8;
  LeanTween__value((undefined8 *)(param_1 + 0x20),uVar8);
  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
  FUN_04e92874(uVar8,*(undefined8 *)puVar7);
  *(undefined8 *)(param_1 + 0x28) = uVar8;
  LeanTween__value((undefined8 *)(param_1 + 0x28),uVar8);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = param_2;
  return;
}


