/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$op_Implicit
ENTRY_POINT: 06e24bf8
PROGRAM: Hyper-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__op_Implicit
               (long param_1,undefined8 param_2,void *param_3)

{
  int in_w9;
  int in_w10;
  long unaff_x19;
  
  param_1 = param_1 + (long)in_w9 * (long)in_w10;
  *(int *)(unaff_x19 + 0x18) = in_w9 + 1;
  memmove((void *)(param_1 + 0x20),param_3,0x48);
  thunk_FUN_049ee3d8(param_1 + 0x20,0);
  return;
}


