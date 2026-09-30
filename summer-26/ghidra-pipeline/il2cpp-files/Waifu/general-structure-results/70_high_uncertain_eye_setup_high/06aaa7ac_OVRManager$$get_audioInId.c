/*
FUNCTION_NAME: OVRManager$$get_audioInId
ENTRY_POINT: 06aaa7ac
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


void OVRManager__get_audioInId(float param_1,float param_2,undefined1 param_3 [16],float param_4)

{
  float fVar1;
  float *pfVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  long unaff_x21;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  float fVar7;
  float unaff_s8;
  float unaff_s9;
  float fVar8;
  float unaff_s10;
  float fVar9;
  float unaff_s13;
  float fVar10;
  float unaff_s14;
  float unaff_s15;
  float fStack0000000000000004;
  
  param_4 = param_4 + param_2;
  fVar8 = unaff_s9 - (unaff_s14 * param_4) / param_1;
  fVar9 = unaff_s10 - (unaff_s15 * param_4) / param_1;
  fVar10 = unaff_s13 - (unaff_s8 * param_4) / param_1;
  if (DAT_086d7cc3 == '\0') {
    FUN_0335b6c8(&DAT_083ce8b0,1);
    DataMemoryBarrier(2,3);
    DAT_086d7cc3 = '\x01';
  }
  if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
    FUN_033b9870();
  }
  fVar1 = DAT_012edb5c;
  fVar7 = SQRT(fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9);
  if (fVar7 <= DAT_012edb5c) {
    if (DAT_086d7cc6 == '\0') {
      FUN_0335b6c8(&DAT_083d2c90,1);
      DataMemoryBarrier(2,3);
      DAT_086d7cc6 = '\x01';
    }
    pfVar2 = *(float **)(DAT_083d2c90 + 0xb8);
    fVar8 = *pfVar2;
    fVar9 = pfVar2[1];
    fVar10 = pfVar2[2];
  }
  else {
    fVar8 = fVar8 / fVar7;
    fVar9 = fVar9 / fVar7;
    fVar10 = fVar10 / fVar7;
  }
  if (DAT_086d7cc3 == '\0') {
    FUN_0335b6c8(&DAT_083ce8b0,1);
    DataMemoryBarrier(2,3);
    DAT_086d7cc3 = '\x01';
  }
  fVar7 = unaff_s8 * fVar9 - unaff_s15 * fVar10;
  fVar10 = unaff_s14 * fVar10 - unaff_s8 * fVar8;
  fVar8 = unaff_s15 * fVar8 - unaff_s14 * fVar9;
  if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
    FUN_033b9870();
  }
  fVar8 = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar10 * fVar10);
  if (fVar8 <= fVar1) {
    if (DAT_086d7cc6 == '\0') {
      FUN_0335b6c8(&DAT_083d2c90,1);
      DataMemoryBarrier(2,3);
      DAT_086d7cc6 = '\x01';
    }
    fVar7 = **(float **)(DAT_083d2c90 + 0xb8);
    fVar10 = (*(float **)(DAT_083d2c90 + 0xb8))[1];
  }
  else {
    fVar7 = fVar7 / fVar8;
    fVar10 = fVar10 / fVar8;
  }
  fStack0000000000000004 = fVar10;
  uVar6 = FUN_0355e190(0);
  lVar3 = *(long *)(unaff_x20 + 0x40);
  if (lVar3 != 0) {
    if (DAT_086ed278 == (code *)0x0) {
      DAT_086ed278 = (code *)FUN_033d1b68("UnityEngine.AnimationCurve::Evaluate(System.Single)");
    }
    (*DAT_086ed278)(uVar6,lVar3);
    FUN_07a008f8(0);
    uVar6 = FUN_07a00c3c(0);
    if (fVar10 * fVar10 + (float)uVar6 * (float)uVar6 + fVar7 * fVar7 != 0.0) {
      if (*(int *)(*(long *)(unaff_x21 + 0xfc8) + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar4 = FUN_07a17400();
      uVar5 = FUN_07a009b0(uVar6,0);
      *(undefined4 *)(unaff_x19 + 0xc) = uVar5;
      *(float *)(unaff_x19 + 0x10) = fVar7;
      *(float *)(unaff_x19 + 0x14) = fVar10;
      *(undefined4 *)(unaff_x19 + 0x18) = uVar4;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


