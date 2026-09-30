/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$AsSpan
ENTRY_POINT: 03999d04
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__AsSpan
               (long param_1,long param_2,long param_3)

{
  double dVar1;
  
  dVar1 = (double)*(int *)(param_1 + 0x18) * DAT_01031350;
  if (dVar1 == INFINITY || (int)dVar1 <= *(int *)(param_2 + 0x18)) {
    return;
  }
                    /* try { // try from 03999d48 to 03a99d4b has its CatchHandler @ 03999d64 */
  FUN_03997c50(param_2,*(int *)(param_2 + 0x18),
               *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xf0));
  return;
}


