/*
FUNCTION_NAME: OVRManager$$get_isUserPresent
ENTRY_POINT: 05cfdfd0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_isUserPresent
               (long param_1,undefined1 param_2 [16],float param_3,float param_4,undefined8 param_5,
               long param_6)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 in_ZR;
  bool bVar10;
  byte bVar11;
  int iVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  float *pfVar17;
  long in_x9;
  ulong uVar18;
  int *in_x10;
  int *piVar19;
  long unaff_x19;
  long *plVar20;
  uint *puVar21;
  uint uVar22;
  long *unaff_x21;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  ulong uVar36;
  ulong uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fStack0000000000000020;
  float fStack0000000000000024;
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
  
  while (!(bool)in_ZR) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar13 = (undefined8 *)FUN_02feb5b8();
      goto LAB_05cfe000;
    }
    in_ZR = *(long *)(in_x10 + 2) == param_6;
    in_x10 = in_x10 + 4;
  }
  puVar13 = (undefined8 *)(param_1 + (long)(*in_x10 + 9) * 0x10 + 0x138);
LAB_05cfe000:
  uVar14 = (*(code *)*puVar13)();
  if ((uVar14 & 1) == 0) {
LAB_05cfe8dc:
    FUN_05cfd9c4();
    *(undefined4 *)(unaff_x19 + 0x74) = 0xffffffff;
    *(undefined1 *)(unaff_x19 + 0xb0) = 0;
  }
  else {
    plVar20 = *(long **)(unaff_x19 + 0x28);
    if (plVar20 == (long *)0x0) {
LAB_05cfe9bc:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    lVar15 = *plVar20;
                    /* try { // try from 05cfe028 to 05dfe02f has its CatchHandler @ 05cfe874 */
    uVar14 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar14 != 0) {
      piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
                    /* try { // try from 05cfe03c to 05dfe043 has its CatchHandler @ 05cfe86c */
        if (*(long *)(piVar19 + -2) == *unaff_x21) {
                    /* try { // try from 05cfe064 to 05dfe073 has its CatchHandler @ 05cfe870 */
          puVar13 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_05cfe06c;
        }
        uVar14 = uVar14 - 1;
                    /* try { // try from 05cfe048 to 05dfe063 has its CatchHandler @ 05cfe878 */
        piVar19 = piVar19 + 4;
      } while (uVar14 != 0);
    }
    puVar13 = (undefined8 *)FUN_02feb5b8(plVar20,*unaff_x21,0);
