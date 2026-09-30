/*
FUNCTION_NAME: OVRPlugin$$GetSystemKeyboardDescription
ENTRY_POINT: 06ac9eb8
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSystemKeyboardDescription
               (float param_1,long param_2,undefined4 param_3,undefined8 *param_4,undefined8 param_5
               ,long param_6)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  float *pfVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  
  if ((DAT_086e225b & 1) == 0) {
    FUN_0335b6c8(&DAT_083cf7d8,1);
    DataMemoryBarrier(2,3);
    DAT_086e225b = 1;
  }
  uVar2 = *(uint *)(param_2 + 0xcc);
  *(undefined4 *)(param_2 + 0x10) = param_3;
  if (0 < (int)uVar2) {
    lVar3 = *(long *)(param_2 + 0x38);
    if (lVar3 == 0) goto LAB_06aca198;
    uVar5 = 0;
    do {
      if (*(uint *)(lVar3 + 0x18) <= uVar5) {
LAB_06aca194:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d44();
      }
      *(undefined8 *)(lVar3 + 0x20 + uVar5 * 8) = 0xffffffffffffffff;
      lVar6 = *(long *)(param_2 + 0x40);
      if (lVar6 == 0) goto LAB_06aca198;
      if (*(uint *)(lVar6 + 0x18) <= uVar5) goto LAB_06aca194;
      *(undefined8 *)(lVar6 + uVar5 * 8 + 0x20) = 0xffffffffffffffff;
      lVar6 = *(long *)(param_2 + 0x48);
      if (lVar6 == 0) goto LAB_06aca198;
      if (*(uint *)(lVar6 + 0x18) <= uVar5) goto LAB_06aca194;
      lVar1 = uVar5 * 8;
      uVar5 = uVar5 + 1;
      *(undefined8 *)(lVar6 + lVar1 + 0x20) = 0xffffffffffffffff;
    } while (uVar2 != uVar5);
  }
  if (DAT_086d7c54 == '\0') {
    FUN_0335b6c8(&DAT_083d2c90,1);
    DataMemoryBarrier(2,3);
    DAT_086d7c54 = '\x01';
  }
  lVar3 = *(long *)(DAT_083d2c90 + 0xb8);
  fVar11 = *(float *)(lVar3 + 0x10);
  fVar12 = *(float *)(lVar3 + 0x14);
  pfVar7 = (float *)(param_2 + 0x50);
  *pfVar7 = *(float *)(lVar3 + 0xc) * param_1;
  *(undefined8 *)(param_2 + 0x5c) = 0;
  *(undefined8 *)(param_2 + 0x54) = 0;
  *(float *)(param_2 + 100) = fVar11 * param_1;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(float *)(param_2 + 0x78) = fVar12 * param_1;
  *(undefined8 *)(param_2 + 0x84) = 0;
  *(undefined8 *)(param_2 + 0x7c) = 0;
  *(undefined4 *)(param_2 + 0x8c) = 0x3f800000;
  uVar4 = param_4[2];
  uVar10 = param_4[1];
  uVar9 = *param_4;
  *(undefined4 *)(param_2 + 0xa8) = *(undefined4 *)(param_4 + 3);
  *(undefined8 *)(param_2 + 0xa0) = uVar4;
  *(undefined8 *)(param_2 + 0x98) = uVar10;
  *(undefined8 *)(param_2 + 0x90) = uVar9;
  *(undefined8 *)(param_2 + 0xb4) = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_2 + 0xac) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_2 + 0xc0) = *(undefined8 *)(param_2 + 0xa4);
  *(undefined8 *)(param_2 + 0xb8) = *(undefined8 *)(param_2 + 0x9c);
  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar5 = FUN_07a0d2c4(param_6,0,0);
  if ((uVar5 & 1) != 0) {
    in_stack_00000128 = *(undefined8 *)(param_2 + 0x78);
    in_stack_00000120 = *(undefined8 *)(param_2 + 0x70);
    in_stack_00000138 = *(undefined8 *)(param_2 + 0x88);
    in_stack_00000130 = *(undefined8 *)(param_2 + 0x80);
    in_stack_00000108 = *(undefined8 *)(param_2 + 0x58);
    in_stack_00000100 = *(undefined8 *)pfVar7;
    in_stack_00000118 = *(undefined8 *)(param_2 + 0x68);
    in_stack_00000110 = *(undefined8 *)(param_2 + 0x60);
    if (param_6 == 0) {
LAB_06aca198:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    FUN_07a1bb0c(param_6,0);
    in_stack_00000068 = in_stack_00000128;
    in_stack_00000060 = in_stack_00000120;
    in_stack_00000078 = in_stack_00000138;
    in_stack_00000070 = in_stack_00000130;
    in_stack_00000048 = in_stack_00000108;
    in_stack_00000040 = in_stack_00000100;
    in_stack_00000058 = in_stack_00000118;
    in_stack_00000050 = in_stack_00000110;
    FUN_079fd444(&stack0x00000080,&stack0x00000040);
    in_stack_000000e8 = in_stack_000000a8;
    in_stack_000000e0 = in_stack_000000a0;
    in_stack_000000f8 = in_stack_000000b8;
    in_stack_000000f0 = in_stack_000000b0;
    in_stack_000000c8 = in_stack_00000088;
    in_stack_000000c0 = in_stack_00000080;
    in_stack_000000d8 = in_stack_00000098;
    in_stack_000000d0 = in_stack_00000090;
    *(undefined8 *)(param_2 + 0x78) = in_stack_000000a8;
    *(undefined8 *)(param_2 + 0x70) = in_stack_000000a0;
    *(undefined8 *)(param_2 + 0x88) = in_stack_000000b8;
    *(undefined8 *)(param_2 + 0x80) = in_stack_000000b0;
    *(undefined8 *)(param_2 + 0x58) = in_stack_00000088;
    *(undefined8 *)pfVar7 = in_stack_00000080;
    *(undefined8 *)(param_2 + 0x68) = in_stack_00000098;
    *(undefined8 *)(param_2 + 0x60) = in_stack_00000090;
    fVar12 = *(float *)(param_2 + 0x94);
    fVar13 = *(float *)(param_2 + 0x98);
    uVar4 = in_stack_00000080;
    uVar8 = FUN_07a17248(*(undefined4 *)(param_2 + 0x90),param_6,0);
    fVar14 = (float)uVar4;
    *(undefined4 *)(param_2 + 0xac) = uVar8;
    *(float *)(param_2 + 0xb0) = fVar12;
    *(float *)(param_2 + 0xb4) = fVar13;
    fVar11 = (float)FUN_07a172b0(param_6,0);
    fVar15 = *(float *)(param_2 + 0x9c);
    fVar18 = *(float *)(param_2 + 0xa0);
    fVar17 = *(float *)(param_2 + 0xa4);
    fVar16 = *(float *)(param_2 + 0xa8);
    *(float *)(param_2 + 0xb8) =
         (fVar12 * fVar17 + fVar14 * fVar15 + fVar11 * fVar16) - fVar13 * fVar18;
    *(float *)(param_2 + 0xbc) =
         (fVar13 * fVar15 + fVar14 * fVar18 + fVar12 * fVar16) - fVar11 * fVar17;
    *(float *)(param_2 + 0xc0) =
         (fVar11 * fVar18 + fVar14 * fVar17 + fVar13 * fVar16) - fVar12 * fVar15;
    *(float *)(param_2 + 0xc4) =
         ((fVar14 * fVar16 - fVar11 * fVar15) - fVar12 * fVar18) - fVar13 * fVar17;
  }
  FUN_068547f4(param_5,*(undefined8 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 200),0);
  return;
}


