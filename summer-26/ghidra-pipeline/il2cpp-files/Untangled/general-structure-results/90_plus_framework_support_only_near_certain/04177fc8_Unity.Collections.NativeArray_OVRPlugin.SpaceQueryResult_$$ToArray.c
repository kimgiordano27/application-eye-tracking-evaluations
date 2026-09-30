/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$ToArray
ENTRY_POINT: 04177fc8
PROGRAM: Untangled-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ToArray
               (double param_1,undefined1 param_2 [16],double param_3,undefined8 param_4,
               long param_5)

{
  int iVar1;
  int in_w8;
  double in_x10;
  
  iVar1 = -0x80000000;
  if (param_3 * param_1 != in_x10) {
    iVar1 = (int)(param_3 * param_1);
  }
  if (in_w8 < iVar1) {
    FUN_04175a74(param_4,in_w8,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0xf0));
    return;
  }
  return;
}


