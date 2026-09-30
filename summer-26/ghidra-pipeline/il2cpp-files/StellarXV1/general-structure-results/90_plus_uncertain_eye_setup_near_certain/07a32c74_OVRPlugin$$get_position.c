/*
FUNCTION_NAME: OVRPlugin$$get_position
ENTRY_POINT: 07a32c74
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_position(long param_1)

{
  if (param_1 != 0) {
    FUN_089dc350(param_1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


