/*
FUNCTION_NAME: OVRManager$$OnApplicationPause
ENTRY_POINT: 069309f0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OnApplicationPause(void)

{
  long unaff_x20;
  
  FUN_05e42d5c();
  if (unaff_x20 != 0) {
    FUN_070a129c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


