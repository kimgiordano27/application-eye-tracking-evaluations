/*
FUNCTION_NAME: OVRManager$$MixedRealityEnabledFromCmd
ENTRY_POINT: 05cfe2b8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_18;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__MixedRealityEnabledFromCmd(void)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  bool bVar7;
  byte bVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  float *pfVar13;
  ulong uVar14;
  ulong uVar15;
  int *piVar16;
  long unaff_x19;
  int unaff_w20;
  long *plVar17;
  uint *puVar18;
  uint uVar19;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  ulong uVar27;
  float unaff_s8;
  float unaff_s9;
  float fVar28;
  ulong unaff_d10;
  float unaff_s11;
  float fVar29;
  float unaff_s14;
  float fStack0000000000000004;
  float fStack000000000000000c;
  float fStack0000000000000014;
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
  undefined8 in_stack_00000068;
  float fStack0000000000000070;
  float fStack0000000000000074;
  undefined4 in_stack_00000078;
  
  uVar15 = _uStack0000000000000030 >> 0x20;
                    /* try { // try from 05cfe2c4 to 05dfe2cf has its CatchHandler @ 05cfe7e8 */
                    /* try { // try from 05cfe2e0 to 05dfe2ff has its CatchHandler @ 05cfe7e0 */
  fStack000000000000001c = (float)FUN_068ed2ec(0);
  uVar6 = in_stack_00000078;
  fStack000000000000000c = fStack0000000000000070;
  lVar10 = *unaff_x26;
                    /* try { // try from 05cfe314 to 05dfe317 has its CatchHandler @ 05cfe804 */
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar10 = *unaff_x26;
  }
  lVar12 = *(long *)(lVar10 + 0xb8);
  bVar7 = unaff_w20 != 1;
                    /* try { // try from 05cfe33c to 05dfe347 has its CatchHandler @ 05cfe7c4 */
  lVar10 = 0x14;
  if (bVar7) {
    lVar10 = 0x5c;
  }
  lVar1 = 0x10;
  if (bVar7) {
    lVar1 = 0x58;
  }
  lVar2 = 0xc;
  if (bVar7) {
    lVar2 = 0x54;
  }
                    /* try { // try from 05cfe354 to 05dfe35b has its CatchHandler @ 05cfe7cc */
  fStack0000000000000014 = fStack0000000000000074;
                    /* try { // try from 05cfe360 to 05dfe367 has its CatchHandler @ 05cfe7bc */
  fVar20 = (float)FUN_068ed2ec(in_stack_00000068._4_4_,fStack000000000000000c,fStack0000000000000074
                               ,uVar6,*(undefined4 *)(lVar12 + lVar2),
                               *(undefined4 *)(lVar12 + lVar1),*(undefined4 *)(lVar12 + lVar10),0);
  if (DAT_0738eca3 == '\0') {
    FUN_02fe925c(PTR_DAT_06f6e7c0);
    DAT_0738eca3 = '\x01';
  }
  puVar5 = PTR_DAT_06f6e7c0;
  fVar21 = fStack0000000000000024 * fStack0000000000000024 +
           fStack0000000000000038 * fStack0000000000000038 +
           fStack0000000000000020 * fStack0000000000000020;
  fVar28 = (float)unaff_d10;
  uVar27 = unaff_d10;
  fVar29 = unaff_s9;
  fVar24 = unaff_s8;
  if (**(float **)(*(long *)PTR_DAT_06f6e7c0 + 0xb8) <= fVar21) {
    fVar24 = fStack0000000000000024 * unaff_s8 +
             fStack0000000000000038 * unaff_s9 + fStack0000000000000020 * fVar28;
    fVar29 = unaff_s9 - (fStack0000000000000038 * fVar24) / fVar21;
    uVar27 = (ulong)(uint)(fVar28 - (fStack0000000000000020 * fVar24) / fVar21);
    fVar24 = unaff_s8 - (fStack0000000000000024 * fVar24) / fVar21;
  }
  if (*(char *)(unaff_x23 + 0x668) == '\0') {
    FUN_02fe925c(PTR_DAT_06f6d508);
    *(undefined1 *)(unaff_x23 + 0x668) = 1;
  }
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  fStack0000000000000020 = (float)uVar27;
  fVar21 = SQRT(fVar24 * fVar24 + fVar29 * fVar29 + fStack0000000000000020 * fStack0000000000000020)
  ;
  if (fVar21 <= fStack000000000000003c) {
    if (*(char *)(unaff_x24 + 0x669) == '\0') {
      FUN_02fe925c(PTR_DAT_06f6d5d8);
      *(undefined1 *)(unaff_x24 + 0x669) = 1;
    }
    pfVar13 = *(float **)(*unaff_x22 + 0xb8);
    fStack0000000000000024 = *pfVar13;
    fStack0000000000000020 = pfVar13[1];
    fVar24 = pfVar13[2];
  }
  else {
    fStack0000000000000024 = fVar29 / fVar21;
    fStack0000000000000020 = fStack0000000000000020 / fVar21;
    fVar24 = fVar24 / fVar21;
  }
  fVar29 = fStack000000000000001c;
  if (DAT_0738eca3 == '\0') {
    FUN_02fe925c(PTR_DAT_06f6e7c0);
    DAT_0738eca3 = '\x01';
  }
  fVar21 = unaff_s8 * unaff_s8 + unaff_s9 * unaff_s9 + fVar28 * fVar28;
  if (**(float **)(*(long *)puVar5 + 0xb8) <= fVar21) {
    fVar25 = unaff_s8 * unaff_s14 + unaff_s9 * fVar29 + fVar28 * unaff_s11;
    fVar29 = fVar29 - (unaff_s9 * fVar25) / fVar21;
    unaff_s11 = unaff_s11 - (fVar28 * fVar25) / fVar21;
    unaff_s14 = unaff_s14 - (unaff_s8 * fVar25) / fVar21;
  }
  if (*(char *)(unaff_x23 + 0x668) == '\0') {
    FUN_02fe925c(PTR_DAT_06f6d508);
    *(undefined1 *)(unaff_x23 + 0x668) = 1;
  }
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  fVar21 = SQRT(unaff_s14 * unaff_s14 + fVar29 * fVar29 + unaff_s11 * unaff_s11);
  if (fVar21 <= fStack000000000000003c) {
    if (*(char *)(unaff_x24 + 0x669) == '\0') {
      FUN_02fe925c(PTR_DAT_06f6d5d8);
      *(undefined1 *)(unaff_x24 + 0x669) = 1;
    }
    pfVar13 = *(float **)(*unaff_x22 + 0xb8);
    fVar29 = *pfVar13;
    unaff_s11 = pfVar13[1];
    unaff_s14 = pfVar13[2];
  }
  else {
    fVar29 = fVar29 / fVar21;
    unaff_s11 = unaff_s11 / fVar21;
    unaff_s14 = unaff_s14 / fVar21;
  }
  uVar27 = in_stack_00000028 & 0xffffffff;
  fStack0000000000000004 = fVar28;
  fVar21 = (float)FUN_031e4528(fVar29,unaff_s11,unaff_s14,uVar27,in_stack_00000028._4_4_,
                               uStack0000000000000030,0);
  plVar17 = *(long **)(unaff_x19 + 0x28);
  if (plVar17 != (long *)0x0) {
    lVar10 = *plVar17;
    uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar14 != 0) {
      piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *unaff_x21) {
          puVar11 = (undefined8 *)(lVar10 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_05cfe63c;
        }
        uVar14 = uVar14 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar14 != 0);
    }
    puVar11 = (undefined8 *)FUN_02feb5b8(plVar17,*unaff_x21,0);
