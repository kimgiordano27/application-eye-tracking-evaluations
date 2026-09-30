/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$set_Item
ENTRY_POINT: 06e23e7c
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


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__set_Item
               (double param_1,double param_2,double param_3,long param_4,long param_5)

{
  if (param_2 * param_3 == param_1 || (int)(param_2 * param_3) <= *(int *)(param_4 + 0x18)) {
    return;
  }
  FUN_06e21da0(param_4,*(int *)(param_4 + 0x18),
               *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0xf0));
  return;
}