LAB_05cfe06c:
    iVar12 = (*(code *)*puVar13)(plVar20,puVar13[1]);
                    /* try { // try from 05cfe080 to 05dfe08b has its CatchHandler @ 05cfe850 */
    if (DAT_0738e662 == '\0') {
      FUN_02fe925c(PTR_DAT_06f6d5d8);
                    /* try { // try from 05cfe094 to 05dfe09f has its CatchHandler @ 05cfe864 */
      DAT_0738e662 = '\x01';
    }
    fVar38 = fStack0000000000000068;
    fVar41 = fStack0000000000000060;
    puVar6 = PTR_DAT_06f6d5d8;
    if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_05cfe9bc;
                    /* try { // try from 05cfe0a4 to 05dfe0ab has its CatchHandler @ 05cfe860 */
    lVar15 = *(long *)(*(long *)PTR_DAT_06f6d5d8 + 0xb8);
    fVar23 = *(float *)(lVar15 + 0x18);
    fVar44 = *(float *)(lVar15 + 0x1c);
    fVar42 = *(float *)(lVar15 + 0x20);
    fVar24 = (float)FUN_069042b4(*(long *)(unaff_x19 + 0x30),0);
    if (DAT_0738e668 == '\0') {
      FUN_02fe925c(PTR_DAT_06f6d508);
      DAT_0738e668 = '\x01';
    }
    puVar5 = PTR_DAT_06f6d508;
    fVar41 = fVar41 - fVar24;
    param_3 = fStack0000000000000064 - param_3;
    fVar38 = fVar38 - param_4;
    if (*(int *)(*(long *)PTR_DAT_06f6d508 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    fVar24 = DAT_01369fe0;
    fVar25 = SQRT(fVar38 * fVar38 + fVar41 * fVar41 + param_3 * param_3);
    if (fVar25 <= DAT_01369fe0) {
      if (DAT_0738e669 == '\0') {
        FUN_02fe925c(PTR_DAT_06f6d5d8);
        DAT_0738e669 = '\x01';
      }
      pfVar17 = *(float **)(*(long *)puVar6 + 0xb8);
      fVar41 = *pfVar17;
      param_3 = pfVar17[1];
      fVar38 = pfVar17[2];
    }
    else {
      param_3 = param_3 / fVar25;
      fVar41 = fVar41 / fVar25;
      fVar38 = fVar38 / fVar25;
    }
    if (DAT_0738e668 == '\0') {
      FUN_02fe925c(PTR_DAT_06f6d508);
      DAT_0738e668 = '\x01';
    }
    fVar25 = fVar44 * fVar38 - fVar42 * param_3;
    fVar40 = fVar42 * fVar41 - fVar23 * fVar38;
    fVar39 = fVar23 * param_3 - fVar44 * fVar41;
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    fVar33 = SQRT(fVar39 * fVar39 + fVar25 * fVar25 + fVar40 * fVar40);
    if (fVar33 <= fVar24) {
      if (DAT_0738e669 == '\0') {
        FUN_02fe925c(PTR_DAT_06f6d5d8);
        DAT_0738e669 = '\x01';
      }
      pfVar17 = *(float **)(*(long *)puVar6 + 0xb8);
      fVar25 = *pfVar17;
      fVar40 = pfVar17[1];
      fVar39 = pfVar17[2];
    }
    else {
      fVar25 = fVar25 / fVar33;
      fVar40 = fVar40 / fVar33;
      fVar39 = fVar39 / fVar33;
    }
    uVar9 = in_stack_00000078;
    fVar43 = fStack0000000000000074;
    fVar33 = fStack0000000000000070;
    uVar8 = uStack000000000000006c;
    puVar7 = PTR_DAT_06fb4a78;
    uVar14 = (ulong)(uint)param_3;
    lVar15 = *(long *)PTR_DAT_06fb4a78;
    if (iVar12 != 1) {
      fVar25 = -fVar25;
      fVar40 = -fVar40;
      fVar39 = -fVar39;
    }
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar15 = *(long *)puVar7;
    }
    lVar16 = *(long *)(lVar15 + 0xb8);
    bVar10 = iVar12 != 1;
    lVar15 = 0x2c;
    if (bVar10) {
      lVar15 = 0x74;
    }
    lVar1 = 0x28;
    if (bVar10) {
      lVar1 = 0x70;
    }
    lVar2 = 0x24;
    if (bVar10) {
      lVar2 = 0x6c;
    }
    fVar26 = (float)FUN_068ed2ec(uVar8,fVar33,fVar43,uVar9,*(undefined4 *)(lVar16 + lVar2),
                                 *(undefined4 *)(lVar16 + lVar1),*(undefined4 *)(lVar16 + lVar15),0)
    ;
    uVar8 = in_stack_00000078;
    fVar31 = fStack0000000000000070;
    lVar15 = *(long *)puVar7;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar15 = *(long *)puVar7;
    }
    lVar16 = *(long *)(lVar15 + 0xb8);
    bVar10 = iVar12 != 1;
    lVar15 = 0x14;
    if (bVar10) {
      lVar15 = 0x5c;
    }
    lVar1 = 0x10;
    if (bVar10) {
      lVar1 = 0x58;
    }
    lVar2 = 0xc;
    if (bVar10) {
      lVar2 = 0x54;
    }
    fVar34 = fStack0000000000000074;
    fVar27 = (float)FUN_068ed2ec(uStack000000000000006c,fVar31,fStack0000000000000074,uVar8,
                                 *(undefined4 *)(lVar16 + lVar2),*(undefined4 *)(lVar16 + lVar1),
                                 *(undefined4 *)(lVar16 + lVar15),0);
    if (DAT_0738eca3 == '\0') {
      FUN_02fe925c(PTR_DAT_06f6e7c0);
      DAT_0738eca3 = '\x01';
    }
    puVar7 = PTR_DAT_06f6e7c0;
    fVar28 = fVar42 * fVar42 + fVar23 * fVar23 + fVar44 * fVar44;
    fVar32 = fVar38;
    fStack0000000000000024 = fVar41;
    fStack0000000000000020 = param_3;
    if (**(float **)(*(long *)PTR_DAT_06f6e7c0 + 0xb8) <= fVar28) {
      fVar32 = fVar42 * fVar38 + fVar23 * fVar41 + fVar44 * param_3;
      fStack0000000000000024 = fVar41 - (fVar23 * fVar32) / fVar28;
      fStack0000000000000020 = param_3 - (fVar44 * fVar32) / fVar28;
      fVar32 = fVar38 - (fVar42 * fVar32) / fVar28;
    }
    if (DAT_0738e668 == '\0') {
      FUN_02fe925c(PTR_DAT_06f6d508);
      DAT_0738e668 = '\x01';
    }
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    fVar23 = SQRT(fVar32 * fVar32 +
                  fStack0000000000000024 * fStack0000000000000024 +
                  fStack0000000000000020 * fStack0000000000000020);
    if (fVar23 <= fVar24) {
      if (DAT_0738e669 == '\0') {
        FUN_02fe925c(PTR_DAT_06f6d5d8);
        DAT_0738e669 = '\x01';
      }
      pfVar17 = *(float **)(*(long *)puVar6 + 0xb8);
      fStack0000000000000024 = *pfVar17;
      fStack0000000000000020 = pfVar17[1];
      fVar32 = pfVar17[2];
    }
    else {
      fStack0000000000000024 = fStack0000000000000024 / fVar23;
      fStack0000000000000020 = fStack0000000000000020 / fVar23;
      fVar32 = fVar32 / fVar23;
    }
    if (DAT_0738eca3 == '\0') {
      FUN_02fe925c(PTR_DAT_06f6e7c0);
      DAT_0738eca3 = '\x01';
    }
    fVar23 = fVar38 * fVar38 + fVar41 * fVar41 + param_3 * param_3;
    if (**(float **)(*(long *)puVar7 + 0xb8) <= fVar23) {
      fVar42 = fVar38 * fVar43 + fVar41 * fVar26 + param_3 * fVar33;
      fVar26 = fVar26 - (fVar41 * fVar42) / fVar23;
      fVar33 = fVar33 - (param_3 * fVar42) / fVar23;
      fVar43 = fVar43 - (fVar38 * fVar42) / fVar23;
    }
    if (DAT_0738e668 == '\0') {
      FUN_02fe925c(PTR_DAT_06f6d508);
      DAT_0738e668 = '\x01';
    }
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    fVar23 = SQRT(fVar43 * fVar43 + fVar26 * fVar26 + fVar33 * fVar33);
    if (fVar23 <= fVar24) {
      if (DAT_0738e669 == '\0') {
        FUN_02fe925c(PTR_DAT_06f6d5d8);
        DAT_0738e669 = '\x01';
      }
      pfVar17 = *(float **)(*(long *)puVar6 + 0xb8);
      fVar26 = *pfVar17;
      fVar33 = pfVar17[1];
      fVar43 = pfVar17[2];
    }
    else {
      fVar26 = fVar26 / fVar23;
      fVar33 = fVar33 / fVar23;
      fVar43 = fVar43 / fVar23;
    }
    uVar37 = (ulong)(uint)fVar25;
    fVar23 = (float)FUN_031e4528(fVar26,fVar33,fVar43,uVar37,fVar40,fVar39,0);
    plVar20 = *(long **)(unaff_x19 + 0x28);
    if (plVar20 == (long *)0x0) goto LAB_05cfe9bc;
    lVar15 = *plVar20;
    uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *unaff_x21) {
          puVar13 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_05cfe63c;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar13 = (undefined8 *)FUN_02feb5b8(plVar20,*unaff_x21,0);
LAB_05cfe63c:
    iVar12 = (*(code *)*puVar13)(plVar20,puVar13[1]);
    fVar24 = -fVar23;
    if (iVar12 != 1) {
      fVar24 = fVar23;
    }
    uVar35 = 0xc28c0000;
    uVar18 = (ulong)(uint)(fVar24 + 360.0);
    fVar23 = fVar24 + 360.0;
    if (-70.0 <= fVar24) {
      fVar23 = fVar24;
    }
    *(float *)(unaff_x19 + 0x7c) = fVar23;
    if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_05cfe9bc;
    uVar29 = FUN_069042b4(*(long *)(unaff_x19 + 0x30),0);
    uVar36 = (ulong)(uint)fVar38;
    uVar30 = FUN_068ed124(fVar41,uVar14,uVar36,0);
    in_stack_00000040 = 0;
    uStack0000000000000048 = 0;
    uStack000000000000004c = 0;
    in_stack_00000058 = 0;
    uStack0000000000000050 = 0;
    uStack0000000000000054 = 0;
    FUN_06902890(uVar29,uVar18,uVar35,uVar30,uVar14,uVar36,uVar37,&stack0x00000040,0);
    plVar20 = *(long **)(unaff_x19 + 0x48);
    *(float *)(unaff_x19 + 0x80) = fVar26;
    *(float *)(unaff_x19 + 0x84) = fVar33;
    *(float *)(unaff_x19 + 0x88) = fVar43;
    *(ulong *)(unaff_x19 + 0xa0) = CONCAT44(in_stack_00000058,uStack0000000000000054);
    *(ulong *)(unaff_x19 + 0x98) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
    *(ulong *)(unaff_x19 + 0x94) = CONCAT44(uStack000000000000004c,uStack0000000000000048);
    *(undefined8 *)(unaff_x19 + 0x8c) = in_stack_00000040;
    puVar6 = PTR_DAT_06f9acf0;
    if (plVar20 == (long *)0x0) goto LAB_05cfe9bc;
    lVar15 = *plVar20;
    uVar14 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar14 != 0) {
      piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_06f9acf0) {
          puVar13 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_05cfe75c;
        }
        uVar14 = uVar14 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar14 != 0);
    }
    puVar13 = (undefined8 *)FUN_02feb5b8(plVar20,*(long *)PTR_DAT_06f9acf0,0);