LAB_05cfe63c:
    iVar9 = (*(code *)*puVar11)(plVar17,puVar11[1]);
    fVar28 = -fVar21;
    if (iVar9 != 1) {
      fVar28 = fVar21;
    }
    uVar26 = 0xc28c0000;
    uVar14 = (ulong)(uint)(fVar28 + 360.0);
    fVar21 = fVar28 + 360.0;
    if (-70.0 <= fVar28) {
      fVar21 = fVar28;
    }
    *(float *)(unaff_x19 + 0x7c) = fVar21;
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      uVar22 = FUN_069042b4(*(long *)(unaff_x19 + 0x30),0);
      uVar23 = FUN_068ed124(0);
      in_stack_00000040 = 0;
      uStack0000000000000048 = 0;
      uStack000000000000004c = 0;
      in_stack_00000058 = 0;
      uStack0000000000000050 = 0;
      uStack0000000000000054 = 0;
      FUN_06902890(uVar22,uVar14,uVar26,uVar23,unaff_d10,uVar15,uVar27,&stack0x00000040,0);
      plVar17 = *(long **)(unaff_x19 + 0x48);
      *(float *)(unaff_x19 + 0x80) = fVar29;
      *(float *)(unaff_x19 + 0x84) = unaff_s11;
      *(float *)(unaff_x19 + 0x88) = unaff_s14;
      *(ulong *)(unaff_x19 + 0xa0) = CONCAT44(in_stack_00000058,uStack0000000000000054);
      *(ulong *)(unaff_x19 + 0x98) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
      *(ulong *)(unaff_x19 + 0x94) = CONCAT44(uStack000000000000004c,uStack0000000000000048);
      *(undefined8 *)(unaff_x19 + 0x8c) = in_stack_00000040;
      puVar5 = PTR_DAT_06f9acf0;
      if (plVar17 != (long *)0x0) {
        lVar10 = *plVar17;
        uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_06f9acf0) {
              puVar11 = (undefined8 *)(lVar10 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_05cfe75c;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar11 = (undefined8 *)FUN_02feb5b8(plVar17,*(long *)PTR_DAT_06f9acf0,0);
LAB_05cfe75c:
        uVar15 = (*(code *)*puVar11)(plVar17,puVar11[1]);
        if ((uVar15 & 1) == 0) {
          uVar19 = 0;
        }
        else {
          uVar19 = *(byte *)(unaff_x19 + 0x71) ^ 1;
        }
        plVar17 = *(long **)(unaff_x19 + 0x48);
        if (plVar17 != (long *)0x0) {
          lVar12 = *plVar17;
          lVar10 = *(long *)puVar5;
          uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
          fStack0000000000000020 = fStack000000000000000c * fStack0000000000000020;
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == lVar10) {
                puVar11 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_05cfe808;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar11 = (undefined8 *)FUN_02feb5b8(plVar17,lVar10,0);
LAB_05cfe808:
          bVar8 = (*(code *)*puVar11)(plVar17,puVar11[1]);
          puVar18 = (uint *)(unaff_x19 + 0x74);
          *(byte *)(unaff_x19 + 0x71) = bVar8 & 1;
          if ((uVar19 & 0.5 < (fStack0000000000000014 * fVar24 +
                              fVar20 * fStack0000000000000024 + fStack0000000000000020) * 0.5 + 0.5
              & *puVar18 >> 0x1f) == 0) {
            if ((int)*puVar18 < 0) {
              return;
            }
            plVar17 = *(long **)(unaff_x19 + 0x58);
            if (plVar17 != (long *)0x0) {
              lVar12 = *plVar17;
              lVar10 = *(long *)puVar5;
              uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == lVar10) {
                    puVar11 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
                    goto LAB_05cfe8cc;
                  }
                  uVar15 = uVar15 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar15 != 0);
              }
              puVar11 = (undefined8 *)FUN_02feb5b8(plVar17,lVar10,0);
LAB_05cfe8cc:
              uVar15 = (*(code *)*puVar11)(plVar17,puVar11[1]);
              if ((uVar15 & 1) != 0) {
                FUN_05cfd9c4();
                *(undefined4 *)(unaff_x19 + 0x74) = 0xffffffff;
                *(undefined1 *)(unaff_x19 + 0xb0) = 0;
                return;
              }
              uVar19 = *puVar18;
              if ((int)uVar19 < 0) {
                return;
              }
              if (*(char *)(unaff_x19 + 0xb0) != '\0') {
                return;
              }
              lVar10 = *(long *)(unaff_x19 + 0x38);
              if (lVar10 != 0) {
                uVar3 = *(uint *)(lVar10 + 0x18);
                if (uVar3 <= uVar19) goto LAB_05cfe9c0;
                lVar12 = *(long *)(lVar10 + (ulong)uVar19 * 8 + 0x20);
                if (lVar12 != 0) {
                  if (*(float *)(lVar12 + 0x10) <= *(float *)(unaff_x19 + 0x7c)) {
                    if (*(float *)(unaff_x19 + 0x7c) <= *(float *)(lVar12 + 0x14)) {
                      return;
                    }
                    uVar4 = uVar3 - 1;
                    if ((int)(uVar19 + 1) <= (int)uVar4) {
                      uVar4 = uVar19 + 1;
                    }
                    *puVar18 = uVar4;
                    if (uVar3 <= uVar4) goto LAB_05cfe9c0;
                    uVar15 = (ulong)(int)uVar4;
                  }
                  else {
                    if ((int)uVar19 < 2) {
                      uVar19 = 1;
                    }
                    uVar19 = uVar19 - 1;
                    *puVar18 = uVar19;
                    if (uVar3 <= uVar19) {
LAB_05cfe9c0:
                    /* WARNING: Subroutine does not return */
                      FUN_02fe94f0();
                    }
                    uVar15 = (ulong)uVar19;
                  }
                  if (*(long *)(lVar10 + uVar15 * 8 + 0x20) != 0) goto LAB_05cfe85c;
                }
              }
            }
          }
          else {
            lVar10 = FUN_05cfe9c4(*(undefined4 *)(unaff_x19 + 0x7c));
            if (lVar10 != 0) {
              if (*(char *)(lVar10 + 0x18) == '\0') {
                *puVar18 = 0xffffffff;
                return;
              }
LAB_05cfe85c:
              FUN_05cfd9c4();
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


