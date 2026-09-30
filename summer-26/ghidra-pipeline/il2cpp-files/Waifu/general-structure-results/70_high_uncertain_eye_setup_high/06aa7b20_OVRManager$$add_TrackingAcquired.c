/*
FUNCTION_NAME: OVRManager$$add_TrackingAcquired
ENTRY_POINT: 06aa7b20
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_TrackingAcquired
               (undefined4 param_1,float param_2,float param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  bool in_ZR;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  int in_w8;
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
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float fVar24;
  float unaff_s9;
  float unaff_s10;
  float fVar25;
  float unaff_s12;
  float unaff_s13;
  float fVar26;
  float fStack0000000000000004;
  float fStack000000000000000c;
  float fStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined4 uStack0000000000000020;
  float fStack0000000000000024;
  undefined8 in_stack_00000028;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  
  uStack0000000000000020 = param_1;
  if (!in_ZR) {
    uStack0000000000000020 = param_4;
  }
  fStack0000000000000024 = param_2;
  fVar21 = param_3;
  if (in_w8 == 0) {
    FUN_033b9870();
  }
  fVar14 = (float)FUN_07a17308(&stack0x00000040,0);
  fVar26 = param_2;
  fVar25 = fVar21;
  if (unaff_w20 == 1) {
    fVar14 = -fVar14;
    fVar26 = -param_2;
    fVar25 = -fVar21;
  }
  if (*(int *)(*(long *)(unaff_x26 + 0xfc8) + 0xe0) == 0) {
    FUN_033b9870();
  }
  fVar15 = (float)FUN_07a17384(&stack0x00000040,0);
  if (unaff_w20 == 1) {
    fVar15 = -fVar15;
    param_2 = -param_2;
    fVar21 = -fVar21;
  }
                    /* try { // try from 06aa7b98 to 06ba7bbf has its CatchHandler @ 06aa7db4 */
  fStack0000000000000014 = param_2;
  if (DAT_086d898f == '\0') {
    FUN_0335b6c8(&DAT_083ce8d0,1);
    DataMemoryBarrier(2,3);
    DAT_086d898f = '\x01';
  }
  fVar16 = in_stack_00000018._4_4_ * in_stack_00000018._4_4_ +
           unaff_s12 * unaff_s12 + fStack0000000000000030 * fStack0000000000000030;
  fVar24 = unaff_s13;
  if (**(float **)(DAT_083ce8d0 + 0xb8) <= fVar16) {
    fVar19 = in_stack_00000018._4_4_ * fStack0000000000000034 +
             unaff_s12 * unaff_s13 + fStack0000000000000030 * fStack0000000000000038;
                    /* try { // try from 06aa7c1c to 06ba7c1f has its CatchHandler @ 06aa7de4 */
                    /* try { // try from 06aa7c20 to 06ba7c23 has its CatchHandler @ 06aa7de0 */
                    /* try { // try from 06aa7c24 to 06ba7c27 has its CatchHandler @ 06aa7ddc */
                    /* try { // try from 06aa7c28 to 06ba7c43 has its CatchHandler @ 06aa7de8 */
    fVar24 = unaff_s13 - (unaff_s12 * fVar19) / fVar16;
    unaff_s9 = fStack0000000000000038 - (fStack0000000000000030 * fVar19) / fVar16;
    unaff_s10 = fStack0000000000000034 - (in_stack_00000018._4_4_ * fVar19) / fVar16;
  }
  if (*(char *)(unaff_x23 + 0xcc3) == '\0') {
                    /* try { // try from 06aa7c44 to 06ba7c4b has its CatchHandler @ 06aa7dd4 */
    FUN_0335b6c8(&DAT_083ce8b0,1);
    DataMemoryBarrier(2,3);
                    /* try { // try from 06aa7c54 to 06ba7c73 has its CatchHandler @ 06aa7dcc */
    *(undefined1 *)(unaff_x23 + 0xcc3) = 1;
  }
  if (*(int *)(*(long *)(unaff_x25 + 0x8b0) + 0xe0) == 0) {
    FUN_033b9870();
  }
                    /* try { // try from 06aa7c78 to 06ba7cb7 has its CatchHandler @ 06aa7dc4 */
  fVar16 = SQRT(unaff_s10 * unaff_s10 + fVar24 * fVar24 + unaff_s9 * unaff_s9);
  if (fVar16 <= fStack000000000000003c) {
    if (*(char *)(unaff_x24 + 0xcc6) == '\0') {
      FUN_0335b6c8(&DAT_083d2c90,1);
      DataMemoryBarrier(2,3);
      *(undefined1 *)(unaff_x24 + 0xcc6) = 1;
    }
    pfVar6 = *(float **)(*(long *)(unaff_x22 + 0xc90) + 0xb8);
    in_stack_00000018._4_4_ = *pfVar6;
    fStack000000000000000c = pfVar6[1];
    fVar16 = pfVar6[2];
  }
  else {
    in_stack_00000018._4_4_ = fVar24 / fVar16;
    fStack000000000000000c = unaff_s9 / fVar16;
    fVar16 = unaff_s10 / fVar16;
  }
  if (DAT_086d898f == '\0') {
    FUN_0335b6c8(&DAT_083ce8d0,1);
    DataMemoryBarrier(2,3);
    DAT_086d898f = '\x01';
  }
  fVar24 = fStack0000000000000034 * fStack0000000000000034 +
           unaff_s13 * unaff_s13 + fStack0000000000000038 * fStack0000000000000038;
  if (**(float **)(DAT_083ce8d0 + 0xb8) <= fVar24) {
    fVar19 = fStack0000000000000034 * fVar25 + unaff_s13 * fVar14 + fStack0000000000000038 * fVar26;
    fVar14 = fVar14 - (unaff_s13 * fVar19) / fVar24;
    fVar26 = fVar26 - (fStack0000000000000038 * fVar19) / fVar24;
    fVar25 = fVar25 - (fStack0000000000000034 * fVar19) / fVar24;
  }
  if (*(char *)(unaff_x23 + 0xcc3) == '\0') {
    FUN_0335b6c8(&DAT_083ce8b0,1);
    DataMemoryBarrier(2,3);
    *(undefined1 *)(unaff_x23 + 0xcc3) = 1;
  }
  if (*(int *)(*(long *)(unaff_x25 + 0x8b0) + 0xe0) == 0) {
    FUN_033b9870();
  }
  fVar24 = SQRT(fVar25 * fVar25 + fVar14 * fVar14 + fVar26 * fVar26);
  if (fVar24 <= fStack000000000000003c) {
    if (*(char *)(unaff_x24 + 0xcc6) == '\0') {
      FUN_0335b6c8(&DAT_083d2c90,1);
      DataMemoryBarrier(2,3);
      *(undefined1 *)(unaff_x24 + 0xcc6) = 1;
    }
    pfVar6 = *(float **)(*(long *)(unaff_x22 + 0xc90) + 0xb8);
    fVar14 = *pfVar6;
    fVar26 = pfVar6[1];
    fVar25 = pfVar6[2];
  }
  else {
    fVar14 = fVar14 / fVar24;
    fVar26 = fVar26 / fVar24;
    fVar25 = fVar25 / fVar24;
  }
  fStack0000000000000004 = fStack0000000000000038;
  uVar23 = uStack0000000000000020;
  fVar24 = (float)FUN_0355e190(fVar14,fVar26,fVar25,uStack0000000000000020,fStack0000000000000024,
                               param_3,0);
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
    fVar19 = -fVar24;
    if (iVar4 != 1) {
      fVar19 = fVar24;
    }
    uVar22 = 0xc28c0000;
    fVar20 = fVar19 + 360.0;
    fVar24 = fVar20;
    if (-70.0 <= fVar19) {
      fVar24 = fVar19;
    }
    *(float *)(unaff_x19 + 0x7c) = fVar24;
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      uVar17 = FUN_07a18d2c(*(long *)(unaff_x19 + 0x30),0);
      uVar18 = FUN_07a00a64(in_stack_00000028._4_4_,0);
      plVar11 = *(long **)(unaff_x19 + 0x48);
      *(float *)(unaff_x19 + 0x90) = fVar20;
      *(undefined4 *)(unaff_x19 + 0x94) = uVar22;
      *(undefined4 *)(unaff_x19 + 0x98) = uVar18;
      *(float *)(unaff_x19 + 0x9c) = fStack0000000000000038;
      *(float *)(unaff_x19 + 0xa0) = fStack0000000000000034;
      *(undefined4 *)(unaff_x19 + 0xa4) = uVar23;
      *(float *)(unaff_x19 + 0x80) = fVar14;
      *(float *)(unaff_x19 + 0x84) = fVar26;
      *(float *)(unaff_x19 + 0x88) = fVar25;
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
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          fVar26 = fStack0000000000000014 * fStack000000000000000c;
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
          if ((uVar13 & 0.5 < (fVar21 * fVar16 + fVar15 * in_stack_00000018._4_4_ + fVar26) * 0.5 +
                              0.5 & *puVar12 >> 0x1f) == 0) {
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


