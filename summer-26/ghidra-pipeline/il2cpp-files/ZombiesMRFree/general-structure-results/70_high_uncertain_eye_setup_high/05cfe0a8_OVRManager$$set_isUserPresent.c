/*
FUNCTION_NAME: OVRManager$$set_isUserPresent
ENTRY_POINT: 05cfe0a8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_isUserPresent
               (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  byte bVar10;
  int iVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  float *pfVar15;
  ulong uVar16;
  ulong uVar17;
  int *piVar18;
  long unaff_x19;
  int unaff_w20;
  uint *puVar19;
  uint uVar20;
  long *unaff_x21;
  long unaff_x22;
  long *plVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  ulong uVar30;
  ulong uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fStack0000000000000004;
  float fStack000000000000000c;
  float fStack0000000000000014;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack000000000000002c;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  undefined4 uStack000000000000006c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  undefined4 in_stack_00000078;
  
  fVar32 = fStack0000000000000068;
  fVar34 = fStack0000000000000060;
  plVar21 = *(long **)(unaff_x22 + 0x5d8);
                    /* try { // try from 05cfe0b8 to 05dfe0bf has its CatchHandler @ 05cfe848 */
  lVar13 = *(long *)(*plVar21 + 0xb8);
  fStack0000000000000038 = *(float *)(lVar13 + 0x18);
  fVar36 = *(float *)(lVar13 + 0x1c);
                    /* try { // try from 05cfe0c4 to 05dfe0cb has its CatchHandler @ 05cfe83c */
  fVar35 = *(float *)(lVar13 + 0x20);
  fVar22 = (float)FUN_069042b4(param_4,0);
                    /* try { // try from 05cfe0d4 to 05dfe0df has its CatchHandler @ 05cfe838 */
  if (DAT_0738e668 == '\0') {
                    /* try { // try from 05cfe0f0 to 05dfe10f has its CatchHandler @ 05cfe834 */
    FUN_02fe925c(PTR_DAT_06f6d508);
    DAT_0738e668 = '\x01';
  }
  puVar5 = PTR_DAT_06f6d508;
  fVar34 = fVar34 - fVar22;
  param_2 = fStack0000000000000064 - param_2;
  fVar32 = fVar32 - param_3;
  if (*(int *)(*(long *)PTR_DAT_06f6d508 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  fStack0000000000000034 = SQRT(fVar32 * fVar32 + fVar34 * fVar34 + param_2 * param_2);
  fStack000000000000003c = DAT_01369fe0;
  if (fStack0000000000000034 <= DAT_01369fe0) {
    if (DAT_0738e669 == '\0') {
      FUN_02fe925c(PTR_DAT_06f6d5d8);
      DAT_0738e669 = '\x01';
    }
    pfVar15 = *(float **)(*plVar21 + 0xb8);
    fVar34 = *pfVar15;
    param_2 = pfVar15[1];
    fStack0000000000000034 = pfVar15[2];
  }
  else {
    param_2 = param_2 / fStack0000000000000034;
    fVar34 = fVar34 / fStack0000000000000034;
    fStack0000000000000034 = fVar32 / fStack0000000000000034;
  }
  fVar32 = fVar36 * fStack0000000000000034;
  fVar37 = fStack0000000000000038 * fStack0000000000000034;
  fVar22 = fStack0000000000000038 * param_2;
  fStack0000000000000024 = fVar35;
  if (DAT_0738e668 == '\0') {
    FUN_02fe925c(PTR_DAT_06f6d508);
    DAT_0738e668 = '\x01';
  }
  fVar32 = fVar32 - fVar35 * param_2;
  fVar37 = fVar35 * fVar34 - fVar37;
  fVar22 = fVar22 - fVar36 * fVar34;
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  fVar35 = fStack0000000000000034;
  fVar28 = SQRT(fVar22 * fVar22 + fVar32 * fVar32 + fVar37 * fVar37);
  if (fVar28 <= fStack000000000000003c) {
    if (DAT_0738e669 == '\0') {
      FUN_02fe925c(PTR_DAT_06f6d5d8);
      DAT_0738e669 = '\x01';
    }
    pfVar15 = *(float **)(*plVar21 + 0xb8);
    fVar32 = *pfVar15;
    fStack000000000000002c = pfVar15[1];
    fVar22 = pfVar15[2];
  }
  else {
    fVar32 = fVar32 / fVar28;
    fStack000000000000002c = fVar37 / fVar28;
    fVar22 = fVar22 / fVar28;
  }
  uVar8 = in_stack_00000078;
  fVar28 = fStack0000000000000074;
  fVar37 = fStack0000000000000070;
  uVar7 = uStack000000000000006c;
  puVar6 = PTR_DAT_06fb4a78;
  uVar17 = (ulong)(uint)param_2;
  lVar13 = *(long *)PTR_DAT_06fb4a78;
  if (unaff_w20 != 1) {
    fVar32 = -fVar32;
    fStack000000000000002c = -fStack000000000000002c;
    fVar22 = -fVar22;
  }
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar13 = *(long *)puVar6;
  }
  lVar14 = *(long *)(lVar13 + 0xb8);
  bVar9 = unaff_w20 != 1;
  lVar13 = 0x2c;
  if (bVar9) {
    lVar13 = 0x74;
  }
  lVar1 = 0x28;
  if (bVar9) {
    lVar1 = 0x70;
  }
  lVar2 = 0x24;
  if (bVar9) {
    lVar2 = 0x6c;
  }
  fStack000000000000001c =
       (float)FUN_068ed2ec(uVar7,fVar37,fVar28,uVar8,*(undefined4 *)(lVar14 + lVar2),
                           *(undefined4 *)(lVar14 + lVar1),*(undefined4 *)(lVar14 + lVar13),0);
  uVar7 = in_stack_00000078;
  fStack000000000000000c = fStack0000000000000070;
  lVar13 = *(long *)puVar6;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar13 = *(long *)puVar6;
  }
  lVar14 = *(long *)(lVar13 + 0xb8);
  bVar9 = unaff_w20 != 1;
  lVar13 = 0x14;
  if (bVar9) {
    lVar13 = 0x5c;
  }
  lVar1 = 0x10;
  if (bVar9) {
    lVar1 = 0x58;
  }
  lVar2 = 0xc;
  if (bVar9) {
    lVar2 = 0x54;
  }
  fStack0000000000000014 = fStack0000000000000074;
  fVar23 = (float)FUN_068ed2ec(uStack000000000000006c,fStack000000000000000c,fStack0000000000000074,
                               uVar7,*(undefined4 *)(lVar14 + lVar2),*(undefined4 *)(lVar14 + lVar1)
                               ,*(undefined4 *)(lVar14 + lVar13),0);
  if (DAT_0738eca3 == '\0') {
    FUN_02fe925c(PTR_DAT_06f6e7c0);
    DAT_0738eca3 = '\x01';
  }
  puVar6 = PTR_DAT_06f6e7c0;
  fVar24 = fStack0000000000000024 * fStack0000000000000024 +
           fStack0000000000000038 * fStack0000000000000038 + fVar36 * fVar36;
  fVar27 = fVar35;
  fVar33 = fVar34;
  fStack0000000000000020 = param_2;
  if (**(float **)(*(long *)PTR_DAT_06f6e7c0 + 0xb8) <= fVar24) {
    fVar27 = fStack0000000000000024 * fVar35 + fStack0000000000000038 * fVar34 + fVar36 * param_2;
    fVar33 = fVar34 - (fStack0000000000000038 * fVar27) / fVar24;
    fStack0000000000000020 = param_2 - (fVar36 * fVar27) / fVar24;
    fVar27 = fVar35 - (fStack0000000000000024 * fVar27) / fVar24;
  }
  if (DAT_0738e668 == '\0') {
    FUN_02fe925c(PTR_DAT_06f6d508);
    DAT_0738e668 = '\x01';
  }
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  fVar36 = SQRT(fVar27 * fVar27 + fVar33 * fVar33 + fStack0000000000000020 * fStack0000000000000020)
  ;
  if (fVar36 <= fStack000000000000003c) {
    if (DAT_0738e669 == '\0') {
      FUN_02fe925c(PTR_DAT_06f6d5d8);
      DAT_0738e669 = '\x01';
    }
    pfVar15 = *(float **)(*plVar21 + 0xb8);
    fStack0000000000000024 = *pfVar15;
    fStack0000000000000020 = pfVar15[1];
    fStack0000000000000038 = pfVar15[2];
  }
  else {
    fStack0000000000000024 = fVar33 / fVar36;
    fStack0000000000000020 = fStack0000000000000020 / fVar36;
    fStack0000000000000038 = fVar27 / fVar36;
  }
  fVar36 = fStack000000000000001c;
  if (DAT_0738eca3 == '\0') {
    FUN_02fe925c(PTR_DAT_06f6e7c0);
    DAT_0738eca3 = '\x01';
  }
  fVar27 = fVar35 * fVar35 + fVar34 * fVar34 + param_2 * param_2;
  if (**(float **)(*(long *)puVar6 + 0xb8) <= fVar27) {
    fVar33 = fVar35 * fVar28 + fVar34 * fVar36 + param_2 * fVar37;
    fVar36 = fVar36 - (fVar34 * fVar33) / fVar27;
    fVar37 = fVar37 - (param_2 * fVar33) / fVar27;
    fVar28 = fVar28 - (fVar35 * fVar33) / fVar27;
  }
  if (DAT_0738e668 == '\0') {
    FUN_02fe925c(PTR_DAT_06f6d508);
    DAT_0738e668 = '\x01';
  }
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  fVar35 = SQRT(fVar28 * fVar28 + fVar36 * fVar36 + fVar37 * fVar37);
  if (fVar35 <= fStack000000000000003c) {
    if (DAT_0738e669 == '\0') {
      FUN_02fe925c(PTR_DAT_06f6d5d8);
      DAT_0738e669 = '\x01';
    }
    pfVar15 = *(float **)(*plVar21 + 0xb8);
    fVar36 = *pfVar15;
    fVar37 = pfVar15[1];
    fVar28 = pfVar15[2];
  }
  else {
    fVar36 = fVar36 / fVar35;
    fVar37 = fVar37 / fVar35;
    fVar28 = fVar28 / fVar35;
  }
  uVar31 = (ulong)(uint)fVar32;
  fStack0000000000000004 = param_2;
  fVar32 = (float)FUN_031e4528(fVar36,fVar37,fVar28,uVar31,fStack000000000000002c,fVar22,0);
  plVar21 = *(long **)(unaff_x19 + 0x28);
  if (plVar21 != (long *)0x0) {
    lVar13 = *plVar21;
    uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar16 != 0) {
      piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *unaff_x21) {
          puVar12 = (undefined8 *)(lVar13 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_05cfe63c;
        }
        uVar16 = uVar16 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar16 != 0);
    }
    puVar12 = (undefined8 *)FUN_02feb5b8(plVar21,*unaff_x21,0);
