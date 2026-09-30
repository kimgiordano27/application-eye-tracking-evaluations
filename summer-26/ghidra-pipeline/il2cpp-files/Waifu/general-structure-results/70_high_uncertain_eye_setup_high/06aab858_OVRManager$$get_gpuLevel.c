/*
FUNCTION_NAME: OVRManager$$get_gpuLevel
ENTRY_POINT: 06aab858
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


bool OVRManager__get_gpuLevel(undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  bool bVar1;
  long lVar2;
  float *pfVar3;
  code *in_x9;
  float *unaff_x19;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_s14;
  float fStack0000000000000004;
  float in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  undefined8 in_stack_00000018;
  float in_stack_00000068;
  float fStack000000000000006c;
  
  (*in_x9)(&stack0x00000008);
  in_stack_00000068 = in_stack_00000008;
  fStack000000000000006c = fStack0000000000000010;
  fStack0000000000000004 = in_stack_00000018._4_4_;
  fVar8 = in_stack_00000008;
  if (*(int *)(DAT_083cffc8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  fVar4 = (float)FUN_07a17308();
  if (DAT_086d7c56 == '\0') {
    FUN_0335b6c8(&DAT_083d2c90,1);
    DataMemoryBarrier(2,3);
    DAT_086d7c56 = '\x01';
  }
  lVar2 = *(long *)(DAT_083d2c90 + 0xb8);
  fVar10 = *(float *)(lVar2 + 0x18);
  fVar9 = *(float *)(lVar2 + 0x1c);
  fVar7 = *(float *)(lVar2 + 0x20);
  if (DAT_086d898f == '\0') {
    FUN_0335b6c8(&DAT_083ce8d0,1);
    DataMemoryBarrier(2,3);
    DAT_086d898f = '\x01';
  }
  fVar5 = fVar7 * fVar7 + fVar10 * fVar10 + fVar9 * fVar9;
  if (**(float **)(DAT_083ce8d0 + 0xb8) <= fVar5) {
    fVar6 = param_3 * fVar7 + fVar4 * fVar10 + fVar8 * fVar9;
    fVar4 = fVar4 - (fVar10 * fVar6) / fVar5;
    fVar8 = fVar8 - (fVar9 * fVar6) / fVar5;
    param_3 = param_3 - (fVar7 * fVar6) / fVar5;
  }
  if (DAT_086d7cc3 == '\0') {
    FUN_0335b6c8(&DAT_083ce8b0,1);
    DataMemoryBarrier(2,3);
    DAT_086d7cc3 = '\x01';
  }
  if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
    FUN_033b9870();
  }
  fVar7 = SQRT(param_3 * param_3 + fVar4 * fVar4 + fVar8 * fVar8);
  if (fVar7 <= DAT_012edb5c) {
    if (DAT_086d7cc6 == '\0') {
      FUN_0335b6c8(&DAT_083d2c90,1);
      DataMemoryBarrier(2,3);
      DAT_086d7cc6 = '\x01';
    }
    pfVar3 = *(float **)(DAT_083d2c90 + 0xb8);
    fVar4 = *pfVar3;
    fVar8 = pfVar3[1];
    param_3 = pfVar3[2];
  }
  else {
    fVar4 = fVar4 / fVar7;
    fVar8 = fVar8 / fVar7;
    param_3 = param_3 / fVar7;
  }
  fVar7 = fStack0000000000000014 * fStack0000000000000014 +
          fStack0000000000000004 * fStack0000000000000004;
  fVar9 = unaff_x19[1] - unaff_x19[1];
  in_stack_00000068 = in_stack_00000068 - *unaff_x19;
  fStack000000000000006c = fStack000000000000006c - unaff_x19[2];
  fVar10 = (fVar9 * fVar9 + in_stack_00000068 * in_stack_00000068 +
           fStack000000000000006c * fStack000000000000006c) - fVar7;
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  if (unaff_s14 < fVar10) {
    bVar1 = false;
  }
  else {
    fVar5 = param_3 * fVar9 - fVar8 * fStack000000000000006c;
    fVar10 = fVar4 * fStack000000000000006c - param_3 * in_stack_00000068;
    fVar8 = fVar8 * in_stack_00000068 - fVar4 * fVar9;
    bVar1 = fVar8 * fVar8 + fVar5 * fVar5 + fVar10 * fVar10 <= fVar7;
  }
  return bVar1;
}


