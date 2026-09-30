/*
FUNCTION_NAME: OVRPlugin$$get_version
ENTRY_POINT: 05bba6d0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_version(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  int unaff_w20;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float fVar2;
  
  if (0.0 <= unaff_s8) {
    FUN_05bbab5c(unaff_s9 - *(float *)(unaff_x19 + 0x68),param_1,*(undefined8 *)(unaff_x19 + 0x48));
    FUN_05bbabe4(unaff_s10 + *(float *)(unaff_x19 + 0x68));
    fVar2 = -*(float *)(unaff_x19 + 0x68);
  }
  else {
    FUN_05bbab5c(0,param_1,*(undefined8 *)(unaff_x19 + 0x48));
    FUN_05bbabe4(*(undefined4 *)(unaff_x19 + 0x68));
    fVar2 = -unaff_s9 - unaff_s10;
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_069d3a80(*(long *)(unaff_x19 + 0x20),0);
    uVar1 = FUN_05bba9a0(fVar2);
    fVar2 = 0.0;
    if ((unaff_s8 < 0.0) && (unaff_w20 != 0)) {
      fVar2 = *(float *)(unaff_x19 + 0x68) - unaff_s9;
    }
    FUN_05bbab5c(fVar2,uVar1,*(undefined8 *)(unaff_x19 + 0x40));
                    /* try { // try from 05bba78c to 05cba873 has its CatchHandler @ 05bba78c
                       catch() { ... } // from try @ 05bba78c with catch @ 05bba78c
                       catch() { ... } // from try @ 05bbaa40 with catch @ 05bba78c
                       catch() { ... } // from try @ 05bbaac8 with catch @ 05bba78c
                       catch() { ... } // from try @ 05bbaad8 with catch @ 05bba78c
                       catch() { ... } // from try @ 05bbab48 with catch @ 05bba78c
                       catch() { ... } // from try @ 05bbab74 with catch @ 05bba78c */
    if (0.0 <= unaff_s8) {
      unaff_s11 = *(float *)(unaff_x19 + 0x68);
    }
    else if (unaff_w20 != 0) {
      unaff_s11 = unaff_s10 + *(float *)(unaff_x19 + 0x68);
    }
    FUN_05bbabe4(unaff_s11);
    FUN_05bbac38(unaff_s9);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