LAB_05cfe75c:
    uVar14 = (*(code *)*puVar13)(plVar20,puVar13[1]);
    if ((uVar14 & 1) == 0) {
      uVar22 = 0;
    }
    else {
      uVar22 = *(byte *)(unaff_x19 + 0x71) ^ 1;
    }
    plVar20 = *(long **)(unaff_x19 + 0x48);
    if (plVar20 == (long *)0x0) goto LAB_05cfe9bc;
    lVar16 = *plVar20;
    lVar15 = *(long *)puVar6;
    uVar14 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar14 != 0) {
      piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == lVar15) {
          puVar13 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_05cfe808;
        }
        uVar14 = uVar14 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar14 != 0);
    }
    puVar13 = (undefined8 *)FUN_02feb5b8(plVar20,lVar15,0);
LAB_05cfe808:
    bVar11 = (*(code *)*puVar13)(plVar20,puVar13[1]);
    puVar21 = (uint *)(unaff_x19 + 0x74);
    *(byte *)(unaff_x19 + 0x71) = bVar11 & 1;
    if ((uVar22 & 0.5 < (fVar34 * fVar32 +
                        fVar27 * fStack0000000000000024 + fVar31 * fStack0000000000000020) * 0.5 +
                        0.5 & *puVar21 >> 0x1f) == 0) {
      if ((int)*puVar21 < 0) {
        return;
      }
      plVar20 = *(long **)(unaff_x19 + 0x58);
      if (plVar20 == (long *)0x0) goto LAB_05cfe9bc;
      lVar16 = *plVar20;
      lVar15 = *(long *)puVar6;
      uVar14 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar14 != 0) {
        piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar15) {
            puVar13 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_05cfe8cc;
          }
          uVar14 = uVar14 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar14 != 0);
      }
      puVar13 = (undefined8 *)FUN_02feb5b8(plVar20,lVar15,0);
