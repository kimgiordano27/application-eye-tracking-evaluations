/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking$$CreateInternalEyeTrackingContext
ENTRY_POINT: 059de484
PROGRAM: waitwhat-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


bool Oculus_Avatar2_OvrPluginTracking__CreateInternalEyeTrackingContext(void)

{
  long lVar1;
  long *unaff_x19;
  
  lVar1 = (**(code **)(*unaff_x19 + 0x248))();
  if (lVar1 != 0) {
                    /* try { // try from 059de49c to 05ade4eb has its CatchHandler @ 059de49c
                       catch() { ... } // from try @ 059de49c with catch @ 059de49c
                       catch() { ... } // from try @ 059de518 with catch @ 059de49c
                       catch() { ... } // from try @ 059de55c with catch @ 059de49c
                       catch() { ... } // from try @ 059de594 with catch @ 059de49c */
    return *(int *)(lVar1 + 0x18) == 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


