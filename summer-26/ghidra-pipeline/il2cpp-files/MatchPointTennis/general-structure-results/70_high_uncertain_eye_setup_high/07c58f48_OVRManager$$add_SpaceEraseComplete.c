/*
FUNCTION_NAME: OVRManager$$add_SpaceEraseComplete
ENTRY_POINT: 07c58f48
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_SpaceEraseComplete(void)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  byte bVar9;
  int iVar10;
  long lVar11;
  undefined8 *puVar12;
  int in_w8;
  float *pfVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  int *piVar17;
  long unaff_x19;
  int unaff_w20;
  long *plVar18;
  uint *puVar19;
  uint uVar20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  float fVar27;
  ulong uVar28;
  undefined8 uVar29;
  ulong uVar30;
  float unaff_s8;
  float unaff_s9;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fStack0000000000000004;
  float fStack000000000000000c;
  float fStack0000000000000014;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000038;
  float fStack000000000000003c;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  undefined8 in_stack_00000068;
  float fStack0000000000000070;
  float fStack0000000000000074;
  undefined4 in_stack_00000078;
  
  uVar16 = _fStack0000000000000030 >> 0x20;
                    /* catch() { ... } // from try @ 07c586cc with catch @ 07c58f48 */
  uVar28 = _fStack0000000000000030 & 0xffffffff;
                    /* catch() { ... } // from try @ 07c58764 with catch @ 07c58f4c */
  if (in_w8 == 0) {
                    /* catch() { ... } // from try @ 07c58ef8 with catch @ 07c58f50 */
                    /* catch() { ... } // from try @ 07c58ef4 with catch @ 07c58f54 */
                    /* catch() { ... } // from try @ 07c585f0 with catch @ 07c58f58 */
    FUN_04447ba8(PTR_DAT_09f1e740);
                    /* catch() { ... } // from try @ 07c58dc4 with catch @ 07c58f5c */
                    /* catch() { ... } // from try @ 07c58ef0 with catch @ 07c58f60 */
    *(undefined1 *)(unaff_x24 + 0xf43) = 1;
  }
  uVar7 = in_stack_00000078;
  fVar34 = fStack0000000000000074;
  fVar33 = fStack0000000000000070;
  uVar6 = in_stack_00000068._4_4_;
  puVar5 = PTR_DAT_09f4d0d8;
                    /* catch() { ... } // from try @ 07c58de0 with catch @ 07c58f64 */
                    /* catch() { ... } // from try @ 07c58c50 with catch @ 07c58f68 */
  pfVar13 = *(float **)(*unaff_x22 + 0xb8);
                    /* catch() { ... } // from try @ 07c58c30 with catch @ 07c58f6c */
                    /* catch() { ... } // from try @ 07c58eec with catch @ 07c58f70 */
                    /* catch() { ... } // from try @ 07c58ee8 with catch @ 07c58f74 */
                    /* catch() { ... } // from try @ 07c58ee4 with catch @ 07c58f78 */
                    /* catch() { ... } // from try @ 07c58ee0 with catch @ 07c58f7c */
                    /* catch() { ... } // from try @ 07c58d7c with catch @ 07c58f80 */
                    /* catch() { ... } // from try @ 07c58edc with catch @ 07c58f84 */
                    /* catch() { ... } // from try @ 07c58880 with catch @ 07c58f88 */
  lVar11 = *(long *)PTR_DAT_09f4d0d8;
                    /* catch() { ... } // from try @ 07c58b1c with catch @ 07c58f8c */
                    /* catch() { ... } // from try @ 07c58860 with catch @ 07c58f90 */
                    /* catch() { ... } // from try @ 07c58ed8 with catch @ 07c58f94 */
                    /* catch() { ... } // from try @ 07c58ed4 with catch @ 07c58f98 */
  fVar23 = *pfVar13;
  fStack000000000000002c = pfVar13[1];
  fVar24 = pfVar13[2];
                    /* catch() { ... } // from try @ 07c58ed0 with catch @ 07c58f9c */
  if (unaff_w20 != 1) {
                    /* catch() { ... } // from try @ 07c5871c with catch @ 07c58fa0 */
                    /* catch() { ... } // from try @ 07c587ec with catch @ 07c58fa4 */
    fVar23 = -*pfVar13;
    fStack000000000000002c = -pfVar13[1];
    fVar24 = -pfVar13[2];
  }
                    /* catch() { ... } // from try @ 07c58ecc with catch @ 07c58fa8 */
                    /* catch() { ... } // from try @ 07c58bdc with catch @ 07c58fac */
                    /* catch() { ... } // from try @ 07c58ec8 with catch @ 07c58fb0 */
  if (*(int *)(lVar11 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 07c58ae8 with catch @ 07c58fb4 */
    thunk_FUN_044a54b4();
                    /* catch() { ... } // from try @ 07c587d0 with catch @ 07c58fb8 */
    lVar11 = *(long *)puVar5;
  }
                    /* catch() { ... } // from try @ 07c58bc0 with catch @ 07c58fbc */
  lVar14 = *(long *)(lVar11 + 0xb8);
                    /* catch() { ... } // from try @ 07c58ec4 with catch @ 07c58fc0 */
  bVar8 = unaff_w20 != 1;
                    /* catch() { ... } // from try @ 07c58ac8 with catch @ 07c58fc4 */
                    /* catch() { ... } // from try @ 07c58cbc with catch @ 07c58fc8 */
                    /* catch() { ... } // from try @ 07c58ec0 with catch @ 07c58fcc */
                    /* catch() { ... } // from try @ 07c58d50 with catch @ 07c58fd0 */
                    /* catch() { ... } // from try @ 07c58ca0 with catch @ 07c58fd4 */
                    /* catch() { ... } // from try @ 07c58ebc with catch @ 07c58fd8 */
                    /* catch() { ... } // from try @ 07c583b8 with catch @ 07c58fdc */
  lVar11 = 0x2c;
  if (bVar8) {
    lVar11 = 0x74;
  }
                    /* catch() { ... } // from try @ 07c58a7c with catch @ 07c58fe0 */
  lVar1 = 0x28;
  if (bVar8) {
    lVar1 = 0x70;
  }
                    /* catch() { ... } // from try @ 07c58eb8 with catch @ 07c58fe4 */
  lVar2 = 0x24;
  if (bVar8) {
    lVar2 = 0x6c;
  }
                    /* catch() { ... } // from try @ 07c58eb4 with catch @ 07c58fe8 */
                    /* catch() { ... } // from try @ 07c58eb0 with catch @ 07c58fec */
                    /* catch() { ... } // from try @ 07c58eac with catch @ 07c58ff0 */
                    /* catch() { ... } // from try @ 07c58ea8 with catch @ 07c58ff4 */
                    /* catch() { ... } // from try @ 07c58294 with catch @ 07c58ff8 */
                    /* catch() { ... } // from try @ 07c58278 with catch @ 07c58ffc */
                    /* catch() { ... } // from try @ 07c583d4 with catch @ 07c59000 */
                    /* catch() { ... } // from try @ 07c58338 with catch @ 07c59004 */
                    /* catch() { ... } // from try @ 07c58ea4 with catch @ 07c59008 */
  fStack000000000000001c =
       (float)FUN_09516eb8(uVar6,fVar33,fVar34,uVar7,*(undefined4 *)(lVar14 + lVar2),
                           *(undefined4 *)(lVar14 + lVar1),*(undefined4 *)(lVar14 + lVar11),0);
  uVar6 = in_stack_00000078;
  fStack000000000000000c = fStack0000000000000070;
                    /* catch() { ... } // from try @ 07c588f0 with catch @ 07c5900c */
  lVar11 = *(long *)puVar5;
                    /* catch() { ... } // from try @ 07c5831c with catch @ 07c59010 */
                    /* catch() { ... } // from try @ 07c589a4 with catch @ 07c59014 */
                    /* catch() { ... } // from try @ 07c588d0 with catch @ 07c59018 */
                    /* catch() { ... } // from try @ 07c58988 with catch @ 07c5901c */
                    /* catch() { ... } // from try @ 07c58ea0 with catch @ 07c59020 */
                    /* catch() { ... } // from try @ 07c58e9c with catch @ 07c59024 */
  if (*(int *)(lVar11 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 07c58e98 with catch @ 07c59028 */
    thunk_FUN_044a54b4();
                    /* catch() { ... } // from try @ 07c58b38 with catch @ 07c5902c */
    lVar11 = *(long *)puVar5;
  }
                    /* catch() { ... } // from try @ 07c58468 with catch @ 07c59030 */
  lVar14 = *(long *)(lVar11 + 0xb8);
                    /* catch() { ... } // from try @ 07c585e0 with catch @ 07c59034 */
  bVar8 = unaff_w20 != 1;
                    /* catch() { ... } // from try @ 07c58c04 with catch @ 07c59038 */
  lVar11 = 0x14;
  if (bVar8) {
    lVar11 = 0x5c;
  }
  lVar1 = 0x10;
  if (bVar8) {
    lVar1 = 0x58;
  }
  lVar2 = 0xc;
  if (bVar8) {
    lVar2 = 0x54;
  }
  fStack0000000000000014 = fStack0000000000000074;
  fVar21 = (float)FUN_09516eb8(in_stack_00000068._4_4_,fStack000000000000000c,fStack0000000000000074
                               ,uVar6,*(undefined4 *)(lVar14 + lVar2),
                               *(undefined4 *)(lVar14 + lVar1),*(undefined4 *)(lVar14 + lVar11),0);
  if (DAT_0a5233ad == '\0') {
    FUN_04447ba8(PTR_DAT_09f1f580);
    DAT_0a5233ad = '\x01';
  }
  puVar5 = PTR_DAT_09f1f580;
  fVar22 = fStack0000000000000024 * fStack0000000000000024 +
           fStack0000000000000038 * fStack0000000000000038 +
           fStack0000000000000020 * fStack0000000000000020;
  fVar32 = unaff_s9;
  fVar27 = unaff_s8;
  fVar31 = fStack0000000000000030;
  if (**(float **)(*(long *)PTR_DAT_09f1f580 + 0xb8) <= fVar22) {
    fVar27 = fStack0000000000000024 * unaff_s8 +
             fStack0000000000000038 * unaff_s9 + fStack0000000000000020 * fStack0000000000000030;
    fVar32 = unaff_s9 - (fStack0000000000000038 * fVar27) / fVar22;
    fVar31 = fStack0000000000000030 - (fStack0000000000000020 * fVar27) / fVar22;
    fVar27 = unaff_s8 - (fStack0000000000000024 * fVar27) / fVar22;
  }
  if (*(char *)(unaff_x23 + 0xf42) == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    *(undefined1 *)(unaff_x23 + 0xf42) = 1;
  }
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  fVar22 = SQRT(fVar27 * fVar27 + fVar32 * fVar32 + fVar31 * fVar31);
  if (fVar22 <= fStack000000000000003c) {
    if (*(char *)(unaff_x24 + 0xf43) == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      *(undefined1 *)(unaff_x24 + 0xf43) = 1;
    }
    pfVar13 = *(float **)(*unaff_x22 + 0xb8);
    fStack0000000000000024 = *pfVar13;
    fStack0000000000000020 = pfVar13[1];
    fVar27 = pfVar13[2];
  }
  else {
    fStack0000000000000024 = fVar32 / fVar22;
    fStack0000000000000020 = fVar31 / fVar22;
    fVar27 = fVar27 / fVar22;
  }
  fVar32 = fStack000000000000001c;
  if (DAT_0a5233ad == '\0') {
    FUN_04447ba8(PTR_DAT_09f1f580);
    DAT_0a5233ad = '\x01';
  }
  fVar31 = unaff_s8 * unaff_s8 +
           unaff_s9 * unaff_s9 + fStack0000000000000030 * fStack0000000000000030;
  if (**(float **)(*(long *)puVar5 + 0xb8) <= fVar31) {
    fVar22 = unaff_s8 * fVar34 + unaff_s9 * fVar32 + fStack0000000000000030 * fVar33;
    fVar32 = fVar32 - (unaff_s9 * fVar22) / fVar31;
    fVar33 = fVar33 - (fStack0000000000000030 * fVar22) / fVar31;
    fVar34 = fVar34 - (unaff_s8 * fVar22) / fVar31;
  }
  if (*(char *)(unaff_x23 + 0xf42) == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    *(undefined1 *)(unaff_x23 + 0xf42) = 1;
  }
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  fVar31 = SQRT(fVar34 * fVar34 + fVar32 * fVar32 + fVar33 * fVar33);
  if (fVar31 <= fStack000000000000003c) {
    if (*(char *)(unaff_x24 + 0xf43) == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      *(undefined1 *)(unaff_x24 + 0xf43) = 1;
    }
    pfVar13 = *(float **)(*unaff_x22 + 0xb8);
    fVar32 = *pfVar13;
    fVar33 = pfVar13[1];
    fVar34 = pfVar13[2];
  }
  else {
    fVar32 = fVar32 / fVar31;
    fVar33 = fVar33 / fVar31;
    fVar34 = fVar34 / fVar31;
  }
  uVar30 = (ulong)(uint)fVar23;
  fStack0000000000000004 = fStack0000000000000030;
  fVar23 = (float)FUN_0770668c(fVar32,fVar33,fVar34,uVar30,fStack000000000000002c,fVar24,0);
  plVar18 = *(long **)(unaff_x19 + 0x28);
  if (plVar18 != (long *)0x0) {
    lVar11 = *plVar18;
    uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *unaff_x21) {
          puVar12 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_07c59348;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar12 = (undefined8 *)FUN_044822ac(plVar18,*unaff_x21,0);
LAB_07c59348:
    iVar10 = (*(code *)*puVar12)(plVar18,puVar12[1]);
    fVar24 = -fVar23;
    if (iVar10 != 1) {
      fVar24 = fVar23;
    }
    uVar29 = 0xc28c0000;
    uVar15 = (ulong)(uint)(fVar24 + 360.0);
    fVar23 = fVar24 + 360.0;
    if (-70.0 <= fVar24) {
      fVar23 = fVar24;
    }
    *(float *)(unaff_x19 + 0x7c) = fVar23;
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      uVar25 = FUN_09539d64(*(long *)(unaff_x19 + 0x30),0);
      uVar26 = FUN_09516c60(0);
      in_stack_00000040 = 0;
      uStack0000000000000048 = 0;
      uStack000000000000004c = 0;
      in_stack_00000058 = 0;
      uStack0000000000000050 = 0;
      uStack0000000000000054 = 0;
      FUN_09537b20(uVar25,uVar15,uVar29,uVar26,uVar28,uVar16,uVar30,&stack0x00000040,0);
      plVar18 = *(long **)(unaff_x19 + 0x48);
      *(float *)(unaff_x19 + 0x80) = fVar32;
      *(float *)(unaff_x19 + 0x84) = fVar33;
      *(float *)(unaff_x19 + 0x88) = fVar34;
      *(ulong *)(unaff_x19 + 0xa0) = CONCAT44(in_stack_00000058,uStack0000000000000054);
      *(ulong *)(unaff_x19 + 0x98) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
      *(ulong *)(unaff_x19 + 0x94) = CONCAT44(uStack000000000000004c,uStack0000000000000048);
      *(undefined8 *)(unaff_x19 + 0x8c) = in_stack_00000040;
      puVar5 = PTR_DAT_09f28c08;
      if (plVar18 != (long *)0x0) {
        lVar11 = *plVar18;
        uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_09f28c08) {
              puVar12 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_07c59468;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar12 = (undefined8 *)FUN_044822ac(plVar18,*(long *)PTR_DAT_09f28c08,0);
LAB_07c59468:
        uVar16 = (*(code *)*puVar12)(plVar18,puVar12[1]);
        if ((uVar16 & 1) == 0) {
          uVar20 = 0;
        }
        else {
          uVar20 = *(byte *)(unaff_x19 + 0x71) ^ 1;
        }
        plVar18 = *(long **)(unaff_x19 + 0x48);
        if (plVar18 != (long *)0x0) {
          lVar14 = *plVar18;
          lVar11 = *(long *)puVar5;
          uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
          fStack0000000000000020 = fStack000000000000000c * fStack0000000000000020;
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == lVar11) {
                puVar12 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_07c59514;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar12 = (undefined8 *)FUN_044822ac(plVar18,lVar11,0);
LAB_07c59514:
          bVar9 = (*(code *)*puVar12)(plVar18,puVar12[1]);
          puVar19 = (uint *)(unaff_x19 + 0x74);
          *(byte *)(unaff_x19 + 0x71) = bVar9 & 1;
          if ((uVar20 & 0.5 < (fStack0000000000000014 * fVar27 +
                              fVar21 * fStack0000000000000024 + fStack0000000000000020) * 0.5 + 0.5
              & *puVar19 >> 0x1f) == 0) {
            if ((int)*puVar19 < 0) {
              return;
            }
            plVar18 = *(long **)(unaff_x19 + 0x58);
            if (plVar18 != (long *)0x0) {
              lVar14 = *plVar18;
              lVar11 = *(long *)puVar5;
              uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar16 != 0) {
                piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == lVar11) {
                    puVar12 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
                    goto LAB_07c595d8;
                  }
                  uVar16 = uVar16 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar16 != 0);
              }
              puVar12 = (undefined8 *)FUN_044822ac(plVar18,lVar11,0);
LAB_07c595d8:
              uVar16 = (*(code *)*puVar12)(plVar18,puVar12[1]);
              if ((uVar16 & 1) != 0) {
                FUN_07c586d0();
                *(undefined4 *)(unaff_x19 + 0x74) = 0xffffffff;
                *(undefined1 *)(unaff_x19 + 0xb0) = 0;
                return;
              }
              uVar20 = *puVar19;
              if ((int)uVar20 < 0) {
                return;
              }
              if (*(char *)(unaff_x19 + 0xb0) != '\0') {
                return;
              }
              lVar11 = *(long *)(unaff_x19 + 0x38);
              if (lVar11 != 0) {
                uVar3 = *(uint *)(lVar11 + 0x18);
                if (uVar3 <= uVar20) goto LAB_07c596cc;
                lVar14 = *(long *)(lVar11 + (ulong)uVar20 * 8 + 0x20);
                if (lVar14 != 0) {
                  if (*(float *)(lVar14 + 0x10) <= *(float *)(unaff_x19 + 0x7c)) {
                    if (*(float *)(unaff_x19 + 0x7c) <= *(float *)(lVar14 + 0x14)) {
                      return;
                    }
                    uVar4 = uVar3 - 1;
                    if ((int)(uVar20 + 1) <= (int)uVar4) {
                      uVar4 = uVar20 + 1;
                    }
                    *puVar19 = uVar4;
                    if (uVar3 <= uVar4) goto LAB_07c596cc;
                    uVar16 = (ulong)(int)uVar4;
                  }
                  else {
                    if ((int)uVar20 < 2) {
                      uVar20 = 1;
                    }
                    uVar20 = uVar20 - 1;
                    *puVar19 = uVar20;
                    if (uVar3 <= uVar20) {
LAB_07c596cc:
                    /* WARNING: Subroutine does not return */
                      FUN_04447e4c();
                    }
                    uVar16 = (ulong)uVar20;
                  }
                  if (*(long *)(lVar11 + uVar16 * 8 + 0x20) != 0) goto LAB_07c59568;
                }
              }
            }
          }
          else {
            lVar11 = FUN_07c596d0(*(undefined4 *)(unaff_x19 + 0x7c));
            if (lVar11 != 0) {
              if (*(char *)(lVar11 + 0x18) == '\0') {
                *puVar19 = 0xffffffff;
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


