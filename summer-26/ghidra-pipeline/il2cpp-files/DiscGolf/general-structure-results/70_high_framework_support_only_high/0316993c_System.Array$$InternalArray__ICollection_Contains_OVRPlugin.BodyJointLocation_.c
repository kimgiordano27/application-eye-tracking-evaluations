/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.BodyJointLocation>
ENTRY_POINT: 0316993c
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
System_Array__InternalArray__ICollection_Contains<OVRPlugin_BodyJointLocation>(undefined8 *param_1)

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool in_ZR;
  bool bVar7;
  bool in_CY;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  long lVar11;
  ulong uVar12;
  undefined8 extraout_x1;
  ulong extraout_x1_00;
  char cVar13;
  long lVar14;
  float *pfVar15;
  undefined8 *puVar16;
  long lVar17;
  ulong uVar18;
  float *pfVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long unaff_x19;
  float *pfVar23;
  int unaff_w20;
  ulong uVar24;
  undefined8 *unaff_x21;
  long *plVar25;
  int iVar26;
  byte bVar27;
  int iVar28;
  long unaff_x23;
  int iVar29;
  long *unaff_x24;
  ulong uVar30;
  long unaff_x25;
  undefined4 *puVar31;
  undefined1 *unaff_x26;
  float *pfVar32;
  undefined8 *unaff_x28;
  undefined **unaff_x29;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  double dVar39;
  float fVar40;
  ulong uVar41;
  float fVar42;
  undefined8 uVar43;
  float fVar44;
  undefined4 uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  uint uVar49;
  undefined8 uVar50;
  float fVar51;
  float fVar52;
  undefined8 uVar53;
  float fVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  float fVar57;
  float fVar58;
  undefined4 uVar59;
  float fVar60;
  float fVar61;
  int iVar62;
  float fStack0000000000000050;
  float fStack0000000000000054;
  int iStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  long *in_stack_00000070;
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
  long in_stack_00000238;
  long in_stack_00000240;
  undefined4 in_stack_00000268;
  float in_stack_0000026c;
  float in_stack_00000270;
  float in_stack_00000278;
  float in_stack_0000027c;
  float in_stack_00000280;
  
  if (!in_CY || in_ZR) goto LAB_0316f2c4;
  uVar43 = *param_1;
  lVar11 = *(long *)(unaff_x23 + 0x68);
  *(undefined8 *)(unaff_x26 + 0x40) = *(undefined8 *)(unaff_x19 + 0x44);
  *(undefined8 *)(unaff_x26 + 0x30) = uVar43;
  if (lVar11 == 0) goto LAB_03168190;
  if (*(int *)(lVar11 + 0x18) == 0) {
    return 0;
  }
  lVar14 = *(long *)(unaff_x23 + 0x2c8);
  if (lVar14 == 0) goto LAB_03168190;
  lVar20 = *(long *)(lVar14 + 0x10);
  lVar22 = *(long *)PTR_DAT_069fc3e0;
  *(undefined4 *)(lVar14 + 0x18) = 0;
  *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 2;
  if (lVar20 == 0) goto LAB_03168190;
  if (*(int *)(lVar20 + 0x18) == 0) {
    FUN_03fb3e1c(lVar14,0,*(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
    lVar11 = *(long *)(unaff_x23 + 0x68);
    if (lVar11 == 0) goto LAB_03168190;
  }
  else {
    *(undefined4 *)(lVar14 + 0x18) = 1;
    *(undefined4 *)(lVar20 + 0x20) = 0;
  }
  lVar11 = FUN_0400ff1c(lVar11,1,*unaff_x21);
  if (lVar11 == 0) goto LAB_03168190;
  if (*(int *)(lVar11 + 0x6c) == 3) {
    if (*(long *)(unaff_x23 + 0x68) == 0) goto LAB_03168190;
    if (2 < *(int *)(*(long *)(unaff_x23 + 0x68) + 0x18)) {
      if (*(uint *)(unaff_x19 + 0x18) < 3) {
LAB_0316f2c4:
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      fVar47 = *(float *)(unaff_x19 + 0x40);
      uVar43 = *(undefined8 *)(unaff_x19 + 0x38);
      uVar50 = *(undefined8 *)(unaff_x19 + 0x2c);
      fVar51 = *(float *)(unaff_x19 + 0x34);
      if (DAT_06db4c75 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c75 = '\x01';
      }
      puVar4 = PTR_DAT_069fbb48;
      fVar44 = (float)uVar43 - (float)uVar50;
      fVar46 = (float)((ulong)uVar43 >> 0x20) - (float)((ulong)uVar50 >> 0x20);
      fVar47 = fVar47 - fVar51;
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar47 = SQRT(fVar47 * fVar47 + fVar44 * fVar44 + fVar46 * fVar46);
      if (fVar47 <= DAT_010fd13c) {
        if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
          FUN_02d965b8(PTR_DAT_069fb978);
          *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
        }
        uVar43 = **(undefined8 **)(*(long *)PTR_DAT_069fb978 + 0xb8);
      }
      else {
        uVar43 = CONCAT44(fVar46 / fVar47,fVar44 / fVar47);
      }
      if ((*(uint *)(unaff_x19 + 0x18) < 3) || (*(uint *)(unaff_x19 + 0x18) == 3))
      goto LAB_0316f2c4;
      uVar50 = *(undefined8 *)(unaff_x19 + 0x38);
      fVar47 = *(float *)(unaff_x19 + 0x40);
      uVar53 = *(undefined8 *)(unaff_x19 + 0x44);
      fVar51 = *(float *)(unaff_x19 + 0x4c);
      if (DAT_06db4c77 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c77 = '\x01';
      }
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar37 = (float)uVar50;
      fVar44 = fVar37 - (float)uVar53;
      fVar48 = (float)((ulong)uVar50 >> 0x20);
      fVar46 = fVar48 - (float)((ulong)uVar53 >> 0x20);
      fVar47 = fVar47 - fVar51;
      uVar49 = *(uint *)(unaff_x19 + 0x18);
      fVar47 = SQRT(fVar47 * fVar47 + fVar44 * fVar44 + fVar46 * fVar46);
      *(ulong *)(unaff_x26 + 0x40) =
           CONCAT44(fVar48 + (float)((ulong)uVar43 >> 0x20) * fVar47,fVar37 + (float)uVar43 * fVar47
                   );
      if ((uVar49 & 0xfffffffc) == 0) goto LAB_0316f2c4;
    }
  }
  lVar11 = *unaff_x24;
  if (lVar11 == 0) goto LAB_03168190;
  lVar14 = *(long *)(lVar11 + 0x10);
  lVar20 = *(long *)PTR_DAT_069ff178;
  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
  if (lVar14 == 0) goto LAB_03168190;
  uVar49 = *(uint *)(lVar11 + 0x18);
  if (uVar49 < *(uint *)(lVar14 + 0x18)) {
    *(uint *)(lVar11 + 0x18) = uVar49 + 1;
    *(undefined4 *)(lVar14 + (long)(int)uVar49 * 4 + 0x20) = 0;
  }
  else {
    FUN_04059d64(0,lVar11,*(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
  }
  lVar11 = *(long *)(unaff_x23 + 0x478);
  if (lVar11 == 0) goto LAB_03168190;
  *(undefined4 *)(lVar11 + 0x18) = 0;
  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
  lVar11 = *in_stack_00000070;
  if (lVar11 == 0) goto LAB_03168190;
  uVar43 = *(undefined8 *)PTR_DAT_069ff188;
  *(undefined4 *)(lVar11 + 0x18) = 0;
  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
  uVar43 = thunk_FUN_02dd3144(uVar43);
  FUN_040594d0(uVar43,*(undefined8 *)PTR_DAT_069ff180);
  uVar50 = *unaff_x28;
  *(undefined8 *)(unaff_x26 + 0x28) = uVar43;
  uVar43 = thunk_FUN_02dd3144(uVar50);
  FUN_0409ed5c(uVar43,*(undefined8 *)PTR_DAT_069fbef0);
  cVar13 = *(char *)((long)unaff_x29 + 0xc71);
  *(undefined8 *)(unaff_x26 + 0x20) = uVar43;
  fVar47 = 0.0;
  if (cVar13 == '\0') {
    FUN_02d965b8(PTR_DAT_069fb978);
    *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
  }
  pfVar15 = *(float **)(*(long *)PTR_DAT_069fb978 + 0xb8);
  fStack00000000000000f8 = *pfVar15;
  fStack00000000000000f4 = pfVar15[1];
  fVar51 = pfVar15[2];
  fVar44 = *(float *)(unaff_x23 + 0x7c);
  pfVar15 = (float *)(unaff_x23 + 0x2c0);
  plVar25 = (long *)PTR_DAT_069fb978;
  if (1 < *(int *)(unaff_x19 + 0x18) + -2) {
    fVar37 = 0.0;
    iStack00000000000000d4 = 0;
    iStack0000000000000108 = 0;
    bVar2 = false;
    fVar46 = fStack000000000000010c * 0.5;
    uStack0000000000000110 = _fStack0000000000000130 & 0xffffffff;
    fStack0000000000000164 = fStack000000000000012c;
    uVar30 = 1;
    fStack00000000000000f0 = fVar51;
    fStack00000000000000fc = fVar51;
    fStack0000000000000100 = fStack00000000000000f4;
    fStack0000000000000104 = fStack00000000000000f8;
LAB_03169d3c:
    uVar24 = uVar30 - 1;
    fStack00000000000001d4 = 0.0;
    lVar11 = FUN_0400ff1c(unaff_x25,uVar24 & 0xffffffff,*unaff_x21);
    if ((*(long *)(unaff_x26 + 0x78) == 0) || (lVar11 == 0)) goto LAB_03168190;
    uVar43 = *unaff_x21;
    *(undefined4 *)(lVar11 + 0xbc) = *(undefined4 *)(*(long *)(unaff_x26 + 0x78) + 0x18);
    lVar11 = FUN_0400ff1c(unaff_x25,uVar24 & 0xffffffff,uVar43);
    if (lVar11 == 0) goto LAB_03168190;
    *(float *)(lVar11 + 0xc0) = *pfVar15;
    iVar29 = (int)uVar30;
    if (1 < uVar30) {
      if (uVar30 == 2) {
        lVar11 = FUN_0400ff1c(unaff_x25,0,*unaff_x21);
        if (lVar11 == 0) goto LAB_03168190;
        iVar26 = 0;
        fVar51 = *pfVar15;
      }
      else {
        iVar26 = iVar29 + -2;
        lVar11 = FUN_0400ff1c(unaff_x25,iVar26,*unaff_x21);
        fVar51 = *pfVar15;
        lVar14 = FUN_0400ff1c(unaff_x25,iVar26,*unaff_x21);
        if ((lVar14 == 0) || (lVar11 == 0)) goto LAB_03168190;
        fVar51 = fVar51 - *(float *)(lVar14 + 0xc0);
      }
      puVar4 = PTR_DAT_06a0b440;
      *(float *)(lVar11 + 200) = fVar51;
      lVar11 = FUN_0400ff1c(unaff_x25,iVar26,*(undefined8 *)puVar4);
      if (lVar11 == 0) goto LAB_03168190;
      fVar51 = *(float *)(lVar11 + 200);
      lVar11 = FUN_0400ff1c(unaff_x25,iVar26,*(undefined8 *)puVar4);
      lVar14 = FUN_0400ff1c(unaff_x25,iVar26,*(undefined8 *)puVar4);
      if (1000.0 <= fVar51) {
        if (lVar14 == 0) goto LAB_03168190;
        fStack00000000000001d0 = *(float *)(lVar14 + 200) / 1000.0;
        uVar43 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
        puVar16 = (undefined8 *)PTR_DAT_06a0c488;
      }
      else {
        if (lVar14 == 0) goto LAB_03168190;
        uVar43 = FUN_054fad00(lVar14 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
        puVar16 = (undefined8 *)PTR_DAT_06a0c4f0;
      }
      uVar43 = FUN_05362cb4(uVar43,*puVar16,0);
      if (lVar11 == 0) goto LAB_03168190;
      *(undefined8 *)(lVar11 + 0xd0) = uVar43;
      LeanTween__value((undefined8 *)(lVar11 + 0xd0),uVar43);
      puVar4 = PTR_DAT_06a0b440;
      lVar11 = FUN_0400ff1c(unaff_x25,iVar26,*(undefined8 *)PTR_DAT_06a0b440);
      if (lVar11 == 0) goto LAB_03168190;
      fVar51 = *(float *)(lVar11 + 0x4c);
      lVar11 = FUN_0400ff1c(unaff_x25,uVar24 & 0xffffffff,*(undefined8 *)puVar4);
      if (lVar11 == 0) goto LAB_03168190;
      fVar48 = *(float *)(lVar11 + 0x4c);
      if (DAT_06db4ece == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4ece = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar33 = fVar51 - fVar48;
      fVar40 = 0.0;
      fVar34 = SQRT((fVar47 * fVar47 + fVar33 * fVar33) * DAT_010fd194);
      fVar33 = DAT_010fcd14;
      if (DAT_010fcd14 <= fVar34) {
        fVar33 = -1.0;
        fVar34 = (fVar47 * 0.0 + ABS(fVar51 - fVar48) * 50.0 + 0.0) / fVar34;
        fVar47 = 1.0;
        if (fVar34 <= 1.0) {
          fVar47 = fVar34;
        }
        fVar51 = -1.0;
        if (-1.0 <= fVar34) {
          fVar51 = fVar47;
        }
        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
          fVar33 = -1.0;
          thunk_FUN_02df485c();
        }
        dVar39 = acos((double)fVar51);
        fVar40 = (float)dVar39 * DAT_010fcf40;
      }
      fVar40 = 90.0 - fVar40;
      lVar11 = FUN_0400ff1c(unaff_x25,iVar26,*(undefined8 *)puVar4);
      if (fVar40 <= 10.0) {
        uVar43 = FUN_054fad00(&stack0x00000234,*(undefined8 *)PTR_DAT_06a0c498,0);
        puVar16 = (undefined8 *)PTR_DAT_069fd088;
      }
      else {
        dVar39 = modf((double)fVar40,(double *)&stack0x00000298);
        puVar16 = (undefined8 *)PTR_DAT_069fd088;
        if (0.0 <= fVar40) {
          if (dVar39 == 0.5) {
            dVar39 = *(double *)(unaff_x26 + 0x80);
            fVar47 = 1.0;
            goto LAB_0316a098;
          }
          fStack00000000000001d0 = (float)(int)(fVar40 + 0.5);
        }
        else if (dVar39 == -0.5) {
          dVar39 = *(double *)(unaff_x26 + 0x80);
          fVar47 = -1.0;
LAB_0316a098:
          fStack00000000000001d0 = (float)dVar39;
          if (((long)dVar39 & 1U) != 0) {
            fStack00000000000001d0 = (float)dVar39 + fVar47;
          }
        }
        else {
          fStack00000000000001d0 = (float)(int)(fVar40 + -0.5);
        }
        uVar43 = FUN_054fabf8(&stack0x000001d0,0);
      }
      if (lVar11 == 0) goto LAB_03168190;
      *(undefined8 *)(lVar11 + 0xd8) = uVar43;
      LeanTween__value((undefined8 *)(lVar11 + 0xd8),uVar43);
      unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
      lVar11 = FUN_0400ff1c(unaff_x25,iVar26,*(undefined8 *)PTR_DAT_06a0b440);
      if (lVar11 == 0) goto LAB_03168190;
      fVar47 = *(float *)(lVar11 + 0x4c);
      lVar11 = FUN_0400ff1c(unaff_x25,uVar24 & 0xffffffff,*unaff_x21);
      if (lVar11 == 0) goto LAB_03168190;
      fVar51 = *(float *)(lVar11 + 0x4c);
      lVar11 = FUN_0400ff1c(unaff_x25,iVar26,*unaff_x21);
      if (lVar11 == 0) goto LAB_03168190;
      fVar48 = *(float *)(lVar11 + 0x48);
      lVar11 = FUN_0400ff1c(unaff_x25,iVar26,*unaff_x21);
      if (lVar11 == 0) goto LAB_03168190;
      fVar34 = *(float *)(lVar11 + 0x50);
      lVar11 = FUN_0400ff1c(unaff_x25,uVar24 & 0xffffffff,*unaff_x21);
      if (lVar11 == 0) goto LAB_03168190;
      fVar40 = *(float *)(lVar11 + 0x48);
      lVar11 = FUN_0400ff1c(unaff_x25,uVar24 & 0xffffffff,*unaff_x21);
      if (lVar11 == 0) goto LAB_03168190;
      fVar54 = *(float *)(lVar11 + 0x50);
      if (DAT_06db4c77 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c77 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar34 = fVar34 - fVar54;
      fVar48 = fVar48 - fVar40;
      lVar11 = FUN_0400ff1c(unaff_x25,iVar26,*unaff_x21);
      fVar40 = 100.0;
      fStack00000000000001d0 =
           (ABS(fVar47 - fVar51) / SQRT(fVar48 * fVar48 + fVar34 * fVar34)) * 100.0;
      uVar43 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c498,0);
      if (lVar11 == 0) goto LAB_03168190;
      *(undefined8 *)(lVar11 + 0xe0) = uVar43;
      LeanTween__value((undefined8 *)(lVar11 + 0xe0),uVar43);
      lVar11 = *(long *)(unaff_x26 + 0x78);
      if (lVar11 == 0) goto LAB_03168190;
      unaff_x23 = in_stack_00000148;
      if (2 < *(int *)(lVar11 + 0x18)) {
        fStack0000000000000104 = (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -1,*puVar16);
        lVar11 = *(long *)(unaff_x26 + 0x78);
        if (lVar11 == 0) goto LAB_03168190;
        fVar47 = fVar40;
        fVar51 = fVar33;
        fVar48 = (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -2,*puVar16);
        if (DAT_06db4c75 == '\0') {
          FUN_02d965b8(PTR_DAT_069fbb48);
          DAT_06db4c75 = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        fStack0000000000000104 = fStack0000000000000104 - fVar48;
        fVar40 = fVar40 - fVar47;
        fVar33 = fVar33 - fVar51;
        fStack00000000000000fc =
             SQRT(fVar33 * fVar33 +
                  fStack0000000000000104 * fStack0000000000000104 + fVar40 * fVar40);
        if (fStack00000000000000fc <= DAT_010fd13c) {
          if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
            FUN_02d965b8(plVar25);
            *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
          }
          pfVar23 = *(float **)(*plVar25 + 0xb8);
          fStack0000000000000104 = *pfVar23;
          fStack0000000000000100 = pfVar23[1];
          fStack00000000000000fc = pfVar23[2];
        }
        else {
          fStack0000000000000104 = fStack0000000000000104 / fStack00000000000000fc;
          fStack0000000000000100 = fVar40 / fStack00000000000000fc;
          fStack00000000000000fc = fVar33 / fStack00000000000000fc;
        }
      }
    }
    lVar11 = *(long *)(unaff_x26 + 0x28);
    if (lVar11 == 0) goto LAB_03168190;
    lVar14 = *(long *)(unaff_x26 + 0x20);
    *(undefined4 *)(lVar11 + 0x18) = 0;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (lVar14 == 0) goto LAB_03168190;
    fVar47 = 0.0;
    *(undefined4 *)(lVar14 + 0x18) = 0;
    *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
    if ((*(uint *)(unaff_x19 + 0x18) <= uVar30) ||
       (uVar1 = uVar30 + 1, *(uint *)(unaff_x19 + 0x18) <= uVar1)) goto LAB_0316f2c4;
    lVar11 = unaff_x19 + uVar30 * 0xc;
    lVar14 = unaff_x19 + uVar1 * 0xc;
    fVar48 = *pfVar15;
    pfVar23 = (float *)(lVar11 + 0x20);
    fVar34 = *pfVar23;
    fVar51 = *(float *)(lVar11 + 0x24);
    fVar33 = *(float *)(lVar11 + 0x28);
    pfVar32 = (float *)(lVar14 + 0x20);
    fVar40 = *pfVar32;
    fVar58 = *(float *)(lVar14 + 0x24);
    fVar54 = *(float *)(lVar14 + 0x28);
    if (DAT_06db4c77 == '\0') {
      FUN_02d965b8(PTR_DAT_069fbb48);
      DAT_06db4c77 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if ((*(long *)(unaff_x23 + 0x68) == 0) ||
       (lVar20 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar24 & 0xffffffff,*unaff_x21),
       lVar20 == 0)) goto LAB_03168190;
    fVar51 = fVar51 - fVar58;
    fVar33 = fVar33 - fVar54;
    uVar41 = (ulong)(uint)fVar33;
    uVar18 = (ulong)(uint)(fVar33 * fVar33);
    fVar48 = fVar48 + SQRT(fVar33 * fVar33 + (fVar34 - fVar40) * (fVar34 - fVar40) + fVar51 * fVar51
                          );
    if (*(int *)(lVar20 + 0x6c) == 0) {
      if ((*(uint *)(unaff_x19 + 0x18) <= uVar30) || (*(uint *)(unaff_x19 + 0x18) <= uVar1))
      goto LAB_0316f2c4;
      fVar34 = *pfVar23;
      fVar51 = *(float *)(lVar11 + 0x24);
      fVar40 = *pfVar32;
      fVar58 = *(float *)(lVar14 + 0x24);
      fVar33 = *(float *)(lVar11 + 0x28);
      fVar54 = *(float *)(lVar14 + 0x28);
      if (DAT_06db4c77 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c77 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (uVar30 < 2) {
        bVar9 = false;
      }
      else {
        if (*(long *)(unaff_x23 + 0x68) == 0) goto LAB_03168190;
        lVar20 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),iVar29 + -2,*unaff_x21);
        if (lVar20 == 0) goto LAB_03168190;
        if (*(int *)(lVar20 + 0x6c) == 1) {
          bVar9 = true;
        }
        else {
          if ((*(long *)(unaff_x23 + 0x68) == 0) ||
             (lVar20 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),iVar29 + -2,*unaff_x21), lVar20 == 0
             )) goto LAB_03168190;
          bVar9 = *(int *)(lVar20 + 0x6c) == 2;
        }
      }
      fVar38 = 0.0;
      if (uVar30 == 1) {
        fVar38 = fStack0000000000000064;
      }
      fVar60 = in_stack_00000068;
      if (uVar30 != *(int *)(unaff_x19 + 0x18) - 3) {
        fVar60 = 1.0;
      }
      if (fVar60 <= fVar38) {
        iStack0000000000000108 = 0;
      }
      else {
        fVar51 = fVar51 - fVar58;
        fVar33 = fVar33 - fVar54;
        fVar51 = DAT_010fcf10 /
                 SQRT(fVar33 * fVar33 + (fVar34 - fVar40) * (fVar34 - fVar40) + fVar51 * fVar51);
        do {
          uVar18 = *(ulong *)(unaff_x19 + 0x18);
          if (fVar51 + fVar38 <= 1.0) {
            bVar27 = 0;
          }
          else if (uVar30 == (int)uVar18 - 3) {
            bVar27 = *(byte *)(unaff_x23 + 0x84) ^ 1;
          }
          else {
            bVar27 = 0;
          }
          bVar10 = bVar27 != 0;
          fVar33 = 1.0;
          if (!bVar10) {
            fVar33 = fVar38;
          }
          if (((uVar18 & 0xffffffff) <= uVar30) || ((uVar18 & 0xffffffff) <= uVar1))
          goto LAB_0316f2c4;
          uVar55 = *(undefined4 *)(lVar11 + 0x24);
          uVar45 = *(undefined4 *)(lVar11 + 0x28);
          fVar34 = *pfVar23;
          FUN_04059a68(in_stack_000000c8,uVar30 & 0xffffffff,*(undefined8 *)PTR_DAT_06a0a108);
          fVar54 = in_stack_0000026c;
          fVar58 = in_stack_00000270;
          fVar38 = (float)FUN_0316f340(in_stack_00000268,in_stack_0000026c,in_stack_00000270,fVar34,
                                       uVar55,uVar45);
          _fStack00000000000001c0 = CONCAT44(fVar54,fVar38);
          fVar34 = fStack0000000000000164;
          fVar40 = (float)uStack0000000000000110;
          if (iStack0000000000000108 == 3) {
            iStack0000000000000108 = 0;
            _fStack0000000000000130 = (ulong)(uint)fVar38;
            fVar34 = fVar58;
            fVar40 = fVar38;
            fStack0000000000000128 = fVar54;
            fStack000000000000012c = fVar58;
          }
          unaff_x29 = &PTR_FUN_06db4000;
          in_stack_000001c8 = fVar58;
          if (DAT_06db4c77 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c77 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fVar36 = in_stack_000001c8;
          if (*(uint *)(unaff_x19 + 0x18) <= uVar1) goto LAB_0316f2c4;
          fVar57 = *pfVar32;
          fVar52 = *(float *)(lVar14 + 0x24);
          fVar42 = fStack00000000000001c0;
          fVar35 = fStack00000000000001c4;
          fVar61 = *(float *)(lVar14 + 0x28);
          if (DAT_06db4c77 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c77 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          lVar20 = *(long *)(unaff_x26 + 0x20);
          if (lVar20 == 0) goto LAB_03168190;
          fVar35 = fVar35 - fVar52;
          iVar26 = *(int *)(lVar20 + 0x18);
          fVar36 = fVar36 - fVar61;
          fVar52 = fVar36 * fVar36;
          fVar42 = SQRT(fVar52 + (fVar42 - fVar57) * (fVar42 - fVar57) + fVar35 * fVar35);
          if (iVar26 < 1) {
            lVar20 = *(long *)(unaff_x26 + 0x78);
            if (lVar20 == 0) goto LAB_03168190;
            iVar26 = *(int *)(lVar20 + 0x18);
            if (0 < iVar26) goto LAB_0316b4d8;
          }
          else {
LAB_0316b4d8:
            fVar35 = (float)FUN_0409f2f4(lVar20,iVar26 + -1,*(undefined8 *)PTR_DAT_069fd088);
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
            plVar25 = (long *)PTR_DAT_069fb978;
            fStack00000000000000f8 = fStack00000000000000f8 - fVar35;
            fStack00000000000000f4 = fStack00000000000000f4 - fVar52;
            fStack00000000000000f0 = fStack00000000000000f0 - fVar36;
            fVar36 = SQRT(fStack00000000000000f0 * fStack00000000000000f0 +
                          fStack00000000000000f8 * fStack00000000000000f8 +
                          fStack00000000000000f4 * fStack00000000000000f4);
            if (fVar36 <= DAT_010fd13c) {
              if (DAT_06db4c71 == '\0') {
                FUN_02d965b8(PTR_DAT_069fb978);
                DAT_06db4c71 = '\x01';
              }
              pfVar19 = *(float **)(*(long *)PTR_DAT_069fb978 + 0xb8);
              fStack00000000000000f8 = *pfVar19;
              fStack00000000000000f4 = pfVar19[1];
              fStack00000000000000f0 = pfVar19[2];
              plVar25 = (long *)PTR_DAT_069fb978;
            }
            else {
              fStack00000000000000f8 = fStack00000000000000f8 / fVar36;
              fStack00000000000000f4 = fStack00000000000000f4 / fVar36;
              fStack00000000000000f0 = fStack00000000000000f0 / fVar36;
              if (DAT_06db4c71 == '\0') {
                FUN_02d965b8(PTR_DAT_069fb978);
                DAT_06db4c71 = '\x01';
              }
            }
            pfVar19 = *(float **)(*plVar25 + 0xb8);
            if (in_stack_000000a0._4_4_ <=
                (fStack00000000000000fc - pfVar19[2]) * (fStack00000000000000fc - pfVar19[2]) +
                (fStack0000000000000104 - *pfVar19) * (fStack0000000000000104 - *pfVar19) +
                (fStack0000000000000100 - pfVar19[1]) * (fStack0000000000000100 - pfVar19[1])) {
              if (DAT_06db4ece == '\0') {
                FUN_02d965b8(PTR_DAT_069fbb48);
                DAT_06db4ece = '\x01';
              }
              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              fVar37 = 0.0;
              fVar36 = SQRT((fStack00000000000000fc * fStack00000000000000fc +
                            fStack0000000000000100 * fStack0000000000000100 +
                            fStack0000000000000104 * fStack0000000000000104) *
                            (fStack00000000000000f0 * fStack00000000000000f0 +
                            fStack00000000000000f8 * fStack00000000000000f8 +
                            fStack00000000000000f4 * fStack00000000000000f4));
              if (DAT_010fcd14 <= fVar36) {
                fVar36 = (fStack00000000000000fc * fStack00000000000000f0 +
                         fStack0000000000000104 * fStack00000000000000f8 +
                         fStack0000000000000100 * fStack00000000000000f4) / fVar36;
                fVar37 = 1.0;
                if (fVar36 <= 1.0) {
                  fVar37 = fVar36;
                }
                fVar35 = -1.0;
                if (-1.0 <= fVar36) {
                  fVar35 = fVar37;
                }
                if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                dVar39 = acos((double)fVar35);
                fVar37 = (float)dVar39 * DAT_010fcf40;
              }
              bVar10 = false;
              bVar7 = true;
              bVar8 = false;
              if (*(float *)(in_stack_00000148 + 0x80) < fVar37) {
                bVar10 = false;
                bVar7 = false;
                bVar8 = true;
                if (!NAN(fVar42)) {
                  bVar10 = fVar42 < 1.5;
                  bVar7 = fVar42 == 1.5;
                  bVar8 = false;
                }
              }
              bVar10 = bVar27 != 0 ||
                       (!bVar7 && bVar10 == bVar8) &&
                       1.0 <= SQRT((fStack000000000000012c - fVar58) *
                                   (fStack000000000000012c - fVar58) +
                                   (fStack0000000000000128 - fVar54) *
                                   (fStack0000000000000128 - fVar54) +
                                   (fStack0000000000000130 - fVar38) *
                                   (fStack0000000000000130 - fVar38));
            }
          }
          unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
          if (*(char *)(in_stack_00000148 + 0x5d6) != '\0') {
            if (*(long *)(in_stack_00000148 + 0x20) == 0) goto LAB_03168190;
            FUN_03199614(*(long *)(in_stack_00000148 + 0x20),&stack0x000001c0,0);
          }
          bVar7 = bVar10;
          if (fVar60 < fVar51 + fVar33 + DAT_010fd060) {
            bVar8 = bVar10;
            if (fVar44 * 0.5 <= fVar42) {
              bVar8 = true;
            }
            if (!bVar8 && !bVar2) {
              if (*(uint *)(unaff_x19 + 0x18) <= uVar1) goto LAB_0316f2c4;
              fVar33 = 1.0;
              _fStack00000000000001c0 = *(ulong *)pfVar32;
              in_stack_000001c8 = *(float *)(lVar14 + 0x28);
              bVar7 = true;
            }
          }
          if (fVar51 + fVar33 <= fVar60) {
            fVar54 = fStack00000000000001c0;
            fVar58 = fStack00000000000001c4;
          }
          else {
            if (*(uint *)(unaff_x19 + 0x18) <= uVar1) goto LAB_0316f2c4;
            _fStack00000000000001c0 = *(ulong *)pfVar32;
            fVar33 = 1.0;
            in_stack_000001c8 = *(float *)(lVar14 + 0x28);
            bVar7 = true;
            fVar54 = *pfVar32;
            fVar58 = *(float *)(lVar14 + 0x24);
          }
          fVar38 = in_stack_000001c8;
          if (DAT_06db4c77 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c77 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fVar36 = in_stack_000001c8;
          bVar8 = bVar7;
          if (fStack000000000000010c <
              SQRT((fStack000000000000012c - fVar38) * (fStack000000000000012c - fVar38) +
                   (fStack0000000000000130 - fVar54) * (fStack0000000000000130 - fVar54) +
                   (fStack0000000000000128 - fVar58) * (fStack0000000000000128 - fVar58))) {
            bVar8 = true;
          }
          bVar3 = bVar8;
          if (uVar30 != 1) {
            bVar3 = true;
          }
          if (!bVar3) {
            bVar8 = fVar33 == 0.0;
          }
          if (bVar8) {
            fVar54 = fStack00000000000001c0;
            fVar58 = fStack00000000000001c4;
            if (DAT_06db4c77 == '\0') {
              FUN_02d965b8(PTR_DAT_069fbb48);
              DAT_06db4c77 = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              cVar13 = DAT_06db4c77;
            }
            else {
              cVar13 = '\x01';
            }
            fVar38 = in_stack_000001c8;
            uVar18 = _fStack00000000000001c0;
            uStack0000000000000110 = _fStack00000000000001c0 & 0xffffffff;
            fVar54 = SQRT((fStack000000000000012c - fVar36) * (fStack000000000000012c - fVar36) +
                          (fStack0000000000000130 - fVar54) * (fStack0000000000000130 - fVar54) +
                          (fStack0000000000000128 - fVar58) * (fStack0000000000000128 - fVar58));
            fStack0000000000000164 = in_stack_000001c8;
            fStack00000000000001d4 = fVar54 + fStack00000000000001d4;
            *pfVar15 = fVar54 + *pfVar15;
            if (cVar13 == '\0') {
              FUN_02d965b8(PTR_DAT_069fbb48);
              DAT_06db4c77 = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            in_stack_00000280 = in_stack_000001c8;
            lVar20 = *(long *)(in_stack_00000148 + 0x68);
            *(ulong *)(unaff_x26 + 0x60) = _fStack00000000000001c0;
            fVar40 = (float)uVar18 - fVar40;
            _fStack0000000000000130 = _fStack00000000000001c0 & 0xffffffff;
            fVar47 = fVar47 + SQRT(fVar40 * fVar40 + (fVar38 - fVar34) * (fVar38 - fVar34));
            fStack0000000000000128 = fStack00000000000001c4;
            fStack000000000000012c = in_stack_000001c8;
            if ((lVar20 == 0) ||
               (lVar20 = FUN_0400ff1c(lVar20,uVar24 & 0xffffffff,*unaff_x21), lVar20 == 0))
            goto LAB_03168190;
            if (*(float *)(lVar20 + 0x100) == 0.0) {
              if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                 (lVar20 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),uVar24 & 0xffffffff,
                                        *unaff_x21), lVar20 == 0)) goto LAB_03168190;
              if (*(float *)(lVar20 + 0x104) != 0.0) goto LAB_0316bb78;
              if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                 (lVar20 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),uVar24 & 0xffffffff,
                                        *unaff_x21), lVar20 == 0)) goto LAB_03168190;
              if (*(float *)(lVar20 + 0x110) != 0.0) goto LAB_0316bb78;
              if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                 (lVar20 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),uVar24 & 0xffffffff,
                                        *unaff_x21), lVar20 == 0)) goto LAB_03168190;
              if (*(float *)(lVar20 + 0x114) != 0.0) goto LAB_0316bb78;
              lVar20 = *in_stack_000000e0;
              if (lVar20 == 0) goto LAB_03168190;
              lVar22 = *(long *)(lVar20 + 0x10);
              lVar17 = *(long *)PTR_DAT_069ff178;
              *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
              if (lVar22 == 0) goto LAB_03168190;
              uVar49 = *(uint *)(lVar20 + 0x18);
              if (uVar49 < *(uint *)(lVar22 + 0x18)) {
                *(uint *)(lVar20 + 0x18) = uVar49 + 1;
                *(undefined4 *)(lVar22 + (long)(int)uVar49 * 4 + 0x20) = 0;
              }
              else {
                FUN_04059d64(0,lVar20,*(undefined8 *)
                                       (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
            }
            else {
LAB_0316bb78:
              if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
              fVar34 = *pfVar15;
              uVar43 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),uVar24 & 0xffffffff,
                                    *unaff_x21);
              FUN_0316f6a0(fVar34,fVar48,uVar43,uVar43,&stack0x0000022c,&stack0x00000228,
                           &stack0x00000224,&stack0x00000218,&stack0x00000278,&stack0x00000214);
            }
            lVar20 = *in_stack_000000b8;
            if (fVar54 <= 5.0) {
              if (lVar20 == 0) goto LAB_03168190;
              lVar22 = *(long *)(lVar20 + 0x10);
              lVar17 = *(long *)PTR_DAT_069ff178;
              *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
              if (lVar22 == 0) goto LAB_03168190;
              uVar49 = *(uint *)(lVar20 + 0x18);
              fVar34 = (fVar37 / fVar54) * 5.0;
              if (*(uint *)(lVar22 + 0x18) <= uVar49) {
                lVar22 = *(long *)(lVar17 + 0x20);
                goto LAB_0316bcb0;
              }
              *(uint *)(lVar20 + 0x18) = uVar49 + 1;
              *(float *)(lVar22 + (long)(int)uVar49 * 4 + 0x20) = fVar34;
            }
            else {
              if (lVar20 == 0) goto LAB_03168190;
              lVar22 = *(long *)(lVar20 + 0x10);
              lVar17 = *(long *)PTR_DAT_069ff178;
              *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
              if (lVar22 == 0) goto LAB_03168190;
              uVar49 = *(uint *)(lVar20 + 0x18);
              if (uVar49 < *(uint *)(lVar22 + 0x18)) {
                *(uint *)(lVar20 + 0x18) = uVar49 + 1;
                *(float *)(lVar22 + (long)(int)uVar49 * 4 + 0x20) = fVar37;
              }
              else {
                lVar22 = *(long *)(lVar17 + 0x20);
                fVar34 = fVar37;
LAB_0316bcb0:
                FUN_04059d64(fVar34,lVar20,*(undefined8 *)(*(long *)(lVar22 + 0xc0) + 0x70));
              }
            }
            if (bVar9) {
              lVar20 = *in_stack_000000b8;
              if (lVar20 == 0) goto LAB_03168190;
              iVar26 = *(int *)(lVar20 + 0x18);
              if (1 < iVar26) {
                FUN_04059a68(lVar20,iVar26 + -1,*(undefined8 *)PTR_DAT_06a0a108);
                FUN_04059abc(lVar20,iVar26 + -2,*(undefined8 *)PTR_DAT_06a0b5c0);
              }
            }
            puVar4 = PTR_DAT_069fbee0;
            lVar20 = *(long *)(unaff_x26 + 0x20);
            if (lVar20 == 0) goto LAB_03168190;
            lVar22 = *(long *)(lVar20 + 0x10);
            *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
            if (lVar22 == 0) goto LAB_03168190;
            uVar49 = *(uint *)(lVar20 + 0x18);
            if (uVar49 < *(uint *)(lVar22 + 0x18)) {
              lVar22 = lVar22 + (long)(int)uVar49 * 0xc;
              *(uint *)(lVar20 + 0x18) = uVar49 + 1;
              *(float *)(lVar22 + 0x20) = in_stack_00000278;
              *(float *)(lVar22 + 0x24) = in_stack_0000027c;
              *(float *)(lVar22 + 0x28) = in_stack_00000280;
            }
            else {
              FUN_0409f624(lVar20,*(undefined8 *)
                                   (*(long *)(*(long *)(*(long *)puVar4 + 0x20) + 0xc0) + 0x70));
            }
            unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
            lVar20 = *(long *)(unaff_x26 + 0x28);
            if (lVar20 == 0) goto LAB_03168190;
            lVar22 = *(long *)(lVar20 + 0x10);
            lVar17 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
            if (lVar22 == 0) goto LAB_03168190;
            uVar49 = *(uint *)(lVar20 + 0x18);
            if (uVar49 < *(uint *)(lVar22 + 0x18)) {
              *(uint *)(lVar20 + 0x18) = uVar49 + 1;
              *(float *)(lVar22 + (long)(int)uVar49 * 4 + 0x20) = fVar33;
            }
            else {
              FUN_04059d64(fVar33,lVar20,
                           *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
            }
            if (bVar7) {
              lVar20 = *(long *)(in_stack_00000148 + 0x2c8);
              if (lVar20 == 0) goto LAB_03168190;
              lVar22 = *(long *)(lVar20 + 0x10);
              lVar17 = *(long *)PTR_DAT_069fc3e0;
              *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
              if (lVar22 == 0) goto LAB_03168190;
              uVar49 = *(uint *)(lVar20 + 0x18);
              if (uVar49 < *(uint *)(lVar22 + 0x18)) {
                *(uint *)(lVar20 + 0x18) = uVar49 + 1;
                *(int *)(lVar22 + (long)(int)uVar49 * 4 + 0x20) = iStack00000000000000d4;
              }
              else {
                FUN_03fb3e1c(lVar20,iStack00000000000000d4,
                             *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
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
            uStack0000000000000110 = (ulong)(uint)fVar40;
            fStack0000000000000164 = fVar34;
          }
          fVar38 = fVar51 + fVar33;
          unaff_x23 = in_stack_00000148;
        } while (fVar38 < fVar60);
        iStack0000000000000108 = 0;
        plVar25 = (long *)PTR_DAT_069fb978;
      }
    }
    else {
      if ((*(long *)(unaff_x23 + 0x68) == 0) ||
         (lVar20 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar24 & 0xffffffff,*unaff_x21),
         lVar20 == 0)) goto LAB_03168190;
      if (*(int *)(lVar20 + 0x6c) != 1) {
        if ((*(long *)(unaff_x23 + 0x68) == 0) ||
           (lVar20 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar24 & 0xffffffff,*unaff_x21),
           lVar20 == 0)) goto LAB_03168190;
        if (*(int *)(lVar20 + 0x6c) != 2) {
          if ((*(long *)(unaff_x23 + 0x68) == 0) ||
             (lVar20 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar24 & 0xffffffff,*unaff_x21),
             lVar20 == 0)) goto LAB_03168190;
          if (*(int *)(lVar20 + 0x6c) == 3) {
            uStack00000000000001ac = 0;
            if (*(long *)(unaff_x23 + 0x68) == 0) goto LAB_03168190;
            if (((long)(*(int *)(*(long *)(unaff_x23 + 0x68) + 0x18) + -2) < (long)uVar30) &&
               (*(char *)(unaff_x23 + 0x84) == '\0')) {
              uVar43 = *(undefined8 *)(unaff_x23 + 0x2e0);
              if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              uVar12 = FUN_0634eb94(uVar43,0,0);
              if ((uVar12 & 1) != 0) goto LAB_0316adcc;
              FUN_030fd644(&stack0x00000290,unaff_x23,uVar30 & 0xffffffff,&stack0x00000238,
                           &stack0x00000240,(long)&stack0x000001d0 + 4,0,&stack0x00000230);
            }
            else {
LAB_0316adcc:
              FUN_030faa2c(&stack0x00000290,unaff_x23,uVar30 & 0xffffffff,&stack0x00000238,
                           &stack0x00000240,(long)&stack0x000001d0 + 4,0,&stack0x00000230);
            }
            if ((*(long *)(unaff_x23 + 0x68) == 0) ||
               (lVar20 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar24 & 0xffffffff,*unaff_x21),
               lVar20 == 0)) goto LAB_03168190;
            lVar22 = *(long *)(unaff_x26 + 0x28);
            *(undefined4 *)(lVar20 + 0x34) = uStack00000000000001ac;
            if (lVar22 == 0) goto LAB_03168190;
            fVar51 = 0.0;
            iVar26 = 0;
            puVar31 = (undefined4 *)(unaff_x19 + 0x20 + uVar24 * 0xc);
            while( true ) {
              unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
              puVar4 = PTR_DAT_069fbee0;
              plVar25 = (long *)PTR_DAT_069fb978;
              fVar33 = (float)uVar18;
              fStack0000000000000164 = (float)uVar41;
              iVar62 = *(int *)(lVar22 + 0x18);
              if (iVar62 <= iVar26) break;
              if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
              uStack00000000000001a0 =
                   FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),iVar26,*(undefined8 *)PTR_DAT_069fd088);
              fStack00000000000001a4 = fVar33;
              fStack00000000000001a8 = fStack0000000000000164;
              if (*(char *)(in_stack_00000148 + 0x5d6) == '\0') {
                uVar18 = (ulong)*(uint *)(unaff_x19 + 0x18);
                if ((((uVar18 <= uVar24) || (uVar18 <= uVar30)) || (uVar18 <= uVar1)) ||
                   (uVar18 <= uVar30 + 2)) goto LAB_0316f2c4;
                if (*(long *)(unaff_x26 + 0x28) == 0) goto LAB_03168190;
                uVar45 = *puVar31;
                fVar33 = (float)puVar31[1];
                uVar55 = puVar31[2];
                fVar34 = *pfVar23;
                uVar59 = *(undefined4 *)(lVar11 + 0x24);
                uVar56 = *(undefined4 *)(lVar11 + 0x28);
                FUN_04059a68(*(long *)(unaff_x26 + 0x28),iVar26,*(undefined8 *)PTR_DAT_06a0a108);
                FUN_0316f340(uVar45,fVar33,uVar55,fVar34,uVar59,uVar56);
                fStack00000000000001a4 = fVar33;
                if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                fStack0000000000000164 = fStack00000000000001a8;
                FUN_0409f350(uStack00000000000001a0,*(long *)(unaff_x26 + 0x20),iVar26,
                             *(undefined8 *)PTR_DAT_06a0b7d0);
                if (iVar26 != 0) goto LAB_0316af8c;
LAB_0316b04c:
                lVar20 = *in_stack_000000e0;
                if (lVar20 == 0) goto LAB_03168190;
                lVar22 = *(long *)(lVar20 + 0x10);
                lVar17 = *(long *)PTR_DAT_069ff178;
                *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
                if (lVar22 == 0) goto LAB_03168190;
                uVar49 = *(uint *)(lVar20 + 0x18);
                if (uVar49 < *(uint *)(lVar22 + 0x18)) {
                  *(uint *)(lVar20 + 0x18) = uVar49 + 1;
                  *(undefined4 *)(lVar22 + (long)(int)uVar49 * 4 + 0x20) = 0;
                }
                else {
                  FUN_04059d64(0,lVar20,*(undefined8 *)
                                         (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                }
              }
              else {
                if (*(long *)(in_stack_00000148 + 0x20) == 0) goto LAB_03168190;
                FUN_03199614(*(long *)(in_stack_00000148 + 0x20),&stack0x000001a0,0);
                if (iVar26 == 0) goto LAB_0316b04c;
LAB_0316af8c:
                if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                   (lVar20 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),uVar24 & 0xffffffff,
                                          *(undefined8 *)PTR_DAT_06a0b440), lVar20 == 0))
                goto LAB_03168190;
                if (*(float *)(lVar20 + 0x100) == 0.0) {
                  if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                     (lVar20 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),uVar24 & 0xffffffff,
                                            *(undefined8 *)PTR_DAT_06a0b440), lVar20 == 0))
                  goto LAB_03168190;
                  if (*(float *)(lVar20 + 0x104) == 0.0) {
                    if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                       (lVar20 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                              uVar24 & 0xffffffff,*(undefined8 *)PTR_DAT_06a0b440),
                       lVar20 == 0)) goto LAB_03168190;
                    if (*(float *)(lVar20 + 0x110) == 0.0) {
                      if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                         (lVar20 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                uVar24 & 0xffffffff,*(undefined8 *)PTR_DAT_06a0b440)
                         , lVar20 == 0)) goto LAB_03168190;
                      if (*(float *)(lVar20 + 0x114) == 0.0) goto LAB_0316b04c;
                    }
                  }
                }
                puVar4 = PTR_DAT_069fd088;
                if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                fVar34 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),iVar26 + -1,
                                             *(undefined8 *)PTR_DAT_069fd088);
                if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                fVar40 = fVar33;
                fVar54 = fStack0000000000000164;
                fVar58 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),iVar26,
                                             *(undefined8 *)puVar4);
                if (DAT_06db4c77 == '\0') {
                  FUN_02d965b8(PTR_DAT_069fbb48);
                  DAT_06db4c77 = '\x01';
                }
                if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
                fVar38 = *pfVar15;
                fVar51 = fVar51 + SQRT((fStack0000000000000164 - fVar54) *
                                       (fStack0000000000000164 - fVar54) +
                                       (fVar34 - fVar58) * (fVar34 - fVar58) +
                                       (fVar33 - fVar40) * (fVar33 - fVar40));
                uVar43 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),uVar24 & 0xffffffff,
                                      *(undefined8 *)PTR_DAT_06a0b440);
                FUN_0316f6a0(fVar51 + fVar38,fVar48,uVar43,uVar43,&stack0x0000022c,&stack0x00000228,
                             &stack0x00000224,&stack0x00000218,&stack0x000001a0,&stack0x00000214);
              }
              if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
              uVar41 = (ulong)(uint)fStack00000000000001a8;
              uVar18 = (ulong)(uint)fStack00000000000001a4;
              FUN_0409f350(uStack00000000000001a0,*(long *)(unaff_x26 + 0x20),iVar26,
                           *(undefined8 *)PTR_DAT_06a0b7d0);
              lVar22 = *(long *)(unaff_x26 + 0x28);
              iVar26 = iVar26 + 1;
              if (lVar22 == 0) goto LAB_03168190;
            }
            uVar18 = (ulong)(iVar62 - 1);
            if (iVar62 < 1) {
              if (*(uint *)(unaff_x19 + 0x18) <= uVar1) goto LAB_0316f2c4;
              lVar20 = *(long *)(unaff_x26 + 0x20);
              if (lVar20 == 0) goto LAB_03168190;
              lVar22 = *(long *)(lVar20 + 0x10);
              fVar51 = *pfVar32;
              uVar45 = *(undefined4 *)(lVar14 + 0x24);
              fStack0000000000000164 = *(float *)(lVar14 + 0x28);
              *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
              if (lVar22 == 0) goto LAB_03168190;
              uVar49 = *(uint *)(lVar20 + 0x18);
              if (uVar49 < *(uint *)(lVar22 + 0x18)) {
                lVar22 = lVar22 + (long)(int)uVar49 * 0xc;
                *(uint *)(lVar20 + 0x18) = uVar49 + 1;
                *(float *)(lVar22 + 0x20) = fVar51;
                *(undefined4 *)(lVar22 + 0x24) = uVar45;
                *(float *)(lVar22 + 0x28) = fStack0000000000000164;
              }
              else {
                FUN_0409f624(lVar20,*(undefined8 *)
                                     (*(long *)(*(long *)(*(long *)puVar4 + 0x20) + 0xc0) + 0x70));
                uVar18 = extraout_x1_00;
              }
              fVar51 = fStack00000000000001d4;
              if ((*(uint *)(unaff_x19 + 0x18) <= uVar30) || (*(uint *)(unaff_x19 + 0x18) <= uVar1))
              goto LAB_0316f2c4;
              uVar43 = *(undefined8 *)pfVar23;
              fVar48 = *(float *)(lVar11 + 0x28);
              uVar50 = *(undefined8 *)pfVar32;
              fVar33 = *(float *)(lVar14 + 0x28);
              if (DAT_06db4c77 == '\0') {
                FUN_02d965b8(PTR_DAT_069fbb48,uVar18);
                DAT_06db4c77 = '\x01';
              }
              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              fVar34 = (float)uVar43 - (float)uVar50;
              fVar40 = (float)((ulong)uVar43 >> 0x20) - (float)((ulong)uVar50 >> 0x20);
              fVar48 = fVar48 - fVar33;
              in_stack_0000027c = fVar48 * fVar48;
              fStack00000000000001d4 =
                   fVar51 + SQRT(in_stack_0000027c + fVar34 * fVar34 + fVar40 * fVar40);
LAB_0316d2dc:
              lVar11 = *(long *)(unaff_x26 + 0x28);
              if (lVar11 == 0) goto LAB_03168190;
              lVar14 = *(long *)(lVar11 + 0x10);
              lVar20 = *(long *)PTR_DAT_069ff178;
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              if (lVar14 == 0) goto LAB_03168190;
              uVar49 = *(uint *)(lVar11 + 0x18);
              if (uVar49 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar11 + 0x18) = uVar49 + 1;
                *(undefined4 *)(lVar14 + (long)(int)uVar49 * 4 + 0x20) = 0x3f800000;
              }
              else {
                FUN_04059d64(0x3f800000,lVar11,
                             *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
              }
              lVar11 = *in_stack_000000e0;
              if (lVar11 == 0) goto LAB_03168190;
              lVar14 = *(long *)(lVar11 + 0x10);
              lVar20 = *(long *)PTR_DAT_069ff178;
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              if (lVar14 == 0) goto LAB_03168190;
              uVar49 = *(uint *)(lVar11 + 0x18);
              if (uVar49 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar11 + 0x18) = uVar49 + 1;
                *(undefined4 *)(lVar14 + (long)(int)uVar49 * 4 + 0x20) = 0;
              }
              else {
                FUN_04059d64(0,lVar11,*(undefined8 *)
                                       (*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
              }
            }
            else {
              fVar51 = (float)FUN_04059a68(lVar22,uVar18,*(undefined8 *)PTR_DAT_06a0a108);
              unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
              puVar4 = PTR_DAT_069fd088;
              plVar25 = (long *)PTR_DAT_069fb978;
              fVar48 = 1.0;
              if (fVar51 <= 1.0) {
                lVar11 = *(long *)(unaff_x26 + 0x20);
                if (lVar11 == 0) goto LAB_03168190;
                fVar51 = (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -1,
                                             *(undefined8 *)PTR_DAT_069fd088);
                if (*(uint *)(unaff_x19 + 0x18) <= uVar1) goto LAB_0316f2c4;
                fVar48 = fVar48 - *(float *)(lVar14 + 0x24);
                fStack0000000000000164 = fStack0000000000000164 - *(float *)(lVar14 + 0x28);
                in_stack_0000027c = in_stack_000000a0._4_4_;
                if (in_stack_000000a0._4_4_ <=
                    fStack0000000000000164 * fStack0000000000000164 +
                    (fVar51 - *pfVar32) * (fVar51 - *pfVar32) + fVar48 * fVar48) {
                  lVar11 = *(long *)(unaff_x26 + 0x20);
                  if (lVar11 == 0) goto LAB_03168190;
                  fVar51 = in_stack_000000a0._4_4_;
                  fVar48 = (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -1,
                                               *(undefined8 *)puVar4);
                  if (*(uint *)(unaff_x19 + 0x18) <= uVar1) goto LAB_0316f2c4;
                  fVar33 = *pfVar32;
                  fVar40 = *(float *)(lVar14 + 0x24);
                  fVar34 = *(float *)(lVar14 + 0x28);
                  if (DAT_06db4c77 == '\0') {
                    FUN_02d965b8(PTR_DAT_069fbb48);
                    DAT_06db4c77 = '\x01';
                  }
                  if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  puVar5 = PTR_DAT_069fbee0;
                  fVar51 = fVar51 - fVar40;
                  lVar11 = *(long *)(unaff_x26 + 0x20);
                  fStack0000000000000164 = fStack0000000000000164 - fVar34;
                  if (fVar46 <= SQRT(fStack0000000000000164 * fStack0000000000000164 +
                                     (fVar48 - fVar33) * (fVar48 - fVar33) + fVar51 * fVar51)) {
                    if (uVar1 < *(uint *)(unaff_x19 + 0x18)) {
                      if (lVar11 != 0) {
                        lVar20 = *(long *)(lVar11 + 0x10);
                        fVar51 = *pfVar32;
                        fVar48 = *(float *)(lVar14 + 0x24);
                        fStack0000000000000164 = *(float *)(lVar14 + 0x28);
                        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                        if (lVar20 != 0) {
                          uVar49 = *(uint *)(lVar11 + 0x18);
                          if (uVar49 < *(uint *)(lVar20 + 0x18)) {
                            lVar20 = lVar20 + (long)(int)uVar49 * 0xc;
                            *(uint *)(lVar11 + 0x18) = uVar49 + 1;
                            *(float *)(lVar20 + 0x20) = fVar51;
                            *(float *)(lVar20 + 0x24) = fVar48;
                            *(float *)(lVar20 + 0x28) = fStack0000000000000164;
                          }
                          else {
                            FUN_0409f624(lVar11,*(undefined8 *)
                                                 (*(long *)(*(long *)(*(long *)puVar5 + 0x20) + 0xc0
                                                           ) + 0x70));
                          }
                          fVar51 = fStack00000000000001d4;
                          lVar11 = *(long *)(unaff_x26 + 0x20);
                          if (lVar11 != 0) {
                            fVar33 = (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -1,
                                                         *(undefined8 *)puVar4);
                            if (uVar1 < *(uint *)(unaff_x19 + 0x18)) {
                              fVar34 = *pfVar32;
                              fVar54 = *(float *)(lVar14 + 0x24);
                              fVar40 = *(float *)(lVar14 + 0x28);
                              if (DAT_06db4c77 == '\0') {
                                FUN_02d965b8(PTR_DAT_069fbb48);
                                DAT_06db4c77 = '\x01';
                              }
                              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                                thunk_FUN_02df485c();
                              }
                              fVar48 = fVar48 - fVar54;
                              fStack0000000000000164 = fStack0000000000000164 - fVar40;
                              in_stack_0000027c = fStack0000000000000164 * fStack0000000000000164;
                              fStack00000000000001d4 =
                                   fVar51 + SQRT(in_stack_0000027c +
                                                 (fVar33 - fVar34) * (fVar33 - fVar34) +
                                                 fVar48 * fVar48);
                              goto LAB_0316d2dc;
                            }
                            goto LAB_0316f2c4;
                          }
                        }
                      }
                      goto LAB_03168190;
                    }
                    goto LAB_0316f2c4;
                  }
                  if (lVar11 == 0) goto LAB_03168190;
                  if (*(uint *)(unaff_x19 + 0x18) <= uVar1) goto LAB_0316f2c4;
                  fStack0000000000000164 = *(float *)(lVar14 + 0x28);
                  in_stack_0000027c = *(float *)(lVar14 + 0x24);
                  FUN_0409f350(*pfVar32,lVar11,*(int *)(lVar11 + 0x18) + -1,
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
                if (*(uint *)(unaff_x19 + 0x18) <= uVar1) goto LAB_0316f2c4;
                fStack0000000000000164 = *(float *)(lVar14 + 0x28);
                in_stack_0000027c = *(float *)(lVar14 + 0x24);
                FUN_0409f350(*pfVar32,lVar11,*(int *)(lVar11 + 0x18) + -1,
                             *(undefined8 *)PTR_DAT_06a0b7d0);
              }
            }
            lVar11 = *(long *)(unaff_x26 + 0x20);
            if (lVar11 == 0) goto LAB_03168190;
            iVar26 = *(int *)(lVar11 + 0x18);
            uStack0000000000000110 =
                 FUN_0409f2f4(lVar11,iVar26 + -1,*(undefined8 *)PTR_DAT_069fd088);
            puVar4 = PTR_DAT_069fd088;
            lVar11 = *(long *)(unaff_x26 + 0x20);
            in_stack_00000278 = (float)uStack0000000000000110;
            if (lVar11 == 0) goto LAB_03168190;
            fVar51 = fStack0000000000000164;
            if (1 < *(int *)(lVar11 + 0x18)) {
              fStack0000000000000088 = in_stack_0000027c;
              fStack000000000000008c =
                   (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -2,
                                       *(undefined8 *)PTR_DAT_069fd088);
              lVar11 = *(long *)(unaff_x26 + 0x20);
              if (lVar11 == 0) goto LAB_03168190;
              fVar48 = fStack0000000000000088;
              fVar33 = fVar51;
              fVar34 = (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -1,*(undefined8 *)puVar4
                                          );
              if (DAT_06db4c75 == '\0') {
                FUN_02d965b8(PTR_DAT_069fbb48);
                DAT_06db4c75 = '\x01';
              }
              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              fStack000000000000008c = fStack000000000000008c - fVar34;
              fStack0000000000000088 = fStack0000000000000088 - fVar48;
              fVar51 = fVar51 - fVar33;
              in_stack_00000080._4_4_ =
                   SQRT(fVar51 * fVar51 +
                        fStack000000000000008c * fStack000000000000008c +
                        fStack0000000000000088 * fStack0000000000000088);
              if (in_stack_00000080._4_4_ <= DAT_010fd13c) {
                if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
                  FUN_02d965b8(plVar25);
                  *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
                }
                pfVar23 = *(float **)(*plVar25 + 0xb8);
                fStack000000000000008c = *pfVar23;
                fStack0000000000000088 = pfVar23[1];
                in_stack_00000080._4_4_ = pfVar23[2];
              }
              else {
                fStack000000000000008c = fStack000000000000008c / in_stack_00000080._4_4_;
                fStack0000000000000088 = fStack0000000000000088 / in_stack_00000080._4_4_;
                in_stack_00000080._4_4_ = fVar51 / in_stack_00000080._4_4_;
              }
            }
            lVar11 = *(long *)(in_stack_00000148 + 0x2c8);
            *(float *)(in_stack_00000148 + 0x2c0) =
                 *(float *)(in_stack_00000148 + 0x2c0) + fStack00000000000001d4;
            if (lVar11 == 0) goto LAB_03168190;
            lVar14 = *(long *)(lVar11 + 0x10);
            lVar20 = *(long *)PTR_DAT_069fc3e0;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar14 == 0) goto LAB_03168190;
            uVar49 = *(uint *)(lVar11 + 0x18);
            iStack00000000000000d4 = iVar26 + iStack00000000000000d4;
            fVar48 = fStack00000000000001d4;
            if (uVar49 < *(uint *)(lVar14 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar49 + 1;
              *(int *)(lVar14 + (long)(int)uVar49 * 4 + 0x20) = iStack00000000000000d4;
            }
            else {
              FUN_03fb3e1c(lVar11,iStack00000000000000d4,
                           *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
            }
            if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
            iVar26 = *(int *)(*(long *)(unaff_x26 + 0x78) + 0x18);
            in_stack_00000280 = fStack0000000000000164;
            if (iVar26 < 1) {
              iStack0000000000000108 = 3;
              unaff_x23 = in_stack_00000148;
              goto LAB_0316c620;
            }
            lVar11 = FUN_0400ff1c(in_stack_00000098,iVar29 + -2,*unaff_x21);
            if ((lVar11 == 0) || (lVar14 = *in_stack_00000090, lVar14 == 0)) goto LAB_03168190;
            iVar62 = *(int *)(lVar11 + 0xbc);
            fVar33 = (float)FUN_04059a68(lVar14,*(int *)(lVar14 + 0x18) + -1,
                                         *(undefined8 *)PTR_DAT_06a0a108);
            lVar11 = *in_stack_00000090;
            if (lVar11 == 0) goto LAB_03168190;
            if (1 < *(int *)(lVar11 + 0x18)) {
              fVar48 = (float)FUN_04059a68(lVar11,*(int *)(lVar11 + 0x18) + -2,
                                           *(undefined8 *)PTR_DAT_06a0a108);
              fVar48 = fVar33 - fVar48;
              fVar33 = fVar48;
            }
            puVar4 = PTR_DAT_069fd088;
            lVar11 = *(long *)(unaff_x26 + 0x78);
            if (lVar11 == 0) goto LAB_03168190;
            fVar34 = (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -1,
                                         *(undefined8 *)PTR_DAT_069fd088);
            if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
            fVar40 = fVar48;
            fVar54 = fVar51;
            fVar58 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),0,*(undefined8 *)puVar4);
            if (DAT_06db4c75 == '\0') {
              FUN_02d965b8(PTR_DAT_069fbb48);
              DAT_06db4c75 = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            fVar48 = fVar48 - fVar40;
            uVar18 = (ulong)(uint)DAT_010fd13c;
            fVar51 = SQRT((fVar51 - fVar54) * (fVar51 - fVar54) +
                          (fVar34 - fVar58) * (fVar34 - fVar58) + fVar48 * fVar48);
            if (fVar51 <= DAT_010fd13c) {
              if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
                FUN_02d965b8(plVar25);
                *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
              }
              fVar48 = *(float *)(*(long *)(*plVar25 + 0xb8) + 4);
            }
            else {
              fVar48 = fVar48 / fVar51;
            }
            puVar4 = PTR_DAT_069fd088;
            lVar11 = *(long *)(unaff_x26 + 0x78);
            if (lVar11 == 0) goto LAB_03168190;
            FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -1,*(undefined8 *)PTR_DAT_069fd088);
            lVar11 = *(long *)(unaff_x26 + 0x78);
            if (lVar11 == 0) goto LAB_03168190;
            fVar40 = fVar51;
            fVar34 = (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -1,*(undefined8 *)puVar4);
            if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
            uVar41 = (ulong)(uint)(float)iVar62;
            fVar54 = (float)iVar26 - (float)iVar62;
            if (1.0 <= fVar54) {
              fVar58 = 0.0;
              iVar62 = *(int *)(*(long *)(unaff_x26 + 0x78) + 0x18);
              iVar26 = 2;
              iVar28 = -2;
              do {
                fVar38 = (float)uVar41;
                if ((iVar26 - iVar62) + -1 < 0) {
                  lVar11 = *(long *)(unaff_x26 + 0x78);
                  if (lVar11 == 0) goto LAB_03168190;
                  fVar60 = (float)uVar18;
                  fVar36 = (float)FUN_0409f2f4(lVar11,iVar28 + *(int *)(lVar11 + 0x18),
                                               *(undefined8 *)PTR_DAT_069fd088);
                  if (DAT_06db4c77 == '\0') {
                    FUN_02d965b8(PTR_DAT_069fbb48);
                    DAT_06db4c77 = '\x01';
                  }
                  if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  lVar11 = *(long *)(unaff_x26 + 0x78);
                  if (lVar11 == 0) goto LAB_03168190;
                  fVar42 = fVar60 - (float)uVar18;
                  fVar58 = fVar58 + SQRT(fVar42 * fVar42 +
                                         (fVar36 - fVar34) * (fVar36 - fVar34) +
                                         (fVar38 - fVar40) * (fVar38 - fVar40));
                  fVar51 = (fVar33 / fVar54) * fVar48 + fVar51;
                  fVar34 = 1.0;
                  if (SQRT(fVar58 / fVar33) <= 1.0) {
                    fVar34 = SQRT(fVar58 / fVar33);
                  }
                  fVar40 = fVar51 + (fVar38 - fVar51) * fVar34;
                  uVar41 = (ulong)(uint)fVar40;
                  FUN_0409f350(fVar36,uVar41,fVar60,lVar11,iVar28 + *(int *)(lVar11 + 0x18),
                               *(undefined8 *)PTR_DAT_06a0b7d0);
                  uVar18 = (ulong)(uint)fVar60;
                  fVar34 = fVar36;
                }
                fVar38 = (float)iVar26;
                iVar26 = iVar26 + 1;
                iVar28 = iVar28 + -1;
              } while (fVar38 <= fVar54);
              iStack0000000000000108 = 3;
              unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
              unaff_x23 = in_stack_00000148;
            }
            else {
              iStack0000000000000108 = 3;
              unaff_x23 = in_stack_00000148;
            }
          }
          else {
            if ((*(long *)(unaff_x23 + 0x68) == 0) ||
               (lVar11 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar24 & 0xffffffff,*unaff_x21),
               puVar4 = PTR_DAT_069fd088, lVar11 == 0)) goto LAB_03168190;
            if (*(int *)(lVar11 + 0x6c) == 4) {
              if ((*(long *)(unaff_x23 + 0x68) != 0) &&
                 (lVar11 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar24 & 0xffffffff,*unaff_x21),
                 lVar11 != 0)) {
                fStack00000000000001d4 = 0.0;
                *(undefined8 *)(unaff_x26 + 0x20) = *(undefined8 *)(lVar11 + 0x1d8);
                lVar11 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ff188);
                FUN_040594d0(lVar11,*(undefined8 *)PTR_DAT_069ff180);
                if (lVar11 != 0) {
                  lVar14 = *(long *)(lVar11 + 0x10);
                  lVar20 = *(long *)PTR_DAT_069ff178;
                  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                  if (lVar14 != 0) {
                    uVar49 = *(uint *)(lVar11 + 0x18);
                    if (uVar49 < *(uint *)(lVar14 + 0x18)) {
                      *(uint *)(lVar11 + 0x18) = uVar49 + 1;
                      *(undefined4 *)(lVar14 + (long)(int)uVar49 * 4 + 0x20) = 0;
                    }
                    else {
                      FUN_04059d64(0,lVar11,*(undefined8 *)
                                             (*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
                    }
                    lVar14 = *(long *)(unaff_x26 + 0x20);
                    if (lVar14 != 0) {
                      iVar26 = 1;
                      while( true ) {
                        fVar51 = fStack00000000000001d4;
                        fVar33 = (float)uVar41;
                        fVar48 = (float)uVar18;
                        if (*(int *)(lVar14 + 0x18) <= iVar26) break;
                        fVar34 = (float)FUN_0409f2f4(lVar14,iVar26 + -1,*(undefined8 *)puVar4);
                        if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                        fVar40 = fVar48;
                        fVar54 = fVar33;
                        fVar58 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),iVar26,
                                                     *(undefined8 *)puVar4);
                        if (DAT_06db4c77 == '\0') {
                          FUN_02d965b8(PTR_DAT_069fbb48);
                          DAT_06db4c77 = '\x01';
                        }
                        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                          thunk_FUN_02df485c();
                        }
                        fVar33 = fVar33 - fVar54;
                        uVar41 = (ulong)(uint)fVar33;
                        lVar14 = *(long *)(lVar11 + 0x10);
                        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                        uVar18 = (ulong)(uint)(fVar33 * fVar33);
                        fStack00000000000001d4 =
                             fVar51 + SQRT(fVar33 * fVar33 +
                                           (fVar34 - fVar58) * (fVar34 - fVar58) +
                                           (fVar48 - fVar40) * (fVar48 - fVar40));
                        if (lVar14 == 0) goto LAB_03168190;
                        uVar49 = *(uint *)(lVar11 + 0x18);
                        if (uVar49 < *(uint *)(lVar14 + 0x18)) {
                          *(uint *)(lVar11 + 0x18) = uVar49 + 1;
                          *(float *)(lVar14 + (long)(int)uVar49 * 4 + 0x20) = fStack00000000000001d4
                          ;
                        }
                        else {
                          FUN_04059d64(lVar11,*(undefined8 *)
                                               (*(long *)(*(long *)(*(long *)PTR_DAT_069ff178 + 0x20
                                                                   ) + 0xc0) + 0x70));
                        }
                        lVar14 = *(long *)(unaff_x26 + 0x20);
                        iVar26 = iVar26 + 1;
                        if (lVar14 == 0) goto LAB_03168190;
                      }
                      lVar14 = *(long *)(unaff_x26 + 0x28);
                      *pfVar15 = *pfVar15 + fStack00000000000001d4;
                      if (lVar14 != 0) {
                        lVar20 = *(long *)(lVar14 + 0x10);
                        lVar22 = *(long *)PTR_DAT_069ff178;
                        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                        if (lVar20 != 0) {
                          uVar49 = *(uint *)(lVar14 + 0x18);
                          if (uVar49 < *(uint *)(lVar20 + 0x18)) {
                            *(uint *)(lVar14 + 0x18) = uVar49 + 1;
                            *(undefined4 *)(lVar20 + (long)(int)uVar49 * 4 + 0x20) = 0;
                          }
                          else {
                            FUN_04059d64(0,lVar14,*(undefined8 *)
                                                   (*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) +
                                                   0x70));
                          }
                          lVar14 = *in_stack_000000e0;
                          if (lVar14 != 0) {
                            lVar20 = *(long *)(lVar14 + 0x10);
                            lVar22 = *(long *)PTR_DAT_069ff178;
                            *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                            if (lVar20 != 0) {
                              uVar49 = *(uint *)(lVar14 + 0x18);
                              if (uVar49 < *(uint *)(lVar20 + 0x18)) {
                                *(uint *)(lVar14 + 0x18) = uVar49 + 1;
                                *(undefined4 *)(lVar20 + (long)(int)uVar49 * 4 + 0x20) = 0;
                              }
                              else {
                                FUN_04059d64(0,lVar14,*(undefined8 *)
                                                       (*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) +
                                                       0x70));
                              }
                              lVar14 = *(long *)(unaff_x26 + 0x20);
                              if (lVar14 != 0) {
                                iVar26 = 0;
                                while (iVar26 < *(int *)(lVar14 + 0x18)) {
                                  lVar14 = *(long *)(unaff_x26 + 0x28);
                                  fVar51 = (float)FUN_04059a68(lVar11,iVar26,
                                                               *(undefined8 *)PTR_DAT_06a0a108);
                                  if (lVar14 == 0) goto LAB_03168190;
                                  lVar20 = *(long *)(lVar14 + 0x10);
                                  lVar22 = *(long *)PTR_DAT_069ff178;
                                  *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                                  if (lVar20 == 0) goto LAB_03168190;
                                  uVar49 = *(uint *)(lVar14 + 0x18);
                                  if (uVar49 < *(uint *)(lVar20 + 0x18)) {
                                    *(uint *)(lVar14 + 0x18) = uVar49 + 1;
                                    *(float *)(lVar20 + (long)(int)uVar49 * 4 + 0x20) =
                                         fVar51 / fStack00000000000001d4;
                                  }
                                  else {
                                    FUN_04059d64(lVar14,*(undefined8 *)
                                                         (*(long *)(*(long *)(lVar22 + 0x20) + 0xc0)
                                                         + 0x70));
                                  }
                                  lVar14 = *in_stack_000000e0;
                                  if (lVar14 == 0) goto LAB_03168190;
                                  lVar20 = *(long *)(lVar14 + 0x10);
                                  lVar22 = *(long *)PTR_DAT_069ff178;
                                  *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                                  if (lVar20 == 0) goto LAB_03168190;
                                  uVar49 = *(uint *)(lVar14 + 0x18);
                                  if (uVar49 < *(uint *)(lVar20 + 0x18)) {
                                    *(uint *)(lVar14 + 0x18) = uVar49 + 1;
                                    *(undefined4 *)(lVar20 + (long)(int)uVar49 * 4 + 0x20) = 0;
                                  }
                                  else {
                                    FUN_04059d64(0,lVar14,*(undefined8 *)
                                                           (*(long *)(*(long *)(lVar22 + 0x20) +
                                                                     0xc0) + 0x70));
                                  }
                                  lVar14 = *(long *)(unaff_x26 + 0x20);
                                  iVar26 = iVar26 + 1;
                                  if (lVar14 == 0) goto LAB_03168190;
                                }
                                iStack0000000000000108 = 4;
                                unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
                                unaff_x23 = in_stack_00000148;
                                goto LAB_0316c620;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              goto LAB_03168190;
            }
          }
          goto LAB_0316c620;
        }
      }
      uVar49 = *(uint *)(unaff_x19 + 0x18);
      fStack0000000000000164 = in_stack_00000280;
      if (uVar30 == 1) {
        if ((ulong)uVar49 < 2) goto LAB_0316f2c4;
        fStack0000000000000164 = *(float *)(lVar11 + 0x28);
        *(undefined8 *)(unaff_x26 + 0x60) = *(undefined8 *)pfVar23;
      }
      if (uVar49 <= uVar1) goto LAB_0316f2c4;
      fVar51 = *(float *)(lVar14 + 0x28);
      uVar43 = *(undefined8 *)pfVar32;
      uVar50 = *(undefined8 *)pfVar23;
      fVar47 = *(float *)(lVar11 + 0x28);
      if (DAT_06db4c75 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c75 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar33 = (float)uVar43 - (float)uVar50;
      fVar34 = (float)((ulong)uVar43 >> 0x20) - (float)((ulong)uVar50 >> 0x20);
      fVar51 = fVar51 - fVar47;
      fVar47 = SQRT(fVar51 * fVar51 + fVar33 * fVar33 + fVar34 * fVar34);
      uVar18 = (ulong)(uint)fVar47;
      if (fVar47 <= DAT_010fd13c) {
        if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
          FUN_02d965b8(plVar25);
          *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
        }
        uVar43 = **(undefined8 **)(*plVar25 + 0xb8);
        fVar51 = *(float *)(*(undefined8 **)(*plVar25 + 0xb8) + 1);
      }
      else {
        fVar51 = fVar51 / fVar47;
        uVar43 = CONCAT44(fVar34 / fVar47,fVar33 / fVar47);
      }
      if (*(uint *)(unaff_x19 + 0x18) <= uVar1) goto LAB_0316f2c4;
      fVar47 = *(float *)(lVar14 + 0x28);
      uVar50 = *(undefined8 *)pfVar32;
      uVar53 = *(undefined8 *)pfVar23;
      fVar33 = *(float *)(lVar11 + 0x28);
      if (DAT_06db4c77 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c77 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar34 = (float)uVar50 - (float)uVar53;
      fVar40 = (float)((ulong)uVar50 >> 0x20) - (float)((ulong)uVar53 >> 0x20);
      fVar47 = fVar47 - fVar33;
      fStack00000000000001d4 = SQRT(fVar47 * fVar47 + fVar34 * fVar34 + fVar40 * fVar40);
      if (*(uint *)(unaff_x19 + 0x18) <= uVar1) goto LAB_0316f2c4;
      uStack0000000000000110 = (ulong)(uint)in_stack_00000278;
      fVar33 = *pfVar32;
      fVar47 = *(float *)(lVar14 + 0x28);
      if (DAT_06db4c77 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c77 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar47 = fVar47 - fStack0000000000000164;
      fVar47 = SQRT((fVar33 - in_stack_00000278) * (fVar33 - in_stack_00000278) + fVar47 * fVar47) +
               0.0;
      fVar33 = 0.0;
      if (uVar30 != 1) {
        fVar33 = fStack000000000000010c;
      }
      uVar12 = (ulong)(uint)fVar33;
      uVar41 = uVar12;
      lVar20 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ff188);
      FUN_040594d0(lVar20,*(undefined8 *)PTR_DAT_069ff180);
      if (fVar33 < fStack00000000000001d4 - fStack000000000000010c) {
        fVar33 = *(float *)((ulong)&stack0x00000278 | 4);
        do {
          if (*(uint *)(unaff_x19 + 0x18) <= uVar1) goto LAB_0316f2c4;
          uVar50 = *(undefined8 *)pfVar32;
          fVar34 = *(float *)(lVar14 + 0x28);
          if (DAT_06db4c77 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c77 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fVar38 = (float)uVar12;
          fVar40 = (float)uVar43 * fVar38 + in_stack_00000278;
          fVar54 = (float)((ulong)uVar43 >> 0x20) * fVar38 + fVar33;
          uVar53 = CONCAT44(fVar54,fVar40);
          fVar58 = fVar51 * fVar38 + fStack0000000000000164;
          fVar40 = fVar40 - (float)uVar50;
          fVar54 = fVar54 - (float)((ulong)uVar50 >> 0x20);
          fVar34 = fVar58 - fVar34;
          fVar34 = SQRT(fVar34 * fVar34 + fVar40 * fVar40 + fVar54 * fVar54);
          uVar18 = (ulong)(uint)fVar34;
          if (fVar46 < fVar34) {
            _uStack00000000000001b0 = uVar53;
            in_stack_000001b8 = fVar58;
            if (*(char *)(unaff_x23 + 0x5d6) != '\0') {
              if (*(long *)(unaff_x23 + 0x20) == 0) goto LAB_03168190;
              FUN_03199614(*(long *)(unaff_x23 + 0x20),&stack0x000001b0,0);
            }
            if ((*(long *)(unaff_x23 + 0x68) == 0) ||
               (lVar22 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar24 & 0xffffffff,*unaff_x21),
               lVar22 == 0)) goto LAB_03168190;
            if (*(float *)(lVar22 + 0x100) == 0.0) {
              if ((*(long *)(unaff_x23 + 0x68) == 0) ||
                 (lVar22 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar24 & 0xffffffff,*unaff_x21),
                 lVar22 == 0)) goto LAB_03168190;
              if (*(float *)(lVar22 + 0x104) != 0.0) goto LAB_0316a920;
              if ((*(long *)(unaff_x23 + 0x68) == 0) ||
                 (lVar22 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar24 & 0xffffffff,*unaff_x21),
                 lVar22 == 0)) goto LAB_03168190;
              if (*(float *)(lVar22 + 0x110) != 0.0) goto LAB_0316a920;
              if ((*(long *)(unaff_x23 + 0x68) == 0) ||
                 (lVar22 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar24 & 0xffffffff,*unaff_x21),
                 lVar22 == 0)) goto LAB_03168190;
              if (*(float *)(lVar22 + 0x114) != 0.0) goto LAB_0316a920;
              lVar22 = *in_stack_000000e0;
              if (lVar22 == 0) goto LAB_03168190;
              lVar17 = *(long *)(lVar22 + 0x10);
              lVar21 = *(long *)PTR_DAT_069ff178;
              *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
              if (lVar17 == 0) goto LAB_03168190;
              uVar49 = *(uint *)(lVar22 + 0x18);
              if (uVar49 < *(uint *)(lVar17 + 0x18)) {
                *(uint *)(lVar22 + 0x18) = uVar49 + 1;
                *(undefined4 *)(lVar17 + (long)(int)uVar49 * 4 + 0x20) = 0;
              }
              else {
                FUN_04059d64(0,lVar22,*(undefined8 *)
                                       (*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
              }
            }
            else {
LAB_0316a920:
              if (*(long *)(unaff_x23 + 0x68) == 0) goto LAB_03168190;
              fVar34 = *pfVar15;
              uVar50 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar24 & 0xffffffff,*unaff_x21);
              FUN_0316f6a0(fVar38 + fVar34,fVar48,uVar50,uVar50,&stack0x0000022c,&stack0x00000228,
                           &stack0x00000224,&stack0x00000218,&stack0x000001b0,&stack0x00000214);
            }
            puVar4 = PTR_DAT_069fbee0;
            lVar22 = *(long *)(unaff_x26 + 0x20);
            if (lVar22 == 0) goto LAB_03168190;
            lVar17 = *(long *)(lVar22 + 0x10);
            uVar18 = (ulong)(uint)in_stack_000001b8;
            *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
            if (lVar17 == 0) goto LAB_03168190;
            uVar49 = *(uint *)(lVar22 + 0x18);
            if (uVar49 < *(uint *)(lVar17 + 0x18)) {
              lVar17 = lVar17 + (long)(int)uVar49 * 0xc;
              *(uint *)(lVar22 + 0x18) = uVar49 + 1;
              *(undefined4 *)(lVar17 + 0x20) = uStack00000000000001b0;
              *(undefined4 *)(lVar17 + 0x24) = uStack00000000000001b4;
              *(float *)(lVar17 + 0x28) = in_stack_000001b8;
            }
            else {
              FUN_0409f624(lVar22,*(undefined8 *)
                                   (*(long *)(*(long *)(*(long *)puVar4 + 0x20) + 0xc0) + 0x70));
            }
            if (lVar20 == 0) goto LAB_03168190;
            lVar22 = *(long *)(lVar20 + 0x10);
            lVar17 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
            if (lVar22 == 0) goto LAB_03168190;
            uVar49 = *(uint *)(lVar20 + 0x18);
            if (uVar49 < *(uint *)(lVar22 + 0x18)) {
              *(uint *)(lVar20 + 0x18) = uVar49 + 1;
              *(undefined4 *)(lVar22 + (long)(int)uVar49 * 4 + 0x20) = 0;
            }
            else {
              FUN_04059d64(lVar20,*(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70)
                          );
            }
            lVar22 = *in_stack_000000b8;
            if (lVar22 == 0) goto LAB_03168190;
            lVar17 = *(long *)(lVar22 + 0x10);
            lVar21 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
            if (lVar17 == 0) goto LAB_03168190;
            uVar49 = *(uint *)(lVar22 + 0x18);
            if (uVar49 < *(uint *)(lVar17 + 0x18)) {
              *(uint *)(lVar22 + 0x18) = uVar49 + 1;
              *(undefined4 *)(lVar17 + (long)(int)uVar49 * 4 + 0x20) = 0;
            }
            else {
              FUN_04059d64(0,lVar22,*(undefined8 *)
                                     (*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
            }
            lVar22 = *(long *)(unaff_x26 + 0x28);
            if (lVar22 == 0) goto LAB_03168190;
            lVar17 = *(long *)(lVar22 + 0x10);
            lVar21 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
            if (lVar17 == 0) goto LAB_03168190;
            uVar49 = *(uint *)(lVar22 + 0x18);
            if (uVar49 < *(uint *)(lVar17 + 0x18)) {
              *(uint *)(lVar22 + 0x18) = uVar49 + 1;
              *(float *)(lVar17 + (long)(int)uVar49 * 4 + 0x20) = fVar38 / fStack00000000000001d4;
            }
            else {
              FUN_04059d64(lVar22,*(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70)
                          );
            }
          }
          uVar41 = (ulong)(uint)fStack000000000000010c;
          uVar12 = (ulong)(uint)(fVar38 + fStack000000000000010c);
        } while (fVar38 + fStack000000000000010c < fStack00000000000001d4 - fStack000000000000010c);
      }
      fStack000000000000012c = (float)uVar18;
      fStack0000000000000128 = (float)uVar41;
      if (*(char *)(unaff_x23 + 0x5d6) == '\0') {
        if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
        lVar22 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),uVar24 & 0xffffffff,
                              *(undefined8 *)PTR_DAT_06a0b440);
        fStack000000000000012c = (float)uVar18;
        fStack0000000000000128 = (float)uVar41;
        if (lVar22 == 0) goto LAB_03168190;
        if (*(int *)(lVar22 + 0x6c) == 1) {
          if (*(long *)(unaff_x26 + 0x28) == 0) goto LAB_03168190;
          iVar26 = 0;
          puVar31 = (undefined4 *)(unaff_x19 + 0x20 + uVar24 * 0xc);
          lVar22 = *(long *)(unaff_x26 + 0x28);
          while( true ) {
            fStack000000000000012c = (float)uVar18;
            fStack0000000000000128 = (float)uVar41;
            if (*(int *)(lVar22 + 0x18) <= iVar26) break;
            uVar18 = (ulong)*(uint *)(unaff_x19 + 0x18);
            if ((((uVar18 <= uVar24) || (uVar18 <= uVar30)) || (uVar18 <= uVar1)) ||
               (uVar18 <= uVar30 + 2)) goto LAB_0316f2c4;
            uVar45 = *puVar31;
            fVar51 = (float)puVar31[1];
            uVar49 = puVar31[2];
            fVar48 = *pfVar23;
            uVar55 = *(undefined4 *)(lVar11 + 0x24);
            uVar59 = *(undefined4 *)(lVar11 + 0x28);
            FUN_04059a68(lVar22,iVar26,*(undefined8 *)PTR_DAT_06a0a108);
            FUN_0316f340(uVar45,fVar51,uVar49,fVar48,uVar55,uVar59);
            unaff_x26 = &stack0x00000218;
            if (((in_stack_00000238 == 0) ||
                (uVar45 = FUN_0409f2f4(in_stack_00000238,iVar26,*(undefined8 *)PTR_DAT_069fd088),
                lVar20 == 0)) ||
               (fVar48 = (float)FUN_04059a68(lVar20,iVar26,*(undefined8 *)PTR_DAT_06a0a108),
               in_stack_00000238 == 0)) goto LAB_03168190;
            uVar41 = (ulong)(uint)(fVar51 + fVar48);
            uVar18 = (ulong)uVar49;
            FUN_0409f350(uVar45,in_stack_00000238,iVar26,*(undefined8 *)PTR_DAT_06a0b7d0);
            iVar26 = iVar26 + 1;
            lVar22 = in_stack_00000240;
            if (in_stack_00000240 == 0) goto LAB_03168190;
          }
        }
      }
      puVar4 = PTR_DAT_069fbee0;
      lVar11 = *(long *)(unaff_x26 + 0x20);
      if (lVar11 == 0) goto LAB_03168190;
      if (*(int *)(lVar11 + 0x18) == 0) {
        if (*(uint *)(unaff_x19 + 0x18) <= uVar1) goto LAB_0316f2c4;
        lVar20 = *(long *)(lVar11 + 0x10);
        fVar51 = *pfVar32;
        uVar45 = *(undefined4 *)(lVar14 + 0x24);
        uVar55 = *(undefined4 *)(lVar14 + 0x28);
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar20 == 0) goto LAB_03168190;
        if (*(int *)(lVar20 + 0x18) == 0) {
          FUN_0409f624(lVar11,*(undefined8 *)
                               (*(long *)(*(long *)(*(long *)puVar4 + 0x20) + 0xc0) + 0x70));
        }
        else {
          *(undefined4 *)(lVar11 + 0x18) = 1;
          *(float *)(lVar20 + 0x20) = fVar51;
          *(undefined4 *)(lVar20 + 0x24) = uVar45;
          *(undefined4 *)(lVar20 + 0x28) = uVar55;
        }
        if (*(uint *)(unaff_x19 + 0x18) <= uVar1) goto LAB_0316f2c4;
        fVar48 = *pfVar32;
        fVar51 = *(float *)(lVar14 + 0x24);
        fStack000000000000012c = *(float *)(lVar14 + 0x28);
        if (DAT_06db4c77 == '\0') {
          FUN_02d965b8(PTR_DAT_069fbb48);
          DAT_06db4c77 = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        fVar51 = in_stack_0000027c - fVar51;
        lVar11 = *(long *)(unaff_x26 + 0x28);
        fStack000000000000012c = fStack0000000000000164 - fStack000000000000012c;
        fStack0000000000000128 = fStack000000000000012c * fStack000000000000012c;
        fStack00000000000001d4 =
             SQRT(fStack0000000000000128 +
                  (in_stack_00000278 - fVar48) * (in_stack_00000278 - fVar48) + fVar51 * fVar51);
        if (lVar11 == 0) goto LAB_03168190;
        lVar20 = *(long *)(lVar11 + 0x10);
        lVar22 = *(long *)PTR_DAT_069ff178;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar20 == 0) goto LAB_03168190;
        uVar49 = *(uint *)(lVar11 + 0x18);
        if (uVar49 < *(uint *)(lVar20 + 0x18)) {
          *(uint *)(lVar11 + 0x18) = uVar49 + 1;
          *(undefined4 *)(lVar20 + (long)(int)uVar49 * 4 + 0x20) = 0x3f800000;
        }
        else {
          FUN_04059d64(0x3f800000,lVar11,
                       *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
        }
        lVar11 = *in_stack_000000e0;
        if (lVar11 == 0) goto LAB_03168190;
        lVar20 = *(long *)(lVar11 + 0x10);
        lVar22 = *(long *)PTR_DAT_069ff178;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar20 == 0) goto LAB_03168190;
        uVar49 = *(uint *)(lVar11 + 0x18);
        if (uVar49 < *(uint *)(lVar20 + 0x18)) {
          *(uint *)(lVar11 + 0x18) = uVar49 + 1;
          *(undefined4 *)(lVar20 + (long)(int)uVar49 * 4 + 0x20) = 0;
        }
        else {
          FUN_04059d64(0,lVar11,*(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
        }
        lVar11 = *in_stack_000000b8;
        if (lVar11 == 0) goto LAB_03168190;
        lVar20 = *(long *)(lVar11 + 0x10);
        lVar22 = *(long *)PTR_DAT_069ff178;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar20 == 0) goto LAB_03168190;
        uVar49 = *(uint *)(lVar11 + 0x18);
        if (uVar49 < *(uint *)(lVar20 + 0x18)) {
          *(uint *)(lVar11 + 0x18) = uVar49 + 1;
          *(undefined4 *)(lVar20 + (long)(int)uVar49 * 4 + 0x20) = 0;
        }
        else {
          FUN_04059d64(0,lVar11,*(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
        }
      }
      unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
      puVar4 = PTR_DAT_069fd088;
      plVar25 = (long *)PTR_DAT_069fb978;
      lVar11 = *(long *)(unaff_x26 + 0x20);
      if (lVar11 == 0) goto LAB_03168190;
      unaff_x29 = &PTR_FUN_06db4000;
      if (0 < *(int *)(lVar11 + 0x18)) {
        fVar51 = (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -1,
                                     *(undefined8 *)PTR_DAT_069fd088);
        if (*(uint *)(unaff_x19 + 0x18) <= uVar1) goto LAB_0316f2c4;
        fVar48 = fStack0000000000000128 - *(float *)(lVar14 + 0x24);
        fStack000000000000012c = fStack000000000000012c - *(float *)(lVar14 + 0x28);
        fStack0000000000000128 = in_stack_000000a0._4_4_;
        if (in_stack_000000a0._4_4_ <=
            fStack000000000000012c * fStack000000000000012c +
            (fVar51 - *pfVar32) * (fVar51 - *pfVar32) + fVar48 * fVar48) {
          lVar11 = *(long *)(unaff_x26 + 0x20);
          if (lVar11 == 0) goto LAB_03168190;
          fVar51 = in_stack_000000a0._4_4_;
          fVar48 = (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -1,*(undefined8 *)puVar4);
          if (*(uint *)(unaff_x19 + 0x18) <= uVar1) goto LAB_0316f2c4;
          fVar33 = *pfVar32;
          fVar40 = *(float *)(lVar14 + 0x24);
          fVar34 = *(float *)(lVar14 + 0x28);
          if (DAT_06db4c77 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c77 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          puVar5 = PTR_DAT_069fbee0;
          fVar51 = fVar51 - fVar40;
          lVar11 = *(long *)(unaff_x26 + 0x20);
          fStack000000000000012c = fStack000000000000012c - fVar34;
          if (fVar46 <= SQRT(fStack000000000000012c * fStack000000000000012c +
                             (fVar48 - fVar33) * (fVar48 - fVar33) + fVar51 * fVar51)) {
            if (*(uint *)(unaff_x19 + 0x18) <= uVar1) goto LAB_0316f2c4;
            if (lVar11 == 0) goto LAB_03168190;
            lVar20 = *(long *)(lVar11 + 0x10);
            fVar51 = *pfVar32;
            fVar48 = *(float *)(lVar14 + 0x24);
            fStack000000000000012c = *(float *)(lVar14 + 0x28);
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar20 == 0) goto LAB_03168190;
            uVar49 = *(uint *)(lVar11 + 0x18);
            if (uVar49 < *(uint *)(lVar20 + 0x18)) {
              lVar20 = lVar20 + (long)(int)uVar49 * 0xc;
              *(uint *)(lVar11 + 0x18) = uVar49 + 1;
              *(float *)(lVar20 + 0x20) = fVar51;
              *(float *)(lVar20 + 0x24) = fVar48;
              *(float *)(lVar20 + 0x28) = fStack000000000000012c;
            }
            else {
              FUN_0409f624(lVar11,*(undefined8 *)
                                   (*(long *)(*(long *)(*(long *)puVar5 + 0x20) + 0xc0) + 0x70));
            }
            fVar51 = fStack00000000000001d4;
            lVar11 = *(long *)(unaff_x26 + 0x20);
            if (lVar11 == 0) goto LAB_03168190;
            fVar33 = (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -1,*(undefined8 *)puVar4);
            if (*(uint *)(unaff_x19 + 0x18) <= uVar1) goto LAB_0316f2c4;
            fVar34 = *pfVar32;
            fVar54 = *(float *)(lVar14 + 0x24);
            fVar40 = *(float *)(lVar14 + 0x28);
            if (DAT_06db4c77 == '\0') {
              FUN_02d965b8(PTR_DAT_069fbb48);
              DAT_06db4c77 = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            fVar48 = fVar48 - fVar54;
            lVar11 = *(long *)(unaff_x26 + 0x28);
            fStack000000000000012c = fStack000000000000012c - fVar40;
            fStack0000000000000128 = fStack000000000000012c * fStack000000000000012c;
            fStack00000000000001d4 =
                 fVar51 + SQRT(fStack0000000000000128 +
                               (fVar33 - fVar34) * (fVar33 - fVar34) + fVar48 * fVar48);
            if (lVar11 == 0) goto LAB_03168190;
            lVar14 = *(long *)(lVar11 + 0x10);
            lVar20 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar14 == 0) goto LAB_03168190;
            uVar49 = *(uint *)(lVar11 + 0x18);
            if (uVar49 < *(uint *)(lVar14 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar49 + 1;
              *(undefined4 *)(lVar14 + (long)(int)uVar49 * 4 + 0x20) = 0x3f800000;
            }
            else {
              FUN_04059d64(0x3f800000,lVar11,
                           *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
            }
            lVar11 = *in_stack_000000e0;
            if (lVar11 == 0) goto LAB_03168190;
            lVar14 = *(long *)(lVar11 + 0x10);
            lVar20 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar14 == 0) goto LAB_03168190;
            uVar49 = *(uint *)(lVar11 + 0x18);
            if (uVar49 < *(uint *)(lVar14 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar49 + 1;
              *(undefined4 *)(lVar14 + (long)(int)uVar49 * 4 + 0x20) = 0;
            }
            else {
              FUN_04059d64(0,lVar11,*(undefined8 *)
                                     (*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
            }
          }
          else {
            if (lVar11 == 0) goto LAB_03168190;
            if (*(uint *)(unaff_x19 + 0x18) <= uVar1) goto LAB_0316f2c4;
            fStack000000000000012c = *(float *)(lVar14 + 0x28);
            fStack0000000000000128 = *(float *)(lVar14 + 0x24);
            FUN_0409f350(*pfVar32,lVar11,*(int *)(lVar11 + 0x18) + -1,
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
      iVar26 = *(int *)(lVar11 + 0x18);
      in_stack_00000278 = (float)FUN_0409f2f4(lVar11,iVar26 + -1,*(undefined8 *)PTR_DAT_069fd088);
      lVar11 = *(long *)(in_stack_00000148 + 0x2c8);
      _fStack0000000000000130 = (ulong)(uint)in_stack_00000278;
      *(float *)(in_stack_00000148 + 0x2c0) =
           *(float *)(in_stack_00000148 + 0x2c0) + fStack00000000000001d4;
      if (lVar11 == 0) goto LAB_03168190;
      lVar14 = *(long *)(lVar11 + 0x10);
      lVar20 = *(long *)PTR_DAT_069fc3e0;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (lVar14 == 0) goto LAB_03168190;
      uVar49 = *(uint *)(lVar11 + 0x18);
      iStack00000000000000d4 = iVar26 + iStack00000000000000d4;
      if (uVar49 < *(uint *)(lVar14 + 0x18)) {
        *(uint *)(lVar11 + 0x18) = uVar49 + 1;
        *(int *)(lVar14 + (long)(int)uVar49 * 4 + 0x20) = iStack00000000000000d4;
      }
      else {
        FUN_03fb3e1c(lVar11,iStack00000000000000d4,
                     *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
      }
      if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
         (lVar11 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),uVar24 & 0xffffffff,*unaff_x21),
         lVar11 == 0)) goto LAB_03168190;
      iStack0000000000000108 = *(int *)(lVar11 + 0x6c);
      unaff_x23 = in_stack_00000148;
      in_stack_0000027c = fStack0000000000000128;
      in_stack_00000280 = fStack000000000000012c;
    }
LAB_0316c620:
    if ((*(long *)(unaff_x23 + 0x68) == 0) ||
       (lVar11 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar24 & 0xffffffff,*unaff_x21),
       fVar51 = fStack00000000000001d4, lVar11 == 0)) goto LAB_03168190;
    if (*(char *)(lVar11 + 0xb8) != '\0') {
      if (*(long *)(unaff_x23 + 0x68) == 0) goto LAB_03168190;
      uVar43 = *(undefined8 *)(unaff_x23 + 0x20);
      uVar50 = *(undefined8 *)(unaff_x26 + 0x28);
      uVar45 = *(undefined4 *)(unaff_x23 + 0x128);
      lVar11 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar30 & 0xffffffff,
                            *(undefined8 *)PTR_DAT_06a0b440);
      if (lVar11 == 0) goto LAB_03168190;
      FUN_031098f4(uVar45,fVar44,fVar51,uVar43,&stack0x00000238,uVar50,&stack0x00000248,
                   *(undefined1 *)(lVar11 + 0xb8),*(undefined8 *)(unaff_x26 + 0x78),
                   in_stack_00000070,in_stack_000000e0);
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
    fVar51 = in_stack_00000080._4_4_;
    FUN_0316fb80(fStack000000000000008c,unaff_x23,extraout_x1,uVar30 & 0xffffffff,unaff_x19,
                 &stack0x00000268,0,*(undefined8 *)(unaff_x26 + 0x78));
    if (iVar29 + 3 < *(int *)(unaff_x19 + 0x18)) {
      FUN_0317018c(unaff_x23,*(undefined8 *)(unaff_x23 + 0x68),uVar30 & 0xffffffff,unaff_x19,
                   &stack0x00000258,0);
    }
    puVar5 = PTR_DAT_069ff178;
    puVar4 = PTR_DAT_069fd088;
    lVar11 = *in_stack_00000090;
    if (lVar11 == 0) goto LAB_03168190;
    lVar14 = *(long *)(lVar11 + 0x10);
    fVar33 = *pfVar15;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (lVar14 == 0) goto LAB_03168190;
    uVar49 = *(uint *)(lVar11 + 0x18);
    if (uVar49 < *(uint *)(lVar14 + 0x18)) {
      *(uint *)(lVar11 + 0x18) = uVar49 + 1;
      *(float *)(lVar14 + (long)(int)uVar49 * 4 + 0x20) = fVar33;
    }
    else {
      FUN_04059d64(lVar11,*(undefined8 *)
                           (*(long *)(*(long *)(*(long *)puVar5 + 0x20) + 0xc0) + 0x70));
    }
    if ((long)uVar30 < (long)*(int *)(in_stack_00000098 + 0x18)) {
      lVar11 = FUN_0400ff1c(in_stack_00000098,uVar30 & 0xffffffff,*unaff_x21);
      lVar14 = FUN_0400ff1c(in_stack_00000098,uVar30 & 0xffffffff,*unaff_x21);
      lVar20 = *(long *)(unaff_x26 + 0x78);
      if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      fVar33 = (float)FUN_0409f2f4(lVar20,*(int *)(lVar20 + 0x18) + -1,*(undefined8 *)puVar4);
      lVar20 = *(long *)(unaff_x26 + 0x78);
      if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      fVar34 = fVar48;
      fVar40 = fVar51;
      fVar54 = (float)FUN_0409f2f4(lVar20,*(int *)(lVar20 + 0x18) + -2,*(undefined8 *)puVar4);
      if (DAT_06db4c75 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c75 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar33 = fVar33 - fVar54;
      fVar48 = fVar48 - fVar34;
      fVar51 = fVar51 - fVar40;
      fVar34 = SQRT(fVar51 * fVar51 + fVar33 * fVar33 + fVar48 * fVar48);
      if (fVar34 <= DAT_010fd13c) {
        if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
          FUN_02d965b8(plVar25);
          *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
        }
        pfVar23 = *(float **)(*plVar25 + 0xb8);
        fVar33 = *pfVar23;
        fVar48 = pfVar23[1];
        fVar51 = pfVar23[2];
      }
      else {
        fVar33 = fVar33 / fVar34;
        fVar48 = fVar48 / fVar34;
        fVar51 = fVar51 / fVar34;
      }
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      *(float *)(lVar14 + 0x94) = fVar33;
      *(float *)(lVar14 + 0x98) = fVar48;
      *(float *)(lVar14 + 0x9c) = fVar51;
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      *(float *)(lVar11 + 0x88) = fVar33;
      *(float *)(lVar11 + 0x8c) = fVar48;
      *(float *)(lVar11 + 0x90) = fVar51;
      unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
      unaff_x23 = in_stack_00000148;
    }
    if (uVar30 < 2) {
      if (uVar30 == 1) {
        lVar11 = FUN_0400ff1c(in_stack_00000098,0,*unaff_x21);
        lVar14 = FUN_0400ff1c(in_stack_00000098,0,*unaff_x21);
        if (*(long *)(unaff_x26 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        fVar33 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),1,*(undefined8 *)puVar4);
        if (*(long *)(unaff_x26 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        fVar34 = fVar48;
        fVar40 = fVar51;
        fVar54 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)puVar4);
        if (DAT_06db4c75 == '\0') {
          FUN_02d965b8(PTR_DAT_069fbb48);
          DAT_06db4c75 = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        fVar33 = fVar33 - fVar54;
        fVar48 = fVar48 - fVar34;
        fVar51 = fVar51 - fVar40;
        fVar34 = SQRT(fVar51 * fVar51 + fVar33 * fVar33 + fVar48 * fVar48);
        if (fVar34 <= DAT_010fd13c) {
          if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
            FUN_02d965b8(plVar25);
            *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
          }
          pfVar23 = *(float **)(*plVar25 + 0xb8);
          fVar33 = *pfVar23;
          fVar48 = pfVar23[1];
          fVar51 = pfVar23[2];
        }
        else {
          fVar33 = fVar33 / fVar34;
          fVar48 = fVar48 / fVar34;
          fVar51 = fVar51 / fVar34;
        }
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        *(float *)(lVar14 + 0x94) = fVar33;
        *(float *)(lVar14 + 0x98) = fVar48;
        *(float *)(lVar14 + 0x9c) = fVar51;
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        *(float *)(lVar11 + 0x88) = fVar33;
        *(float *)(lVar11 + 0x8c) = fVar48;
        *(float *)(lVar11 + 0x90) = fVar51;
      }
    }
    else if ((long)uVar30 < (long)*(int *)(in_stack_00000098 + 0x18)) {
      if (*(long *)(unaff_x26 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      iVar29 = *(int *)(*(long *)(unaff_x26 + 0x78) + 0x18);
      lVar11 = FUN_0400ff1c(in_stack_00000098,uVar24 & 0xffffffff,*unaff_x21);
      puVar4 = PTR_DAT_069fd088;
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(int *)(lVar11 + 0xbc) + 1 < iVar29) {
        lVar11 = FUN_0400ff1c(in_stack_00000098,uVar24 & 0xffffffff,*unaff_x21);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(int *)(lVar11 + 0x6c) != 3) {
          lVar14 = *(long *)(unaff_x26 + 0x78);
          lVar11 = FUN_0400ff1c(in_stack_00000098,uVar24 & 0xffffffff,*unaff_x21);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          fVar40 = (float)FUN_0409f2f4(lVar14,*(int *)(lVar11 + 0xbc) + 1,*(undefined8 *)puVar4);
          lVar14 = *(long *)(unaff_x26 + 0x78);
          fVar33 = fVar48;
          fVar34 = fVar51;
          lVar11 = FUN_0400ff1c(in_stack_00000098,uVar24 & 0xffffffff,*unaff_x21);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          fVar54 = (float)FUN_0409f2f4(lVar14,*(undefined4 *)(lVar11 + 0xbc),*(undefined8 *)puVar4);
          lVar11 = FUN_0400ff1c(in_stack_00000098,uVar24 & 0xffffffff,*unaff_x21);
          if (DAT_06db4c75 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c75 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fVar58 = DAT_010fd13c;
          fVar40 = fVar40 - fVar54;
          fVar54 = fVar48 - fVar33;
          fVar34 = fVar51 - fVar34;
          fVar51 = SQRT(fVar34 * fVar34 + fVar40 * fVar40 + fVar54 * fVar54);
          if (fVar51 <= DAT_010fd13c) {
            if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
              FUN_02d965b8(plVar25);
              *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
            }
            pfVar23 = *(float **)(*plVar25 + 0xb8);
            fVar38 = *pfVar23;
            fVar54 = pfVar23[1];
            fVar51 = pfVar23[2];
          }
          else {
            fVar38 = fVar40 / fVar51;
            fVar54 = fVar54 / fVar51;
            fVar51 = fVar34 / fVar51;
          }
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          *(float *)(lVar11 + 0x88) = fVar38;
          *(float *)(lVar11 + 0x8c) = fVar54;
          uVar43 = *unaff_x21;
          *(float *)(lVar11 + 0x90) = fVar51;
          uVar49 = *(uint *)(in_stack_00000098 + 0x18);
          lVar11 = FUN_0400ff1c(in_stack_00000098,uVar24 & 0xffffffff,uVar43);
          if (uVar30 != uVar49) {
            fVar48 = fVar33;
          }
          if (DAT_06db4c75 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c75 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fVar48 = fVar48 - fVar33;
          fVar33 = SQRT(fVar34 * fVar34 + fVar40 * fVar40 + fVar48 * fVar48);
          if (fVar33 <= fVar58) {
            if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
              FUN_02d965b8(plVar25);
              *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
            }
            uVar43 = **(undefined8 **)(*plVar25 + 0xb8);
            fVar34 = *(float *)(*(undefined8 **)(*plVar25 + 0xb8) + 1);
          }
          else {
            fVar34 = fVar34 / fVar33;
            uVar43 = CONCAT44(fVar48 / fVar33,fVar40 / fVar33);
            fVar51 = fVar40;
          }
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          *(undefined8 *)(lVar11 + 0x94) = uVar43;
          *(float *)(lVar11 + 0x9c) = fVar34;
        }
      }
    }
    if ((long)uVar30 < (long)*(int *)(in_stack_00000098 + 0x18)) {
      lVar11 = FUN_0400ff1c(in_stack_00000098,uVar30 & 0xffffffff,*unaff_x21);
      lVar14 = FUN_0400ff1c(in_stack_00000098,uVar30 & 0xffffffff,*unaff_x21);
      if ((lVar14 == 0) || (lVar11 == 0)) goto LAB_03168190;
      uVar43 = *(undefined8 *)(lVar14 + 0x48);
      *(undefined4 *)(lVar11 + 0x5c) = *(undefined4 *)(lVar14 + 0x50);
      *(undefined8 *)(lVar11 + 0x54) = uVar43;
    }
    uVar30 = uVar1;
    unaff_x25 = in_stack_00000098;
    if ((long)(*(int *)(unaff_x19 + 0x18) + -2) <= (long)uVar1) goto LAB_0316df74;
    goto LAB_03169d3c;
  }
LAB_0316df74:
  if (*(char *)(unaff_x23 + 0x84) == '\0') {
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
    if ((*(long *)(unaff_x26 + 0x78) == 0) || (lVar11 == 0)) goto LAB_03168190;
    uVar43 = *unaff_x21;
    *(undefined4 *)(lVar11 + 0xbc) = *(undefined4 *)(*(long *)(unaff_x26 + 0x78) + 0x18);
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,uVar43);
    if (lVar11 == 0) goto LAB_03168190;
    uVar43 = *unaff_x21;
    *(float *)(lVar11 + 0xc0) = *pfVar15;
    lVar11 = FUN_0400ff1c(unaff_x25,0,uVar43);
    if (lVar11 == 0) goto LAB_03168190;
    uVar43 = *unaff_x21;
    *(undefined4 *)(lVar11 + 0xbc) = 0;
    lVar11 = FUN_0400ff1c(unaff_x25,0,uVar43);
    if (lVar11 == 0) goto LAB_03168190;
    *(undefined4 *)(lVar11 + 0xc0) = 0;
    if (*(int *)(unaff_x25 + 0x18) < 3) goto LAB_0316ea6c;
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
    fVar51 = *pfVar15;
    lVar14 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
    if ((lVar14 == 0) || (lVar11 == 0)) goto LAB_03168190;
    uVar43 = *unaff_x21;
    *(float *)(lVar11 + 200) = fVar51 - *(float *)(lVar14 + 0xc0);
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,uVar43);
    if (lVar11 == 0) goto LAB_03168190;
    fVar51 = *(float *)(lVar11 + 200);
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
    lVar14 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
    if (1000.0 <= fVar51) {
      if (lVar14 == 0) goto LAB_03168190;
      fStack00000000000001d0 = *(float *)(lVar14 + 200) / 1000.0;
      uVar43 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
      uVar43 = FUN_05362cb4(uVar43,*(undefined8 *)PTR_DAT_06a0c488,0);
    }
    else {
      if (lVar14 == 0) goto LAB_03168190;
      uVar43 = FUN_054fad00(lVar14 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
      uVar43 = FUN_05362cb4(uVar43,*(undefined8 *)PTR_DAT_06a0c4f0,0);
    }
    if (lVar11 == 0) goto LAB_03168190;
    *(undefined8 *)(lVar11 + 0xd0) = uVar43;
    LeanTween__value((undefined8 *)(lVar11 + 0xd0),uVar43);
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
    if (lVar11 == 0) goto LAB_03168190;
    fVar44 = *(float *)(lVar11 + 0x4c);
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
    if (lVar11 == 0) goto LAB_03168190;
    fVar46 = *(float *)(lVar11 + 0x4c);
    fVar51 = fVar44 - fVar46;
    if (DAT_06db4ece == '\0') {
      FUN_02d965b8(PTR_DAT_069fbb48);
      DAT_06db4ece = '\x01';
    }
    puVar4 = PTR_DAT_069fbb48;
    if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    fVar48 = 0.0;
    fVar37 = SQRT((fVar47 * fVar47 + fVar51 * fVar51) * DAT_010fd194);
    fVar51 = DAT_010fcd14;
    if (DAT_010fcd14 <= fVar37) {
      fVar51 = -1.0;
      fVar37 = (fVar47 * 0.0 + ABS(fVar44 - fVar46) * 50.0 + 0.0) / fVar37;
      fVar47 = 1.0;
      if (fVar37 <= 1.0) {
        fVar47 = fVar37;
      }
      fVar44 = -1.0;
      if (-1.0 <= fVar37) {
        fVar44 = fVar47;
      }
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        fVar51 = -1.0;
        thunk_FUN_02df485c();
      }
      dVar39 = acos((double)fVar44);
      fVar48 = (float)dVar39 * DAT_010fcf40;
    }
    fVar48 = 90.0 - fVar48;
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
    if (fVar48 <= 10.0) {
      uVar43 = FUN_054fad00(&stack0x00000234,*(undefined8 *)PTR_DAT_06a0c498,0);
    }
    else {
      dVar39 = modf((double)fVar48,(double *)&stack0x00000298);
      if (0.0 <= fVar48) {
        if (dVar39 == 0.5) {
          dVar39 = *(double *)(unaff_x26 + 0x80);
          fVar51 = 1.0;
          goto LAB_0316e5fc;
        }
        fStack00000000000001d0 = (float)(int)(fVar48 + 0.5);
      }
      else if (dVar39 == -0.5) {
        dVar39 = *(double *)(unaff_x26 + 0x80);
        fVar51 = -1.0;
LAB_0316e5fc:
        fStack00000000000001d0 = (float)dVar39;
        if (((long)dVar39 & 1U) != 0) {
          fStack00000000000001d0 = (float)dVar39 + fVar51;
        }
      }
      else {
        fStack00000000000001d0 = (float)(int)(fVar48 + -0.5);
      }
      uVar43 = FUN_054fabf8(&stack0x000001d0,0);
    }
    if (lVar11 == 0) goto LAB_03168190;
    *(undefined8 *)(lVar11 + 0xd8) = uVar43;
    LeanTween__value((undefined8 *)(lVar11 + 0xd8),uVar43);
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
    if (lVar11 == 0) goto LAB_03168190;
    fVar47 = *(float *)(lVar11 + 0x4c);
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
    if (lVar11 == 0) goto LAB_03168190;
    fVar44 = *(float *)(lVar11 + 0x4c);
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
    if (lVar11 == 0) goto LAB_03168190;
    fVar46 = *(float *)(lVar11 + 0x48);
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
    if (lVar11 == 0) goto LAB_03168190;
    fVar37 = *(float *)(lVar11 + 0x50);
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
    if (lVar11 == 0) goto LAB_03168190;
    fVar48 = *(float *)(lVar11 + 0x48);
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
    if (lVar11 == 0) goto LAB_03168190;
    fVar33 = *(float *)(lVar11 + 0x50);
    if (DAT_06db4c77 == '\0') {
      FUN_02d965b8(PTR_DAT_069fbb48);
      DAT_06db4c77 = '\x01';
    }
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    fVar37 = fVar37 - fVar33;
    fVar46 = fVar46 - fVar48;
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
    fStack00000000000001d0 =
         (ABS(fVar47 - fVar44) / SQRT(fVar46 * fVar46 + fVar37 * fVar37)) * 100.0;
    uVar43 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c498,0);
joined_r0x0316ea54:
    if (lVar11 == 0) goto LAB_03168190;
    *(undefined8 *)(lVar11 + 0xe0) = uVar43;
    LeanTween__value((undefined8 *)(lVar11 + 0xe0),uVar43);
  }
  else {
    lVar11 = FUN_0400ff1c(unaff_x25,0,*unaff_x21);
    if ((*(long *)(unaff_x26 + 0x78) == 0) || (lVar11 == 0)) goto LAB_03168190;
    uVar43 = *unaff_x21;
    *(undefined4 *)(lVar11 + 0xbc) = *(undefined4 *)(*(long *)(unaff_x26 + 0x78) + 0x18);
    lVar11 = FUN_0400ff1c(unaff_x25,0,uVar43);
    if (lVar11 == 0) goto LAB_03168190;
    *(float *)(lVar11 + 0xc0) = *pfVar15;
    if (2 < *(int *)(unaff_x25 + 0x18)) {
      lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
      fVar51 = *pfVar15;
      lVar14 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
      if ((lVar14 == 0) || (lVar11 == 0)) goto LAB_03168190;
      uVar43 = *unaff_x21;
      *(float *)(lVar11 + 200) = fVar51 - *(float *)(lVar14 + 0xc0);
      lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,uVar43);
      if (lVar11 == 0) goto LAB_03168190;
      fVar51 = *(float *)(lVar11 + 200);
      lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
      lVar14 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
      if (1000.0 <= fVar51) {
        if (lVar14 == 0) goto LAB_03168190;
        fStack00000000000001d0 = *(float *)(lVar14 + 200) / 1000.0;
        uVar43 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
        uVar43 = FUN_05362cb4(uVar43,*(undefined8 *)PTR_DAT_06a0c488,0);
      }
      else {
        if (lVar14 == 0) goto LAB_03168190;
        uVar43 = FUN_054fad00(lVar14 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
        uVar43 = FUN_05362cb4(uVar43,*(undefined8 *)PTR_DAT_06a0c4f0,0);
      }
      if (lVar11 == 0) goto LAB_03168190;
      *(undefined8 *)(lVar11 + 0xd0) = uVar43;
      LeanTween__value((undefined8 *)(lVar11 + 0xd0),uVar43);
      lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
      if (lVar11 == 0) goto LAB_03168190;
      fVar44 = *(float *)(lVar11 + 0x4c);
      lVar11 = FUN_0400ff1c(unaff_x25,0,*unaff_x21);
      if (lVar11 == 0) goto LAB_03168190;
      fVar46 = *(float *)(lVar11 + 0x4c);
      fVar51 = fVar44 - fVar46;
      if (DAT_06db4ece == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4ece = '\x01';
      }
      puVar4 = PTR_DAT_069fbb48;
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar48 = 0.0;
      fVar37 = SQRT((fVar47 * fVar47 + fVar51 * fVar51) * DAT_010fd194);
      fVar51 = DAT_010fcd14;
      if (DAT_010fcd14 <= fVar37) {
        fVar51 = -1.0;
        fVar37 = (fVar47 * 0.0 + ABS(fVar44 - fVar46) * 50.0 + 0.0) / fVar37;
        fVar47 = 1.0;
        if (fVar37 <= 1.0) {
          fVar47 = fVar37;
        }
        fVar44 = -1.0;
        if (-1.0 <= fVar37) {
          fVar44 = fVar47;
        }
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          fVar51 = -1.0;
          thunk_FUN_02df485c();
        }
        dVar39 = acos((double)fVar44);
        fVar48 = (float)dVar39 * DAT_010fcf40;
      }
      fVar48 = 90.0 - fVar48;
      lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
      if (fVar48 <= 10.0) {
        uVar43 = FUN_054fad00(&stack0x00000234,*(undefined8 *)PTR_DAT_06a0c498,0);
      }
      else {
        dVar39 = modf((double)fVar48,(double *)&stack0x00000298);
        if (0.0 <= fVar48) {
          if (dVar39 == 0.5) {
            dVar39 = *(double *)(unaff_x26 + 0x80);
            fVar51 = 1.0;
            goto LAB_0316e5d0;
          }
          fStack00000000000001d0 = (float)(int)(fVar48 + 0.5);
        }
        else if (dVar39 == -0.5) {
          dVar39 = *(double *)(unaff_x26 + 0x80);
          fVar51 = -1.0;
LAB_0316e5d0:
          fStack00000000000001d0 = (float)dVar39;
          if (((long)dVar39 & 1U) != 0) {
            fStack00000000000001d0 = (float)dVar39 + fVar51;
          }
        }
        else {
          fStack00000000000001d0 = (float)(int)(fVar48 + -0.5);
        }
        uVar43 = FUN_054fabf8(&stack0x000001d0,0);
      }
      if (lVar11 == 0) goto LAB_03168190;
      *(undefined8 *)(lVar11 + 0xd8) = uVar43;
      LeanTween__value((undefined8 *)(lVar11 + 0xd8),uVar43);
      lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
      if (lVar11 == 0) goto LAB_03168190;
      fVar47 = *(float *)(lVar11 + 0x4c);
      lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
      if (lVar11 == 0) goto LAB_03168190;
      fVar44 = *(float *)(lVar11 + 0x4c);
      lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
      if (lVar11 == 0) goto LAB_03168190;
      fVar46 = *(float *)(lVar11 + 0x48);
      lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
      if (lVar11 == 0) goto LAB_03168190;
      fVar37 = *(float *)(lVar11 + 0x50);
      lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
      if (lVar11 == 0) goto LAB_03168190;
      fVar48 = *(float *)(lVar11 + 0x48);
      lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
      if (lVar11 == 0) goto LAB_03168190;
      fVar33 = *(float *)(lVar11 + 0x50);
      if (DAT_06db4c77 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c77 = '\x01';
      }
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar37 = fVar37 - fVar33;
      fVar46 = fVar46 - fVar48;
      lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
      fStack00000000000001d0 =
           (ABS(fVar47 - fVar44) / SQRT(fVar46 * fVar46 + fVar37 * fVar37)) * 100.0;
      uVar43 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c498,0);
      goto joined_r0x0316ea54;
    }
  }
