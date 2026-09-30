/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_52
ENTRY_POINT: 05bfbc34
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__810_52(float param_1,float param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  float unaff_s8;
  
  param_2 = unaff_s8 + param_2;
  if (param_2 < param_1 - *(float *)(unaff_x19 + 0x34)) {
    return;
  }
  lVar1 = FUN_069d6e00();
  if (lVar1 != 0) {
    FUN_069e71f4(lVar1,0);
    if (*(float *)(unaff_x19 + 0x2c) + *(float *)(unaff_x19 + 0x34) < unaff_s8 + param_2) {
      return;
    }
    lVar1 = FUN_069d6e00();
    if (DAT_075457aa == '\0') {
      FUN_03188a78(PTR_DAT_070c1a80);
      DAT_075457aa = '\x01';
    }
    if (lVar1 != 0) {
      lVar2 = *(long *)(*(long *)PTR_DAT_070c1a80 + 0xb8);
      FUN_069e83ec(unaff_s8 * *(float *)(lVar2 + 0x18),unaff_s8 * *(float *)(lVar2 + 0x1c),
                   unaff_s8 * *(float *)(lVar2 + 0x20),lVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


