/*
FUNCTION_NAME: OVRManager$$add_AudioInChanged
ENTRY_POINT: 06aa7868
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_AudioInChanged
               (long param_1,undefined1 param_2 [16],float param_3,float param_4,undefined8 param_5,
               long param_6)

{
  uint uVar1;
  uint uVar2;
  undefined1 in_ZR;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  float *pfVar8;
  long in_x9;
  int *in_x10;
  int *piVar9;
  long lVar10;
  long unaff_x19;
  long *plVar11;
  uint *puVar12;
  uint uVar13;
  long unaff_x21;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fStack000000000000000c;
  float fStack000000000000001c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float in_stack_00000048;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + -2) == param_6) {
      puVar5 = (undefined8 *)(param_1 + (long)(*in_x10 + 0x12) * 0x10 + 0x138);
      goto LAB_06aa788c;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar5 = (undefined8 *)FUN_0338f71c();
LAB_06aa788c:
  uVar6 = (*(code *)*puVar5)();
  if ((uVar6 & 1) == 0) {
LAB_06aa80dc:
    FUN_06aa7108();
    *(undefined4 *)(unaff_x19 + 0x74) = 0xffffffff;
    *(undefined1 *)(unaff_x19 + 0xb0) = 0;
  }
  else {
    plVar11 = *(long **)(unaff_x19 + 0x28);
    if (plVar11 == (long *)0x0) {
LAB_06aa81bc:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    lVar7 = *plVar11;
    uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar6 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)(unaff_x21 + 0xa30)) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_06aa78f4;
        }
        uVar6 = uVar6 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar6 != 0);
    }
                    /* try { // try from 06aa78e0 to 06ba7907 has its CatchHandler @ 06aa7df0 */
    puVar5 = (undefined8 *)FUN_0338f71c(plVar11,*(long *)(unaff_x21 + 0xa30),0);