LAB_0316ea6c:
  fVar47 = 1000.0;
  if (1000.0 <= *pfVar15) {
    fVar47 = 1000.0;
    fStack00000000000001d0 = *pfVar15 / 1000.0;
    uVar43 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
    puVar16 = (undefined8 *)PTR_DAT_06a0c488;
  }
  else {
    uVar43 = FUN_054fad00(pfVar15,*(undefined8 *)PTR_DAT_06a0c498,0);
    puVar16 = (undefined8 *)PTR_DAT_06a0c4f0;
  }
  uVar43 = FUN_05362cb4(uVar43,*puVar16,0);
  *(undefined8 *)(unaff_x23 + 0x2d0) = uVar43;
  LeanTween__value(unaff_x23 + 0x2d0,uVar43);
  if (*(int *)(unaff_x25 + 0x18) == 2) {
    lVar11 = FUN_0400ff1c(unaff_x25,0,*unaff_x21);
    if (lVar11 == 0) goto LAB_03168190;
    fVar44 = *(float *)(lVar11 + 200);
    lVar11 = FUN_0400ff1c(unaff_x25,0,*unaff_x21);
    lVar14 = FUN_0400ff1c(unaff_x25,0,*unaff_x21);
    if (1000.0 <= fVar44) {
      if (lVar14 == 0) goto LAB_03168190;
      fVar47 = 1000.0;
      fStack00000000000001d0 = *(float *)(lVar14 + 200) / 1000.0;
      uVar43 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
      uVar43 = FUN_05362cb4(uVar43,*(undefined8 *)PTR_DAT_06a0c488,0);
    }
    else {
      if (lVar14 == 0) goto LAB_03168190;
      uVar43 = FUN_054fad00(lVar14 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
      uVar43 = FUN_05362cb4(uVar43,*(undefined8 *)PTR_DAT_06a0c4f0,0);
    }
    if (lVar11 == 0) goto LAB_03168190;
    *(undefined8 *)(lVar11 + 0xd0) = uVar43;
    LeanTween__value((undefined8 *)(lVar11 + 0xd0),uVar43);
  }
  if (*(char *)(unaff_x23 + 0x84) == '\0') {
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
    if (lVar11 == 0) goto LAB_03168190;
    *(undefined8 *)(lVar11 + 0xd0) = *(undefined8 *)PTR_DAT_069fcde0;
    LeanTween__value();
  }
  puVar5 = PTR_DAT_06a0b440;
  puVar4 = PTR_DAT_069fd088;
  fVar44 = fVar47;
  if (iStack0000000000000058 != 0) {
    if (*(long *)(unaff_x26 + 0x78) != 0) {
      fVar46 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)PTR_DAT_069fd088);
      if (*(long *)(unaff_x26 + 0x78) != 0) {
        FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)puVar4);
        lVar11 = FUN_0400ff1c(unaff_x25,0,*(undefined8 *)puVar5);
        puVar6 = PTR_DAT_06a0b7d0;
        puVar5 = PTR_DAT_069fbb48;
        if (lVar11 != 0) {
          lVar14 = *(long *)(unaff_x26 + 0x78);
          fVar44 = *(float *)(lVar11 + 200) * 0.5;
          fVar37 = 5.0;
          if (fVar44 <= 5.0) {
            fVar37 = fVar44;
          }
          if (lVar14 != 0) {
            uVar24 = (ulong)(uint)fStack0000000000000054;
            iVar29 = 1;
            fVar46 = fStack0000000000000050 * 10.0 + fVar46;
            uVar30 = (ulong)(uint)fVar46;
            fVar48 = fStack0000000000000054 * 10.0 + fVar51;
            fVar33 = 0.0;
            do {
              fVar51 = (float)uVar24;
              fVar44 = (float)uVar30;
              if (*(int *)(lVar14 + 0x18) <= iVar29) goto LAB_0316ee54;
              fVar34 = (float)FUN_0409f2f4(lVar14,iVar29 + -1,*(undefined8 *)puVar4);
              if (*(long *)(unaff_x26 + 0x78) == 0) break;
              fVar40 = fVar44;
              fVar54 = fVar51;
              fVar58 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar29,*(undefined8 *)puVar4)
              ;
              if (DAT_06db4c77 == '\0') {
                FUN_02d965b8(puVar5);
                DAT_06db4c77 = '\x01';
              }
              if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              fVar40 = fVar44 - fVar40;
              fVar51 = fVar51 - fVar54;
              fVar44 = fVar51 * fVar51;
              fVar33 = fVar33 + SQRT(fVar44 + (fVar34 - fVar58) * (fVar34 - fVar58) +
                                              fVar40 * fVar40);
              if (fVar37 < fVar33) goto LAB_0316ee54;
              if (*(long *)(unaff_x26 + 0x78) == 0) break;
              uVar45 = FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)puVar4);
              if (*(long *)(unaff_x26 + 0x78) == 0) break;
              FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar29,*(undefined8 *)puVar4);
              fVar44 = (float)FUN_031765b0(uVar45,fVar44,fVar51,fVar46,fVar47,fVar48,0);
              if (*(long *)(unaff_x26 + 0x78) == 0) break;
              fVar40 = fVar51;
              fVar54 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar29,*(undefined8 *)puVar4)
              ;
              fVar58 = fVar33 / fVar37;
              fVar34 = 1.0;
              if (fVar58 <= 1.0) {
                fVar34 = fVar58;
              }
              uVar30 = (ulong)(uint)fVar34;
              fVar38 = 0.0;
              if (0.0 <= fVar58) {
                fVar38 = fVar34;
              }
              if (*(long *)(unaff_x26 + 0x78) == 0) break;
              FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar29,*(undefined8 *)puVar4);
              if (*(long *)(unaff_x26 + 0x78) == 0) break;
              uVar24 = (ulong)(uint)(fVar51 + fVar38 * (fVar40 - fVar51));
              FUN_0409f350(fVar44 + fVar38 * (fVar54 - fVar44),*(long *)(unaff_x26 + 0x78),iVar29,
                           *(undefined8 *)puVar6);
              lVar14 = *(long *)(unaff_x26 + 0x78);
              iVar29 = iVar29 + 1;
            } while (lVar14 != 0);
          }
        }
      }
    }
    goto LAB_03168190;
  }
