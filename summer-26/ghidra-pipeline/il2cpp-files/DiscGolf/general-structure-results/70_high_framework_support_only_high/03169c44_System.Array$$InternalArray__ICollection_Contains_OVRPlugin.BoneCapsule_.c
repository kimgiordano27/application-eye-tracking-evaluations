/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.BoneCapsule>
ENTRY_POINT: 03169c44
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array__InternalArray__ICollection_Contains<OVRPlugin_BoneCapsule>(undefined8 param_1)

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 extraout_x1;
  ulong extraout_x1_00;
  undefined8 uVar16;
  char cVar17;
  float *pfVar18;
  undefined8 *puVar19;
  long lVar20;
  ulong uVar21;
  float *pfVar22;
  long lVar23;
  float *pfVar24;
  ulong uVar25;
  undefined8 *unaff_x21;
  long *plVar26;
  int iVar27;
  byte bVar28;
  int iVar29;
  long unaff_x23;
  int iVar30;
  ulong uVar31;
  long unaff_x25;
  undefined4 *puVar32;
  undefined1 *unaff_x26;
  float *pfVar33;
  undefined **unaff_x29;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  double dVar42;
  float fVar43;
  ulong uVar44;
  float fVar45;
  float fVar46;
  undefined4 uVar47;
  float fVar48;
  uint uVar49;
  undefined8 uVar50;
  float fVar51;
  undefined8 uVar52;
  float fVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  float fVar56;
  float fVar57;
  undefined4 uVar58;
  float fVar59;
  float fVar60;
  int iVar61;
  undefined8 in_stack_00000048;
  float fStack0000000000000050;
  float fStack0000000000000054;
  int iStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  float fStack000000000000006c;
  undefined8 in_stack_00000070;
  long *in_stack_00000078;
  undefined8 in_stack_00000080;
  float fStack0000000000000088;
  float fStack000000000000008c;
  long *in_stack_00000090;
  long in_stack_00000098;
  undefined8 in_stack_000000a0;
  long *in_stack_000000b8;
  undefined8 in_stack_000000c8;
  int iStack00000000000000d4;
  long *in_stack_000000e0;
  float fStack00000000000000f0;
  float fStack00000000000000f4;
  float fStack00000000000000f8;
  float fStack00000000000000fc;
  float fStack0000000000000100;
  float fStack0000000000000104;
  int iStack0000000000000108;
  float fStack000000000000010c;
  ulong uStack0000000000000110;
  float fStack0000000000000128;
  float fStack000000000000012c;
  float fStack0000000000000130;
  long in_stack_00000148;
  float fStack0000000000000164;
  long in_stack_00000170;
  undefined4 uStack00000000000001a0;
  float fStack00000000000001a4;
  float fStack00000000000001a8;
  undefined4 uStack00000000000001ac;
  undefined4 uStack00000000000001b0;
  undefined4 uStack00000000000001b4;
  float in_stack_000001b8;
  float fStack00000000000001c0;
  float fStack00000000000001c4;
  float in_stack_000001c8;
  float fStack00000000000001d0;
  float fStack00000000000001d4;
  float fVar62;
  long in_stack_00000238;
  long in_stack_00000240;
  undefined4 in_stack_00000268;
  float in_stack_0000026c;
  float in_stack_00000270;
  float in_stack_00000278;
  float in_stack_0000027c;
  float in_stack_00000280;
  
  FUN_0409ed5c(param_1,*(undefined8 *)PTR_DAT_069fbef0);
  cVar17 = *(char *)((long)unaff_x29 + 0xc71);
  *(undefined8 *)(unaff_x26 + 0x20) = param_1;
  fVar62 = 0.0;
  if (cVar17 == '\0') {
    FUN_02d965b8(PTR_DAT_069fb978);
    *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
  }
  pfVar18 = *(float **)(*(long *)PTR_DAT_069fb978 + 0xb8);
  fStack00000000000000f8 = *pfVar18;
  fStack00000000000000f4 = pfVar18[1];
  fVar45 = pfVar18[2];
  fStack000000000000006c = *(float *)(unaff_x23 + 0x7c);
  pfVar18 = (float *)(unaff_x23 + 0x2c0);
  plVar26 = (long *)PTR_DAT_069fb978;
  fStack00000000000000fc = fVar45;
  fStack0000000000000104 = fStack00000000000000f8;
  if (1 < *(int *)(in_stack_00000170 + 0x18) + -2) {
    fVar40 = 0.0;
    iStack00000000000000d4 = 0;
    iStack0000000000000108 = 0;
    bVar2 = false;
    fVar34 = fStack000000000000010c * 0.5;
    fVar35 = fStack000000000000006c * 0.5;
    uStack0000000000000110 = _fStack0000000000000130 & 0xffffffff;
    fStack0000000000000164 = fStack000000000000012c;
    uVar31 = 1;
    fStack00000000000000f0 = fVar45;
    fStack0000000000000100 = fStack00000000000000f4;
LAB_03169d3c:
    uVar25 = uVar31 - 1;
    fStack00000000000001d4 = 0.0;
    lVar11 = FUN_0400ff1c(unaff_x25,uVar25 & 0xffffffff,*unaff_x21);
    if ((*(long *)(unaff_x26 + 0x78) == 0) || (lVar11 == 0)) goto LAB_03168190;
    uVar16 = *unaff_x21;
    *(undefined4 *)(lVar11 + 0xbc) = *(undefined4 *)(*(long *)(unaff_x26 + 0x78) + 0x18);
    lVar11 = FUN_0400ff1c(unaff_x25,uVar25 & 0xffffffff,uVar16);
    if (lVar11 == 0) goto LAB_03168190;
    *(float *)(lVar11 + 0xc0) = *pfVar18;
    iVar30 = (int)uVar31;
    if (1 < uVar31) {
      if (uVar31 == 2) {
        lVar11 = FUN_0400ff1c(unaff_x25,0,*unaff_x21);
        if (lVar11 == 0) goto LAB_03168190;
        iVar27 = 0;
        fVar45 = *pfVar18;
      }
      else {
        iVar27 = iVar30 + -2;
        lVar11 = FUN_0400ff1c(unaff_x25,iVar27,*unaff_x21);
        fVar45 = *pfVar18;
        lVar12 = FUN_0400ff1c(unaff_x25,iVar27,*unaff_x21);
        if ((lVar12 == 0) || (lVar11 == 0)) goto LAB_03168190;
        fVar45 = fVar45 - *(float *)(lVar12 + 0xc0);
      }
      puVar4 = PTR_DAT_06a0b440;
      *(float *)(lVar11 + 200) = fVar45;
      lVar11 = FUN_0400ff1c(unaff_x25,iVar27,*(undefined8 *)puVar4);
      if (lVar11 == 0) goto LAB_03168190;
      fVar45 = *(float *)(lVar11 + 200);
      lVar11 = FUN_0400ff1c(unaff_x25,iVar27,*(undefined8 *)puVar4);
      lVar12 = FUN_0400ff1c(unaff_x25,iVar27,*(undefined8 *)puVar4);
      if (1000.0 <= fVar45) {
        if (lVar12 == 0) goto LAB_03168190;
        fStack00000000000001d0 = *(float *)(lVar12 + 200) / 1000.0;
        uVar16 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
        puVar19 = (undefined8 *)PTR_DAT_06a0c488;
      }
      else {
        if (lVar12 == 0) goto LAB_03168190;
        uVar16 = FUN_054fad00(lVar12 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
        puVar19 = (undefined8 *)PTR_DAT_06a0c4f0;
      }
      uVar16 = FUN_05362cb4(uVar16,*puVar19,0);
      if (lVar11 == 0) goto LAB_03168190;
      *(undefined8 *)(lVar11 + 0xd0) = uVar16;
      LeanTween__value((undefined8 *)(lVar11 + 0xd0),uVar16);
      puVar4 = PTR_DAT_06a0b440;
      lVar11 = FUN_0400ff1c(unaff_x25,iVar27,*(undefined8 *)PTR_DAT_06a0b440);
      if (lVar11 == 0) goto LAB_03168190;
      fVar45 = *(float *)(lVar11 + 0x4c);
      lVar11 = FUN_0400ff1c(unaff_x25,uVar25 & 0xffffffff,*(undefined8 *)puVar4);
      if (lVar11 == 0) goto LAB_03168190;
      fVar48 = *(float *)(lVar11 + 0x4c);
      if (DAT_06db4ece == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4ece = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar36 = fVar45 - fVar48;
      fVar43 = 0.0;
      fVar37 = SQRT((fVar62 * fVar62 + fVar36 * fVar36) * DAT_010fd194);
      fVar36 = DAT_010fcd14;
      if (DAT_010fcd14 <= fVar37) {
        fVar36 = -1.0;
        fVar37 = (fVar62 * 0.0 + ABS(fVar45 - fVar48) * 50.0 + 0.0) / fVar37;
        fVar62 = 1.0;
        if (fVar37 <= 1.0) {
          fVar62 = fVar37;
        }
        fVar45 = -1.0;
        if (-1.0 <= fVar37) {
          fVar45 = fVar62;
        }
        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
          fVar36 = -1.0;
          thunk_FUN_02df485c();
        }
        dVar42 = acos((double)fVar45);
        fVar43 = (float)dVar42 * DAT_010fcf40;
      }
      fVar43 = 90.0 - fVar43;
      lVar11 = FUN_0400ff1c(unaff_x25,iVar27,*(undefined8 *)puVar4);
      if (fVar43 <= 10.0) {
        uVar16 = FUN_054fad00(&stack0x00000234,*(undefined8 *)PTR_DAT_06a0c498,0);
        puVar19 = (undefined8 *)PTR_DAT_069fd088;
      }
      else {
        dVar42 = modf((double)fVar43,(double *)&stack0x00000298);
        puVar19 = (undefined8 *)PTR_DAT_069fd088;
        if (0.0 <= fVar43) {
          if (dVar42 == 0.5) {
            dVar42 = *(double *)(unaff_x26 + 0x80);
            fVar62 = 1.0;
            goto LAB_0316a098;
          }
          fStack00000000000001d0 = (float)(int)(fVar43 + 0.5);
        }
        else if (dVar42 == -0.5) {
          dVar42 = *(double *)(unaff_x26 + 0x80);
          fVar62 = -1.0;
LAB_0316a098:
          fStack00000000000001d0 = (float)dVar42;
          if (((long)dVar42 & 1U) != 0) {
            fStack00000000000001d0 = (float)dVar42 + fVar62;
          }
        }
        else {
          fStack00000000000001d0 = (float)(int)(fVar43 + -0.5);
        }
        uVar16 = FUN_054fabf8(&stack0x000001d0,0);
      }
      if (lVar11 == 0) goto LAB_03168190;
      *(undefined8 *)(lVar11 + 0xd8) = uVar16;
      LeanTween__value((undefined8 *)(lVar11 + 0xd8),uVar16);
      unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
      lVar11 = FUN_0400ff1c(unaff_x25,iVar27,*(undefined8 *)PTR_DAT_06a0b440);
      if (lVar11 == 0) goto LAB_03168190;
      fVar62 = *(float *)(lVar11 + 0x4c);
      lVar11 = FUN_0400ff1c(unaff_x25,uVar25 & 0xffffffff,*unaff_x21);
      if (lVar11 == 0) goto LAB_03168190;
      fVar45 = *(float *)(lVar11 + 0x4c);
      lVar11 = FUN_0400ff1c(unaff_x25,iVar27,*unaff_x21);
      if (lVar11 == 0) goto LAB_03168190;
      fVar48 = *(float *)(lVar11 + 0x48);
      lVar11 = FUN_0400ff1c(unaff_x25,iVar27,*unaff_x21);
      if (lVar11 == 0) goto LAB_03168190;
      fVar37 = *(float *)(lVar11 + 0x50);
      lVar11 = FUN_0400ff1c(unaff_x25,uVar25 & 0xffffffff,*unaff_x21);
      if (lVar11 == 0) goto LAB_03168190;
      fVar43 = *(float *)(lVar11 + 0x48);
      lVar11 = FUN_0400ff1c(unaff_x25,uVar25 & 0xffffffff,*unaff_x21);
      if (lVar11 == 0) goto LAB_03168190;
      fVar53 = *(float *)(lVar11 + 0x50);
      if (DAT_06db4c77 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c77 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar37 = fVar37 - fVar53;
      fVar48 = fVar48 - fVar43;
      lVar11 = FUN_0400ff1c(unaff_x25,iVar27,*unaff_x21);
      fVar43 = 100.0;
      fStack00000000000001d0 =
           (ABS(fVar62 - fVar45) / SQRT(fVar48 * fVar48 + fVar37 * fVar37)) * 100.0;
      uVar16 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c498,0);
      if (lVar11 == 0) goto LAB_03168190;
      *(undefined8 *)(lVar11 + 0xe0) = uVar16;
      LeanTween__value((undefined8 *)(lVar11 + 0xe0),uVar16);
      lVar11 = *(long *)(unaff_x26 + 0x78);
      if (lVar11 == 0) goto LAB_03168190;
      unaff_x23 = in_stack_00000148;
      if (2 < *(int *)(lVar11 + 0x18)) {
        fVar62 = (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -1,*puVar19);
        lVar11 = *(long *)(unaff_x26 + 0x78);
        if (lVar11 == 0) goto LAB_03168190;
        fVar45 = fVar43;
        fVar48 = fVar36;
        fVar37 = (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -2,*puVar19);
        if (DAT_06db4c75 == '\0') {
          FUN_02d965b8(PTR_DAT_069fbb48);
          DAT_06db4c75 = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        fVar62 = fVar62 - fVar37;
        fVar43 = fVar43 - fVar45;
        fVar36 = fVar36 - fVar48;
        fVar45 = SQRT(fVar36 * fVar36 + fVar62 * fVar62 + fVar43 * fVar43);
        if (fVar45 <= DAT_010fd13c) {
          if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
            FUN_02d965b8(plVar26);
            *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
          }
          pfVar24 = *(float **)(*plVar26 + 0xb8);
          fStack0000000000000104 = *pfVar24;
          fStack0000000000000100 = pfVar24[1];
          fStack00000000000000fc = pfVar24[2];
        }
        else {
          fStack0000000000000104 = fVar62 / fVar45;
          fStack0000000000000100 = fVar43 / fVar45;
          fStack00000000000000fc = fVar36 / fVar45;
        }
      }
    }
    lVar11 = *(long *)(unaff_x26 + 0x28);
    if (lVar11 == 0) goto LAB_03168190;
    lVar12 = *(long *)(unaff_x26 + 0x20);
    *(undefined4 *)(lVar11 + 0x18) = 0;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (lVar12 == 0) goto LAB_03168190;
    fVar62 = 0.0;
    *(undefined4 *)(lVar12 + 0x18) = 0;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    if ((*(uint *)(in_stack_00000170 + 0x18) <= uVar31) ||
       (uVar1 = uVar31 + 1, *(uint *)(in_stack_00000170 + 0x18) <= uVar1)) goto LAB_0316f2c4;
    lVar11 = in_stack_00000170 + uVar31 * 0xc;
    lVar12 = in_stack_00000170 + uVar1 * 0xc;
    fVar48 = *pfVar18;
    pfVar24 = (float *)(lVar11 + 0x20);
    fVar37 = *pfVar24;
    fVar45 = *(float *)(lVar11 + 0x24);
    fVar36 = *(float *)(lVar11 + 0x28);
    pfVar33 = (float *)(lVar12 + 0x20);
    fVar43 = *pfVar33;
    fVar57 = *(float *)(lVar12 + 0x24);
    fVar53 = *(float *)(lVar12 + 0x28);
    if (DAT_06db4c77 == '\0') {
      FUN_02d965b8(PTR_DAT_069fbb48);
      DAT_06db4c77 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if ((*(long *)(unaff_x23 + 0x68) == 0) ||
       (lVar13 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar25 & 0xffffffff,*unaff_x21),
       lVar13 == 0)) goto LAB_03168190;
    fVar45 = fVar45 - fVar57;
    fVar36 = fVar36 - fVar53;
    uVar44 = (ulong)(uint)fVar36;
    uVar21 = (ulong)(uint)(fVar36 * fVar36);
    fVar48 = fVar48 + SQRT(fVar36 * fVar36 + (fVar37 - fVar43) * (fVar37 - fVar43) + fVar45 * fVar45
                          );
    if (*(int *)(lVar13 + 0x6c) == 0) {
      if ((*(uint *)(in_stack_00000170 + 0x18) <= uVar31) ||
         (*(uint *)(in_stack_00000170 + 0x18) <= uVar1)) goto LAB_0316f2c4;
      fVar37 = *pfVar24;
      fVar45 = *(float *)(lVar11 + 0x24);
      fVar43 = *pfVar33;
      fVar57 = *(float *)(lVar12 + 0x24);
      fVar36 = *(float *)(lVar11 + 0x28);
      fVar53 = *(float *)(lVar12 + 0x28);
      if (DAT_06db4c77 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c77 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (uVar31 < 2) {
        bVar9 = false;
      }
      else {
        if (*(long *)(unaff_x23 + 0x68) == 0) goto LAB_03168190;
        lVar13 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),iVar30 + -2,*unaff_x21);
        if (lVar13 == 0) goto LAB_03168190;
        if (*(int *)(lVar13 + 0x6c) == 1) {
          bVar9 = true;
        }
        else {
          if ((*(long *)(unaff_x23 + 0x68) == 0) ||
             (lVar13 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),iVar30 + -2,*unaff_x21), lVar13 == 0
             )) goto LAB_03168190;
          bVar9 = *(int *)(lVar13 + 0x6c) == 2;
        }
      }
      fVar41 = 0.0;
      if (uVar31 == 1) {
        fVar41 = fStack0000000000000064;
      }
      fVar59 = in_stack_00000068;
      if (uVar31 != *(int *)(in_stack_00000170 + 0x18) - 3) {
        fVar59 = 1.0;
      }
      if (fVar59 <= fVar41) {
        iStack0000000000000108 = 0;
      }
      else {
        fVar45 = fVar45 - fVar57;
        fVar36 = fVar36 - fVar53;
        fVar45 = DAT_010fcf10 /
                 SQRT(fVar36 * fVar36 + (fVar37 - fVar43) * (fVar37 - fVar43) + fVar45 * fVar45);
        do {
          uVar21 = *(ulong *)(in_stack_00000170 + 0x18);
          if (fVar45 + fVar41 <= 1.0) {
            bVar28 = 0;
          }
          else if (uVar31 == (int)uVar21 - 3) {
            bVar28 = *(byte *)(unaff_x23 + 0x84) ^ 1;
          }
          else {
            bVar28 = 0;
          }
          bVar10 = bVar28 != 0;
          fVar36 = 1.0;
          if (!bVar10) {
            fVar36 = fVar41;
          }
          if (((uVar21 & 0xffffffff) <= uVar31) || ((uVar21 & 0xffffffff) <= uVar1))
          goto LAB_0316f2c4;
          uVar54 = *(undefined4 *)(lVar11 + 0x24);
          uVar47 = *(undefined4 *)(lVar11 + 0x28);
          fVar37 = *pfVar24;
          FUN_04059a68(in_stack_000000c8,uVar31 & 0xffffffff,*(undefined8 *)PTR_DAT_06a0a108);
          fVar53 = in_stack_0000026c;
          fVar57 = in_stack_00000270;
          fVar41 = (float)FUN_0316f340(in_stack_00000268,in_stack_0000026c,in_stack_00000270,fVar37,
                                       uVar54,uVar47);
          _fStack00000000000001c0 = CONCAT44(fVar53,fVar41);
          fVar37 = fStack0000000000000164;
          fVar43 = (float)uStack0000000000000110;
          if (iStack0000000000000108 == 3) {
            iStack0000000000000108 = 0;
            _fStack0000000000000130 = (ulong)(uint)fVar41;
            fVar37 = fVar57;
            fVar43 = fVar41;
            fStack0000000000000128 = fVar53;
            fStack000000000000012c = fVar57;
          }
          unaff_x29 = &PTR_FUN_06db4000;
          in_stack_000001c8 = fVar57;
          if (DAT_06db4c77 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c77 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fVar39 = in_stack_000001c8;
          if (*(uint *)(in_stack_00000170 + 0x18) <= uVar1) goto LAB_0316f2c4;
          fVar56 = *pfVar33;
          fVar51 = *(float *)(lVar12 + 0x24);
          fVar46 = fStack00000000000001c0;
          fVar38 = fStack00000000000001c4;
          fVar60 = *(float *)(lVar12 + 0x28);
          if (DAT_06db4c77 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c77 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          lVar13 = *(long *)(unaff_x26 + 0x20);
          if (lVar13 == 0) goto LAB_03168190;
          fVar38 = fVar38 - fVar51;
          iVar27 = *(int *)(lVar13 + 0x18);
          fVar39 = fVar39 - fVar60;
          fVar51 = fVar39 * fVar39;
          fVar46 = SQRT(fVar51 + (fVar46 - fVar56) * (fVar46 - fVar56) + fVar38 * fVar38);
          if (iVar27 < 1) {
            lVar13 = *(long *)(unaff_x26 + 0x78);
            if (lVar13 == 0) goto LAB_03168190;
            iVar27 = *(int *)(lVar13 + 0x18);
            if (0 < iVar27) goto LAB_0316b4d8;
          }
          else {
LAB_0316b4d8:
            fVar38 = (float)FUN_0409f2f4(lVar13,iVar27 + -1,*(undefined8 *)PTR_DAT_069fd088);
            fStack00000000000000f0 = in_stack_000001c8;
            fStack00000000000000f8 = fStack00000000000001c0;
            fStack00000000000000f4 = fStack00000000000001c4;
            if (DAT_06db4c75 == '\0') {
              FUN_02d965b8(PTR_DAT_069fbb48);
              DAT_06db4c75 = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            plVar26 = (long *)PTR_DAT_069fb978;
            fStack00000000000000f8 = fStack00000000000000f8 - fVar38;
            fStack00000000000000f4 = fStack00000000000000f4 - fVar51;
            fStack00000000000000f0 = fStack00000000000000f0 - fVar39;
            fVar39 = SQRT(fStack00000000000000f0 * fStack00000000000000f0 +
                          fStack00000000000000f8 * fStack00000000000000f8 +
                          fStack00000000000000f4 * fStack00000000000000f4);
            if (fVar39 <= DAT_010fd13c) {
              if (DAT_06db4c71 == '\0') {
                FUN_02d965b8(PTR_DAT_069fb978);
                DAT_06db4c71 = '\x01';
              }
              pfVar22 = *(float **)(*(long *)PTR_DAT_069fb978 + 0xb8);
              fStack00000000000000f8 = *pfVar22;
              fStack00000000000000f4 = pfVar22[1];
              fStack00000000000000f0 = pfVar22[2];
              plVar26 = (long *)PTR_DAT_069fb978;
            }
            else {
              fStack00000000000000f8 = fStack00000000000000f8 / fVar39;
              fStack00000000000000f4 = fStack00000000000000f4 / fVar39;
              fStack00000000000000f0 = fStack00000000000000f0 / fVar39;
              if (DAT_06db4c71 == '\0') {
                FUN_02d965b8(PTR_DAT_069fb978);
                DAT_06db4c71 = '\x01';
              }
            }
            pfVar22 = *(float **)(*plVar26 + 0xb8);
            if (in_stack_000000a0._4_4_ <=
                (fStack00000000000000fc - pfVar22[2]) * (fStack00000000000000fc - pfVar22[2]) +
                (fStack0000000000000104 - *pfVar22) * (fStack0000000000000104 - *pfVar22) +
                (fStack0000000000000100 - pfVar22[1]) * (fStack0000000000000100 - pfVar22[1])) {
              if (DAT_06db4ece == '\0') {
                FUN_02d965b8(PTR_DAT_069fbb48);
                DAT_06db4ece = '\x01';
              }
              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              fVar40 = 0.0;
              fVar39 = SQRT((fStack00000000000000fc * fStack00000000000000fc +
                            fStack0000000000000100 * fStack0000000000000100 +
                            fStack0000000000000104 * fStack0000000000000104) *
                            (fStack00000000000000f0 * fStack00000000000000f0 +
                            fStack00000000000000f8 * fStack00000000000000f8 +
                            fStack00000000000000f4 * fStack00000000000000f4));
              if (DAT_010fcd14 <= fVar39) {
                fVar39 = (fStack00000000000000fc * fStack00000000000000f0 +
                         fStack0000000000000104 * fStack00000000000000f8 +
                         fStack0000000000000100 * fStack00000000000000f4) / fVar39;
                fVar40 = 1.0;
                if (fVar39 <= 1.0) {
                  fVar40 = fVar39;
                }
                fVar38 = -1.0;
                if (-1.0 <= fVar39) {
                  fVar38 = fVar40;
                }
                if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                dVar42 = acos((double)fVar38);
                fVar40 = (float)dVar42 * DAT_010fcf40;
              }
              bVar10 = false;
              bVar7 = true;
              bVar8 = false;
              if (*(float *)(in_stack_00000148 + 0x80) < fVar40) {
                bVar10 = false;
                bVar7 = false;
                bVar8 = true;
                if (!NAN(fVar46)) {
                  bVar10 = fVar46 < 1.5;
                  bVar7 = fVar46 == 1.5;
                  bVar8 = false;
                }
              }
              bVar10 = bVar28 != 0 ||
                       (!bVar7 && bVar10 == bVar8) &&
                       1.0 <= SQRT((fStack000000000000012c - fVar57) *
                                   (fStack000000000000012c - fVar57) +
                                   (fStack0000000000000128 - fVar53) *
                                   (fStack0000000000000128 - fVar53) +
                                   (fStack0000000000000130 - fVar41) *
                                   (fStack0000000000000130 - fVar41));
            }
          }
          unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
          if (*(char *)(in_stack_00000148 + 0x5d6) != '\0') {
            if (*(long *)(in_stack_00000148 + 0x20) == 0) goto LAB_03168190;
            FUN_03199614(*(long *)(in_stack_00000148 + 0x20),&stack0x000001c0,0);
          }
          bVar7 = bVar10;
          if (fVar59 < fVar45 + fVar36 + DAT_010fd060) {
            bVar8 = bVar10;
            if (fVar35 <= fVar46) {
              bVar8 = true;
            }
            if (!bVar8 && !bVar2) {
              if (*(uint *)(in_stack_00000170 + 0x18) <= uVar1) goto LAB_0316f2c4;
              fVar36 = 1.0;
              _fStack00000000000001c0 = *(ulong *)pfVar33;
              in_stack_000001c8 = *(float *)(lVar12 + 0x28);
              bVar7 = true;
            }
          }
          if (fVar45 + fVar36 <= fVar59) {
            fVar53 = fStack00000000000001c0;
            fVar57 = fStack00000000000001c4;
          }
          else {
            if (*(uint *)(in_stack_00000170 + 0x18) <= uVar1) goto LAB_0316f2c4;
            _fStack00000000000001c0 = *(ulong *)pfVar33;
            fVar36 = 1.0;
            in_stack_000001c8 = *(float *)(lVar12 + 0x28);
            bVar7 = true;
            fVar53 = *pfVar33;
            fVar57 = *(float *)(lVar12 + 0x24);
          }
          fVar41 = in_stack_000001c8;
          if (DAT_06db4c77 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c77 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fVar39 = in_stack_000001c8;
          bVar8 = bVar7;
          if (fStack000000000000010c <
              SQRT((fStack000000000000012c - fVar41) * (fStack000000000000012c - fVar41) +
                   (fStack0000000000000130 - fVar53) * (fStack0000000000000130 - fVar53) +
                   (fStack0000000000000128 - fVar57) * (fStack0000000000000128 - fVar57))) {
            bVar8 = true;
          }
          bVar3 = bVar8;
          if (uVar31 != 1) {
            bVar3 = true;
          }
          if (!bVar3) {
            bVar8 = fVar36 == 0.0;
          }
          if (bVar8) {
            fVar53 = fStack00000000000001c0;
            fVar57 = fStack00000000000001c4;
            if (DAT_06db4c77 == '\0') {
              FUN_02d965b8(PTR_DAT_069fbb48);
              DAT_06db4c77 = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              cVar17 = DAT_06db4c77;
            }
            else {
              cVar17 = '\x01';
            }
            fVar41 = in_stack_000001c8;
            uVar21 = _fStack00000000000001c0;
            uStack0000000000000110 = _fStack00000000000001c0 & 0xffffffff;
            fVar53 = SQRT((fStack000000000000012c - fVar39) * (fStack000000000000012c - fVar39) +
                          (fStack0000000000000130 - fVar53) * (fStack0000000000000130 - fVar53) +
                          (fStack0000000000000128 - fVar57) * (fStack0000000000000128 - fVar57));
            fStack0000000000000164 = in_stack_000001c8;
            fStack00000000000001d4 = fVar53 + fStack00000000000001d4;
            *pfVar18 = fVar53 + *pfVar18;
            if (cVar17 == '\0') {
              FUN_02d965b8(PTR_DAT_069fbb48);
              DAT_06db4c77 = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            in_stack_00000280 = in_stack_000001c8;
            lVar13 = *(long *)(in_stack_00000148 + 0x68);
            *(ulong *)(unaff_x26 + 0x60) = _fStack00000000000001c0;
            fVar43 = (float)uVar21 - fVar43;
            _fStack0000000000000130 = _fStack00000000000001c0 & 0xffffffff;
            fVar62 = fVar62 + SQRT(fVar43 * fVar43 + (fVar41 - fVar37) * (fVar41 - fVar37));
            fStack0000000000000128 = fStack00000000000001c4;
            fStack000000000000012c = in_stack_000001c8;
            if ((lVar13 == 0) ||
               (lVar13 = FUN_0400ff1c(lVar13,uVar25 & 0xffffffff,*unaff_x21), lVar13 == 0))
            goto LAB_03168190;
            if (*(float *)(lVar13 + 0x100) == 0.0) {
              if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                 (lVar13 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),uVar25 & 0xffffffff,
                                        *unaff_x21), lVar13 == 0)) goto LAB_03168190;
              if (*(float *)(lVar13 + 0x104) != 0.0) goto LAB_0316bb78;
              if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                 (lVar13 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),uVar25 & 0xffffffff,
                                        *unaff_x21), lVar13 == 0)) goto LAB_03168190;
              if (*(float *)(lVar13 + 0x110) != 0.0) goto LAB_0316bb78;
              if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                 (lVar13 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),uVar25 & 0xffffffff,
                                        *unaff_x21), lVar13 == 0)) goto LAB_03168190;
              if (*(float *)(lVar13 + 0x114) != 0.0) goto LAB_0316bb78;
              lVar13 = *in_stack_000000e0;
              if (lVar13 == 0) goto LAB_03168190;
              lVar14 = *(long *)(lVar13 + 0x10);
              lVar20 = *(long *)PTR_DAT_069ff178;
              *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
              if (lVar14 == 0) goto LAB_03168190;
              uVar49 = *(uint *)(lVar13 + 0x18);
              if (uVar49 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar13 + 0x18) = uVar49 + 1;
                *(undefined4 *)(lVar14 + (long)(int)uVar49 * 4 + 0x20) = 0;
              }
              else {
                FUN_04059d64(0,lVar13,*(undefined8 *)
                                       (*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
              }
            }
            else {
LAB_0316bb78:
              if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
              fVar37 = *pfVar18;
              uVar16 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),uVar25 & 0xffffffff,
                                    *unaff_x21);
              FUN_0316f6a0(fVar37,fVar48,uVar16,uVar16,&stack0x0000022c,&stack0x00000228,
                           &stack0x00000224,&stack0x00000218,&stack0x00000278,&stack0x00000214);
            }
            lVar13 = *in_stack_000000b8;
            if (fVar53 <= 5.0) {
              if (lVar13 == 0) goto LAB_03168190;
              lVar14 = *(long *)(lVar13 + 0x10);
              lVar20 = *(long *)PTR_DAT_069ff178;
              *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
              if (lVar14 == 0) goto LAB_03168190;
              uVar49 = *(uint *)(lVar13 + 0x18);
              fVar37 = (fVar40 / fVar53) * 5.0;
              if (*(uint *)(lVar14 + 0x18) <= uVar49) {
                lVar14 = *(long *)(lVar20 + 0x20);
                goto LAB_0316bcb0;
              }
              *(uint *)(lVar13 + 0x18) = uVar49 + 1;
              *(float *)(lVar14 + (long)(int)uVar49 * 4 + 0x20) = fVar37;
            }
            else {
              if (lVar13 == 0) goto LAB_03168190;
              lVar14 = *(long *)(lVar13 + 0x10);
              lVar20 = *(long *)PTR_DAT_069ff178;
              *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
              if (lVar14 == 0) goto LAB_03168190;
              uVar49 = *(uint *)(lVar13 + 0x18);
              if (uVar49 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar13 + 0x18) = uVar49 + 1;
                *(float *)(lVar14 + (long)(int)uVar49 * 4 + 0x20) = fVar40;
              }
              else {
                lVar14 = *(long *)(lVar20 + 0x20);
                fVar37 = fVar40;
LAB_0316bcb0:
                FUN_04059d64(fVar37,lVar13,*(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x70));
              }
            }
            if (bVar9) {
              lVar13 = *in_stack_000000b8;
              if (lVar13 == 0) goto LAB_03168190;
              iVar27 = *(int *)(lVar13 + 0x18);
              if (1 < iVar27) {
                FUN_04059a68(lVar13,iVar27 + -1,*(undefined8 *)PTR_DAT_06a0a108);
                FUN_04059abc(lVar13,iVar27 + -2,*(undefined8 *)PTR_DAT_06a0b5c0);
              }
            }
            puVar4 = PTR_DAT_069fbee0;
            lVar13 = *(long *)(unaff_x26 + 0x20);
            if (lVar13 == 0) goto LAB_03168190;
            lVar14 = *(long *)(lVar13 + 0x10);
            *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
            if (lVar14 == 0) goto LAB_03168190;
            uVar49 = *(uint *)(lVar13 + 0x18);
            if (uVar49 < *(uint *)(lVar14 + 0x18)) {
              lVar14 = lVar14 + (long)(int)uVar49 * 0xc;
              *(uint *)(lVar13 + 0x18) = uVar49 + 1;
              *(float *)(lVar14 + 0x20) = in_stack_00000278;
              *(float *)(lVar14 + 0x24) = in_stack_0000027c;
              *(float *)(lVar14 + 0x28) = in_stack_00000280;
            }
            else {
              FUN_0409f624(lVar13,*(undefined8 *)
                                   (*(long *)(*(long *)(*(long *)puVar4 + 0x20) + 0xc0) + 0x70));
            }
            unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
            lVar13 = *(long *)(unaff_x26 + 0x28);
            if (lVar13 == 0) goto LAB_03168190;
            lVar14 = *(long *)(lVar13 + 0x10);
            lVar20 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
            if (lVar14 == 0) goto LAB_03168190;
            uVar49 = *(uint *)(lVar13 + 0x18);
            if (uVar49 < *(uint *)(lVar14 + 0x18)) {
              *(uint *)(lVar13 + 0x18) = uVar49 + 1;
              *(float *)(lVar14 + (long)(int)uVar49 * 4 + 0x20) = fVar36;
            }
            else {
              FUN_04059d64(fVar36,lVar13,
                           *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
            }
            if (bVar7) {
              lVar13 = *(long *)(in_stack_00000148 + 0x2c8);
              if (lVar13 == 0) goto LAB_03168190;
              lVar14 = *(long *)(lVar13 + 0x10);
              lVar20 = *(long *)PTR_DAT_069fc3e0;
              *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
              if (lVar14 == 0) goto LAB_03168190;
              uVar49 = *(uint *)(lVar13 + 0x18);
              if (uVar49 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar13 + 0x18) = uVar49 + 1;
                *(int *)(lVar14 + (long)(int)uVar49 * 4 + 0x20) = iStack00000000000000d4;
              }
              else {
                FUN_03fb3e1c(lVar13,iStack00000000000000d4,
                             *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
              }
            }
            bVar9 = false;
            fStack00000000000000fc = fStack00000000000000f0;
            fStack0000000000000100 = fStack00000000000000f4;
            iStack00000000000000d4 = iStack00000000000000d4 + 1;
            fStack0000000000000104 = fStack00000000000000f8;
            bVar2 = bVar10;
          }
          else {
            uStack0000000000000110 = (ulong)(uint)fVar43;
            fStack0000000000000164 = fVar37;
          }
          fVar41 = fVar45 + fVar36;
          unaff_x23 = in_stack_00000148;
        } while (fVar41 < fVar59);
        iStack0000000000000108 = 0;
        plVar26 = (long *)PTR_DAT_069fb978;
      }
    }
    else {
      if ((*(long *)(unaff_x23 + 0x68) == 0) ||
         (lVar13 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar25 & 0xffffffff,*unaff_x21),
         lVar13 == 0)) goto LAB_03168190;
      if (*(int *)(lVar13 + 0x6c) != 1) {
        if ((*(long *)(unaff_x23 + 0x68) == 0) ||
           (lVar13 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar25 & 0xffffffff,*unaff_x21),
           lVar13 == 0)) goto LAB_03168190;
        if (*(int *)(lVar13 + 0x6c) != 2) {
          if ((*(long *)(unaff_x23 + 0x68) == 0) ||
             (lVar13 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar25 & 0xffffffff,*unaff_x21),
             lVar13 == 0)) goto LAB_03168190;
          if (*(int *)(lVar13 + 0x6c) == 3) {
            uStack00000000000001ac = 0;
            if (*(long *)(unaff_x23 + 0x68) == 0) goto LAB_03168190;
            if (((long)(*(int *)(*(long *)(unaff_x23 + 0x68) + 0x18) + -2) < (long)uVar31) &&
               (*(char *)(unaff_x23 + 0x84) == '\0')) {
              uVar16 = *(undefined8 *)(unaff_x23 + 0x2e0);
              if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              uVar15 = FUN_0634eb94(uVar16,0,0);
              if ((uVar15 & 1) != 0) goto LAB_0316adcc;
              FUN_030fd644(&stack0x00000290,unaff_x23,uVar31 & 0xffffffff,&stack0x00000238,
                           &stack0x00000240,(long)&stack0x000001d0 + 4,0,&stack0x00000230);
            }
            else {
LAB_0316adcc:
              FUN_030faa2c(&stack0x00000290,unaff_x23,uVar31 & 0xffffffff,&stack0x00000238,
                           &stack0x00000240,(long)&stack0x000001d0 + 4,0,&stack0x00000230);
            }
            if ((*(long *)(unaff_x23 + 0x68) == 0) ||
               (lVar13 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar25 & 0xffffffff,*unaff_x21),
               lVar13 == 0)) goto LAB_03168190;
            lVar14 = *(long *)(unaff_x26 + 0x28);
            *(undefined4 *)(lVar13 + 0x34) = uStack00000000000001ac;
            if (lVar14 == 0) goto LAB_03168190;
            fVar45 = 0.0;
            iVar27 = 0;
            puVar32 = (undefined4 *)(in_stack_00000170 + 0x20 + uVar25 * 0xc);
            while( true ) {
              unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
              puVar4 = PTR_DAT_069fbee0;
              plVar26 = (long *)PTR_DAT_069fb978;
              fVar36 = (float)uVar21;
              fStack0000000000000164 = (float)uVar44;
              iVar61 = *(int *)(lVar14 + 0x18);
              if (iVar61 <= iVar27) break;
              if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
              uStack00000000000001a0 =
                   FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),iVar27,*(undefined8 *)PTR_DAT_069fd088);
              fStack00000000000001a4 = fVar36;
              fStack00000000000001a8 = fStack0000000000000164;
              if (*(char *)(in_stack_00000148 + 0x5d6) == '\0') {
                uVar21 = (ulong)*(uint *)(in_stack_00000170 + 0x18);
                if ((((uVar21 <= uVar25) || (uVar21 <= uVar31)) || (uVar21 <= uVar1)) ||
                   (uVar21 <= uVar31 + 2)) goto LAB_0316f2c4;
                if (*(long *)(unaff_x26 + 0x28) == 0) goto LAB_03168190;
                uVar47 = *puVar32;
                fVar36 = (float)puVar32[1];
                uVar54 = puVar32[2];
                fVar37 = *pfVar24;
                uVar58 = *(undefined4 *)(lVar11 + 0x24);
                uVar55 = *(undefined4 *)(lVar11 + 0x28);
                FUN_04059a68(*(long *)(unaff_x26 + 0x28),iVar27,*(undefined8 *)PTR_DAT_06a0a108);
                FUN_0316f340(uVar47,fVar36,uVar54,fVar37,uVar58,uVar55);
                fStack00000000000001a4 = fVar36;
                if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                fStack0000000000000164 = fStack00000000000001a8;
                FUN_0409f350(uStack00000000000001a0,*(long *)(unaff_x26 + 0x20),iVar27,
                             *(undefined8 *)PTR_DAT_06a0b7d0);
                if (iVar27 != 0) goto LAB_0316af8c;
LAB_0316b04c:
                lVar13 = *in_stack_000000e0;
                if (lVar13 == 0) goto LAB_03168190;
                lVar14 = *(long *)(lVar13 + 0x10);
                lVar20 = *(long *)PTR_DAT_069ff178;
                *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                if (lVar14 == 0) goto LAB_03168190;
                uVar49 = *(uint *)(lVar13 + 0x18);
                if (uVar49 < *(uint *)(lVar14 + 0x18)) {
                  *(uint *)(lVar13 + 0x18) = uVar49 + 1;
                  *(undefined4 *)(lVar14 + (long)(int)uVar49 * 4 + 0x20) = 0;
                }
                else {
                  FUN_04059d64(0,lVar13,*(undefined8 *)
                                         (*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
                }
              }
              else {
                if (*(long *)(in_stack_00000148 + 0x20) == 0) goto LAB_03168190;
                FUN_03199614(*(long *)(in_stack_00000148 + 0x20),&stack0x000001a0,0);
                if (iVar27 == 0) goto LAB_0316b04c;
LAB_0316af8c:
                if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                   (lVar13 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),uVar25 & 0xffffffff,
                                          *(undefined8 *)PTR_DAT_06a0b440), lVar13 == 0))
                goto LAB_03168190;
                if (*(float *)(lVar13 + 0x100) == 0.0) {
                  if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                     (lVar13 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),uVar25 & 0xffffffff,
                                            *(undefined8 *)PTR_DAT_06a0b440), lVar13 == 0))
                  goto LAB_03168190;
                  if (*(float *)(lVar13 + 0x104) == 0.0) {
                    if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                       (lVar13 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                              uVar25 & 0xffffffff,*(undefined8 *)PTR_DAT_06a0b440),
                       lVar13 == 0)) goto LAB_03168190;
                    if (*(float *)(lVar13 + 0x110) == 0.0) {
                      if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                         (lVar13 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                uVar25 & 0xffffffff,*(undefined8 *)PTR_DAT_06a0b440)
                         , lVar13 == 0)) goto LAB_03168190;
                      if (*(float *)(lVar13 + 0x114) == 0.0) goto LAB_0316b04c;
                    }
                  }
                }
                puVar4 = PTR_DAT_069fd088;
                if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                fVar37 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),iVar27 + -1,
                                             *(undefined8 *)PTR_DAT_069fd088);
                if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                fVar43 = fVar36;
                fVar53 = fStack0000000000000164;
                fVar57 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),iVar27,
                                             *(undefined8 *)puVar4);
                if (DAT_06db4c77 == '\0') {
                  FUN_02d965b8(PTR_DAT_069fbb48);
                  DAT_06db4c77 = '\x01';
                }
                if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
                fVar41 = *pfVar18;
                fVar45 = fVar45 + SQRT((fStack0000000000000164 - fVar53) *
                                       (fStack0000000000000164 - fVar53) +
                                       (fVar37 - fVar57) * (fVar37 - fVar57) +
                                       (fVar36 - fVar43) * (fVar36 - fVar43));
                uVar16 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),uVar25 & 0xffffffff,
                                      *(undefined8 *)PTR_DAT_06a0b440);
                FUN_0316f6a0(fVar45 + fVar41,fVar48,uVar16,uVar16,&stack0x0000022c,&stack0x00000228,
                             &stack0x00000224,&stack0x00000218,&stack0x000001a0,&stack0x00000214);
              }
              if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
              uVar44 = (ulong)(uint)fStack00000000000001a8;
              uVar21 = (ulong)(uint)fStack00000000000001a4;
              FUN_0409f350(uStack00000000000001a0,*(long *)(unaff_x26 + 0x20),iVar27,
                           *(undefined8 *)PTR_DAT_06a0b7d0);
              lVar14 = *(long *)(unaff_x26 + 0x28);
              iVar27 = iVar27 + 1;
              if (lVar14 == 0) goto LAB_03168190;
            }
            uVar21 = (ulong)(iVar61 - 1);
            if (iVar61 < 1) {
              if (*(uint *)(in_stack_00000170 + 0x18) <= uVar1) goto LAB_0316f2c4;
              lVar13 = *(long *)(unaff_x26 + 0x20);
              if (lVar13 == 0) goto LAB_03168190;
              lVar14 = *(long *)(lVar13 + 0x10);
              fVar45 = *pfVar33;
              uVar47 = *(undefined4 *)(lVar12 + 0x24);
              fStack0000000000000164 = *(float *)(lVar12 + 0x28);
              *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
              if (lVar14 == 0) goto LAB_03168190;
              uVar49 = *(uint *)(lVar13 + 0x18);
              if (uVar49 < *(uint *)(lVar14 + 0x18)) {
                lVar14 = lVar14 + (long)(int)uVar49 * 0xc;
                *(uint *)(lVar13 + 0x18) = uVar49 + 1;
                *(float *)(lVar14 + 0x20) = fVar45;
                *(undefined4 *)(lVar14 + 0x24) = uVar47;
                *(float *)(lVar14 + 0x28) = fStack0000000000000164;
              }
              else {
                FUN_0409f624(lVar13,*(undefined8 *)
                                     (*(long *)(*(long *)(*(long *)puVar4 + 0x20) + 0xc0) + 0x70));
                uVar21 = extraout_x1_00;
              }
              fVar45 = fStack00000000000001d4;
              if ((*(uint *)(in_stack_00000170 + 0x18) <= uVar31) ||
                 (*(uint *)(in_stack_00000170 + 0x18) <= uVar1)) goto LAB_0316f2c4;
              uVar16 = *(undefined8 *)pfVar24;
              fVar48 = *(float *)(lVar11 + 0x28);
              uVar50 = *(undefined8 *)pfVar33;
              fVar36 = *(float *)(lVar12 + 0x28);
              if (DAT_06db4c77 == '\0') {
                FUN_02d965b8(PTR_DAT_069fbb48,uVar21);
                DAT_06db4c77 = '\x01';
              }
              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              fVar37 = (float)uVar16 - (float)uVar50;
              fVar43 = (float)((ulong)uVar16 >> 0x20) - (float)((ulong)uVar50 >> 0x20);
              fVar48 = fVar48 - fVar36;
              in_stack_0000027c = fVar48 * fVar48;
              fStack00000000000001d4 =
                   fVar45 + SQRT(in_stack_0000027c + fVar37 * fVar37 + fVar43 * fVar43);
LAB_0316d2dc:
              lVar11 = *(long *)(unaff_x26 + 0x28);
              if (lVar11 == 0) goto LAB_03168190;
              lVar12 = *(long *)(lVar11 + 0x10);
              lVar13 = *(long *)PTR_DAT_069ff178;
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              if (lVar12 == 0) goto LAB_03168190;
              uVar49 = *(uint *)(lVar11 + 0x18);
              if (uVar49 < *(uint *)(lVar12 + 0x18)) {
                *(uint *)(lVar11 + 0x18) = uVar49 + 1;
                *(undefined4 *)(lVar12 + (long)(int)uVar49 * 4 + 0x20) = 0x3f800000;
              }
              else {
                FUN_04059d64(0x3f800000,lVar11,
                             *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
              }
              lVar11 = *in_stack_000000e0;
              if (lVar11 == 0) goto LAB_03168190;
              lVar12 = *(long *)(lVar11 + 0x10);
              lVar13 = *(long *)PTR_DAT_069ff178;
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              if (lVar12 == 0) goto LAB_03168190;
              uVar49 = *(uint *)(lVar11 + 0x18);
              if (uVar49 < *(uint *)(lVar12 + 0x18)) {
                *(uint *)(lVar11 + 0x18) = uVar49 + 1;
                *(undefined4 *)(lVar12 + (long)(int)uVar49 * 4 + 0x20) = 0;
              }
              else {
                FUN_04059d64(0,lVar11,*(undefined8 *)
                                       (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
              }
            }
            else {
              fVar45 = (float)FUN_04059a68(lVar14,uVar21,*(undefined8 *)PTR_DAT_06a0a108);
              unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
              puVar4 = PTR_DAT_069fd088;
              plVar26 = (long *)PTR_DAT_069fb978;
              fVar48 = 1.0;
              if (fVar45 <= 1.0) {
                lVar11 = *(long *)(unaff_x26 + 0x20);
                if (lVar11 == 0) goto LAB_03168190;
                fVar45 = (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -1,
                                             *(undefined8 *)PTR_DAT_069fd088);
                if (*(uint *)(in_stack_00000170 + 0x18) <= uVar1) goto LAB_0316f2c4;
                fVar48 = fVar48 - *(float *)(lVar12 + 0x24);
                fStack0000000000000164 = fStack0000000000000164 - *(float *)(lVar12 + 0x28);
                in_stack_0000027c = in_stack_000000a0._4_4_;
                if (in_stack_000000a0._4_4_ <=
                    fStack0000000000000164 * fStack0000000000000164 +
                    (fVar45 - *pfVar33) * (fVar45 - *pfVar33) + fVar48 * fVar48) {
                  lVar11 = *(long *)(unaff_x26 + 0x20);
                  if (lVar11 == 0) goto LAB_03168190;
                  fVar45 = in_stack_000000a0._4_4_;
                  fVar48 = (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -1,
                                               *(undefined8 *)puVar4);
                  if (*(uint *)(in_stack_00000170 + 0x18) <= uVar1) goto LAB_0316f2c4;
                  fVar36 = *pfVar33;
                  fVar43 = *(float *)(lVar12 + 0x24);
                  fVar37 = *(float *)(lVar12 + 0x28);
                  if (DAT_06db4c77 == '\0') {
                    FUN_02d965b8(PTR_DAT_069fbb48);
                    DAT_06db4c77 = '\x01';
                  }
                  if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  puVar5 = PTR_DAT_069fbee0;
                  fVar45 = fVar45 - fVar43;
                  lVar11 = *(long *)(unaff_x26 + 0x20);
                  fStack0000000000000164 = fStack0000000000000164 - fVar37;
                  if (fVar34 <= SQRT(fStack0000000000000164 * fStack0000000000000164 +
                                     (fVar48 - fVar36) * (fVar48 - fVar36) + fVar45 * fVar45)) {
                    if (*(uint *)(in_stack_00000170 + 0x18) <= uVar1) goto LAB_0316f2c4;
                    if (lVar11 != 0) {
                      lVar13 = *(long *)(lVar11 + 0x10);
                      fVar45 = *pfVar33;
                      fVar48 = *(float *)(lVar12 + 0x24);
                      fStack0000000000000164 = *(float *)(lVar12 + 0x28);
                      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                      if (lVar13 != 0) {
                        uVar49 = *(uint *)(lVar11 + 0x18);
                        if (uVar49 < *(uint *)(lVar13 + 0x18)) {
                          lVar13 = lVar13 + (long)(int)uVar49 * 0xc;
                          *(uint *)(lVar11 + 0x18) = uVar49 + 1;
                          *(float *)(lVar13 + 0x20) = fVar45;
                          *(float *)(lVar13 + 0x24) = fVar48;
                          *(float *)(lVar13 + 0x28) = fStack0000000000000164;
                        }
                        else {
                          FUN_0409f624(lVar11,*(undefined8 *)
                                               (*(long *)(*(long *)(*(long *)puVar5 + 0x20) + 0xc0)
                                               + 0x70));
                        }
                        fVar45 = fStack00000000000001d4;
                        lVar11 = *(long *)(unaff_x26 + 0x20);
                        if (lVar11 != 0) {
                          fVar36 = (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -1,
                                                       *(undefined8 *)puVar4);
                          if (*(uint *)(in_stack_00000170 + 0x18) <= uVar1) goto LAB_0316f2c4;
                          fVar37 = *pfVar33;
                          fVar53 = *(float *)(lVar12 + 0x24);
                          fVar43 = *(float *)(lVar12 + 0x28);
                          if (DAT_06db4c77 == '\0') {
                            FUN_02d965b8(PTR_DAT_069fbb48);
                            DAT_06db4c77 = '\x01';
                          }
                          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                            thunk_FUN_02df485c();
                          }
                          fVar48 = fVar48 - fVar53;
                          fStack0000000000000164 = fStack0000000000000164 - fVar43;
                          in_stack_0000027c = fStack0000000000000164 * fStack0000000000000164;
                          fStack00000000000001d4 =
                               fVar45 + SQRT(in_stack_0000027c +
                                             (fVar36 - fVar37) * (fVar36 - fVar37) + fVar48 * fVar48
                                            );
                          goto LAB_0316d2dc;
                        }
                      }
                    }
                    goto LAB_03168190;
                  }
                  if (lVar11 == 0) goto LAB_03168190;
                  if (*(uint *)(in_stack_00000170 + 0x18) <= uVar1) goto LAB_0316f2c4;
                  fStack0000000000000164 = *(float *)(lVar12 + 0x28);
                  in_stack_0000027c = *(float *)(lVar12 + 0x24);
                  FUN_0409f350(*pfVar33,lVar11,*(int *)(lVar11 + 0x18) + -1,
                               *(undefined8 *)PTR_DAT_06a0b7d0);
                  lVar11 = *(long *)(unaff_x26 + 0x28);
                  if (lVar11 == 0) goto LAB_03168190;
                  FUN_04059abc(0x3f800000,lVar11,*(int *)(lVar11 + 0x18) + -1,
                               *(undefined8 *)PTR_DAT_06a0b5c0);
                }
              }
              else {
                lVar11 = *(long *)(unaff_x26 + 0x28);
                if (lVar11 == 0) goto LAB_03168190;
                FUN_04059abc(0x3f800000,lVar11,*(int *)(lVar11 + 0x18) + -1,
                             *(undefined8 *)PTR_DAT_06a0b5c0);
                lVar11 = *(long *)(unaff_x26 + 0x20);
                if (lVar11 == 0) goto LAB_03168190;
                if (*(uint *)(in_stack_00000170 + 0x18) <= uVar1) goto LAB_0316f2c4;
                fStack0000000000000164 = *(float *)(lVar12 + 0x28);
                in_stack_0000027c = *(float *)(lVar12 + 0x24);
                FUN_0409f350(*pfVar33,lVar11,*(int *)(lVar11 + 0x18) + -1,
                             *(undefined8 *)PTR_DAT_06a0b7d0);
              }
            }
            lVar11 = *(long *)(unaff_x26 + 0x20);
            if (lVar11 == 0) goto LAB_03168190;
            iVar27 = *(int *)(lVar11 + 0x18);
            uStack0000000000000110 =
                 FUN_0409f2f4(lVar11,iVar27 + -1,*(undefined8 *)PTR_DAT_069fd088);
            puVar4 = PTR_DAT_069fd088;
            lVar11 = *(long *)(unaff_x26 + 0x20);
            in_stack_00000278 = (float)uStack0000000000000110;
            if (lVar11 == 0) goto LAB_03168190;
            fVar45 = fStack0000000000000164;
            if (1 < *(int *)(lVar11 + 0x18)) {
              fStack0000000000000088 = in_stack_0000027c;
              fStack000000000000008c =
                   (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -2,
                                       *(undefined8 *)PTR_DAT_069fd088);
              lVar11 = *(long *)(unaff_x26 + 0x20);
              if (lVar11 == 0) goto LAB_03168190;
              fVar48 = fStack0000000000000088;
              fVar36 = fVar45;
              fVar37 = (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -1,*(undefined8 *)puVar4
                                          );
              if (DAT_06db4c75 == '\0') {
                FUN_02d965b8(PTR_DAT_069fbb48);
                DAT_06db4c75 = '\x01';
              }
              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              fStack000000000000008c = fStack000000000000008c - fVar37;
              fStack0000000000000088 = fStack0000000000000088 - fVar48;
              fVar45 = fVar45 - fVar36;
              in_stack_00000080._4_4_ =
                   SQRT(fVar45 * fVar45 +
                        fStack000000000000008c * fStack000000000000008c +
                        fStack0000000000000088 * fStack0000000000000088);
              if (in_stack_00000080._4_4_ <= DAT_010fd13c) {
                if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
                  FUN_02d965b8(plVar26);
                  *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
                }
                pfVar24 = *(float **)(*plVar26 + 0xb8);
                fStack000000000000008c = *pfVar24;
                fStack0000000000000088 = pfVar24[1];
                in_stack_00000080._4_4_ = pfVar24[2];
              }
              else {
                fStack000000000000008c = fStack000000000000008c / in_stack_00000080._4_4_;
                fStack0000000000000088 = fStack0000000000000088 / in_stack_00000080._4_4_;
                in_stack_00000080._4_4_ = fVar45 / in_stack_00000080._4_4_;
              }
            }
            lVar11 = *(long *)(in_stack_00000148 + 0x2c8);
            *(float *)(in_stack_00000148 + 0x2c0) =
                 *(float *)(in_stack_00000148 + 0x2c0) + fStack00000000000001d4;
            if (lVar11 == 0) goto LAB_03168190;
            lVar12 = *(long *)(lVar11 + 0x10);
            lVar13 = *(long *)PTR_DAT_069fc3e0;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar12 == 0) goto LAB_03168190;
            uVar49 = *(uint *)(lVar11 + 0x18);
            iStack00000000000000d4 = iVar27 + iStack00000000000000d4;
            fVar48 = fStack00000000000001d4;
            if (uVar49 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar49 + 1;
              *(int *)(lVar12 + (long)(int)uVar49 * 4 + 0x20) = iStack00000000000000d4;
            }
            else {
              FUN_03fb3e1c(lVar11,iStack00000000000000d4,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
            if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
            iVar27 = *(int *)(*(long *)(unaff_x26 + 0x78) + 0x18);
            in_stack_00000280 = fStack0000000000000164;
            if (0 < iVar27) {
              lVar11 = FUN_0400ff1c(in_stack_00000098,iVar30 + -2,*unaff_x21);
              if ((lVar11 != 0) && (lVar12 = *in_stack_00000090, lVar12 != 0)) {
                iVar61 = *(int *)(lVar11 + 0xbc);
                fVar36 = (float)FUN_04059a68(lVar12,*(int *)(lVar12 + 0x18) + -1,
                                             *(undefined8 *)PTR_DAT_06a0a108);
                lVar11 = *in_stack_00000090;
                if (lVar11 != 0) {
                  if (1 < *(int *)(lVar11 + 0x18)) {
                    fVar48 = (float)FUN_04059a68(lVar11,*(int *)(lVar11 + 0x18) + -2,
                                                 *(undefined8 *)PTR_DAT_06a0a108);
                    fVar48 = fVar36 - fVar48;
                    fVar36 = fVar48;
                  }
                  puVar4 = PTR_DAT_069fd088;
                  lVar11 = *(long *)(unaff_x26 + 0x78);
                  if (lVar11 != 0) {
                    fVar37 = (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -1,
                                                 *(undefined8 *)PTR_DAT_069fd088);
                    if (*(long *)(unaff_x26 + 0x20) != 0) {
                      fVar43 = fVar48;
                      fVar53 = fVar45;
                      fVar57 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),0,
                                                   *(undefined8 *)puVar4);
                      if (DAT_06db4c75 == '\0') {
                        FUN_02d965b8(PTR_DAT_069fbb48);
                        DAT_06db4c75 = '\x01';
                      }
                      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                      }
                      fVar48 = fVar48 - fVar43;
                      uVar21 = (ulong)(uint)DAT_010fd13c;
                      fVar45 = SQRT((fVar45 - fVar53) * (fVar45 - fVar53) +
                                    (fVar37 - fVar57) * (fVar37 - fVar57) + fVar48 * fVar48);
                      if (fVar45 <= DAT_010fd13c) {
                        if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
                          FUN_02d965b8(plVar26);
                          *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
                        }
                        fVar48 = *(float *)(*(long *)(*plVar26 + 0xb8) + 4);
                      }
                      else {
                        fVar48 = fVar48 / fVar45;
                      }
                      puVar4 = PTR_DAT_069fd088;
                      lVar11 = *(long *)(unaff_x26 + 0x78);
                      if (lVar11 != 0) {
                        FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -1,
                                     *(undefined8 *)PTR_DAT_069fd088);
                        lVar11 = *(long *)(unaff_x26 + 0x78);
                        if (lVar11 != 0) {
                          fVar43 = fVar45;
                          fVar37 = (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -1,
                                                       *(undefined8 *)puVar4);
                          if (*(long *)(unaff_x26 + 0x78) != 0) {
                            uVar44 = (ulong)(uint)(float)iVar61;
                            fVar53 = (float)iVar27 - (float)iVar61;
                            if (1.0 <= fVar53) {
                              fVar57 = 0.0;
                              iVar61 = *(int *)(*(long *)(unaff_x26 + 0x78) + 0x18);
                              iVar27 = 2;
                              iVar29 = -2;
                              do {
                                fVar41 = (float)uVar44;
                                if ((iVar27 - iVar61) + -1 < 0) {
                                  lVar11 = *(long *)(unaff_x26 + 0x78);
                                  if (lVar11 == 0) goto LAB_03168190;
                                  fVar59 = (float)uVar21;
                                  fVar39 = (float)FUN_0409f2f4(lVar11,iVar29 + *(int *)(lVar11 + 
                                                  0x18),*(undefined8 *)PTR_DAT_069fd088);
                                  if (DAT_06db4c77 == '\0') {
                                    FUN_02d965b8(PTR_DAT_069fbb48);
                                    DAT_06db4c77 = '\x01';
                                  }
                                  if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                                    thunk_FUN_02df485c();
                                  }
                                  lVar11 = *(long *)(unaff_x26 + 0x78);
                                  if (lVar11 == 0) goto LAB_03168190;
                                  fVar46 = fVar59 - (float)uVar21;
                                  fVar57 = fVar57 + SQRT(fVar46 * fVar46 +
                                                         (fVar39 - fVar37) * (fVar39 - fVar37) +
                                                         (fVar41 - fVar43) * (fVar41 - fVar43));
                                  fVar45 = (fVar36 / fVar53) * fVar48 + fVar45;
                                  fVar37 = 1.0;
                                  if (SQRT(fVar57 / fVar36) <= 1.0) {
                                    fVar37 = SQRT(fVar57 / fVar36);
                                  }
                                  fVar43 = fVar45 + (fVar41 - fVar45) * fVar37;
                                  uVar44 = (ulong)(uint)fVar43;
                                  FUN_0409f350(fVar39,uVar44,fVar59,lVar11,
                                               iVar29 + *(int *)(lVar11 + 0x18),
                                               *(undefined8 *)PTR_DAT_06a0b7d0);
                                  uVar21 = (ulong)(uint)fVar59;
                                  fVar37 = fVar39;
                                }
                                fVar41 = (float)iVar27;
                                iVar27 = iVar27 + 1;
                                iVar29 = iVar29 + -1;
                              } while (fVar41 <= fVar53);
                              iStack0000000000000108 = 3;
                              unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
                              unaff_x23 = in_stack_00000148;
                            }
                            else {
                              iStack0000000000000108 = 3;
                              unaff_x23 = in_stack_00000148;
                            }
                            goto LAB_0316c620;
                          }
                        }
                      }
                    }
                  }
                }
              }
              goto LAB_03168190;
            }
            iStack0000000000000108 = 3;
            unaff_x23 = in_stack_00000148;
          }
          else {
            if ((*(long *)(unaff_x23 + 0x68) == 0) ||
               (lVar11 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar25 & 0xffffffff,*unaff_x21),
               puVar4 = PTR_DAT_069fd088, lVar11 == 0)) goto LAB_03168190;
            if (*(int *)(lVar11 + 0x6c) != 4) goto LAB_0316c620;
            if ((*(long *)(unaff_x23 + 0x68) == 0) ||
               (lVar11 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar25 & 0xffffffff,*unaff_x21),
               lVar11 == 0)) goto LAB_03168190;
            fStack00000000000001d4 = 0.0;
            *(undefined8 *)(unaff_x26 + 0x20) = *(undefined8 *)(lVar11 + 0x1d8);
            lVar11 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ff188);
            FUN_040594d0(lVar11,*(undefined8 *)PTR_DAT_069ff180);
            if (lVar11 == 0) goto LAB_03168190;
            lVar12 = *(long *)(lVar11 + 0x10);
            lVar13 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar12 == 0) goto LAB_03168190;
            uVar49 = *(uint *)(lVar11 + 0x18);
            if (uVar49 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar49 + 1;
              *(undefined4 *)(lVar12 + (long)(int)uVar49 * 4 + 0x20) = 0;
            }
            else {
              FUN_04059d64(0,lVar11,*(undefined8 *)
                                     (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
            lVar12 = *(long *)(unaff_x26 + 0x20);
            if (lVar12 == 0) goto LAB_03168190;
            iVar27 = 1;
            while( true ) {
              fVar45 = fStack00000000000001d4;
              fVar36 = (float)uVar44;
              fVar48 = (float)uVar21;
              if (*(int *)(lVar12 + 0x18) <= iVar27) break;
              fVar37 = (float)FUN_0409f2f4(lVar12,iVar27 + -1,*(undefined8 *)puVar4);
              if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
              fVar43 = fVar48;
              fVar53 = fVar36;
              fVar57 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),iVar27,*(undefined8 *)puVar4)
              ;
              if (DAT_06db4c77 == '\0') {
                FUN_02d965b8(PTR_DAT_069fbb48);
                DAT_06db4c77 = '\x01';
              }
              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              fVar36 = fVar36 - fVar53;
              uVar44 = (ulong)(uint)fVar36;
              lVar12 = *(long *)(lVar11 + 0x10);
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              uVar21 = (ulong)(uint)(fVar36 * fVar36);
              fStack00000000000001d4 =
                   fVar45 + SQRT(fVar36 * fVar36 +
                                 (fVar37 - fVar57) * (fVar37 - fVar57) +
                                 (fVar48 - fVar43) * (fVar48 - fVar43));
              if (lVar12 == 0) goto LAB_03168190;
              uVar49 = *(uint *)(lVar11 + 0x18);
              if (uVar49 < *(uint *)(lVar12 + 0x18)) {
                *(uint *)(lVar11 + 0x18) = uVar49 + 1;
                *(float *)(lVar12 + (long)(int)uVar49 * 4 + 0x20) = fStack00000000000001d4;
              }
              else {
                FUN_04059d64(lVar11,*(undefined8 *)
                                     (*(long *)(*(long *)(*(long *)PTR_DAT_069ff178 + 0x20) + 0xc0)
                                     + 0x70));
              }
              lVar12 = *(long *)(unaff_x26 + 0x20);
              iVar27 = iVar27 + 1;
              if (lVar12 == 0) goto LAB_03168190;
            }
            lVar12 = *(long *)(unaff_x26 + 0x28);
            *pfVar18 = *pfVar18 + fStack00000000000001d4;
            if (lVar12 == 0) goto LAB_03168190;
            lVar13 = *(long *)(lVar12 + 0x10);
            lVar14 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar13 == 0) goto LAB_03168190;
            uVar49 = *(uint *)(lVar12 + 0x18);
            if (uVar49 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar49 + 1;
              *(undefined4 *)(lVar13 + (long)(int)uVar49 * 4 + 0x20) = 0;
            }
            else {
              FUN_04059d64(0,lVar12,*(undefined8 *)
                                     (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
            lVar12 = *in_stack_000000e0;
            if (lVar12 == 0) goto LAB_03168190;
            lVar13 = *(long *)(lVar12 + 0x10);
            lVar14 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar13 == 0) goto LAB_03168190;
            uVar49 = *(uint *)(lVar12 + 0x18);
            if (uVar49 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar49 + 1;
              *(undefined4 *)(lVar13 + (long)(int)uVar49 * 4 + 0x20) = 0;
            }
            else {
              FUN_04059d64(0,lVar12,*(undefined8 *)
                                     (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
            lVar12 = *(long *)(unaff_x26 + 0x20);
            if (lVar12 == 0) goto LAB_03168190;
            iVar27 = 0;
            while (iVar27 < *(int *)(lVar12 + 0x18)) {
              lVar12 = *(long *)(unaff_x26 + 0x28);
              fVar45 = (float)FUN_04059a68(lVar11,iVar27,*(undefined8 *)PTR_DAT_06a0a108);
              if (lVar12 == 0) goto LAB_03168190;
              lVar13 = *(long *)(lVar12 + 0x10);
              lVar14 = *(long *)PTR_DAT_069ff178;
              *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
              if (lVar13 == 0) goto LAB_03168190;
              uVar49 = *(uint *)(lVar12 + 0x18);
              if (uVar49 < *(uint *)(lVar13 + 0x18)) {
                *(uint *)(lVar12 + 0x18) = uVar49 + 1;
                *(float *)(lVar13 + (long)(int)uVar49 * 4 + 0x20) = fVar45 / fStack00000000000001d4;
              }
              else {
                FUN_04059d64(lVar12,*(undefined8 *)
                                     (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              }
              lVar12 = *in_stack_000000e0;
              if (lVar12 == 0) goto LAB_03168190;
              lVar13 = *(long *)(lVar12 + 0x10);
              lVar14 = *(long *)PTR_DAT_069ff178;
              *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
              if (lVar13 == 0) goto LAB_03168190;
              uVar49 = *(uint *)(lVar12 + 0x18);
              if (uVar49 < *(uint *)(lVar13 + 0x18)) {
                *(uint *)(lVar12 + 0x18) = uVar49 + 1;
                *(undefined4 *)(lVar13 + (long)(int)uVar49 * 4 + 0x20) = 0;
              }
              else {
                FUN_04059d64(0,lVar12,*(undefined8 *)
                                       (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              }
              lVar12 = *(long *)(unaff_x26 + 0x20);
              iVar27 = iVar27 + 1;
              if (lVar12 == 0) goto LAB_03168190;
            }
            iStack0000000000000108 = 4;
            unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
            unaff_x23 = in_stack_00000148;
          }
          goto LAB_0316c620;
        }
      }
      uVar49 = *(uint *)(in_stack_00000170 + 0x18);
      fStack0000000000000164 = in_stack_00000280;
      if (uVar31 == 1) {
        if ((ulong)uVar49 < 2) goto LAB_0316f2c4;
        fStack0000000000000164 = *(float *)(lVar11 + 0x28);
        *(undefined8 *)(unaff_x26 + 0x60) = *(undefined8 *)pfVar24;
      }
      if (uVar49 <= uVar1) {
LAB_0316f2c4:
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      fVar45 = *(float *)(lVar12 + 0x28);
      uVar16 = *(undefined8 *)pfVar33;
      uVar50 = *(undefined8 *)pfVar24;
      fVar62 = *(float *)(lVar11 + 0x28);
      if (DAT_06db4c75 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c75 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar36 = (float)uVar16 - (float)uVar50;
      fVar37 = (float)((ulong)uVar16 >> 0x20) - (float)((ulong)uVar50 >> 0x20);
      fVar45 = fVar45 - fVar62;
      fVar62 = SQRT(fVar45 * fVar45 + fVar36 * fVar36 + fVar37 * fVar37);
      uVar21 = (ulong)(uint)fVar62;
      if (fVar62 <= DAT_010fd13c) {
        if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
          FUN_02d965b8(plVar26);
          *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
        }
        uVar16 = **(undefined8 **)(*plVar26 + 0xb8);
        fVar45 = *(float *)(*(undefined8 **)(*plVar26 + 0xb8) + 1);
      }
      else {
        fVar45 = fVar45 / fVar62;
        uVar16 = CONCAT44(fVar37 / fVar62,fVar36 / fVar62);
      }
      if (*(uint *)(in_stack_00000170 + 0x18) <= uVar1) goto LAB_0316f2c4;
      fVar62 = *(float *)(lVar12 + 0x28);
      uVar50 = *(undefined8 *)pfVar33;
      uVar52 = *(undefined8 *)pfVar24;
      fVar36 = *(float *)(lVar11 + 0x28);
      if (DAT_06db4c77 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c77 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar37 = (float)uVar50 - (float)uVar52;
      fVar43 = (float)((ulong)uVar50 >> 0x20) - (float)((ulong)uVar52 >> 0x20);
      fVar62 = fVar62 - fVar36;
      fStack00000000000001d4 = SQRT(fVar62 * fVar62 + fVar37 * fVar37 + fVar43 * fVar43);
      if (*(uint *)(in_stack_00000170 + 0x18) <= uVar1) goto LAB_0316f2c4;
      uStack0000000000000110 = (ulong)(uint)in_stack_00000278;
      fVar36 = *pfVar33;
      fVar62 = *(float *)(lVar12 + 0x28);
      if (DAT_06db4c77 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c77 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar62 = fVar62 - fStack0000000000000164;
      fVar62 = SQRT((fVar36 - in_stack_00000278) * (fVar36 - in_stack_00000278) + fVar62 * fVar62) +
               0.0;
      fVar36 = 0.0;
      if (uVar31 != 1) {
        fVar36 = fStack000000000000010c;
      }
      uVar15 = (ulong)(uint)fVar36;
      uVar44 = uVar15;
      lVar13 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ff188);
      FUN_040594d0(lVar13,*(undefined8 *)PTR_DAT_069ff180);
      if (fVar36 < fStack00000000000001d4 - fStack000000000000010c) {
        fVar36 = *(float *)((ulong)&stack0x00000278 | 4);
        do {
          if (*(uint *)(in_stack_00000170 + 0x18) <= uVar1) goto LAB_0316f2c4;
          uVar50 = *(undefined8 *)pfVar33;
          fVar37 = *(float *)(lVar12 + 0x28);
          if (DAT_06db4c77 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c77 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fVar41 = (float)uVar15;
          fVar43 = (float)uVar16 * fVar41 + in_stack_00000278;
          fVar53 = (float)((ulong)uVar16 >> 0x20) * fVar41 + fVar36;
          uVar52 = CONCAT44(fVar53,fVar43);
          fVar57 = fVar45 * fVar41 + fStack0000000000000164;
          fVar43 = fVar43 - (float)uVar50;
          fVar53 = fVar53 - (float)((ulong)uVar50 >> 0x20);
          fVar37 = fVar57 - fVar37;
          fVar37 = SQRT(fVar37 * fVar37 + fVar43 * fVar43 + fVar53 * fVar53);
          uVar21 = (ulong)(uint)fVar37;
          if (fVar34 < fVar37) {
            _uStack00000000000001b0 = uVar52;
            in_stack_000001b8 = fVar57;
            if (*(char *)(unaff_x23 + 0x5d6) != '\0') {
              if (*(long *)(unaff_x23 + 0x20) == 0) goto LAB_03168190;
              FUN_03199614(*(long *)(unaff_x23 + 0x20),&stack0x000001b0,0);
            }
            if ((*(long *)(unaff_x23 + 0x68) == 0) ||
               (lVar14 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar25 & 0xffffffff,*unaff_x21),
               lVar14 == 0)) goto LAB_03168190;
            if (*(float *)(lVar14 + 0x100) == 0.0) {
              if ((*(long *)(unaff_x23 + 0x68) == 0) ||
                 (lVar14 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar25 & 0xffffffff,*unaff_x21),
                 lVar14 == 0)) goto LAB_03168190;
              if (*(float *)(lVar14 + 0x104) != 0.0) goto LAB_0316a920;
              if ((*(long *)(unaff_x23 + 0x68) == 0) ||
                 (lVar14 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar25 & 0xffffffff,*unaff_x21),
                 lVar14 == 0)) goto LAB_03168190;
              if (*(float *)(lVar14 + 0x110) != 0.0) goto LAB_0316a920;
              if ((*(long *)(unaff_x23 + 0x68) == 0) ||
                 (lVar14 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar25 & 0xffffffff,*unaff_x21),
                 lVar14 == 0)) goto LAB_03168190;
              if (*(float *)(lVar14 + 0x114) != 0.0) goto LAB_0316a920;
              lVar14 = *in_stack_000000e0;
              if (lVar14 == 0) goto LAB_03168190;
              lVar20 = *(long *)(lVar14 + 0x10);
              lVar23 = *(long *)PTR_DAT_069ff178;
              *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
              if (lVar20 == 0) goto LAB_03168190;
              uVar49 = *(uint *)(lVar14 + 0x18);
              if (uVar49 < *(uint *)(lVar20 + 0x18)) {
                *(uint *)(lVar14 + 0x18) = uVar49 + 1;
                *(undefined4 *)(lVar20 + (long)(int)uVar49 * 4 + 0x20) = 0;
              }
              else {
                FUN_04059d64(0,lVar14,*(undefined8 *)
                                       (*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
              }
            }
            else {
LAB_0316a920:
              if (*(long *)(unaff_x23 + 0x68) == 0) goto LAB_03168190;
              fVar37 = *pfVar18;
              uVar50 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar25 & 0xffffffff,*unaff_x21);
              FUN_0316f6a0(fVar41 + fVar37,fVar48,uVar50,uVar50,&stack0x0000022c,&stack0x00000228,
                           &stack0x00000224,&stack0x00000218,&stack0x000001b0,&stack0x00000214);
            }
            puVar4 = PTR_DAT_069fbee0;
            lVar14 = *(long *)(unaff_x26 + 0x20);
            if (lVar14 == 0) goto LAB_03168190;
            lVar20 = *(long *)(lVar14 + 0x10);
            uVar21 = (ulong)(uint)in_stack_000001b8;
            *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
            if (lVar20 == 0) goto LAB_03168190;
            uVar49 = *(uint *)(lVar14 + 0x18);
            if (uVar49 < *(uint *)(lVar20 + 0x18)) {
              lVar20 = lVar20 + (long)(int)uVar49 * 0xc;
              *(uint *)(lVar14 + 0x18) = uVar49 + 1;
              *(undefined4 *)(lVar20 + 0x20) = uStack00000000000001b0;
              *(undefined4 *)(lVar20 + 0x24) = uStack00000000000001b4;
              *(float *)(lVar20 + 0x28) = in_stack_000001b8;
            }
            else {
              FUN_0409f624(lVar14,*(undefined8 *)
                                   (*(long *)(*(long *)(*(long *)puVar4 + 0x20) + 0xc0) + 0x70));
            }
            if (lVar13 == 0) goto LAB_03168190;
            lVar14 = *(long *)(lVar13 + 0x10);
            lVar20 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
            if (lVar14 == 0) goto LAB_03168190;
            uVar49 = *(uint *)(lVar13 + 0x18);
            if (uVar49 < *(uint *)(lVar14 + 0x18)) {
              *(uint *)(lVar13 + 0x18) = uVar49 + 1;
              *(undefined4 *)(lVar14 + (long)(int)uVar49 * 4 + 0x20) = 0;
            }
            else {
              FUN_04059d64(lVar13,*(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70)
                          );
            }
            lVar14 = *in_stack_000000b8;
            if (lVar14 == 0) goto LAB_03168190;
            lVar20 = *(long *)(lVar14 + 0x10);
            lVar23 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
            if (lVar20 == 0) goto LAB_03168190;
            uVar49 = *(uint *)(lVar14 + 0x18);
            if (uVar49 < *(uint *)(lVar20 + 0x18)) {
              *(uint *)(lVar14 + 0x18) = uVar49 + 1;
              *(undefined4 *)(lVar20 + (long)(int)uVar49 * 4 + 0x20) = 0;
            }
            else {
              FUN_04059d64(0,lVar14,*(undefined8 *)
                                     (*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
            }
            lVar14 = *(long *)(unaff_x26 + 0x28);
            if (lVar14 == 0) goto LAB_03168190;
            lVar20 = *(long *)(lVar14 + 0x10);
            lVar23 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
            if (lVar20 == 0) goto LAB_03168190;
            uVar49 = *(uint *)(lVar14 + 0x18);
            if (uVar49 < *(uint *)(lVar20 + 0x18)) {
              *(uint *)(lVar14 + 0x18) = uVar49 + 1;
              *(float *)(lVar20 + (long)(int)uVar49 * 4 + 0x20) = fVar41 / fStack00000000000001d4;
            }
            else {
              FUN_04059d64(lVar14,*(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70)
                          );
            }
          }
          uVar44 = (ulong)(uint)fStack000000000000010c;
          uVar15 = (ulong)(uint)(fVar41 + fStack000000000000010c);
        } while (fVar41 + fStack000000000000010c < fStack00000000000001d4 - fStack000000000000010c);
      }
      fStack000000000000012c = (float)uVar21;
      fStack0000000000000128 = (float)uVar44;
      if (*(char *)(unaff_x23 + 0x5d6) == '\0') {
        if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
        lVar14 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),uVar25 & 0xffffffff,
                              *(undefined8 *)PTR_DAT_06a0b440);
        fStack000000000000012c = (float)uVar21;
        fStack0000000000000128 = (float)uVar44;
        if (lVar14 == 0) goto LAB_03168190;
        if (*(int *)(lVar14 + 0x6c) == 1) {
          if (*(long *)(unaff_x26 + 0x28) == 0) goto LAB_03168190;
          iVar27 = 0;
          puVar32 = (undefined4 *)(in_stack_00000170 + 0x20 + uVar25 * 0xc);
          lVar14 = *(long *)(unaff_x26 + 0x28);
          while( true ) {
            fStack000000000000012c = (float)uVar21;
            fStack0000000000000128 = (float)uVar44;
            if (*(int *)(lVar14 + 0x18) <= iVar27) break;
            uVar21 = (ulong)*(uint *)(in_stack_00000170 + 0x18);
            if ((((uVar21 <= uVar25) || (uVar21 <= uVar31)) || (uVar21 <= uVar1)) ||
               (uVar21 <= uVar31 + 2)) goto LAB_0316f2c4;
            uVar47 = *puVar32;
            fVar45 = (float)puVar32[1];
            uVar49 = puVar32[2];
            fVar48 = *pfVar24;
            uVar54 = *(undefined4 *)(lVar11 + 0x24);
            uVar58 = *(undefined4 *)(lVar11 + 0x28);
            FUN_04059a68(lVar14,iVar27,*(undefined8 *)PTR_DAT_06a0a108);
            FUN_0316f340(uVar47,fVar45,uVar49,fVar48,uVar54,uVar58);
            unaff_x26 = &stack0x00000218;
            if (((in_stack_00000238 == 0) ||
                (uVar47 = FUN_0409f2f4(in_stack_00000238,iVar27,*(undefined8 *)PTR_DAT_069fd088),
                lVar13 == 0)) ||
               (fVar48 = (float)FUN_04059a68(lVar13,iVar27,*(undefined8 *)PTR_DAT_06a0a108),
               in_stack_00000238 == 0)) goto LAB_03168190;
            uVar44 = (ulong)(uint)(fVar45 + fVar48);
            uVar21 = (ulong)uVar49;
            FUN_0409f350(uVar47,in_stack_00000238,iVar27,*(undefined8 *)PTR_DAT_06a0b7d0);
            iVar27 = iVar27 + 1;
            lVar14 = in_stack_00000240;
            if (in_stack_00000240 == 0) goto LAB_03168190;
          }
        }
      }
      puVar4 = PTR_DAT_069fbee0;
      lVar11 = *(long *)(unaff_x26 + 0x20);
      if (lVar11 == 0) goto LAB_03168190;
      if (*(int *)(lVar11 + 0x18) == 0) {
        if (*(uint *)(in_stack_00000170 + 0x18) <= uVar1) goto LAB_0316f2c4;
        lVar13 = *(long *)(lVar11 + 0x10);
        fVar45 = *pfVar33;
        uVar47 = *(undefined4 *)(lVar12 + 0x24);
        uVar54 = *(undefined4 *)(lVar12 + 0x28);
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar13 == 0) goto LAB_03168190;
        if (*(int *)(lVar13 + 0x18) == 0) {
          FUN_0409f624(lVar11,*(undefined8 *)
                               (*(long *)(*(long *)(*(long *)puVar4 + 0x20) + 0xc0) + 0x70));
        }
        else {
          *(undefined4 *)(lVar11 + 0x18) = 1;
          *(float *)(lVar13 + 0x20) = fVar45;
          *(undefined4 *)(lVar13 + 0x24) = uVar47;
          *(undefined4 *)(lVar13 + 0x28) = uVar54;
        }
        if (*(uint *)(in_stack_00000170 + 0x18) <= uVar1) goto LAB_0316f2c4;
        fVar48 = *pfVar33;
        fVar45 = *(float *)(lVar12 + 0x24);
        fStack000000000000012c = *(float *)(lVar12 + 0x28);
        if (DAT_06db4c77 == '\0') {
          FUN_02d965b8(PTR_DAT_069fbb48);
          DAT_06db4c77 = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        fVar45 = in_stack_0000027c - fVar45;
        lVar11 = *(long *)(unaff_x26 + 0x28);
        fStack000000000000012c = fStack0000000000000164 - fStack000000000000012c;
        fStack0000000000000128 = fStack000000000000012c * fStack000000000000012c;
        fStack00000000000001d4 =
             SQRT(fStack0000000000000128 +
                  (in_stack_00000278 - fVar48) * (in_stack_00000278 - fVar48) + fVar45 * fVar45);
        if (lVar11 == 0) goto LAB_03168190;
        lVar13 = *(long *)(lVar11 + 0x10);
        lVar14 = *(long *)PTR_DAT_069ff178;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar13 == 0) goto LAB_03168190;
        uVar49 = *(uint *)(lVar11 + 0x18);
        if (uVar49 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar11 + 0x18) = uVar49 + 1;
          *(undefined4 *)(lVar13 + (long)(int)uVar49 * 4 + 0x20) = 0x3f800000;
        }
        else {
          FUN_04059d64(0x3f800000,lVar11,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
        lVar11 = *in_stack_000000e0;
        if (lVar11 == 0) goto LAB_03168190;
        lVar13 = *(long *)(lVar11 + 0x10);
        lVar14 = *(long *)PTR_DAT_069ff178;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar13 == 0) goto LAB_03168190;
        uVar49 = *(uint *)(lVar11 + 0x18);
        if (uVar49 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar11 + 0x18) = uVar49 + 1;
          *(undefined4 *)(lVar13 + (long)(int)uVar49 * 4 + 0x20) = 0;
        }
        else {
          FUN_04059d64(0,lVar11,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
        lVar11 = *in_stack_000000b8;
        if (lVar11 == 0) goto LAB_03168190;
        lVar13 = *(long *)(lVar11 + 0x10);
        lVar14 = *(long *)PTR_DAT_069ff178;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar13 == 0) goto LAB_03168190;
        uVar49 = *(uint *)(lVar11 + 0x18);
        if (uVar49 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar11 + 0x18) = uVar49 + 1;
          *(undefined4 *)(lVar13 + (long)(int)uVar49 * 4 + 0x20) = 0;
        }
        else {
          FUN_04059d64(0,lVar11,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
      }
      unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
      puVar4 = PTR_DAT_069fd088;
      plVar26 = (long *)PTR_DAT_069fb978;
      lVar11 = *(long *)(unaff_x26 + 0x20);
      if (lVar11 == 0) goto LAB_03168190;
      unaff_x29 = &PTR_FUN_06db4000;
      if (0 < *(int *)(lVar11 + 0x18)) {
        fVar45 = (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -1,
                                     *(undefined8 *)PTR_DAT_069fd088);
        if (*(uint *)(in_stack_00000170 + 0x18) <= uVar1) goto LAB_0316f2c4;
        fVar48 = fStack0000000000000128 - *(float *)(lVar12 + 0x24);
        fStack000000000000012c = fStack000000000000012c - *(float *)(lVar12 + 0x28);
        fStack0000000000000128 = in_stack_000000a0._4_4_;
        if (in_stack_000000a0._4_4_ <=
            fStack000000000000012c * fStack000000000000012c +
            (fVar45 - *pfVar33) * (fVar45 - *pfVar33) + fVar48 * fVar48) {
          lVar11 = *(long *)(unaff_x26 + 0x20);
          if (lVar11 == 0) goto LAB_03168190;
          fVar45 = in_stack_000000a0._4_4_;
          fVar48 = (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -1,*(undefined8 *)puVar4);
          if (*(uint *)(in_stack_00000170 + 0x18) <= uVar1) goto LAB_0316f2c4;
          fVar36 = *pfVar33;
          fVar43 = *(float *)(lVar12 + 0x24);
          fVar37 = *(float *)(lVar12 + 0x28);
          if (DAT_06db4c77 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c77 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          puVar5 = PTR_DAT_069fbee0;
          fVar45 = fVar45 - fVar43;
          lVar11 = *(long *)(unaff_x26 + 0x20);
          fStack000000000000012c = fStack000000000000012c - fVar37;
          if (fVar34 <= SQRT(fStack000000000000012c * fStack000000000000012c +
                             (fVar48 - fVar36) * (fVar48 - fVar36) + fVar45 * fVar45)) {
            if (*(uint *)(in_stack_00000170 + 0x18) <= uVar1) goto LAB_0316f2c4;
            if (lVar11 == 0) goto LAB_03168190;
            lVar13 = *(long *)(lVar11 + 0x10);
            fVar45 = *pfVar33;
            fVar48 = *(float *)(lVar12 + 0x24);
            fStack000000000000012c = *(float *)(lVar12 + 0x28);
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar13 == 0) goto LAB_03168190;
            uVar49 = *(uint *)(lVar11 + 0x18);
            if (uVar49 < *(uint *)(lVar13 + 0x18)) {
              lVar13 = lVar13 + (long)(int)uVar49 * 0xc;
              *(uint *)(lVar11 + 0x18) = uVar49 + 1;
              *(float *)(lVar13 + 0x20) = fVar45;
              *(float *)(lVar13 + 0x24) = fVar48;
              *(float *)(lVar13 + 0x28) = fStack000000000000012c;
            }
            else {
              FUN_0409f624(lVar11,*(undefined8 *)
                                   (*(long *)(*(long *)(*(long *)puVar5 + 0x20) + 0xc0) + 0x70));
            }
            fVar45 = fStack00000000000001d4;
            lVar11 = *(long *)(unaff_x26 + 0x20);
            if (lVar11 == 0) goto LAB_03168190;
            fVar36 = (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -1,*(undefined8 *)puVar4);
            if (*(uint *)(in_stack_00000170 + 0x18) <= uVar1) goto LAB_0316f2c4;
            fVar37 = *pfVar33;
            fVar53 = *(float *)(lVar12 + 0x24);
            fVar43 = *(float *)(lVar12 + 0x28);
            if (DAT_06db4c77 == '\0') {
              FUN_02d965b8(PTR_DAT_069fbb48);
              DAT_06db4c77 = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            fVar48 = fVar48 - fVar53;
            lVar11 = *(long *)(unaff_x26 + 0x28);
            fStack000000000000012c = fStack000000000000012c - fVar43;
            fStack0000000000000128 = fStack000000000000012c * fStack000000000000012c;
            fStack00000000000001d4 =
                 fVar45 + SQRT(fStack0000000000000128 +
                               (fVar36 - fVar37) * (fVar36 - fVar37) + fVar48 * fVar48);
            if (lVar11 == 0) goto LAB_03168190;
            lVar12 = *(long *)(lVar11 + 0x10);
            lVar13 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar12 == 0) goto LAB_03168190;
            uVar49 = *(uint *)(lVar11 + 0x18);
            if (uVar49 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar49 + 1;
              *(undefined4 *)(lVar12 + (long)(int)uVar49 * 4 + 0x20) = 0x3f800000;
            }
            else {
              FUN_04059d64(0x3f800000,lVar11,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
            lVar11 = *in_stack_000000e0;
            if (lVar11 == 0) goto LAB_03168190;
            lVar12 = *(long *)(lVar11 + 0x10);
            lVar13 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar12 == 0) goto LAB_03168190;
            uVar49 = *(uint *)(lVar11 + 0x18);
            if (uVar49 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar49 + 1;
              *(undefined4 *)(lVar12 + (long)(int)uVar49 * 4 + 0x20) = 0;
            }
            else {
              FUN_04059d64(0,lVar11,*(undefined8 *)
                                     (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
          }
          else {
            if (lVar11 == 0) goto LAB_03168190;
            if (*(uint *)(in_stack_00000170 + 0x18) <= uVar1) goto LAB_0316f2c4;
            fStack000000000000012c = *(float *)(lVar12 + 0x28);
            fStack0000000000000128 = *(float *)(lVar12 + 0x24);
            FUN_0409f350(*pfVar33,lVar11,*(int *)(lVar11 + 0x18) + -1,
                         *(undefined8 *)PTR_DAT_06a0b7d0);
            lVar11 = *(long *)(unaff_x26 + 0x28);
            if (lVar11 == 0) goto LAB_03168190;
            FUN_04059abc(0x3f800000,lVar11,*(int *)(lVar11 + 0x18) + -1,
                         *(undefined8 *)PTR_DAT_06a0b5c0);
          }
        }
      }
      lVar11 = *(long *)(unaff_x26 + 0x20);
      if (lVar11 == 0) goto LAB_03168190;
      iVar27 = *(int *)(lVar11 + 0x18);
      in_stack_00000278 = (float)FUN_0409f2f4(lVar11,iVar27 + -1,*(undefined8 *)PTR_DAT_069fd088);
      lVar11 = *(long *)(in_stack_00000148 + 0x2c8);
      _fStack0000000000000130 = (ulong)(uint)in_stack_00000278;
      *(float *)(in_stack_00000148 + 0x2c0) =
           *(float *)(in_stack_00000148 + 0x2c0) + fStack00000000000001d4;
      if (lVar11 == 0) goto LAB_03168190;
      lVar12 = *(long *)(lVar11 + 0x10);
      lVar13 = *(long *)PTR_DAT_069fc3e0;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (lVar12 == 0) goto LAB_03168190;
      uVar49 = *(uint *)(lVar11 + 0x18);
      iStack00000000000000d4 = iVar27 + iStack00000000000000d4;
      if (uVar49 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(lVar11 + 0x18) = uVar49 + 1;
        *(int *)(lVar12 + (long)(int)uVar49 * 4 + 0x20) = iStack00000000000000d4;
      }
      else {
        FUN_03fb3e1c(lVar11,iStack00000000000000d4,
                     *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
      }
      if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
         (lVar11 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),uVar25 & 0xffffffff,*unaff_x21),
         lVar11 == 0)) goto LAB_03168190;
      iStack0000000000000108 = *(int *)(lVar11 + 0x6c);
      unaff_x23 = in_stack_00000148;
      in_stack_0000027c = fStack0000000000000128;
      in_stack_00000280 = fStack000000000000012c;
    }
LAB_0316c620:
    if ((*(long *)(unaff_x23 + 0x68) == 0) ||
       (lVar11 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar25 & 0xffffffff,*unaff_x21),
       fVar45 = fStack00000000000001d4, lVar11 == 0)) goto LAB_03168190;
    if (*(char *)(lVar11 + 0xb8) != '\0') {
      if (*(long *)(unaff_x23 + 0x68) == 0) goto LAB_03168190;
      uVar16 = *(undefined8 *)(unaff_x23 + 0x20);
      uVar50 = *(undefined8 *)(unaff_x26 + 0x28);
      uVar47 = *(undefined4 *)(unaff_x23 + 0x128);
      lVar11 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar31 & 0xffffffff,
                            *(undefined8 *)PTR_DAT_06a0b440);
      if (lVar11 == 0) goto LAB_03168190;
      FUN_031098f4(uVar47,fStack000000000000006c,fVar45,uVar16,&stack0x00000238,uVar50,
                   &stack0x00000248,*(undefined1 *)(lVar11 + 0xb8),*(undefined8 *)(unaff_x26 + 0x78)
                   ,in_stack_00000070,in_stack_000000e0);
      unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
      unaff_x23 = in_stack_00000148;
    }
    if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
    FUN_0409f858(*(long *)(unaff_x26 + 0x78),*(undefined8 *)(unaff_x26 + 0x20),
                 *(undefined8 *)PTR_DAT_06a0b3a0);
    if (*in_stack_00000078 == 0) goto LAB_03168190;
    FUN_04059f70(*in_stack_00000078,*(undefined8 *)(unaff_x26 + 0x28),
                 *(undefined8 *)PTR_DAT_06a0b3d8);
    fVar48 = fStack0000000000000088;
    fVar45 = in_stack_00000080._4_4_;
    FUN_0316fb80(fStack000000000000008c,unaff_x23,extraout_x1,uVar31 & 0xffffffff,in_stack_00000170,
                 &stack0x00000268,0,*(undefined8 *)(unaff_x26 + 0x78));
    if (iVar30 + 3 < *(int *)(in_stack_00000170 + 0x18)) {
      FUN_0317018c(unaff_x23,*(undefined8 *)(unaff_x23 + 0x68),uVar31 & 0xffffffff,in_stack_00000170
                   ,&stack0x00000258,0);
    }
    puVar5 = PTR_DAT_069ff178;
    puVar4 = PTR_DAT_069fd088;
    lVar11 = *in_stack_00000090;
    if (lVar11 == 0) goto LAB_03168190;
    lVar12 = *(long *)(lVar11 + 0x10);
    fVar36 = *pfVar18;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (lVar12 == 0) goto LAB_03168190;
    uVar49 = *(uint *)(lVar11 + 0x18);
    if (uVar49 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(lVar11 + 0x18) = uVar49 + 1;
      *(float *)(lVar12 + (long)(int)uVar49 * 4 + 0x20) = fVar36;
    }
    else {
      FUN_04059d64(lVar11,*(undefined8 *)
                           (*(long *)(*(long *)(*(long *)puVar5 + 0x20) + 0xc0) + 0x70));
    }
    if ((long)uVar31 < (long)*(int *)(in_stack_00000098 + 0x18)) {
      lVar11 = FUN_0400ff1c(in_stack_00000098,uVar31 & 0xffffffff,*unaff_x21);
      lVar12 = FUN_0400ff1c(in_stack_00000098,uVar31 & 0xffffffff,*unaff_x21);
      lVar13 = *(long *)(unaff_x26 + 0x78);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      fVar36 = (float)FUN_0409f2f4(lVar13,*(int *)(lVar13 + 0x18) + -1,*(undefined8 *)puVar4);
      lVar13 = *(long *)(unaff_x26 + 0x78);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      fVar37 = fVar48;
      fVar43 = fVar45;
      fVar53 = (float)FUN_0409f2f4(lVar13,*(int *)(lVar13 + 0x18) + -2,*(undefined8 *)puVar4);
      if (DAT_06db4c75 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c75 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar36 = fVar36 - fVar53;
      fVar48 = fVar48 - fVar37;
      fVar45 = fVar45 - fVar43;
      fVar37 = SQRT(fVar45 * fVar45 + fVar36 * fVar36 + fVar48 * fVar48);
      if (fVar37 <= DAT_010fd13c) {
        if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
          FUN_02d965b8(plVar26);
          *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
        }
        pfVar24 = *(float **)(*plVar26 + 0xb8);
        fVar36 = *pfVar24;
        fVar48 = pfVar24[1];
        fVar45 = pfVar24[2];
      }
      else {
        fVar36 = fVar36 / fVar37;
        fVar48 = fVar48 / fVar37;
        fVar45 = fVar45 / fVar37;
      }
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      *(float *)(lVar12 + 0x94) = fVar36;
      *(float *)(lVar12 + 0x98) = fVar48;
      *(float *)(lVar12 + 0x9c) = fVar45;
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      *(float *)(lVar11 + 0x88) = fVar36;
      *(float *)(lVar11 + 0x8c) = fVar48;
      *(float *)(lVar11 + 0x90) = fVar45;
      unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
      unaff_x23 = in_stack_00000148;
    }
    if (uVar31 < 2) {
      if (uVar31 == 1) {
        lVar11 = FUN_0400ff1c(in_stack_00000098,0,*unaff_x21);
        lVar12 = FUN_0400ff1c(in_stack_00000098,0,*unaff_x21);
        if (*(long *)(unaff_x26 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        fVar36 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),1,*(undefined8 *)puVar4);
        if (*(long *)(unaff_x26 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        fVar37 = fVar48;
        fVar43 = fVar45;
        fVar53 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)puVar4);
        if (DAT_06db4c75 == '\0') {
          FUN_02d965b8(PTR_DAT_069fbb48);
          DAT_06db4c75 = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        fVar36 = fVar36 - fVar53;
        fVar48 = fVar48 - fVar37;
        fVar45 = fVar45 - fVar43;
        fVar37 = SQRT(fVar45 * fVar45 + fVar36 * fVar36 + fVar48 * fVar48);
        if (fVar37 <= DAT_010fd13c) {
          if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
            FUN_02d965b8(plVar26);
            *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
          }
          pfVar24 = *(float **)(*plVar26 + 0xb8);
          fVar36 = *pfVar24;
          fVar48 = pfVar24[1];
          fVar45 = pfVar24[2];
        }
        else {
          fVar36 = fVar36 / fVar37;
          fVar48 = fVar48 / fVar37;
          fVar45 = fVar45 / fVar37;
        }
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        *(float *)(lVar12 + 0x94) = fVar36;
        *(float *)(lVar12 + 0x98) = fVar48;
        *(float *)(lVar12 + 0x9c) = fVar45;
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        *(float *)(lVar11 + 0x88) = fVar36;
        *(float *)(lVar11 + 0x8c) = fVar48;
        *(float *)(lVar11 + 0x90) = fVar45;
      }
    }
    else if ((long)uVar31 < (long)*(int *)(in_stack_00000098 + 0x18)) {
      if (*(long *)(unaff_x26 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      iVar30 = *(int *)(*(long *)(unaff_x26 + 0x78) + 0x18);
      lVar11 = FUN_0400ff1c(in_stack_00000098,uVar25 & 0xffffffff,*unaff_x21);
      puVar4 = PTR_DAT_069fd088;
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(int *)(lVar11 + 0xbc) + 1 < iVar30) {
        lVar11 = FUN_0400ff1c(in_stack_00000098,uVar25 & 0xffffffff,*unaff_x21);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(int *)(lVar11 + 0x6c) != 3) {
          lVar12 = *(long *)(unaff_x26 + 0x78);
          lVar11 = FUN_0400ff1c(in_stack_00000098,uVar25 & 0xffffffff,*unaff_x21);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          fVar43 = (float)FUN_0409f2f4(lVar12,*(int *)(lVar11 + 0xbc) + 1,*(undefined8 *)puVar4);
          lVar12 = *(long *)(unaff_x26 + 0x78);
          fVar36 = fVar48;
          fVar37 = fVar45;
          lVar11 = FUN_0400ff1c(in_stack_00000098,uVar25 & 0xffffffff,*unaff_x21);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          fVar53 = (float)FUN_0409f2f4(lVar12,*(undefined4 *)(lVar11 + 0xbc),*(undefined8 *)puVar4);
          lVar11 = FUN_0400ff1c(in_stack_00000098,uVar25 & 0xffffffff,*unaff_x21);
          if (DAT_06db4c75 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c75 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fVar57 = DAT_010fd13c;
          fVar43 = fVar43 - fVar53;
          fVar53 = fVar48 - fVar36;
          fVar37 = fVar45 - fVar37;
          fVar45 = SQRT(fVar37 * fVar37 + fVar43 * fVar43 + fVar53 * fVar53);
          if (fVar45 <= DAT_010fd13c) {
            if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
              FUN_02d965b8(plVar26);
              *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
            }
            pfVar24 = *(float **)(*plVar26 + 0xb8);
            fVar41 = *pfVar24;
            fVar53 = pfVar24[1];
            fVar45 = pfVar24[2];
          }
          else {
            fVar41 = fVar43 / fVar45;
            fVar53 = fVar53 / fVar45;
            fVar45 = fVar37 / fVar45;
          }
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          *(float *)(lVar11 + 0x88) = fVar41;
          *(float *)(lVar11 + 0x8c) = fVar53;
          uVar16 = *unaff_x21;
          *(float *)(lVar11 + 0x90) = fVar45;
          uVar49 = *(uint *)(in_stack_00000098 + 0x18);
          lVar11 = FUN_0400ff1c(in_stack_00000098,uVar25 & 0xffffffff,uVar16);
          if (uVar31 != uVar49) {
            fVar48 = fVar36;
          }
          if (DAT_06db4c75 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c75 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fVar48 = fVar48 - fVar36;
          fVar36 = SQRT(fVar37 * fVar37 + fVar43 * fVar43 + fVar48 * fVar48);
          if (fVar36 <= fVar57) {
            if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
              FUN_02d965b8(plVar26);
              *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
            }
            uVar16 = **(undefined8 **)(*plVar26 + 0xb8);
            fVar37 = *(float *)(*(undefined8 **)(*plVar26 + 0xb8) + 1);
          }
          else {
            fVar37 = fVar37 / fVar36;
            uVar16 = CONCAT44(fVar48 / fVar36,fVar43 / fVar36);
            fVar45 = fVar43;
          }
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          *(undefined8 *)(lVar11 + 0x94) = uVar16;
          *(float *)(lVar11 + 0x9c) = fVar37;
        }
      }
    }
    if ((long)uVar31 < (long)*(int *)(in_stack_00000098 + 0x18)) {
      lVar11 = FUN_0400ff1c(in_stack_00000098,uVar31 & 0xffffffff,*unaff_x21);
      lVar12 = FUN_0400ff1c(in_stack_00000098,uVar31 & 0xffffffff,*unaff_x21);
      if ((lVar12 == 0) || (lVar11 == 0)) goto LAB_03168190;
      uVar16 = *(undefined8 *)(lVar12 + 0x48);
      *(undefined4 *)(lVar11 + 0x5c) = *(undefined4 *)(lVar12 + 0x50);
      *(undefined8 *)(lVar11 + 0x54) = uVar16;
    }
    uVar31 = uVar1;
    unaff_x25 = in_stack_00000098;
    if ((long)(*(int *)(in_stack_00000170 + 0x18) + -2) <= (long)uVar1) goto LAB_0316df74;
    goto LAB_03169d3c;
  }
LAB_0316df74:
  if (*(char *)(unaff_x23 + 0x84) == '\0') {
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
    if ((*(long *)(unaff_x26 + 0x78) == 0) || (lVar11 == 0)) goto LAB_03168190;
    uVar16 = *unaff_x21;
    *(undefined4 *)(lVar11 + 0xbc) = *(undefined4 *)(*(long *)(unaff_x26 + 0x78) + 0x18);
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,uVar16);
    if (lVar11 == 0) goto LAB_03168190;
    uVar16 = *unaff_x21;
    *(float *)(lVar11 + 0xc0) = *pfVar18;
    lVar11 = FUN_0400ff1c(unaff_x25,0,uVar16);
    if (lVar11 == 0) goto LAB_03168190;
    uVar16 = *unaff_x21;
    *(undefined4 *)(lVar11 + 0xbc) = 0;
    lVar11 = FUN_0400ff1c(unaff_x25,0,uVar16);
    if (lVar11 == 0) goto LAB_03168190;
    *(undefined4 *)(lVar11 + 0xc0) = 0;
    if (*(int *)(unaff_x25 + 0x18) < 3) goto LAB_0316ea6c;
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
    fVar45 = *pfVar18;
    lVar12 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
    if ((lVar12 == 0) || (lVar11 == 0)) goto LAB_03168190;
    uVar16 = *unaff_x21;
    *(float *)(lVar11 + 200) = fVar45 - *(float *)(lVar12 + 0xc0);
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,uVar16);
    if (lVar11 == 0) goto LAB_03168190;
    fVar45 = *(float *)(lVar11 + 200);
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
    lVar12 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
    if (1000.0 <= fVar45) {
      if (lVar12 == 0) goto LAB_03168190;
      fStack00000000000001d0 = *(float *)(lVar12 + 200) / 1000.0;
      uVar16 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
      uVar16 = FUN_05362cb4(uVar16,*(undefined8 *)PTR_DAT_06a0c488,0);
    }
    else {
      if (lVar12 == 0) goto LAB_03168190;
      uVar16 = FUN_054fad00(lVar12 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
      uVar16 = FUN_05362cb4(uVar16,*(undefined8 *)PTR_DAT_06a0c4f0,0);
    }
    if (lVar11 == 0) goto LAB_03168190;
    *(undefined8 *)(lVar11 + 0xd0) = uVar16;
    LeanTween__value((undefined8 *)(lVar11 + 0xd0),uVar16);
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
    if (lVar11 == 0) goto LAB_03168190;
    fVar34 = *(float *)(lVar11 + 0x4c);
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
    if (lVar11 == 0) goto LAB_03168190;
    fVar35 = *(float *)(lVar11 + 0x4c);
    fVar45 = fVar34 - fVar35;
    if (DAT_06db4ece == '\0') {
      FUN_02d965b8(PTR_DAT_069fbb48);
      DAT_06db4ece = '\x01';
    }
    puVar4 = PTR_DAT_069fbb48;
    if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    fVar48 = 0.0;
    fVar40 = SQRT((fVar62 * fVar62 + fVar45 * fVar45) * DAT_010fd194);
    fVar45 = DAT_010fcd14;
    if (DAT_010fcd14 <= fVar40) {
      fVar45 = -1.0;
      fVar40 = (fVar62 * 0.0 + ABS(fVar34 - fVar35) * 50.0 + 0.0) / fVar40;
      fVar62 = 1.0;
      if (fVar40 <= 1.0) {
        fVar62 = fVar40;
      }
      fVar34 = -1.0;
      if (-1.0 <= fVar40) {
        fVar34 = fVar62;
      }
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        fVar45 = -1.0;
        thunk_FUN_02df485c();
      }
      dVar42 = acos((double)fVar34);
      fVar48 = (float)dVar42 * DAT_010fcf40;
    }
    fVar48 = 90.0 - fVar48;
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
    if (fVar48 <= 10.0) {
      uVar16 = FUN_054fad00(&stack0x00000234,*(undefined8 *)PTR_DAT_06a0c498,0);
    }
    else {
      dVar42 = modf((double)fVar48,(double *)&stack0x00000298);
      if (0.0 <= fVar48) {
        if (dVar42 == 0.5) {
          dVar42 = *(double *)(unaff_x26 + 0x80);
          fVar45 = 1.0;
          goto LAB_0316e5fc;
        }
        fStack00000000000001d0 = (float)(int)(fVar48 + 0.5);
      }
      else if (dVar42 == -0.5) {
        dVar42 = *(double *)(unaff_x26 + 0x80);
        fVar45 = -1.0;
LAB_0316e5fc:
        fStack00000000000001d0 = (float)dVar42;
        if (((long)dVar42 & 1U) != 0) {
          fStack00000000000001d0 = (float)dVar42 + fVar45;
        }
      }
      else {
        fStack00000000000001d0 = (float)(int)(fVar48 + -0.5);
      }
      uVar16 = FUN_054fabf8(&stack0x000001d0,0);
    }
    if (lVar11 == 0) goto LAB_03168190;
    *(undefined8 *)(lVar11 + 0xd8) = uVar16;
    LeanTween__value((undefined8 *)(lVar11 + 0xd8),uVar16);
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
    if (lVar11 == 0) goto LAB_03168190;
    fVar62 = *(float *)(lVar11 + 0x4c);
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
    if (lVar11 == 0) goto LAB_03168190;
    fVar34 = *(float *)(lVar11 + 0x4c);
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
    if (lVar11 == 0) goto LAB_03168190;
    fVar35 = *(float *)(lVar11 + 0x48);
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
    if (lVar11 == 0) goto LAB_03168190;
    fVar40 = *(float *)(lVar11 + 0x50);
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
    if (lVar11 == 0) goto LAB_03168190;
    fVar48 = *(float *)(lVar11 + 0x48);
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
    if (lVar11 == 0) goto LAB_03168190;
    fVar36 = *(float *)(lVar11 + 0x50);
    if (DAT_06db4c77 == '\0') {
      FUN_02d965b8(PTR_DAT_069fbb48);
      DAT_06db4c77 = '\x01';
    }
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    fVar40 = fVar40 - fVar36;
    fVar35 = fVar35 - fVar48;
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
    fStack00000000000001d0 =
         (ABS(fVar62 - fVar34) / SQRT(fVar35 * fVar35 + fVar40 * fVar40)) * 100.0;
    uVar16 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c498,0);
joined_r0x0316ea54:
    if (lVar11 == 0) goto LAB_03168190;
    *(undefined8 *)(lVar11 + 0xe0) = uVar16;
    LeanTween__value((undefined8 *)(lVar11 + 0xe0),uVar16);
  }
  else {
    lVar11 = FUN_0400ff1c(unaff_x25,0,*unaff_x21);
    if ((*(long *)(unaff_x26 + 0x78) == 0) || (lVar11 == 0)) goto LAB_03168190;
    uVar16 = *unaff_x21;
    *(undefined4 *)(lVar11 + 0xbc) = *(undefined4 *)(*(long *)(unaff_x26 + 0x78) + 0x18);
    lVar11 = FUN_0400ff1c(unaff_x25,0,uVar16);
    if (lVar11 == 0) goto LAB_03168190;
    *(float *)(lVar11 + 0xc0) = *pfVar18;
    if (2 < *(int *)(unaff_x25 + 0x18)) {
      lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
      fVar45 = *pfVar18;
      lVar12 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
      if ((lVar12 == 0) || (lVar11 == 0)) goto LAB_03168190;
      uVar16 = *unaff_x21;
      *(float *)(lVar11 + 200) = fVar45 - *(float *)(lVar12 + 0xc0);
      lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,uVar16);
      if (lVar11 == 0) goto LAB_03168190;
      fVar45 = *(float *)(lVar11 + 200);
      lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
      lVar12 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
      if (1000.0 <= fVar45) {
        if (lVar12 == 0) goto LAB_03168190;
        fStack00000000000001d0 = *(float *)(lVar12 + 200) / 1000.0;
        uVar16 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
        uVar16 = FUN_05362cb4(uVar16,*(undefined8 *)PTR_DAT_06a0c488,0);
      }
      else {
        if (lVar12 == 0) goto LAB_03168190;
        uVar16 = FUN_054fad00(lVar12 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
        uVar16 = FUN_05362cb4(uVar16,*(undefined8 *)PTR_DAT_06a0c4f0,0);
      }
      if (lVar11 == 0) goto LAB_03168190;
      *(undefined8 *)(lVar11 + 0xd0) = uVar16;
      LeanTween__value((undefined8 *)(lVar11 + 0xd0),uVar16);
      lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
      if (lVar11 == 0) goto LAB_03168190;
      fVar34 = *(float *)(lVar11 + 0x4c);
      lVar11 = FUN_0400ff1c(unaff_x25,0,*unaff_x21);
      if (lVar11 == 0) goto LAB_03168190;
      fVar35 = *(float *)(lVar11 + 0x4c);
      fVar45 = fVar34 - fVar35;
      if (DAT_06db4ece == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4ece = '\x01';
      }
      puVar4 = PTR_DAT_069fbb48;
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar48 = 0.0;
      fVar40 = SQRT((fVar62 * fVar62 + fVar45 * fVar45) * DAT_010fd194);
      fVar45 = DAT_010fcd14;
      if (DAT_010fcd14 <= fVar40) {
        fVar45 = -1.0;
        fVar40 = (fVar62 * 0.0 + ABS(fVar34 - fVar35) * 50.0 + 0.0) / fVar40;
        fVar62 = 1.0;
        if (fVar40 <= 1.0) {
          fVar62 = fVar40;
        }
        fVar34 = -1.0;
        if (-1.0 <= fVar40) {
          fVar34 = fVar62;
        }
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          fVar45 = -1.0;
          thunk_FUN_02df485c();
        }
        dVar42 = acos((double)fVar34);
        fVar48 = (float)dVar42 * DAT_010fcf40;
      }
      fVar48 = 90.0 - fVar48;
      lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
      if (fVar48 <= 10.0) {
        uVar16 = FUN_054fad00(&stack0x00000234,*(undefined8 *)PTR_DAT_06a0c498,0);
      }
      else {
        dVar42 = modf((double)fVar48,(double *)&stack0x00000298);
        if (0.0 <= fVar48) {
          if (dVar42 == 0.5) {
            dVar42 = *(double *)(unaff_x26 + 0x80);
            fVar45 = 1.0;
            goto LAB_0316e5d0;
          }
          fStack00000000000001d0 = (float)(int)(fVar48 + 0.5);
        }
        else if (dVar42 == -0.5) {
          dVar42 = *(double *)(unaff_x26 + 0x80);
          fVar45 = -1.0;
LAB_0316e5d0:
          fStack00000000000001d0 = (float)dVar42;
          if (((long)dVar42 & 1U) != 0) {
            fStack00000000000001d0 = (float)dVar42 + fVar45;
          }
        }
        else {
          fStack00000000000001d0 = (float)(int)(fVar48 + -0.5);
        }
        uVar16 = FUN_054fabf8(&stack0x000001d0,0);
      }
      if (lVar11 == 0) goto LAB_03168190;
      *(undefined8 *)(lVar11 + 0xd8) = uVar16;
      LeanTween__value((undefined8 *)(lVar11 + 0xd8),uVar16);
      lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
      if (lVar11 == 0) goto LAB_03168190;
      fVar62 = *(float *)(lVar11 + 0x4c);
      lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
      if (lVar11 == 0) goto LAB_03168190;
      fVar34 = *(float *)(lVar11 + 0x4c);
      lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
      if (lVar11 == 0) goto LAB_03168190;
      fVar35 = *(float *)(lVar11 + 0x48);
      lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
      if (lVar11 == 0) goto LAB_03168190;
      fVar40 = *(float *)(lVar11 + 0x50);
      lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
      if (lVar11 == 0) goto LAB_03168190;
      fVar48 = *(float *)(lVar11 + 0x48);
      lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
      if (lVar11 == 0) goto LAB_03168190;
      fVar36 = *(float *)(lVar11 + 0x50);
      if (DAT_06db4c77 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c77 = '\x01';
      }
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar40 = fVar40 - fVar36;
      fVar35 = fVar35 - fVar48;
      lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
      fStack00000000000001d0 =
           (ABS(fVar62 - fVar34) / SQRT(fVar35 * fVar35 + fVar40 * fVar40)) * 100.0;
      uVar16 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c498,0);
      goto joined_r0x0316ea54;
    }
  }
