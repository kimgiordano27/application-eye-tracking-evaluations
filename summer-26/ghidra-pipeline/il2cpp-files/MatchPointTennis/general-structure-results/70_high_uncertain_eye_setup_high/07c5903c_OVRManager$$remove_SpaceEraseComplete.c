/*
FUNCTION_NAME: OVRManager$$remove_SpaceEraseComplete
ENTRY_POINT: 07c5903c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_SpaceEraseComplete(void)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  undefined8 *puVar6;
  float *pfVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long *plVar13;
  uint *puVar14;
  uint uVar15;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar20;
  undefined8 uVar21;
  ulong uVar22;
  float unaff_s8;
  float unaff_s9;
  float fVar23;
  ulong unaff_d10;
  float fVar24;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fStack0000000000000004;
  float fStack000000000000000c;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  ulong in_stack_00000028;
  undefined4 uStack0000000000000030;
  float fStack0000000000000038;
  float fStack000000000000003c;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  
  uVar11 = _uStack0000000000000030 >> 0x20;
                    /* catch() { ... } // from try @ 07c58c74 with catch @ 07c5903c */
                    /* catch() { ... } // from try @ 07c58a9c with catch @ 07c59040 */
                    /* catch() { ... } // from try @ 07c58d40 with catch @ 07c59044 */
                    /* catch() { ... } // from try @ 07c58b64 with catch @ 07c59048 */
                    /* catch() { ... } // from try @ 07c587a4 with catch @ 07c5904c */
                    /* catch() { ... } // from try @ 07c58b94 with catch @ 07c59050 */
                    /* catch() { ... } // from try @ 07c58d10 with catch @ 07c59058 */
                    /* catch() { ... } // from try @ 07c58750 with catch @ 07c5905c */
                    /* catch() { ... } // from try @ 07c58d98 with catch @ 07c59060 */
                    /* catch() { ... } // from try @ 07c58654 with catch @ 07c59064 */
                    /* catch() { ... } // from try @ 07c58580 with catch @ 07c59068 */
                    /* catch() { ... } // from try @ 07c58d6c with catch @ 07c5906c */
                    /* catch() { ... } // from try @ 07c5843c with catch @ 07c59070 */
                    /* catch() { ... } // from try @ 07c58b0c with catch @ 07c59074 */
                    /* catch() { ... } // from try @ 07c586a0 with catch @ 07c59078 */
                    /* catch() { ... } // from try @ 07c58ce4 with catch @ 07c5907c */
  fVar16 = (float)FUN_09516eb8(0);
                    /* catch() { ... } // from try @ 07c5863c with catch @ 07c59080 */
                    /* catch() { ... } // from try @ 07c58554 with catch @ 07c59084 */
                    /* catch() { ... } // from try @ 07c58834 with catch @ 07c59088 */
                    /* catch() { ... } // from try @ 07c584f4 with catch @ 07c5908c */
                    /* catch() { ... } // from try @ 07c5870c with catch @ 07c59090 */
  fStack000000000000000c = unaff_s15;
  fStack0000000000000014 = unaff_s13;
  if (DAT_0a5233ad == '\0') {
                    /* catch() { ... } // from try @ 07c58a68 with catch @ 07c59094 */
                    /* catch() { ... } // from try @ 07c589c8 with catch @ 07c59098 */
                    /* catch() { ... } // from try @ 07c5824c with catch @ 07c5909c */
    FUN_04447ba8(PTR_DAT_09f1f580);
                    /* catch() { ... } // from try @ 07c58914 with catch @ 07c590a0 */
                    /* catch() { ... } // from try @ 07c58a38 with catch @ 07c590a4 */
    DAT_0a5233ad = '\x01';
  }
                    /* catch() { ... } // from try @ 07c589e0 with catch @ 07c590a8 */
  puVar3 = PTR_DAT_09f1f580;
                    /* catch() { ... } // from try @ 07c5892c with catch @ 07c590ac */
                    /* catch() { ... } // from try @ 07c5838c with catch @ 07c590b0 */
                    /* catch() { ... } // from try @ 07c58a0c with catch @ 07c590b4 */
                    /* catch() { ... } // from try @ 07c582f0 with catch @ 07c590b8 */
                    /* catch() { ... } // from try @ 07c588a4 with catch @ 07c590bc */
                    /* catch() { ... } // from try @ 07c5895c with catch @ 07c590c0 */
                    /* catch() { ... } // from try @ 07c58e8c with catch @ 07c590c4 */
                    /* catch() { ... } // from try @ 07c581e8 with catch @ 07c590cc */
                    /* catch() { ... } // from try @ 07c581b8 with catch @ 07c590d0 */
                    /* catch() { ... } // from try @ 07c5815c with catch @ 07c590d4 */
  fVar17 = fStack0000000000000024 * fStack0000000000000024 +
           fStack0000000000000038 * fStack0000000000000038 +
           fStack0000000000000020 * fStack0000000000000020;
  fVar23 = (float)unaff_d10;
  uVar22 = unaff_d10;
  fVar24 = unaff_s9;
  fVar20 = unaff_s8;
  if (**(float **)(*(long *)PTR_DAT_09f1f580 + 0xb8) <= fVar17) {
                    /* try { // try from 07c590ec to 07d590ef has its CatchHandler @ 07c590fc */
                    /* catch() { ... } // from try @ 07c590ec with catch @ 07c590fc */
    fVar20 = fStack0000000000000024 * unaff_s8 +
             fStack0000000000000038 * unaff_s9 + fStack0000000000000020 * fVar23;
    fVar24 = unaff_s9 - (fStack0000000000000038 * fVar20) / fVar17;
    uVar22 = (ulong)(uint)(fVar23 - (fStack0000000000000020 * fVar20) / fVar17);
    fVar20 = unaff_s8 - (fStack0000000000000024 * fVar20) / fVar17;
  }
  if (*(char *)(unaff_x23 + 0xf42) == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    *(undefined1 *)(unaff_x23 + 0xf42) = 1;
  }
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  fStack0000000000000020 = (float)uVar22;
  fVar17 = SQRT(fVar20 * fVar20 + fVar24 * fVar24 + fStack0000000000000020 * fStack0000000000000020)
  ;
  if (fVar17 <= fStack000000000000003c) {
    if (*(char *)(unaff_x24 + 0xf43) == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      *(undefined1 *)(unaff_x24 + 0xf43) = 1;
    }
    pfVar7 = *(float **)(*unaff_x22 + 0xb8);
    fStack0000000000000024 = *pfVar7;
    fStack0000000000000020 = pfVar7[1];
    fVar20 = pfVar7[2];
  }
  else {
    fStack0000000000000024 = fVar24 / fVar17;
    fStack0000000000000020 = fStack0000000000000020 / fVar17;
    fVar20 = fVar20 / fVar17;
  }
  if (DAT_0a5233ad == '\0') {
    FUN_04447ba8(PTR_DAT_09f1f580);
    DAT_0a5233ad = '\x01';
  }
  fVar24 = unaff_s8 * unaff_s8 + unaff_s9 * unaff_s9 + fVar23 * fVar23;
  if (**(float **)(*(long *)puVar3 + 0xb8) <= fVar24) {
    fVar17 = unaff_s8 * unaff_s14 +
             unaff_s9 * fStack000000000000001c + fVar23 * fStack0000000000000018;
    fStack000000000000001c = fStack000000000000001c - (unaff_s9 * fVar17) / fVar24;
    fStack0000000000000018 = fStack0000000000000018 - (fVar23 * fVar17) / fVar24;
    unaff_s14 = unaff_s14 - (unaff_s8 * fVar17) / fVar24;
  }
  if (*(char *)(unaff_x23 + 0xf42) == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    *(undefined1 *)(unaff_x23 + 0xf42) = 1;
  }
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  fVar24 = SQRT(unaff_s14 * unaff_s14 +
                fStack000000000000001c * fStack000000000000001c +
                fStack0000000000000018 * fStack0000000000000018);
  if (fVar24 <= fStack000000000000003c) {
    if (*(char *)(unaff_x24 + 0xf43) == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      *(undefined1 *)(unaff_x24 + 0xf43) = 1;
    }
    pfVar7 = *(float **)(*unaff_x22 + 0xb8);
    fStack000000000000001c = *pfVar7;
    fStack0000000000000018 = pfVar7[1];
    fVar24 = pfVar7[2];
  }
  else {
    fStack000000000000001c = fStack000000000000001c / fVar24;
    fStack0000000000000018 = fStack0000000000000018 / fVar24;
    fVar24 = unaff_s14 / fVar24;
  }
  uVar22 = in_stack_00000028 & 0xffffffff;
  fStack0000000000000004 = fVar23;
  fVar17 = (float)FUN_0770668c(fStack000000000000001c,fStack0000000000000018,fVar24,uVar22,
                               in_stack_00000028._4_4_,uStack0000000000000030,0);
  plVar13 = *(long **)(unaff_x19 + 0x28);
  if (plVar13 != (long *)0x0) {
    lVar8 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x21) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_07c59348;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_044822ac(plVar13,*unaff_x21,0);
