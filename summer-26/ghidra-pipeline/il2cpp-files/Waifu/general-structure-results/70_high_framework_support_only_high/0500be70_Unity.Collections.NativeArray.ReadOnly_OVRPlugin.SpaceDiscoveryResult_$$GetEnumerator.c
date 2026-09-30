/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$GetEnumerator
ENTRY_POINT: 0500be70
PROGRAM: Waifu-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__GetEnumerator
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 uStack0000000000000028;
  
  uStack0000000000000028 = param_3;
  uVar2 = FUN_03398650(**(undefined8 **)(*(long *)(param_4 + 0x20) + 0xc0),&stack0x00000028);
  lVar3 = **(long **)(*(long *)(param_4 + 0x20) + 0xc0);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0338f618(lVar3);
  }
  in_stack_00000010 = 0xffffffffffffffff;
  in_stack_00000008 = lVar3;
  in_stack_00000018 = param_2;
  uVar1 = FUN_06891484(&stack0x00000008,uVar2);
  return uVar1 & 1;
}


