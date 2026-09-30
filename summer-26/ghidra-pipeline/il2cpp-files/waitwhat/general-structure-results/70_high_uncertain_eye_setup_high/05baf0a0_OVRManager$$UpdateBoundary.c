/*
FUNCTION_NAME: OVRManager$$UpdateBoundary
ENTRY_POINT: 05baf0a0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__UpdateBoundary(undefined8 param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x22;
  
  lVar1 = thunk_FUN_031c3cac(param_1,**(undefined8 **)(unaff_x22 + 0x260));
  if (lVar1 != 0) {
    *(long *)(unaff_x19 + 0x30) = lVar1;
    lVar1 = thunk_FUN_031c3cac();
    if (lVar1 != 0) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03189058();
}


