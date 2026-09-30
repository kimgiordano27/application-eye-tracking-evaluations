/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.Bone>
ENTRY_POINT: 03169ac0
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


undefined8 System_Array__InternalArray__ICollection_Contains<OVRPlugin_Bone>(long param_1)

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
  ulong uVar13;
  undefined8 extraout_x1;
  ulong extraout_x1_00;
  char cVar14;
  long lVar15;
  float *pfVar16;
  undefined8 *puVar17;
  long lVar18;
  ulong uVar19;
  float *pfVar20;
  long lVar21;
  long lVar22;
  long *unaff_x19;
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
  float fVar39;
  float fVar41;
  double dVar40;
  float fVar42;
  ulong uVar43;
  float fVar44;
  undefined4 uVar45;
  undefined8 uVar46;
  float fVar47;
  uint uVar48;
  undefined8 uVar49;
  float fVar50;
  float fVar51;
  undefined8 uVar52;
  float fVar53;
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
  long in_stack_00000238;
  long in_stack_00000240;
  undefined4 in_stack_00000268;
  float in_stack_0000026c;
  float in_stack_00000270;
  float in_stack_00000278;
  float in_stack_0000027c;
  float in_stack_00000280;
  
  uVar46 = **(undefined8 **)(**(long **)(param_1 + 0x978) + 0xb8);
  if ((*(uint *)(in_stack_00000170 + 0x18) < 3) || (*(uint *)(in_stack_00000170 + 0x18) == 3)) {
LAB_0316f2c4:
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
  uVar49 = *(undefined8 *)(in_stack_00000170 + 0x38);
  fVar50 = *(float *)(in_stack_00000170 + 0x40);
  uVar52 = *(undefined8 *)(in_stack_00000170 + 0x44);
  fVar53 = *(float *)(in_stack_00000170 + 0x4c);
  if (DAT_06db4c77 == '\0') {
    FUN_02d965b8(PTR_DAT_069fbb48);
    DAT_06db4c77 = '\x01';
  }
  if (*(int *)(*unaff_x19 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  fVar38 = (float)uVar49;
  fVar33 = fVar38 - (float)uVar52;
  fVar47 = (float)((ulong)uVar49 >> 0x20);
  fVar41 = fVar47 - (float)((ulong)uVar52 >> 0x20);
  fVar50 = fVar50 - fVar53;
  uVar48 = *(uint *)(in_stack_00000170 + 0x18);
  fVar50 = SQRT(fVar50 * fVar50 + fVar33 * fVar33 + fVar41 * fVar41);
  *(ulong *)(unaff_x26 + 0x40) =
       CONCAT44(fVar47 + (float)((ulong)uVar46 >> 0x20) * fVar50,fVar38 + (float)uVar46 * fVar50);
  if ((uVar48 & 0xfffffffc) == 0) goto LAB_0316f2c4;
  lVar11 = *unaff_x24;
  if (lVar11 == 0) goto LAB_03168190;
  lVar15 = *(long *)(lVar11 + 0x10);
  lVar21 = *(long *)PTR_DAT_069ff178;
  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
  if (lVar15 == 0) goto LAB_03168190;
  uVar48 = *(uint *)(lVar11 + 0x18);
  if (uVar48 < *(uint *)(lVar15 + 0x18)) {
    *(uint *)(lVar11 + 0x18) = uVar48 + 1;
    *(undefined4 *)(lVar15 + (long)(int)uVar48 * 4 + 0x20) = 0;
  }
  else {
    FUN_04059d64(0,lVar11,*(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
  }
  lVar11 = *(long *)(unaff_x23 + 0x478);
  if (lVar11 == 0) goto LAB_03168190;
  *(undefined4 *)(lVar11 + 0x18) = 0;
  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
  lVar11 = *in_stack_00000070;
  if (lVar11 == 0) goto LAB_03168190;
  uVar46 = *(undefined8 *)PTR_DAT_069ff188;
  *(undefined4 *)(lVar11 + 0x18) = 0;
  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
  uVar46 = thunk_FUN_02dd3144(uVar46);
  FUN_040594d0(uVar46,*(undefined8 *)PTR_DAT_069ff180);
  uVar49 = *unaff_x28;
  *(undefined8 *)(unaff_x26 + 0x28) = uVar46;
  uVar46 = thunk_FUN_02dd3144(uVar49);
  FUN_0409ed5c(uVar46,*(undefined8 *)PTR_DAT_069fbef0);
  cVar14 = *(char *)((long)unaff_x29 + 0xc71);
  *(undefined8 *)(unaff_x26 + 0x20) = uVar46;
  fVar50 = 0.0;
  if (cVar14 == '\0') {
    FUN_02d965b8(PTR_DAT_069fb978);
    *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
  }
  pfVar16 = *(float **)(*(long *)PTR_DAT_069fb978 + 0xb8);
  fStack00000000000000f8 = *pfVar16;
  fStack00000000000000f4 = pfVar16[1];
  fVar53 = pfVar16[2];
  fVar33 = *(float *)(unaff_x23 + 0x7c);
  pfVar16 = (float *)(unaff_x23 + 0x2c0);
  plVar25 = (long *)PTR_DAT_069fb978;
  if (1 < *(int *)(in_stack_00000170 + 0x18) + -2) {
    fVar38 = 0.0;
    iStack00000000000000d4 = 0;
    iStack0000000000000108 = 0;
    bVar2 = false;
    fVar41 = fStack000000000000010c * 0.5;
    uStack0000000000000110 = _fStack0000000000000130 & 0xffffffff;
    fStack0000000000000164 = fStack000000000000012c;
    uVar30 = 1;
    fStack00000000000000f0 = fVar53;
    fStack00000000000000fc = fVar53;
    fStack0000000000000100 = fStack00000000000000f4;
    fStack0000000000000104 = fStack00000000000000f8;
LAB_03169d3c:
    uVar24 = uVar30 - 1;
    fStack00000000000001d4 = 0.0;
    lVar11 = FUN_0400ff1c(unaff_x25,uVar24 & 0xffffffff,*unaff_x21);
    if ((*(long *)(unaff_x26 + 0x78) == 0) || (lVar11 == 0)) goto LAB_03168190;
    uVar46 = *unaff_x21;
    *(undefined4 *)(lVar11 + 0xbc) = *(undefined4 *)(*(long *)(unaff_x26 + 0x78) + 0x18);
    lVar11 = FUN_0400ff1c(unaff_x25,uVar24 & 0xffffffff,uVar46);
    if (lVar11 == 0) goto LAB_03168190;
    *(float *)(lVar11 + 0xc0) = *pfVar16;
    iVar29 = (int)uVar30;
    if (1 < uVar30) {
      if (uVar30 == 2) {
        lVar11 = FUN_0400ff1c(unaff_x25,0,*unaff_x21);
        if (lVar11 == 0) goto LAB_03168190;
        iVar26 = 0;
        fVar53 = *pfVar16;
      }
      else {
        iVar26 = iVar29 + -2;
        lVar11 = FUN_0400ff1c(unaff_x25,iVar26,*unaff_x21);
        fVar53 = *pfVar16;
        lVar15 = FUN_0400ff1c(unaff_x25,iVar26,*unaff_x21);
        if ((lVar15 == 0) || (lVar11 == 0)) goto LAB_03168190;
        fVar53 = fVar53 - *(float *)(lVar15 + 0xc0);
      }
      puVar4 = PTR_DAT_06a0b440;
      *(float *)(lVar11 + 200) = fVar53;
      lVar11 = FUN_0400ff1c(unaff_x25,iVar26,*(undefined8 *)puVar4);
      if (lVar11 == 0) goto LAB_03168190;
      fVar53 = *(float *)(lVar11 + 200);
      lVar11 = FUN_0400ff1c(unaff_x25,iVar26,*(undefined8 *)puVar4);
      lVar15 = FUN_0400ff1c(unaff_x25,iVar26,*(undefined8 *)puVar4);
      if (1000.0 <= fVar53) {
        if (lVar15 == 0) goto LAB_03168190;
        fStack00000000000001d0 = *(float *)(lVar15 + 200) / 1000.0;
        uVar46 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
        puVar17 = (undefined8 *)PTR_DAT_06a0c488;
      }
      else {
        if (lVar15 == 0) goto LAB_03168190;
        uVar46 = FUN_054fad00(lVar15 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
        puVar17 = (undefined8 *)PTR_DAT_06a0c4f0;
      }
      uVar46 = FUN_05362cb4(uVar46,*puVar17,0);
      if (lVar11 == 0) goto LAB_03168190;
      *(undefined8 *)(lVar11 + 0xd0) = uVar46;
      LeanTween__value((undefined8 *)(lVar11 + 0xd0),uVar46);
      puVar4 = PTR_DAT_06a0b440;
      lVar11 = FUN_0400ff1c(unaff_x25,iVar26,*(undefined8 *)PTR_DAT_06a0b440);
      if (lVar11 == 0) goto LAB_03168190;
      fVar53 = *(float *)(lVar11 + 0x4c);
      lVar11 = FUN_0400ff1c(unaff_x25,uVar24 & 0xffffffff,*(undefined8 *)puVar4);
      if (lVar11 == 0) goto LAB_03168190;
      fVar47 = *(float *)(lVar11 + 0x4c);
      if (DAT_06db4ece == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4ece = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar34 = fVar53 - fVar47;
      fVar42 = 0.0;
      fVar35 = SQRT((fVar50 * fVar50 + fVar34 * fVar34) * DAT_010fd194);
      fVar34 = DAT_010fcd14;
      if (DAT_010fcd14 <= fVar35) {
        fVar34 = -1.0;
        fVar35 = (fVar50 * 0.0 + ABS(fVar53 - fVar47) * 50.0 + 0.0) / fVar35;
        fVar50 = 1.0;
        if (fVar35 <= 1.0) {
          fVar50 = fVar35;
        }
        fVar53 = -1.0;
        if (-1.0 <= fVar35) {
          fVar53 = fVar50;
        }
        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
          fVar34 = -1.0;
          thunk_FUN_02df485c();
        }
        dVar40 = acos((double)fVar53);
        fVar42 = (float)dVar40 * DAT_010fcf40;
      }
      fVar42 = 90.0 - fVar42;
      lVar11 = FUN_0400ff1c(unaff_x25,iVar26,*(undefined8 *)puVar4);
      if (fVar42 <= 10.0) {
        uVar46 = FUN_054fad00(&stack0x00000234,*(undefined8 *)PTR_DAT_06a0c498,0);
        puVar17 = (undefined8 *)PTR_DAT_069fd088;
      }
      else {
        dVar40 = modf((double)fVar42,(double *)&stack0x00000298);
        puVar17 = (undefined8 *)PTR_DAT_069fd088;
        if (0.0 <= fVar42) {
          if (dVar40 == 0.5) {
            dVar40 = *(double *)(unaff_x26 + 0x80);
            fVar50 = 1.0;
            goto LAB_0316a098;
          }
          fStack00000000000001d0 = (float)(int)(fVar42 + 0.5);
        }
        else if (dVar40 == -0.5) {
          dVar40 = *(double *)(unaff_x26 + 0x80);
          fVar50 = -1.0;
LAB_0316a098:
          fStack00000000000001d0 = (float)dVar40;
          if (((long)dVar40 & 1U) != 0) {
            fStack00000000000001d0 = (float)dVar40 + fVar50;
          }
        }
        else {
          fStack00000000000001d0 = (float)(int)(fVar42 + -0.5);
        }
        uVar46 = FUN_054fabf8(&stack0x000001d0,0);
      }
      if (lVar11 == 0) goto LAB_03168190;
      *(undefined8 *)(lVar11 + 0xd8) = uVar46;
      LeanTween__value((undefined8 *)(lVar11 + 0xd8),uVar46);
      unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
      lVar11 = FUN_0400ff1c(unaff_x25,iVar26,*(undefined8 *)PTR_DAT_06a0b440);
      if (lVar11 == 0) goto LAB_03168190;
      fVar50 = *(float *)(lVar11 + 0x4c);
      lVar11 = FUN_0400ff1c(unaff_x25,uVar24 & 0xffffffff,*unaff_x21);
      if (lVar11 == 0) goto LAB_03168190;
      fVar53 = *(float *)(lVar11 + 0x4c);
      lVar11 = FUN_0400ff1c(unaff_x25,iVar26,*unaff_x21);
      if (lVar11 == 0) goto LAB_03168190;
      fVar47 = *(float *)(lVar11 + 0x48);
      lVar11 = FUN_0400ff1c(unaff_x25,iVar26,*unaff_x21);
      if (lVar11 == 0) goto LAB_03168190;
      fVar35 = *(float *)(lVar11 + 0x50);
      lVar11 = FUN_0400ff1c(unaff_x25,uVar24 & 0xffffffff,*unaff_x21);
      if (lVar11 == 0) goto LAB_03168190;
      fVar42 = *(float *)(lVar11 + 0x48);
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
      fVar35 = fVar35 - fVar54;
      fVar47 = fVar47 - fVar42;
      lVar11 = FUN_0400ff1c(unaff_x25,iVar26,*unaff_x21);
      fVar42 = 100.0;
      fStack00000000000001d0 =
           (ABS(fVar50 - fVar53) / SQRT(fVar47 * fVar47 + fVar35 * fVar35)) * 100.0;
      uVar46 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c498,0);
      if (lVar11 == 0) goto LAB_03168190;
      *(undefined8 *)(lVar11 + 0xe0) = uVar46;
      LeanTween__value((undefined8 *)(lVar11 + 0xe0),uVar46);
      lVar11 = *(long *)(unaff_x26 + 0x78);
      if (lVar11 == 0) goto LAB_03168190;
      unaff_x23 = in_stack_00000148;
      if (2 < *(int *)(lVar11 + 0x18)) {
        fStack0000000000000104 = (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -1,*puVar17);
        lVar11 = *(long *)(unaff_x26 + 0x78);
        if (lVar11 == 0) goto LAB_03168190;
        fVar50 = fVar42;
        fVar53 = fVar34;
        fVar47 = (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -2,*puVar17);
        if (DAT_06db4c75 == '\0') {
          FUN_02d965b8(PTR_DAT_069fbb48);
          DAT_06db4c75 = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        fStack0000000000000104 = fStack0000000000000104 - fVar47;
        fVar42 = fVar42 - fVar50;
        fVar34 = fVar34 - fVar53;
        fStack00000000000000fc =
             SQRT(fVar34 * fVar34 +
                  fStack0000000000000104 * fStack0000000000000104 + fVar42 * fVar42);
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
          fStack0000000000000100 = fVar42 / fStack00000000000000fc;
          fStack00000000000000fc = fVar34 / fStack00000000000000fc;
        }
      }
    }
    lVar11 = *(long *)(unaff_x26 + 0x28);
    if (lVar11 == 0) goto LAB_03168190;
    lVar15 = *(long *)(unaff_x26 + 0x20);
    *(undefined4 *)(lVar11 + 0x18) = 0;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (lVar15 == 0) goto LAB_03168190;
    fVar50 = 0.0;
    *(undefined4 *)(lVar15 + 0x18) = 0;
    *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
    if ((*(uint *)(in_stack_00000170 + 0x18) <= uVar30) ||
       (uVar1 = uVar30 + 1, *(uint *)(in_stack_00000170 + 0x18) <= uVar1)) goto LAB_0316f2c4;
    lVar11 = in_stack_00000170 + uVar30 * 0xc;
    lVar15 = in_stack_00000170 + uVar1 * 0xc;
    fVar47 = *pfVar16;
    pfVar23 = (float *)(lVar11 + 0x20);
    fVar35 = *pfVar23;
    fVar53 = *(float *)(lVar11 + 0x24);
    fVar34 = *(float *)(lVar11 + 0x28);
    pfVar32 = (float *)(lVar15 + 0x20);
    fVar42 = *pfVar32;
    fVar58 = *(float *)(lVar15 + 0x24);
    fVar54 = *(float *)(lVar15 + 0x28);
    if (DAT_06db4c77 == '\0') {
      FUN_02d965b8(PTR_DAT_069fbb48);
      DAT_06db4c77 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if ((*(long *)(unaff_x23 + 0x68) == 0) ||
       (lVar21 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar24 & 0xffffffff,*unaff_x21),
       lVar21 == 0)) goto LAB_03168190;
    fVar53 = fVar53 - fVar58;
    fVar34 = fVar34 - fVar54;
    uVar43 = (ulong)(uint)fVar34;
    uVar19 = (ulong)(uint)(fVar34 * fVar34);
    fVar47 = fVar47 + SQRT(fVar34 * fVar34 + (fVar35 - fVar42) * (fVar35 - fVar42) + fVar53 * fVar53
                          );
    if (*(int *)(lVar21 + 0x6c) == 0) {
      if ((*(uint *)(in_stack_00000170 + 0x18) <= uVar30) ||
         (*(uint *)(in_stack_00000170 + 0x18) <= uVar1)) goto LAB_0316f2c4;
      fVar35 = *pfVar23;
      fVar53 = *(float *)(lVar11 + 0x24);
      fVar42 = *pfVar32;
      fVar58 = *(float *)(lVar15 + 0x24);
      fVar34 = *(float *)(lVar11 + 0x28);
      fVar54 = *(float *)(lVar15 + 0x28);
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
        lVar21 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),iVar29 + -2,*unaff_x21);
        if (lVar21 == 0) goto LAB_03168190;
        if (*(int *)(lVar21 + 0x6c) == 1) {
          bVar9 = true;
        }
        else {
          if ((*(long *)(unaff_x23 + 0x68) == 0) ||
             (lVar21 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),iVar29 + -2,*unaff_x21), lVar21 == 0
             )) goto LAB_03168190;
          bVar9 = *(int *)(lVar21 + 0x6c) == 2;
        }
      }
      fVar39 = 0.0;
      if (uVar30 == 1) {
        fVar39 = fStack0000000000000064;
      }
      fVar60 = in_stack_00000068;
      if (uVar30 != *(int *)(in_stack_00000170 + 0x18) - 3) {
        fVar60 = 1.0;
      }
      if (fVar60 <= fVar39) {
        iStack0000000000000108 = 0;
      }
      else {
        fVar53 = fVar53 - fVar58;
        fVar34 = fVar34 - fVar54;
        fVar53 = DAT_010fcf10 /
                 SQRT(fVar34 * fVar34 + (fVar35 - fVar42) * (fVar35 - fVar42) + fVar53 * fVar53);
        do {
          uVar19 = *(ulong *)(in_stack_00000170 + 0x18);
          if (fVar53 + fVar39 <= 1.0) {
            bVar27 = 0;
          }
          else if (uVar30 == (int)uVar19 - 3) {
            bVar27 = *(byte *)(unaff_x23 + 0x84) ^ 1;
          }
          else {
            bVar27 = 0;
          }
          bVar10 = bVar27 != 0;
          fVar34 = 1.0;
          if (!bVar10) {
            fVar34 = fVar39;
          }
          if (((uVar19 & 0xffffffff) <= uVar30) || ((uVar19 & 0xffffffff) <= uVar1))
          goto LAB_0316f2c4;
          uVar55 = *(undefined4 *)(lVar11 + 0x24);
          uVar45 = *(undefined4 *)(lVar11 + 0x28);
          fVar35 = *pfVar23;
          FUN_04059a68(in_stack_000000c8,uVar30 & 0xffffffff,*(undefined8 *)PTR_DAT_06a0a108);
          fVar54 = in_stack_0000026c;
          fVar58 = in_stack_00000270;
          fVar39 = (float)FUN_0316f340(in_stack_00000268,in_stack_0000026c,in_stack_00000270,fVar35,
                                       uVar55,uVar45);
          _fStack00000000000001c0 = CONCAT44(fVar54,fVar39);
          fVar35 = fStack0000000000000164;
          fVar42 = (float)uStack0000000000000110;
          if (iStack0000000000000108 == 3) {
            iStack0000000000000108 = 0;
            _fStack0000000000000130 = (ulong)(uint)fVar39;
            fVar35 = fVar58;
            fVar42 = fVar39;
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
          fVar37 = in_stack_000001c8;
          if (*(uint *)(in_stack_00000170 + 0x18) <= uVar1) goto LAB_0316f2c4;
          fVar57 = *pfVar32;
          fVar51 = *(float *)(lVar15 + 0x24);
          fVar44 = fStack00000000000001c0;
          fVar36 = fStack00000000000001c4;
          fVar61 = *(float *)(lVar15 + 0x28);
          if (DAT_06db4c77 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c77 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          lVar21 = *(long *)(unaff_x26 + 0x20);
          if (lVar21 == 0) goto LAB_03168190;
          fVar36 = fVar36 - fVar51;
          iVar26 = *(int *)(lVar21 + 0x18);
          fVar37 = fVar37 - fVar61;
          fVar51 = fVar37 * fVar37;
          fVar44 = SQRT(fVar51 + (fVar44 - fVar57) * (fVar44 - fVar57) + fVar36 * fVar36);
          if (iVar26 < 1) {
            lVar21 = *(long *)(unaff_x26 + 0x78);
            if (lVar21 == 0) goto LAB_03168190;
            iVar26 = *(int *)(lVar21 + 0x18);
            if (0 < iVar26) goto LAB_0316b4d8;
          }
          else {
LAB_0316b4d8:
            fVar36 = (float)FUN_0409f2f4(lVar21,iVar26 + -1,*(undefined8 *)PTR_DAT_069fd088);
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
            fStack00000000000000f8 = fStack00000000000000f8 - fVar36;
            fStack00000000000000f4 = fStack00000000000000f4 - fVar51;
            fStack00000000000000f0 = fStack00000000000000f0 - fVar37;
            fVar37 = SQRT(fStack00000000000000f0 * fStack00000000000000f0 +
                          fStack00000000000000f8 * fStack00000000000000f8 +
                          fStack00000000000000f4 * fStack00000000000000f4);
            if (fVar37 <= DAT_010fd13c) {
              if (DAT_06db4c71 == '\0') {
                FUN_02d965b8(PTR_DAT_069fb978);
                DAT_06db4c71 = '\x01';
              }
              pfVar20 = *(float **)(*(long *)PTR_DAT_069fb978 + 0xb8);
              fStack00000000000000f8 = *pfVar20;
              fStack00000000000000f4 = pfVar20[1];
              fStack00000000000000f0 = pfVar20[2];
              plVar25 = (long *)PTR_DAT_069fb978;
            }
            else {
              fStack00000000000000f8 = fStack00000000000000f8 / fVar37;
              fStack00000000000000f4 = fStack00000000000000f4 / fVar37;
              fStack00000000000000f0 = fStack00000000000000f0 / fVar37;
              if (DAT_06db4c71 == '\0') {
                FUN_02d965b8(PTR_DAT_069fb978);
                DAT_06db4c71 = '\x01';
              }
            }
            pfVar20 = *(float **)(*plVar25 + 0xb8);
            if (in_stack_000000a0._4_4_ <=
                (fStack00000000000000fc - pfVar20[2]) * (fStack00000000000000fc - pfVar20[2]) +
                (fStack0000000000000104 - *pfVar20) * (fStack0000000000000104 - *pfVar20) +
                (fStack0000000000000100 - pfVar20[1]) * (fStack0000000000000100 - pfVar20[1])) {
              if (DAT_06db4ece == '\0') {
                FUN_02d965b8(PTR_DAT_069fbb48);
                DAT_06db4ece = '\x01';
              }
              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              fVar38 = 0.0;
              fVar37 = SQRT((fStack00000000000000fc * fStack00000000000000fc +
                            fStack0000000000000100 * fStack0000000000000100 +
                            fStack0000000000000104 * fStack0000000000000104) *
                            (fStack00000000000000f0 * fStack00000000000000f0 +
                            fStack00000000000000f8 * fStack00000000000000f8 +
                            fStack00000000000000f4 * fStack00000000000000f4));
              if (DAT_010fcd14 <= fVar37) {
                fVar37 = (fStack00000000000000fc * fStack00000000000000f0 +
                         fStack0000000000000104 * fStack00000000000000f8 +
                         fStack0000000000000100 * fStack00000000000000f4) / fVar37;
                fVar38 = 1.0;
                if (fVar37 <= 1.0) {
                  fVar38 = fVar37;
                }
                fVar36 = -1.0;
                if (-1.0 <= fVar37) {
                  fVar36 = fVar38;
                }
                if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                dVar40 = acos((double)fVar36);
                fVar38 = (float)dVar40 * DAT_010fcf40;
              }
              bVar10 = false;
              bVar7 = true;
              bVar8 = false;
              if (*(float *)(in_stack_00000148 + 0x80) < fVar38) {
                bVar10 = false;
                bVar7 = false;
                bVar8 = true;
                if (!NAN(fVar44)) {
                  bVar10 = fVar44 < 1.5;
                  bVar7 = fVar44 == 1.5;
                  bVar8 = false;
                }
              }
              bVar10 = bVar27 != 0 ||
                       (!bVar7 && bVar10 == bVar8) &&
                       1.0 <= SQRT((fStack000000000000012c - fVar58) *
                                   (fStack000000000000012c - fVar58) +
                                   (fStack0000000000000128 - fVar54) *
                                   (fStack0000000000000128 - fVar54) +
                                   (fStack0000000000000130 - fVar39) *
                                   (fStack0000000000000130 - fVar39));
            }
          }
          unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
          if (*(char *)(in_stack_00000148 + 0x5d6) != '\0') {
            if (*(long *)(in_stack_00000148 + 0x20) == 0) goto LAB_03168190;
            FUN_03199614(*(long *)(in_stack_00000148 + 0x20),&stack0x000001c0,0);
          }
          bVar7 = bVar10;
          if (fVar60 < fVar53 + fVar34 + DAT_010fd060) {
            bVar8 = bVar10;
            if (fVar33 * 0.5 <= fVar44) {
              bVar8 = true;
            }
            if (!bVar8 && !bVar2) {
              if (*(uint *)(in_stack_00000170 + 0x18) <= uVar1) goto LAB_0316f2c4;
              fVar34 = 1.0;
              _fStack00000000000001c0 = *(ulong *)pfVar32;
              in_stack_000001c8 = *(float *)(lVar15 + 0x28);
              bVar7 = true;
            }
          }
          if (fVar53 + fVar34 <= fVar60) {
            fVar54 = fStack00000000000001c0;
            fVar58 = fStack00000000000001c4;
          }
          else {
            if (*(uint *)(in_stack_00000170 + 0x18) <= uVar1) goto LAB_0316f2c4;
            _fStack00000000000001c0 = *(ulong *)pfVar32;
            fVar34 = 1.0;
            in_stack_000001c8 = *(float *)(lVar15 + 0x28);
            bVar7 = true;
            fVar54 = *pfVar32;
            fVar58 = *(float *)(lVar15 + 0x24);
          }
          fVar39 = in_stack_000001c8;
          if (DAT_06db4c77 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c77 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fVar37 = in_stack_000001c8;
          bVar8 = bVar7;
          if (fStack000000000000010c <
              SQRT((fStack000000000000012c - fVar39) * (fStack000000000000012c - fVar39) +
                   (fStack0000000000000130 - fVar54) * (fStack0000000000000130 - fVar54) +
                   (fStack0000000000000128 - fVar58) * (fStack0000000000000128 - fVar58))) {
            bVar8 = true;
          }
          bVar3 = bVar8;
          if (uVar30 != 1) {
            bVar3 = true;
          }
          if (!bVar3) {
            bVar8 = fVar34 == 0.0;
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
              cVar14 = DAT_06db4c77;
            }
            else {
              cVar14 = '\x01';
            }
            fVar39 = in_stack_000001c8;
            uVar19 = _fStack00000000000001c0;
            uStack0000000000000110 = _fStack00000000000001c0 & 0xffffffff;
            fVar54 = SQRT((fStack000000000000012c - fVar37) * (fStack000000000000012c - fVar37) +
                          (fStack0000000000000130 - fVar54) * (fStack0000000000000130 - fVar54) +
                          (fStack0000000000000128 - fVar58) * (fStack0000000000000128 - fVar58));
            fStack0000000000000164 = in_stack_000001c8;
            fStack00000000000001d4 = fVar54 + fStack00000000000001d4;
            *pfVar16 = fVar54 + *pfVar16;
            if (cVar14 == '\0') {
              FUN_02d965b8(PTR_DAT_069fbb48);
              DAT_06db4c77 = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            in_stack_00000280 = in_stack_000001c8;
            lVar21 = *(long *)(in_stack_00000148 + 0x68);
            *(ulong *)(unaff_x26 + 0x60) = _fStack00000000000001c0;
            fVar42 = (float)uVar19 - fVar42;
            _fStack0000000000000130 = _fStack00000000000001c0 & 0xffffffff;
            fVar50 = fVar50 + SQRT(fVar42 * fVar42 + (fVar39 - fVar35) * (fVar39 - fVar35));
            fStack0000000000000128 = fStack00000000000001c4;
            fStack000000000000012c = in_stack_000001c8;
            if ((lVar21 == 0) ||
               (lVar21 = FUN_0400ff1c(lVar21,uVar24 & 0xffffffff,*unaff_x21), lVar21 == 0))
            goto LAB_03168190;
            if (*(float *)(lVar21 + 0x100) == 0.0) {
              if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                 (lVar21 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),uVar24 & 0xffffffff,
                                        *unaff_x21), lVar21 == 0)) goto LAB_03168190;
              if (*(float *)(lVar21 + 0x104) != 0.0) goto LAB_0316bb78;
              if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                 (lVar21 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),uVar24 & 0xffffffff,
                                        *unaff_x21), lVar21 == 0)) goto LAB_03168190;
              if (*(float *)(lVar21 + 0x110) != 0.0) goto LAB_0316bb78;
              if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                 (lVar21 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),uVar24 & 0xffffffff,
                                        *unaff_x21), lVar21 == 0)) goto LAB_03168190;
              if (*(float *)(lVar21 + 0x114) != 0.0) goto LAB_0316bb78;
              lVar21 = *in_stack_000000e0;
              if (lVar21 == 0) goto LAB_03168190;
              lVar12 = *(long *)(lVar21 + 0x10);
              lVar18 = *(long *)PTR_DAT_069ff178;
              *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
              if (lVar12 == 0) goto LAB_03168190;
              uVar48 = *(uint *)(lVar21 + 0x18);
              if (uVar48 < *(uint *)(lVar12 + 0x18)) {
                *(uint *)(lVar21 + 0x18) = uVar48 + 1;
                *(undefined4 *)(lVar12 + (long)(int)uVar48 * 4 + 0x20) = 0;
              }
              else {
                FUN_04059d64(0,lVar21,*(undefined8 *)
                                       (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
              }
            }
            else {
LAB_0316bb78:
              if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
              fVar35 = *pfVar16;
              uVar46 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),uVar24 & 0xffffffff,
                                    *unaff_x21);
              FUN_0316f6a0(fVar35,fVar47,uVar46,uVar46,&stack0x0000022c,&stack0x00000228,
                           &stack0x00000224,&stack0x00000218,&stack0x00000278,&stack0x00000214);
            }
            lVar21 = *in_stack_000000b8;
            if (fVar54 <= 5.0) {
              if (lVar21 == 0) goto LAB_03168190;
              lVar12 = *(long *)(lVar21 + 0x10);
              lVar18 = *(long *)PTR_DAT_069ff178;
              *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
              if (lVar12 == 0) goto LAB_03168190;
              uVar48 = *(uint *)(lVar21 + 0x18);
              fVar35 = (fVar38 / fVar54) * 5.0;
              if (*(uint *)(lVar12 + 0x18) <= uVar48) {
                lVar12 = *(long *)(lVar18 + 0x20);
                goto LAB_0316bcb0;
              }
              *(uint *)(lVar21 + 0x18) = uVar48 + 1;
              *(float *)(lVar12 + (long)(int)uVar48 * 4 + 0x20) = fVar35;
            }
            else {
              if (lVar21 == 0) goto LAB_03168190;
              lVar12 = *(long *)(lVar21 + 0x10);
              lVar18 = *(long *)PTR_DAT_069ff178;
              *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
              if (lVar12 == 0) goto LAB_03168190;
              uVar48 = *(uint *)(lVar21 + 0x18);
              if (uVar48 < *(uint *)(lVar12 + 0x18)) {
                *(uint *)(lVar21 + 0x18) = uVar48 + 1;
                *(float *)(lVar12 + (long)(int)uVar48 * 4 + 0x20) = fVar38;
              }
              else {
                lVar12 = *(long *)(lVar18 + 0x20);
                fVar35 = fVar38;
LAB_0316bcb0:
                FUN_04059d64(fVar35,lVar21,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x70));
              }
            }
            if (bVar9) {
              lVar21 = *in_stack_000000b8;
              if (lVar21 == 0) goto LAB_03168190;
              iVar26 = *(int *)(lVar21 + 0x18);
              if (1 < iVar26) {
                FUN_04059a68(lVar21,iVar26 + -1,*(undefined8 *)PTR_DAT_06a0a108);
                FUN_04059abc(lVar21,iVar26 + -2,*(undefined8 *)PTR_DAT_06a0b5c0);
              }
            }
            puVar4 = PTR_DAT_069fbee0;
            lVar21 = *(long *)(unaff_x26 + 0x20);
            if (lVar21 == 0) goto LAB_03168190;
            lVar12 = *(long *)(lVar21 + 0x10);
            *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
            if (lVar12 == 0) goto LAB_03168190;
            uVar48 = *(uint *)(lVar21 + 0x18);
            if (uVar48 < *(uint *)(lVar12 + 0x18)) {
              lVar12 = lVar12 + (long)(int)uVar48 * 0xc;
              *(uint *)(lVar21 + 0x18) = uVar48 + 1;
              *(float *)(lVar12 + 0x20) = in_stack_00000278;
              *(float *)(lVar12 + 0x24) = in_stack_0000027c;
              *(float *)(lVar12 + 0x28) = in_stack_00000280;
            }
            else {
              FUN_0409f624(lVar21,*(undefined8 *)
                                   (*(long *)(*(long *)(*(long *)puVar4 + 0x20) + 0xc0) + 0x70));
            }
            unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
            lVar21 = *(long *)(unaff_x26 + 0x28);
            if (lVar21 == 0) goto LAB_03168190;
            lVar12 = *(long *)(lVar21 + 0x10);
            lVar18 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
            if (lVar12 == 0) goto LAB_03168190;
            uVar48 = *(uint *)(lVar21 + 0x18);
            if (uVar48 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar21 + 0x18) = uVar48 + 1;
              *(float *)(lVar12 + (long)(int)uVar48 * 4 + 0x20) = fVar34;
            }
            else {
              FUN_04059d64(fVar34,lVar21,
                           *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
            }
            if (bVar7) {
              lVar21 = *(long *)(in_stack_00000148 + 0x2c8);
              if (lVar21 == 0) goto LAB_03168190;
              lVar12 = *(long *)(lVar21 + 0x10);
              lVar18 = *(long *)PTR_DAT_069fc3e0;
              *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
              if (lVar12 == 0) goto LAB_03168190;
              uVar48 = *(uint *)(lVar21 + 0x18);
              if (uVar48 < *(uint *)(lVar12 + 0x18)) {
                *(uint *)(lVar21 + 0x18) = uVar48 + 1;
                *(int *)(lVar12 + (long)(int)uVar48 * 4 + 0x20) = iStack00000000000000d4;
              }
              else {
                FUN_03fb3e1c(lVar21,iStack00000000000000d4,
                             *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
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
            uStack0000000000000110 = (ulong)(uint)fVar42;
            fStack0000000000000164 = fVar35;
          }
          fVar39 = fVar53 + fVar34;
          unaff_x23 = in_stack_00000148;
        } while (fVar39 < fVar60);
        iStack0000000000000108 = 0;
        plVar25 = (long *)PTR_DAT_069fb978;
      }
    }
    else {
      if ((*(long *)(unaff_x23 + 0x68) == 0) ||
         (lVar21 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar24 & 0xffffffff,*unaff_x21),
         lVar21 == 0)) goto LAB_03168190;
      if (*(int *)(lVar21 + 0x6c) != 1) {
        if ((*(long *)(unaff_x23 + 0x68) == 0) ||
           (lVar21 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar24 & 0xffffffff,*unaff_x21),
           lVar21 == 0)) goto LAB_03168190;
        if (*(int *)(lVar21 + 0x6c) != 2) {
          if ((*(long *)(unaff_x23 + 0x68) == 0) ||
             (lVar21 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar24 & 0xffffffff,*unaff_x21),
             lVar21 == 0)) goto LAB_03168190;
          if (*(int *)(lVar21 + 0x6c) == 3) {
            uStack00000000000001ac = 0;
            if (*(long *)(unaff_x23 + 0x68) == 0) goto LAB_03168190;
            if (((long)(*(int *)(*(long *)(unaff_x23 + 0x68) + 0x18) + -2) < (long)uVar30) &&
               (*(char *)(unaff_x23 + 0x84) == '\0')) {
              uVar46 = *(undefined8 *)(unaff_x23 + 0x2e0);
              if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              uVar13 = FUN_0634eb94(uVar46,0,0);
              if ((uVar13 & 1) != 0) goto LAB_0316adcc;
              FUN_030fd644(&stack0x00000290,unaff_x23,uVar30 & 0xffffffff,&stack0x00000238,
                           &stack0x00000240,(long)&stack0x000001d0 + 4,0,&stack0x00000230);
            }
            else {
LAB_0316adcc:
              FUN_030faa2c(&stack0x00000290,unaff_x23,uVar30 & 0xffffffff,&stack0x00000238,
                           &stack0x00000240,(long)&stack0x000001d0 + 4,0,&stack0x00000230);
            }
            if ((*(long *)(unaff_x23 + 0x68) == 0) ||
               (lVar21 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar24 & 0xffffffff,*unaff_x21),
               lVar21 == 0)) goto LAB_03168190;
            lVar12 = *(long *)(unaff_x26 + 0x28);
            *(undefined4 *)(lVar21 + 0x34) = uStack00000000000001ac;
            if (lVar12 == 0) goto LAB_03168190;
            fVar53 = 0.0;
            iVar26 = 0;
            puVar31 = (undefined4 *)(in_stack_00000170 + 0x20 + uVar24 * 0xc);
            while( true ) {
              unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
              puVar4 = PTR_DAT_069fbee0;
              plVar25 = (long *)PTR_DAT_069fb978;
              fVar34 = (float)uVar19;
              fStack0000000000000164 = (float)uVar43;
              iVar62 = *(int *)(lVar12 + 0x18);
              if (iVar62 <= iVar26) break;
              if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
              uStack00000000000001a0 =
                   FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),iVar26,*(undefined8 *)PTR_DAT_069fd088);
              fStack00000000000001a4 = fVar34;
              fStack00000000000001a8 = fStack0000000000000164;
              if (*(char *)(in_stack_00000148 + 0x5d6) == '\0') {
                uVar19 = (ulong)*(uint *)(in_stack_00000170 + 0x18);
                if ((((uVar19 <= uVar24) || (uVar19 <= uVar30)) || (uVar19 <= uVar1)) ||
                   (uVar19 <= uVar30 + 2)) goto LAB_0316f2c4;
                if (*(long *)(unaff_x26 + 0x28) == 0) goto LAB_03168190;
                uVar45 = *puVar31;
                fVar34 = (float)puVar31[1];
                uVar55 = puVar31[2];
                fVar35 = *pfVar23;
                uVar59 = *(undefined4 *)(lVar11 + 0x24);
                uVar56 = *(undefined4 *)(lVar11 + 0x28);
                FUN_04059a68(*(long *)(unaff_x26 + 0x28),iVar26,*(undefined8 *)PTR_DAT_06a0a108);
                FUN_0316f340(uVar45,fVar34,uVar55,fVar35,uVar59,uVar56);
                fStack00000000000001a4 = fVar34;
                if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                fStack0000000000000164 = fStack00000000000001a8;
                FUN_0409f350(uStack00000000000001a0,*(long *)(unaff_x26 + 0x20),iVar26,
                             *(undefined8 *)PTR_DAT_06a0b7d0);
                if (iVar26 != 0) goto LAB_0316af8c;
LAB_0316b04c:
                lVar21 = *in_stack_000000e0;
                if (lVar21 == 0) goto LAB_03168190;
                lVar12 = *(long *)(lVar21 + 0x10);
                lVar18 = *(long *)PTR_DAT_069ff178;
                *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
                if (lVar12 == 0) goto LAB_03168190;
                uVar48 = *(uint *)(lVar21 + 0x18);
                if (uVar48 < *(uint *)(lVar12 + 0x18)) {
                  *(uint *)(lVar21 + 0x18) = uVar48 + 1;
                  *(undefined4 *)(lVar12 + (long)(int)uVar48 * 4 + 0x20) = 0;
                }
                else {
                  FUN_04059d64(0,lVar21,*(undefined8 *)
                                         (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                }
              }
              else {
                if (*(long *)(in_stack_00000148 + 0x20) == 0) goto LAB_03168190;
                FUN_03199614(*(long *)(in_stack_00000148 + 0x20),&stack0x000001a0,0);
                if (iVar26 == 0) goto LAB_0316b04c;
LAB_0316af8c:
                if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                   (lVar21 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),uVar24 & 0xffffffff,
                                          *(undefined8 *)PTR_DAT_06a0b440), lVar21 == 0))
                goto LAB_03168190;
                if (*(float *)(lVar21 + 0x100) == 0.0) {
                  if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                     (lVar21 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),uVar24 & 0xffffffff,
                                            *(undefined8 *)PTR_DAT_06a0b440), lVar21 == 0))
                  goto LAB_03168190;
                  if (*(float *)(lVar21 + 0x104) == 0.0) {
                    if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                       (lVar21 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                              uVar24 & 0xffffffff,*(undefined8 *)PTR_DAT_06a0b440),
                       lVar21 == 0)) goto LAB_03168190;
                    if (*(float *)(lVar21 + 0x110) == 0.0) {
                      if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                         (lVar21 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                uVar24 & 0xffffffff,*(undefined8 *)PTR_DAT_06a0b440)
                         , lVar21 == 0)) goto LAB_03168190;
                      if (*(float *)(lVar21 + 0x114) == 0.0) goto LAB_0316b04c;
                    }
                  }
                }
                puVar4 = PTR_DAT_069fd088;
                if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                fVar35 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),iVar26 + -1,
                                             *(undefined8 *)PTR_DAT_069fd088);
                if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                fVar42 = fVar34;
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
                fVar39 = *pfVar16;
                fVar53 = fVar53 + SQRT((fStack0000000000000164 - fVar54) *
                                       (fStack0000000000000164 - fVar54) +
                                       (fVar35 - fVar58) * (fVar35 - fVar58) +
                                       (fVar34 - fVar42) * (fVar34 - fVar42));
                uVar46 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),uVar24 & 0xffffffff,
                                      *(undefined8 *)PTR_DAT_06a0b440);
                FUN_0316f6a0(fVar53 + fVar39,fVar47,uVar46,uVar46,&stack0x0000022c,&stack0x00000228,
                             &stack0x00000224,&stack0x00000218,&stack0x000001a0,&stack0x00000214);
              }
              if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
              uVar43 = (ulong)(uint)fStack00000000000001a8;
              uVar19 = (ulong)(uint)fStack00000000000001a4;
              FUN_0409f350(uStack00000000000001a0,*(long *)(unaff_x26 + 0x20),iVar26,
                           *(undefined8 *)PTR_DAT_06a0b7d0);
              lVar12 = *(long *)(unaff_x26 + 0x28);
              iVar26 = iVar26 + 1;
              if (lVar12 == 0) goto LAB_03168190;
            }
            uVar19 = (ulong)(iVar62 - 1);
            if (iVar62 < 1) {
              if (*(uint *)(in_stack_00000170 + 0x18) <= uVar1) goto LAB_0316f2c4;
              lVar21 = *(long *)(unaff_x26 + 0x20);
              if (lVar21 == 0) goto LAB_03168190;
              lVar12 = *(long *)(lVar21 + 0x10);
              fVar53 = *pfVar32;
              uVar45 = *(undefined4 *)(lVar15 + 0x24);
              fStack0000000000000164 = *(float *)(lVar15 + 0x28);
              *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
              if (lVar12 == 0) goto LAB_03168190;
              uVar48 = *(uint *)(lVar21 + 0x18);
              if (uVar48 < *(uint *)(lVar12 + 0x18)) {
                lVar12 = lVar12 + (long)(int)uVar48 * 0xc;
                *(uint *)(lVar21 + 0x18) = uVar48 + 1;
                *(float *)(lVar12 + 0x20) = fVar53;
                *(undefined4 *)(lVar12 + 0x24) = uVar45;
                *(float *)(lVar12 + 0x28) = fStack0000000000000164;
              }
              else {
                FUN_0409f624(lVar21,*(undefined8 *)
                                     (*(long *)(*(long *)(*(long *)puVar4 + 0x20) + 0xc0) + 0x70));
                uVar19 = extraout_x1_00;
              }
              fVar53 = fStack00000000000001d4;
              if ((*(uint *)(in_stack_00000170 + 0x18) <= uVar30) ||
                 (*(uint *)(in_stack_00000170 + 0x18) <= uVar1)) goto LAB_0316f2c4;
              uVar46 = *(undefined8 *)pfVar23;
              fVar47 = *(float *)(lVar11 + 0x28);
              uVar49 = *(undefined8 *)pfVar32;
              fVar34 = *(float *)(lVar15 + 0x28);
              if (DAT_06db4c77 == '\0') {
                FUN_02d965b8(PTR_DAT_069fbb48,uVar19);
                DAT_06db4c77 = '\x01';
              }
              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              fVar35 = (float)uVar46 - (float)uVar49;
              fVar42 = (float)((ulong)uVar46 >> 0x20) - (float)((ulong)uVar49 >> 0x20);
              fVar47 = fVar47 - fVar34;
              in_stack_0000027c = fVar47 * fVar47;
              fStack00000000000001d4 =
                   fVar53 + SQRT(in_stack_0000027c + fVar35 * fVar35 + fVar42 * fVar42);
LAB_0316d2dc:
              lVar11 = *(long *)(unaff_x26 + 0x28);
              if (lVar11 == 0) goto LAB_03168190;
              lVar15 = *(long *)(lVar11 + 0x10);
              lVar21 = *(long *)PTR_DAT_069ff178;
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              if (lVar15 == 0) goto LAB_03168190;
              uVar48 = *(uint *)(lVar11 + 0x18);
              if (uVar48 < *(uint *)(lVar15 + 0x18)) {
                *(uint *)(lVar11 + 0x18) = uVar48 + 1;
                *(undefined4 *)(lVar15 + (long)(int)uVar48 * 4 + 0x20) = 0x3f800000;
              }
              else {
                FUN_04059d64(0x3f800000,lVar11,
                             *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
              }
              lVar11 = *in_stack_000000e0;
              if (lVar11 == 0) goto LAB_03168190;
              lVar15 = *(long *)(lVar11 + 0x10);
              lVar21 = *(long *)PTR_DAT_069ff178;
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              if (lVar15 == 0) goto LAB_03168190;
              uVar48 = *(uint *)(lVar11 + 0x18);
              if (uVar48 < *(uint *)(lVar15 + 0x18)) {
                *(uint *)(lVar11 + 0x18) = uVar48 + 1;
                *(undefined4 *)(lVar15 + (long)(int)uVar48 * 4 + 0x20) = 0;
              }
              else {
                FUN_04059d64(0,lVar11,*(undefined8 *)
                                       (*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
              }
            }
            else {
              fVar53 = (float)FUN_04059a68(lVar12,uVar19,*(undefined8 *)PTR_DAT_06a0a108);
              unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
              puVar4 = PTR_DAT_069fd088;
              plVar25 = (long *)PTR_DAT_069fb978;
              fVar47 = 1.0;
              if (fVar53 <= 1.0) {
                lVar11 = *(long *)(unaff_x26 + 0x20);
                if (lVar11 == 0) goto LAB_03168190;
                fVar53 = (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -1,
                                             *(undefined8 *)PTR_DAT_069fd088);
                if (*(uint *)(in_stack_00000170 + 0x18) <= uVar1) goto LAB_0316f2c4;
                fVar47 = fVar47 - *(float *)(lVar15 + 0x24);
                fStack0000000000000164 = fStack0000000000000164 - *(float *)(lVar15 + 0x28);
                in_stack_0000027c = in_stack_000000a0._4_4_;
                if (in_stack_000000a0._4_4_ <=
                    fStack0000000000000164 * fStack0000000000000164 +
                    (fVar53 - *pfVar32) * (fVar53 - *pfVar32) + fVar47 * fVar47) {
                  lVar11 = *(long *)(unaff_x26 + 0x20);
                  if (lVar11 == 0) goto LAB_03168190;
                  fVar53 = in_stack_000000a0._4_4_;
                  fVar47 = (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -1,
                                               *(undefined8 *)puVar4);
                  if (*(uint *)(in_stack_00000170 + 0x18) <= uVar1) goto LAB_0316f2c4;
                  fVar34 = *pfVar32;
                  fVar42 = *(float *)(lVar15 + 0x24);
                  fVar35 = *(float *)(lVar15 + 0x28);
                  if (DAT_06db4c77 == '\0') {
                    FUN_02d965b8(PTR_DAT_069fbb48);
                    DAT_06db4c77 = '\x01';
                  }
                  if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  puVar5 = PTR_DAT_069fbee0;
                  fVar53 = fVar53 - fVar42;
                  lVar11 = *(long *)(unaff_x26 + 0x20);
                  fStack0000000000000164 = fStack0000000000000164 - fVar35;
                  if (fVar41 <= SQRT(fStack0000000000000164 * fStack0000000000000164 +
                                     (fVar47 - fVar34) * (fVar47 - fVar34) + fVar53 * fVar53)) {
                    if (uVar1 < *(uint *)(in_stack_00000170 + 0x18)) {
                      if (lVar11 != 0) {
                        lVar21 = *(long *)(lVar11 + 0x10);
                        fVar53 = *pfVar32;
                        fVar47 = *(float *)(lVar15 + 0x24);
                        fStack0000000000000164 = *(float *)(lVar15 + 0x28);
                        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                        if (lVar21 != 0) {
                          uVar48 = *(uint *)(lVar11 + 0x18);
                          if (uVar48 < *(uint *)(lVar21 + 0x18)) {
                            lVar21 = lVar21 + (long)(int)uVar48 * 0xc;
                            *(uint *)(lVar11 + 0x18) = uVar48 + 1;
                            *(float *)(lVar21 + 0x20) = fVar53;
                            *(float *)(lVar21 + 0x24) = fVar47;
                            *(float *)(lVar21 + 0x28) = fStack0000000000000164;
                          }
                          else {
                            FUN_0409f624(lVar11,*(undefined8 *)
                                                 (*(long *)(*(long *)(*(long *)puVar5 + 0x20) + 0xc0
                                                           ) + 0x70));
                          }
                          fVar53 = fStack00000000000001d4;
                          lVar11 = *(long *)(unaff_x26 + 0x20);
                          if (lVar11 != 0) {
                            fVar34 = (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -1,
                                                         *(undefined8 *)puVar4);
                            if (uVar1 < *(uint *)(in_stack_00000170 + 0x18)) {
                              fVar35 = *pfVar32;
                              fVar54 = *(float *)(lVar15 + 0x24);
                              fVar42 = *(float *)(lVar15 + 0x28);
                              if (DAT_06db4c77 == '\0') {
                                FUN_02d965b8(PTR_DAT_069fbb48);
                                DAT_06db4c77 = '\x01';
                              }
                              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                                thunk_FUN_02df485c();
                              }
                              fVar47 = fVar47 - fVar54;
                              fStack0000000000000164 = fStack0000000000000164 - fVar42;
                              in_stack_0000027c = fStack0000000000000164 * fStack0000000000000164;
                              fStack00000000000001d4 =
                                   fVar53 + SQRT(in_stack_0000027c +
                                                 (fVar34 - fVar35) * (fVar34 - fVar35) +
                                                 fVar47 * fVar47);
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
                  if (*(uint *)(in_stack_00000170 + 0x18) <= uVar1) goto LAB_0316f2c4;
                  fStack0000000000000164 = *(float *)(lVar15 + 0x28);
                  in_stack_0000027c = *(float *)(lVar15 + 0x24);
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
                if (*(uint *)(in_stack_00000170 + 0x18) <= uVar1) goto LAB_0316f2c4;
                fStack0000000000000164 = *(float *)(lVar15 + 0x28);
                in_stack_0000027c = *(float *)(lVar15 + 0x24);
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
            fVar53 = fStack0000000000000164;
            if (1 < *(int *)(lVar11 + 0x18)) {
              fStack0000000000000088 = in_stack_0000027c;
              fStack000000000000008c =
                   (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -2,
                                       *(undefined8 *)PTR_DAT_069fd088);
              lVar11 = *(long *)(unaff_x26 + 0x20);
              if (lVar11 == 0) goto LAB_03168190;
              fVar47 = fStack0000000000000088;
              fVar34 = fVar53;
              fVar35 = (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -1,*(undefined8 *)puVar4
                                          );
              if (DAT_06db4c75 == '\0') {
                FUN_02d965b8(PTR_DAT_069fbb48);
                DAT_06db4c75 = '\x01';
              }
              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              fStack000000000000008c = fStack000000000000008c - fVar35;
              fStack0000000000000088 = fStack0000000000000088 - fVar47;
              fVar53 = fVar53 - fVar34;
              in_stack_00000080._4_4_ =
                   SQRT(fVar53 * fVar53 +
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
                in_stack_00000080._4_4_ = fVar53 / in_stack_00000080._4_4_;
              }
            }
            lVar11 = *(long *)(in_stack_00000148 + 0x2c8);
            *(float *)(in_stack_00000148 + 0x2c0) =
                 *(float *)(in_stack_00000148 + 0x2c0) + fStack00000000000001d4;
            if (lVar11 == 0) goto LAB_03168190;
            lVar15 = *(long *)(lVar11 + 0x10);
            lVar21 = *(long *)PTR_DAT_069fc3e0;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar15 == 0) goto LAB_03168190;
            uVar48 = *(uint *)(lVar11 + 0x18);
            iStack00000000000000d4 = iVar26 + iStack00000000000000d4;
            fVar47 = fStack00000000000001d4;
            if (uVar48 < *(uint *)(lVar15 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar48 + 1;
              *(int *)(lVar15 + (long)(int)uVar48 * 4 + 0x20) = iStack00000000000000d4;
            }
            else {
              FUN_03fb3e1c(lVar11,iStack00000000000000d4,
                           *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
            }
            if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
            iVar26 = *(int *)(*(long *)(unaff_x26 + 0x78) + 0x18);
            in_stack_00000280 = fStack0000000000000164;
            if (0 < iVar26) {
              lVar11 = FUN_0400ff1c(in_stack_00000098,iVar29 + -2,*unaff_x21);
              if ((lVar11 != 0) && (lVar15 = *in_stack_00000090, lVar15 != 0)) {
                iVar62 = *(int *)(lVar11 + 0xbc);
                fVar34 = (float)FUN_04059a68(lVar15,*(int *)(lVar15 + 0x18) + -1,
                                             *(undefined8 *)PTR_DAT_06a0a108);
                lVar11 = *in_stack_00000090;
                if (lVar11 != 0) {
                  if (1 < *(int *)(lVar11 + 0x18)) {
                    fVar47 = (float)FUN_04059a68(lVar11,*(int *)(lVar11 + 0x18) + -2,
                                                 *(undefined8 *)PTR_DAT_06a0a108);
                    fVar47 = fVar34 - fVar47;
                    fVar34 = fVar47;
                  }
                  puVar4 = PTR_DAT_069fd088;
                  lVar11 = *(long *)(unaff_x26 + 0x78);
                  if (lVar11 != 0) {
                    fVar35 = (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -1,
                                                 *(undefined8 *)PTR_DAT_069fd088);
                    if (*(long *)(unaff_x26 + 0x20) != 0) {
                      fVar42 = fVar47;
                      fVar54 = fVar53;
                      fVar58 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),0,
                                                   *(undefined8 *)puVar4);
                      if (DAT_06db4c75 == '\0') {
                        FUN_02d965b8(PTR_DAT_069fbb48);
                        DAT_06db4c75 = '\x01';
                      }
                      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                      }
                      fVar47 = fVar47 - fVar42;
                      uVar19 = (ulong)(uint)DAT_010fd13c;
                      fVar53 = SQRT((fVar53 - fVar54) * (fVar53 - fVar54) +
                                    (fVar35 - fVar58) * (fVar35 - fVar58) + fVar47 * fVar47);
                      if (fVar53 <= DAT_010fd13c) {
                        if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
                          FUN_02d965b8(plVar25);
                          *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
                        }
                        fVar47 = *(float *)(*(long *)(*plVar25 + 0xb8) + 4);
                      }
                      else {
                        fVar47 = fVar47 / fVar53;
                      }
                      puVar4 = PTR_DAT_069fd088;
                      lVar11 = *(long *)(unaff_x26 + 0x78);
                      if (lVar11 != 0) {
                        FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -1,
                                     *(undefined8 *)PTR_DAT_069fd088);
                        lVar11 = *(long *)(unaff_x26 + 0x78);
                        if (lVar11 != 0) {
                          fVar42 = fVar53;
                          fVar35 = (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -1,
                                                       *(undefined8 *)puVar4);
                          if (*(long *)(unaff_x26 + 0x78) != 0) {
                            uVar43 = (ulong)(uint)(float)iVar62;
                            fVar54 = (float)iVar26 - (float)iVar62;
                            if (1.0 <= fVar54) {
                              fVar58 = 0.0;
                              iVar62 = *(int *)(*(long *)(unaff_x26 + 0x78) + 0x18);
                              iVar26 = 2;
                              iVar28 = -2;
                              do {
                                fVar39 = (float)uVar43;
                                if ((iVar26 - iVar62) + -1 < 0) {
                                  lVar11 = *(long *)(unaff_x26 + 0x78);
                                  if (lVar11 == 0) goto LAB_03168190;
                                  fVar60 = (float)uVar19;
                                  fVar37 = (float)FUN_0409f2f4(lVar11,iVar28 + *(int *)(lVar11 + 
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
                                  fVar44 = fVar60 - (float)uVar19;
                                  fVar58 = fVar58 + SQRT(fVar44 * fVar44 +
                                                         (fVar37 - fVar35) * (fVar37 - fVar35) +
                                                         (fVar39 - fVar42) * (fVar39 - fVar42));
                                  fVar53 = (fVar34 / fVar54) * fVar47 + fVar53;
                                  fVar35 = 1.0;
                                  if (SQRT(fVar58 / fVar34) <= 1.0) {
                                    fVar35 = SQRT(fVar58 / fVar34);
                                  }
                                  fVar42 = fVar53 + (fVar39 - fVar53) * fVar35;
                                  uVar43 = (ulong)(uint)fVar42;
                                  FUN_0409f350(fVar37,uVar43,fVar60,lVar11,
                                               iVar28 + *(int *)(lVar11 + 0x18),
                                               *(undefined8 *)PTR_DAT_06a0b7d0);
                                  uVar19 = (ulong)(uint)fVar60;
                                  fVar35 = fVar37;
                                }
                                fVar39 = (float)iVar26;
                                iVar26 = iVar26 + 1;
                                iVar28 = iVar28 + -1;
                              } while (fVar39 <= fVar54);
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
               (lVar11 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar24 & 0xffffffff,*unaff_x21),
               puVar4 = PTR_DAT_069fd088, lVar11 == 0)) goto LAB_03168190;
            if (*(int *)(lVar11 + 0x6c) != 4) goto LAB_0316c620;
            if ((*(long *)(unaff_x23 + 0x68) == 0) ||
               (lVar11 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar24 & 0xffffffff,*unaff_x21),
               lVar11 == 0)) goto LAB_03168190;
            fStack00000000000001d4 = 0.0;
            *(undefined8 *)(unaff_x26 + 0x20) = *(undefined8 *)(lVar11 + 0x1d8);
            lVar11 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ff188);
            FUN_040594d0(lVar11,*(undefined8 *)PTR_DAT_069ff180);
            if (lVar11 == 0) goto LAB_03168190;
            lVar15 = *(long *)(lVar11 + 0x10);
            lVar21 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar15 == 0) goto LAB_03168190;
            uVar48 = *(uint *)(lVar11 + 0x18);
            if (uVar48 < *(uint *)(lVar15 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar48 + 1;
              *(undefined4 *)(lVar15 + (long)(int)uVar48 * 4 + 0x20) = 0;
            }
            else {
              FUN_04059d64(0,lVar11,*(undefined8 *)
                                     (*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
            }
            lVar15 = *(long *)(unaff_x26 + 0x20);
            if (lVar15 == 0) goto LAB_03168190;
            iVar26 = 1;
            while( true ) {
              fVar53 = fStack00000000000001d4;
              fVar34 = (float)uVar43;
              fVar47 = (float)uVar19;
              if (*(int *)(lVar15 + 0x18) <= iVar26) break;
              fVar35 = (float)FUN_0409f2f4(lVar15,iVar26 + -1,*(undefined8 *)puVar4);
              if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
              fVar42 = fVar47;
              fVar54 = fVar34;
              fVar58 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),iVar26,*(undefined8 *)puVar4)
              ;
              if (DAT_06db4c77 == '\0') {
                FUN_02d965b8(PTR_DAT_069fbb48);
                DAT_06db4c77 = '\x01';
              }
              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              fVar34 = fVar34 - fVar54;
              uVar43 = (ulong)(uint)fVar34;
              lVar15 = *(long *)(lVar11 + 0x10);
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              uVar19 = (ulong)(uint)(fVar34 * fVar34);
              fStack00000000000001d4 =
                   fVar53 + SQRT(fVar34 * fVar34 +
                                 (fVar35 - fVar58) * (fVar35 - fVar58) +
                                 (fVar47 - fVar42) * (fVar47 - fVar42));
              if (lVar15 == 0) goto LAB_03168190;
              uVar48 = *(uint *)(lVar11 + 0x18);
              if (uVar48 < *(uint *)(lVar15 + 0x18)) {
                *(uint *)(lVar11 + 0x18) = uVar48 + 1;
                *(float *)(lVar15 + (long)(int)uVar48 * 4 + 0x20) = fStack00000000000001d4;
              }
              else {
                FUN_04059d64(lVar11,*(undefined8 *)
                                     (*(long *)(*(long *)(*(long *)PTR_DAT_069ff178 + 0x20) + 0xc0)
                                     + 0x70));
              }
              lVar15 = *(long *)(unaff_x26 + 0x20);
              iVar26 = iVar26 + 1;
              if (lVar15 == 0) goto LAB_03168190;
            }
            lVar15 = *(long *)(unaff_x26 + 0x28);
            *pfVar16 = *pfVar16 + fStack00000000000001d4;
            if (lVar15 == 0) goto LAB_03168190;
            lVar21 = *(long *)(lVar15 + 0x10);
            lVar12 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
            if (lVar21 == 0) goto LAB_03168190;
            uVar48 = *(uint *)(lVar15 + 0x18);
            if (uVar48 < *(uint *)(lVar21 + 0x18)) {
              *(uint *)(lVar15 + 0x18) = uVar48 + 1;
              *(undefined4 *)(lVar21 + (long)(int)uVar48 * 4 + 0x20) = 0;
            }
            else {
              FUN_04059d64(0,lVar15,*(undefined8 *)
                                     (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
            lVar15 = *in_stack_000000e0;
            if (lVar15 == 0) goto LAB_03168190;
            lVar21 = *(long *)(lVar15 + 0x10);
            lVar12 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
            if (lVar21 == 0) goto LAB_03168190;
            uVar48 = *(uint *)(lVar15 + 0x18);
            if (uVar48 < *(uint *)(lVar21 + 0x18)) {
              *(uint *)(lVar15 + 0x18) = uVar48 + 1;
              *(undefined4 *)(lVar21 + (long)(int)uVar48 * 4 + 0x20) = 0;
            }
            else {
              FUN_04059d64(0,lVar15,*(undefined8 *)
                                     (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
            lVar15 = *(long *)(unaff_x26 + 0x20);
            if (lVar15 == 0) goto LAB_03168190;
            iVar26 = 0;
            while (iVar26 < *(int *)(lVar15 + 0x18)) {
              lVar15 = *(long *)(unaff_x26 + 0x28);
              fVar53 = (float)FUN_04059a68(lVar11,iVar26,*(undefined8 *)PTR_DAT_06a0a108);
              if (lVar15 == 0) goto LAB_03168190;
              lVar21 = *(long *)(lVar15 + 0x10);
              lVar12 = *(long *)PTR_DAT_069ff178;
              *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
              if (lVar21 == 0) goto LAB_03168190;
              uVar48 = *(uint *)(lVar15 + 0x18);
              if (uVar48 < *(uint *)(lVar21 + 0x18)) {
                *(uint *)(lVar15 + 0x18) = uVar48 + 1;
                *(float *)(lVar21 + (long)(int)uVar48 * 4 + 0x20) = fVar53 / fStack00000000000001d4;
              }
              else {
                FUN_04059d64(lVar15,*(undefined8 *)
                                     (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              }
              lVar15 = *in_stack_000000e0;
              if (lVar15 == 0) goto LAB_03168190;
              lVar21 = *(long *)(lVar15 + 0x10);
              lVar12 = *(long *)PTR_DAT_069ff178;
              *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
              if (lVar21 == 0) goto LAB_03168190;
              uVar48 = *(uint *)(lVar15 + 0x18);
              if (uVar48 < *(uint *)(lVar21 + 0x18)) {
                *(uint *)(lVar15 + 0x18) = uVar48 + 1;
                *(undefined4 *)(lVar21 + (long)(int)uVar48 * 4 + 0x20) = 0;
              }
              else {
                FUN_04059d64(0,lVar15,*(undefined8 *)
                                       (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              }
              lVar15 = *(long *)(unaff_x26 + 0x20);
              iVar26 = iVar26 + 1;
              if (lVar15 == 0) goto LAB_03168190;
            }
            iStack0000000000000108 = 4;
            unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
            unaff_x23 = in_stack_00000148;
          }
          goto LAB_0316c620;
        }
      }
      uVar48 = *(uint *)(in_stack_00000170 + 0x18);
      fStack0000000000000164 = in_stack_00000280;
      if (uVar30 == 1) {
        if ((ulong)uVar48 < 2) goto LAB_0316f2c4;
        fStack0000000000000164 = *(float *)(lVar11 + 0x28);
        *(undefined8 *)(unaff_x26 + 0x60) = *(undefined8 *)pfVar23;
      }
      if (uVar48 <= uVar1) goto LAB_0316f2c4;
      fVar53 = *(float *)(lVar15 + 0x28);
      uVar46 = *(undefined8 *)pfVar32;
      uVar49 = *(undefined8 *)pfVar23;
      fVar50 = *(float *)(lVar11 + 0x28);
      if (DAT_06db4c75 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c75 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar34 = (float)uVar46 - (float)uVar49;
      fVar35 = (float)((ulong)uVar46 >> 0x20) - (float)((ulong)uVar49 >> 0x20);
      fVar53 = fVar53 - fVar50;
      fVar50 = SQRT(fVar53 * fVar53 + fVar34 * fVar34 + fVar35 * fVar35);
      uVar19 = (ulong)(uint)fVar50;
      if (fVar50 <= DAT_010fd13c) {
        if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
          FUN_02d965b8(plVar25);
          *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
        }
        uVar46 = **(undefined8 **)(*plVar25 + 0xb8);
        fVar53 = *(float *)(*(undefined8 **)(*plVar25 + 0xb8) + 1);
      }
      else {
        fVar53 = fVar53 / fVar50;
        uVar46 = CONCAT44(fVar35 / fVar50,fVar34 / fVar50);
      }
      if (*(uint *)(in_stack_00000170 + 0x18) <= uVar1) goto LAB_0316f2c4;
      fVar50 = *(float *)(lVar15 + 0x28);
      uVar49 = *(undefined8 *)pfVar32;
      uVar52 = *(undefined8 *)pfVar23;
      fVar34 = *(float *)(lVar11 + 0x28);
      if (DAT_06db4c77 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c77 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar35 = (float)uVar49 - (float)uVar52;
      fVar42 = (float)((ulong)uVar49 >> 0x20) - (float)((ulong)uVar52 >> 0x20);
      fVar50 = fVar50 - fVar34;
      fStack00000000000001d4 = SQRT(fVar50 * fVar50 + fVar35 * fVar35 + fVar42 * fVar42);
      if (*(uint *)(in_stack_00000170 + 0x18) <= uVar1) goto LAB_0316f2c4;
      uStack0000000000000110 = (ulong)(uint)in_stack_00000278;
      fVar34 = *pfVar32;
      fVar50 = *(float *)(lVar15 + 0x28);
      if (DAT_06db4c77 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c77 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar50 = fVar50 - fStack0000000000000164;
      fVar50 = SQRT((fVar34 - in_stack_00000278) * (fVar34 - in_stack_00000278) + fVar50 * fVar50) +
               0.0;
      fVar34 = 0.0;
      if (uVar30 != 1) {
        fVar34 = fStack000000000000010c;
      }
      uVar13 = (ulong)(uint)fVar34;
      uVar43 = uVar13;
      lVar21 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ff188);
      FUN_040594d0(lVar21,*(undefined8 *)PTR_DAT_069ff180);
      if (fVar34 < fStack00000000000001d4 - fStack000000000000010c) {
        fVar34 = *(float *)((ulong)&stack0x00000278 | 4);
        do {
          if (*(uint *)(in_stack_00000170 + 0x18) <= uVar1) goto LAB_0316f2c4;
          uVar49 = *(undefined8 *)pfVar32;
          fVar35 = *(float *)(lVar15 + 0x28);
          if (DAT_06db4c77 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c77 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fVar39 = (float)uVar13;
          fVar42 = (float)uVar46 * fVar39 + in_stack_00000278;
          fVar54 = (float)((ulong)uVar46 >> 0x20) * fVar39 + fVar34;
          uVar52 = CONCAT44(fVar54,fVar42);
          fVar58 = fVar53 * fVar39 + fStack0000000000000164;
          fVar42 = fVar42 - (float)uVar49;
          fVar54 = fVar54 - (float)((ulong)uVar49 >> 0x20);
          fVar35 = fVar58 - fVar35;
          fVar35 = SQRT(fVar35 * fVar35 + fVar42 * fVar42 + fVar54 * fVar54);
          uVar19 = (ulong)(uint)fVar35;
          if (fVar41 < fVar35) {
            _uStack00000000000001b0 = uVar52;
            in_stack_000001b8 = fVar58;
            if (*(char *)(unaff_x23 + 0x5d6) != '\0') {
              if (*(long *)(unaff_x23 + 0x20) == 0) goto LAB_03168190;
              FUN_03199614(*(long *)(unaff_x23 + 0x20),&stack0x000001b0,0);
            }
            if ((*(long *)(unaff_x23 + 0x68) == 0) ||
               (lVar12 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar24 & 0xffffffff,*unaff_x21),
               lVar12 == 0)) goto LAB_03168190;
            if (*(float *)(lVar12 + 0x100) == 0.0) {
              if ((*(long *)(unaff_x23 + 0x68) == 0) ||
                 (lVar12 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar24 & 0xffffffff,*unaff_x21),
                 lVar12 == 0)) goto LAB_03168190;
              if (*(float *)(lVar12 + 0x104) != 0.0) goto LAB_0316a920;
              if ((*(long *)(unaff_x23 + 0x68) == 0) ||
                 (lVar12 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar24 & 0xffffffff,*unaff_x21),
                 lVar12 == 0)) goto LAB_03168190;
              if (*(float *)(lVar12 + 0x110) != 0.0) goto LAB_0316a920;
              if ((*(long *)(unaff_x23 + 0x68) == 0) ||
                 (lVar12 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar24 & 0xffffffff,*unaff_x21),
                 lVar12 == 0)) goto LAB_03168190;
              if (*(float *)(lVar12 + 0x114) != 0.0) goto LAB_0316a920;
              lVar12 = *in_stack_000000e0;
              if (lVar12 == 0) goto LAB_03168190;
              lVar18 = *(long *)(lVar12 + 0x10);
              lVar22 = *(long *)PTR_DAT_069ff178;
              *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
              if (lVar18 == 0) goto LAB_03168190;
              uVar48 = *(uint *)(lVar12 + 0x18);
              if (uVar48 < *(uint *)(lVar18 + 0x18)) {
                *(uint *)(lVar12 + 0x18) = uVar48 + 1;
                *(undefined4 *)(lVar18 + (long)(int)uVar48 * 4 + 0x20) = 0;
              }
              else {
                FUN_04059d64(0,lVar12,*(undefined8 *)
                                       (*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
              }
            }
            else {
LAB_0316a920:
              if (*(long *)(unaff_x23 + 0x68) == 0) goto LAB_03168190;
              fVar35 = *pfVar16;
              uVar49 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar24 & 0xffffffff,*unaff_x21);
              FUN_0316f6a0(fVar39 + fVar35,fVar47,uVar49,uVar49,&stack0x0000022c,&stack0x00000228,
                           &stack0x00000224,&stack0x00000218,&stack0x000001b0,&stack0x00000214);
            }
            puVar4 = PTR_DAT_069fbee0;
            lVar12 = *(long *)(unaff_x26 + 0x20);
            if (lVar12 == 0) goto LAB_03168190;
            lVar18 = *(long *)(lVar12 + 0x10);
            uVar19 = (ulong)(uint)in_stack_000001b8;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar18 == 0) goto LAB_03168190;
            uVar48 = *(uint *)(lVar12 + 0x18);
            if (uVar48 < *(uint *)(lVar18 + 0x18)) {
              lVar18 = lVar18 + (long)(int)uVar48 * 0xc;
              *(uint *)(lVar12 + 0x18) = uVar48 + 1;
              *(undefined4 *)(lVar18 + 0x20) = uStack00000000000001b0;
              *(undefined4 *)(lVar18 + 0x24) = uStack00000000000001b4;
              *(float *)(lVar18 + 0x28) = in_stack_000001b8;
            }
            else {
              FUN_0409f624(lVar12,*(undefined8 *)
                                   (*(long *)(*(long *)(*(long *)puVar4 + 0x20) + 0xc0) + 0x70));
            }
            if (lVar21 == 0) goto LAB_03168190;
            lVar12 = *(long *)(lVar21 + 0x10);
            lVar18 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
            if (lVar12 == 0) goto LAB_03168190;
            uVar48 = *(uint *)(lVar21 + 0x18);
            if (uVar48 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar21 + 0x18) = uVar48 + 1;
              *(undefined4 *)(lVar12 + (long)(int)uVar48 * 4 + 0x20) = 0;
            }
            else {
              FUN_04059d64(lVar21,*(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70)
                          );
            }
            lVar12 = *in_stack_000000b8;
            if (lVar12 == 0) goto LAB_03168190;
            lVar18 = *(long *)(lVar12 + 0x10);
            lVar22 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar18 == 0) goto LAB_03168190;
            uVar48 = *(uint *)(lVar12 + 0x18);
            if (uVar48 < *(uint *)(lVar18 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar48 + 1;
              *(undefined4 *)(lVar18 + (long)(int)uVar48 * 4 + 0x20) = 0;
            }
            else {
              FUN_04059d64(0,lVar12,*(undefined8 *)
                                     (*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
            }
            lVar12 = *(long *)(unaff_x26 + 0x28);
            if (lVar12 == 0) goto LAB_03168190;
            lVar18 = *(long *)(lVar12 + 0x10);
            lVar22 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar18 == 0) goto LAB_03168190;
            uVar48 = *(uint *)(lVar12 + 0x18);
            if (uVar48 < *(uint *)(lVar18 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar48 + 1;
              *(float *)(lVar18 + (long)(int)uVar48 * 4 + 0x20) = fVar39 / fStack00000000000001d4;
            }
            else {
              FUN_04059d64(lVar12,*(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70)
                          );
            }
          }
          uVar43 = (ulong)(uint)fStack000000000000010c;
          uVar13 = (ulong)(uint)(fVar39 + fStack000000000000010c);
        } while (fVar39 + fStack000000000000010c < fStack00000000000001d4 - fStack000000000000010c);
      }
      fStack000000000000012c = (float)uVar19;
      fStack0000000000000128 = (float)uVar43;
      if (*(char *)(unaff_x23 + 0x5d6) == '\0') {
        if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
        lVar12 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),uVar24 & 0xffffffff,
                              *(undefined8 *)PTR_DAT_06a0b440);
        fStack000000000000012c = (float)uVar19;
        fStack0000000000000128 = (float)uVar43;
        if (lVar12 == 0) goto LAB_03168190;
        if (*(int *)(lVar12 + 0x6c) == 1) {
          if (*(long *)(unaff_x26 + 0x28) == 0) goto LAB_03168190;
          iVar26 = 0;
          puVar31 = (undefined4 *)(in_stack_00000170 + 0x20 + uVar24 * 0xc);
          lVar12 = *(long *)(unaff_x26 + 0x28);
          while( true ) {
            fStack000000000000012c = (float)uVar19;
            fStack0000000000000128 = (float)uVar43;
            if (*(int *)(lVar12 + 0x18) <= iVar26) break;
            uVar19 = (ulong)*(uint *)(in_stack_00000170 + 0x18);
            if ((((uVar19 <= uVar24) || (uVar19 <= uVar30)) || (uVar19 <= uVar1)) ||
               (uVar19 <= uVar30 + 2)) goto LAB_0316f2c4;
            uVar45 = *puVar31;
            fVar53 = (float)puVar31[1];
            uVar48 = puVar31[2];
            fVar47 = *pfVar23;
            uVar55 = *(undefined4 *)(lVar11 + 0x24);
            uVar59 = *(undefined4 *)(lVar11 + 0x28);
            FUN_04059a68(lVar12,iVar26,*(undefined8 *)PTR_DAT_06a0a108);
            FUN_0316f340(uVar45,fVar53,uVar48,fVar47,uVar55,uVar59);
            unaff_x26 = &stack0x00000218;
            if (((in_stack_00000238 == 0) ||
                (uVar45 = FUN_0409f2f4(in_stack_00000238,iVar26,*(undefined8 *)PTR_DAT_069fd088),
                lVar21 == 0)) ||
               (fVar47 = (float)FUN_04059a68(lVar21,iVar26,*(undefined8 *)PTR_DAT_06a0a108),
               in_stack_00000238 == 0)) goto LAB_03168190;
            uVar43 = (ulong)(uint)(fVar53 + fVar47);
            uVar19 = (ulong)uVar48;
            FUN_0409f350(uVar45,in_stack_00000238,iVar26,*(undefined8 *)PTR_DAT_06a0b7d0);
            iVar26 = iVar26 + 1;
            lVar12 = in_stack_00000240;
            if (in_stack_00000240 == 0) goto LAB_03168190;
          }
        }
      }
      puVar4 = PTR_DAT_069fbee0;
      lVar11 = *(long *)(unaff_x26 + 0x20);
      if (lVar11 == 0) goto LAB_03168190;
      if (*(int *)(lVar11 + 0x18) == 0) {
        if (*(uint *)(in_stack_00000170 + 0x18) <= uVar1) goto LAB_0316f2c4;
        lVar21 = *(long *)(lVar11 + 0x10);
        fVar53 = *pfVar32;
        uVar45 = *(undefined4 *)(lVar15 + 0x24);
        uVar55 = *(undefined4 *)(lVar15 + 0x28);
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar21 == 0) goto LAB_03168190;
        if (*(int *)(lVar21 + 0x18) == 0) {
          FUN_0409f624(lVar11,*(undefined8 *)
                               (*(long *)(*(long *)(*(long *)puVar4 + 0x20) + 0xc0) + 0x70));
        }
        else {
          *(undefined4 *)(lVar11 + 0x18) = 1;
          *(float *)(lVar21 + 0x20) = fVar53;
          *(undefined4 *)(lVar21 + 0x24) = uVar45;
          *(undefined4 *)(lVar21 + 0x28) = uVar55;
        }
        if (*(uint *)(in_stack_00000170 + 0x18) <= uVar1) goto LAB_0316f2c4;
        fVar47 = *pfVar32;
        fVar53 = *(float *)(lVar15 + 0x24);
        fStack000000000000012c = *(float *)(lVar15 + 0x28);
        if (DAT_06db4c77 == '\0') {
          FUN_02d965b8(PTR_DAT_069fbb48);
          DAT_06db4c77 = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        fVar53 = in_stack_0000027c - fVar53;
        lVar11 = *(long *)(unaff_x26 + 0x28);
        fStack000000000000012c = fStack0000000000000164 - fStack000000000000012c;
        fStack0000000000000128 = fStack000000000000012c * fStack000000000000012c;
        fStack00000000000001d4 =
             SQRT(fStack0000000000000128 +
                  (in_stack_00000278 - fVar47) * (in_stack_00000278 - fVar47) + fVar53 * fVar53);
        if (lVar11 == 0) goto LAB_03168190;
        lVar21 = *(long *)(lVar11 + 0x10);
        lVar12 = *(long *)PTR_DAT_069ff178;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar21 == 0) goto LAB_03168190;
        uVar48 = *(uint *)(lVar11 + 0x18);
        if (uVar48 < *(uint *)(lVar21 + 0x18)) {
          *(uint *)(lVar11 + 0x18) = uVar48 + 1;
          *(undefined4 *)(lVar21 + (long)(int)uVar48 * 4 + 0x20) = 0x3f800000;
        }
        else {
          FUN_04059d64(0x3f800000,lVar11,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
        lVar11 = *in_stack_000000e0;
        if (lVar11 == 0) goto LAB_03168190;
        lVar21 = *(long *)(lVar11 + 0x10);
        lVar12 = *(long *)PTR_DAT_069ff178;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar21 == 0) goto LAB_03168190;
        uVar48 = *(uint *)(lVar11 + 0x18);
        if (uVar48 < *(uint *)(lVar21 + 0x18)) {
          *(uint *)(lVar11 + 0x18) = uVar48 + 1;
          *(undefined4 *)(lVar21 + (long)(int)uVar48 * 4 + 0x20) = 0;
        }
        else {
          FUN_04059d64(0,lVar11,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
        lVar11 = *in_stack_000000b8;
        if (lVar11 == 0) goto LAB_03168190;
        lVar21 = *(long *)(lVar11 + 0x10);
        lVar12 = *(long *)PTR_DAT_069ff178;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar21 == 0) goto LAB_03168190;
        uVar48 = *(uint *)(lVar11 + 0x18);
        if (uVar48 < *(uint *)(lVar21 + 0x18)) {
          *(uint *)(lVar11 + 0x18) = uVar48 + 1;
          *(undefined4 *)(lVar21 + (long)(int)uVar48 * 4 + 0x20) = 0;
        }
        else {
          FUN_04059d64(0,lVar11,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
      }
      unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
      puVar4 = PTR_DAT_069fd088;
      plVar25 = (long *)PTR_DAT_069fb978;
      lVar11 = *(long *)(unaff_x26 + 0x20);
      if (lVar11 == 0) goto LAB_03168190;
      unaff_x29 = &PTR_FUN_06db4000;
      if (0 < *(int *)(lVar11 + 0x18)) {
        fVar53 = (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -1,
                                     *(undefined8 *)PTR_DAT_069fd088);
        if (*(uint *)(in_stack_00000170 + 0x18) <= uVar1) goto LAB_0316f2c4;
        fVar47 = fStack0000000000000128 - *(float *)(lVar15 + 0x24);
        fStack000000000000012c = fStack000000000000012c - *(float *)(lVar15 + 0x28);
        fStack0000000000000128 = in_stack_000000a0._4_4_;
        if (in_stack_000000a0._4_4_ <=
            fStack000000000000012c * fStack000000000000012c +
            (fVar53 - *pfVar32) * (fVar53 - *pfVar32) + fVar47 * fVar47) {
          lVar11 = *(long *)(unaff_x26 + 0x20);
          if (lVar11 == 0) goto LAB_03168190;
          fVar53 = in_stack_000000a0._4_4_;
          fVar47 = (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -1,*(undefined8 *)puVar4);
          if (*(uint *)(in_stack_00000170 + 0x18) <= uVar1) goto LAB_0316f2c4;
          fVar34 = *pfVar32;
          fVar42 = *(float *)(lVar15 + 0x24);
          fVar35 = *(float *)(lVar15 + 0x28);
          if (DAT_06db4c77 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c77 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          puVar5 = PTR_DAT_069fbee0;
          fVar53 = fVar53 - fVar42;
          lVar11 = *(long *)(unaff_x26 + 0x20);
          fStack000000000000012c = fStack000000000000012c - fVar35;
          if (fVar41 <= SQRT(fStack000000000000012c * fStack000000000000012c +
                             (fVar47 - fVar34) * (fVar47 - fVar34) + fVar53 * fVar53)) {
            if (*(uint *)(in_stack_00000170 + 0x18) <= uVar1) goto LAB_0316f2c4;
            if (lVar11 == 0) goto LAB_03168190;
            lVar21 = *(long *)(lVar11 + 0x10);
            fVar53 = *pfVar32;
            fVar47 = *(float *)(lVar15 + 0x24);
            fStack000000000000012c = *(float *)(lVar15 + 0x28);
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar21 == 0) goto LAB_03168190;
            uVar48 = *(uint *)(lVar11 + 0x18);
            if (uVar48 < *(uint *)(lVar21 + 0x18)) {
              lVar21 = lVar21 + (long)(int)uVar48 * 0xc;
              *(uint *)(lVar11 + 0x18) = uVar48 + 1;
              *(float *)(lVar21 + 0x20) = fVar53;
              *(float *)(lVar21 + 0x24) = fVar47;
              *(float *)(lVar21 + 0x28) = fStack000000000000012c;
            }
            else {
              FUN_0409f624(lVar11,*(undefined8 *)
                                   (*(long *)(*(long *)(*(long *)puVar5 + 0x20) + 0xc0) + 0x70));
            }
            fVar53 = fStack00000000000001d4;
            lVar11 = *(long *)(unaff_x26 + 0x20);
            if (lVar11 == 0) goto LAB_03168190;
            fVar34 = (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -1,*(undefined8 *)puVar4);
            if (*(uint *)(in_stack_00000170 + 0x18) <= uVar1) goto LAB_0316f2c4;
            fVar35 = *pfVar32;
            fVar54 = *(float *)(lVar15 + 0x24);
            fVar42 = *(float *)(lVar15 + 0x28);
            if (DAT_06db4c77 == '\0') {
              FUN_02d965b8(PTR_DAT_069fbb48);
              DAT_06db4c77 = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            fVar47 = fVar47 - fVar54;
            lVar11 = *(long *)(unaff_x26 + 0x28);
            fStack000000000000012c = fStack000000000000012c - fVar42;
            fStack0000000000000128 = fStack000000000000012c * fStack000000000000012c;
            fStack00000000000001d4 =
                 fVar53 + SQRT(fStack0000000000000128 +
                               (fVar34 - fVar35) * (fVar34 - fVar35) + fVar47 * fVar47);
            if (lVar11 == 0) goto LAB_03168190;
            lVar15 = *(long *)(lVar11 + 0x10);
            lVar21 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar15 == 0) goto LAB_03168190;
            uVar48 = *(uint *)(lVar11 + 0x18);
            if (uVar48 < *(uint *)(lVar15 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar48 + 1;
              *(undefined4 *)(lVar15 + (long)(int)uVar48 * 4 + 0x20) = 0x3f800000;
            }
            else {
              FUN_04059d64(0x3f800000,lVar11,
                           *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
            }
            lVar11 = *in_stack_000000e0;
            if (lVar11 == 0) goto LAB_03168190;
            lVar15 = *(long *)(lVar11 + 0x10);
            lVar21 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar15 == 0) goto LAB_03168190;
            uVar48 = *(uint *)(lVar11 + 0x18);
            if (uVar48 < *(uint *)(lVar15 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar48 + 1;
              *(undefined4 *)(lVar15 + (long)(int)uVar48 * 4 + 0x20) = 0;
            }
            else {
              FUN_04059d64(0,lVar11,*(undefined8 *)
                                     (*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
            }
          }
          else {
            if (lVar11 == 0) goto LAB_03168190;
            if (*(uint *)(in_stack_00000170 + 0x18) <= uVar1) goto LAB_0316f2c4;
            fStack000000000000012c = *(float *)(lVar15 + 0x28);
            fStack0000000000000128 = *(float *)(lVar15 + 0x24);
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
      lVar15 = *(long *)(lVar11 + 0x10);
      lVar21 = *(long *)PTR_DAT_069fc3e0;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (lVar15 == 0) goto LAB_03168190;
      uVar48 = *(uint *)(lVar11 + 0x18);
      iStack00000000000000d4 = iVar26 + iStack00000000000000d4;
      if (uVar48 < *(uint *)(lVar15 + 0x18)) {
        *(uint *)(lVar11 + 0x18) = uVar48 + 1;
        *(int *)(lVar15 + (long)(int)uVar48 * 4 + 0x20) = iStack00000000000000d4;
      }
      else {
        FUN_03fb3e1c(lVar11,iStack00000000000000d4,
                     *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
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
       fVar53 = fStack00000000000001d4, lVar11 == 0)) goto LAB_03168190;
    if (*(char *)(lVar11 + 0xb8) != '\0') {
      if (*(long *)(unaff_x23 + 0x68) == 0) goto LAB_03168190;
      uVar46 = *(undefined8 *)(unaff_x23 + 0x20);
      uVar49 = *(undefined8 *)(unaff_x26 + 0x28);
      uVar45 = *(undefined4 *)(unaff_x23 + 0x128);
      lVar11 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar30 & 0xffffffff,
                            *(undefined8 *)PTR_DAT_06a0b440);
      if (lVar11 == 0) goto LAB_03168190;
      FUN_031098f4(uVar45,fVar33,fVar53,uVar46,&stack0x00000238,uVar49,&stack0x00000248,
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
    fVar47 = fStack0000000000000088;
    fVar53 = in_stack_00000080._4_4_;
    FUN_0316fb80(fStack000000000000008c,unaff_x23,extraout_x1,uVar30 & 0xffffffff,in_stack_00000170,
                 &stack0x00000268,0,*(undefined8 *)(unaff_x26 + 0x78));
    if (iVar29 + 3 < *(int *)(in_stack_00000170 + 0x18)) {
      FUN_0317018c(unaff_x23,*(undefined8 *)(unaff_x23 + 0x68),uVar30 & 0xffffffff,in_stack_00000170
                   ,&stack0x00000258,0);
    }
    puVar5 = PTR_DAT_069ff178;
    puVar4 = PTR_DAT_069fd088;
    lVar11 = *in_stack_00000090;
    if (lVar11 == 0) goto LAB_03168190;
    lVar15 = *(long *)(lVar11 + 0x10);
    fVar34 = *pfVar16;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (lVar15 == 0) goto LAB_03168190;
    uVar48 = *(uint *)(lVar11 + 0x18);
    if (uVar48 < *(uint *)(lVar15 + 0x18)) {
      *(uint *)(lVar11 + 0x18) = uVar48 + 1;
      *(float *)(lVar15 + (long)(int)uVar48 * 4 + 0x20) = fVar34;
    }
    else {
      FUN_04059d64(lVar11,*(undefined8 *)
                           (*(long *)(*(long *)(*(long *)puVar5 + 0x20) + 0xc0) + 0x70));
    }
    if ((long)uVar30 < (long)*(int *)(in_stack_00000098 + 0x18)) {
      lVar11 = FUN_0400ff1c(in_stack_00000098,uVar30 & 0xffffffff,*unaff_x21);
      lVar15 = FUN_0400ff1c(in_stack_00000098,uVar30 & 0xffffffff,*unaff_x21);
      lVar21 = *(long *)(unaff_x26 + 0x78);
      if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      fVar34 = (float)FUN_0409f2f4(lVar21,*(int *)(lVar21 + 0x18) + -1,*(undefined8 *)puVar4);
      lVar21 = *(long *)(unaff_x26 + 0x78);
      if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      fVar35 = fVar47;
      fVar42 = fVar53;
      fVar54 = (float)FUN_0409f2f4(lVar21,*(int *)(lVar21 + 0x18) + -2,*(undefined8 *)puVar4);
      if (DAT_06db4c75 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c75 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar34 = fVar34 - fVar54;
      fVar47 = fVar47 - fVar35;
      fVar53 = fVar53 - fVar42;
      fVar35 = SQRT(fVar53 * fVar53 + fVar34 * fVar34 + fVar47 * fVar47);
      if (fVar35 <= DAT_010fd13c) {
        if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
          FUN_02d965b8(plVar25);
          *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
        }
        pfVar23 = *(float **)(*plVar25 + 0xb8);
        fVar34 = *pfVar23;
        fVar47 = pfVar23[1];
        fVar53 = pfVar23[2];
      }
      else {
        fVar34 = fVar34 / fVar35;
        fVar47 = fVar47 / fVar35;
        fVar53 = fVar53 / fVar35;
      }
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      *(float *)(lVar15 + 0x94) = fVar34;
      *(float *)(lVar15 + 0x98) = fVar47;
      *(float *)(lVar15 + 0x9c) = fVar53;
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      *(float *)(lVar11 + 0x88) = fVar34;
      *(float *)(lVar11 + 0x8c) = fVar47;
      *(float *)(lVar11 + 0x90) = fVar53;
      unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
      unaff_x23 = in_stack_00000148;
    }
    if (uVar30 < 2) {
      if (uVar30 == 1) {
        lVar11 = FUN_0400ff1c(in_stack_00000098,0,*unaff_x21);
        lVar15 = FUN_0400ff1c(in_stack_00000098,0,*unaff_x21);
        if (*(long *)(unaff_x26 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        fVar34 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),1,*(undefined8 *)puVar4);
        if (*(long *)(unaff_x26 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        fVar35 = fVar47;
        fVar42 = fVar53;
        fVar54 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)puVar4);
        if (DAT_06db4c75 == '\0') {
          FUN_02d965b8(PTR_DAT_069fbb48);
          DAT_06db4c75 = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        fVar34 = fVar34 - fVar54;
        fVar47 = fVar47 - fVar35;
        fVar53 = fVar53 - fVar42;
        fVar35 = SQRT(fVar53 * fVar53 + fVar34 * fVar34 + fVar47 * fVar47);
        if (fVar35 <= DAT_010fd13c) {
          if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
            FUN_02d965b8(plVar25);
            *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
          }
          pfVar23 = *(float **)(*plVar25 + 0xb8);
          fVar34 = *pfVar23;
          fVar47 = pfVar23[1];
          fVar53 = pfVar23[2];
        }
        else {
          fVar34 = fVar34 / fVar35;
          fVar47 = fVar47 / fVar35;
          fVar53 = fVar53 / fVar35;
        }
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        *(float *)(lVar15 + 0x94) = fVar34;
        *(float *)(lVar15 + 0x98) = fVar47;
        *(float *)(lVar15 + 0x9c) = fVar53;
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        *(float *)(lVar11 + 0x88) = fVar34;
        *(float *)(lVar11 + 0x8c) = fVar47;
        *(float *)(lVar11 + 0x90) = fVar53;
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
          lVar15 = *(long *)(unaff_x26 + 0x78);
          lVar11 = FUN_0400ff1c(in_stack_00000098,uVar24 & 0xffffffff,*unaff_x21);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          fVar42 = (float)FUN_0409f2f4(lVar15,*(int *)(lVar11 + 0xbc) + 1,*(undefined8 *)puVar4);
          lVar15 = *(long *)(unaff_x26 + 0x78);
          fVar34 = fVar47;
          fVar35 = fVar53;
          lVar11 = FUN_0400ff1c(in_stack_00000098,uVar24 & 0xffffffff,*unaff_x21);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          fVar54 = (float)FUN_0409f2f4(lVar15,*(undefined4 *)(lVar11 + 0xbc),*(undefined8 *)puVar4);
          lVar11 = FUN_0400ff1c(in_stack_00000098,uVar24 & 0xffffffff,*unaff_x21);
          if (DAT_06db4c75 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c75 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fVar58 = DAT_010fd13c;
          fVar42 = fVar42 - fVar54;
          fVar54 = fVar47 - fVar34;
          fVar35 = fVar53 - fVar35;
          fVar53 = SQRT(fVar35 * fVar35 + fVar42 * fVar42 + fVar54 * fVar54);
          if (fVar53 <= DAT_010fd13c) {
            if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
              FUN_02d965b8(plVar25);
              *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
            }
            pfVar23 = *(float **)(*plVar25 + 0xb8);
            fVar39 = *pfVar23;
            fVar54 = pfVar23[1];
            fVar53 = pfVar23[2];
          }
          else {
            fVar39 = fVar42 / fVar53;
            fVar54 = fVar54 / fVar53;
            fVar53 = fVar35 / fVar53;
          }
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          *(float *)(lVar11 + 0x88) = fVar39;
          *(float *)(lVar11 + 0x8c) = fVar54;
          uVar46 = *unaff_x21;
          *(float *)(lVar11 + 0x90) = fVar53;
          uVar48 = *(uint *)(in_stack_00000098 + 0x18);
          lVar11 = FUN_0400ff1c(in_stack_00000098,uVar24 & 0xffffffff,uVar46);
          if (uVar30 != uVar48) {
            fVar47 = fVar34;
          }
          if (DAT_06db4c75 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c75 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fVar47 = fVar47 - fVar34;
          fVar34 = SQRT(fVar35 * fVar35 + fVar42 * fVar42 + fVar47 * fVar47);
          if (fVar34 <= fVar58) {
            if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
              FUN_02d965b8(plVar25);
              *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
            }
            uVar46 = **(undefined8 **)(*plVar25 + 0xb8);
            fVar35 = *(float *)(*(undefined8 **)(*plVar25 + 0xb8) + 1);
          }
          else {
            fVar35 = fVar35 / fVar34;
            uVar46 = CONCAT44(fVar47 / fVar34,fVar42 / fVar34);
            fVar53 = fVar42;
          }
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          *(undefined8 *)(lVar11 + 0x94) = uVar46;
          *(float *)(lVar11 + 0x9c) = fVar35;
        }
      }
    }
    if ((long)uVar30 < (long)*(int *)(in_stack_00000098 + 0x18)) {
      lVar11 = FUN_0400ff1c(in_stack_00000098,uVar30 & 0xffffffff,*unaff_x21);
      lVar15 = FUN_0400ff1c(in_stack_00000098,uVar30 & 0xffffffff,*unaff_x21);
      if ((lVar15 == 0) || (lVar11 == 0)) goto LAB_03168190;
      uVar46 = *(undefined8 *)(lVar15 + 0x48);
      *(undefined4 *)(lVar11 + 0x5c) = *(undefined4 *)(lVar15 + 0x50);
      *(undefined8 *)(lVar11 + 0x54) = uVar46;
    }
    uVar30 = uVar1;
    unaff_x25 = in_stack_00000098;
    if ((long)(*(int *)(in_stack_00000170 + 0x18) + -2) <= (long)uVar1) goto LAB_0316df74;
    goto LAB_03169d3c;
  }
LAB_0316df74:
  if (*(char *)(unaff_x23 + 0x84) == '\0') {
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
    if ((*(long *)(unaff_x26 + 0x78) == 0) || (lVar11 == 0)) goto LAB_03168190;
    uVar46 = *unaff_x21;
    *(undefined4 *)(lVar11 + 0xbc) = *(undefined4 *)(*(long *)(unaff_x26 + 0x78) + 0x18);
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,uVar46);
    if (lVar11 == 0) goto LAB_03168190;
    uVar46 = *unaff_x21;
    *(float *)(lVar11 + 0xc0) = *pfVar16;
    lVar11 = FUN_0400ff1c(unaff_x25,0,uVar46);
    if (lVar11 == 0) goto LAB_03168190;
    uVar46 = *unaff_x21;
    *(undefined4 *)(lVar11 + 0xbc) = 0;
    lVar11 = FUN_0400ff1c(unaff_x25,0,uVar46);
    if (lVar11 == 0) goto LAB_03168190;
    *(undefined4 *)(lVar11 + 0xc0) = 0;
    if (*(int *)(unaff_x25 + 0x18) < 3) goto LAB_0316ea6c;
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
    fVar53 = *pfVar16;
    lVar15 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
    if ((lVar15 == 0) || (lVar11 == 0)) goto LAB_03168190;
    uVar46 = *unaff_x21;
    *(float *)(lVar11 + 200) = fVar53 - *(float *)(lVar15 + 0xc0);
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,uVar46);
    if (lVar11 == 0) goto LAB_03168190;
    fVar53 = *(float *)(lVar11 + 200);
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
    lVar15 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
    if (1000.0 <= fVar53) {
      if (lVar15 == 0) goto LAB_03168190;
      fStack00000000000001d0 = *(float *)(lVar15 + 200) / 1000.0;
      uVar46 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
      uVar46 = FUN_05362cb4(uVar46,*(undefined8 *)PTR_DAT_06a0c488,0);
    }
    else {
      if (lVar15 == 0) goto LAB_03168190;
      uVar46 = FUN_054fad00(lVar15 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
      uVar46 = FUN_05362cb4(uVar46,*(undefined8 *)PTR_DAT_06a0c4f0,0);
    }
    if (lVar11 == 0) goto LAB_03168190;
    *(undefined8 *)(lVar11 + 0xd0) = uVar46;
    LeanTween__value((undefined8 *)(lVar11 + 0xd0),uVar46);
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
    if (lVar11 == 0) goto LAB_03168190;
    fVar33 = *(float *)(lVar11 + 0x4c);
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
    if (lVar11 == 0) goto LAB_03168190;
    fVar41 = *(float *)(lVar11 + 0x4c);
    fVar53 = fVar33 - fVar41;
    if (DAT_06db4ece == '\0') {
      FUN_02d965b8(PTR_DAT_069fbb48);
      DAT_06db4ece = '\x01';
    }
    puVar4 = PTR_DAT_069fbb48;
    if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    fVar47 = 0.0;
    fVar38 = SQRT((fVar50 * fVar50 + fVar53 * fVar53) * DAT_010fd194);
    fVar53 = DAT_010fcd14;
    if (DAT_010fcd14 <= fVar38) {
      fVar53 = -1.0;
      fVar38 = (fVar50 * 0.0 + ABS(fVar33 - fVar41) * 50.0 + 0.0) / fVar38;
      fVar50 = 1.0;
      if (fVar38 <= 1.0) {
        fVar50 = fVar38;
      }
      fVar33 = -1.0;
      if (-1.0 <= fVar38) {
        fVar33 = fVar50;
      }
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        fVar53 = -1.0;
        thunk_FUN_02df485c();
      }
      dVar40 = acos((double)fVar33);
      fVar47 = (float)dVar40 * DAT_010fcf40;
    }
    fVar47 = 90.0 - fVar47;
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
    if (fVar47 <= 10.0) {
      uVar46 = FUN_054fad00(&stack0x00000234,*(undefined8 *)PTR_DAT_06a0c498,0);
    }
    else {
      dVar40 = modf((double)fVar47,(double *)&stack0x00000298);
      if (0.0 <= fVar47) {
        if (dVar40 == 0.5) {
          dVar40 = *(double *)(unaff_x26 + 0x80);
          fVar53 = 1.0;
          goto LAB_0316e5fc;
        }
        fStack00000000000001d0 = (float)(int)(fVar47 + 0.5);
      }
      else if (dVar40 == -0.5) {
        dVar40 = *(double *)(unaff_x26 + 0x80);
        fVar53 = -1.0;
LAB_0316e5fc:
        fStack00000000000001d0 = (float)dVar40;
        if (((long)dVar40 & 1U) != 0) {
          fStack00000000000001d0 = (float)dVar40 + fVar53;
        }
      }
      else {
        fStack00000000000001d0 = (float)(int)(fVar47 + -0.5);
      }
      uVar46 = FUN_054fabf8(&stack0x000001d0,0);
    }
    if (lVar11 == 0) goto LAB_03168190;
    *(undefined8 *)(lVar11 + 0xd8) = uVar46;
    LeanTween__value((undefined8 *)(lVar11 + 0xd8),uVar46);
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
    if (lVar11 == 0) goto LAB_03168190;
    fVar50 = *(float *)(lVar11 + 0x4c);
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
    if (lVar11 == 0) goto LAB_03168190;
    fVar33 = *(float *)(lVar11 + 0x4c);
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
    if (lVar11 == 0) goto LAB_03168190;
    fVar41 = *(float *)(lVar11 + 0x48);
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
    if (lVar11 == 0) goto LAB_03168190;
    fVar38 = *(float *)(lVar11 + 0x50);
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
    if (lVar11 == 0) goto LAB_03168190;
    fVar47 = *(float *)(lVar11 + 0x48);
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
    if (lVar11 == 0) goto LAB_03168190;
    fVar34 = *(float *)(lVar11 + 0x50);
    if (DAT_06db4c77 == '\0') {
      FUN_02d965b8(PTR_DAT_069fbb48);
      DAT_06db4c77 = '\x01';
    }
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    fVar38 = fVar38 - fVar34;
    fVar41 = fVar41 - fVar47;
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
    fStack00000000000001d0 =
         (ABS(fVar50 - fVar33) / SQRT(fVar41 * fVar41 + fVar38 * fVar38)) * 100.0;
    uVar46 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c498,0);
joined_r0x0316ea54:
    if (lVar11 == 0) goto LAB_03168190;
    *(undefined8 *)(lVar11 + 0xe0) = uVar46;
    LeanTween__value((undefined8 *)(lVar11 + 0xe0),uVar46);
  }
  else {
    lVar11 = FUN_0400ff1c(unaff_x25,0,*unaff_x21);
    if ((*(long *)(unaff_x26 + 0x78) == 0) || (lVar11 == 0)) goto LAB_03168190;
    uVar46 = *unaff_x21;
    *(undefined4 *)(lVar11 + 0xbc) = *(undefined4 *)(*(long *)(unaff_x26 + 0x78) + 0x18);
    lVar11 = FUN_0400ff1c(unaff_x25,0,uVar46);
    if (lVar11 == 0) goto LAB_03168190;
    *(float *)(lVar11 + 0xc0) = *pfVar16;
    if (2 < *(int *)(unaff_x25 + 0x18)) {
      lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
      fVar53 = *pfVar16;
      lVar15 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
      if ((lVar15 == 0) || (lVar11 == 0)) goto LAB_03168190;
      uVar46 = *unaff_x21;
      *(float *)(lVar11 + 200) = fVar53 - *(float *)(lVar15 + 0xc0);
      lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,uVar46);
      if (lVar11 == 0) goto LAB_03168190;
      fVar53 = *(float *)(lVar11 + 200);
      lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
      lVar15 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
      if (1000.0 <= fVar53) {
        if (lVar15 == 0) goto LAB_03168190;
        fStack00000000000001d0 = *(float *)(lVar15 + 200) / 1000.0;
        uVar46 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
        uVar46 = FUN_05362cb4(uVar46,*(undefined8 *)PTR_DAT_06a0c488,0);
      }
      else {
        if (lVar15 == 0) goto LAB_03168190;
        uVar46 = FUN_054fad00(lVar15 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
        uVar46 = FUN_05362cb4(uVar46,*(undefined8 *)PTR_DAT_06a0c4f0,0);
      }
      if (lVar11 == 0) goto LAB_03168190;
      *(undefined8 *)(lVar11 + 0xd0) = uVar46;
      LeanTween__value((undefined8 *)(lVar11 + 0xd0),uVar46);
      lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
      if (lVar11 == 0) goto LAB_03168190;
      fVar33 = *(float *)(lVar11 + 0x4c);
      lVar11 = FUN_0400ff1c(unaff_x25,0,*unaff_x21);
      if (lVar11 == 0) goto LAB_03168190;
      fVar41 = *(float *)(lVar11 + 0x4c);
      fVar53 = fVar33 - fVar41;
      if (DAT_06db4ece == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4ece = '\x01';
      }
      puVar4 = PTR_DAT_069fbb48;
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar47 = 0.0;
      fVar38 = SQRT((fVar50 * fVar50 + fVar53 * fVar53) * DAT_010fd194);
      fVar53 = DAT_010fcd14;
      if (DAT_010fcd14 <= fVar38) {
        fVar53 = -1.0;
        fVar38 = (fVar50 * 0.0 + ABS(fVar33 - fVar41) * 50.0 + 0.0) / fVar38;
        fVar50 = 1.0;
        if (fVar38 <= 1.0) {
          fVar50 = fVar38;
        }
        fVar33 = -1.0;
        if (-1.0 <= fVar38) {
          fVar33 = fVar50;
        }
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          fVar53 = -1.0;
          thunk_FUN_02df485c();
        }
        dVar40 = acos((double)fVar33);
        fVar47 = (float)dVar40 * DAT_010fcf40;
      }
      fVar47 = 90.0 - fVar47;
      lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
      if (fVar47 <= 10.0) {
        uVar46 = FUN_054fad00(&stack0x00000234,*(undefined8 *)PTR_DAT_06a0c498,0);
      }
      else {
        dVar40 = modf((double)fVar47,(double *)&stack0x00000298);
        if (0.0 <= fVar47) {
          if (dVar40 == 0.5) {
            dVar40 = *(double *)(unaff_x26 + 0x80);
            fVar53 = 1.0;
            goto LAB_0316e5d0;
          }
          fStack00000000000001d0 = (float)(int)(fVar47 + 0.5);
        }
        else if (dVar40 == -0.5) {
          dVar40 = *(double *)(unaff_x26 + 0x80);
          fVar53 = -1.0;
LAB_0316e5d0:
          fStack00000000000001d0 = (float)dVar40;
          if (((long)dVar40 & 1U) != 0) {
            fStack00000000000001d0 = (float)dVar40 + fVar53;
          }
        }
        else {
          fStack00000000000001d0 = (float)(int)(fVar47 + -0.5);
        }
        uVar46 = FUN_054fabf8(&stack0x000001d0,0);
      }
      if (lVar11 == 0) goto LAB_03168190;
      *(undefined8 *)(lVar11 + 0xd8) = uVar46;
      LeanTween__value((undefined8 *)(lVar11 + 0xd8),uVar46);
      lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
      if (lVar11 == 0) goto LAB_03168190;
      fVar50 = *(float *)(lVar11 + 0x4c);
      lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
      if (lVar11 == 0) goto LAB_03168190;
      fVar33 = *(float *)(lVar11 + 0x4c);
      lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
      if (lVar11 == 0) goto LAB_03168190;
      fVar41 = *(float *)(lVar11 + 0x48);
      lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
      if (lVar11 == 0) goto LAB_03168190;
      fVar38 = *(float *)(lVar11 + 0x50);
      lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
      if (lVar11 == 0) goto LAB_03168190;
      fVar47 = *(float *)(lVar11 + 0x48);
      lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
      if (lVar11 == 0) goto LAB_03168190;
      fVar34 = *(float *)(lVar11 + 0x50);
      if (DAT_06db4c77 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c77 = '\x01';
      }
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar38 = fVar38 - fVar34;
      fVar41 = fVar41 - fVar47;
      lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
      fStack00000000000001d0 =
           (ABS(fVar50 - fVar33) / SQRT(fVar41 * fVar41 + fVar38 * fVar38)) * 100.0;
      uVar46 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c498,0);
      goto joined_r0x0316ea54;
    }
  }
LAB_0316ea6c:
  fVar50 = 1000.0;
  if (1000.0 <= *pfVar16) {
    fVar50 = 1000.0;
    fStack00000000000001d0 = *pfVar16 / 1000.0;
    uVar46 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
    puVar17 = (undefined8 *)PTR_DAT_06a0c488;
  }
  else {
    uVar46 = FUN_054fad00(pfVar16,*(undefined8 *)PTR_DAT_06a0c498,0);
    puVar17 = (undefined8 *)PTR_DAT_06a0c4f0;
  }
  uVar46 = FUN_05362cb4(uVar46,*puVar17,0);
  *(undefined8 *)(unaff_x23 + 0x2d0) = uVar46;
  LeanTween__value(unaff_x23 + 0x2d0,uVar46);
  if (*(int *)(unaff_x25 + 0x18) == 2) {
    lVar11 = FUN_0400ff1c(unaff_x25,0,*unaff_x21);
    if (lVar11 == 0) goto LAB_03168190;
    fVar33 = *(float *)(lVar11 + 200);
    lVar11 = FUN_0400ff1c(unaff_x25,0,*unaff_x21);
    lVar15 = FUN_0400ff1c(unaff_x25,0,*unaff_x21);
    if (1000.0 <= fVar33) {
      if (lVar15 == 0) goto LAB_03168190;
      fVar50 = 1000.0;
      fStack00000000000001d0 = *(float *)(lVar15 + 200) / 1000.0;
      uVar46 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
      uVar46 = FUN_05362cb4(uVar46,*(undefined8 *)PTR_DAT_06a0c488,0);
    }
    else {
      if (lVar15 == 0) goto LAB_03168190;
      uVar46 = FUN_054fad00(lVar15 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
      uVar46 = FUN_05362cb4(uVar46,*(undefined8 *)PTR_DAT_06a0c4f0,0);
    }
    if (lVar11 == 0) goto LAB_03168190;
    *(undefined8 *)(lVar11 + 0xd0) = uVar46;
    LeanTween__value((undefined8 *)(lVar11 + 0xd0),uVar46);
  }
  if (*(char *)(unaff_x23 + 0x84) == '\0') {
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
    if (lVar11 == 0) goto LAB_03168190;
    *(undefined8 *)(lVar11 + 0xd0) = *(undefined8 *)PTR_DAT_069fcde0;
    LeanTween__value();
  }
  puVar5 = PTR_DAT_06a0b440;
  puVar4 = PTR_DAT_069fd088;
  fVar33 = fVar50;
  if (iStack0000000000000058 != 0) {
    if (*(long *)(unaff_x26 + 0x78) != 0) {
      fVar41 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)PTR_DAT_069fd088);
      if (*(long *)(unaff_x26 + 0x78) != 0) {
        FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)puVar4);
        lVar11 = FUN_0400ff1c(unaff_x25,0,*(undefined8 *)puVar5);
        puVar6 = PTR_DAT_06a0b7d0;
        puVar5 = PTR_DAT_069fbb48;
        if (lVar11 != 0) {
          lVar15 = *(long *)(unaff_x26 + 0x78);
          fVar33 = *(float *)(lVar11 + 200) * 0.5;
          fVar38 = 5.0;
          if (fVar33 <= 5.0) {
            fVar38 = fVar33;
          }
          if (lVar15 != 0) {
            uVar24 = (ulong)(uint)fStack0000000000000054;
            iVar29 = 1;
            fVar41 = fStack0000000000000050 * 10.0 + fVar41;
            uVar30 = (ulong)(uint)fVar41;
            fVar47 = fStack0000000000000054 * 10.0 + fVar53;
            fVar34 = 0.0;
            do {
              fVar53 = (float)uVar24;
              fVar33 = (float)uVar30;
              if (*(int *)(lVar15 + 0x18) <= iVar29) goto LAB_0316ee54;
              fVar35 = (float)FUN_0409f2f4(lVar15,iVar29 + -1,*(undefined8 *)puVar4);
              if (*(long *)(unaff_x26 + 0x78) == 0) break;
              fVar42 = fVar33;
              fVar54 = fVar53;
              fVar58 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar29,*(undefined8 *)puVar4)
              ;
              if (DAT_06db4c77 == '\0') {
                FUN_02d965b8(puVar5);
                DAT_06db4c77 = '\x01';
              }
              if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              fVar42 = fVar33 - fVar42;
              fVar53 = fVar53 - fVar54;
              fVar33 = fVar53 * fVar53;
              fVar34 = fVar34 + SQRT(fVar33 + (fVar35 - fVar58) * (fVar35 - fVar58) +
                                              fVar42 * fVar42);
              if (fVar38 < fVar34) goto LAB_0316ee54;
              if (*(long *)(unaff_x26 + 0x78) == 0) break;
              uVar45 = FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)puVar4);
              if (*(long *)(unaff_x26 + 0x78) == 0) break;
              FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar29,*(undefined8 *)puVar4);
              fVar33 = (float)FUN_031765b0(uVar45,fVar33,fVar53,fVar41,fVar50,fVar47,0);
              if (*(long *)(unaff_x26 + 0x78) == 0) break;
              fVar42 = fVar53;
              fVar54 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar29,*(undefined8 *)puVar4)
              ;
              fVar58 = fVar34 / fVar38;
              fVar35 = 1.0;
              if (fVar58 <= 1.0) {
                fVar35 = fVar58;
              }
              uVar30 = (ulong)(uint)fVar35;
              fVar39 = 0.0;
              if (0.0 <= fVar58) {
                fVar39 = fVar35;
              }
              if (*(long *)(unaff_x26 + 0x78) == 0) break;
              FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar29,*(undefined8 *)puVar4);
              if (*(long *)(unaff_x26 + 0x78) == 0) break;
              uVar24 = (ulong)(uint)(fVar53 + fVar39 * (fVar42 - fVar53));
              FUN_0409f350(fVar33 + fVar39 * (fVar54 - fVar33),*(long *)(unaff_x26 + 0x78),iVar29,
                           *(undefined8 *)puVar6);
              lVar15 = *(long *)(unaff_x26 + 0x78);
              iVar29 = iVar29 + 1;
            } while (lVar15 != 0);
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
    fVar50 = (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -1,*(undefined8 *)PTR_DAT_069fd088
                                );
    puVar5 = PTR_DAT_06a0b440;
    if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
    fVar41 = fVar33;
    FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)puVar4);
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*(undefined8 *)puVar5);
    puVar6 = PTR_DAT_06a0b7d0;
    puVar5 = PTR_DAT_069fbb48;
    if (lVar11 == 0) goto LAB_03168190;
    fVar47 = *(float *)(lVar11 + 200) * 0.5;
    fVar38 = 5.0;
    if (fVar47 <= 5.0) {
      fVar38 = fVar47;
    }
    if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
    iVar29 = *(int *)(*(long *)(unaff_x26 + 0x78) + 0x18);
    if (0 < iVar29 + -2) {
      fVar47 = 0.0;
      iVar29 = iVar29 + -1;
      uVar30 = (ulong)(uint)fVar50;
      uVar24 = (ulong)(uint)fVar53;
      do {
        fVar35 = (float)uVar30;
        fVar34 = (float)uVar24;
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        fVar42 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar29,*(undefined8 *)puVar4);
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        iVar29 = iVar29 + -1;
        fVar54 = fVar34;
        fVar58 = fVar35;
        fVar39 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar29,*(undefined8 *)puVar4);
        if (DAT_06db4c77 == '\0') {
          FUN_02d965b8(puVar5);
          DAT_06db4c77 = '\x01';
        }
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        fVar47 = fVar47 + SQRT((fVar35 - fVar58) * (fVar35 - fVar58) +
                               (fVar42 - fVar39) * (fVar42 - fVar39) +
                               (fVar34 - fVar54) * (fVar34 - fVar54));
        if (fVar38 < fVar47) break;
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar29,*(undefined8 *)puVar4);
        fVar34 = fVar53;
        fVar35 = (float)FUN_031765b0(fVar50,fVar33,fVar53,fStack0000000000000060 * 10.0 + fVar50,
                                     fVar41,fStack000000000000005c * 10.0 + fVar53,0);
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        fVar54 = fVar34;
        fVar58 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar29,*(undefined8 *)puVar4);
        fVar39 = fVar47 / fVar38;
        fVar42 = 1.0;
        if (fVar39 <= 1.0) {
          fVar42 = fVar39;
        }
        uVar24 = (ulong)(uint)fVar42;
        fVar60 = 0.0;
        if (0.0 <= fVar39) {
          fVar60 = fVar42;
        }
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar29,*(undefined8 *)puVar4);
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        uVar30 = (ulong)(uint)(fVar34 + fVar60 * (fVar54 - fVar34));
        FUN_0409f350(fVar35 + fVar60 * (fVar58 - fVar35),*(long *)(unaff_x26 + 0x78),iVar29,
                     *(undefined8 *)puVar6);
      } while (1 < iVar29);
    }
  }
  puVar4 = PTR_DAT_06a0b440;
  lVar11 = FUN_0400ff1c(unaff_x25,0,*(undefined8 *)PTR_DAT_06a0b440);
  lVar15 = FUN_0400ff1c(unaff_x25,0,*(undefined8 *)puVar4);
  if (lVar15 != 0) {
    fVar50 = *(float *)(lVar15 + 0x94);
    lVar15 = FUN_0400ff1c(unaff_x25,0,*(undefined8 *)puVar4);
    if (lVar15 != 0) {
      fVar53 = *(float *)(lVar15 + 0x9c);
      if (DAT_06db4c75 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c75 = '\x01';
      }
      puVar5 = PTR_DAT_069fbb48;
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar33 = DAT_010fd13c;
      fVar41 = SQRT(fVar50 * fVar50 + fVar53 * fVar53);
      if (fVar41 <= DAT_010fd13c) {
        if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
          FUN_02d965b8(PTR_DAT_069fb978);
          *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
        }
        uVar46 = **(undefined8 **)(*plVar25 + 0xb8);
        fVar53 = *(float *)(*(undefined8 **)(*plVar25 + 0xb8) + 1);
      }
      else {
        fVar53 = fVar53 / fVar41;
        uVar46 = CONCAT44(0.0 / fVar41,fVar50 / fVar41);
      }
      if (lVar11 != 0) {
        *(undefined8 *)(lVar11 + 0x94) = uVar46;
        uVar46 = *(undefined8 *)puVar4;
        *(float *)(lVar11 + 0x9c) = fVar53;
        lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,uVar46);
        lVar15 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*(undefined8 *)puVar4);
        if (lVar15 != 0) {
          fVar50 = *(float *)(lVar15 + 0x94);
          lVar15 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*(undefined8 *)puVar4);
          if (lVar15 != 0) {
            fVar53 = *(float *)(lVar15 + 0x9c);
            if (DAT_06db4c75 == '\0') {
              FUN_02d965b8(PTR_DAT_069fbb48);
              DAT_06db4c75 = '\x01';
            }
            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            fVar41 = SQRT(fVar50 * fVar50 + fVar53 * fVar53);
            if (fVar41 <= fVar33) {
              if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
                FUN_02d965b8(PTR_DAT_069fb978);
                *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
              }
              uVar46 = **(undefined8 **)(*plVar25 + 0xb8);
              fVar53 = *(float *)(*(undefined8 **)(*plVar25 + 0xb8) + 1);
            }
            else {
              fVar53 = fVar53 / fVar41;
              uVar46 = CONCAT44(0.0 / fVar41,fVar50 / fVar41);
            }
            if (lVar11 != 0) {
              uVar49 = *(undefined8 *)(unaff_x26 + 0x78);
              *(undefined8 *)(lVar11 + 0x94) = uVar46;
              *(float *)(lVar11 + 0x9c) = fVar53;
              return uVar49;
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


