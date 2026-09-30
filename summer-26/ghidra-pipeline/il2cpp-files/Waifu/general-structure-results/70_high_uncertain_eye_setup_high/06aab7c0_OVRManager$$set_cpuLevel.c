/*
FUNCTION_NAME: OVRManager$$set_cpuLevel
ENTRY_POINT: 06aab7c0
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRManager__set_cpuLevel
               (ulong param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  float *pfVar4;
  ulong uVar5;
  int *piVar6;
  float *unaff_x19;
  long unaff_x20;
  long *plVar7;
  long unaff_x21;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float unaff_s14;
  float fStack0000000000000004;
  float in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  undefined8 in_stack_00000018;
  float in_stack_00000068;
  float fStack000000000000006c;
  
  if ((param_1 & 1) == 0) {
    FUN_0335b6c8(&DAT_083cc4c8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083cffc8,1);
    DataMemoryBarrier(2,3);
    *(undefined1 *)(unaff_x21 + 0x131) = 1;
  }
  plVar7 = *(long **)(unaff_x20 + 0xd0);
  if (plVar7 == (long *)0x0) {
    bVar1 = true;
  }
  else {
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_083cc4c8) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_06aab854;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0338f71c(plVar7,DAT_083cc4c8,0);
LAB_06aab854:
    (*(code *)*puVar2)(&stack0x00000008,plVar7,puVar2[1]);
    in_stack_00000068 = in_stack_00000008;
    fStack000000000000006c = fStack0000000000000010;
    fStack0000000000000004 = in_stack_00000018._4_4_;
    fVar12 = in_stack_00000008;
    if (*(int *)(DAT_083cffc8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    fVar8 = (float)FUN_07a17308();
    if (DAT_086d7c56 == '\0') {
      FUN_0335b6c8(&DAT_083d2c90,1);
      DataMemoryBarrier(2,3);
      DAT_086d7c56 = '\x01';
    }
    lVar3 = *(long *)(DAT_083d2c90 + 0xb8);
    fVar14 = *(float *)(lVar3 + 0x18);
    fVar13 = *(float *)(lVar3 + 0x1c);
    fVar11 = *(float *)(lVar3 + 0x20);
    if (DAT_086d898f == '\0') {
      FUN_0335b6c8(&DAT_083ce8d0,1);
      DataMemoryBarrier(2,3);
      DAT_086d898f = '\x01';
    }
    fVar9 = fVar11 * fVar11 + fVar14 * fVar14 + fVar13 * fVar13;
    if (**(float **)(DAT_083ce8d0 + 0xb8) <= fVar9) {
      fVar10 = param_4 * fVar11 + fVar8 * fVar14 + fVar12 * fVar13;
      fVar8 = fVar8 - (fVar14 * fVar10) / fVar9;
      fVar12 = fVar12 - (fVar13 * fVar10) / fVar9;
      param_4 = param_4 - (fVar11 * fVar10) / fVar9;
    }
    if (DAT_086d7cc3 == '\0') {
      FUN_0335b6c8(&DAT_083ce8b0,1);
      DataMemoryBarrier(2,3);
      DAT_086d7cc3 = '\x01';
    }
    if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
      FUN_033b9870();
    }
    fVar11 = SQRT(param_4 * param_4 + fVar8 * fVar8 + fVar12 * fVar12);
    if (fVar11 <= DAT_012edb5c) {
      if (DAT_086d7cc6 == '\0') {
        FUN_0335b6c8(&DAT_083d2c90,1);
        DataMemoryBarrier(2,3);
        DAT_086d7cc6 = '\x01';
      }
      pfVar4 = *(float **)(DAT_083d2c90 + 0xb8);
      fVar8 = *pfVar4;
      fVar12 = pfVar4[1];
      param_4 = pfVar4[2];
    }
    else {
      fVar8 = fVar8 / fVar11;
      fVar12 = fVar12 / fVar11;
      param_4 = param_4 / fVar11;
    }
    fVar11 = fStack0000000000000014 * fStack0000000000000014 +
             fStack0000000000000004 * fStack0000000000000004;
    fVar13 = unaff_x19[1] - unaff_x19[1];
    in_stack_00000068 = in_stack_00000068 - *unaff_x19;
    fStack000000000000006c = fStack000000000000006c - unaff_x19[2];
    fVar14 = (fVar13 * fVar13 + in_stack_00000068 * in_stack_00000068 +
             fStack000000000000006c * fStack000000000000006c) - fVar11;
    if (fVar14 <= 0.0) {
      fVar14 = 0.0;
    }
    if (unaff_s14 < fVar14) {
      bVar1 = false;
    }
    else {
      fVar9 = param_4 * fVar13 - fVar12 * fStack000000000000006c;
      fVar14 = fVar8 * fStack000000000000006c - param_4 * in_stack_00000068;
      fVar12 = fVar12 * in_stack_00000068 - fVar8 * fVar13;
      bVar1 = fVar12 * fVar12 + fVar9 * fVar9 + fVar14 * fVar14 <= fVar11;
    }
  }
  return bVar1;
}


