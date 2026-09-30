/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 04f9fd08
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>___ctor
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  long lVar1;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  uStack0000000000000008 = param_3[1];
  uStack0000000000000000 = *param_3;
  lVar1 = *(long *)(param_4 + 0x20);
  uStack0000000000000010 = param_1;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03775678(lVar1);
  }
  in_stack_00000028 = uStack0000000000000008;
  in_stack_00000020 = uStack0000000000000000;
  in_stack_00000030 = uStack0000000000000010;
  Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__AsReadOnlySpan
            (param_2,&stack0x00000020,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x58));
  return;
}


