/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_50
ENTRY_POINT: 05bfbb5c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__810_50(undefined1 param_1 [16],float param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  float unaff_s8;
  float fVar4;
  
  uVar1 = FUN_069dc0b0(param_3,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if ((unaff_x21 & 1) == 0) {
    fVar4 = (float)FUN_069e3244(0);
    if ((unaff_x20 != 0) && (lVar2 = FUN_069d6e00(), lVar2 != 0)) {
      fVar4 = fVar4 * unaff_s8;
      FUN_069e71f4(lVar2,0);
      param_2 = fVar4 + param_2;
      if (param_2 < *(float *)(unaff_x19 + 0x2c) - *(float *)(unaff_x19 + 0x34)) {
        return;
      }
      lVar2 = FUN_069d6e00();
      if (lVar2 != 0) {
        FUN_069e71f4(lVar2,0);
        if (*(float *)(unaff_x19 + 0x2c) + *(float *)(unaff_x19 + 0x34) < fVar4 + param_2) {
          return;
        }
        lVar2 = FUN_069d6e00();
        if (DAT_075457aa == '\0') {
          FUN_03188a78(PTR_DAT_070c1a80);
          DAT_075457aa = '\x01';
        }
        if (lVar2 != 0) goto LAB_05bfbbc4;
      }
    }
  }
  else if ((unaff_x20 != 0) && (lVar2 = FUN_069d6e00(), lVar2 != 0)) {
    FUN_069e71f4(lVar2,0);
    lVar2 = FUN_069d6e00();
    if (DAT_075457aa == '\0') {
      FUN_03188a78(PTR_DAT_070c1a80);
      DAT_075457aa = '\x01';
    }
    if (lVar2 != 0) {
      fVar4 = unaff_s8 - param_2;
LAB_05bfbbc4:
      lVar3 = *(long *)(*(long *)PTR_DAT_070c1a80 + 0xb8);
      FUN_069e83ec(fVar4 * *(float *)(lVar3 + 0x18),fVar4 * *(float *)(lVar3 + 0x1c),
                   fVar4 * *(float *)(lVar3 + 0x20),lVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


