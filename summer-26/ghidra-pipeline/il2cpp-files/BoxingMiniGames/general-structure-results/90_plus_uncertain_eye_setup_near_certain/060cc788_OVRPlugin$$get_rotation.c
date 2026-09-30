/*
FUNCTION_NAME: OVRPlugin$$get_rotation
ENTRY_POINT: 060cc788
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_rotation(void)

{
  long unaff_x19;
  
  FUN_071af638(0);
  if (unaff_x19 != 0) {
    FUN_071d140c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