LAB_05cfe63c:
    iVar11 = (*(code *)*puVar12)(plVar21,puVar12[1]);
    fVar22 = -fVar32;
    if (iVar11 != 1) {
      fVar22 = fVar32;
    }
    uVar29 = 0xc28c0000;
    uVar16 = (ulong)(uint)(fVar22 + 360.0);
    fVar32 = fVar22 + 360.0;
    if (-70.0 <= fVar22) {
      fVar32 = fVar22;
    }
    *(float *)(unaff_x19 + 0x7c) = fVar32;
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      uVar25 = FUN_069042b4(*(long *)(unaff_x19 + 0x30),0);
      uVar30 = (ulong)(uint)fStack0000000000000034;
      uVar26 = FUN_068ed124(fVar34,uVar17,uVar30,0);
      in_stack_00000040 = 0;
      uStack0000000000000048 = 0;
      uStack000000000000004c = 0;
      in_stack_00000058 = 0;
      uStack0000000000000050 = 0;
      uStack0000000000000054 = 0;
      FUN_06902890(uVar25,uVar16,uVar29,uVar26,uVar17,uVar30,uVar31,&stack0x00000040,0);
      plVar21 = *(long **)(unaff_x19 + 0x48);
      *(float *)(unaff_x19 + 0x80) = fVar36;
      *(float *)(unaff_x19 + 0x84) = fVar37;
      *(float *)(unaff_x19 + 0x88) = fVar28;
      *(ulong *)(unaff_x19 + 0xa0) = CONCAT44(in_stack_00000058,uStack0000000000000054);
      *(ulong *)(unaff_x19 + 0x98) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
      *(ulong *)(unaff_x19 + 0x94) = CONCAT44(uStack000000000000004c,uStack0000000000000048);
      *(undefined8 *)(unaff_x19 + 0x8c) = in_stack_00000040;
      puVar5 = PTR_DAT_06f9acf0;
      if (plVar21 != (long *)0x0) {
        lVar13 = *plVar21;
        uVar17 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_06f9acf0) {
              puVar12 = (undefined8 *)(lVar13 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_05cfe75c;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar12 = (undefined8 *)FUN_02feb5b8(plVar21,*(long *)PTR_DAT_06f9acf0,0);
LAB_05cfe75c:
        uVar17 = (*(code *)*puVar12)(plVar21,puVar12[1]);
        if ((uVar17 & 1) == 0) {
          uVar20 = 0;
        }
        else {
          uVar20 = *(byte *)(unaff_x19 + 0x71) ^ 1;
        }
        plVar21 = *(long **)(unaff_x19 + 0x48);
        if (plVar21 != (long *)0x0) {
          lVar14 = *plVar21;
          lVar13 = *(long *)puVar5;
          fVar23 = fVar23 * fStack0000000000000024;
          uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
          fStack0000000000000020 = fStack000000000000000c * fStack0000000000000020;
          fVar34 = fStack0000000000000014 * fStack0000000000000038;
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == lVar13) {
                puVar12 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_05cfe808;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar12 = (undefined8 *)FUN_02feb5b8(plVar21,lVar13,0);
LAB_05cfe808:
          bVar10 = (*(code *)*puVar12)(plVar21,puVar12[1]);
          puVar19 = (uint *)(unaff_x19 + 0x74);
          *(byte *)(unaff_x19 + 0x71) = bVar10 & 1;
          if ((uVar20 & 0.5 < (fVar34 + fVar23 + fStack0000000000000020) * 0.5 + 0.5 &
              *puVar19 >> 0x1f) == 0) {
            if ((int)*puVar19 < 0) {
              return;
            }
            plVar21 = *(long **)(unaff_x19 + 0x58);
            if (plVar21 != (long *)0x0) {
              lVar14 = *plVar21;
              lVar13 = *(long *)puVar5;
              uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar17 != 0) {
                piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == lVar13) {
                    puVar12 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
                    goto LAB_05cfe8cc;
                  }
                  uVar17 = uVar17 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar17 != 0);
              }
              puVar12 = (undefined8 *)FUN_02feb5b8(plVar21,lVar13,0);
LAB_05cfe8cc:
              uVar17 = (*(code *)*puVar12)(plVar21,puVar12[1]);
              if ((uVar17 & 1) != 0) {
                FUN_05cfd9c4();
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
              lVar13 = *(long *)(unaff_x19 + 0x38);
              if (lVar13 != 0) {
                uVar3 = *(uint *)(lVar13 + 0x18);
                if (uVar3 <= uVar20) goto LAB_05cfe9c0;
                lVar14 = *(long *)(lVar13 + (ulong)uVar20 * 8 + 0x20);
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
                    if (uVar3 <= uVar4) goto LAB_05cfe9c0;
                    uVar17 = (ulong)(int)uVar4;
                  }
                  else {
                    if ((int)uVar20 < 2) {
                      uVar20 = 1;
                    }
                    uVar20 = uVar20 - 1;
                    *puVar19 = uVar20;
                    if (uVar3 <= uVar20) {
LAB_05cfe9c0:
                    /* WARNING: Subroutine does not return */
                      FUN_02fe94f0();
                    }
                    uVar17 = (ulong)uVar20;
                  }
                  if (*(long *)(lVar13 + uVar17 * 8 + 0x20) != 0) goto LAB_05cfe85c;
                }
              }
            }
          }
          else {
            lVar13 = FUN_05cfe9c4(*(undefined4 *)(unaff_x19 + 0x7c));
            if (lVar13 != 0) {
              if (*(char *)(lVar13 + 0x18) == '\0') {
                *puVar19 = 0xffffffff;
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


