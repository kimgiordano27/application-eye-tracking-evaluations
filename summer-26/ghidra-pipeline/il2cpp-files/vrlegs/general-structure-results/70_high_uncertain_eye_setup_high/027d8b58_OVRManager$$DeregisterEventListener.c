/*
FUNCTION_NAME: OVRManager$$DeregisterEventListener
ENTRY_POINT: 027d8b58
PROGRAM: vrlegs-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRManager__DeregisterEventListener(void)

{
  int in_w8;
  long unaff_x20;
  
  if (in_w8 != 0) {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  if (unaff_x20 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b3fef0();
}


