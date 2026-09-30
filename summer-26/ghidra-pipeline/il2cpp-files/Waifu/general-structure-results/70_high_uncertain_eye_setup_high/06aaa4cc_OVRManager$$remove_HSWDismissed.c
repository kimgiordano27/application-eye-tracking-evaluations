/*
FUNCTION_NAME: OVRManager$$remove_HSWDismissed
ENTRY_POINT: 06aaa4cc
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_HSWDismissed(undefined1 param_1 [16],float param_2,float param_3)

{
  float *pfVar1;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined4 uVar9;
  ulong uVar10;
  undefined4 uVar11;
  float fVar12;
  float unaff_s12;
  ulong uVar13;
  float unaff_s13;
  ulong uVar14;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000058;
  
  fVar12 = param_2;
  fVar3 = (float)FUN_07a18d2c();
  if (DAT_086d7cc3 == '\0') {
    FUN_0335b6c8(&DAT_083ce8b0,1);
    DataMemoryBarrier(2,3);
    DAT_086d7cc3 = '\x01';
  }
  fVar3 = unaff_s14 - fVar3;
  fVar12 = unaff_s13 - fVar12;
  param_3 = unaff_s12 - param_3;
  if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar10 = (ulong)(uint)(param_3 * param_3);
  fVar4 = SQRT(param_3 * param_3 + fVar3 * fVar3 + fVar12 * fVar12);
  if (fVar4 <= DAT_012edb5c) {
    if (DAT_086d7cc6 == '\0') {
      FUN_0335b6c8(&DAT_083d2c90,1);
      DataMemoryBarrier(2,3);
      DAT_086d7cc6 = '\x01';
    }
    pfVar1 = *(float **)(DAT_083d2c90 + 0xb8);
    fVar3 = *pfVar1;
    fVar12 = pfVar1[1];
    param_3 = pfVar1[2];
  }
  else {
    fVar3 = fVar3 / fVar4;
    fVar12 = fVar12 / fVar4;
    param_3 = param_3 / fVar4;
  }
  uVar6 = (ulong)(uint)fVar3;
  uVar8 = (ulong)(uint)(param_3 * param_3);
  uVar13 = (ulong)(uint)fVar12;
  uVar14 = (ulong)(uint)param_3;
  if (fVar3 * fVar3 + fVar12 * fVar12 + param_3 * param_3 == 0.0) {
    if (*(long *)(unaff_x20 + 0x28) == 0) goto LAB_06aaa6a0;
    uVar6 = FUN_07a194cc(*(long *)(unaff_x20 + 0x28),0);
    uVar13 = uVar8;
    uVar14 = uVar10;
  }
  FUN_07a00a64(uVar6,uVar13,uVar14,0);
  lVar2 = *(long *)(unaff_x20 + 0x38);
  if (lVar2 != 0) {
    if (DAT_086ed278 == (code *)0x0) {
      DAT_086ed278 = (code *)FUN_033d1b68("UnityEngine.AnimationCurve::Evaluate(System.Single)");
    }
    (*DAT_086ed278)((in_stack_00000058._4_4_ * (float)uVar14 +
                    unaff_s15 * (float)uVar6 + param_2 * (float)uVar13) * 0.5 + 0.5,lVar2);
    uVar7 = *(undefined4 *)(unaff_x19 + 0x10);
    uVar9 = *(undefined4 *)(unaff_x19 + 0x14);
    uVar11 = *(undefined4 *)(unaff_x19 + 0x18);
    uVar5 = FUN_07a00640(*(undefined4 *)(unaff_x19 + 0xc),0);
    *(undefined4 *)(unaff_x19 + 0xc) = uVar5;
    *(undefined4 *)(unaff_x19 + 0x10) = uVar7;
    *(undefined4 *)(unaff_x19 + 0x14) = uVar9;
    *(undefined4 *)(unaff_x19 + 0x18) = uVar11;
    return;
  }
LAB_06aaa6a0:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


