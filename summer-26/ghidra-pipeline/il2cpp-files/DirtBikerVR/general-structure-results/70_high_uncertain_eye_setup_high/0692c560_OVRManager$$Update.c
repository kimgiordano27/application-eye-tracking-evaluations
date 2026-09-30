/*
FUNCTION_NAME: OVRManager$$Update
ENTRY_POINT: 0692c560
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__Update(void)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  long unaff_x19;
  undefined4 unaff_w20;
  
  if (in_ZR || in_NG != in_OV) {
    unaff_w20 = 0;
  }
  *(undefined4 *)(unaff_x19 + 0x20) = unaff_w20;
  FUN_0692b90c();
  if (*(long *)(unaff_x19 + 0x60) != 0) {
    FUN_07cb2910(*(long *)(unaff_x19 + 0x60),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