LAB_06aa78f4:
    iVar4 = (*(code *)*puVar5)(plVar11,puVar5[1]);
    if (DAT_086d7c56 == '\0') {
      FUN_0335b6c8(&DAT_083d2c90,1);
      DataMemoryBarrier(2,3);
      DAT_086d7c56 = '\x01';
    }
    fVar26 = in_stack_00000048;
    fVar33 = fStack0000000000000040;
    if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_06aa81bc;
    lVar7 = *(long *)(DAT_083d2c90 + 0xb8);
                    /* try { // try from 06aa794c to 06ba7973 has its CatchHandler @ 06aa7dec */
    fVar30 = *(float *)(lVar7 + 0x18);
    fVar14 = *(float *)(lVar7 + 0x1c);
    fVar31 = *(float *)(lVar7 + 0x20);
    fVar15 = (float)FUN_07a18d2c(*(long *)(unaff_x19 + 0x30),0);
    if (DAT_086d7cc3 == '\0') {
      FUN_0335b6c8(&DAT_083ce8b0,1);
      DataMemoryBarrier(2,3);
      DAT_086d7cc3 = '\x01';
    }
    fVar33 = fVar33 - fVar15;
    param_3 = fStack0000000000000044 - param_3;
    fVar26 = fVar26 - param_4;
    if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
      FUN_033b9870();
    }
    fVar15 = DAT_012edb5c;
                    /* try { // try from 06aa79b4 to 06ba79bf has its CatchHandler @ 06aa7dd8 */
    fVar16 = SQRT(fVar26 * fVar26 + fVar33 * fVar33 + param_3 * param_3);
    if (fVar16 <= DAT_012edb5c) {
      if (DAT_086d7cc6 == '\0') {
        FUN_0335b6c8(&DAT_083d2c90,1);
        DataMemoryBarrier(2,3);
        DAT_086d7cc6 = '\x01';
      }
      pfVar8 = *(float **)(DAT_083d2c90 + 0xb8);
      fVar33 = *pfVar8;
      param_3 = pfVar8[1];
      fVar26 = pfVar8[2];
    }
    else {
      fVar33 = fVar33 / fVar16;
      param_3 = param_3 / fVar16;
      fVar26 = fVar26 / fVar16;
    }
    if (DAT_086d7cc3 == '\0') {
      FUN_0335b6c8(&DAT_083ce8b0,1);
      DataMemoryBarrier(2,3);
      DAT_086d7cc3 = '\x01';
    }
    fVar16 = fVar14 * fVar26 - fVar31 * param_3;
    fVar28 = fVar31 * fVar33 - fVar30 * fVar26;
    fVar27 = fVar30 * param_3 - fVar14 * fVar33;
    if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
      FUN_033b9870();
    }
    fVar23 = SQRT(fVar27 * fVar27 + fVar16 * fVar16 + fVar28 * fVar28);
    if (fVar23 <= fVar15) {
      if (DAT_086d7cc6 == '\0') {
        FUN_0335b6c8(&DAT_083d2c90,1);
        DataMemoryBarrier(2,3);
        DAT_086d7cc6 = '\x01';
      }
      pfVar8 = *(float **)(DAT_083d2c90 + 0xb8);
      fVar16 = *pfVar8;
      fVar28 = pfVar8[1];
      fVar27 = pfVar8[2];
    }
    else {
      fVar16 = fVar16 / fVar23;
      fVar28 = fVar28 / fVar23;
      fVar27 = fVar27 / fVar23;
    }
    if (iVar4 != 1) {
      fVar16 = -fVar16;
      fVar28 = -fVar28;
      fVar27 = -fVar27;
    }
    fVar23 = fVar28;
    fVar24 = fVar27;
    if (*(int *)(DAT_083cffc8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    fVar17 = (float)FUN_07a17308(&stack0x00000040,0);
    fVar32 = fVar23;
    fVar29 = fVar24;
    if (iVar4 == 1) {
      fVar17 = -fVar17;
      fVar32 = -fVar23;
      fVar29 = -fVar24;
    }
    if (*(int *)(DAT_083cffc8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    fVar18 = (float)FUN_07a17384(&stack0x00000040,0);
    if (iVar4 == 1) {
      fVar18 = -fVar18;
      fVar23 = -fVar23;
      fVar24 = -fVar24;
    }
    if (DAT_086d898f == '\0') {
      FUN_0335b6c8(&DAT_083ce8d0,1);
      DataMemoryBarrier(2,3);
      DAT_086d898f = '\x01';
    }
    fVar19 = fVar31 * fVar31 + fVar30 * fVar30 + fVar14 * fVar14;
    fStack000000000000001c = fVar33;
    fStack000000000000000c = param_3;
    fVar22 = fVar26;
    if (**(float **)(DAT_083ce8d0 + 0xb8) <= fVar19) {
      fVar22 = fVar31 * fVar26 + fVar30 * fVar33 + fVar14 * param_3;
      fStack000000000000001c = fVar33 - (fVar30 * fVar22) / fVar19;
      fStack000000000000000c = param_3 - (fVar14 * fVar22) / fVar19;
      fVar22 = fVar26 - (fVar31 * fVar22) / fVar19;
    }
    if (DAT_086d7cc3 == '\0') {
      FUN_0335b6c8(&DAT_083ce8b0,1);
      DataMemoryBarrier(2,3);
      DAT_086d7cc3 = '\x01';
    }
    if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
      FUN_033b9870();
    }
    fVar14 = SQRT(fVar22 * fVar22 +
                  fStack000000000000001c * fStack000000000000001c +
                  fStack000000000000000c * fStack000000000000000c);
    if (fVar14 <= fVar15) {
      if (DAT_086d7cc6 == '\0') {
        FUN_0335b6c8(&DAT_083d2c90,1);
        DataMemoryBarrier(2,3);
        DAT_086d7cc6 = '\x01';
      }
      pfVar8 = *(float **)(DAT_083d2c90 + 0xb8);
      fStack000000000000001c = *pfVar8;
      fStack000000000000000c = pfVar8[1];
      fVar22 = pfVar8[2];
    }
    else {
      fStack000000000000001c = fStack000000000000001c / fVar14;
      fStack000000000000000c = fStack000000000000000c / fVar14;
      fVar22 = fVar22 / fVar14;
    }
    if (DAT_086d898f == '\0') {
      FUN_0335b6c8(&DAT_083ce8d0,1);
      DataMemoryBarrier(2,3);
      DAT_086d898f = '\x01';
    }
    fVar14 = fVar26 * fVar26 + fVar33 * fVar33 + param_3 * param_3;
    if (**(float **)(DAT_083ce8d0 + 0xb8) <= fVar14) {
      fVar30 = fVar26 * fVar29 + fVar33 * fVar17 + param_3 * fVar32;
      fVar17 = fVar17 - (fVar33 * fVar30) / fVar14;
      fVar32 = fVar32 - (param_3 * fVar30) / fVar14;
      fVar29 = fVar29 - (fVar26 * fVar30) / fVar14;
    }
    if (DAT_086d7cc3 == '\0') {
      FUN_0335b6c8(&DAT_083ce8b0,1);
      DataMemoryBarrier(2,3);
      DAT_086d7cc3 = '\x01';
    }
    if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
      FUN_033b9870();
    }
    fVar14 = SQRT(fVar29 * fVar29 + fVar17 * fVar17 + fVar32 * fVar32);
    if (fVar14 <= fVar15) {
      if (DAT_086d7cc6 == '\0') {
        FUN_0335b6c8(&DAT_083d2c90,1);
        DataMemoryBarrier(2,3);
        DAT_086d7cc6 = '\x01';
      }
      pfVar8 = *(float **)(DAT_083d2c90 + 0xb8);
      fVar17 = *pfVar8;
      fVar32 = pfVar8[1];
      fVar29 = pfVar8[2];
    }
    else {
      fVar17 = fVar17 / fVar14;
      fVar32 = fVar32 / fVar14;
      fVar29 = fVar29 / fVar14;
    }
    fVar14 = (float)FUN_0355e190(fVar17,fVar32,fVar29,fVar16,fVar28,fVar27,0);
    plVar11 = *(long **)(unaff_x19 + 0x28);
    if (plVar11 == (long *)0x0) goto LAB_06aa81bc;
    lVar7 = *plVar11;
    uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar6 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)(unaff_x21 + 0xa30)) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_06aa7e88;
        }
        uVar6 = uVar6 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_0338f71c(plVar11,*(long *)(unaff_x21 + 0xa30),0);
