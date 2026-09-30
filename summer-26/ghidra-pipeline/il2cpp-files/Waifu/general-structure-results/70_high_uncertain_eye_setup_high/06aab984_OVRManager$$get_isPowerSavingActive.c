/*
FUNCTION_NAME: OVRManager$$get_isPowerSavingActive
ENTRY_POINT: 06aab984
PROGRAM: Waifu-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRManager__get_isPowerSavingActive(void)

{
  bool bVar1;
  float *pfVar2;
  float *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000000;
  float fStack0000000000000068;
  float fStack000000000000006c;
  
  FUN_0335b6c8();
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x21 + 0xcc3) = 1;
  if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
    FUN_033b9870();
  }
  fVar5 = SQRT(unaff_s11 * unaff_s11 + unaff_s9 * unaff_s9 + unaff_s10 * unaff_s10);
  if (fVar5 <= DAT_012edb5c) {
    if (DAT_086d7cc6 == '\0') {
      FUN_0335b6c8(&DAT_083d2c90,1);
      DataMemoryBarrier(2,3);
      DAT_086d7cc6 = '\x01';
    }
    pfVar2 = *(float **)(*(long *)(unaff_x20 + 0xc90) + 0xb8);
    fVar3 = *pfVar2;
    fVar4 = pfVar2[1];
    fVar5 = pfVar2[2];
  }
  else {
    fVar3 = unaff_s9 / fVar5;
    fVar4 = unaff_s10 / fVar5;
    fVar5 = unaff_s11 / fVar5;
  }
  fVar6 = unaff_s15 * unaff_s15 + in_stack_00000000._4_4_ * in_stack_00000000._4_4_;
  fVar8 = unaff_x19[1] - unaff_x19[1];
  fStack0000000000000068 = fStack0000000000000068 - *unaff_x19;
  fStack000000000000006c = fStack000000000000006c - unaff_x19[2];
  fVar9 = (fVar8 * fVar8 + fStack0000000000000068 * fStack0000000000000068 +
          fStack000000000000006c * fStack000000000000006c) - fVar6;
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  if (unaff_s14 < fVar9) {
    bVar1 = false;
  }
  else {
    fVar7 = fVar5 * fVar8 - fVar4 * fStack000000000000006c;
    fVar9 = fVar3 * fStack000000000000006c - fVar5 * fStack0000000000000068;
    fVar5 = fVar4 * fStack0000000000000068 - fVar3 * fVar8;
    bVar1 = fVar5 * fVar5 + fVar7 * fVar7 + fVar9 * fVar9 <= fVar6;
  }
  return bVar1;
}


