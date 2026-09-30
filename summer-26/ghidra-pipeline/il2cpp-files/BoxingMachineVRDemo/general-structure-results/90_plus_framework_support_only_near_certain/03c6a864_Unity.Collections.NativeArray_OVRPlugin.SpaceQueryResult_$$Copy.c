/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 03c6a864
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy
               (undefined8 param_1,long param_2)

{
  bool in_ZR;
  int in_w8;
  int in_w9;
  int in_w10;
  
  if (!in_ZR) {
    in_w10 = in_w9;
  }
  if (in_w8 < in_w10) {
    FUN_03c6834c(param_1,in_w8,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0xf0));
    return;
  }
  return;
}