LAB_06aa7e88:
    iVar4 = (*(code *)*puVar5)(plVar11,puVar5[1]);
    fVar15 = -fVar14;
    if (iVar4 != 1) {
      fVar15 = fVar14;
    }
    uVar25 = 0xc28c0000;
    fVar30 = fVar15 + 360.0;
    fVar14 = fVar30;
    if (-70.0 <= fVar15) {
      fVar14 = fVar15;
    }
    *(float *)(unaff_x19 + 0x7c) = fVar14;
    if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_06aa81bc;
    uVar20 = FUN_07a18d2c(*(long *)(unaff_x19 + 0x30),0);
    uVar21 = FUN_07a00a64(fVar33,0);
    plVar11 = *(long **)(unaff_x19 + 0x48);
    *(float *)(unaff_x19 + 0x90) = fVar30;
    *(undefined4 *)(unaff_x19 + 0x94) = uVar25;
    *(undefined4 *)(unaff_x19 + 0x98) = uVar21;
    *(float *)(unaff_x19 + 0x9c) = param_3;
    *(float *)(unaff_x19 + 0xa0) = fVar26;
    *(float *)(unaff_x19 + 0xa4) = fVar16;
    *(float *)(unaff_x19 + 0x80) = fVar17;
    *(float *)(unaff_x19 + 0x84) = fVar32;
    *(float *)(unaff_x19 + 0x88) = fVar29;
    *(undefined4 *)(unaff_x19 + 0x8c) = uVar20;
    if (plVar11 == (long *)0x0) goto LAB_06aa81bc;
    lVar7 = *plVar11;
    uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar6 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_083cc310) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_06aa7f5c;
        }
        uVar6 = uVar6 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_0338f71c(plVar11,DAT_083cc310,0);
