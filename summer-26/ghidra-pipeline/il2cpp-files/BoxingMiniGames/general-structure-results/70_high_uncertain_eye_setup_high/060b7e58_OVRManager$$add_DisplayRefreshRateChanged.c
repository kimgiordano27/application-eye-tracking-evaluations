/*
FUNCTION_NAME: OVRManager$$add_DisplayRefreshRateChanged
ENTRY_POINT: 060b7e58
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_DisplayRefreshRateChanged(long param_1)

{
  long lVar1;
  int in_w8;
  
  if (in_w8 == 2) {
    lVar1 = *(long *)(param_1 + 0x38);
  }
  else {
    if (in_w8 != 1) {
      return;
    }
    lVar1 = *(long *)(param_1 + 0x40);
  }
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  FUN_071d6a58(lVar1,0);
  return;
}


