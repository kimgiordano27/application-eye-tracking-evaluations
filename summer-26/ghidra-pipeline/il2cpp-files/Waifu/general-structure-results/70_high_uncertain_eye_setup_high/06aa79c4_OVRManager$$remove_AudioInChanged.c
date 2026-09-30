/*
FUNCTION_NAME: OVRManager$$remove_AudioInChanged
ENTRY_POINT: 06aa79c4
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_AudioInChanged(float param_1,undefined1 param_2 [16],float param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  float *pfVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long unaff_x19;
  int unaff_w20;
  long *plVar11;
  uint *puVar12;
  uint uVar13;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x25;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float unaff_s8;
  float fVar23;
  float unaff_s9;
  float fVar24;
  float fVar25;
  float fVar26;
  float unaff_s12;
  float unaff_s13;
  float fVar27;
  float fVar28;
  float fVar29;
  float unaff_s15;
  float fStack0000000000000004;
  float fStack000000000000000c;
  float fStack0000000000000014;
  float fStack000000000000001c;
  float fStack0000000000000024;
  float fStack000000000000002c;
  float in_stack_00000030;
  float fStack0000000000000034;
  float fStack000000000000003c;
  
  fStack0000000000000034 = SQRT(unaff_s8 * unaff_s8 + param_1);
  fStack000000000000003c = param_3;
  if (fStack0000000000000034 <= param_3) {
    if (DAT_086d7cc6 == '\0') {
      FUN_0335b6c8(&DAT_083d2c90,1);
      DataMemoryBarrier(2,3);
                    /* try { // try from 06aa7a14 to 06ba7a2f has its CatchHandler @ 06aa7de8 */
      DAT_086d7cc6 = '\x01';
    }
    pfVar6 = *(float **)(*(long *)(unaff_x22 + 0xc90) + 0xb8);
    fStack000000000000002c = *pfVar6;
    fVar19 = pfVar6[1];
    fStack0000000000000034 = pfVar6[2];
  }
  else {
    fStack000000000000002c = unaff_s15 / fStack0000000000000034;
    fVar19 = unaff_s9 / fStack0000000000000034;
    fStack0000000000000034 = unaff_s8 / fStack0000000000000034;
  }
  fVar23 = in_stack_00000030 * fStack0000000000000034;
                    /* try { // try from 06aa7a30 to 06ba7a37 has its CatchHandler @ 06aa7dbc */
  fVar25 = unaff_s13 * fStack000000000000002c;
                    /* try { // try from 06aa7a3c to 06ba7a3f has its CatchHandler @ 06aa7db8 */
  fVar28 = unaff_s12 * fStack0000000000000034;
                    /* try { // try from 06aa7a40 to 06ba7a43 has its CatchHandler @ 06aa7de8 */
  fVar27 = in_stack_00000030 * fStack000000000000002c;
  fStack000000000000001c = unaff_s13;
  if (*(char *)(unaff_x23 + 0xcc3) == '\0') {
    FUN_0335b6c8(&DAT_083ce8b0,1);
    DataMemoryBarrier(2,3);
    *(undefined1 *)(unaff_x23 + 0xcc3) = 1;
  }
  fVar23 = fVar23 - unaff_s13 * fVar19;
  fVar25 = fVar25 - fVar28;
  fVar27 = unaff_s12 * fVar19 - fVar27;
  if (*(int *)(*(long *)(unaff_x25 + 0x8b0) + 0xe0) == 0) {
    FUN_033b9870();
  }
  fVar28 = fStack000000000000002c;
                    /* try { // try from 06aa7a94 to 06ba7a9b has its CatchHandler @ 06aa7dc0 */
  fVar20 = SQRT(fVar27 * fVar27 + fVar23 * fVar23 + fVar25 * fVar25);
  if (fVar20 <= fStack000000000000003c) {
    if (DAT_086d7cc6 == '\0') {
      FUN_0335b6c8(&DAT_083d2c90,1);
      DataMemoryBarrier(2,3);
      DAT_086d7cc6 = '\x01';
    }
    pfVar6 = *(float **)(*(long *)(unaff_x22 + 0xc90) + 0xb8);
    fVar23 = *pfVar6;
    fVar25 = pfVar6[1];
    fVar27 = pfVar6[2];
  }
  else {
    fVar23 = fVar23 / fVar20;
    fVar25 = fVar25 / fVar20;
    fVar27 = fVar27 / fVar20;
  }
  fVar20 = fStack0000000000000034;
  if (unaff_w20 != 1) {
    fVar23 = -fVar23;
    fVar25 = -fVar25;
    fVar27 = -fVar27;
  }
  fVar21 = fVar27;
  fStack0000000000000024 = fVar25;
  if (*(int *)(DAT_083cffc8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  fVar14 = (float)FUN_07a17308(&stack0x00000040,0);
  fVar29 = fVar25;
  fVar26 = fVar21;
  if (unaff_w20 == 1) {
    fVar14 = -fVar14;
    fVar29 = -fVar25;
    fVar26 = -fVar21;
  }
  if (*(int *)(DAT_083cffc8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  fVar15 = (float)FUN_07a17384(&stack0x00000040,0);
  if (unaff_w20 == 1) {
    fVar15 = -fVar15;
    fVar25 = -fVar25;
    fVar21 = -fVar21;
  }
  fStack0000000000000014 = fVar25;
  if (DAT_086d898f == '\0') {
    FUN_0335b6c8(&DAT_083ce8d0,1);
    DataMemoryBarrier(2,3);
    DAT_086d898f = '\x01';
  }
  fVar16 = fStack000000000000001c * fStack000000000000001c +
           unaff_s12 * unaff_s12 + in_stack_00000030 * in_stack_00000030;
  fVar25 = fVar28;
  fVar24 = fVar19;
  if (**(float **)(DAT_083ce8d0 + 0xb8) <= fVar16) {
    fVar20 = fStack000000000000001c * fStack0000000000000034 +
             unaff_s12 * fVar28 + in_stack_00000030 * fVar19;
    fVar25 = fVar28 - (unaff_s12 * fVar20) / fVar16;
    fVar24 = fVar19 - (in_stack_00000030 * fVar20) / fVar16;
    fVar20 = fStack0000000000000034 - (fStack000000000000001c * fVar20) / fVar16;
  }
  if (*(char *)(unaff_x23 + 0xcc3) == '\0') {
    FUN_0335b6c8(&DAT_083ce8b0,1);
    DataMemoryBarrier(2,3);
    *(undefined1 *)(unaff_x23 + 0xcc3) = 1;
  }
  if (*(int *)(*(long *)(unaff_x25 + 0x8b0) + 0xe0) == 0) {
    FUN_033b9870();
  }
  fVar16 = SQRT(fVar20 * fVar20 + fVar25 * fVar25 + fVar24 * fVar24);
  if (fVar16 <= fStack000000000000003c) {
    if (DAT_086d7cc6 == '\0') {
      FUN_0335b6c8(&DAT_083d2c90,1);
      DataMemoryBarrier(2,3);
      DAT_086d7cc6 = '\x01';
    }
    pfVar6 = *(float **)(*(long *)(unaff_x22 + 0xc90) + 0xb8);
    fStack000000000000001c = *pfVar6;
    fStack000000000000000c = pfVar6[1];
    fVar20 = pfVar6[2];
  }
  else {
    fStack000000000000001c = fVar25 / fVar16;
    fStack000000000000000c = fVar24 / fVar16;
    fVar20 = fVar20 / fVar16;
  }
  fVar25 = fStack0000000000000034;
  if (DAT_086d898f == '\0') {
    FUN_0335b6c8(&DAT_083ce8d0,1);
    DataMemoryBarrier(2,3);
    DAT_086d898f = '\x01';
  }
  fVar24 = fVar25 * fVar25 + fVar28 * fVar28 + fVar19 * fVar19;
  if (**(float **)(DAT_083ce8d0 + 0xb8) <= fVar24) {
    fVar16 = fVar25 * fVar26 + fVar28 * fVar14 + fVar19 * fVar29;
    fVar14 = fVar14 - (fVar28 * fVar16) / fVar24;
    fVar29 = fVar29 - (fVar19 * fVar16) / fVar24;
    fVar26 = fVar26 - (fVar25 * fVar16) / fVar24;
  }
  if (*(char *)(unaff_x23 + 0xcc3) == '\0') {
    FUN_0335b6c8(&DAT_083ce8b0,1);
    DataMemoryBarrier(2,3);
    *(undefined1 *)(unaff_x23 + 0xcc3) = 1;
  }
  if (*(int *)(*(long *)(unaff_x25 + 0x8b0) + 0xe0) == 0) {
    FUN_033b9870();
  }
  fVar28 = SQRT(fVar26 * fVar26 + fVar14 * fVar14 + fVar29 * fVar29);
  if (fVar28 <= fStack000000000000003c) {
    if (DAT_086d7cc6 == '\0') {
      FUN_0335b6c8(&DAT_083d2c90,1);
      DataMemoryBarrier(2,3);
      DAT_086d7cc6 = '\x01';
    }
    pfVar6 = *(float **)(*(long *)(unaff_x22 + 0xc90) + 0xb8);
    fVar14 = *pfVar6;
    fVar29 = pfVar6[1];
    fVar26 = pfVar6[2];
  }
  else {
    fVar14 = fVar14 / fVar28;
    fVar29 = fVar29 / fVar28;
    fVar26 = fVar26 / fVar28;
  }
  fStack0000000000000004 = fVar19;
  fVar27 = (float)FUN_0355e190(fVar14,fVar29,fVar26,fVar23,fStack0000000000000024,fVar27,0);
  plVar11 = *(long **)(unaff_x19 + 0x28);
  if (plVar11 != (long *)0x0) {
    lVar7 = *plVar11;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)(unaff_x21 + 0xa30)) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_06aa7e88;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_0338f71c(plVar11,*(long *)(unaff_x21 + 0xa30),0);
LAB_06aa7e88:
    iVar4 = (*(code *)*puVar5)(plVar11,puVar5[1]);
    fVar28 = -fVar27;
    if (iVar4 != 1) {
      fVar28 = fVar27;
    }
    uVar22 = 0xc28c0000;
    fVar24 = fVar28 + 360.0;
    fVar27 = fVar24;
    if (-70.0 <= fVar28) {
      fVar27 = fVar28;
    }
    *(float *)(unaff_x19 + 0x7c) = fVar27;
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      uVar17 = FUN_07a18d2c(*(long *)(unaff_x19 + 0x30),0);
      uVar18 = FUN_07a00a64(fStack000000000000002c,0);
      plVar11 = *(long **)(unaff_x19 + 0x48);
      *(float *)(unaff_x19 + 0x90) = fVar24;
      *(undefined4 *)(unaff_x19 + 0x94) = uVar22;
      *(undefined4 *)(unaff_x19 + 0x98) = uVar18;
      *(float *)(unaff_x19 + 0x9c) = fVar19;
      *(float *)(unaff_x19 + 0xa0) = fVar25;
      *(float *)(unaff_x19 + 0xa4) = fVar23;
      *(float *)(unaff_x19 + 0x80) = fVar14;
      *(float *)(unaff_x19 + 0x84) = fVar29;
      *(float *)(unaff_x19 + 0x88) = fVar26;
      *(undefined4 *)(unaff_x19 + 0x8c) = uVar17;
      if (plVar11 != (long *)0x0) {
        lVar7 = *plVar11;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_083cc310) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_06aa7f5c;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_0338f71c(plVar11,DAT_083cc310,0);
LAB_06aa7f5c:
        uVar8 = (*(code *)*puVar5)(plVar11,puVar5[1]);
        if ((uVar8 & 1) == 0) {
          uVar13 = 0;
        }
        else {
          uVar13 = *(byte *)(unaff_x19 + 0x71) ^ 1;
        }
        plVar11 = *(long **)(unaff_x19 + 0x48);
        if (plVar11 != (long *)0x0) {
          lVar7 = *plVar11;
          fVar15 = fVar15 * fStack000000000000001c;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          fVar19 = fStack0000000000000014 * fStack000000000000000c;
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == DAT_083cc310) {
                puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_06aa8008;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar5 = (undefined8 *)FUN_0338f71c(plVar11,DAT_083cc310,0);
LAB_06aa8008:
          bVar3 = (*(code *)*puVar5)(plVar11,puVar5[1]);
          puVar12 = (uint *)(unaff_x19 + 0x74);
          *(byte *)(unaff_x19 + 0x71) = bVar3 & 1;
          if ((uVar13 & 0.5 < (fVar21 * fVar20 + fVar15 + fVar19) * 0.5 + 0.5 & *puVar12 >> 0x1f) ==
              0) {
            if ((int)*puVar12 < 0) {
              return;
            }
            plVar11 = *(long **)(unaff_x19 + 0x58);
            if (plVar11 != (long *)0x0) {
              lVar7 = *plVar11;
              uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == DAT_083cc310) {
                    puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                    goto LAB_06aa80cc;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar5 = (undefined8 *)FUN_0338f71c(plVar11,DAT_083cc310,0);
LAB_06aa80cc:
              uVar8 = (*(code *)*puVar5)(plVar11,puVar5[1]);
              if ((uVar8 & 1) != 0) {
                FUN_06aa7108();
                *(undefined4 *)(unaff_x19 + 0x74) = 0xffffffff;
                *(undefined1 *)(unaff_x19 + 0xb0) = 0;
                return;
              }
              uVar13 = *puVar12;
              if ((int)uVar13 < 0) {
                return;
              }
              if (*(char *)(unaff_x19 + 0xb0) != '\0') {
                return;
              }
              lVar7 = *(long *)(unaff_x19 + 0x38);
              if (lVar7 != 0) {
                uVar1 = *(uint *)(lVar7 + 0x18);
                if (uVar1 <= uVar13) goto LAB_06aa81c0;
                lVar10 = *(long *)(lVar7 + (ulong)uVar13 * 8 + 0x20);
                if (lVar10 != 0) {
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
                    uVar8 = (ulong)(int)uVar2;
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
                    uVar8 = (ulong)uVar13;
                  }
                  if (*(long *)(lVar7 + uVar8 * 8 + 0x20) != 0) goto LAB_06aa805c;
                }
              }
            }
          }
          else {
            lVar7 = FUN_06aa81c4(*(undefined4 *)(unaff_x19 + 0x7c));
            if (lVar7 != 0) {
              if (*(char *)(lVar7 + 0x18) == '\0') {
                *puVar12 = 0xffffffff;
                return;
              }
LAB_06aa805c:
              FUN_06aa7108();
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