LAB_05cfe8cc:
      uVar14 = (*(code *)*puVar13)(plVar20,puVar13[1]);
      if ((uVar14 & 1) != 0) goto LAB_05cfe8dc;
      uVar22 = *puVar21;
      if ((int)uVar22 < 0) {
        return;
      }
      if (*(char *)(unaff_x19 + 0xb0) != '\0') {
        return;
      }
      lVar15 = *(long *)(unaff_x19 + 0x38);
      if (lVar15 == 0) goto LAB_05cfe9bc;
      uVar3 = *(uint *)(lVar15 + 0x18);
      if (uVar3 <= uVar22) goto LAB_05cfe9c0;
      lVar16 = *(long *)(lVar15 + (ulong)uVar22 * 8 + 0x20);
      if (lVar16 == 0) goto LAB_05cfe9bc;
      if (*(float *)(lVar16 + 0x10) <= *(float *)(unaff_x19 + 0x7c)) {
        if (*(float *)(unaff_x19 + 0x7c) <= *(float *)(lVar16 + 0x14)) {
          return;
        }
        uVar4 = uVar3 - 1;
        if ((int)(uVar22 + 1) <= (int)uVar4) {
          uVar4 = uVar22 + 1;
        }
        *puVar21 = uVar4;
        if (uVar3 <= uVar4) goto LAB_05cfe9c0;
        uVar14 = (ulong)(int)uVar4;
      }
      else {
        if ((int)uVar22 < 2) {
          uVar22 = 1;
        }
        uVar22 = uVar22 - 1;
        *puVar21 = uVar22;
        if (uVar3 <= uVar22) {
LAB_05cfe9c0:
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        uVar14 = (ulong)uVar22;
      }
      if (*(long *)(lVar15 + uVar14 * 8 + 0x20) == 0) goto LAB_05cfe9bc;
    }
    else {
      lVar15 = FUN_05cfe9c4(*(undefined4 *)(unaff_x19 + 0x7c));
      if (lVar15 == 0) goto LAB_05cfe9bc;
      if (*(char *)(lVar15 + 0x18) == '\0') {
        *puVar21 = 0xffffffff;
        return;
      }
    }
    FUN_05cfd9c4();
  }
  return;
}


