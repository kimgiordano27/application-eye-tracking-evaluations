/*
FUNCTION_NAME: OVRManager$$InitOVRManager
ENTRY_POINT: 09085cbc
PROGRAM: Hyper-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_5
*/


void OVRManager__InitOVRManager(long param_1)

{
  long unaff_x19;
  
  if (param_1 != 0) {
                    /* try { // try from 09085cc8 to 09185cdf has its CatchHandler @ 09085d88 */
    FUN_0907ed1c(param_1,0);
    if (DAT_0b31f3e4 == '\0') {
                    /* try { // try from 09085ce0 to 09185d77 has its CatchHandler @ 0908596c */
      FUN_04947ee4(PTR_DAT_0ac0def8);
      DAT_0b31f3e4 = '\x01';
    }
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      OVRManager__add_HMDAcquired(*(long *)(unaff_x19 + 0x20),0);
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


