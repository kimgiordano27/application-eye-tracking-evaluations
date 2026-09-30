/*
FUNCTION_NAME: OVRManager$$add_SceneCaptureComplete
ENTRY_POINT: 0745aac0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_SceneCaptureComplete(long param_1)

{
  long unaff_x19;
  long unaff_x21;
  
  if (param_1 != 0) {
    if (unaff_x21 != 0) {
      *(bool *)(unaff_x21 + 0xb4) = *(int *)(param_1 + 0x40) == 0;
      if ((*(long *)(unaff_x19 + 0x20) != 0) && (*(long *)(unaff_x19 + 0x40) != 0)) {
                    /* catch() { ... } // from try @ 0745aab8 with catch @ 0745aae8 */
                    /* try { // try from 0745aaf0 to 0755aaf7 has its CatchHandler @ 0745ab0c */
        *(bool *)(*(long *)(unaff_x19 + 0x40) + 0xa8) =
             *(int *)(*(long *)(unaff_x19 + 0x20) + 0x84) == 2;
                    /* try { // try from 0745aaf8 to 0755ab03 has its CatchHandler @ 0745a8cc */
        FUN_07457eb4();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0745ab10 to 0755ac2f has its CatchHandler @ 0745ab10
                       catch() { ... } // from try @ 0745ab10 with catch @ 0745ab10
                       catch() { ... } // from try @ 0745ac9c with catch @ 0745ab10
                       catch() { ... } // from try @ 0745acf0 with catch @ 0745ab10
                       catch() { ... } // from try @ 0745ad24 with catch @ 0745ab10
                       catch() { ... } // from try @ 0745ad6c with catch @ 0745ab10 */
  FUN_03d2d548();
}


