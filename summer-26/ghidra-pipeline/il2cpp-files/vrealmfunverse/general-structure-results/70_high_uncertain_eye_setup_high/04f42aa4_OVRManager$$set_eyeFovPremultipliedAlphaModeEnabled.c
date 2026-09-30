/*
FUNCTION_NAME: OVRManager$$set_eyeFovPremultipliedAlphaModeEnabled
ENTRY_POINT: 04f42aa4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_eyeFovPremultipliedAlphaModeEnabled(long param_1)

{
  long unaff_x19;
  
  if (param_1 != 0) {
    FUN_04f3eac4(param_1,0);
    if (*(long *)(unaff_x19 + 0x20) != 0) {
                    /* try { // try from 04f42adc to 05042c9f has its CatchHandler @ 04f42adc
                       catch() { ... } // from try @ 04f42adc with catch @ 04f42adc
                       catch() { ... } // from try @ 04f42cc0 with catch @ 04f42adc
                       catch() { ... } // from try @ 04f42d8c with catch @ 04f42adc
                       catch() { ... } // from try @ 04f42d98 with catch @ 04f42adc
                       catch() { ... } // from try @ 04f42ea4 with catch @ 04f42adc */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


