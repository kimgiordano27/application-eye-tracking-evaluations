/*
FUNCTION_NAME: OVRManager$$get_audioOutId
ENTRY_POINT: 06aaa758
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_audioOutId(void)

{
  float *pfVar1;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  long unaff_x21;
  long unaff_x22;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float unaff_s8;
  float fVar10;
  float unaff_s9;
  float unaff_s10;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fStack0000000000000004;
  
  FUN_0335b6c8();
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x22 + 0x98f) = 1;
  fVar3 = unaff_s8 * unaff_s8 + unaff_s14 * unaff_s14 + unaff_s15 * unaff_s15;
  if (**(float **)(DAT_083ce8d0 + 0xb8) <= fVar3) {
    fVar8 = unaff_s8 * unaff_s13 + unaff_s14 * unaff_s9 + unaff_s15 * unaff_s10;
    unaff_s9 = unaff_s9 - (unaff_s14 * fVar8) / fVar3;
    unaff_s10 = unaff_s10 - (unaff_s15 * fVar8) / fVar3;
    unaff_s13 = unaff_s13 - (unaff_s8 * fVar8) / fVar3;
  }
  if (DAT_086d7cc3 == '\0') {
    FUN_0335b6c8(&DAT_083ce8b0,1);
    DataMemoryBarrier(2,3);
    DAT_086d7cc3 = '\x01';
  }
  if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
    FUN_033b9870();
  }
  fVar3 = DAT_012edb5c;
  fVar8 = SQRT(unaff_s13 * unaff_s13 + unaff_s9 * unaff_s9 + unaff_s10 * unaff_s10);
  if (fVar8 <= DAT_012edb5c) {
    if (DAT_086d7cc6 == '\0') {
      FUN_0335b6c8(&DAT_083d2c90,1);
      DataMemoryBarrier(2,3);
      DAT_086d7cc6 = '\x01';
    }
    pfVar1 = *(float **)(DAT_083d2c90 + 0xb8);
    fVar4 = *pfVar1;
    fVar9 = pfVar1[1];
    fVar8 = pfVar1[2];
  }
  else {
    fVar4 = unaff_s9 / fVar8;
    fVar9 = unaff_s10 / fVar8;
    fVar8 = unaff_s13 / fVar8;
  }
  if (DAT_086d7cc3 == '\0') {
    FUN_0335b6c8(&DAT_083ce8b0,1);
    DataMemoryBarrier(2,3);
    DAT_086d7cc3 = '\x01';
  }
  fVar10 = unaff_s8 * fVar9 - unaff_s15 * fVar8;
  fVar8 = unaff_s14 * fVar8 - unaff_s8 * fVar4;
  fVar4 = unaff_s15 * fVar4 - unaff_s14 * fVar9;
  if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
    FUN_033b9870();
  }
  fVar4 = SQRT(fVar4 * fVar4 + fVar10 * fVar10 + fVar8 * fVar8);
  if (fVar4 <= fVar3) {
    if (DAT_086d7cc6 == '\0') {
      FUN_0335b6c8(&DAT_083d2c90,1);
      DataMemoryBarrier(2,3);
      DAT_086d7cc6 = '\x01';
    }
    fVar10 = **(float **)(DAT_083d2c90 + 0xb8);
    fVar8 = (*(float **)(DAT_083d2c90 + 0xb8))[1];
  }
  else {
    fVar10 = fVar10 / fVar4;
    fVar8 = fVar8 / fVar4;
  }
  fStack0000000000000004 = fVar8;
  uVar7 = FUN_0355e190(0);
  lVar2 = *(long *)(unaff_x20 + 0x40);
  if (lVar2 != 0) {
    if (DAT_086ed278 == (code *)0x0) {
      DAT_086ed278 = (code *)FUN_033d1b68("UnityEngine.AnimationCurve::Evaluate(System.Single)");
    }
    (*DAT_086ed278)(uVar7,lVar2);
    FUN_07a008f8(0);
    uVar7 = FUN_07a00c3c(0);
    if (fVar8 * fVar8 + (float)uVar7 * (float)uVar7 + fVar10 * fVar10 != 0.0) {
      if (*(int *)(*(long *)(unaff_x21 + 0xfc8) + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar5 = FUN_07a17400();
      uVar6 = FUN_07a009b0(uVar7,0);
      *(undefined4 *)(unaff_x19 + 0xc) = uVar6;
      *(float *)(unaff_x19 + 0x10) = fVar10;
      *(float *)(unaff_x19 + 0x14) = fVar8;
      *(undefined4 *)(unaff_x19 + 0x18) = uVar5;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


