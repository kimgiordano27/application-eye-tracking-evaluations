/*
FUNCTION_NAME: FUN_041a0018
ENTRY_POINT: 041a0018
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_041a0018(long param_1,long param_2)

{
  Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ToArray
            (param_1,0,*(undefined4 *)(param_1 + 0x18),0,
             *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x188));
  return;
}


