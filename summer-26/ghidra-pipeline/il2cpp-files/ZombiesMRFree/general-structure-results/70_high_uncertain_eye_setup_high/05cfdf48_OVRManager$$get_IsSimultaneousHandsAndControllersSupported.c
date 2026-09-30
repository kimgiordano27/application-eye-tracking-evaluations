/*
FUNCTION_NAME: OVRManager$$get_IsSimultaneousHandsAndControllersSupported
ENTRY_POINT: 05cfdf48
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_IsSimultaneousHandsAndControllersSupported
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  bool bVar11;
  byte bVar12;
  int iVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  float *pfVar17;
  ulong uVar18;
  ulong uVar19;
  int *piVar20;
  long *plVar21;
  uint *puVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  float fVar32;
  ulong uVar33;
  float fVar34;
  undefined8 uVar35;
  ulong uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
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
  ulong in_stack_00000070;
  undefined4 in_stack_00000078;
  
  if ((DAT_07398779 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06fb4a78);
    FUN_02fe925c(PTR_DAT_06f9acf0);
    FUN_02fe925c(PTR_DAT_06fb4b60);
    DAT_07398779 = 1;
  }
  puVar9 = PTR_DAT_06fb4b60;
  _fStack0000000000000060 = 0;
  _fStack0000000000000068 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  plVar21 = *(long **)(param_4 + 0x28);
  if (plVar21 == (long *)0x0) goto LAB_05cfe9bc;
  lVar15 = *plVar21;
  uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar18 != 0) {
    piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_06fb4b60) {
        puVar14 = (undefined8 *)(lVar15 + (long)(*piVar20 + 9) * 0x10 + 0x138);
        goto LAB_05cfe000;
      }
      uVar18 = uVar18 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar18 != 0);
  }
  puVar14 = (undefined8 *)FUN_02feb5b8(plVar21,*(long *)PTR_DAT_06fb4b60,9);
LAB_05cfe000:
  uVar18 = (*(code *)*puVar14)(plVar21,1,&stack0x00000060,puVar14[1]);
  if ((uVar18 & 1) == 0) {
LAB_05cfe8dc:
    FUN_05cfd9c4(param_4,0);
    *(undefined4 *)(param_4 + 0x74) = 0xffffffff;
    *(undefined1 *)(param_4 + 0xb0) = 0;
  }
  else {
    plVar21 = *(long **)(param_4 + 0x28);
    if (plVar21 == (long *)0x0) {
LAB_05cfe9bc:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    lVar16 = *plVar21;
    lVar15 = *(long *)puVar9;
    uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar18 != 0) {
      piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == lVar15) {
          puVar14 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_05cfe06c;
        }
        uVar18 = uVar18 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar18 != 0);
    }
    puVar14 = (undefined8 *)FUN_02feb5b8(plVar21,lVar15,0);
LAB_05cfe06c:
    iVar13 = (*(code *)*puVar14)(plVar21,puVar14[1]);
    if (DAT_0738e662 == '\0') {
      FUN_02fe925c(PTR_DAT_06f6d5d8);
      DAT_0738e662 = '\x01';
    }
    puVar7 = PTR_DAT_06f6d5d8;
    if (*(long *)(param_4 + 0x30) == 0) goto LAB_05cfe9bc;
    fVar37 = fStack0000000000000064;
    fVar38 = fStack0000000000000068;
    fVar41 = fStack0000000000000060;
    lVar15 = *(long *)(*(long *)PTR_DAT_06f6d5d8 + 0xb8);
    fVar24 = *(float *)(lVar15 + 0x18);
    fVar45 = *(float *)(lVar15 + 0x1c);
    fVar43 = *(float *)(lVar15 + 0x20);
    fVar25 = (float)FUN_069042b4(*(long *)(param_4 + 0x30),0);
    if (DAT_0738e668 == '\0') {
      FUN_02fe925c(PTR_DAT_06f6d508);
      DAT_0738e668 = '\x01';
    }
    puVar6 = PTR_DAT_06f6d508;
    fVar41 = fVar41 - fVar25;
    fVar37 = fVar37 - param_2;
    fVar38 = fVar38 - param_3;
    if (*(int *)(*(long *)PTR_DAT_06f6d508 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    fVar25 = DAT_01369fe0;
    fVar26 = SQRT(fVar38 * fVar38 + fVar41 * fVar41 + fVar37 * fVar37);
    if (fVar26 <= DAT_01369fe0) {
      if (DAT_0738e669 == '\0') {
        FUN_02fe925c(PTR_DAT_06f6d5d8);
        DAT_0738e669 = '\x01';
      }
      pfVar17 = *(float **)(*(long *)puVar7 + 0xb8);
      fVar41 = *pfVar17;
      fVar37 = pfVar17[1];
      fVar38 = pfVar17[2];
    }
    else {
      fVar37 = fVar37 / fVar26;
      fVar41 = fVar41 / fVar26;
      fVar38 = fVar38 / fVar26;
    }
    if (DAT_0738e668 == '\0') {
      FUN_02fe925c(PTR_DAT_06f6d508);
      DAT_0738e668 = '\x01';
    }
    fVar26 = fVar45 * fVar38 - fVar43 * fVar37;
    fVar40 = fVar43 * fVar41 - fVar24 * fVar38;
    fVar39 = fVar24 * fVar37 - fVar45 * fVar41;
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    fVar34 = SQRT(fVar39 * fVar39 + fVar26 * fVar26 + fVar40 * fVar40);
    if (fVar34 <= fVar25) {
      if (DAT_0738e669 == '\0') {
        FUN_02fe925c(PTR_DAT_06f6d5d8);
        DAT_0738e669 = '\x01';
      }
      pfVar17 = *(float **)(*(long *)puVar7 + 0xb8);
      fVar26 = *pfVar17;
      fVar40 = pfVar17[1];
      fVar39 = pfVar17[2];
    }
    else {
      fVar26 = fVar26 / fVar34;
      fVar40 = fVar40 / fVar34;
      fVar39 = fVar39 / fVar34;
    }
    uVar10 = in_stack_00000078;
    puVar8 = PTR_DAT_06fb4a78;
    uVar33 = (ulong)(uint)fVar37;
    uVar3 = uStack000000000000006c;
    uVar19 = in_stack_00000070 & 0xffffffff;
    fVar34 = (float)in_stack_00000070;
    uVar18 = in_stack_00000070 >> 0x20;
    fVar44 = (float)(in_stack_00000070 >> 0x20);
    lVar15 = *(long *)PTR_DAT_06fb4a78;
    if (iVar13 != 1) {
      fVar26 = -fVar26;
      fVar40 = -fVar40;
      fVar39 = -fVar39;
    }
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar15 = *(long *)puVar8;
    }
    lVar16 = *(long *)(lVar15 + 0xb8);
    bVar11 = iVar13 != 1;
    lVar15 = 0x2c;
    if (bVar11) {
      lVar15 = 0x74;
    }
    lVar1 = 0x28;
    if (bVar11) {
      lVar1 = 0x70;
    }
    lVar2 = 0x24;
    if (bVar11) {
      lVar2 = 0x6c;
    }
    fVar27 = (float)FUN_068ed2ec(uVar3,uVar19,uVar18,uVar10,*(undefined4 *)(lVar16 + lVar2),
                                 *(undefined4 *)(lVar16 + lVar1),*(undefined4 *)(lVar16 + lVar15),0)
    ;
    uVar10 = in_stack_00000078;
    lVar15 = *(long *)puVar8;
    uVar3 = uStack000000000000006c;
    uVar19 = in_stack_00000070 & 0xffffffff;
    fVar46 = (float)in_stack_00000070;
    uVar18 = in_stack_00000070 >> 0x20;
    fVar42 = (float)(in_stack_00000070 >> 0x20);
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar15 = *(long *)puVar8;
    }
    lVar16 = *(long *)(lVar15 + 0xb8);
    bVar11 = iVar13 != 1;
    lVar15 = 0x14;
    if (bVar11) {
      lVar15 = 0x5c;
    }
    lVar1 = 0x10;
    if (bVar11) {
      lVar1 = 0x58;
    }
    lVar2 = 0xc;
    if (bVar11) {
      lVar2 = 0x54;
    }
    fVar28 = (float)FUN_068ed2ec(uVar3,uVar19,uVar18,uVar10,*(undefined4 *)(lVar16 + lVar2),
                                 *(undefined4 *)(lVar16 + lVar1),*(undefined4 *)(lVar16 + lVar15),0)
    ;
    if (DAT_0738eca3 == '\0') {
      FUN_02fe925c(PTR_DAT_06f6e7c0);
      DAT_0738eca3 = '\x01';
    }
    puVar8 = PTR_DAT_06f6e7c0;
    fVar29 = fVar43 * fVar43 + fVar24 * fVar24 + fVar45 * fVar45;
    fVar32 = fVar38;
    fStack0000000000000024 = fVar41;
    fStack0000000000000020 = fVar37;
    if (**(float **)(*(long *)PTR_DAT_06f6e7c0 + 0xb8) <= fVar29) {
      fVar32 = fVar43 * fVar38 + fVar24 * fVar41 + fVar45 * fVar37;
      fStack0000000000000024 = fVar41 - (fVar24 * fVar32) / fVar29;
      fStack0000000000000020 = fVar37 - (fVar45 * fVar32) / fVar29;
      fVar32 = fVar38 - (fVar43 * fVar32) / fVar29;
    }
    if (DAT_0738e668 == '\0') {
      FUN_02fe925c(PTR_DAT_06f6d508);
      DAT_0738e668 = '\x01';
    }
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    fVar24 = SQRT(fVar32 * fVar32 +
                  fStack0000000000000024 * fStack0000000000000024 +
                  fStack0000000000000020 * fStack0000000000000020);
    if (fVar24 <= fVar25) {
      if (DAT_0738e669 == '\0') {
        FUN_02fe925c(PTR_DAT_06f6d5d8);
        DAT_0738e669 = '\x01';
      }
      pfVar17 = *(float **)(*(long *)puVar7 + 0xb8);
      fStack0000000000000024 = *pfVar17;
      fStack0000000000000020 = pfVar17[1];
      fVar32 = pfVar17[2];
    }
    else {
      fStack0000000000000024 = fStack0000000000000024 / fVar24;
      fStack0000000000000020 = fStack0000000000000020 / fVar24;
      fVar32 = fVar32 / fVar24;
    }
    if (DAT_0738eca3 == '\0') {
      FUN_02fe925c(PTR_DAT_06f6e7c0);
      DAT_0738eca3 = '\x01';
    }
    fVar24 = fVar38 * fVar38 + fVar41 * fVar41 + fVar37 * fVar37;
    if (**(float **)(*(long *)puVar8 + 0xb8) <= fVar24) {
      fVar43 = fVar38 * fVar44 + fVar41 * fVar27 + fVar37 * fVar34;
      fVar27 = fVar27 - (fVar41 * fVar43) / fVar24;
      fVar34 = fVar34 - (fVar37 * fVar43) / fVar24;
      fVar44 = fVar44 - (fVar38 * fVar43) / fVar24;
    }
    if (DAT_0738e668 == '\0') {
      FUN_02fe925c(PTR_DAT_06f6d508);
      DAT_0738e668 = '\x01';
    }
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    fVar37 = SQRT(fVar44 * fVar44 + fVar27 * fVar27 + fVar34 * fVar34);
    if (fVar37 <= fVar25) {
      if (DAT_0738e669 == '\0') {
        FUN_02fe925c(PTR_DAT_06f6d5d8);
        DAT_0738e669 = '\x01';
      }
      pfVar17 = *(float **)(*(long *)puVar7 + 0xb8);
      fVar27 = *pfVar17;
      fVar34 = pfVar17[1];
      fVar44 = pfVar17[2];
    }
    else {
      fVar27 = fVar27 / fVar37;
      fVar34 = fVar34 / fVar37;
      fVar44 = fVar44 / fVar37;
    }
    uVar18 = (ulong)(uint)fVar26;
    fVar37 = (float)FUN_031e4528(fVar27,fVar34,fVar44,uVar18,fVar40,fVar39,0);
    plVar21 = *(long **)(param_4 + 0x28);
    if (plVar21 == (long *)0x0) goto LAB_05cfe9bc;
    lVar16 = *plVar21;
    lVar15 = *(long *)puVar9;
    uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == lVar15) {
          puVar14 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_05cfe63c;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar14 = (undefined8 *)FUN_02feb5b8(plVar21,lVar15,0);
LAB_05cfe63c:
    iVar13 = (*(code *)*puVar14)(plVar21,puVar14[1]);
    fVar24 = -fVar37;
    if (iVar13 != 1) {
      fVar24 = fVar37;
    }
    uVar35 = 0xc28c0000;
    uVar19 = (ulong)(uint)(fVar24 + 360.0);
    fVar37 = fVar24 + 360.0;
    if (-70.0 <= fVar24) {
      fVar37 = fVar24;
    }
    *(float *)(param_4 + 0x7c) = fVar37;
    if (*(long *)(param_4 + 0x30) == 0) goto LAB_05cfe9bc;
    uVar30 = FUN_069042b4(*(long *)(param_4 + 0x30),0);
    uVar36 = (ulong)(uint)fVar38;
    uVar31 = FUN_068ed124(fVar41,uVar33,uVar36,0);
    in_stack_00000040 = 0;
    uStack0000000000000048 = 0;
    uStack000000000000004c = 0;
    in_stack_00000058 = 0;
    uStack0000000000000050 = 0;
    uStack0000000000000054 = 0;
    FUN_06902890(uVar30,uVar19,uVar35,uVar31,uVar33,uVar36,uVar18,&stack0x00000040,0);
    plVar21 = *(long **)(param_4 + 0x48);
    *(float *)(param_4 + 0x80) = fVar27;
    *(float *)(param_4 + 0x84) = fVar34;
    *(float *)(param_4 + 0x88) = fVar44;
    *(ulong *)(param_4 + 0xa0) = CONCAT44(in_stack_00000058,uStack0000000000000054);
    *(ulong *)(param_4 + 0x98) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
    *(ulong *)(param_4 + 0x94) = CONCAT44(uStack000000000000004c,uStack0000000000000048);
    *(undefined8 *)(param_4 + 0x8c) = in_stack_00000040;
    puVar9 = PTR_DAT_06f9acf0;
    if (plVar21 == (long *)0x0) goto LAB_05cfe9bc;
    lVar15 = *plVar21;
    uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar18 != 0) {
      piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_06f9acf0) {
          puVar14 = (undefined8 *)(lVar15 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_05cfe75c;
        }
        uVar18 = uVar18 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar18 != 0);
    }
    puVar14 = (undefined8 *)FUN_02feb5b8(plVar21,*(long *)PTR_DAT_06f9acf0,0);
LAB_05cfe75c:
    uVar18 = (*(code *)*puVar14)(plVar21,puVar14[1]);
    if ((uVar18 & 1) == 0) {
      uVar23 = 0;
    }
    else {
      uVar23 = *(byte *)(param_4 + 0x71) ^ 1;
    }
    plVar21 = *(long **)(param_4 + 0x48);
    if (plVar21 == (long *)0x0) goto LAB_05cfe9bc;
    lVar16 = *plVar21;
    lVar15 = *(long *)puVar9;
    uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar18 != 0) {
      piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == lVar15) {
          puVar14 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_05cfe808;
        }
        uVar18 = uVar18 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar18 != 0);
    }
    puVar14 = (undefined8 *)FUN_02feb5b8(plVar21,lVar15,0);
LAB_05cfe808:
    bVar12 = (*(code *)*puVar14)(plVar21,puVar14[1]);
    puVar22 = (uint *)(param_4 + 0x74);
    *(byte *)(param_4 + 0x71) = bVar12 & 1;
    if ((uVar23 & 0.5 < (fVar42 * fVar32 +
                        fVar28 * fStack0000000000000024 + fVar46 * fStack0000000000000020) * 0.5 +
                        0.5 & *puVar22 >> 0x1f) == 0) {
      if ((int)*puVar22 < 0) {
        return;
      }
      plVar21 = *(long **)(param_4 + 0x58);
      if (plVar21 == (long *)0x0) goto LAB_05cfe9bc;
      lVar16 = *plVar21;
      lVar15 = *(long *)puVar9;
      uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar18 != 0) {
        piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == lVar15) {
            puVar14 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_05cfe8cc;
          }
          uVar18 = uVar18 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar18 != 0);
      }
      puVar14 = (undefined8 *)FUN_02feb5b8(plVar21,lVar15,0);
LAB_05cfe8cc:
      uVar18 = (*(code *)*puVar14)(plVar21,puVar14[1]);
      if ((uVar18 & 1) != 0) goto LAB_05cfe8dc;
      uVar23 = *puVar22;
      if ((int)uVar23 < 0) {
        return;
      }
      if (*(char *)(param_4 + 0xb0) != '\0') {
        return;
      }
      lVar15 = *(long *)(param_4 + 0x38);
      if (lVar15 == 0) goto LAB_05cfe9bc;
      uVar4 = *(uint *)(lVar15 + 0x18);
      if (uVar4 <= uVar23) goto LAB_05cfe9c0;
      lVar16 = *(long *)(lVar15 + (ulong)uVar23 * 8 + 0x20);
      if (lVar16 == 0) goto LAB_05cfe9bc;
      if (*(float *)(lVar16 + 0x10) <= *(float *)(param_4 + 0x7c)) {
        if (*(float *)(param_4 + 0x7c) <= *(float *)(lVar16 + 0x14)) {
          return;
        }
        uVar5 = uVar4 - 1;
        if ((int)(uVar23 + 1) <= (int)uVar5) {
          uVar5 = uVar23 + 1;
        }
        *puVar22 = uVar5;
        if (uVar4 <= uVar5) goto LAB_05cfe9c0;
        uVar18 = (ulong)(int)uVar5;
      }
      else {
        if ((int)uVar23 < 2) {
          uVar23 = 1;
        }
        uVar23 = uVar23 - 1;
        *puVar22 = uVar23;
        if (uVar4 <= uVar23) {
LAB_05cfe9c0:
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        uVar18 = (ulong)uVar23;
      }
      lVar15 = *(long *)(lVar15 + uVar18 * 8 + 0x20);
      if (lVar15 == 0) goto LAB_05cfe9bc;
      uVar3 = *(undefined4 *)(lVar15 + 0x1c);
    }
    else {
      lVar15 = FUN_05cfe9c4(*(undefined4 *)(param_4 + 0x7c),param_4,puVar22);
      if (lVar15 == 0) goto LAB_05cfe9bc;
      if (*(char *)(lVar15 + 0x18) == '\0') {
        *puVar22 = 0xffffffff;
        return;
      }
      uVar3 = *(undefined4 *)(lVar15 + 0x1c);
    }
    FUN_05cfd9c4(param_4,uVar3);
  }
  return;
}


