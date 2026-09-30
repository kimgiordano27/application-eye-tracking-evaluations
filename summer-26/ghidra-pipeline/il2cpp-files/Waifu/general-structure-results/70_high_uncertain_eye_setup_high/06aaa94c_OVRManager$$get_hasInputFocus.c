/*
FUNCTION_NAME: OVRManager$$get_hasInputFocus
ENTRY_POINT: 06aaa94c
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_hasInputFocus
               (undefined4 param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  long unaff_x21;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  float unaff_s8;
  float unaff_s14;
  float unaff_s15;
  float fStack0000000000000008;
  undefined4 uStack0000000000000010;
  
  fStack0000000000000008 = unaff_s15 / param_4;
  uStack0000000000000010 = param_1;
  uVar4 = FUN_0355e190(0);
  lVar1 = *(long *)(unaff_x20 + 0x40);
  if (lVar1 != 0) {
    if (DAT_086ed278 == (code *)0x0) {
      DAT_086ed278 = (code *)FUN_033d1b68("UnityEngine.AnimationCurve::Evaluate(System.Single)");
    }
    (*DAT_086ed278)(uVar4,lVar1);
    FUN_07a008f8(0);
    uVar4 = FUN_07a00c3c(0);
    if (unaff_s14 * unaff_s14 + (float)uVar4 * (float)uVar4 + unaff_s8 * unaff_s8 != 0.0) {
      if (*(int *)(*(long *)(unaff_x21 + 0xfc8) + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar2 = FUN_07a17400();
      uVar3 = FUN_07a009b0(uVar4,0);
      *(undefined4 *)(unaff_x19 + 0xc) = uVar3;
      *(float *)(unaff_x19 + 0x10) = unaff_s8;
      *(float *)(unaff_x19 + 0x14) = unaff_s14;
      *(undefined4 *)(unaff_x19 + 0x18) = uVar2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


