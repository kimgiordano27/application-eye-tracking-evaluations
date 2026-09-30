/*
FUNCTION_NAME: OVRManager$$add_TrackingLost
ENTRY_POINT: 06aa7dd8
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_TrackingLost(void)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long unaff_x19;
  long *plVar11;
  uint *puVar12;
  uint uVar13;
  long unaff_x21;
  long unaff_x22;
  long unaff_x24;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  float in_stack_00000030;
  
                    /* catch() { ... } // from try @ 06aa79b4 with catch @ 06aa7dd8 */
                    /* catch() { ... } // from try @ 06aa7c24 with catch @ 06aa7ddc */
  if (*(char *)(unaff_x24 + 0xcc6) == '\0') {
                    /* catch() { ... } // from try @ 06aa7c20 with catch @ 06aa7de0 */
                    /* catch() { ... } // from try @ 06aa7c1c with catch @ 06aa7de4 */
                    /* catch() { ... } // from try @ 06aa7850 with catch @ 06aa7de8
                       catch() { ... } // from try @ 06aa7a14 with catch @ 06aa7de8
                       catch() { ... } // from try @ 06aa7a40 with catch @ 06aa7de8
                       catch() { ... } // from try @ 06aa7c28 with catch @ 06aa7de8
                       catch() { ... } // from try @ 06aa7cb8 with catch @ 06aa7de8
                       catch() { ... } // from try @ 06aa7cc0 with catch @ 06aa7de8
                       catch() { ... } // from try @ 06aa7ce4 with catch @ 06aa7de8 */
                    /* catch() { ... } // from try @ 06aa794c with catch @ 06aa7dec */
                    /* catch() { ... } // from try @ 06aa78e0 with catch @ 06aa7df0 */
    FUN_0335b6c8(&DAT_083d2c90,1);
    DataMemoryBarrier(2,3);
    *(undefined1 *)(unaff_x24 + 0xcc6) = 1;
  }
  puVar6 = *(undefined4 **)(*(long *)(unaff_x22 + 0xc90) + 0xb8);
                    /* try { // try from 06aa7e04 to 06ba7e07 has its CatchHandler @ 06aa7e20 */
  uVar22 = *puVar6;
  uVar21 = puVar6[1];
                    /* try { // try from 06aa7e08 to 06ba7e2b has its CatchHandler @ 06aa7620 */
  uVar20 = puVar6[2];
                    /* catch() { ... } // from try @ 06aa7e04 with catch @ 06aa7e20 */
                    /* try { // try from 06aa7e2c to 06ba7e37 has its CatchHandler @ 06aa7e38 */
  fVar14 = (float)FUN_0355e190(uVar22,uVar21,uVar20,uStack0000000000000020,uStack0000000000000024,
                               uStack0000000000000028,0);
  plVar11 = *(long **)(unaff_x19 + 0x28);
  if (plVar11 != (long *)0x0) {
                    /* catch() { ... } // from try @ 06aa7e2c with catch @ 06aa7e38 */
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
    fVar15 = -fVar14;
    if (iVar4 != 1) {
      fVar15 = fVar14;
    }
    uVar19 = 0xc28c0000;
    fVar18 = fVar15 + 360.0;
    fVar14 = fVar18;
    if (-70.0 <= fVar15) {
      fVar14 = fVar15;
    }
    *(float *)(unaff_x19 + 0x7c) = fVar14;
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      uVar16 = FUN_07a18d2c(*(long *)(unaff_x19 + 0x30),0);
      uVar17 = FUN_07a00a64(uStack000000000000002c,0);
      plVar11 = *(long **)(unaff_x19 + 0x48);
      *(float *)(unaff_x19 + 0x90) = fVar18;
      *(undefined4 *)(unaff_x19 + 0x94) = uVar19;
      *(undefined4 *)(unaff_x19 + 0x98) = uVar17;
      *(undefined4 *)(unaff_x19 + 0x9c) = unaff_s9;
      *(undefined4 *)(unaff_x19 + 0xa0) = unaff_s10;
      *(undefined4 *)(unaff_x19 + 0xa4) = uStack0000000000000020;
      *(undefined4 *)(unaff_x19 + 0x80) = uVar22;
      *(undefined4 *)(unaff_x19 + 0x84) = uVar21;
      *(undefined4 *)(unaff_x19 + 0x88) = uVar20;
      *(undefined4 *)(unaff_x19 + 0x8c) = uVar16;
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
          if ((uVar13 & 0.5 < (fStack0000000000000010 * in_stack_00000030 +
                              fStack0000000000000018 * fStack000000000000001c +
                              fStack0000000000000014 * in_stack_00000008._4_4_) * 0.5 + 0.5 &
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