LAB_0316ea6c:
  fVar62 = 1000.0;
  if (1000.0 <= *pfVar18) {
    fVar62 = 1000.0;
    fStack00000000000001d0 = *pfVar18 / 1000.0;
    uVar16 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
    puVar19 = (undefined8 *)PTR_DAT_06a0c488;
  }
  else {
    uVar16 = FUN_054fad00(pfVar18,*(undefined8 *)PTR_DAT_06a0c498,0);
    puVar19 = (undefined8 *)PTR_DAT_06a0c4f0;
  }
  uVar16 = FUN_05362cb4(uVar16,*puVar19,0);
  *(undefined8 *)(unaff_x23 + 0x2d0) = uVar16;
  LeanTween__value(unaff_x23 + 0x2d0,uVar16);
  if (*(int *)(unaff_x25 + 0x18) == 2) {
    lVar11 = FUN_0400ff1c(unaff_x25,0,*unaff_x21);
    if (lVar11 == 0) goto LAB_03168190;
    fVar34 = *(float *)(lVar11 + 200);
    lVar11 = FUN_0400ff1c(unaff_x25,0,*unaff_x21);
    lVar12 = FUN_0400ff1c(unaff_x25,0,*unaff_x21);
    if (1000.0 <= fVar34) {
      if (lVar12 == 0) goto LAB_03168190;
      fVar62 = 1000.0;
      fStack00000000000001d0 = *(float *)(lVar12 + 200) / 1000.0;
      uVar16 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
      uVar16 = FUN_05362cb4(uVar16,*(undefined8 *)PTR_DAT_06a0c488,0);
    }
    else {
      if (lVar12 == 0) goto LAB_03168190;
      uVar16 = FUN_054fad00(lVar12 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
      uVar16 = FUN_05362cb4(uVar16,*(undefined8 *)PTR_DAT_06a0c4f0,0);
    }
    if (lVar11 == 0) goto LAB_03168190;
    *(undefined8 *)(lVar11 + 0xd0) = uVar16;
    LeanTween__value((undefined8 *)(lVar11 + 0xd0),uVar16);
  }
  if (*(char *)(unaff_x23 + 0x84) == '\0') {
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
    if (lVar11 == 0) goto LAB_03168190;
    *(undefined8 *)(lVar11 + 0xd0) = *(undefined8 *)PTR_DAT_069fcde0;
    LeanTween__value();
  }
  puVar5 = PTR_DAT_06a0b440;
  puVar4 = PTR_DAT_069fd088;
  fVar34 = fVar62;
  if (iStack0000000000000058 != 0) {
    if (*(long *)(unaff_x26 + 0x78) != 0) {
      fVar35 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)PTR_DAT_069fd088);
      if (*(long *)(unaff_x26 + 0x78) != 0) {
        FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)puVar4);
        lVar11 = FUN_0400ff1c(unaff_x25,0,*(undefined8 *)puVar5);
        puVar6 = PTR_DAT_06a0b7d0;
        puVar5 = PTR_DAT_069fbb48;
        if (lVar11 != 0) {
          lVar12 = *(long *)(unaff_x26 + 0x78);
          fVar34 = *(float *)(lVar11 + 200) * 0.5;
          fVar40 = 5.0;
          if (fVar34 <= 5.0) {
            fVar40 = fVar34;
          }
          if (lVar12 != 0) {
            uVar25 = (ulong)(uint)fStack0000000000000054;
            iVar30 = 1;
            fVar35 = fStack0000000000000050 * 10.0 + fVar35;
            uVar31 = (ulong)(uint)fVar35;
            fVar48 = fStack0000000000000054 * 10.0 + fVar45;
            fVar36 = 0.0;
            do {
              fVar45 = (float)uVar25;
              fVar34 = (float)uVar31;
              if (*(int *)(lVar12 + 0x18) <= iVar30) goto LAB_0316ee54;
              fVar37 = (float)FUN_0409f2f4(lVar12,iVar30 + -1,*(undefined8 *)puVar4);
              if (*(long *)(unaff_x26 + 0x78) == 0) break;
              fVar43 = fVar34;
              fVar53 = fVar45;
              fVar57 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar30,*(undefined8 *)puVar4)
              ;
              if (DAT_06db4c77 == '\0') {
                FUN_02d965b8(puVar5);
                DAT_06db4c77 = '\x01';
              }
              if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              fVar43 = fVar34 - fVar43;
              fVar45 = fVar45 - fVar53;
              fVar34 = fVar45 * fVar45;
              fVar36 = fVar36 + SQRT(fVar34 + (fVar37 - fVar57) * (fVar37 - fVar57) +
                                              fVar43 * fVar43);
              if (fVar40 < fVar36) goto LAB_0316ee54;
              if (*(long *)(unaff_x26 + 0x78) == 0) break;
              uVar47 = FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)puVar4);
              if (*(long *)(unaff_x26 + 0x78) == 0) break;
              FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar30,*(undefined8 *)puVar4);
              fVar34 = (float)FUN_031765b0(uVar47,fVar34,fVar45,fVar35,fVar62,fVar48,0);
              if (*(long *)(unaff_x26 + 0x78) == 0) break;
              fVar43 = fVar45;
              fVar53 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar30,*(undefined8 *)puVar4)
              ;
              fVar57 = fVar36 / fVar40;
              fVar37 = 1.0;
              if (fVar57 <= 1.0) {
                fVar37 = fVar57;
              }
              uVar31 = (ulong)(uint)fVar37;
              fVar41 = 0.0;
              if (0.0 <= fVar57) {
                fVar41 = fVar37;
              }
              if (*(long *)(unaff_x26 + 0x78) == 0) break;
              FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar30,*(undefined8 *)puVar4);
              if (*(long *)(unaff_x26 + 0x78) == 0) break;
              uVar25 = (ulong)(uint)(fVar45 + fVar41 * (fVar43 - fVar45));
              FUN_0409f350(fVar34 + fVar41 * (fVar53 - fVar34),*(long *)(unaff_x26 + 0x78),iVar30,
                           *(undefined8 *)puVar6);
              lVar12 = *(long *)(unaff_x26 + 0x78);
              iVar30 = iVar30 + 1;
            } while (lVar12 != 0);
          }
        }
      }
    }
    goto LAB_03168190;
  }
