/*
FUNCTION_NAME: OVRManager$$get_eyeFovPremultipliedAlphaModeEnabled
ENTRY_POINT: 04f42a54
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_eyeFovPremultipliedAlphaModeEnabled(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_04f3eaf4(*(long *)(param_1 + 0x20),0);
    if (DAT_066c1f0a == '\0') {
      FUN_02b3c81c(PTR_DAT_06312438);
      DAT_066c1f0a = '\x01';
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_04f3eac4(*(long *)(param_1 + 0x20),0);
      if (*(long *)(param_1 + 0x20) != 0) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


