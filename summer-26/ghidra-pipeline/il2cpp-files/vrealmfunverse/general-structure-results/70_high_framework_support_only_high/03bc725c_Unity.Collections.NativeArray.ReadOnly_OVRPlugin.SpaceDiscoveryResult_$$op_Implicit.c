/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$op_Implicit
ENTRY_POINT: 03bc725c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__op_Implicit
               (undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  long unaff_x19;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000028;
  
  uStack0000000000000028 = *(undefined8 *)(unaff_x19 + 0x10);
  uStack0000000000000008 = param_1;
  uStack0000000000000018 = param_2;
  uVar1 = thunk_FUN_04dd5180(&stack0x00000008);
  return uVar1 & 1;
}


