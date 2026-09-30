/*
FUNCTION_NAME: OVRManager$$set_suggestedCpuPerfLevel
ENTRY_POINT: 09082cc4
PROGRAM: Hyper-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRManager__set_suggestedCpuPerfLevel(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_0907ed1c(*(long *)(param_1 + 0x20),0);
    if (DAT_0b32d3e8 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0def8);
      DAT_0b32d3e8 = '\x01';
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      OVRManager__add_HMDAcquired(*(long *)(param_1 + 0x20),0);
      if (*(long *)(param_1 + 0x20) != 0) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


