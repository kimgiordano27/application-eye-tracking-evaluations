/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.AppPerfFrameStats>
ENTRY_POINT: 031697a0
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
System_Array__InternalArray__ICollection_Contains<OVRPlugin_AppPerfFrameStats>
          (long param_1,float param_2,float param_3)

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
  float *pfVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  ulong uVar19;
  float *pfVar20;
  long lVar21;
  long lVar22;
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
  long *unaff_x24;
  ulong uVar31;
  long unaff_x25;
  undefined4 *puVar32;
  undefined1 *unaff_x26;
  float *pfVar33;
  undefined8 *unaff_x28;
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
  float fVar44;
  ulong uVar45;
  float fVar46;
  undefined8 uVar47;
  float unaff_s8;
  float fVar48;
  undefined4 uVar49;
  float fVar50;
  float unaff_s9;
  float fVar51;
  float fVar52;
  uint uVar53;
  undefined8 uVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined8 uVar58;
  float fVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  float fVar62;
  float fVar63;
  undefined4 uVar64;
  float fVar65;
  float fVar66;
  int iVar67;
  float fStack0000000000000050;
  float fStack0000000000000054;
  int in_stack_00000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  long *in_stack_00000070;
  long *in_stack_00000078;
  float fStack0000000000000084;
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
  
  fStack000000000000005c = SQRT(param_3 + param_2);
  if (fStack000000000000005c <= *(float *)(param_1 + 0x13c)) {
    if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
      FUN_02d965b8(PTR_DAT_069fb978);
      *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
    }
    fStack0000000000000060 = **(float **)(*(long *)PTR_DAT_069fb978 + 0xb8);
    fStack000000000000005c = (*(float **)(*(long *)PTR_DAT_069fb978 + 0xb8))[2];
  }
  else {
    fStack0000000000000060 = unaff_s8 / fStack000000000000005c;
    fStack000000000000005c = unaff_s9 / fStack000000000000005c;
  }
  if (*(long *)(unaff_x23 + 0x2e0) == 0) goto LAB_03168190;
  if (*(char *)(*(long *)(unaff_x23 + 0x2e0) + 0x171) != '\0') {
    *(undefined1 *)(unaff_x23 + 0x2f7) = 1;
  }
  if ((*(long *)(unaff_x26 + 0x70) == 0) ||
     (lVar11 = FUN_040a10b0(*(long *)(unaff_x26 + 0x70),*(undefined8 *)PTR_DAT_069fbee8),
     lVar11 == 0)) goto LAB_03168190;
  if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) == 0) {
LAB_0316f2c4:
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
  fStack0000000000000130 = *(float *)(lVar11 + 0x2c);
  fStack0000000000000128 = *(float *)(lVar11 + 0x30);
  fStack000000000000012c = *(float *)(lVar11 + 0x34);
  if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
    FUN_02d965b8(PTR_DAT_069fb978);
    *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
  }
  uVar53 = *(uint *)(lVar11 + 0x18);
  pfVar15 = *(float **)(*(long *)PTR_DAT_069fb978 + 0xb8);
  fStack000000000000008c = *pfVar15;
  fStack0000000000000088 = pfVar15[1];
  fStack0000000000000084 = pfVar15[2];
  *(undefined4 *)(unaff_x23 + 0x2c0) = 0;
  if (uVar53 == 0) goto LAB_0316f2c4;
  fVar43 = *(float *)(lVar11 + 0x28);
  *(undefined8 *)(unaff_x26 + 0x50) = *(undefined8 *)(lVar11 + 0x20);
  if (uVar53 < 4) goto LAB_0316f2c4;
  uVar47 = *(undefined8 *)pfVar15;
  lVar12 = *(long *)(unaff_x23 + 0x68);
  *(undefined8 *)(unaff_x26 + 0x40) = *(undefined8 *)(lVar11 + 0x44);
  *(undefined8 *)(unaff_x26 + 0x30) = uVar47;
  if (lVar12 == 0) goto LAB_03168190;
  if (*(int *)(lVar12 + 0x18) == 0) {
    return 0;
  }
  lVar16 = *(long *)(unaff_x23 + 0x2c8);
  if (lVar16 == 0) goto LAB_03168190;
  lVar21 = *(long *)(lVar16 + 0x10);
  lVar23 = *(long *)PTR_DAT_069fc3e0;
  *(undefined4 *)(lVar16 + 0x18) = 0;
  *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 2;
  if (lVar21 == 0) goto LAB_03168190;
  if (*(int *)(lVar21 + 0x18) == 0) {
    FUN_03fb3e1c(lVar16,0,*(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
    lVar12 = *(long *)(unaff_x23 + 0x68);
    if (lVar12 == 0) goto LAB_03168190;
  }
  else {
    *(undefined4 *)(lVar16 + 0x18) = 1;
    *(undefined4 *)(lVar21 + 0x20) = 0;
  }
  lVar12 = FUN_0400ff1c(lVar12,1,*unaff_x21);
  if (lVar12 == 0) goto LAB_03168190;
  if (*(int *)(lVar12 + 0x6c) == 3) {
    if (*(long *)(unaff_x23 + 0x68) == 0) goto LAB_03168190;
    if (2 < *(int *)(*(long *)(unaff_x23 + 0x68) + 0x18)) {
      if (*(uint *)(lVar11 + 0x18) < 3) goto LAB_0316f2c4;
      fVar51 = *(float *)(lVar11 + 0x40);
      uVar47 = *(undefined8 *)(lVar11 + 0x38);
      uVar54 = *(undefined8 *)(lVar11 + 0x2c);
      fVar55 = *(float *)(lVar11 + 0x34);
      if (DAT_06db4c75 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c75 = '\x01';
      }
      puVar4 = PTR_DAT_069fbb48;
      fVar48 = (float)uVar47 - (float)uVar54;
      fVar50 = (float)((ulong)uVar47 >> 0x20) - (float)((ulong)uVar54 >> 0x20);
      fVar51 = fVar51 - fVar55;
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar51 = SQRT(fVar51 * fVar51 + fVar48 * fVar48 + fVar50 * fVar50);
      if (fVar51 <= DAT_010fd13c) {
        if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
          FUN_02d965b8(PTR_DAT_069fb978);
          *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
        }
        uVar47 = **(undefined8 **)(*(long *)PTR_DAT_069fb978 + 0xb8);
      }
      else {
        uVar47 = CONCAT44(fVar50 / fVar51,fVar48 / fVar51);
      }
      if ((*(uint *)(lVar11 + 0x18) < 3) || (*(uint *)(lVar11 + 0x18) == 3)) goto LAB_0316f2c4;
      uVar54 = *(undefined8 *)(lVar11 + 0x38);
      fVar51 = *(float *)(lVar11 + 0x40);
      uVar58 = *(undefined8 *)(lVar11 + 0x44);
      fVar55 = *(float *)(lVar11 + 0x4c);
      if (DAT_06db4c77 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c77 = '\x01';
      }
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar38 = (float)uVar54;
      fVar48 = fVar38 - (float)uVar58;
      fVar57 = (float)((ulong)uVar54 >> 0x20);
      fVar50 = fVar57 - (float)((ulong)uVar58 >> 0x20);
      fVar51 = fVar51 - fVar55;
      uVar53 = *(uint *)(lVar11 + 0x18);
      fVar51 = SQRT(fVar51 * fVar51 + fVar48 * fVar48 + fVar50 * fVar50);
      *(ulong *)(unaff_x26 + 0x40) =
           CONCAT44(fVar57 + (float)((ulong)uVar47 >> 0x20) * fVar51,fVar38 + (float)uVar47 * fVar51
                   );
      if ((uVar53 & 0xfffffffc) == 0) goto LAB_0316f2c4;
    }
  }
  lVar12 = *unaff_x24;
  if (lVar12 == 0) goto LAB_03168190;
  lVar16 = *(long *)(lVar12 + 0x10);
  lVar21 = *(long *)PTR_DAT_069ff178;
  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
  if (lVar16 == 0) goto LAB_03168190;
  uVar53 = *(uint *)(lVar12 + 0x18);
  if (uVar53 < *(uint *)(lVar16 + 0x18)) {
    *(uint *)(lVar12 + 0x18) = uVar53 + 1;
    *(undefined4 *)(lVar16 + (long)(int)uVar53 * 4 + 0x20) = 0;
  }
  else {
    FUN_04059d64(0,lVar12,*(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
  }
  lVar12 = *(long *)(unaff_x23 + 0x478);
  if (lVar12 == 0) goto LAB_03168190;
  *(undefined4 *)(lVar12 + 0x18) = 0;
  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
  lVar12 = *in_stack_00000070;
  if (lVar12 == 0) goto LAB_03168190;
  uVar47 = *(undefined8 *)PTR_DAT_069ff188;
  *(undefined4 *)(lVar12 + 0x18) = 0;
  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
  uVar47 = thunk_FUN_02dd3144(uVar47);
  FUN_040594d0(uVar47,*(undefined8 *)PTR_DAT_069ff180);
  uVar54 = *unaff_x28;
  *(undefined8 *)(unaff_x26 + 0x28) = uVar47;
  uVar47 = thunk_FUN_02dd3144(uVar54);
  FUN_0409ed5c(uVar47,*(undefined8 *)PTR_DAT_069fbef0);
  cVar14 = *(char *)((long)unaff_x29 + 0xc71);
  *(undefined8 *)(unaff_x26 + 0x20) = uVar47;
  fVar51 = 0.0;
  if (cVar14 == '\0') {
    FUN_02d965b8(PTR_DAT_069fb978);
    *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
  }
  pfVar15 = *(float **)(*(long *)PTR_DAT_069fb978 + 0xb8);
  fStack00000000000000f8 = *pfVar15;
  fStack00000000000000f4 = pfVar15[1];
  fVar55 = pfVar15[2];
  fVar48 = *(float *)(unaff_x23 + 0x7c);
  pfVar15 = (float *)(unaff_x23 + 0x2c0);
  plVar26 = (long *)PTR_DAT_069fb978;
  if (1 < *(int *)(lVar11 + 0x18) + -2) {
    fVar41 = 0.0;
    iStack00000000000000d4 = 0;
    iStack0000000000000108 = 0;
    bVar2 = false;
    fVar34 = fStack000000000000010c * 0.5;
    uStack0000000000000110 = (ulong)(uint)fStack0000000000000130;
    uVar31 = 1;
    fStack00000000000000f0 = fVar55;
    fStack00000000000000fc = fVar55;
    fStack0000000000000100 = fStack00000000000000f4;
    fStack0000000000000104 = fStack00000000000000f8;
    fStack0000000000000164 = fStack000000000000012c;
    fVar57 = fStack000000000000008c;
    fVar38 = fStack0000000000000088;
    fVar50 = fStack0000000000000084;
LAB_03169d3c:
    uVar25 = uVar31 - 1;
    fStack00000000000001d4 = 0.0;
    lVar12 = FUN_0400ff1c(unaff_x25,uVar25 & 0xffffffff,*unaff_x21);
    if ((*(long *)(unaff_x26 + 0x78) == 0) || (lVar12 == 0)) goto LAB_03168190;
    uVar47 = *unaff_x21;
    *(undefined4 *)(lVar12 + 0xbc) = *(undefined4 *)(*(long *)(unaff_x26 + 0x78) + 0x18);
    lVar12 = FUN_0400ff1c(unaff_x25,uVar25 & 0xffffffff,uVar47);
    if (lVar12 == 0) goto LAB_03168190;
    *(float *)(lVar12 + 0xc0) = *pfVar15;
    iVar30 = (int)uVar31;
    if (1 < uVar31) {
      if (uVar31 == 2) {
        lVar12 = FUN_0400ff1c(unaff_x25,0,*unaff_x21);
        if (lVar12 == 0) goto LAB_03168190;
        iVar27 = 0;
        fVar55 = *pfVar15;
      }
      else {
        iVar27 = iVar30 + -2;
        lVar12 = FUN_0400ff1c(unaff_x25,iVar27,*unaff_x21);
        fVar55 = *pfVar15;
        lVar16 = FUN_0400ff1c(unaff_x25,iVar27,*unaff_x21);
        if ((lVar16 == 0) || (lVar12 == 0)) goto LAB_03168190;
        fVar55 = fVar55 - *(float *)(lVar16 + 0xc0);
      }
      puVar4 = PTR_DAT_06a0b440;
      *(float *)(lVar12 + 200) = fVar55;
      lVar12 = FUN_0400ff1c(unaff_x25,iVar27,*(undefined8 *)puVar4);
      if (lVar12 == 0) goto LAB_03168190;
      fVar55 = *(float *)(lVar12 + 200);
      lVar12 = FUN_0400ff1c(unaff_x25,iVar27,*(undefined8 *)puVar4);
      lVar16 = FUN_0400ff1c(unaff_x25,iVar27,*(undefined8 *)puVar4);
      if (1000.0 <= fVar55) {
        if (lVar16 == 0) goto LAB_03168190;
        fStack00000000000001d0 = *(float *)(lVar16 + 200) / 1000.0;
        uVar47 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
        puVar17 = (undefined8 *)PTR_DAT_06a0c488;
      }
      else {
        if (lVar16 == 0) goto LAB_03168190;
        uVar47 = FUN_054fad00(lVar16 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
        puVar17 = (undefined8 *)PTR_DAT_06a0c4f0;
      }
      uVar47 = FUN_05362cb4(uVar47,*puVar17,0);
      if (lVar12 == 0) goto LAB_03168190;
      *(undefined8 *)(lVar12 + 0xd0) = uVar47;
      LeanTween__value((undefined8 *)(lVar12 + 0xd0),uVar47);
      puVar4 = PTR_DAT_06a0b440;
      lVar12 = FUN_0400ff1c(unaff_x25,iVar27,*(undefined8 *)PTR_DAT_06a0b440);
      if (lVar12 == 0) goto LAB_03168190;
      fVar55 = *(float *)(lVar12 + 0x4c);
      lVar12 = FUN_0400ff1c(unaff_x25,uVar25 & 0xffffffff,*(undefined8 *)puVar4);
      if (lVar12 == 0) goto LAB_03168190;
      fVar52 = *(float *)(lVar12 + 0x4c);
      if (DAT_06db4ece == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4ece = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar35 = fVar55 - fVar52;
      fVar44 = 0.0;
      fVar36 = SQRT((fVar51 * fVar51 + fVar35 * fVar35) * DAT_010fd194);
      fVar35 = DAT_010fcd14;
      if (DAT_010fcd14 <= fVar36) {
        fVar35 = -1.0;
        fVar36 = (fVar51 * 0.0 + ABS(fVar55 - fVar52) * 50.0 + 0.0) / fVar36;
        fVar51 = 1.0;
        if (fVar36 <= 1.0) {
          fVar51 = fVar36;
        }
        fVar55 = -1.0;
        if (-1.0 <= fVar36) {
          fVar55 = fVar51;
        }
        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
          fVar35 = -1.0;
          thunk_FUN_02df485c();
        }
        dVar42 = acos((double)fVar55);
        fVar44 = (float)dVar42 * DAT_010fcf40;
      }
      fVar44 = 90.0 - fVar44;
      lVar12 = FUN_0400ff1c(unaff_x25,iVar27,*(undefined8 *)puVar4);
      if (fVar44 <= 10.0) {
        uVar47 = FUN_054fad00(&stack0x00000234,*(undefined8 *)PTR_DAT_06a0c498,0);
        puVar17 = (undefined8 *)PTR_DAT_069fd088;
      }
      else {
        dVar42 = modf((double)fVar44,(double *)&stack0x00000298);
        puVar17 = (undefined8 *)PTR_DAT_069fd088;
        if (0.0 <= fVar44) {
          if (dVar42 == 0.5) {
            dVar42 = *(double *)(unaff_x26 + 0x80);
            fVar51 = 1.0;
            goto LAB_0316a098;
          }
          fStack00000000000001d0 = (float)(int)(fVar44 + 0.5);
        }
        else if (dVar42 == -0.5) {
          dVar42 = *(double *)(unaff_x26 + 0x80);
          fVar51 = -1.0;
LAB_0316a098:
          fStack00000000000001d0 = (float)dVar42;
          if (((long)dVar42 & 1U) != 0) {
            fStack00000000000001d0 = (float)dVar42 + fVar51;
          }
        }
        else {
          fStack00000000000001d0 = (float)(int)(fVar44 + -0.5);
        }
        uVar47 = FUN_054fabf8(&stack0x000001d0,0);
      }
      if (lVar12 == 0) goto LAB_03168190;
      *(undefined8 *)(lVar12 + 0xd8) = uVar47;
      LeanTween__value((undefined8 *)(lVar12 + 0xd8),uVar47);
      unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
      lVar12 = FUN_0400ff1c(unaff_x25,iVar27,*(undefined8 *)PTR_DAT_06a0b440);
      if (lVar12 == 0) goto LAB_03168190;
      fVar51 = *(float *)(lVar12 + 0x4c);
      lVar12 = FUN_0400ff1c(unaff_x25,uVar25 & 0xffffffff,*unaff_x21);
      if (lVar12 == 0) goto LAB_03168190;
      fVar55 = *(float *)(lVar12 + 0x4c);
      lVar12 = FUN_0400ff1c(unaff_x25,iVar27,*unaff_x21);
      if (lVar12 == 0) goto LAB_03168190;
      fVar52 = *(float *)(lVar12 + 0x48);
      lVar12 = FUN_0400ff1c(unaff_x25,iVar27,*unaff_x21);
      if (lVar12 == 0) goto LAB_03168190;
      fVar36 = *(float *)(lVar12 + 0x50);
      lVar12 = FUN_0400ff1c(unaff_x25,uVar25 & 0xffffffff,*unaff_x21);
      if (lVar12 == 0) goto LAB_03168190;
      fVar44 = *(float *)(lVar12 + 0x48);
      lVar12 = FUN_0400ff1c(unaff_x25,uVar25 & 0xffffffff,*unaff_x21);
      if (lVar12 == 0) goto LAB_03168190;
      fVar59 = *(float *)(lVar12 + 0x50);
      if (DAT_06db4c77 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c77 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar36 = fVar36 - fVar59;
      fVar52 = fVar52 - fVar44;
      lVar12 = FUN_0400ff1c(unaff_x25,iVar27,*unaff_x21);
      fVar44 = 100.0;
      fStack00000000000001d0 =
           (ABS(fVar51 - fVar55) / SQRT(fVar52 * fVar52 + fVar36 * fVar36)) * 100.0;
      uVar47 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c498,0);
      if (lVar12 == 0) goto LAB_03168190;
      *(undefined8 *)(lVar12 + 0xe0) = uVar47;
      LeanTween__value((undefined8 *)(lVar12 + 0xe0),uVar47);
      lVar12 = *(long *)(unaff_x26 + 0x78);
      if (lVar12 == 0) goto LAB_03168190;
      unaff_x23 = in_stack_00000148;
      if (2 < *(int *)(lVar12 + 0x18)) {
        fStack0000000000000104 = (float)FUN_0409f2f4(lVar12,*(int *)(lVar12 + 0x18) + -1,*puVar17);
        lVar12 = *(long *)(unaff_x26 + 0x78);
        if (lVar12 == 0) goto LAB_03168190;
        fVar51 = fVar44;
        fVar55 = fVar35;
        fVar52 = (float)FUN_0409f2f4(lVar12,*(int *)(lVar12 + 0x18) + -2,*puVar17);
        if (DAT_06db4c75 == '\0') {
          FUN_02d965b8(PTR_DAT_069fbb48);
          DAT_06db4c75 = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        fStack0000000000000104 = fStack0000000000000104 - fVar52;
        fVar44 = fVar44 - fVar51;
        fVar35 = fVar35 - fVar55;
        fStack00000000000000fc =
             SQRT(fVar35 * fVar35 +
                  fStack0000000000000104 * fStack0000000000000104 + fVar44 * fVar44);
        if (fStack00000000000000fc <= DAT_010fd13c) {
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
          fStack0000000000000104 = fStack0000000000000104 / fStack00000000000000fc;
          fStack0000000000000100 = fVar44 / fStack00000000000000fc;
          fStack00000000000000fc = fVar35 / fStack00000000000000fc;
        }
      }
    }
    lVar12 = *(long *)(unaff_x26 + 0x28);
    if (lVar12 == 0) goto LAB_03168190;
    lVar16 = *(long *)(unaff_x26 + 0x20);
    *(undefined4 *)(lVar12 + 0x18) = 0;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    if (lVar16 == 0) goto LAB_03168190;
    fVar51 = 0.0;
    *(undefined4 *)(lVar16 + 0x18) = 0;
    *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
    if ((*(uint *)(lVar11 + 0x18) <= uVar31) ||
       (uVar1 = uVar31 + 1, *(uint *)(lVar11 + 0x18) <= uVar1)) goto LAB_0316f2c4;
    lVar12 = lVar11 + uVar31 * 0xc;
    lVar16 = lVar11 + uVar1 * 0xc;
    fVar52 = *pfVar15;
    pfVar24 = (float *)(lVar12 + 0x20);
    fVar36 = *pfVar24;
    fVar55 = *(float *)(lVar12 + 0x24);
    fVar35 = *(float *)(lVar12 + 0x28);
    pfVar33 = (float *)(lVar16 + 0x20);
    fVar44 = *pfVar33;
    fVar63 = *(float *)(lVar16 + 0x24);
    fVar59 = *(float *)(lVar16 + 0x28);
    if (DAT_06db4c77 == '\0') {
      FUN_02d965b8(PTR_DAT_069fbb48);
      DAT_06db4c77 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if ((*(long *)(unaff_x23 + 0x68) == 0) ||
       (lVar21 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar25 & 0xffffffff,*unaff_x21),
       lVar21 == 0)) goto LAB_03168190;
    fVar55 = fVar55 - fVar63;
    fVar35 = fVar35 - fVar59;
    uVar45 = (ulong)(uint)fVar35;
    uVar19 = (ulong)(uint)(fVar35 * fVar35);
    fVar52 = fVar52 + SQRT(fVar35 * fVar35 + (fVar36 - fVar44) * (fVar36 - fVar44) + fVar55 * fVar55
                          );
    if (*(int *)(lVar21 + 0x6c) == 0) {
      if ((*(uint *)(lVar11 + 0x18) <= uVar31) || (*(uint *)(lVar11 + 0x18) <= uVar1))
      goto LAB_0316f2c4;
      fVar36 = *pfVar24;
      fVar55 = *(float *)(lVar12 + 0x24);
      fVar44 = *pfVar33;
      fVar63 = *(float *)(lVar16 + 0x24);
      fVar35 = *(float *)(lVar12 + 0x28);
      fVar59 = *(float *)(lVar16 + 0x28);
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
        lVar21 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),iVar30 + -2,*unaff_x21);
        if (lVar21 == 0) goto LAB_03168190;
        if (*(int *)(lVar21 + 0x6c) == 1) {
          bVar9 = true;
        }
        else {
          if ((*(long *)(unaff_x23 + 0x68) == 0) ||
             (lVar21 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),iVar30 + -2,*unaff_x21), lVar21 == 0
             )) goto LAB_03168190;
          bVar9 = *(int *)(lVar21 + 0x6c) == 2;
        }
      }
      fVar39 = 0.0;
      if (uVar31 == 1) {
        fVar39 = fStack0000000000000064;
      }
      fVar65 = in_stack_00000068;
      if (uVar31 != *(int *)(lVar11 + 0x18) - 3) {
        fVar65 = 1.0;
      }
      if (fVar65 <= fVar39) {
        iStack0000000000000108 = 0;
      }
      else {
        fVar55 = fVar55 - fVar63;
        fVar35 = fVar35 - fVar59;
        fVar55 = DAT_010fcf10 /
                 SQRT(fVar35 * fVar35 + (fVar36 - fVar44) * (fVar36 - fVar44) + fVar55 * fVar55);
        do {
          uVar19 = *(ulong *)(lVar11 + 0x18);
          if (fVar55 + fVar39 <= 1.0) {
            bVar28 = 0;
          }
          else if (uVar31 == (int)uVar19 - 3) {
            bVar28 = *(byte *)(unaff_x23 + 0x84) ^ 1;
          }
          else {
            bVar28 = 0;
          }
          bVar10 = bVar28 != 0;
          fVar35 = 1.0;
          if (!bVar10) {
            fVar35 = fVar39;
          }
          if (((uVar19 & 0xffffffff) <= uVar31) || ((uVar19 & 0xffffffff) <= uVar1))
          goto LAB_0316f2c4;
          uVar60 = *(undefined4 *)(lVar12 + 0x24);
          uVar49 = *(undefined4 *)(lVar12 + 0x28);
          fVar36 = *pfVar24;
          FUN_04059a68(in_stack_000000c8,uVar31 & 0xffffffff,*(undefined8 *)PTR_DAT_06a0a108);
          fVar59 = in_stack_0000026c;
          fVar63 = fVar43;
          fVar39 = (float)FUN_0316f340(in_stack_00000268,in_stack_0000026c,fVar43,fVar36,uVar60,
                                       uVar49);
          _fStack00000000000001c0 = CONCAT44(fVar59,fVar39);
          fVar36 = fStack0000000000000164;
          fVar44 = (float)uStack0000000000000110;
          if (iStack0000000000000108 == 3) {
            iStack0000000000000108 = 0;
            fVar36 = fVar63;
            fVar44 = fVar39;
            fStack0000000000000128 = fVar59;
            fStack000000000000012c = fVar63;
            fStack0000000000000130 = fVar39;
          }
          unaff_x29 = &PTR_FUN_06db4000;
          in_stack_000001c8 = fVar63;
          if (DAT_06db4c77 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c77 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fVar40 = in_stack_000001c8;
          if (*(uint *)(lVar11 + 0x18) <= uVar1) goto LAB_0316f2c4;
          fVar62 = *pfVar33;
          fVar56 = *(float *)(lVar16 + 0x24);
          fVar46 = fStack00000000000001c0;
          fVar37 = fStack00000000000001c4;
          fVar66 = *(float *)(lVar16 + 0x28);
          if (DAT_06db4c77 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c77 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          lVar21 = *(long *)(unaff_x26 + 0x20);
          if (lVar21 == 0) goto LAB_03168190;
          fVar37 = fVar37 - fVar56;
          iVar27 = *(int *)(lVar21 + 0x18);
          fVar40 = fVar40 - fVar66;
          fVar56 = fVar40 * fVar40;
          fVar46 = SQRT(fVar56 + (fVar46 - fVar62) * (fVar46 - fVar62) + fVar37 * fVar37);
          if (iVar27 < 1) {
            lVar21 = *(long *)(unaff_x26 + 0x78);
            if (lVar21 == 0) goto LAB_03168190;
            iVar27 = *(int *)(lVar21 + 0x18);
            if (0 < iVar27) goto LAB_0316b4d8;
          }
          else {
LAB_0316b4d8:
            fVar37 = (float)FUN_0409f2f4(lVar21,iVar27 + -1,*(undefined8 *)PTR_DAT_069fd088);
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
            fStack00000000000000f8 = fStack00000000000000f8 - fVar37;
            fStack00000000000000f4 = fStack00000000000000f4 - fVar56;
            fStack00000000000000f0 = fStack00000000000000f0 - fVar40;
            fVar40 = SQRT(fStack00000000000000f0 * fStack00000000000000f0 +
                          fStack00000000000000f8 * fStack00000000000000f8 +
                          fStack00000000000000f4 * fStack00000000000000f4);
            if (fVar40 <= DAT_010fd13c) {
              if (DAT_06db4c71 == '\0') {
                FUN_02d965b8(PTR_DAT_069fb978);
                DAT_06db4c71 = '\x01';
              }
              pfVar20 = *(float **)(*(long *)PTR_DAT_069fb978 + 0xb8);
              fStack00000000000000f8 = *pfVar20;
              fStack00000000000000f4 = pfVar20[1];
              fStack00000000000000f0 = pfVar20[2];
              plVar26 = (long *)PTR_DAT_069fb978;
            }
            else {
              fStack00000000000000f8 = fStack00000000000000f8 / fVar40;
              fStack00000000000000f4 = fStack00000000000000f4 / fVar40;
              fStack00000000000000f0 = fStack00000000000000f0 / fVar40;
              if (DAT_06db4c71 == '\0') {
                FUN_02d965b8(PTR_DAT_069fb978);
                DAT_06db4c71 = '\x01';
              }
            }
            pfVar20 = *(float **)(*plVar26 + 0xb8);
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
              fVar41 = 0.0;
              fVar40 = SQRT((fStack00000000000000fc * fStack00000000000000fc +
                            fStack0000000000000100 * fStack0000000000000100 +
                            fStack0000000000000104 * fStack0000000000000104) *
                            (fStack00000000000000f0 * fStack00000000000000f0 +
                            fStack00000000000000f8 * fStack00000000000000f8 +
                            fStack00000000000000f4 * fStack00000000000000f4));
              if (DAT_010fcd14 <= fVar40) {
                fVar40 = (fStack00000000000000fc * fStack00000000000000f0 +
                         fStack0000000000000104 * fStack00000000000000f8 +
                         fStack0000000000000100 * fStack00000000000000f4) / fVar40;
                fVar41 = 1.0;
                if (fVar40 <= 1.0) {
                  fVar41 = fVar40;
                }
                fVar37 = -1.0;
                if (-1.0 <= fVar40) {
                  fVar37 = fVar41;
                }
                if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                dVar42 = acos((double)fVar37);
                fVar41 = (float)dVar42 * DAT_010fcf40;
              }
              bVar10 = false;
              bVar7 = true;
              bVar8 = false;
              if (*(float *)(in_stack_00000148 + 0x80) < fVar41) {
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
                       1.0 <= SQRT((fStack000000000000012c - fVar63) *
                                   (fStack000000000000012c - fVar63) +
                                   (fStack0000000000000128 - fVar59) *
                                   (fStack0000000000000128 - fVar59) +
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
          if (fVar65 < fVar55 + fVar35 + DAT_010fd060) {
            bVar8 = bVar10;
            if (fVar48 * 0.5 <= fVar46) {
              bVar8 = true;
            }
            if (!bVar8 && !bVar2) {
              if (*(uint *)(lVar11 + 0x18) <= uVar1) goto LAB_0316f2c4;
              fVar35 = 1.0;
              _fStack00000000000001c0 = *(ulong *)pfVar33;
              in_stack_000001c8 = *(float *)(lVar16 + 0x28);
              bVar7 = true;
            }
          }
          if (fVar55 + fVar35 <= fVar65) {
            fVar59 = fStack00000000000001c0;
            fVar63 = fStack00000000000001c4;
          }
          else {
            if (*(uint *)(lVar11 + 0x18) <= uVar1) goto LAB_0316f2c4;
            _fStack00000000000001c0 = *(ulong *)pfVar33;
            fVar35 = 1.0;
            in_stack_000001c8 = *(float *)(lVar16 + 0x28);
            bVar7 = true;
            fVar59 = *pfVar33;
            fVar63 = *(float *)(lVar16 + 0x24);
          }
          fVar39 = in_stack_000001c8;
          if (DAT_06db4c77 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c77 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fVar40 = in_stack_000001c8;
          bVar8 = bVar7;
          if (fStack000000000000010c <
              SQRT((fStack000000000000012c - fVar39) * (fStack000000000000012c - fVar39) +
                   (fStack0000000000000130 - fVar59) * (fStack0000000000000130 - fVar59) +
                   (fStack0000000000000128 - fVar63) * (fStack0000000000000128 - fVar63))) {
            bVar8 = true;
          }
          bVar3 = bVar8;
          if (uVar31 != 1) {
            bVar3 = true;
          }
          if (!bVar3) {
            bVar8 = fVar35 == 0.0;
          }
          if (bVar8) {
            fVar50 = fStack00000000000001c0;
            fVar59 = fStack00000000000001c4;
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
            fVar63 = in_stack_000001c8;
            uVar19 = _fStack00000000000001c0;
            uStack0000000000000110 = _fStack00000000000001c0 & 0xffffffff;
            fVar59 = SQRT((fStack000000000000012c - fVar40) * (fStack000000000000012c - fVar40) +
                          (fStack0000000000000130 - fVar50) * (fStack0000000000000130 - fVar50) +
                          (fStack0000000000000128 - fVar59) * (fStack0000000000000128 - fVar59));
            fStack0000000000000164 = in_stack_000001c8;
            fStack00000000000001d4 = fVar59 + fStack00000000000001d4;
            *pfVar15 = fVar59 + *pfVar15;
            if (cVar14 == '\0') {
              FUN_02d965b8(PTR_DAT_069fbb48);
              DAT_06db4c77 = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            fVar50 = in_stack_000001c8;
            lVar21 = *(long *)(in_stack_00000148 + 0x68);
            *(ulong *)(unaff_x26 + 0x60) = _fStack00000000000001c0;
            fVar44 = (float)uVar19 - fVar44;
            fStack0000000000000130 = fStack00000000000001c0;
            fVar51 = fVar51 + SQRT(fVar44 * fVar44 + (fVar63 - fVar36) * (fVar63 - fVar36));
            fStack0000000000000128 = fStack00000000000001c4;
            fStack000000000000012c = in_stack_000001c8;
            if ((lVar21 == 0) ||
               (lVar21 = FUN_0400ff1c(lVar21,uVar25 & 0xffffffff,*unaff_x21), lVar21 == 0))
            goto LAB_03168190;
            if (*(float *)(lVar21 + 0x100) == 0.0) {
              if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                 (lVar21 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),uVar25 & 0xffffffff,
                                        *unaff_x21), lVar21 == 0)) goto LAB_03168190;
              if (*(float *)(lVar21 + 0x104) != 0.0) goto LAB_0316bb78;
              if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                 (lVar21 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),uVar25 & 0xffffffff,
                                        *unaff_x21), lVar21 == 0)) goto LAB_03168190;
              if (*(float *)(lVar21 + 0x110) != 0.0) goto LAB_0316bb78;
              if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                 (lVar21 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),uVar25 & 0xffffffff,
                                        *unaff_x21), lVar21 == 0)) goto LAB_03168190;
              if (*(float *)(lVar21 + 0x114) != 0.0) goto LAB_0316bb78;
              lVar21 = *in_stack_000000e0;
              if (lVar21 == 0) goto LAB_03168190;
              lVar23 = *(long *)(lVar21 + 0x10);
              lVar18 = *(long *)PTR_DAT_069ff178;
              *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
              if (lVar23 == 0) goto LAB_03168190;
              uVar53 = *(uint *)(lVar21 + 0x18);
              if (uVar53 < *(uint *)(lVar23 + 0x18)) {
                *(uint *)(lVar21 + 0x18) = uVar53 + 1;
                *(undefined4 *)(lVar23 + (long)(int)uVar53 * 4 + 0x20) = 0;
              }
              else {
                FUN_04059d64(0,lVar21,*(undefined8 *)
                                       (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
              }
            }
            else {
LAB_0316bb78:
              if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
              fVar36 = *pfVar15;
              uVar47 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),uVar25 & 0xffffffff,
                                    *unaff_x21);
              FUN_0316f6a0(fVar36,fVar52,uVar47,uVar47,&stack0x0000022c,&stack0x00000228,
                           &stack0x00000224,&stack0x00000218,&stack0x00000278,&stack0x00000214);
            }
            lVar21 = *in_stack_000000b8;
            if (fVar59 <= 5.0) {
              if (lVar21 == 0) goto LAB_03168190;
              lVar23 = *(long *)(lVar21 + 0x10);
              lVar18 = *(long *)PTR_DAT_069ff178;
              *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
              if (lVar23 == 0) goto LAB_03168190;
              uVar53 = *(uint *)(lVar21 + 0x18);
              fVar36 = (fVar41 / fVar59) * 5.0;
              if (*(uint *)(lVar23 + 0x18) <= uVar53) {
                lVar23 = *(long *)(lVar18 + 0x20);
                goto LAB_0316bcb0;
              }
              *(uint *)(lVar21 + 0x18) = uVar53 + 1;
              *(float *)(lVar23 + (long)(int)uVar53 * 4 + 0x20) = fVar36;
            }
            else {
              if (lVar21 == 0) goto LAB_03168190;
              lVar23 = *(long *)(lVar21 + 0x10);
              lVar18 = *(long *)PTR_DAT_069ff178;
              *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
              if (lVar23 == 0) goto LAB_03168190;
              uVar53 = *(uint *)(lVar21 + 0x18);
              if (uVar53 < *(uint *)(lVar23 + 0x18)) {
                *(uint *)(lVar21 + 0x18) = uVar53 + 1;
                *(float *)(lVar23 + (long)(int)uVar53 * 4 + 0x20) = fVar41;
              }
              else {
                lVar23 = *(long *)(lVar18 + 0x20);
                fVar36 = fVar41;
LAB_0316bcb0:
                FUN_04059d64(fVar36,lVar21,*(undefined8 *)(*(long *)(lVar23 + 0xc0) + 0x70));
              }
            }
            if (bVar9) {
              lVar21 = *in_stack_000000b8;
              if (lVar21 == 0) goto LAB_03168190;
              iVar27 = *(int *)(lVar21 + 0x18);
              if (1 < iVar27) {
                FUN_04059a68(lVar21,iVar27 + -1,*(undefined8 *)PTR_DAT_06a0a108);
                FUN_04059abc(lVar21,iVar27 + -2,*(undefined8 *)PTR_DAT_06a0b5c0);
              }
            }
            puVar4 = PTR_DAT_069fbee0;
            lVar21 = *(long *)(unaff_x26 + 0x20);
            if (lVar21 == 0) goto LAB_03168190;
            lVar23 = *(long *)(lVar21 + 0x10);
            *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
            if (lVar23 == 0) goto LAB_03168190;
            uVar53 = *(uint *)(lVar21 + 0x18);
            if (uVar53 < *(uint *)(lVar23 + 0x18)) {
              lVar23 = lVar23 + (long)(int)uVar53 * 0xc;
              *(uint *)(lVar21 + 0x18) = uVar53 + 1;
              *(float *)(lVar23 + 0x20) = fVar57;
              *(float *)(lVar23 + 0x24) = fVar38;
              *(float *)(lVar23 + 0x28) = fVar50;
            }
            else {
              FUN_0409f624(lVar21,*(undefined8 *)
                                   (*(long *)(*(long *)(*(long *)puVar4 + 0x20) + 0xc0) + 0x70));
            }
            unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
            lVar21 = *(long *)(unaff_x26 + 0x28);
            if (lVar21 == 0) goto LAB_03168190;
            lVar23 = *(long *)(lVar21 + 0x10);
            lVar18 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
            if (lVar23 == 0) goto LAB_03168190;
            uVar53 = *(uint *)(lVar21 + 0x18);
            if (uVar53 < *(uint *)(lVar23 + 0x18)) {
              *(uint *)(lVar21 + 0x18) = uVar53 + 1;
              *(float *)(lVar23 + (long)(int)uVar53 * 4 + 0x20) = fVar35;
            }
            else {
              FUN_04059d64(fVar35,lVar21,
                           *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
            }
            if (bVar7) {
              lVar21 = *(long *)(in_stack_00000148 + 0x2c8);
              if (lVar21 == 0) goto LAB_03168190;
              lVar23 = *(long *)(lVar21 + 0x10);
              lVar18 = *(long *)PTR_DAT_069fc3e0;
              *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
              if (lVar23 == 0) goto LAB_03168190;
              uVar53 = *(uint *)(lVar21 + 0x18);
              if (uVar53 < *(uint *)(lVar23 + 0x18)) {
                *(uint *)(lVar21 + 0x18) = uVar53 + 1;
                *(int *)(lVar23 + (long)(int)uVar53 * 4 + 0x20) = iStack00000000000000d4;
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
            uStack0000000000000110 = (ulong)(uint)fVar44;
            fStack0000000000000164 = fVar36;
          }
          fVar39 = fVar55 + fVar35;
          unaff_x23 = in_stack_00000148;
        } while (fVar39 < fVar65);
        iStack0000000000000108 = 0;
        plVar26 = (long *)PTR_DAT_069fb978;
      }
    }
    else {
      if ((*(long *)(unaff_x23 + 0x68) == 0) ||
         (lVar21 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar25 & 0xffffffff,*unaff_x21),
         lVar21 == 0)) goto LAB_03168190;
      if (*(int *)(lVar21 + 0x6c) != 1) {
        if ((*(long *)(unaff_x23 + 0x68) == 0) ||
           (lVar21 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar25 & 0xffffffff,*unaff_x21),
           lVar21 == 0)) goto LAB_03168190;
        if (*(int *)(lVar21 + 0x6c) != 2) {
          if ((*(long *)(unaff_x23 + 0x68) == 0) ||
             (lVar21 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar25 & 0xffffffff,*unaff_x21),
             lVar21 == 0)) goto LAB_03168190;
          if (*(int *)(lVar21 + 0x6c) == 3) {
            uStack00000000000001ac = 0;
            if (*(long *)(unaff_x23 + 0x68) == 0) goto LAB_03168190;
            if (((long)(*(int *)(*(long *)(unaff_x23 + 0x68) + 0x18) + -2) < (long)uVar31) &&
               (*(char *)(unaff_x23 + 0x84) == '\0')) {
              uVar47 = *(undefined8 *)(unaff_x23 + 0x2e0);
              if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              uVar13 = FUN_0634eb94(uVar47,0,0);
              if ((uVar13 & 1) != 0) goto LAB_0316adcc;
              FUN_030fd644(&stack0x00000290,unaff_x23,uVar31 & 0xffffffff,&stack0x00000238,
                           &stack0x00000240,(long)&stack0x000001d0 + 4,0,&stack0x00000230);
            }
            else {
LAB_0316adcc:
              FUN_030faa2c(&stack0x00000290,unaff_x23,uVar31 & 0xffffffff,&stack0x00000238,
                           &stack0x00000240,(long)&stack0x000001d0 + 4,0,&stack0x00000230);
            }
            if ((*(long *)(unaff_x23 + 0x68) == 0) ||
               (lVar21 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar25 & 0xffffffff,*unaff_x21),
               lVar21 == 0)) goto LAB_03168190;
            lVar23 = *(long *)(unaff_x26 + 0x28);
            *(undefined4 *)(lVar21 + 0x34) = uStack00000000000001ac;
            if (lVar23 == 0) goto LAB_03168190;
            fVar55 = 0.0;
            iVar27 = 0;
            puVar32 = (undefined4 *)(lVar11 + 0x20 + uVar25 * 0xc);
            while( true ) {
              unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
              puVar4 = PTR_DAT_069fbee0;
              plVar26 = (long *)PTR_DAT_069fb978;
              fVar50 = (float)uVar19;
              fStack0000000000000164 = (float)uVar45;
              iVar67 = *(int *)(lVar23 + 0x18);
              if (iVar67 <= iVar27) break;
              if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
              uStack00000000000001a0 =
                   FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),iVar27,*(undefined8 *)PTR_DAT_069fd088);
              fStack00000000000001a4 = fVar50;
              fStack00000000000001a8 = fStack0000000000000164;
              if (*(char *)(in_stack_00000148 + 0x5d6) == '\0') {
                uVar19 = (ulong)*(uint *)(lVar11 + 0x18);
                if ((((uVar19 <= uVar25) || (uVar19 <= uVar31)) || (uVar19 <= uVar1)) ||
                   (uVar19 <= uVar31 + 2)) goto LAB_0316f2c4;
                if (*(long *)(unaff_x26 + 0x28) == 0) goto LAB_03168190;
                uVar49 = *puVar32;
                fVar50 = (float)puVar32[1];
                uVar60 = puVar32[2];
                fVar38 = *pfVar24;
                uVar64 = *(undefined4 *)(lVar12 + 0x24);
                uVar61 = *(undefined4 *)(lVar12 + 0x28);
                FUN_04059a68(*(long *)(unaff_x26 + 0x28),iVar27,*(undefined8 *)PTR_DAT_06a0a108);
                FUN_0316f340(uVar49,fVar50,uVar60,fVar38,uVar64,uVar61);
                fStack00000000000001a4 = fVar50;
                if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                fStack0000000000000164 = fStack00000000000001a8;
                FUN_0409f350(uStack00000000000001a0,*(long *)(unaff_x26 + 0x20),iVar27,
                             *(undefined8 *)PTR_DAT_06a0b7d0);
                if (iVar27 != 0) goto LAB_0316af8c;
LAB_0316b04c:
                lVar21 = *in_stack_000000e0;
                if (lVar21 == 0) goto LAB_03168190;
                lVar23 = *(long *)(lVar21 + 0x10);
                lVar18 = *(long *)PTR_DAT_069ff178;
                *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
                if (lVar23 == 0) goto LAB_03168190;
                uVar53 = *(uint *)(lVar21 + 0x18);
                if (uVar53 < *(uint *)(lVar23 + 0x18)) {
                  *(uint *)(lVar21 + 0x18) = uVar53 + 1;
                  *(undefined4 *)(lVar23 + (long)(int)uVar53 * 4 + 0x20) = 0;
                }
                else {
                  FUN_04059d64(0,lVar21,*(undefined8 *)
                                         (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                }
              }
              else {
                if (*(long *)(in_stack_00000148 + 0x20) == 0) goto LAB_03168190;
                FUN_03199614(*(long *)(in_stack_00000148 + 0x20),&stack0x000001a0,0);
                if (iVar27 == 0) goto LAB_0316b04c;
LAB_0316af8c:
                if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                   (lVar21 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),uVar25 & 0xffffffff,
                                          *(undefined8 *)PTR_DAT_06a0b440), lVar21 == 0))
                goto LAB_03168190;
                if (*(float *)(lVar21 + 0x100) == 0.0) {
                  if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                     (lVar21 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),uVar25 & 0xffffffff,
                                            *(undefined8 *)PTR_DAT_06a0b440), lVar21 == 0))
                  goto LAB_03168190;
                  if (*(float *)(lVar21 + 0x104) == 0.0) {
                    if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                       (lVar21 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                              uVar25 & 0xffffffff,*(undefined8 *)PTR_DAT_06a0b440),
                       lVar21 == 0)) goto LAB_03168190;
                    if (*(float *)(lVar21 + 0x110) == 0.0) {
                      if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                         (lVar21 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                uVar25 & 0xffffffff,*(undefined8 *)PTR_DAT_06a0b440)
                         , lVar21 == 0)) goto LAB_03168190;
                      if (*(float *)(lVar21 + 0x114) == 0.0) goto LAB_0316b04c;
                    }
                  }
                }
                puVar4 = PTR_DAT_069fd088;
                if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                fVar38 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),iVar27 + -1,
                                             *(undefined8 *)PTR_DAT_069fd088);
                if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                fVar57 = fVar50;
                fVar35 = fStack0000000000000164;
                fVar36 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),iVar27,
                                             *(undefined8 *)puVar4);
                if (DAT_06db4c77 == '\0') {
                  FUN_02d965b8(PTR_DAT_069fbb48);
                  DAT_06db4c77 = '\x01';
                }
                if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
                fVar44 = *pfVar15;
                fVar55 = fVar55 + SQRT((fStack0000000000000164 - fVar35) *
                                       (fStack0000000000000164 - fVar35) +
                                       (fVar38 - fVar36) * (fVar38 - fVar36) +
                                       (fVar50 - fVar57) * (fVar50 - fVar57));
                uVar47 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),uVar25 & 0xffffffff,
                                      *(undefined8 *)PTR_DAT_06a0b440);
                FUN_0316f6a0(fVar55 + fVar44,fVar52,uVar47,uVar47,&stack0x0000022c,&stack0x00000228,
                             &stack0x00000224,&stack0x00000218,&stack0x000001a0,&stack0x00000214);
              }
              if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
              uVar45 = (ulong)(uint)fStack00000000000001a8;
              uVar19 = (ulong)(uint)fStack00000000000001a4;
              FUN_0409f350(uStack00000000000001a0,*(long *)(unaff_x26 + 0x20),iVar27,
                           *(undefined8 *)PTR_DAT_06a0b7d0);
              lVar23 = *(long *)(unaff_x26 + 0x28);
              iVar27 = iVar27 + 1;
              if (lVar23 == 0) goto LAB_03168190;
            }
            uVar19 = (ulong)(iVar67 - 1);
            if (iVar67 < 1) {
              if (*(uint *)(lVar11 + 0x18) <= uVar1) goto LAB_0316f2c4;
              lVar21 = *(long *)(unaff_x26 + 0x20);
              if (lVar21 == 0) goto LAB_03168190;
              lVar23 = *(long *)(lVar21 + 0x10);
              fVar55 = *pfVar33;
              uVar49 = *(undefined4 *)(lVar16 + 0x24);
              fStack0000000000000164 = *(float *)(lVar16 + 0x28);
              *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
              if (lVar23 == 0) goto LAB_03168190;
              uVar53 = *(uint *)(lVar21 + 0x18);
              if (uVar53 < *(uint *)(lVar23 + 0x18)) {
                lVar23 = lVar23 + (long)(int)uVar53 * 0xc;
                *(uint *)(lVar21 + 0x18) = uVar53 + 1;
                *(float *)(lVar23 + 0x20) = fVar55;
                *(undefined4 *)(lVar23 + 0x24) = uVar49;
                *(float *)(lVar23 + 0x28) = fStack0000000000000164;
              }
              else {
                FUN_0409f624(lVar21,*(undefined8 *)
                                     (*(long *)(*(long *)(*(long *)puVar4 + 0x20) + 0xc0) + 0x70));
                uVar19 = extraout_x1_00;
              }
              fVar55 = fStack00000000000001d4;
              if ((*(uint *)(lVar11 + 0x18) <= uVar31) || (*(uint *)(lVar11 + 0x18) <= uVar1))
              goto LAB_0316f2c4;
              uVar47 = *(undefined8 *)pfVar24;
              fVar38 = *(float *)(lVar12 + 0x28);
              uVar54 = *(undefined8 *)pfVar33;
              fVar50 = *(float *)(lVar16 + 0x28);
              if (DAT_06db4c77 == '\0') {
                FUN_02d965b8(PTR_DAT_069fbb48,uVar19);
                DAT_06db4c77 = '\x01';
              }
              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              fVar57 = (float)uVar47 - (float)uVar54;
              fVar52 = (float)((ulong)uVar47 >> 0x20) - (float)((ulong)uVar54 >> 0x20);
              fVar38 = fVar38 - fVar50;
              fVar38 = fVar38 * fVar38;
              fStack00000000000001d4 = fVar55 + SQRT(fVar38 + fVar57 * fVar57 + fVar52 * fVar52);
LAB_0316d2dc:
              lVar12 = *(long *)(unaff_x26 + 0x28);
              if (lVar12 == 0) goto LAB_03168190;
              lVar16 = *(long *)(lVar12 + 0x10);
              lVar21 = *(long *)PTR_DAT_069ff178;
              *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
              if (lVar16 == 0) goto LAB_03168190;
              uVar53 = *(uint *)(lVar12 + 0x18);
              if (uVar53 < *(uint *)(lVar16 + 0x18)) {
                *(uint *)(lVar12 + 0x18) = uVar53 + 1;
                *(undefined4 *)(lVar16 + (long)(int)uVar53 * 4 + 0x20) = 0x3f800000;
              }
              else {
                FUN_04059d64(0x3f800000,lVar12,
                             *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
              }
              lVar12 = *in_stack_000000e0;
              if (lVar12 == 0) goto LAB_03168190;
              lVar16 = *(long *)(lVar12 + 0x10);
              lVar21 = *(long *)PTR_DAT_069ff178;
              *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
              if (lVar16 == 0) goto LAB_03168190;
              uVar53 = *(uint *)(lVar12 + 0x18);
              if (uVar53 < *(uint *)(lVar16 + 0x18)) {
                *(uint *)(lVar12 + 0x18) = uVar53 + 1;
                *(undefined4 *)(lVar16 + (long)(int)uVar53 * 4 + 0x20) = 0;
              }
              else {
                FUN_04059d64(0,lVar12,*(undefined8 *)
                                       (*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
              }
            }
            else {
              fVar55 = (float)FUN_04059a68(lVar23,uVar19,*(undefined8 *)PTR_DAT_06a0a108);
              unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
              puVar4 = PTR_DAT_069fd088;
              plVar26 = (long *)PTR_DAT_069fb978;
              fVar50 = 1.0;
              if (fVar55 <= 1.0) {
                lVar12 = *(long *)(unaff_x26 + 0x20);
                if (lVar12 == 0) goto LAB_03168190;
                fVar55 = (float)FUN_0409f2f4(lVar12,*(int *)(lVar12 + 0x18) + -1,
                                             *(undefined8 *)PTR_DAT_069fd088);
                if (*(uint *)(lVar11 + 0x18) <= uVar1) goto LAB_0316f2c4;
                fVar50 = fVar50 - *(float *)(lVar16 + 0x24);
                fStack0000000000000164 = fStack0000000000000164 - *(float *)(lVar16 + 0x28);
                fVar38 = in_stack_000000a0._4_4_;
                if (in_stack_000000a0._4_4_ <=
                    fStack0000000000000164 * fStack0000000000000164 +
                    (fVar55 - *pfVar33) * (fVar55 - *pfVar33) + fVar50 * fVar50) {
                  lVar12 = *(long *)(unaff_x26 + 0x20);
                  if (lVar12 == 0) goto LAB_03168190;
                  fVar55 = in_stack_000000a0._4_4_;
                  fVar50 = (float)FUN_0409f2f4(lVar12,*(int *)(lVar12 + 0x18) + -1,
                                               *(undefined8 *)puVar4);
                  if (*(uint *)(lVar11 + 0x18) <= uVar1) goto LAB_0316f2c4;
                  fVar38 = *pfVar33;
                  fVar52 = *(float *)(lVar16 + 0x24);
                  fVar57 = *(float *)(lVar16 + 0x28);
                  if (DAT_06db4c77 == '\0') {
                    FUN_02d965b8(PTR_DAT_069fbb48);
                    DAT_06db4c77 = '\x01';
                  }
                  if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  puVar5 = PTR_DAT_069fbee0;
                  fVar55 = fVar55 - fVar52;
                  lVar12 = *(long *)(unaff_x26 + 0x20);
                  fStack0000000000000164 = fStack0000000000000164 - fVar57;
                  if (fVar34 <= SQRT(fStack0000000000000164 * fStack0000000000000164 +
                                     (fVar50 - fVar38) * (fVar50 - fVar38) + fVar55 * fVar55)) {
                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                      if (lVar12 != 0) {
                        lVar21 = *(long *)(lVar12 + 0x10);
                        fVar55 = *pfVar33;
                        fVar50 = *(float *)(lVar16 + 0x24);
                        fStack0000000000000164 = *(float *)(lVar16 + 0x28);
                        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                        if (lVar21 != 0) {
                          uVar53 = *(uint *)(lVar12 + 0x18);
                          if (uVar53 < *(uint *)(lVar21 + 0x18)) {
                            lVar21 = lVar21 + (long)(int)uVar53 * 0xc;
                            *(uint *)(lVar12 + 0x18) = uVar53 + 1;
                            *(float *)(lVar21 + 0x20) = fVar55;
                            *(float *)(lVar21 + 0x24) = fVar50;
                            *(float *)(lVar21 + 0x28) = fStack0000000000000164;
                          }
                          else {
                            FUN_0409f624(lVar12,*(undefined8 *)
                                                 (*(long *)(*(long *)(*(long *)puVar5 + 0x20) + 0xc0
                                                           ) + 0x70));
                          }
                          fVar55 = fStack00000000000001d4;
                          lVar12 = *(long *)(unaff_x26 + 0x20);
                          if (lVar12 != 0) {
                            fVar57 = (float)FUN_0409f2f4(lVar12,*(int *)(lVar12 + 0x18) + -1,
                                                         *(undefined8 *)puVar4);
                            if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                              fVar52 = *pfVar33;
                              fVar35 = *(float *)(lVar16 + 0x24);
                              fVar38 = *(float *)(lVar16 + 0x28);
                              if (DAT_06db4c77 == '\0') {
                                FUN_02d965b8(PTR_DAT_069fbb48);
                                DAT_06db4c77 = '\x01';
                              }
                              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                                thunk_FUN_02df485c();
                              }
                              fVar50 = fVar50 - fVar35;
                              fStack0000000000000164 = fStack0000000000000164 - fVar38;
                              fVar38 = fStack0000000000000164 * fStack0000000000000164;
                              fStack00000000000001d4 =
                                   fVar55 + SQRT(fVar38 + (fVar57 - fVar52) * (fVar57 - fVar52) +
                                                          fVar50 * fVar50);
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
                  if (lVar12 == 0) goto LAB_03168190;
                  if (*(uint *)(lVar11 + 0x18) <= uVar1) goto LAB_0316f2c4;
                  fStack0000000000000164 = *(float *)(lVar16 + 0x28);
                  fVar38 = *(float *)(lVar16 + 0x24);
                  FUN_0409f350(*pfVar33,lVar12,*(int *)(lVar12 + 0x18) + -1,
                               *(undefined8 *)PTR_DAT_06a0b7d0);
                  lVar12 = *(long *)(unaff_x26 + 0x28);
                  if (lVar12 == 0) goto LAB_03168190;
                  FUN_04059abc(0x3f800000,lVar12,*(int *)(lVar12 + 0x18) + -1,
                               *(undefined8 *)PTR_DAT_06a0b5c0);
                }
              }
              else {
                lVar12 = *(long *)(unaff_x26 + 0x28);
                if (lVar12 == 0) goto LAB_03168190;
                FUN_04059abc(0x3f800000,lVar12,*(int *)(lVar12 + 0x18) + -1,
                             *(undefined8 *)PTR_DAT_06a0b5c0);
                lVar12 = *(long *)(unaff_x26 + 0x20);
                if (lVar12 == 0) goto LAB_03168190;
                if (*(uint *)(lVar11 + 0x18) <= uVar1) goto LAB_0316f2c4;
                fStack0000000000000164 = *(float *)(lVar16 + 0x28);
                fVar38 = *(float *)(lVar16 + 0x24);
                FUN_0409f350(*pfVar33,lVar12,*(int *)(lVar12 + 0x18) + -1,
                             *(undefined8 *)PTR_DAT_06a0b7d0);
              }
            }
            lVar12 = *(long *)(unaff_x26 + 0x20);
            if (lVar12 == 0) goto LAB_03168190;
            iVar27 = *(int *)(lVar12 + 0x18);
            uStack0000000000000110 =
                 FUN_0409f2f4(lVar12,iVar27 + -1,*(undefined8 *)PTR_DAT_069fd088);
            puVar4 = PTR_DAT_069fd088;
            lVar12 = *(long *)(unaff_x26 + 0x20);
            fVar57 = (float)uStack0000000000000110;
            if (lVar12 == 0) goto LAB_03168190;
            fVar55 = fStack0000000000000164;
            if (1 < *(int *)(lVar12 + 0x18)) {
              fStack0000000000000088 = fVar38;
              fStack000000000000008c =
                   (float)FUN_0409f2f4(lVar12,*(int *)(lVar12 + 0x18) + -2,
                                       *(undefined8 *)PTR_DAT_069fd088);
              lVar12 = *(long *)(unaff_x26 + 0x20);
              if (lVar12 == 0) goto LAB_03168190;
              fVar50 = fStack0000000000000088;
              fVar52 = fVar55;
              fVar35 = (float)FUN_0409f2f4(lVar12,*(int *)(lVar12 + 0x18) + -1,*(undefined8 *)puVar4
                                          );
              if (DAT_06db4c75 == '\0') {
                FUN_02d965b8(PTR_DAT_069fbb48);
                DAT_06db4c75 = '\x01';
              }
              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              fStack000000000000008c = fStack000000000000008c - fVar35;
              fStack0000000000000088 = fStack0000000000000088 - fVar50;
              fVar55 = fVar55 - fVar52;
              fStack0000000000000084 =
                   SQRT(fVar55 * fVar55 +
                        fStack000000000000008c * fStack000000000000008c +
                        fStack0000000000000088 * fStack0000000000000088);
              if (fStack0000000000000084 <= DAT_010fd13c) {
                if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
                  FUN_02d965b8(plVar26);
                  *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
                }
                pfVar24 = *(float **)(*plVar26 + 0xb8);
                fStack000000000000008c = *pfVar24;
                fStack0000000000000088 = pfVar24[1];
                fStack0000000000000084 = pfVar24[2];
              }
              else {
                fStack000000000000008c = fStack000000000000008c / fStack0000000000000084;
                fStack0000000000000088 = fStack0000000000000088 / fStack0000000000000084;
                fStack0000000000000084 = fVar55 / fStack0000000000000084;
              }
            }
            lVar12 = *(long *)(in_stack_00000148 + 0x2c8);
            *(float *)(in_stack_00000148 + 0x2c0) =
                 *(float *)(in_stack_00000148 + 0x2c0) + fStack00000000000001d4;
            if (lVar12 == 0) goto LAB_03168190;
            lVar16 = *(long *)(lVar12 + 0x10);
            lVar21 = *(long *)PTR_DAT_069fc3e0;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar16 == 0) goto LAB_03168190;
            uVar53 = *(uint *)(lVar12 + 0x18);
            iStack00000000000000d4 = iVar27 + iStack00000000000000d4;
            fVar52 = fStack00000000000001d4;
            if (uVar53 < *(uint *)(lVar16 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar53 + 1;
              *(int *)(lVar16 + (long)(int)uVar53 * 4 + 0x20) = iStack00000000000000d4;
            }
            else {
              FUN_03fb3e1c(lVar12,iStack00000000000000d4,
                           *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
            }
            if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
            iVar27 = *(int *)(*(long *)(unaff_x26 + 0x78) + 0x18);
            fVar50 = fStack0000000000000164;
            if (iVar27 < 1) {
              iStack0000000000000108 = 3;
              unaff_x23 = in_stack_00000148;
              goto LAB_0316c620;
            }
            lVar12 = FUN_0400ff1c(in_stack_00000098,iVar30 + -2,*unaff_x21);
            if ((lVar12 == 0) || (lVar16 = *in_stack_00000090, lVar16 == 0)) goto LAB_03168190;
            iVar67 = *(int *)(lVar12 + 0xbc);
            fVar35 = (float)FUN_04059a68(lVar16,*(int *)(lVar16 + 0x18) + -1,
                                         *(undefined8 *)PTR_DAT_06a0a108);
            lVar12 = *in_stack_00000090;
            if (lVar12 == 0) goto LAB_03168190;
            if (1 < *(int *)(lVar12 + 0x18)) {
              fVar52 = (float)FUN_04059a68(lVar12,*(int *)(lVar12 + 0x18) + -2,
                                           *(undefined8 *)PTR_DAT_06a0a108);
              fVar52 = fVar35 - fVar52;
              fVar35 = fVar52;
            }
            puVar4 = PTR_DAT_069fd088;
            lVar12 = *(long *)(unaff_x26 + 0x78);
            if (lVar12 == 0) goto LAB_03168190;
            fVar36 = (float)FUN_0409f2f4(lVar12,*(int *)(lVar12 + 0x18) + -1,
                                         *(undefined8 *)PTR_DAT_069fd088);
            if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
            fVar44 = fVar52;
            fVar59 = fVar55;
            fVar63 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),0,*(undefined8 *)puVar4);
            if (DAT_06db4c75 == '\0') {
              FUN_02d965b8(PTR_DAT_069fbb48);
              DAT_06db4c75 = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            fVar52 = fVar52 - fVar44;
            uVar19 = (ulong)(uint)DAT_010fd13c;
            fVar55 = SQRT((fVar55 - fVar59) * (fVar55 - fVar59) +
                          (fVar36 - fVar63) * (fVar36 - fVar63) + fVar52 * fVar52);
            if (fVar55 <= DAT_010fd13c) {
              if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
                FUN_02d965b8(plVar26);
                *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
              }
              fVar52 = *(float *)(*(long *)(*plVar26 + 0xb8) + 4);
            }
            else {
              fVar52 = fVar52 / fVar55;
            }
            puVar4 = PTR_DAT_069fd088;
            lVar12 = *(long *)(unaff_x26 + 0x78);
            if (lVar12 == 0) goto LAB_03168190;
            FUN_0409f2f4(lVar12,*(int *)(lVar12 + 0x18) + -1,*(undefined8 *)PTR_DAT_069fd088);
            lVar12 = *(long *)(unaff_x26 + 0x78);
            if (lVar12 == 0) goto LAB_03168190;
            fVar44 = fVar55;
            fVar36 = (float)FUN_0409f2f4(lVar12,*(int *)(lVar12 + 0x18) + -1,*(undefined8 *)puVar4);
            if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
            uVar45 = (ulong)(uint)(float)iVar67;
            fVar59 = (float)iVar27 - (float)iVar67;
            if (1.0 <= fVar59) {
              fVar63 = 0.0;
              iVar67 = *(int *)(*(long *)(unaff_x26 + 0x78) + 0x18);
              iVar27 = 2;
              iVar29 = -2;
              do {
                fVar39 = (float)uVar45;
                if ((iVar27 - iVar67) + -1 < 0) {
                  lVar12 = *(long *)(unaff_x26 + 0x78);
                  if (lVar12 == 0) goto LAB_03168190;
                  fVar65 = (float)uVar19;
                  fVar40 = (float)FUN_0409f2f4(lVar12,iVar29 + *(int *)(lVar12 + 0x18),
                                               *(undefined8 *)PTR_DAT_069fd088);
                  if (DAT_06db4c77 == '\0') {
                    FUN_02d965b8(PTR_DAT_069fbb48);
                    DAT_06db4c77 = '\x01';
                  }
                  if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  lVar12 = *(long *)(unaff_x26 + 0x78);
                  if (lVar12 == 0) goto LAB_03168190;
                  fVar46 = fVar65 - (float)uVar19;
                  fVar63 = fVar63 + SQRT(fVar46 * fVar46 +
                                         (fVar40 - fVar36) * (fVar40 - fVar36) +
                                         (fVar39 - fVar44) * (fVar39 - fVar44));
                  fVar55 = (fVar35 / fVar59) * fVar52 + fVar55;
                  fVar36 = 1.0;
                  if (SQRT(fVar63 / fVar35) <= 1.0) {
                    fVar36 = SQRT(fVar63 / fVar35);
                  }
                  fVar44 = fVar55 + (fVar39 - fVar55) * fVar36;
                  uVar45 = (ulong)(uint)fVar44;
                  FUN_0409f350(fVar40,uVar45,fVar65,lVar12,iVar29 + *(int *)(lVar12 + 0x18),
                               *(undefined8 *)PTR_DAT_06a0b7d0);
                  uVar19 = (ulong)(uint)fVar65;
                  fVar36 = fVar40;
                }
                fVar39 = (float)iVar27;
                iVar27 = iVar27 + 1;
                iVar29 = iVar29 + -1;
              } while (fVar39 <= fVar59);
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
               (lVar12 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar25 & 0xffffffff,*unaff_x21),
               puVar4 = PTR_DAT_069fd088, lVar12 == 0)) goto LAB_03168190;
            if (*(int *)(lVar12 + 0x6c) == 4) {
              if ((*(long *)(unaff_x23 + 0x68) != 0) &&
                 (lVar12 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar25 & 0xffffffff,*unaff_x21),
                 lVar12 != 0)) {
                fStack00000000000001d4 = 0.0;
                *(undefined8 *)(unaff_x26 + 0x20) = *(undefined8 *)(lVar12 + 0x1d8);
                lVar12 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ff188);
                FUN_040594d0(lVar12,*(undefined8 *)PTR_DAT_069ff180);
                if (lVar12 != 0) {
                  lVar16 = *(long *)(lVar12 + 0x10);
                  lVar21 = *(long *)PTR_DAT_069ff178;
                  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                  if (lVar16 != 0) {
                    uVar53 = *(uint *)(lVar12 + 0x18);
                    if (uVar53 < *(uint *)(lVar16 + 0x18)) {
                      *(uint *)(lVar12 + 0x18) = uVar53 + 1;
                      *(undefined4 *)(lVar16 + (long)(int)uVar53 * 4 + 0x20) = 0;
                    }
                    else {
                      FUN_04059d64(0,lVar12,*(undefined8 *)
                                             (*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
                    }
                    lVar16 = *(long *)(unaff_x26 + 0x20);
                    if (lVar16 != 0) {
                      iVar27 = 1;
                      while( true ) {
                        fVar55 = fStack00000000000001d4;
                        fVar35 = (float)uVar45;
                        fVar52 = (float)uVar19;
                        if (*(int *)(lVar16 + 0x18) <= iVar27) break;
                        fVar36 = (float)FUN_0409f2f4(lVar16,iVar27 + -1,*(undefined8 *)puVar4);
                        if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                        fVar44 = fVar52;
                        fVar59 = fVar35;
                        fVar63 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),iVar27,
                                                     *(undefined8 *)puVar4);
                        if (DAT_06db4c77 == '\0') {
                          FUN_02d965b8(PTR_DAT_069fbb48);
                          DAT_06db4c77 = '\x01';
                        }
                        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                          thunk_FUN_02df485c();
                        }
                        fVar35 = fVar35 - fVar59;
                        uVar45 = (ulong)(uint)fVar35;
                        lVar16 = *(long *)(lVar12 + 0x10);
                        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                        uVar19 = (ulong)(uint)(fVar35 * fVar35);
                        fStack00000000000001d4 =
                             fVar55 + SQRT(fVar35 * fVar35 +
                                           (fVar36 - fVar63) * (fVar36 - fVar63) +
                                           (fVar52 - fVar44) * (fVar52 - fVar44));
                        if (lVar16 == 0) goto LAB_03168190;
                        uVar53 = *(uint *)(lVar12 + 0x18);
                        if (uVar53 < *(uint *)(lVar16 + 0x18)) {
                          *(uint *)(lVar12 + 0x18) = uVar53 + 1;
                          *(float *)(lVar16 + (long)(int)uVar53 * 4 + 0x20) = fStack00000000000001d4
                          ;
                        }
                        else {
                          FUN_04059d64(lVar12,*(undefined8 *)
                                               (*(long *)(*(long *)(*(long *)PTR_DAT_069ff178 + 0x20
                                                                   ) + 0xc0) + 0x70));
                        }
                        lVar16 = *(long *)(unaff_x26 + 0x20);
                        iVar27 = iVar27 + 1;
                        if (lVar16 == 0) goto LAB_03168190;
                      }
                      lVar16 = *(long *)(unaff_x26 + 0x28);
                      *pfVar15 = *pfVar15 + fStack00000000000001d4;
                      if (lVar16 != 0) {
                        lVar21 = *(long *)(lVar16 + 0x10);
                        lVar23 = *(long *)PTR_DAT_069ff178;
                        *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                        if (lVar21 != 0) {
                          uVar53 = *(uint *)(lVar16 + 0x18);
                          if (uVar53 < *(uint *)(lVar21 + 0x18)) {
                            *(uint *)(lVar16 + 0x18) = uVar53 + 1;
                            *(undefined4 *)(lVar21 + (long)(int)uVar53 * 4 + 0x20) = 0;
                          }
                          else {
                            FUN_04059d64(0,lVar16,*(undefined8 *)
                                                   (*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) +
                                                   0x70));
                          }
                          lVar16 = *in_stack_000000e0;
                          if (lVar16 != 0) {
                            lVar21 = *(long *)(lVar16 + 0x10);
                            lVar23 = *(long *)PTR_DAT_069ff178;
                            *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                            if (lVar21 != 0) {
                              uVar53 = *(uint *)(lVar16 + 0x18);
                              if (uVar53 < *(uint *)(lVar21 + 0x18)) {
                                *(uint *)(lVar16 + 0x18) = uVar53 + 1;
                                *(undefined4 *)(lVar21 + (long)(int)uVar53 * 4 + 0x20) = 0;
                              }
                              else {
                                FUN_04059d64(0,lVar16,*(undefined8 *)
                                                       (*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) +
                                                       0x70));
                              }
                              lVar16 = *(long *)(unaff_x26 + 0x20);
                              if (lVar16 != 0) {
                                iVar27 = 0;
                                while (iVar27 < *(int *)(lVar16 + 0x18)) {
                                  lVar16 = *(long *)(unaff_x26 + 0x28);
                                  fVar55 = (float)FUN_04059a68(lVar12,iVar27,
                                                               *(undefined8 *)PTR_DAT_06a0a108);
                                  if (lVar16 == 0) goto LAB_03168190;
                                  lVar21 = *(long *)(lVar16 + 0x10);
                                  lVar23 = *(long *)PTR_DAT_069ff178;
                                  *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                                  if (lVar21 == 0) goto LAB_03168190;
                                  uVar53 = *(uint *)(lVar16 + 0x18);
                                  if (uVar53 < *(uint *)(lVar21 + 0x18)) {
                                    *(uint *)(lVar16 + 0x18) = uVar53 + 1;
                                    *(float *)(lVar21 + (long)(int)uVar53 * 4 + 0x20) =
                                         fVar55 / fStack00000000000001d4;
                                  }
                                  else {
                                    FUN_04059d64(lVar16,*(undefined8 *)
                                                         (*(long *)(*(long *)(lVar23 + 0x20) + 0xc0)
                                                         + 0x70));
                                  }
                                  lVar16 = *in_stack_000000e0;
                                  if (lVar16 == 0) goto LAB_03168190;
                                  lVar21 = *(long *)(lVar16 + 0x10);
                                  lVar23 = *(long *)PTR_DAT_069ff178;
                                  *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                                  if (lVar21 == 0) goto LAB_03168190;
                                  uVar53 = *(uint *)(lVar16 + 0x18);
                                  if (uVar53 < *(uint *)(lVar21 + 0x18)) {
                                    *(uint *)(lVar16 + 0x18) = uVar53 + 1;
                                    *(undefined4 *)(lVar21 + (long)(int)uVar53 * 4 + 0x20) = 0;
                                  }
                                  else {
                                    FUN_04059d64(0,lVar16,*(undefined8 *)
                                                           (*(long *)(*(long *)(lVar23 + 0x20) +
                                                                     0xc0) + 0x70));
                                  }
                                  lVar16 = *(long *)(unaff_x26 + 0x20);
                                  iVar27 = iVar27 + 1;
                                  if (lVar16 == 0) goto LAB_03168190;
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
      uVar53 = *(uint *)(lVar11 + 0x18);
      fStack0000000000000164 = fVar50;
      if (uVar31 == 1) {
        if ((ulong)uVar53 < 2) goto LAB_0316f2c4;
        fStack0000000000000164 = *(float *)(lVar12 + 0x28);
        *(undefined8 *)(unaff_x26 + 0x60) = *(undefined8 *)pfVar24;
      }
      if (uVar53 <= uVar1) goto LAB_0316f2c4;
      fVar55 = *(float *)(lVar16 + 0x28);
      uVar47 = *(undefined8 *)pfVar33;
      uVar54 = *(undefined8 *)pfVar24;
      fVar51 = *(float *)(lVar12 + 0x28);
      if (DAT_06db4c75 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c75 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar50 = (float)uVar47 - (float)uVar54;
      fVar35 = (float)((ulong)uVar47 >> 0x20) - (float)((ulong)uVar54 >> 0x20);
      fVar55 = fVar55 - fVar51;
      fVar51 = SQRT(fVar55 * fVar55 + fVar50 * fVar50 + fVar35 * fVar35);
      uVar19 = (ulong)(uint)fVar51;
      if (fVar51 <= DAT_010fd13c) {
        if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
          FUN_02d965b8(plVar26);
          *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
        }
        uVar47 = **(undefined8 **)(*plVar26 + 0xb8);
        fVar55 = *(float *)(*(undefined8 **)(*plVar26 + 0xb8) + 1);
      }
      else {
        fVar55 = fVar55 / fVar51;
        uVar47 = CONCAT44(fVar35 / fVar51,fVar50 / fVar51);
      }
      if (*(uint *)(lVar11 + 0x18) <= uVar1) goto LAB_0316f2c4;
      fVar51 = *(float *)(lVar16 + 0x28);
      uVar54 = *(undefined8 *)pfVar33;
      uVar58 = *(undefined8 *)pfVar24;
      fVar50 = *(float *)(lVar12 + 0x28);
      if (DAT_06db4c77 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c77 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar35 = (float)uVar54 - (float)uVar58;
      fVar36 = (float)((ulong)uVar54 >> 0x20) - (float)((ulong)uVar58 >> 0x20);
      fVar51 = fVar51 - fVar50;
      fStack00000000000001d4 = SQRT(fVar51 * fVar51 + fVar35 * fVar35 + fVar36 * fVar36);
      if (*(uint *)(lVar11 + 0x18) <= uVar1) goto LAB_0316f2c4;
      uStack0000000000000110 = (ulong)(uint)fVar57;
      fVar50 = *pfVar33;
      fVar51 = *(float *)(lVar16 + 0x28);
      if (DAT_06db4c77 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c77 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar51 = fVar51 - fStack0000000000000164;
      fVar51 = SQRT((fVar50 - fVar57) * (fVar50 - fVar57) + fVar51 * fVar51) + 0.0;
      fVar50 = 0.0;
      if (uVar31 != 1) {
        fVar50 = fStack000000000000010c;
      }
      uVar13 = (ulong)(uint)fVar50;
      uVar45 = uVar13;
      lVar21 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ff188);
      FUN_040594d0(lVar21,*(undefined8 *)PTR_DAT_069ff180);
      if (fVar50 < fStack00000000000001d4 - fStack000000000000010c) {
        fVar50 = *(float *)((ulong)&stack0x00000278 | 4);
        do {
          if (*(uint *)(lVar11 + 0x18) <= uVar1) goto LAB_0316f2c4;
          uVar54 = *(undefined8 *)pfVar33;
          fVar35 = *(float *)(lVar16 + 0x28);
          if (DAT_06db4c77 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c77 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fVar63 = (float)uVar13;
          fVar36 = (float)uVar47 * fVar63 + fVar57;
          fVar44 = (float)((ulong)uVar47 >> 0x20) * fVar63 + fVar50;
          uVar58 = CONCAT44(fVar44,fVar36);
          fVar59 = fVar55 * fVar63 + fStack0000000000000164;
          fVar36 = fVar36 - (float)uVar54;
          fVar44 = fVar44 - (float)((ulong)uVar54 >> 0x20);
          fVar35 = fVar59 - fVar35;
          fVar35 = SQRT(fVar35 * fVar35 + fVar36 * fVar36 + fVar44 * fVar44);
          uVar19 = (ulong)(uint)fVar35;
          if (fVar34 < fVar35) {
            _uStack00000000000001b0 = uVar58;
            in_stack_000001b8 = fVar59;
            if (*(char *)(unaff_x23 + 0x5d6) != '\0') {
              if (*(long *)(unaff_x23 + 0x20) == 0) goto LAB_03168190;
              FUN_03199614(*(long *)(unaff_x23 + 0x20),&stack0x000001b0,0);
            }
            if ((*(long *)(unaff_x23 + 0x68) == 0) ||
               (lVar23 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar25 & 0xffffffff,*unaff_x21),
               lVar23 == 0)) goto LAB_03168190;
            if (*(float *)(lVar23 + 0x100) == 0.0) {
              if ((*(long *)(unaff_x23 + 0x68) == 0) ||
                 (lVar23 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar25 & 0xffffffff,*unaff_x21),
                 lVar23 == 0)) goto LAB_03168190;
              if (*(float *)(lVar23 + 0x104) != 0.0) goto LAB_0316a920;
              if ((*(long *)(unaff_x23 + 0x68) == 0) ||
                 (lVar23 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar25 & 0xffffffff,*unaff_x21),
                 lVar23 == 0)) goto LAB_03168190;
              if (*(float *)(lVar23 + 0x110) != 0.0) goto LAB_0316a920;
              if ((*(long *)(unaff_x23 + 0x68) == 0) ||
                 (lVar23 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar25 & 0xffffffff,*unaff_x21),
                 lVar23 == 0)) goto LAB_03168190;
              if (*(float *)(lVar23 + 0x114) != 0.0) goto LAB_0316a920;
              lVar23 = *in_stack_000000e0;
              if (lVar23 == 0) goto LAB_03168190;
              lVar18 = *(long *)(lVar23 + 0x10);
              lVar22 = *(long *)PTR_DAT_069ff178;
              *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
              if (lVar18 == 0) goto LAB_03168190;
              uVar53 = *(uint *)(lVar23 + 0x18);
              if (uVar53 < *(uint *)(lVar18 + 0x18)) {
                *(uint *)(lVar23 + 0x18) = uVar53 + 1;
                *(undefined4 *)(lVar18 + (long)(int)uVar53 * 4 + 0x20) = 0;
              }
              else {
                FUN_04059d64(0,lVar23,*(undefined8 *)
                                       (*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
              }
            }
            else {
LAB_0316a920:
              if (*(long *)(unaff_x23 + 0x68) == 0) goto LAB_03168190;
              fVar35 = *pfVar15;
              uVar54 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar25 & 0xffffffff,*unaff_x21);
              FUN_0316f6a0(fVar63 + fVar35,fVar52,uVar54,uVar54,&stack0x0000022c,&stack0x00000228,
                           &stack0x00000224,&stack0x00000218,&stack0x000001b0,&stack0x00000214);
            }
            puVar4 = PTR_DAT_069fbee0;
            lVar23 = *(long *)(unaff_x26 + 0x20);
            if (lVar23 == 0) goto LAB_03168190;
            lVar18 = *(long *)(lVar23 + 0x10);
            uVar19 = (ulong)(uint)in_stack_000001b8;
            *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
            if (lVar18 == 0) goto LAB_03168190;
            uVar53 = *(uint *)(lVar23 + 0x18);
            if (uVar53 < *(uint *)(lVar18 + 0x18)) {
              lVar18 = lVar18 + (long)(int)uVar53 * 0xc;
              *(uint *)(lVar23 + 0x18) = uVar53 + 1;
              *(undefined4 *)(lVar18 + 0x20) = uStack00000000000001b0;
              *(undefined4 *)(lVar18 + 0x24) = uStack00000000000001b4;
              *(float *)(lVar18 + 0x28) = in_stack_000001b8;
            }
            else {
              FUN_0409f624(lVar23,*(undefined8 *)
                                   (*(long *)(*(long *)(*(long *)puVar4 + 0x20) + 0xc0) + 0x70));
            }
            if (lVar21 == 0) goto LAB_03168190;
            lVar23 = *(long *)(lVar21 + 0x10);
            lVar18 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
            if (lVar23 == 0) goto LAB_03168190;
            uVar53 = *(uint *)(lVar21 + 0x18);
            if (uVar53 < *(uint *)(lVar23 + 0x18)) {
              *(uint *)(lVar21 + 0x18) = uVar53 + 1;
              *(undefined4 *)(lVar23 + (long)(int)uVar53 * 4 + 0x20) = 0;
            }
            else {
              FUN_04059d64(lVar21,*(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70)
                          );
            }
            lVar23 = *in_stack_000000b8;
            if (lVar23 == 0) goto LAB_03168190;
            lVar18 = *(long *)(lVar23 + 0x10);
            lVar22 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
            if (lVar18 == 0) goto LAB_03168190;
            uVar53 = *(uint *)(lVar23 + 0x18);
            if (uVar53 < *(uint *)(lVar18 + 0x18)) {
              *(uint *)(lVar23 + 0x18) = uVar53 + 1;
              *(undefined4 *)(lVar18 + (long)(int)uVar53 * 4 + 0x20) = 0;
            }
            else {
              FUN_04059d64(0,lVar23,*(undefined8 *)
                                     (*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
            }
            lVar23 = *(long *)(unaff_x26 + 0x28);
            if (lVar23 == 0) goto LAB_03168190;
            lVar18 = *(long *)(lVar23 + 0x10);
            lVar22 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
            if (lVar18 == 0) goto LAB_03168190;
            uVar53 = *(uint *)(lVar23 + 0x18);
            if (uVar53 < *(uint *)(lVar18 + 0x18)) {
              *(uint *)(lVar23 + 0x18) = uVar53 + 1;
              *(float *)(lVar18 + (long)(int)uVar53 * 4 + 0x20) = fVar63 / fStack00000000000001d4;
            }
            else {
              FUN_04059d64(lVar23,*(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70)
                          );
            }
          }
          uVar45 = (ulong)(uint)fStack000000000000010c;
          uVar13 = (ulong)(uint)(fVar63 + fStack000000000000010c);
        } while (fVar63 + fStack000000000000010c < fStack00000000000001d4 - fStack000000000000010c);
      }
      fStack000000000000012c = (float)uVar19;
      fStack0000000000000128 = (float)uVar45;
      if (*(char *)(unaff_x23 + 0x5d6) == '\0') {
        if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
        lVar23 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),uVar25 & 0xffffffff,
                              *(undefined8 *)PTR_DAT_06a0b440);
        fStack000000000000012c = (float)uVar19;
        fStack0000000000000128 = (float)uVar45;
        if (lVar23 == 0) goto LAB_03168190;
        if (*(int *)(lVar23 + 0x6c) == 1) {
          if (*(long *)(unaff_x26 + 0x28) == 0) goto LAB_03168190;
          iVar27 = 0;
          puVar32 = (undefined4 *)(lVar11 + 0x20 + uVar25 * 0xc);
          lVar23 = *(long *)(unaff_x26 + 0x28);
          while( true ) {
            fStack000000000000012c = (float)uVar19;
            fStack0000000000000128 = (float)uVar45;
            if (*(int *)(lVar23 + 0x18) <= iVar27) break;
            uVar19 = (ulong)*(uint *)(lVar11 + 0x18);
            if ((((uVar19 <= uVar25) || (uVar19 <= uVar31)) || (uVar19 <= uVar1)) ||
               (uVar19 <= uVar31 + 2)) goto LAB_0316f2c4;
            uVar49 = *puVar32;
            fVar55 = (float)puVar32[1];
            uVar53 = puVar32[2];
            fVar50 = *pfVar24;
            uVar60 = *(undefined4 *)(lVar12 + 0x24);
            uVar64 = *(undefined4 *)(lVar12 + 0x28);
            FUN_04059a68(lVar23,iVar27,*(undefined8 *)PTR_DAT_06a0a108);
            FUN_0316f340(uVar49,fVar55,uVar53,fVar50,uVar60,uVar64);
            unaff_x26 = &stack0x00000218;
            if (((in_stack_00000238 == 0) ||
                (uVar49 = FUN_0409f2f4(in_stack_00000238,iVar27,*(undefined8 *)PTR_DAT_069fd088),
                lVar21 == 0)) ||
               (fVar50 = (float)FUN_04059a68(lVar21,iVar27,*(undefined8 *)PTR_DAT_06a0a108),
               in_stack_00000238 == 0)) goto LAB_03168190;
            uVar45 = (ulong)(uint)(fVar55 + fVar50);
            uVar19 = (ulong)uVar53;
            FUN_0409f350(uVar49,in_stack_00000238,iVar27,*(undefined8 *)PTR_DAT_06a0b7d0);
            iVar27 = iVar27 + 1;
            lVar23 = in_stack_00000240;
            if (in_stack_00000240 == 0) goto LAB_03168190;
          }
        }
      }
      puVar4 = PTR_DAT_069fbee0;
      lVar12 = *(long *)(unaff_x26 + 0x20);
      if (lVar12 == 0) goto LAB_03168190;
      if (*(int *)(lVar12 + 0x18) == 0) {
        if (*(uint *)(lVar11 + 0x18) <= uVar1) goto LAB_0316f2c4;
        lVar21 = *(long *)(lVar12 + 0x10);
        fVar55 = *pfVar33;
        uVar49 = *(undefined4 *)(lVar16 + 0x24);
        uVar60 = *(undefined4 *)(lVar16 + 0x28);
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar21 == 0) goto LAB_03168190;
        if (*(int *)(lVar21 + 0x18) == 0) {
          FUN_0409f624(lVar12,*(undefined8 *)
                               (*(long *)(*(long *)(*(long *)puVar4 + 0x20) + 0xc0) + 0x70));
        }
        else {
          *(undefined4 *)(lVar12 + 0x18) = 1;
          *(float *)(lVar21 + 0x20) = fVar55;
          *(undefined4 *)(lVar21 + 0x24) = uVar49;
          *(undefined4 *)(lVar21 + 0x28) = uVar60;
        }
        if (*(uint *)(lVar11 + 0x18) <= uVar1) goto LAB_0316f2c4;
        fVar55 = *pfVar33;
        fVar50 = *(float *)(lVar16 + 0x24);
        fStack000000000000012c = *(float *)(lVar16 + 0x28);
        if (DAT_06db4c77 == '\0') {
          FUN_02d965b8(PTR_DAT_069fbb48);
          DAT_06db4c77 = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        fVar38 = fVar38 - fVar50;
        lVar12 = *(long *)(unaff_x26 + 0x28);
        fStack000000000000012c = fStack0000000000000164 - fStack000000000000012c;
        fStack0000000000000128 = fStack000000000000012c * fStack000000000000012c;
        fStack00000000000001d4 =
             SQRT(fStack0000000000000128 + (fVar57 - fVar55) * (fVar57 - fVar55) + fVar38 * fVar38);
        if (lVar12 == 0) goto LAB_03168190;
        lVar21 = *(long *)(lVar12 + 0x10);
        lVar23 = *(long *)PTR_DAT_069ff178;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar21 == 0) goto LAB_03168190;
        uVar53 = *(uint *)(lVar12 + 0x18);
        if (uVar53 < *(uint *)(lVar21 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar53 + 1;
          *(undefined4 *)(lVar21 + (long)(int)uVar53 * 4 + 0x20) = 0x3f800000;
        }
        else {
          FUN_04059d64(0x3f800000,lVar12,
                       *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
        }
        lVar12 = *in_stack_000000e0;
        if (lVar12 == 0) goto LAB_03168190;
        lVar21 = *(long *)(lVar12 + 0x10);
        lVar23 = *(long *)PTR_DAT_069ff178;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar21 == 0) goto LAB_03168190;
        uVar53 = *(uint *)(lVar12 + 0x18);
        if (uVar53 < *(uint *)(lVar21 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar53 + 1;
          *(undefined4 *)(lVar21 + (long)(int)uVar53 * 4 + 0x20) = 0;
        }
        else {
          FUN_04059d64(0,lVar12,*(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
        }
        lVar12 = *in_stack_000000b8;
        if (lVar12 == 0) goto LAB_03168190;
        lVar21 = *(long *)(lVar12 + 0x10);
        lVar23 = *(long *)PTR_DAT_069ff178;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar21 == 0) goto LAB_03168190;
        uVar53 = *(uint *)(lVar12 + 0x18);
        if (uVar53 < *(uint *)(lVar21 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar53 + 1;
          *(undefined4 *)(lVar21 + (long)(int)uVar53 * 4 + 0x20) = 0;
        }
        else {
          FUN_04059d64(0,lVar12,*(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
        }
      }
      unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
      puVar4 = PTR_DAT_069fd088;
      plVar26 = (long *)PTR_DAT_069fb978;
      lVar12 = *(long *)(unaff_x26 + 0x20);
      if (lVar12 == 0) goto LAB_03168190;
      unaff_x29 = &PTR_FUN_06db4000;
      if (0 < *(int *)(lVar12 + 0x18)) {
        fVar55 = (float)FUN_0409f2f4(lVar12,*(int *)(lVar12 + 0x18) + -1,
                                     *(undefined8 *)PTR_DAT_069fd088);
        if (*(uint *)(lVar11 + 0x18) <= uVar1) goto LAB_0316f2c4;
        fVar50 = fStack0000000000000128 - *(float *)(lVar16 + 0x24);
        fStack000000000000012c = fStack000000000000012c - *(float *)(lVar16 + 0x28);
        fStack0000000000000128 = in_stack_000000a0._4_4_;
        if (in_stack_000000a0._4_4_ <=
            fStack000000000000012c * fStack000000000000012c +
            (fVar55 - *pfVar33) * (fVar55 - *pfVar33) + fVar50 * fVar50) {
          lVar12 = *(long *)(unaff_x26 + 0x20);
          if (lVar12 == 0) goto LAB_03168190;
          fVar55 = in_stack_000000a0._4_4_;
          fVar50 = (float)FUN_0409f2f4(lVar12,*(int *)(lVar12 + 0x18) + -1,*(undefined8 *)puVar4);
          if (*(uint *)(lVar11 + 0x18) <= uVar1) goto LAB_0316f2c4;
          fVar38 = *pfVar33;
          fVar52 = *(float *)(lVar16 + 0x24);
          fVar57 = *(float *)(lVar16 + 0x28);
          if (DAT_06db4c77 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c77 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          puVar5 = PTR_DAT_069fbee0;
          fVar55 = fVar55 - fVar52;
          lVar12 = *(long *)(unaff_x26 + 0x20);
          fStack000000000000012c = fStack000000000000012c - fVar57;
          if (fVar34 <= SQRT(fStack000000000000012c * fStack000000000000012c +
                             (fVar50 - fVar38) * (fVar50 - fVar38) + fVar55 * fVar55)) {
            if (*(uint *)(lVar11 + 0x18) <= uVar1) goto LAB_0316f2c4;
            if (lVar12 == 0) goto LAB_03168190;
            lVar21 = *(long *)(lVar12 + 0x10);
            fVar55 = *pfVar33;
            fVar50 = *(float *)(lVar16 + 0x24);
            fStack000000000000012c = *(float *)(lVar16 + 0x28);
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar21 == 0) goto LAB_03168190;
            uVar53 = *(uint *)(lVar12 + 0x18);
            if (uVar53 < *(uint *)(lVar21 + 0x18)) {
              lVar21 = lVar21 + (long)(int)uVar53 * 0xc;
              *(uint *)(lVar12 + 0x18) = uVar53 + 1;
              *(float *)(lVar21 + 0x20) = fVar55;
              *(float *)(lVar21 + 0x24) = fVar50;
              *(float *)(lVar21 + 0x28) = fStack000000000000012c;
            }
            else {
              FUN_0409f624(lVar12,*(undefined8 *)
                                   (*(long *)(*(long *)(*(long *)puVar5 + 0x20) + 0xc0) + 0x70));
            }
            fVar55 = fStack00000000000001d4;
            lVar12 = *(long *)(unaff_x26 + 0x20);
            if (lVar12 == 0) goto LAB_03168190;
            fVar38 = (float)FUN_0409f2f4(lVar12,*(int *)(lVar12 + 0x18) + -1,*(undefined8 *)puVar4);
            if (*(uint *)(lVar11 + 0x18) <= uVar1) goto LAB_0316f2c4;
            fVar57 = *pfVar33;
            fVar35 = *(float *)(lVar16 + 0x24);
            fVar52 = *(float *)(lVar16 + 0x28);
            if (DAT_06db4c77 == '\0') {
              FUN_02d965b8(PTR_DAT_069fbb48);
              DAT_06db4c77 = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            fVar50 = fVar50 - fVar35;
            lVar12 = *(long *)(unaff_x26 + 0x28);
            fStack000000000000012c = fStack000000000000012c - fVar52;
            fStack0000000000000128 = fStack000000000000012c * fStack000000000000012c;
            fStack00000000000001d4 =
                 fVar55 + SQRT(fStack0000000000000128 +
                               (fVar38 - fVar57) * (fVar38 - fVar57) + fVar50 * fVar50);
            if (lVar12 == 0) goto LAB_03168190;
            lVar16 = *(long *)(lVar12 + 0x10);
            lVar21 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar16 == 0) goto LAB_03168190;
            uVar53 = *(uint *)(lVar12 + 0x18);
            if (uVar53 < *(uint *)(lVar16 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar53 + 1;
              *(undefined4 *)(lVar16 + (long)(int)uVar53 * 4 + 0x20) = 0x3f800000;
            }
            else {
              FUN_04059d64(0x3f800000,lVar12,
                           *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
            }
            lVar12 = *in_stack_000000e0;
            if (lVar12 == 0) goto LAB_03168190;
            lVar16 = *(long *)(lVar12 + 0x10);
            lVar21 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar16 == 0) goto LAB_03168190;
            uVar53 = *(uint *)(lVar12 + 0x18);
            if (uVar53 < *(uint *)(lVar16 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar53 + 1;
              *(undefined4 *)(lVar16 + (long)(int)uVar53 * 4 + 0x20) = 0;
            }
            else {
              FUN_04059d64(0,lVar12,*(undefined8 *)
                                     (*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
            }
          }
          else {
            if (lVar12 == 0) goto LAB_03168190;
            if (*(uint *)(lVar11 + 0x18) <= uVar1) goto LAB_0316f2c4;
            fStack000000000000012c = *(float *)(lVar16 + 0x28);
            fStack0000000000000128 = *(float *)(lVar16 + 0x24);
            FUN_0409f350(*pfVar33,lVar12,*(int *)(lVar12 + 0x18) + -1,
                         *(undefined8 *)PTR_DAT_06a0b7d0);
            lVar12 = *(long *)(unaff_x26 + 0x28);
            if (lVar12 == 0) goto LAB_03168190;
            FUN_04059abc(0x3f800000,lVar12,*(int *)(lVar12 + 0x18) + -1,
                         *(undefined8 *)PTR_DAT_06a0b5c0);
          }
        }
      }
      lVar12 = *(long *)(unaff_x26 + 0x20);
      if (lVar12 == 0) goto LAB_03168190;
      iVar27 = *(int *)(lVar12 + 0x18);
      fVar57 = (float)FUN_0409f2f4(lVar12,iVar27 + -1,*(undefined8 *)PTR_DAT_069fd088);
      lVar12 = *(long *)(in_stack_00000148 + 0x2c8);
      *(float *)(in_stack_00000148 + 0x2c0) =
           *(float *)(in_stack_00000148 + 0x2c0) + fStack00000000000001d4;
      if (lVar12 == 0) goto LAB_03168190;
      lVar16 = *(long *)(lVar12 + 0x10);
      lVar21 = *(long *)PTR_DAT_069fc3e0;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      if (lVar16 == 0) goto LAB_03168190;
      uVar53 = *(uint *)(lVar12 + 0x18);
      iStack00000000000000d4 = iVar27 + iStack00000000000000d4;
      if (uVar53 < *(uint *)(lVar16 + 0x18)) {
        *(uint *)(lVar12 + 0x18) = uVar53 + 1;
        *(int *)(lVar16 + (long)(int)uVar53 * 4 + 0x20) = iStack00000000000000d4;
      }
      else {
        FUN_03fb3e1c(lVar12,iStack00000000000000d4,
                     *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
      }
      if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
         (lVar12 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),uVar25 & 0xffffffff,*unaff_x21),
         lVar12 == 0)) goto LAB_03168190;
      iStack0000000000000108 = *(int *)(lVar12 + 0x6c);
      unaff_x23 = in_stack_00000148;
      fVar38 = fStack0000000000000128;
      fVar50 = fStack000000000000012c;
      fStack0000000000000130 = fVar57;
    }
LAB_0316c620:
    if ((*(long *)(unaff_x23 + 0x68) == 0) ||
       (lVar12 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar25 & 0xffffffff,*unaff_x21),
       fVar55 = fStack00000000000001d4, lVar12 == 0)) goto LAB_03168190;
    if (*(char *)(lVar12 + 0xb8) != '\0') {
      if (*(long *)(unaff_x23 + 0x68) == 0) goto LAB_03168190;
      uVar47 = *(undefined8 *)(unaff_x23 + 0x20);
      uVar54 = *(undefined8 *)(unaff_x26 + 0x28);
      uVar49 = *(undefined4 *)(unaff_x23 + 0x128);
      lVar12 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar31 & 0xffffffff,
                            *(undefined8 *)PTR_DAT_06a0b440);
      if (lVar12 == 0) goto LAB_03168190;
      FUN_031098f4(uVar49,fVar48,fVar55,uVar47,&stack0x00000238,uVar54,&stack0x00000248,
                   *(undefined1 *)(lVar12 + 0xb8),*(undefined8 *)(unaff_x26 + 0x78),
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
    fVar52 = fStack0000000000000088;
    fVar55 = fStack0000000000000084;
    FUN_0316fb80(fStack000000000000008c,unaff_x23,extraout_x1,uVar31 & 0xffffffff,lVar11,
                 &stack0x00000268,0,*(undefined8 *)(unaff_x26 + 0x78));
    if (iVar30 + 3 < *(int *)(lVar11 + 0x18)) {
      FUN_0317018c(unaff_x23,*(undefined8 *)(unaff_x23 + 0x68),uVar31 & 0xffffffff,lVar11,
                   &stack0x00000258,0);
    }
    puVar5 = PTR_DAT_069ff178;
    puVar4 = PTR_DAT_069fd088;
    lVar12 = *in_stack_00000090;
    if (lVar12 == 0) goto LAB_03168190;
    lVar16 = *(long *)(lVar12 + 0x10);
    fVar35 = *pfVar15;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    if (lVar16 == 0) goto LAB_03168190;
    uVar53 = *(uint *)(lVar12 + 0x18);
    if (uVar53 < *(uint *)(lVar16 + 0x18)) {
      *(uint *)(lVar12 + 0x18) = uVar53 + 1;
      *(float *)(lVar16 + (long)(int)uVar53 * 4 + 0x20) = fVar35;
    }
    else {
      FUN_04059d64(lVar12,*(undefined8 *)
                           (*(long *)(*(long *)(*(long *)puVar5 + 0x20) + 0xc0) + 0x70));
    }
    if ((long)uVar31 < (long)*(int *)(in_stack_00000098 + 0x18)) {
      lVar12 = FUN_0400ff1c(in_stack_00000098,uVar31 & 0xffffffff,*unaff_x21);
      lVar16 = FUN_0400ff1c(in_stack_00000098,uVar31 & 0xffffffff,*unaff_x21);
      lVar21 = *(long *)(unaff_x26 + 0x78);
      if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      fVar35 = (float)FUN_0409f2f4(lVar21,*(int *)(lVar21 + 0x18) + -1,*(undefined8 *)puVar4);
      lVar21 = *(long *)(unaff_x26 + 0x78);
      if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      fVar36 = fVar52;
      fVar44 = fVar55;
      fVar59 = (float)FUN_0409f2f4(lVar21,*(int *)(lVar21 + 0x18) + -2,*(undefined8 *)puVar4);
      if (DAT_06db4c75 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c75 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar35 = fVar35 - fVar59;
      fVar52 = fVar52 - fVar36;
      fVar55 = fVar55 - fVar44;
      fVar36 = SQRT(fVar55 * fVar55 + fVar35 * fVar35 + fVar52 * fVar52);
      if (fVar36 <= DAT_010fd13c) {
        if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
          FUN_02d965b8(plVar26);
          *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
        }
        pfVar24 = *(float **)(*plVar26 + 0xb8);
        fVar35 = *pfVar24;
        fVar52 = pfVar24[1];
        fVar55 = pfVar24[2];
      }
      else {
        fVar35 = fVar35 / fVar36;
        fVar52 = fVar52 / fVar36;
        fVar55 = fVar55 / fVar36;
      }
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      *(float *)(lVar16 + 0x94) = fVar35;
      *(float *)(lVar16 + 0x98) = fVar52;
      *(float *)(lVar16 + 0x9c) = fVar55;
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      *(float *)(lVar12 + 0x88) = fVar35;
      *(float *)(lVar12 + 0x8c) = fVar52;
      *(float *)(lVar12 + 0x90) = fVar55;
      unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
      unaff_x23 = in_stack_00000148;
    }
    if (uVar31 < 2) {
      if (uVar31 == 1) {
        lVar12 = FUN_0400ff1c(in_stack_00000098,0,*unaff_x21);
        lVar16 = FUN_0400ff1c(in_stack_00000098,0,*unaff_x21);
        if (*(long *)(unaff_x26 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        fVar35 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),1,*(undefined8 *)puVar4);
        if (*(long *)(unaff_x26 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        fVar36 = fVar52;
        fVar44 = fVar55;
        fVar59 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)puVar4);
        if (DAT_06db4c75 == '\0') {
          FUN_02d965b8(PTR_DAT_069fbb48);
          DAT_06db4c75 = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        fVar35 = fVar35 - fVar59;
        fVar52 = fVar52 - fVar36;
        fVar55 = fVar55 - fVar44;
        fVar36 = SQRT(fVar55 * fVar55 + fVar35 * fVar35 + fVar52 * fVar52);
        if (fVar36 <= DAT_010fd13c) {
          if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
            FUN_02d965b8(plVar26);
            *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
          }
          pfVar24 = *(float **)(*plVar26 + 0xb8);
          fVar35 = *pfVar24;
          fVar52 = pfVar24[1];
          fVar55 = pfVar24[2];
        }
        else {
          fVar35 = fVar35 / fVar36;
          fVar52 = fVar52 / fVar36;
          fVar55 = fVar55 / fVar36;
        }
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        *(float *)(lVar16 + 0x94) = fVar35;
        *(float *)(lVar16 + 0x98) = fVar52;
        *(float *)(lVar16 + 0x9c) = fVar55;
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        *(float *)(lVar12 + 0x88) = fVar35;
        *(float *)(lVar12 + 0x8c) = fVar52;
        *(float *)(lVar12 + 0x90) = fVar55;
      }
    }
    else if ((long)uVar31 < (long)*(int *)(in_stack_00000098 + 0x18)) {
      if (*(long *)(unaff_x26 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      iVar30 = *(int *)(*(long *)(unaff_x26 + 0x78) + 0x18);
      lVar12 = FUN_0400ff1c(in_stack_00000098,uVar25 & 0xffffffff,*unaff_x21);
      puVar4 = PTR_DAT_069fd088;
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(int *)(lVar12 + 0xbc) + 1 < iVar30) {
        lVar12 = FUN_0400ff1c(in_stack_00000098,uVar25 & 0xffffffff,*unaff_x21);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(int *)(lVar12 + 0x6c) != 3) {
          lVar16 = *(long *)(unaff_x26 + 0x78);
          lVar12 = FUN_0400ff1c(in_stack_00000098,uVar25 & 0xffffffff,*unaff_x21);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          fVar44 = (float)FUN_0409f2f4(lVar16,*(int *)(lVar12 + 0xbc) + 1,*(undefined8 *)puVar4);
          lVar16 = *(long *)(unaff_x26 + 0x78);
          fVar35 = fVar52;
          fVar36 = fVar55;
          lVar12 = FUN_0400ff1c(in_stack_00000098,uVar25 & 0xffffffff,*unaff_x21);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          fVar59 = (float)FUN_0409f2f4(lVar16,*(undefined4 *)(lVar12 + 0xbc),*(undefined8 *)puVar4);
          lVar12 = FUN_0400ff1c(in_stack_00000098,uVar25 & 0xffffffff,*unaff_x21);
          if (DAT_06db4c75 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c75 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fVar63 = DAT_010fd13c;
          fVar44 = fVar44 - fVar59;
          fVar59 = fVar52 - fVar35;
          fVar36 = fVar55 - fVar36;
          fVar55 = SQRT(fVar36 * fVar36 + fVar44 * fVar44 + fVar59 * fVar59);
          if (fVar55 <= DAT_010fd13c) {
            if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
              FUN_02d965b8(plVar26);
              *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
            }
            pfVar24 = *(float **)(*plVar26 + 0xb8);
            fVar39 = *pfVar24;
            fVar59 = pfVar24[1];
            fVar55 = pfVar24[2];
          }
          else {
            fVar39 = fVar44 / fVar55;
            fVar59 = fVar59 / fVar55;
            fVar55 = fVar36 / fVar55;
          }
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          *(float *)(lVar12 + 0x88) = fVar39;
          *(float *)(lVar12 + 0x8c) = fVar59;
          uVar47 = *unaff_x21;
          *(float *)(lVar12 + 0x90) = fVar55;
          uVar53 = *(uint *)(in_stack_00000098 + 0x18);
          lVar12 = FUN_0400ff1c(in_stack_00000098,uVar25 & 0xffffffff,uVar47);
          if (uVar31 != uVar53) {
            fVar52 = fVar35;
          }
          if (DAT_06db4c75 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c75 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fVar52 = fVar52 - fVar35;
          fVar35 = SQRT(fVar36 * fVar36 + fVar44 * fVar44 + fVar52 * fVar52);
          if (fVar35 <= fVar63) {
            if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
              FUN_02d965b8(plVar26);
              *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
            }
            uVar47 = **(undefined8 **)(*plVar26 + 0xb8);
            fVar36 = *(float *)(*(undefined8 **)(*plVar26 + 0xb8) + 1);
          }
          else {
            fVar36 = fVar36 / fVar35;
            uVar47 = CONCAT44(fVar52 / fVar35,fVar44 / fVar35);
            fVar55 = fVar44;
          }
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          *(undefined8 *)(lVar12 + 0x94) = uVar47;
          *(float *)(lVar12 + 0x9c) = fVar36;
        }
      }
    }
    if ((long)uVar31 < (long)*(int *)(in_stack_00000098 + 0x18)) {
      lVar12 = FUN_0400ff1c(in_stack_00000098,uVar31 & 0xffffffff,*unaff_x21);
      lVar16 = FUN_0400ff1c(in_stack_00000098,uVar31 & 0xffffffff,*unaff_x21);
      if ((lVar16 == 0) || (lVar12 == 0)) goto LAB_03168190;
      uVar47 = *(undefined8 *)(lVar16 + 0x48);
      *(undefined4 *)(lVar12 + 0x5c) = *(undefined4 *)(lVar16 + 0x50);
      *(undefined8 *)(lVar12 + 0x54) = uVar47;
    }
    uVar31 = uVar1;
    unaff_x25 = in_stack_00000098;
    if ((long)(*(int *)(lVar11 + 0x18) + -2) <= (long)uVar1) goto LAB_0316df74;
    goto LAB_03169d3c;
  }
LAB_0316df74:
  if (*(char *)(unaff_x23 + 0x84) == '\0') {
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
    if ((*(long *)(unaff_x26 + 0x78) == 0) || (lVar11 == 0)) goto LAB_03168190;
    uVar47 = *unaff_x21;
    *(undefined4 *)(lVar11 + 0xbc) = *(undefined4 *)(*(long *)(unaff_x26 + 0x78) + 0x18);
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,uVar47);
    if (lVar11 == 0) goto LAB_03168190;
    uVar47 = *unaff_x21;
    *(float *)(lVar11 + 0xc0) = *pfVar15;
    lVar11 = FUN_0400ff1c(unaff_x25,0,uVar47);
    if (lVar11 == 0) goto LAB_03168190;
    uVar47 = *unaff_x21;
    *(undefined4 *)(lVar11 + 0xbc) = 0;
    lVar11 = FUN_0400ff1c(unaff_x25,0,uVar47);
    if (lVar11 == 0) goto LAB_03168190;
    *(undefined4 *)(lVar11 + 0xc0) = 0;
    if (*(int *)(unaff_x25 + 0x18) < 3) goto LAB_0316ea6c;
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
    fVar43 = *pfVar15;
    lVar12 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
    if ((lVar12 == 0) || (lVar11 == 0)) goto LAB_03168190;
    uVar47 = *unaff_x21;
    *(float *)(lVar11 + 200) = fVar43 - *(float *)(lVar12 + 0xc0);
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,uVar47);
    if (lVar11 == 0) goto LAB_03168190;
    fVar43 = *(float *)(lVar11 + 200);
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
    lVar12 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
    if (1000.0 <= fVar43) {
      if (lVar12 == 0) goto LAB_03168190;
      fStack00000000000001d0 = *(float *)(lVar12 + 200) / 1000.0;
      uVar47 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
      uVar47 = FUN_05362cb4(uVar47,*(undefined8 *)PTR_DAT_06a0c488,0);
    }
    else {
      if (lVar12 == 0) goto LAB_03168190;
      uVar47 = FUN_054fad00(lVar12 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
      uVar47 = FUN_05362cb4(uVar47,*(undefined8 *)PTR_DAT_06a0c4f0,0);
    }
    if (lVar11 == 0) goto LAB_03168190;
    *(undefined8 *)(lVar11 + 0xd0) = uVar47;
    LeanTween__value((undefined8 *)(lVar11 + 0xd0),uVar47);
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
    if (lVar11 == 0) goto LAB_03168190;
    fVar43 = *(float *)(lVar11 + 0x4c);
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
    if (lVar11 == 0) goto LAB_03168190;
    fVar48 = *(float *)(lVar11 + 0x4c);
    fVar55 = fVar43 - fVar48;
    if (DAT_06db4ece == '\0') {
      FUN_02d965b8(PTR_DAT_069fbb48);
      DAT_06db4ece = '\x01';
    }
    puVar4 = PTR_DAT_069fbb48;
    if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    fVar38 = 0.0;
    fVar50 = SQRT((fVar51 * fVar51 + fVar55 * fVar55) * DAT_010fd194);
    fVar55 = DAT_010fcd14;
    if (DAT_010fcd14 <= fVar50) {
      fVar55 = -1.0;
      fVar50 = (fVar51 * 0.0 + ABS(fVar43 - fVar48) * 50.0 + 0.0) / fVar50;
      fVar43 = 1.0;
      if (fVar50 <= 1.0) {
        fVar43 = fVar50;
      }
      fVar51 = -1.0;
      if (-1.0 <= fVar50) {
        fVar51 = fVar43;
      }
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        fVar55 = -1.0;
        thunk_FUN_02df485c();
      }
      dVar42 = acos((double)fVar51);
      fVar38 = (float)dVar42 * DAT_010fcf40;
    }
    fVar38 = 90.0 - fVar38;
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
    if (fVar38 <= 10.0) {
      uVar47 = FUN_054fad00(&stack0x00000234,*(undefined8 *)PTR_DAT_06a0c498,0);
    }
    else {
      dVar42 = modf((double)fVar38,(double *)&stack0x00000298);
      if (0.0 <= fVar38) {
        if (dVar42 == 0.5) {
          dVar42 = *(double *)(unaff_x26 + 0x80);
          fVar55 = 1.0;
          goto LAB_0316e5fc;
        }
        fStack00000000000001d0 = (float)(int)(fVar38 + 0.5);
      }
      else if (dVar42 == -0.5) {
        dVar42 = *(double *)(unaff_x26 + 0x80);
        fVar55 = -1.0;
LAB_0316e5fc:
        fStack00000000000001d0 = (float)dVar42;
        if (((long)dVar42 & 1U) != 0) {
          fStack00000000000001d0 = (float)dVar42 + fVar55;
        }
      }
      else {
        fStack00000000000001d0 = (float)(int)(fVar38 + -0.5);
      }
      uVar47 = FUN_054fabf8(&stack0x000001d0,0);
    }
    if (lVar11 == 0) goto LAB_03168190;
    *(undefined8 *)(lVar11 + 0xd8) = uVar47;
    LeanTween__value((undefined8 *)(lVar11 + 0xd8),uVar47);
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
    if (lVar11 == 0) goto LAB_03168190;
    fVar43 = *(float *)(lVar11 + 0x4c);
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
    if (lVar11 == 0) goto LAB_03168190;
    fVar51 = *(float *)(lVar11 + 0x4c);
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
    if (lVar11 == 0) goto LAB_03168190;
    fVar48 = *(float *)(lVar11 + 0x48);
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
    if (lVar11 == 0) goto LAB_03168190;
    fVar50 = *(float *)(lVar11 + 0x50);
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
    if (lVar11 == 0) goto LAB_03168190;
    fVar38 = *(float *)(lVar11 + 0x48);
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
    if (lVar11 == 0) goto LAB_03168190;
    fVar57 = *(float *)(lVar11 + 0x50);
    if (DAT_06db4c77 == '\0') {
      FUN_02d965b8(PTR_DAT_069fbb48);
      DAT_06db4c77 = '\x01';
    }
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    fVar50 = fVar50 - fVar57;
    fVar48 = fVar48 - fVar38;
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
    fStack00000000000001d0 =
         (ABS(fVar43 - fVar51) / SQRT(fVar48 * fVar48 + fVar50 * fVar50)) * 100.0;
    uVar47 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c498,0);
joined_r0x0316ea54:
    if (lVar11 == 0) goto LAB_03168190;
    *(undefined8 *)(lVar11 + 0xe0) = uVar47;
    LeanTween__value((undefined8 *)(lVar11 + 0xe0),uVar47);
  }
  else {
    lVar11 = FUN_0400ff1c(unaff_x25,0,*unaff_x21);
    if ((*(long *)(unaff_x26 + 0x78) == 0) || (lVar11 == 0)) goto LAB_03168190;
    uVar47 = *unaff_x21;
    *(undefined4 *)(lVar11 + 0xbc) = *(undefined4 *)(*(long *)(unaff_x26 + 0x78) + 0x18);
    lVar11 = FUN_0400ff1c(unaff_x25,0,uVar47);
    if (lVar11 == 0) goto LAB_03168190;
    *(float *)(lVar11 + 0xc0) = *pfVar15;
    if (2 < *(int *)(unaff_x25 + 0x18)) {
      lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
      fVar43 = *pfVar15;
      lVar12 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
      if ((lVar12 == 0) || (lVar11 == 0)) goto LAB_03168190;
      uVar47 = *unaff_x21;
      *(float *)(lVar11 + 200) = fVar43 - *(float *)(lVar12 + 0xc0);
      lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,uVar47);
      if (lVar11 == 0) goto LAB_03168190;
      fVar43 = *(float *)(lVar11 + 200);
      lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
      lVar12 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
      if (1000.0 <= fVar43) {
        if (lVar12 == 0) goto LAB_03168190;
        fStack00000000000001d0 = *(float *)(lVar12 + 200) / 1000.0;
        uVar47 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
        uVar47 = FUN_05362cb4(uVar47,*(undefined8 *)PTR_DAT_06a0c488,0);
      }
      else {
        if (lVar12 == 0) goto LAB_03168190;
        uVar47 = FUN_054fad00(lVar12 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
        uVar47 = FUN_05362cb4(uVar47,*(undefined8 *)PTR_DAT_06a0c4f0,0);
      }
      if (lVar11 == 0) goto LAB_03168190;
      *(undefined8 *)(lVar11 + 0xd0) = uVar47;
      LeanTween__value((undefined8 *)(lVar11 + 0xd0),uVar47);
      lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
      if (lVar11 == 0) goto LAB_03168190;
      fVar43 = *(float *)(lVar11 + 0x4c);
      lVar11 = FUN_0400ff1c(unaff_x25,0,*unaff_x21);
      if (lVar11 == 0) goto LAB_03168190;
      fVar48 = *(float *)(lVar11 + 0x4c);
      fVar55 = fVar43 - fVar48;
      if (DAT_06db4ece == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4ece = '\x01';
      }
      puVar4 = PTR_DAT_069fbb48;
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar38 = 0.0;
      fVar50 = SQRT((fVar51 * fVar51 + fVar55 * fVar55) * DAT_010fd194);
      fVar55 = DAT_010fcd14;
      if (DAT_010fcd14 <= fVar50) {
        fVar55 = -1.0;
        fVar50 = (fVar51 * 0.0 + ABS(fVar43 - fVar48) * 50.0 + 0.0) / fVar50;
        fVar43 = 1.0;
        if (fVar50 <= 1.0) {
          fVar43 = fVar50;
        }
        fVar51 = -1.0;
        if (-1.0 <= fVar50) {
          fVar51 = fVar43;
        }
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          fVar55 = -1.0;
          thunk_FUN_02df485c();
        }
        dVar42 = acos((double)fVar51);
        fVar38 = (float)dVar42 * DAT_010fcf40;
      }
      fVar38 = 90.0 - fVar38;
      lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
      if (fVar38 <= 10.0) {
        uVar47 = FUN_054fad00(&stack0x00000234,*(undefined8 *)PTR_DAT_06a0c498,0);
      }
      else {
        dVar42 = modf((double)fVar38,(double *)&stack0x00000298);
        if (0.0 <= fVar38) {
          if (dVar42 == 0.5) {
            dVar42 = *(double *)(unaff_x26 + 0x80);
            fVar55 = 1.0;
            goto LAB_0316e5d0;
          }
          fStack00000000000001d0 = (float)(int)(fVar38 + 0.5);
        }
        else if (dVar42 == -0.5) {
          dVar42 = *(double *)(unaff_x26 + 0x80);
          fVar55 = -1.0;
LAB_0316e5d0:
          fStack00000000000001d0 = (float)dVar42;
          if (((long)dVar42 & 1U) != 0) {
            fStack00000000000001d0 = (float)dVar42 + fVar55;
          }
        }
        else {
          fStack00000000000001d0 = (float)(int)(fVar38 + -0.5);
        }
        uVar47 = FUN_054fabf8(&stack0x000001d0,0);
      }
      if (lVar11 == 0) goto LAB_03168190;
      *(undefined8 *)(lVar11 + 0xd8) = uVar47;
      LeanTween__value((undefined8 *)(lVar11 + 0xd8),uVar47);
      lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
      if (lVar11 == 0) goto LAB_03168190;
      fVar43 = *(float *)(lVar11 + 0x4c);
      lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
      if (lVar11 == 0) goto LAB_03168190;
      fVar51 = *(float *)(lVar11 + 0x4c);
      lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
      if (lVar11 == 0) goto LAB_03168190;
      fVar48 = *(float *)(lVar11 + 0x48);
      lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
      if (lVar11 == 0) goto LAB_03168190;
      fVar50 = *(float *)(lVar11 + 0x50);
      lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
      if (lVar11 == 0) goto LAB_03168190;
      fVar38 = *(float *)(lVar11 + 0x48);
      lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
      if (lVar11 == 0) goto LAB_03168190;
      fVar57 = *(float *)(lVar11 + 0x50);
      if (DAT_06db4c77 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c77 = '\x01';
      }
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar50 = fVar50 - fVar57;
      fVar48 = fVar48 - fVar38;
      lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
      fStack00000000000001d0 =
           (ABS(fVar43 - fVar51) / SQRT(fVar48 * fVar48 + fVar50 * fVar50)) * 100.0;
      uVar47 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c498,0);
      goto joined_r0x0316ea54;
    }
  }
LAB_0316ea6c:
  fVar43 = 1000.0;
  if (1000.0 <= *pfVar15) {
    fVar43 = 1000.0;
    fStack00000000000001d0 = *pfVar15 / 1000.0;
    uVar47 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
    puVar17 = (undefined8 *)PTR_DAT_06a0c488;
  }
  else {
    uVar47 = FUN_054fad00(pfVar15,*(undefined8 *)PTR_DAT_06a0c498,0);
    puVar17 = (undefined8 *)PTR_DAT_06a0c4f0;
  }
  uVar47 = FUN_05362cb4(uVar47,*puVar17,0);
  *(undefined8 *)(unaff_x23 + 0x2d0) = uVar47;
  LeanTween__value(unaff_x23 + 0x2d0,uVar47);
  if (*(int *)(unaff_x25 + 0x18) == 2) {
    lVar11 = FUN_0400ff1c(unaff_x25,0,*unaff_x21);
    if (lVar11 == 0) goto LAB_03168190;
    fVar51 = *(float *)(lVar11 + 200);
    lVar11 = FUN_0400ff1c(unaff_x25,0,*unaff_x21);
    lVar12 = FUN_0400ff1c(unaff_x25,0,*unaff_x21);
    if (1000.0 <= fVar51) {
      if (lVar12 == 0) goto LAB_03168190;
      fVar43 = 1000.0;
      fStack00000000000001d0 = *(float *)(lVar12 + 200) / 1000.0;
      uVar47 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
      uVar47 = FUN_05362cb4(uVar47,*(undefined8 *)PTR_DAT_06a0c488,0);
    }
    else {
      if (lVar12 == 0) goto LAB_03168190;
      uVar47 = FUN_054fad00(lVar12 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
      uVar47 = FUN_05362cb4(uVar47,*(undefined8 *)PTR_DAT_06a0c4f0,0);
    }
    if (lVar11 == 0) goto LAB_03168190;
    *(undefined8 *)(lVar11 + 0xd0) = uVar47;
    LeanTween__value((undefined8 *)(lVar11 + 0xd0),uVar47);
  }
  if (*(char *)(unaff_x23 + 0x84) == '\0') {
    lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
    if (lVar11 == 0) goto LAB_03168190;
    *(undefined8 *)(lVar11 + 0xd0) = *(undefined8 *)PTR_DAT_069fcde0;
    LeanTween__value();
  }
  puVar5 = PTR_DAT_06a0b440;
  puVar4 = PTR_DAT_069fd088;
  fVar51 = fVar43;
  if (in_stack_00000058 == 0) {
LAB_0316ee54:
    puVar4 = PTR_DAT_069fd088;
    lVar11 = *(long *)(unaff_x26 + 0x78);
    if (lVar11 != 0) {
      fVar43 = (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -1,
                                   *(undefined8 *)PTR_DAT_069fd088);
      puVar5 = PTR_DAT_06a0b440;
      if (*(long *)(unaff_x26 + 0x78) != 0) {
        fVar48 = fVar51;
        FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)puVar4);
        lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*(undefined8 *)puVar5);
        puVar6 = PTR_DAT_06a0b7d0;
        puVar5 = PTR_DAT_069fbb48;
        if (lVar11 != 0) {
          fVar38 = *(float *)(lVar11 + 200) * 0.5;
          fVar50 = 5.0;
          if (fVar38 <= 5.0) {
            fVar50 = fVar38;
          }
          if (*(long *)(unaff_x26 + 0x78) != 0) {
            iVar30 = *(int *)(*(long *)(unaff_x26 + 0x78) + 0x18);
            if (0 < iVar30 + -2) {
              fVar57 = 0.0;
              iVar30 = iVar30 + -1;
              fVar38 = fStack000000000000005c * 10.0;
              uVar31 = (ulong)(uint)fVar43;
              uVar25 = (ulong)(uint)fVar55;
              do {
                fVar41 = (float)uVar31;
                fVar34 = (float)uVar25;
                if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
                fVar52 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar30,
                                             *(undefined8 *)puVar4);
                if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
                iVar30 = iVar30 + -1;
                fVar35 = fVar34;
                fVar36 = fVar41;
                fVar44 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar30,
                                             *(undefined8 *)puVar4);
                if (DAT_06db4c77 == '\0') {
                  FUN_02d965b8(puVar5);
                  DAT_06db4c77 = '\x01';
                }
                if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                fVar57 = fVar57 + SQRT((fVar41 - fVar36) * (fVar41 - fVar36) +
                                       (fVar52 - fVar44) * (fVar52 - fVar44) +
                                       (fVar34 - fVar35) * (fVar34 - fVar35));
                if (fVar50 < fVar57) break;
                if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
                FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar30,*(undefined8 *)puVar4);
                fVar34 = fVar55;
                fVar41 = (float)FUN_031765b0(fVar43,fVar51,fVar55,
                                             fStack0000000000000060 * 10.0 + fVar43,fVar48,
                                             fVar38 + fVar55,0);
                if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
                fVar35 = fVar34;
                fVar36 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar30,
                                             *(undefined8 *)puVar4);
                fVar44 = fVar57 / fVar50;
                fVar52 = 1.0;
                if (fVar44 <= 1.0) {
                  fVar52 = fVar44;
                }
                uVar25 = (ulong)(uint)fVar52;
                fVar59 = 0.0;
                if (0.0 <= fVar44) {
                  fVar59 = fVar52;
                }
                if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
                FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar30,*(undefined8 *)puVar4);
                if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
                uVar31 = (ulong)(uint)(fVar34 + fVar59 * (fVar35 - fVar34));
                FUN_0409f350(fVar41 + fVar59 * (fVar36 - fVar41),*(long *)(unaff_x26 + 0x78),iVar30,
                             *(undefined8 *)puVar6);
              } while (1 < iVar30);
            }
            puVar4 = PTR_DAT_06a0b440;
            lVar11 = FUN_0400ff1c(unaff_x25,0,*(undefined8 *)PTR_DAT_06a0b440);
            lVar12 = FUN_0400ff1c(unaff_x25,0,*(undefined8 *)puVar4);
            if (lVar12 != 0) {
              fVar43 = *(float *)(lVar12 + 0x94);
              lVar12 = FUN_0400ff1c(unaff_x25,0,*(undefined8 *)puVar4);
              if (lVar12 != 0) {
                fVar51 = *(float *)(lVar12 + 0x9c);
                if (DAT_06db4c75 == '\0') {
                  FUN_02d965b8(PTR_DAT_069fbb48);
                  DAT_06db4c75 = '\x01';
                }
                puVar5 = PTR_DAT_069fbb48;
                if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                fVar55 = DAT_010fd13c;
                fVar48 = SQRT(fVar43 * fVar43 + fVar51 * fVar51);
                if (fVar48 <= DAT_010fd13c) {
                  if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
                    FUN_02d965b8(PTR_DAT_069fb978);
                    *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
                  }
                  uVar47 = **(undefined8 **)(*plVar26 + 0xb8);
                  fVar51 = *(float *)(*(undefined8 **)(*plVar26 + 0xb8) + 1);
                }
                else {
                  fVar51 = fVar51 / fVar48;
                  uVar47 = CONCAT44(0.0 / fVar48,fVar43 / fVar48);
                }
                if (lVar11 != 0) {
                  *(undefined8 *)(lVar11 + 0x94) = uVar47;
                  uVar47 = *(undefined8 *)puVar4;
                  *(float *)(lVar11 + 0x9c) = fVar51;
                  lVar11 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,uVar47);
                  lVar12 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,
                                        *(undefined8 *)puVar4);
                  if (lVar12 != 0) {
                    fVar43 = *(float *)(lVar12 + 0x94);
                    lVar12 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,
                                          *(undefined8 *)puVar4);
                    if (lVar12 != 0) {
                      fVar51 = *(float *)(lVar12 + 0x9c);
                      if (DAT_06db4c75 == '\0') {
                        FUN_02d965b8(PTR_DAT_069fbb48);
                        DAT_06db4c75 = '\x01';
                      }
                      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                      }
                      fVar48 = SQRT(fVar43 * fVar43 + fVar51 * fVar51);
                      if (fVar48 <= fVar55) {
                        if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
                          FUN_02d965b8(PTR_DAT_069fb978);
                          *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
                        }
                        uVar47 = **(undefined8 **)(*plVar26 + 0xb8);
                        fVar51 = *(float *)(*(undefined8 **)(*plVar26 + 0xb8) + 1);
                      }
                      else {
                        fVar51 = fVar51 / fVar48;
                        uVar47 = CONCAT44(0.0 / fVar48,fVar43 / fVar48);
                      }
                      if (lVar11 != 0) {
                        uVar54 = *(undefined8 *)(unaff_x26 + 0x78);
                        *(undefined8 *)(lVar11 + 0x94) = uVar47;
                        *(float *)(lVar11 + 0x9c) = fVar51;
                        return uVar54;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else if (*(long *)(unaff_x26 + 0x78) != 0) {
    fVar48 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)PTR_DAT_069fd088);
    if (*(long *)(unaff_x26 + 0x78) != 0) {
      FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)puVar4);
      lVar11 = FUN_0400ff1c(unaff_x25,0,*(undefined8 *)puVar5);
      puVar6 = PTR_DAT_06a0b7d0;
      puVar5 = PTR_DAT_069fbb48;
      if (lVar11 != 0) {
        lVar12 = *(long *)(unaff_x26 + 0x78);
        fVar51 = *(float *)(lVar11 + 200) * 0.5;
        fVar50 = 5.0;
        if (fVar51 <= 5.0) {
          fVar50 = fVar51;
        }
        if (lVar12 != 0) {
          uVar25 = (ulong)(uint)fStack0000000000000054;
          iVar30 = 1;
          fVar48 = fStack0000000000000050 * 10.0 + fVar48;
          uVar31 = (ulong)(uint)fVar48;
          fVar38 = fStack0000000000000054 * 10.0 + fVar55;
          fVar57 = 0.0;
          do {
            fVar55 = (float)uVar25;
            fVar51 = (float)uVar31;
            if (*(int *)(lVar12 + 0x18) <= iVar30) goto LAB_0316ee54;
            fVar34 = (float)FUN_0409f2f4(lVar12,iVar30 + -1,*(undefined8 *)puVar4);
            if (*(long *)(unaff_x26 + 0x78) == 0) break;
            fVar41 = fVar51;
            fVar52 = fVar55;
            fVar35 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar30,*(undefined8 *)puVar4);
            if (DAT_06db4c77 == '\0') {
              FUN_02d965b8(puVar5);
              DAT_06db4c77 = '\x01';
            }
            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            fVar41 = fVar51 - fVar41;
            fVar55 = fVar55 - fVar52;
            fVar51 = fVar55 * fVar55;
            fVar57 = fVar57 + SQRT(fVar51 + (fVar34 - fVar35) * (fVar34 - fVar35) + fVar41 * fVar41)
            ;
            if (fVar50 < fVar57) goto LAB_0316ee54;
            if (*(long *)(unaff_x26 + 0x78) == 0) break;
            uVar49 = FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)puVar4);
            if (*(long *)(unaff_x26 + 0x78) == 0) break;
            FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar30,*(undefined8 *)puVar4);
            fVar51 = (float)FUN_031765b0(uVar49,fVar51,fVar55,fVar48,fVar43,fVar38,0);
            if (*(long *)(unaff_x26 + 0x78) == 0) break;
            fVar41 = fVar55;
            fVar52 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar30,*(undefined8 *)puVar4);
            fVar35 = fVar57 / fVar50;
            fVar34 = 1.0;
            if (fVar35 <= 1.0) {
              fVar34 = fVar35;
            }
            uVar31 = (ulong)(uint)fVar34;
            fVar36 = 0.0;
            if (0.0 <= fVar35) {
              fVar36 = fVar34;
            }
            if (*(long *)(unaff_x26 + 0x78) == 0) break;
            FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar30,*(undefined8 *)puVar4);
            if (*(long *)(unaff_x26 + 0x78) == 0) break;
            uVar25 = (ulong)(uint)(fVar55 + fVar36 * (fVar41 - fVar55));
            FUN_0409f350(fVar51 + fVar36 * (fVar52 - fVar51),*(long *)(unaff_x26 + 0x78),iVar30,
                         *(undefined8 *)puVar6);
            lVar12 = *(long *)(unaff_x26 + 0x78);
            iVar30 = iVar30 + 1;
          } while (lVar12 != 0);
        }
      }
    }
  }
LAB_03168190:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


