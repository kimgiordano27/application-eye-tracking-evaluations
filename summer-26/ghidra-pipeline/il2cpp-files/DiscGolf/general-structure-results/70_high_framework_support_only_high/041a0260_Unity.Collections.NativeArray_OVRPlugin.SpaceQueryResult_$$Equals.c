/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Equals
ENTRY_POINT: 041a0260
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Equals
               (double param_1,double param_2,long param_3,long param_4)

{
  if (param_1 * param_2 == INFINITY || (int)(param_1 * param_2) <= *(int *)(param_3 + 0x18)) {
    return;
  }
  FUN_0419e264(param_3,*(int *)(param_3 + 0x18),
               *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xf0));
  return;
}


