/*
FUNCTION_NAME: OVRManager$$remove_TrackingAcquired
ENTRY_POINT: 06aa7c7c
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_TrackingAcquired(float param_1)

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
  long unaff_x20;
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
  undefined4 uVar21;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fVar22;
  float fStack0000000000000004;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float in_stack_00000018;
  float fStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined8 in_stack_00000030;
  float fStack0000000000000038;
  float fStack000000000000003c;
  
  param_1 = SQRT(param_1);
  if (param_1 <= fStack000000000000003c) {
    if (*(char *)(unaff_x24 + 0xcc6) == '\0') {
                    /* try { // try from 06aa7cb8 to 06ba7cbb has its CatchHandler @ 06aa7de8 */
                    /* try { // try from 06aa7cbc to 06ba7cbf has its CatchHandler @ 06aa7dc8 */
      FUN_0335b6c8(&DAT_083d2c90,1);
                    /* try { // try from 06aa7cc0 to 06ba7cc3 has its CatchHandler @ 06aa7de8 */
      DataMemoryBarrier(2,3);
      *(undefined1 *)(unaff_x24 + 0xcc6) = 1;
    }
    pfVar6 = *(float **)(*(long *)(unaff_x22 + 0xc90) + 0xb8);
                    /* try { // try from 06aa7cd0 to 06ba7cdf has its CatchHandler @ 06aa7db0 */
    fStack000000000000001c = *pfVar6;
    fStack000000000000000c = pfVar6[1];
    param_1 = pfVar6[2];
  }
  else {
    fStack000000000000001c = unaff_s8 / param_1;
    fStack000000000000000c = unaff_s9 / param_1;
    param_1 = unaff_s10 / param_1;
  }
                    /* try { // try from 06aa7ce4 to 06ba7cf3 has its CatchHandler @ 06aa7de8 */
  if (*(char *)(unaff_x20 + 0x98f) == '\0') {
                    /* try { // try from 06aa7cfc to 06ba7d0b has its CatchHandler @ 06aa7db0 */
    FUN_0335b6c8(&DAT_083ce8d0,1);
    DataMemoryBarrier(2,3);
    *(undefined1 *)(unaff_x20 + 0x98f) = 1;
  }
                    /* try { // try from 06aa7d14 to 06ba7d17 has its CatchHandler @ 06aa7da8 */
                    /* try { // try from 06aa7d18 to 06ba7d1b has its CatchHandler @ 06aa7dac */
                    /* try { // try from 06aa7d24 to 06ba7d2f has its CatchHandler @ 06aa7da4 */
  fVar14 = in_stack_00000030._4_4_ * in_stack_00000030._4_4_ +
           unaff_s13 * unaff_s13 + fStack0000000000000038 * fStack0000000000000038;
  if (**(float **)(*(long *)(unaff_x26 + 0x8d0) + 0xb8) <= fVar14) {
                    /* try { // try from 06aa7d38 to 06ba7d3b has its CatchHandler @ 06aa7da0 */
                    /* try { // try from 06aa7d40 to 06ba7d53 has its CatchHandler @ 06aa7d9c */
    fVar19 = in_stack_00000030._4_4_ * unaff_s11 +
             unaff_s13 * unaff_s15 + fStack0000000000000038 * unaff_s14;
                    /* try { // try from 06aa7d58 to 06ba7d97 has its CatchHandler @ 06aa7d98 */
    unaff_s15 = unaff_s15 - (unaff_s13 * fVar19) / fVar14;
    unaff_s14 = unaff_s14 - (fStack0000000000000038 * fVar19) / fVar14;
    unaff_s11 = unaff_s11 - (in_stack_00000030._4_4_ * fVar19) / fVar14;
  }
  if (*(char *)(unaff_x23 + 0xcc3) == '\0') {
    FUN_0335b6c8(&DAT_083ce8b0,1);
    DataMemoryBarrier(2,3);
    *(undefined1 *)(unaff_x23 + 0xcc3) = 1;
  }
                    /* catch() { ... } // from try @ 06aa7d58 with catch @ 06aa7d98
                       try { // try from 06aa7d98 to 06ba7e03 has its CatchHandler @ 06aa7620 */
                    /* catch() { ... } // from try @ 06aa7d40 with catch @ 06aa7d9c */
  if (*(int *)(*(long *)(unaff_x25 + 0x8b0) + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 06aa7d38 with catch @ 06aa7da0 */
    FUN_033b9870();
  }
                    /* catch() { ... } // from try @ 06aa7d24 with catch @ 06aa7da4 */
                    /* catch() { ... } // from try @ 06aa7d14 with catch @ 06aa7da8 */
                    /* catch() { ... } // from try @ 06aa7d18 with catch @ 06aa7dac */
                    /* catch() { ... } // from try @ 06aa7cd0 with catch @ 06aa7db0
                       catch() { ... } // from try @ 06aa7cfc with catch @ 06aa7db0 */
                    /* catch() { ... } // from try @ 06aa7b98 with catch @ 06aa7db4 */
                    /* catch() { ... } // from try @ 06aa7a3c with catch @ 06aa7db8 */
                    /* catch() { ... } // from try @ 06aa7a30 with catch @ 06aa7dbc */
  fVar14 = SQRT(unaff_s11 * unaff_s11 + unaff_s15 * unaff_s15 + unaff_s14 * unaff_s14);
                    /* catch() { ... } // from try @ 06aa7a94 with catch @ 06aa7dc0 */
                    /* catch() { ... } // from try @ 06aa7c78 with catch @ 06aa7dc4 */
  if (fVar14 <= fStack000000000000003c) {
    if (*(char *)(unaff_x24 + 0xcc6) == '\0') {
      FUN_0335b6c8(&DAT_083d2c90,1);
      DataMemoryBarrier(2,3);
      *(undefined1 *)(unaff_x24 + 0xcc6) = 1;
    }
    pfVar6 = *(float **)(*(long *)(unaff_x22 + 0xc90) + 0xb8);
    fVar22 = *pfVar6;
    fVar19 = pfVar6[1];
    fVar14 = pfVar6[2];
  }
  else {
                    /* catch() { ... } // from try @ 06aa7cbc with catch @ 06aa7dc8 */
    fVar22 = unaff_s15 / fVar14;
                    /* catch() { ... } // from try @ 06aa7c54 with catch @ 06aa7dcc */
    fVar19 = unaff_s14 / fVar14;
                    /* catch() { ... } // from try @ 06aa781c with catch @ 06aa7dd0 */
    fVar14 = unaff_s11 / fVar14;
                    /* catch() { ... } // from try @ 06aa7c44 with catch @ 06aa7dd4 */
  }
  fStack0000000000000004 = fStack0000000000000038;
  fVar15 = (float)FUN_0355e190(fVar22,fVar19,fVar14,uStack0000000000000020,uStack0000000000000024,
                               uStack0000000000000028,0);
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
    fVar16 = -fVar15;
    if (iVar4 != 1) {
      fVar16 = fVar15;
    }
    uVar21 = 0xc28c0000;
    fVar20 = fVar16 + 360.0;
    fVar15 = fVar20;
    if (-70.0 <= fVar16) {
      fVar15 = fVar16;
    }
    *(float *)(unaff_x19 + 0x7c) = fVar15;
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      uVar17 = FUN_07a18d2c(*(long *)(unaff_x19 + 0x30),0);
      uVar18 = FUN_07a00a64(uStack000000000000002c,0);
      plVar11 = *(long **)(unaff_x19 + 0x48);
      *(float *)(unaff_x19 + 0x90) = fVar20;
      *(undefined4 *)(unaff_x19 + 0x94) = uVar21;
      *(undefined4 *)(unaff_x19 + 0x98) = uVar18;
      *(float *)(unaff_x19 + 0x9c) = fStack0000000000000038;
      *(float *)(unaff_x19 + 0xa0) = in_stack_00000030._4_4_;
      *(undefined4 *)(unaff_x19 + 0xa4) = uStack0000000000000020;
      *(float *)(unaff_x19 + 0x80) = fVar22;
      *(float *)(unaff_x19 + 0x84) = fVar19;
      *(float *)(unaff_x19 + 0x88) = fVar14;
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
          in_stack_00000018 = in_stack_00000018 * fStack000000000000001c;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          fStack0000000000000014 = fStack0000000000000014 * fStack000000000000000c;
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
          if ((uVar13 & 0.5 < (fStack0000000000000010 * param_1 +
                              in_stack_00000018 + fStack0000000000000014) * 0.5 + 0.5 &
              *puVar12 >> 0x1f) == 0) {
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