LAB_0316ee54:
  puVar4 = PTR_DAT_069fd088;
  if (in_stack_00000048._4_4_ != 0) {
    lVar11 = *(long *)(unaff_x26 + 0x78);
    if (lVar11 == 0) goto LAB_03168190;
    fVar62 = (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -1,*(undefined8 *)PTR_DAT_069fd088
                                );
    puVar5 = PTR_DAT_06a0b440;
    if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
    fVar35 = fVar34;
    FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)puVar4);
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*(undefined8 *)puVar5);
    puVar6 = PTR_DAT_06a0b7d0;
    puVar5 = PTR_DAT_069fbb48;
    if (lVar11 == 0) goto LAB_03168190;
    fVar48 = *(float *)(lVar11 + 200) * 0.5;
    fVar40 = 5.0;
    if (fVar48 <= 5.0) {
      fVar40 = fVar48;
    }
    if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
    iVar30 = *(int *)(*(long *)(unaff_x26 + 0x78) + 0x18);
    if (0 < iVar30 + -2) {
      fVar48 = 0.0;
      iVar30 = iVar30 + -1;
      uVar31 = (ulong)(uint)fVar62;
      uVar25 = (ulong)(uint)fVar45;
      do {
        fVar37 = (float)uVar31;
        fVar36 = (float)uVar25;
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        fVar43 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar30,*(undefined8 *)puVar4);
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        iVar30 = iVar30 + -1;
        fVar53 = fVar36;
        fVar57 = fVar37;
        fVar41 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar30,*(undefined8 *)puVar4);
        if (DAT_06db4c77 == '\0') {
          FUN_02d965b8(puVar5);
          DAT_06db4c77 = '\x01';
        }
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        fVar48 = fVar48 + SQRT((fVar37 - fVar57) * (fVar37 - fVar57) +
                               (fVar43 - fVar41) * (fVar43 - fVar41) +
                               (fVar36 - fVar53) * (fVar36 - fVar53));
        if (fVar40 < fVar48) break;
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar30,*(undefined8 *)puVar4);
        fVar36 = fVar45;
        fVar37 = (float)FUN_031765b0(fVar62,fVar34,fVar45,fStack0000000000000060 * 10.0 + fVar62,
                                     fVar35,fStack000000000000005c * 10.0 + fVar45,0);
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        fVar53 = fVar36;
        fVar57 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar30,*(undefined8 *)puVar4);
        fVar41 = fVar48 / fVar40;
        fVar43 = 1.0;
        if (fVar41 <= 1.0) {
          fVar43 = fVar41;
        }
        uVar25 = (ulong)(uint)fVar43;
        fVar59 = 0.0;
        if (0.0 <= fVar41) {
          fVar59 = fVar43;
        }
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar30,*(undefined8 *)puVar4);
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        uVar31 = (ulong)(uint)(fVar36 + fVar59 * (fVar53 - fVar36));
        FUN_0409f350(fVar37 + fVar59 * (fVar57 - fVar37),*(long *)(unaff_x26 + 0x78),iVar30,
                     *(undefined8 *)puVar6);
      } while (1 < iVar30);
    }
  }
  puVar4 = PTR_DAT_06a0b440;
  lVar11 = FUN_0400ff1c(unaff_x25,0,*(undefined8 *)PTR_DAT_06a0b440);
  lVar12 = FUN_0400ff1c(unaff_x25,0,*(undefined8 *)puVar4);
  if (lVar12 != 0) {
    fVar62 = *(float *)(lVar12 + 0x94);
    lVar12 = FUN_0400ff1c(unaff_x25,0,*(undefined8 *)puVar4);
    if (lVar12 != 0) {
      fVar45 = *(float *)(lVar12 + 0x9c);
      if (DAT_06db4c75 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c75 = '\x01';
      }
      puVar5 = PTR_DAT_069fbb48;
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar34 = DAT_010fd13c;
      fVar35 = SQRT(fVar62 * fVar62 + fVar45 * fVar45);
      if (fVar35 <= DAT_010fd13c) {
        if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
          FUN_02d965b8(PTR_DAT_069fb978);
          *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
        }
        uVar16 = **(undefined8 **)(*plVar26 + 0xb8);
        fVar45 = *(float *)(*(undefined8 **)(*plVar26 + 0xb8) + 1);
      }
      else {
        fVar45 = fVar45 / fVar35;
        uVar16 = CONCAT44(0.0 / fVar35,fVar62 / fVar35);
      }
      if (lVar11 != 0) {
        *(undefined8 *)(lVar11 + 0x94) = uVar16;
        uVar16 = *(undefined8 *)puVar4;
        *(float *)(lVar11 + 0x9c) = fVar45;
        lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,uVar16);
        lVar12 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*(undefined8 *)puVar4);
        if (lVar12 != 0) {
          fVar62 = *(float *)(lVar12 + 0x94);
          lVar12 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*(undefined8 *)puVar4);
          if (lVar12 != 0) {
            fVar45 = *(float *)(lVar12 + 0x9c);
            if (DAT_06db4c75 == '\0') {
              FUN_02d965b8(PTR_DAT_069fbb48);
              DAT_06db4c75 = '\x01';
            }
            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            fVar35 = SQRT(fVar62 * fVar62 + fVar45 * fVar45);
            if (fVar35 <= fVar34) {
              if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
                FUN_02d965b8(PTR_DAT_069fb978);
                *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
              }
              uVar16 = **(undefined8 **)(*plVar26 + 0xb8);
              fVar45 = *(float *)(*(undefined8 **)(*plVar26 + 0xb8) + 1);
            }
            else {
              fVar45 = fVar45 / fVar35;
              uVar16 = CONCAT44(0.0 / fVar35,fVar62 / fVar35);
            }
            if (lVar11 != 0) {
              uVar50 = *(undefined8 *)(unaff_x26 + 0x78);
              *(undefined8 *)(lVar11 + 0x94) = uVar16;
              *(float *)(lVar11 + 0x9c) = fVar45;
              return uVar50;
            }
          }
        }
      }
    }
  }
LAB_03168190:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


