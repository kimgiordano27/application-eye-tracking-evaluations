/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$CopyFrom
ENTRY_POINT: 04699d50
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopyFrom(long param_1)

{
  uint in_w9;
  undefined4 unaff_w19;
  int unaff_w20;
  long unaff_x22;
  
  if ((in_w9 & 1) == 0) {
    param_1 = FUN_02feb2c4();
  }
  FUN_03d0a15c(unaff_x22 + (long)unaff_w20 * 0xc,unaff_w19,1,
               *(undefined8 *)(*(long *)(param_1 + 0xc0) + 0xd0));
  return;
}


