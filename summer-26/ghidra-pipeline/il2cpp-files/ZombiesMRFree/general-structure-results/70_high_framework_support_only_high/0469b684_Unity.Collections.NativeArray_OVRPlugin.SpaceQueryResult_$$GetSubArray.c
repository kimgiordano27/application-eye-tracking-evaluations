/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$GetSubArray
ENTRY_POINT: 0469b684
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_3
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__GetSubArray(ulong param_1)

{
  if ((param_1 & 1) == 0) {
    FUN_02feb2c4();
  }
  Unity_Collections_NativeArray<OVRPlugin_Vector2f>__get_Length();
  return;
}


