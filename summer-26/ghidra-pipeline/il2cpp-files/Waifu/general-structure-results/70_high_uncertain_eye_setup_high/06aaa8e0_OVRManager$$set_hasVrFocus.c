/*
FUNCTION_NAME: OVRManager$$set_hasVrFocus
ENTRY_POINT: 06aaa8e0
PROGRAM: Waifu-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_hasVrFocus(void)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  long unaff_x21;
  long unaff_x23;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  float fVar5;
  float in_s5;
  float fVar6;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float fVar7;
  float unaff_s15;
  float fStack0000000000000004;
  
  fVar6 = unaff_s10 - unaff_s11;
  fVar7 = unaff_s12 - unaff_s13;
  if (*(int *)(*(long *)(unaff_x23 + 0x8b0) + 0xe0) == 0) {
    FUN_033b9870();
  }
  fVar5 = SQRT((unaff_s15 - unaff_s9) * (unaff_s15 - unaff_s9) + fVar6 * fVar6 + fVar7 * fVar7);
  if (fVar5 <= in_s5) {
    if (DAT_086d7cc6 == '\0') {
      FUN_0335b6c8(&DAT_083d2c90,1);
      DataMemoryBarrier(2,3);
      DAT_086d7cc6 = '\x01';
    }
    fVar6 = **(float **)(DAT_083d2c90 + 0xb8);
    fVar7 = (*(float **)(DAT_083d2c90 + 0xb8))[1];
  }
  else {
    fVar6 = fVar6 / fVar5;
    fVar7 = fVar7 / fVar5;
  }
  fStack0000000000000004 = fVar7;
  uVar4 = FUN_0355e190(0);
  lVar1 = *(long *)(unaff_x20 + 0x40);
  if (lVar1 != 0) {
    if (DAT_086ed278 == (code *)0x0) {
      DAT_086ed278 = (code *)FUN_033d1b68("UnityEngine.AnimationCurve::Evaluate(System.Single)");
    }
    (*DAT_086ed278)(uVar4,lVar1);
    FUN_07a008f8(0);
    uVar4 = FUN_07a00c3c(0);
    if (fVar7 * fVar7 + (float)uVar4 * (float)uVar4 + fVar6 * fVar6 != 0.0) {
      if (*(int *)(*(long *)(unaff_x21 + 0xfc8) + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar2 = FUN_07a17400();
      uVar3 = FUN_07a009b0(uVar4,0);
      *(undefined4 *)(unaff_x19 + 0xc) = uVar3;
      *(float *)(unaff_x19 + 0x10) = fVar6;
      *(float *)(unaff_x19 + 0x14) = fVar7;
      *(undefined4 *)(unaff_x19 + 0x18) = uVar2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