LAB_06aa7f5c:
    uVar6 = (*(code *)*puVar5)(plVar11,puVar5[1]);
    if ((uVar6 & 1) == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = *(byte *)(unaff_x19 + 0x71) ^ 1;
    }
    plVar11 = *(long **)(unaff_x19 + 0x48);
    if (plVar11 == (long *)0x0) goto LAB_06aa81bc;
    lVar7 = *plVar11;
    uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar6 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_083cc310) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_06aa8008;
        }
        uVar6 = uVar6 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_0338f71c(plVar11,DAT_083cc310,0);
LAB_06aa8008:
    bVar3 = (*(code *)*puVar5)(plVar11,puVar5[1]);
    puVar12 = (uint *)(unaff_x19 + 0x74);
    *(byte *)(unaff_x19 + 0x71) = bVar3 & 1;
    if ((uVar13 & 0.5 < (fVar24 * fVar22 +
                        fVar18 * fStack000000000000001c + fVar23 * fStack000000000000000c) * 0.5 +
                        0.5 & *puVar12 >> 0x1f) == 0) {
      if ((int)*puVar12 < 0) {
        return;
      }
      plVar11 = *(long **)(unaff_x19 + 0x58);
      if (plVar11 == (long *)0x0) goto LAB_06aa81bc;
      lVar7 = *plVar11;
      uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_083cc310) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_06aa80cc;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_0338f71c(plVar11,DAT_083cc310,0);
LAB_06aa80cc:
      uVar6 = (*(code *)*puVar5)(plVar11,puVar5[1]);
      if ((uVar6 & 1) != 0) goto LAB_06aa80dc;
      uVar13 = *puVar12;
      if ((int)uVar13 < 0) {
        return;
      }
      if (*(char *)(unaff_x19 + 0xb0) != '\0') {
        return;
      }
      lVar7 = *(long *)(unaff_x19 + 0x38);
      if (lVar7 == 0) goto LAB_06aa81bc;
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (uVar1 <= uVar13) goto LAB_06aa81c0;
      lVar10 = *(long *)(lVar7 + (ulong)uVar13 * 8 + 0x20);
      if (lVar10 == 0) goto LAB_06aa81bc;
      if (*(float *)(lVar10 + 0x10) <= *(float *)(unaff_x19 + 0x7c)) {
        if (*(float *)(unaff_x19 + 0x7c) <= *(float *)(lVar10 + 0x14)) {
          return;
        }
        uVar2 = uVar1 - 1;
        if ((int)(uVar13 + 1) <= (int)uVar2) {
          uVar2 = uVar13 + 1;
        }
        *puVar12 = uVar2;
        if (uVar1 <= uVar2) goto LAB_06aa81c0;
        uVar6 = (ulong)(int)uVar2;
      }
      else {
        if ((int)uVar13 < 2) {
          uVar13 = 1;
        }
        uVar13 = uVar13 - 1;
        *puVar12 = uVar13;
        if (uVar1 <= uVar13) {
LAB_06aa81c0:
                    /* WARNING: Subroutine does not return */
          FUN_033d1d44();
        }
        uVar6 = (ulong)uVar13;
      }
      if (*(long *)(lVar7 + uVar6 * 8 + 0x20) == 0) goto LAB_06aa81bc;
    }
    else {
      lVar7 = FUN_06aa81c4(*(undefined4 *)(unaff_x19 + 0x7c));
      if (lVar7 == 0) goto LAB_06aa81bc;
      if (*(char *)(lVar7 + 0x18) == '\0') {
        *puVar12 = 0xffffffff;
        return;
      }
    }
    FUN_06aa7108();
  }
  return;
}