LAB_07c59348:
    iVar5 = (*(code *)*puVar6)(plVar13,puVar6[1]);
    fVar23 = -fVar17;
    if (iVar5 != 1) {
      fVar23 = fVar17;
    }
    uVar21 = 0xc28c0000;
    uVar10 = (ulong)(uint)(fVar23 + 360.0);
    fVar17 = fVar23 + 360.0;
    if (-70.0 <= fVar23) {
      fVar17 = fVar23;
    }
    *(float *)(unaff_x19 + 0x7c) = fVar17;
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      uVar18 = FUN_09539d64(*(long *)(unaff_x19 + 0x30),0);
      uVar19 = FUN_09516c60(0);
      in_stack_00000040 = 0;
      uStack0000000000000048 = 0;
      uStack000000000000004c = 0;
      in_stack_00000058 = 0;
      uStack0000000000000050 = 0;
      uStack0000000000000054 = 0;
      FUN_09537b20(uVar18,uVar10,uVar21,uVar19,unaff_d10,uVar11,uVar22,&stack0x00000040,0);
      plVar13 = *(long **)(unaff_x19 + 0x48);
      *(float *)(unaff_x19 + 0x80) = fStack000000000000001c;
      *(float *)(unaff_x19 + 0x84) = fStack0000000000000018;
      *(float *)(unaff_x19 + 0x88) = fVar24;
      *(ulong *)(unaff_x19 + 0xa0) = CONCAT44(in_stack_00000058,uStack0000000000000054);
      *(ulong *)(unaff_x19 + 0x98) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
      *(ulong *)(unaff_x19 + 0x94) = CONCAT44(uStack000000000000004c,uStack0000000000000048);
      *(undefined8 *)(unaff_x19 + 0x8c) = in_stack_00000040;
      puVar3 = PTR_DAT_09f28c08;
      if (plVar13 != (long *)0x0) {
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_09f28c08) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_07c59468;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_044822ac(plVar13,*(long *)PTR_DAT_09f28c08,0);
LAB_07c59468:
        uVar11 = (*(code *)*puVar6)(plVar13,puVar6[1]);
        if ((uVar11 & 1) == 0) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(byte *)(unaff_x19 + 0x71) ^ 1;
        }
        plVar13 = *(long **)(unaff_x19 + 0x48);
        if (plVar13 != (long *)0x0) {
          lVar9 = *plVar13;
          lVar8 = *(long *)puVar3;
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar8) {
                puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_07c59514;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar6 = (undefined8 *)FUN_044822ac(plVar13,lVar8,0);
LAB_07c59514:
          bVar4 = (*(code *)*puVar6)(plVar13,puVar6[1]);
          puVar14 = (uint *)(unaff_x19 + 0x74);
          *(byte *)(unaff_x19 + 0x71) = bVar4 & 1;
          if ((uVar15 & 0.5 < (fStack0000000000000014 * fVar20 +
                              fVar16 * fStack0000000000000024 +
                              fStack000000000000000c * fStack0000000000000020) * 0.5 + 0.5 &
              *puVar14 >> 0x1f) == 0) {
            if ((int)*puVar14 < 0) {
              return;
            }
            plVar13 = *(long **)(unaff_x19 + 0x58);
            if (plVar13 != (long *)0x0) {
              lVar9 = *plVar13;
              lVar8 = *(long *)puVar3;
              uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == lVar8) {
                    puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                    goto LAB_07c595d8;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              puVar6 = (undefined8 *)FUN_044822ac(plVar13,lVar8,0);
LAB_07c595d8:
              uVar11 = (*(code *)*puVar6)(plVar13,puVar6[1]);
              if ((uVar11 & 1) != 0) {
                FUN_07c586d0();
                *(undefined4 *)(unaff_x19 + 0x74) = 0xffffffff;
                *(undefined1 *)(unaff_x19 + 0xb0) = 0;
                return;
              }
              uVar15 = *puVar14;
              if ((int)uVar15 < 0) {
                return;
              }
              if (*(char *)(unaff_x19 + 0xb0) != '\0') {
                return;
              }
              lVar8 = *(long *)(unaff_x19 + 0x38);
              if (lVar8 != 0) {
                uVar1 = *(uint *)(lVar8 + 0x18);
                if (uVar1 <= uVar15) goto LAB_07c596cc;
                lVar9 = *(long *)(lVar8 + (ulong)uVar15 * 8 + 0x20);
                if (lVar9 != 0) {
                  if (*(float *)(lVar9 + 0x10) <= *(float *)(unaff_x19 + 0x7c)) {
                    if (*(float *)(unaff_x19 + 0x7c) <= *(float *)(lVar9 + 0x14)) {
                      return;
                    }
                    uVar2 = uVar1 - 1;
                    if ((int)(uVar15 + 1) <= (int)uVar2) {
                      uVar2 = uVar15 + 1;
                    }
                    *puVar14 = uVar2;
                    if (uVar1 <= uVar2) goto LAB_07c596cc;
                    uVar11 = (ulong)(int)uVar2;
                  }
                  else {
                    if ((int)uVar15 < 2) {
                      uVar15 = 1;
                    }
                    uVar15 = uVar15 - 1;
                    *puVar14 = uVar15;
                    if (uVar1 <= uVar15) {
LAB_07c596cc:
                    /* WARNING: Subroutine does not return */
                      FUN_04447e4c();
                    }
                    uVar11 = (ulong)uVar15;
                  }
                  if (*(long *)(lVar8 + uVar11 * 8 + 0x20) != 0) goto LAB_07c59568;
                }
              }
            }
          }
          else {
            lVar8 = FUN_07c596d0(*(undefined4 *)(unaff_x19 + 0x7c));
            if (lVar8 != 0) {
              if (*(char *)(lVar8 + 0x18) == '\0') {
                *puVar14 = 0xffffffff;
                return;
              }
LAB_07c59568:
              FUN_07c586d0();
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


