/*
FUNCTION_NAME: OVRManager$$Update
ENTRY_POINT: 06ab11b8
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__Update(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  float *pfVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *plVar6;
  long unaff_x21;
  long unaff_x22;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float unaff_s8;
  float unaff_s9;
  float fVar10;
  float unaff_s10;
  float fVar11;
  float unaff_s11;
  float fVar12;
  float fVar13;
  float unaff_s13;
  float fVar14;
  float fVar15;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  float in_stack_00000050;
  float fStack0000000000000054;
  undefined4 in_stack_00000058;
  undefined8 in_stack_000000a8;
  
  lVar2 = *(long *)(param_1 + 0xb8);
  fVar13 = *(float *)(lVar2 + 0x18);
  fVar15 = *(float *)(lVar2 + 0x1c);
  fVar14 = *(float *)(lVar2 + 0x20);
  if (DAT_086d898f == '\0') {
    FUN_0335b6c8(&DAT_083ce8d0,1);
    DataMemoryBarrier(2,3);
    DAT_086d898f = '\x01';
  }
  fVar7 = fVar14 * fVar14 + fVar13 * fVar13 + fVar15 * fVar15;
  fVar10 = unaff_s13 - unaff_s9;
  fVar11 = unaff_s11 - unaff_s10;
  fVar12 = in_stack_000000a8._4_4_ - unaff_s8;
  if (**(float **)(DAT_083ce8d0 + 0xb8) <= fVar7) {
    fVar8 = fVar12 * fVar14 + fVar10 * fVar13 + fVar11 * fVar15;
    fVar10 = fVar10 - (fVar13 * fVar8) / fVar7;
    fVar11 = fVar11 - (fVar15 * fVar8) / fVar7;
    fVar12 = fVar12 - (fVar14 * fVar8) / fVar7;
  }
  if (DAT_086d7cc3 == '\0') {
    FUN_0335b6c8(&DAT_083ce8b0,1);
    DataMemoryBarrier(2,3);
    DAT_086d7cc3 = '\x01';
  }
  if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
    FUN_033b9870();
  }
  fVar13 = SQRT(fVar12 * fVar12 + fVar10 * fVar10 + fVar11 * fVar11);
  if (fVar13 <= DAT_012edb5c) {
    if (DAT_086d7cc6 == '\0') {
      FUN_0335b6c8(&DAT_083d2c90,1);
      DataMemoryBarrier(2,3);
      DAT_086d7cc6 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)(unaff_x22 + 0xc90) + 0xb8);
    fVar10 = *pfVar3;
    fVar11 = pfVar3[1];
    fVar12 = pfVar3[2];
  }
  else {
    fVar10 = fVar10 / fVar13;
    fVar11 = fVar11 / fVar13;
    fVar12 = fVar12 / fVar13;
  }
  if (*(char *)(unaff_x21 + 0xc56) == '\0') {
    FUN_0335b6c8(&DAT_083d2c90,1);
    DataMemoryBarrier(2,3);
    *(undefined1 *)(unaff_x21 + 0xc56) = 1;
  }
  uVar9 = *(undefined4 *)(*(long *)(*(long *)(unaff_x22 + 0xc90) + 0xb8) + 0x18);
  fStack0000000000000054 = fVar12;
  uStack000000000000004c = FUN_07a009b0(fVar10,0);
  in_stack_00000050 = fVar11;
  in_stack_00000040 = *unaff_x20;
  in_stack_00000048 = *(undefined4 *)(unaff_x20 + 1);
  plVar6 = *(long **)(unaff_x19 + 0x138);
  in_stack_00000058 = uVar9;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  lVar2 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == DAT_083cd2b8) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar5 + 2) * 0x10 + 0x138);
        goto LAB_06ab13c8;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_0338f71c(plVar6,DAT_083cd2b8,2);
LAB_06ab13c8:
  (*(code *)*puVar1)(plVar6,&stack0x00000040,puVar1[1]);
  *(undefined8 *)(unaff_x19 + 0x14c) = in_stack_00000008;
  *(undefined8 *)(unaff_x19 + 0x144) = in_stack_00000000;
  *(undefined8 *)(unaff_x19 + 0x158) = uStack0000000000000014;
  *(ulong *)(unaff_x19 + 0x150) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
  return;
}


