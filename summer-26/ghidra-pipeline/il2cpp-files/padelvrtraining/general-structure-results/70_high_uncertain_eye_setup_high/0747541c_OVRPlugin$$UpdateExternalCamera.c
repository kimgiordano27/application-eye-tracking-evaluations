/*
FUNCTION_NAME: OVRPlugin$$UpdateExternalCamera
ENTRY_POINT: 0747541c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__UpdateExternalCamera(void)

{
  long unaff_x19;
  
  FUN_0747543c();
                    /* try { // try from 07475420 to 07575423 has its CatchHandler @ 07475488 */
  if (*(long *)(unaff_x19 + 0x68) != 0) {
                    /* try { // try from 07475430 to 07575437 has its CatchHandler @ 07475490 */
    FUN_08a1de64(*(long *)(unaff_x19 + 0x68),*(undefined4 *)(unaff_x19 + 0x50),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


