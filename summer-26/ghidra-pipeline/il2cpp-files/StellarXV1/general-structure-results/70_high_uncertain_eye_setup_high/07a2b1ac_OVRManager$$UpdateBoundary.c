/*
FUNCTION_NAME: OVRManager$$UpdateBoundary
ENTRY_POINT: 07a2b1ac
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__UpdateBoundary(long param_1)

{
  if (param_1 != 0) {
    FUN_089c7534(param_1,0);
    FUN_07a2b1f8();
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


