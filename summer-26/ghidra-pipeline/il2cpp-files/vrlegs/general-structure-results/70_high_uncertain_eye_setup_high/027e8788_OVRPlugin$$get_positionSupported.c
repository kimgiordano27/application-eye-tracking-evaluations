/*
FUNCTION_NAME: OVRPlugin$$get_positionSupported
ENTRY_POINT: 027e8788
PROGRAM: vrlegs-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_positionSupported(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  undefined8 in_stack_00000008;
  
  if (in_stack_00000008._4_1_ != '\0') {
    FUN_01a4adbc();
  }
  if (unaff_x20 == 0) {
    if (((unaff_w22 | 4) == 4) && (unaff_x21 < param_1)) {
      if (*(long *)(unaff_x19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_027de940();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01a28d1c();
}