LAB_0316ee54:
  puVar4 = PTR_DAT_069fd088;
  if (unaff_w20 != 0) {
    lVar11 = *(long *)(unaff_x26 + 0x78);
    if (lVar11 == 0) goto LAB_03168190;
    fVar47 = (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -1,*(undefined8 *)PTR_DAT_069fd088
                                );
    puVar5 = PTR_DAT_06a0b440;
    if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
    fVar46 = fVar44;
    FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)puVar4);
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*(undefined8 *)puVar5);
    puVar6 = PTR_DAT_06a0b7d0;
    puVar5 = PTR_DAT_069fbb48;
    if (lVar11 == 0) goto LAB_03168190;
    fVar48 = *(float *)(lVar11 + 200) * 0.5;
    fVar37 = 5.0;
    if (fVar48 <= 5.0) {
      fVar37 = fVar48;
    }
    if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
    iVar29 = *(int *)(*(long *)(unaff_x26 + 0x78) + 0x18);
    if (0 < iVar29 + -2) {
      fVar48 = 0.0;
      iVar29 = iVar29 + -1;
      uVar30 = (ulong)(uint)fVar47;
      uVar24 = (ulong)(uint)fVar51;
      do {
        fVar34 = (float)uVar30;
        fVar33 = (float)uVar24;
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        fVar40 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar29,*(undefined8 *)puVar4);
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        iVar29 = iVar29 + -1;
        fVar54 = fVar33;
        fVar58 = fVar34;
        fVar38 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar29,*(undefined8 *)puVar4);
        if (DAT_06db4c77 == '\0') {
          FUN_02d965b8(puVar5);
          DAT_06db4c77 = '\x01';
        }
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        fVar48 = fVar48 + SQRT((fVar34 - fVar58) * (fVar34 - fVar58) +
                               (fVar40 - fVar38) * (fVar40 - fVar38) +
                               (fVar33 - fVar54) * (fVar33 - fVar54));
        if (fVar37 < fVar48) break;
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar29,*(undefined8 *)puVar4);
        fVar33 = fVar51;
        fVar34 = (float)FUN_031765b0(fVar47,fVar44,fVar51,fStack0000000000000060 * 10.0 + fVar47,
                                     fVar46,fStack000000000000005c * 10.0 + fVar51,0);
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        fVar54 = fVar33;
        fVar58 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar29,*(undefined8 *)puVar4);
        fVar38 = fVar48 / fVar37;
        fVar40 = 1.0;
        if (fVar38 <= 1.0) {
          fVar40 = fVar38;
        }
        uVar24 = (ulong)(uint)fVar40;
        fVar60 = 0.0;
        if (0.0 <= fVar38) {
          fVar60 = fVar40;
        }
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar29,*(undefined8 *)puVar4);
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        uVar30 = (ulong)(uint)(fVar33 + fVar60 * (fVar54 - fVar33));
        FUN_0409f350(fVar34 + fVar60 * (fVar58 - fVar34),*(long *)(unaff_x26 + 0x78),iVar29,
                     *(undefined8 *)puVar6);
      } while (1 < iVar29);
    }
  }
  puVar4 = PTR_DAT_06a0b440;
  lVar11 = FUN_0400ff1c(unaff_x25,0,*(undefined8 *)PTR_DAT_06a0b440);
  lVar14 = FUN_0400ff1c(unaff_x25,0,*(undefined8 *)puVar4);
  if (lVar14 != 0) {
    fVar47 = *(float *)(lVar14 + 0x94);
    lVar14 = FUN_0400ff1c(unaff_x25,0,*(undefined8 *)puVar4);
    if (lVar14 != 0) {
      fVar51 = *(float *)(lVar14 + 0x9c);
      if (DAT_06db4c75 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c75 = '\x01';
      }
      puVar5 = PTR_DAT_069fbb48;
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar44 = DAT_010fd13c;
      fVar46 = SQRT(fVar47 * fVar47 + fVar51 * fVar51);
      if (fVar46 <= DAT_010fd13c) {
        if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
          FUN_02d965b8(PTR_DAT_069fb978);
          *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
        }
        uVar43 = **(undefined8 **)(*plVar25 + 0xb8);
        fVar51 = *(float *)(*(undefined8 **)(*plVar25 + 0xb8) + 1);
      }
      else {
        fVar51 = fVar51 / fVar46;
        uVar43 = CONCAT44(0.0 / fVar46,fVar47 / fVar46);
      }
      if (lVar11 != 0) {
        *(undefined8 *)(lVar11 + 0x94) = uVar43;
        uVar43 = *(undefined8 *)puVar4;
        *(float *)(lVar11 + 0x9c) = fVar51;
        lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,uVar43);
        lVar14 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*(undefined8 *)puVar4);
        if (lVar14 != 0) {
          fVar47 = *(float *)(lVar14 + 0x94);
          lVar14 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*(undefined8 *)puVar4);
          if (lVar14 != 0) {
            fVar51 = *(float *)(lVar14 + 0x9c);
            if (DAT_06db4c75 == '\0') {
              FUN_02d965b8(PTR_DAT_069fbb48);
              DAT_06db4c75 = '\x01';
            }
            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            fVar46 = SQRT(fVar47 * fVar47 + fVar51 * fVar51);
            if (fVar46 <= fVar44) {
              if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
                FUN_02d965b8(PTR_DAT_069fb978);
                *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
              }
              uVar43 = **(undefined8 **)(*plVar25 + 0xb8);
              fVar51 = *(float *)(*(undefined8 **)(*plVar25 + 0xb8) + 1);
            }
            else {
              fVar51 = fVar51 / fVar46;
              uVar43 = CONCAT44(0.0 / fVar46,fVar47 / fVar46);
            }
            if (lVar11 != 0) {
              uVar50 = *(undefined8 *)(unaff_x26 + 0x78);
              *(undefined8 *)(lVar11 + 0x94) = uVar43;
              *(float *)(lVar11 + 0x9c) = fVar51;
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


