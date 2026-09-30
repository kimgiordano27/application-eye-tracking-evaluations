/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 03169638
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


undefined8
System_Array__InternalArray__ICollection_Contains<OVRPassthroughLayer_SerializedSurfaceGeometry>
          (float param_1,undefined8 param_2)

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined8 extraout_x1;
  ulong extraout_x1_00;
  char cVar15;
  int in_w8;
  float *pfVar16;
  undefined8 *puVar17;
  long lVar18;
  ulong uVar19;
  float *pfVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  float *pfVar24;
  long lVar25;
  ulong uVar26;
  undefined8 *unaff_x21;
  long *plVar27;
  int iVar28;
  byte bVar29;
  int iVar30;
  long unaff_x23;
  int iVar31;
  long *unaff_x24;
  ulong uVar32;
  long unaff_x25;
  undefined4 *puVar33;
  undefined1 *unaff_x26;
  float *pfVar34;
  undefined8 *unaff_x28;
  undefined **unaff_x29;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  double dVar44;
  float fVar45;
  float fVar46;
  ulong uVar47;
  float fVar48;
  undefined8 uVar49;
  undefined4 uVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  uint uVar54;
  undefined8 uVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined8 uVar59;
  float fVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  float fVar63;
  float fVar64;
  undefined4 uVar65;
  float fVar66;
  float fVar67;
  int iVar68;
  float fStack0000000000000050;
  float fStack0000000000000054;
  int iStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
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
  
  fStack0000000000000068 = param_1;
  if (in_w8 == 0) {
    bVar2 = false;
  }
  else {
    lVar25 = *(long *)(unaff_x26 + 0x70);
    if (lVar25 == 0) goto LAB_03168190;
    iVar31 = *(int *)(lVar25 + 0x18);
    lVar12 = FUN_0634bb04(param_2,0);
    puVar5 = PTR_DAT_06a0b3f8;
    if ((((*(long *)(in_stack_00000148 + 0x2e0) == 0) ||
         (lVar13 = *(long *)(*(long *)(in_stack_00000148 + 0x2e0) + 0x20), lVar13 == 0)) ||
        (lVar13 = FUN_0400ff1c(lVar13,*(undefined4 *)(in_stack_00000148 + 0x2f0),
                               *(undefined8 *)PTR_DAT_06a0b3f8), lVar13 == 0)) || (lVar12 == 0))
    goto LAB_03168190;
    FUN_0635bd78(*(undefined4 *)(lVar13 + 0x48),*(undefined4 *)(lVar13 + 0x4c),
                 *(undefined4 *)(lVar13 + 0x50),lVar12,0);
    FUN_0409f350(lVar25,iVar31 + -1,*(undefined8 *)PTR_DAT_06a0b7d0);
    if (*(long *)(in_stack_00000148 + 0x2e0) == 0) goto LAB_03168190;
    lVar25 = FUN_0634bb04(*(long *)(in_stack_00000148 + 0x2e0),0);
    unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
    if (((*(long *)(in_stack_00000148 + 0x2e0) == 0) ||
        (lVar12 = *(long *)(*(long *)(in_stack_00000148 + 0x2e0) + 0x20), lVar12 == 0)) ||
       ((lVar12 = FUN_0400ff1c(lVar12,*(undefined4 *)(in_stack_00000148 + 0x2f0),
                               *(undefined8 *)puVar5), lVar12 == 0 || (lVar25 == 0))))
    goto LAB_03168190;
    fVar45 = *(float *)(lVar12 + 0x14);
    fStack000000000000005c = *(float *)(lVar12 + 0x18);
    fStack0000000000000060 = (float)FUN_0635bd78(*(undefined4 *)(lVar12 + 0x10),lVar25,0);
    lVar25 = *(long *)(unaff_x26 + 0x70);
    if (lVar25 == 0) goto LAB_03168190;
    fVar52 = fVar45;
    fVar56 = fStack000000000000005c;
    fVar35 = (float)FUN_0409f2f4(lVar25,*(int *)(lVar25 + 0x18) + -1,*(undefined8 *)PTR_DAT_069fd088
                                );
    if (DAT_06db4c75 == '\0') {
      FUN_02d965b8(PTR_DAT_069fbb48);
      DAT_06db4c75 = '\x01';
    }
    fStack0000000000000060 = fStack0000000000000060 - fVar35;
    fStack000000000000005c = fStack000000000000005c - fVar56;
    if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    fVar45 = SQRT(fStack000000000000005c * fStack000000000000005c +
                  fStack0000000000000060 * fStack0000000000000060 +
                  (fVar45 - fVar52) * (fVar45 - fVar52));
    if (fVar45 <= DAT_010fd13c) {
      if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
        FUN_02d965b8(PTR_DAT_069fb978);
        *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
      }
      fStack0000000000000060 = **(float **)(*(long *)PTR_DAT_069fb978 + 0xb8);
      fStack000000000000005c = (*(float **)(*(long *)PTR_DAT_069fb978 + 0xb8))[2];
    }
    else {
      fStack0000000000000060 = fStack0000000000000060 / fVar45;
      fStack000000000000005c = fStack000000000000005c / fVar45;
    }
    bVar2 = true;
    unaff_x23 = in_stack_00000148;
  }
  if (*(long *)(unaff_x23 + 0x2e0) == 0) goto LAB_03168190;
  if (*(char *)(*(long *)(unaff_x23 + 0x2e0) + 0x171) != '\0') {
    *(undefined1 *)(unaff_x23 + 0x2f7) = 1;
  }
  if ((*(long *)(unaff_x26 + 0x70) == 0) ||
     (lVar25 = FUN_040a10b0(*(long *)(unaff_x26 + 0x70),*(undefined8 *)PTR_DAT_069fbee8),
     lVar25 == 0)) goto LAB_03168190;
  if ((*(uint *)(lVar25 + 0x18) & 0xfffffffe) == 0) {
LAB_0316f2c4:
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
  fStack0000000000000130 = *(float *)(lVar25 + 0x2c);
  fStack0000000000000128 = *(float *)(lVar25 + 0x30);
  fStack000000000000012c = *(float *)(lVar25 + 0x34);
  if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
    FUN_02d965b8(PTR_DAT_069fb978);
    *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
  }
  uVar54 = *(uint *)(lVar25 + 0x18);
  pfVar16 = *(float **)(*(long *)PTR_DAT_069fb978 + 0xb8);
  fStack000000000000008c = *pfVar16;
  fStack0000000000000088 = pfVar16[1];
  fStack0000000000000084 = pfVar16[2];
  *(undefined4 *)(unaff_x23 + 0x2c0) = 0;
  if (uVar54 == 0) goto LAB_0316f2c4;
  fVar45 = *(float *)(lVar25 + 0x28);
  *(undefined8 *)(unaff_x26 + 0x50) = *(undefined8 *)(lVar25 + 0x20);
  if (uVar54 < 4) goto LAB_0316f2c4;
  uVar49 = *(undefined8 *)pfVar16;
  lVar12 = *(long *)(unaff_x23 + 0x68);
  *(undefined8 *)(unaff_x26 + 0x40) = *(undefined8 *)(lVar25 + 0x44);
  *(undefined8 *)(unaff_x26 + 0x30) = uVar49;
  if (lVar12 == 0) goto LAB_03168190;
  if (*(int *)(lVar12 + 0x18) == 0) {
    return 0;
  }
  lVar13 = *(long *)(unaff_x23 + 0x2c8);
  if (lVar13 == 0) goto LAB_03168190;
  lVar21 = *(long *)(lVar13 + 0x10);
  lVar23 = *(long *)PTR_DAT_069fc3e0;
  *(undefined4 *)(lVar13 + 0x18) = 0;
  *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 2;
  if (lVar21 == 0) goto LAB_03168190;
  if (*(int *)(lVar21 + 0x18) == 0) {
    FUN_03fb3e1c(lVar13,0,*(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
    lVar12 = *(long *)(unaff_x23 + 0x68);
    if (lVar12 == 0) goto LAB_03168190;
  }
  else {
    *(undefined4 *)(lVar13 + 0x18) = 1;
    *(undefined4 *)(lVar21 + 0x20) = 0;
  }
  lVar12 = FUN_0400ff1c(lVar12,1,*unaff_x21);
  if (lVar12 == 0) goto LAB_03168190;
  if (*(int *)(lVar12 + 0x6c) == 3) {
    if (*(long *)(unaff_x23 + 0x68) == 0) goto LAB_03168190;
    if (2 < *(int *)(*(long *)(unaff_x23 + 0x68) + 0x18)) {
      if (*(uint *)(lVar25 + 0x18) < 3) goto LAB_0316f2c4;
      fVar52 = *(float *)(lVar25 + 0x40);
      uVar49 = *(undefined8 *)(lVar25 + 0x38);
      uVar55 = *(undefined8 *)(lVar25 + 0x2c);
      fVar56 = *(float *)(lVar25 + 0x34);
      if (DAT_06db4c75 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c75 = '\x01';
      }
      puVar5 = PTR_DAT_069fbb48;
      fVar35 = (float)uVar49 - (float)uVar55;
      fVar51 = (float)((ulong)uVar49 >> 0x20) - (float)((ulong)uVar55 >> 0x20);
      fVar52 = fVar52 - fVar56;
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar52 = SQRT(fVar52 * fVar52 + fVar35 * fVar35 + fVar51 * fVar51);
      if (fVar52 <= DAT_010fd13c) {
        if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
          FUN_02d965b8(PTR_DAT_069fb978);
          *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
        }
        uVar49 = **(undefined8 **)(*(long *)PTR_DAT_069fb978 + 0xb8);
      }
      else {
        uVar49 = CONCAT44(fVar51 / fVar52,fVar35 / fVar52);
      }
      if ((*(uint *)(lVar25 + 0x18) < 3) || (*(uint *)(lVar25 + 0x18) == 3)) goto LAB_0316f2c4;
      uVar55 = *(undefined8 *)(lVar25 + 0x38);
      fVar52 = *(float *)(lVar25 + 0x40);
      uVar59 = *(undefined8 *)(lVar25 + 0x44);
      fVar56 = *(float *)(lVar25 + 0x4c);
      if (DAT_06db4c77 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c77 = '\x01';
      }
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar40 = (float)uVar55;
      fVar35 = fVar40 - (float)uVar59;
      fVar58 = (float)((ulong)uVar55 >> 0x20);
      fVar51 = fVar58 - (float)((ulong)uVar59 >> 0x20);
      fVar52 = fVar52 - fVar56;
      uVar54 = *(uint *)(lVar25 + 0x18);
      fVar52 = SQRT(fVar52 * fVar52 + fVar35 * fVar35 + fVar51 * fVar51);
      *(ulong *)(unaff_x26 + 0x40) =
           CONCAT44(fVar58 + (float)((ulong)uVar49 >> 0x20) * fVar52,fVar40 + (float)uVar49 * fVar52
                   );
      if ((uVar54 & 0xfffffffc) == 0) goto LAB_0316f2c4;
    }
  }
  lVar12 = *unaff_x24;
  if (lVar12 == 0) goto LAB_03168190;
  lVar13 = *(long *)(lVar12 + 0x10);
  lVar21 = *(long *)PTR_DAT_069ff178;
  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
  if (lVar13 == 0) goto LAB_03168190;
  uVar54 = *(uint *)(lVar12 + 0x18);
  if (uVar54 < *(uint *)(lVar13 + 0x18)) {
    *(uint *)(lVar12 + 0x18) = uVar54 + 1;
    *(undefined4 *)(lVar13 + (long)(int)uVar54 * 4 + 0x20) = 0;
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
  uVar49 = *(undefined8 *)PTR_DAT_069ff188;
  *(undefined4 *)(lVar12 + 0x18) = 0;
  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
  uVar49 = thunk_FUN_02dd3144(uVar49);
  FUN_040594d0(uVar49,*(undefined8 *)PTR_DAT_069ff180);
  uVar55 = *unaff_x28;
  *(undefined8 *)(unaff_x26 + 0x28) = uVar49;
  uVar49 = thunk_FUN_02dd3144(uVar55);
  FUN_0409ed5c(uVar49,*(undefined8 *)PTR_DAT_069fbef0);
  cVar15 = *(char *)((long)unaff_x29 + 0xc71);
  *(undefined8 *)(unaff_x26 + 0x20) = uVar49;
  fVar52 = 0.0;
  if (cVar15 == '\0') {
    FUN_02d965b8(PTR_DAT_069fb978);
    *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
  }
  pfVar16 = *(float **)(*(long *)PTR_DAT_069fb978 + 0xb8);
  fStack00000000000000f8 = *pfVar16;
  fStack00000000000000f4 = pfVar16[1];
  fVar56 = pfVar16[2];
  fVar35 = *(float *)(unaff_x23 + 0x7c);
  pfVar16 = (float *)(unaff_x23 + 0x2c0);
  plVar27 = (long *)PTR_DAT_069fb978;
  if (1 < *(int *)(lVar25 + 0x18) + -2) {
    fVar43 = 0.0;
    iStack00000000000000d4 = 0;
    iStack0000000000000108 = 0;
    bVar3 = false;
    fVar36 = fStack000000000000010c * 0.5;
    uStack0000000000000110 = (ulong)(uint)fStack0000000000000130;
    uVar32 = 1;
    fStack00000000000000f0 = fVar56;
    fStack00000000000000fc = fVar56;
    fStack0000000000000100 = fStack00000000000000f4;
    fStack0000000000000104 = fStack00000000000000f8;
    fStack0000000000000164 = fStack000000000000012c;
    fVar58 = fStack000000000000008c;
    fVar40 = fStack0000000000000088;
    fVar51 = fStack0000000000000084;
LAB_03169d3c:
    uVar26 = uVar32 - 1;
    fStack00000000000001d4 = 0.0;
    lVar12 = FUN_0400ff1c(unaff_x25,uVar26 & 0xffffffff,*unaff_x21);
    if ((*(long *)(unaff_x26 + 0x78) == 0) || (lVar12 == 0)) goto LAB_03168190;
    uVar49 = *unaff_x21;
    *(undefined4 *)(lVar12 + 0xbc) = *(undefined4 *)(*(long *)(unaff_x26 + 0x78) + 0x18);
    lVar12 = FUN_0400ff1c(unaff_x25,uVar26 & 0xffffffff,uVar49);
    if (lVar12 == 0) goto LAB_03168190;
    *(float *)(lVar12 + 0xc0) = *pfVar16;
    iVar31 = (int)uVar32;
    if (1 < uVar32) {
      if (uVar32 == 2) {
        lVar12 = FUN_0400ff1c(unaff_x25,0,*unaff_x21);
        if (lVar12 == 0) goto LAB_03168190;
        iVar28 = 0;
        fVar56 = *pfVar16;
      }
      else {
        iVar28 = iVar31 + -2;
        lVar12 = FUN_0400ff1c(unaff_x25,iVar28,*unaff_x21);
        fVar56 = *pfVar16;
        lVar13 = FUN_0400ff1c(unaff_x25,iVar28,*unaff_x21);
        if ((lVar13 == 0) || (lVar12 == 0)) goto LAB_03168190;
        fVar56 = fVar56 - *(float *)(lVar13 + 0xc0);
      }
      puVar5 = PTR_DAT_06a0b440;
      *(float *)(lVar12 + 200) = fVar56;
      lVar12 = FUN_0400ff1c(unaff_x25,iVar28,*(undefined8 *)puVar5);
      if (lVar12 == 0) goto LAB_03168190;
      fVar56 = *(float *)(lVar12 + 200);
      lVar12 = FUN_0400ff1c(unaff_x25,iVar28,*(undefined8 *)puVar5);
      lVar13 = FUN_0400ff1c(unaff_x25,iVar28,*(undefined8 *)puVar5);
      if (1000.0 <= fVar56) {
        if (lVar13 == 0) goto LAB_03168190;
        fStack00000000000001d0 = *(float *)(lVar13 + 200) / 1000.0;
        uVar49 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
        puVar17 = (undefined8 *)PTR_DAT_06a0c488;
      }
      else {
        if (lVar13 == 0) goto LAB_03168190;
        uVar49 = FUN_054fad00(lVar13 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
        puVar17 = (undefined8 *)PTR_DAT_06a0c4f0;
      }
      uVar49 = FUN_05362cb4(uVar49,*puVar17,0);
      if (lVar12 == 0) goto LAB_03168190;
      *(undefined8 *)(lVar12 + 0xd0) = uVar49;
      LeanTween__value((undefined8 *)(lVar12 + 0xd0),uVar49);
      puVar5 = PTR_DAT_06a0b440;
      lVar12 = FUN_0400ff1c(unaff_x25,iVar28,*(undefined8 *)PTR_DAT_06a0b440);
      if (lVar12 == 0) goto LAB_03168190;
      fVar56 = *(float *)(lVar12 + 0x4c);
      lVar12 = FUN_0400ff1c(unaff_x25,uVar26 & 0xffffffff,*(undefined8 *)puVar5);
      if (lVar12 == 0) goto LAB_03168190;
      fVar53 = *(float *)(lVar12 + 0x4c);
      if (DAT_06db4ece == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4ece = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar37 = fVar56 - fVar53;
      fVar46 = 0.0;
      fVar38 = SQRT((fVar52 * fVar52 + fVar37 * fVar37) * DAT_010fd194);
      fVar37 = DAT_010fcd14;
      if (DAT_010fcd14 <= fVar38) {
        fVar37 = -1.0;
        fVar38 = (fVar52 * 0.0 + ABS(fVar56 - fVar53) * 50.0 + 0.0) / fVar38;
        fVar52 = 1.0;
        if (fVar38 <= 1.0) {
          fVar52 = fVar38;
        }
        fVar56 = -1.0;
        if (-1.0 <= fVar38) {
          fVar56 = fVar52;
        }
        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
          fVar37 = -1.0;
          thunk_FUN_02df485c();
        }
        dVar44 = acos((double)fVar56);
        fVar46 = (float)dVar44 * DAT_010fcf40;
      }
      fVar46 = 90.0 - fVar46;
      lVar12 = FUN_0400ff1c(unaff_x25,iVar28,*(undefined8 *)puVar5);
      if (fVar46 <= 10.0) {
        uVar49 = FUN_054fad00(&stack0x00000234,*(undefined8 *)PTR_DAT_06a0c498,0);
        puVar17 = (undefined8 *)PTR_DAT_069fd088;
      }
      else {
        dVar44 = modf((double)fVar46,(double *)&stack0x00000298);
        puVar17 = (undefined8 *)PTR_DAT_069fd088;
        if (0.0 <= fVar46) {
          if (dVar44 == 0.5) {
            dVar44 = *(double *)(unaff_x26 + 0x80);
            fVar52 = 1.0;
            goto LAB_0316a098;
          }
          fStack00000000000001d0 = (float)(int)(fVar46 + 0.5);
        }
        else if (dVar44 == -0.5) {
          dVar44 = *(double *)(unaff_x26 + 0x80);
          fVar52 = -1.0;
LAB_0316a098:
          fStack00000000000001d0 = (float)dVar44;
          if (((long)dVar44 & 1U) != 0) {
            fStack00000000000001d0 = (float)dVar44 + fVar52;
          }
        }
        else {
          fStack00000000000001d0 = (float)(int)(fVar46 + -0.5);
        }
        uVar49 = FUN_054fabf8(&stack0x000001d0,0);
      }
      if (lVar12 == 0) goto LAB_03168190;
      *(undefined8 *)(lVar12 + 0xd8) = uVar49;
      LeanTween__value((undefined8 *)(lVar12 + 0xd8),uVar49);
      unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
      lVar12 = FUN_0400ff1c(unaff_x25,iVar28,*(undefined8 *)PTR_DAT_06a0b440);
      if (lVar12 == 0) goto LAB_03168190;
      fVar52 = *(float *)(lVar12 + 0x4c);
      lVar12 = FUN_0400ff1c(unaff_x25,uVar26 & 0xffffffff,*unaff_x21);
      if (lVar12 == 0) goto LAB_03168190;
      fVar56 = *(float *)(lVar12 + 0x4c);
      lVar12 = FUN_0400ff1c(unaff_x25,iVar28,*unaff_x21);
      if (lVar12 == 0) goto LAB_03168190;
      fVar53 = *(float *)(lVar12 + 0x48);
      lVar12 = FUN_0400ff1c(unaff_x25,iVar28,*unaff_x21);
      if (lVar12 == 0) goto LAB_03168190;
      fVar38 = *(float *)(lVar12 + 0x50);
      lVar12 = FUN_0400ff1c(unaff_x25,uVar26 & 0xffffffff,*unaff_x21);
      if (lVar12 == 0) goto LAB_03168190;
      fVar46 = *(float *)(lVar12 + 0x48);
      lVar12 = FUN_0400ff1c(unaff_x25,uVar26 & 0xffffffff,*unaff_x21);
      if (lVar12 == 0) goto LAB_03168190;
      fVar60 = *(float *)(lVar12 + 0x50);
      if (DAT_06db4c77 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c77 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar38 = fVar38 - fVar60;
      fVar53 = fVar53 - fVar46;
      lVar12 = FUN_0400ff1c(unaff_x25,iVar28,*unaff_x21);
      fVar46 = 100.0;
      fStack00000000000001d0 =
           (ABS(fVar52 - fVar56) / SQRT(fVar53 * fVar53 + fVar38 * fVar38)) * 100.0;
      uVar49 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c498,0);
      if (lVar12 == 0) goto LAB_03168190;
      *(undefined8 *)(lVar12 + 0xe0) = uVar49;
      LeanTween__value((undefined8 *)(lVar12 + 0xe0),uVar49);
      lVar12 = *(long *)(unaff_x26 + 0x78);
      if (lVar12 == 0) goto LAB_03168190;
      unaff_x23 = in_stack_00000148;
      if (2 < *(int *)(lVar12 + 0x18)) {
        fStack0000000000000104 = (float)FUN_0409f2f4(lVar12,*(int *)(lVar12 + 0x18) + -1,*puVar17);
        lVar12 = *(long *)(unaff_x26 + 0x78);
        if (lVar12 == 0) goto LAB_03168190;
        fVar52 = fVar46;
        fVar56 = fVar37;
        fVar53 = (float)FUN_0409f2f4(lVar12,*(int *)(lVar12 + 0x18) + -2,*puVar17);
        if (DAT_06db4c75 == '\0') {
          FUN_02d965b8(PTR_DAT_069fbb48);
          DAT_06db4c75 = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        fStack0000000000000104 = fStack0000000000000104 - fVar53;
        fVar46 = fVar46 - fVar52;
        fVar37 = fVar37 - fVar56;
        fStack00000000000000fc =
             SQRT(fVar37 * fVar37 +
                  fStack0000000000000104 * fStack0000000000000104 + fVar46 * fVar46);
        if (fStack00000000000000fc <= DAT_010fd13c) {
          if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
            FUN_02d965b8(plVar27);
            *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
          }
          pfVar24 = *(float **)(*plVar27 + 0xb8);
          fStack0000000000000104 = *pfVar24;
          fStack0000000000000100 = pfVar24[1];
          fStack00000000000000fc = pfVar24[2];
        }
        else {
          fStack0000000000000104 = fStack0000000000000104 / fStack00000000000000fc;
          fStack0000000000000100 = fVar46 / fStack00000000000000fc;
          fStack00000000000000fc = fVar37 / fStack00000000000000fc;
        }
      }
    }
    lVar12 = *(long *)(unaff_x26 + 0x28);
    if (lVar12 == 0) goto LAB_03168190;
    lVar13 = *(long *)(unaff_x26 + 0x20);
    *(undefined4 *)(lVar12 + 0x18) = 0;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    if (lVar13 == 0) goto LAB_03168190;
    fVar52 = 0.0;
    *(undefined4 *)(lVar13 + 0x18) = 0;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    if ((*(uint *)(lVar25 + 0x18) <= uVar32) ||
       (uVar1 = uVar32 + 1, *(uint *)(lVar25 + 0x18) <= uVar1)) goto LAB_0316f2c4;
    lVar12 = lVar25 + uVar32 * 0xc;
    lVar13 = lVar25 + uVar1 * 0xc;
    fVar53 = *pfVar16;
    pfVar24 = (float *)(lVar12 + 0x20);
    fVar38 = *pfVar24;
    fVar56 = *(float *)(lVar12 + 0x24);
    fVar37 = *(float *)(lVar12 + 0x28);
    pfVar34 = (float *)(lVar13 + 0x20);
    fVar46 = *pfVar34;
    fVar64 = *(float *)(lVar13 + 0x24);
    fVar60 = *(float *)(lVar13 + 0x28);
    if (DAT_06db4c77 == '\0') {
      FUN_02d965b8(PTR_DAT_069fbb48);
      DAT_06db4c77 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if ((*(long *)(unaff_x23 + 0x68) == 0) ||
       (lVar21 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar26 & 0xffffffff,*unaff_x21),
       lVar21 == 0)) goto LAB_03168190;
    fVar56 = fVar56 - fVar64;
    fVar37 = fVar37 - fVar60;
    uVar47 = (ulong)(uint)fVar37;
    uVar19 = (ulong)(uint)(fVar37 * fVar37);
    fVar53 = fVar53 + SQRT(fVar37 * fVar37 + (fVar38 - fVar46) * (fVar38 - fVar46) + fVar56 * fVar56
                          );
    if (*(int *)(lVar21 + 0x6c) == 0) {
      if ((*(uint *)(lVar25 + 0x18) <= uVar32) || (*(uint *)(lVar25 + 0x18) <= uVar1))
      goto LAB_0316f2c4;
      fVar38 = *pfVar24;
      fVar56 = *(float *)(lVar12 + 0x24);
      fVar46 = *pfVar34;
      fVar64 = *(float *)(lVar13 + 0x24);
      fVar37 = *(float *)(lVar12 + 0x28);
      fVar60 = *(float *)(lVar13 + 0x28);
      if (DAT_06db4c77 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c77 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (uVar32 < 2) {
        bVar10 = false;
      }
      else {
        if (*(long *)(unaff_x23 + 0x68) == 0) goto LAB_03168190;
        lVar21 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),iVar31 + -2,*unaff_x21);
        if (lVar21 == 0) goto LAB_03168190;
        if (*(int *)(lVar21 + 0x6c) == 1) {
          bVar10 = true;
        }
        else {
          if ((*(long *)(unaff_x23 + 0x68) == 0) ||
             (lVar21 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),iVar31 + -2,*unaff_x21), lVar21 == 0
             )) goto LAB_03168190;
          bVar10 = *(int *)(lVar21 + 0x6c) == 2;
        }
      }
      fVar41 = 0.0;
      if (uVar32 == 1) {
        fVar41 = fStack0000000000000064;
      }
      fVar66 = fStack0000000000000068;
      if (uVar32 != *(int *)(lVar25 + 0x18) - 3) {
        fVar66 = 1.0;
      }
      if (fVar66 <= fVar41) {
        iStack0000000000000108 = 0;
      }
      else {
        fVar56 = fVar56 - fVar64;
        fVar37 = fVar37 - fVar60;
        fVar56 = DAT_010fcf10 /
                 SQRT(fVar37 * fVar37 + (fVar38 - fVar46) * (fVar38 - fVar46) + fVar56 * fVar56);
        do {
          uVar19 = *(ulong *)(lVar25 + 0x18);
          if (fVar56 + fVar41 <= 1.0) {
            bVar29 = 0;
          }
          else if (uVar32 == (int)uVar19 - 3) {
            bVar29 = *(byte *)(unaff_x23 + 0x84) ^ 1;
          }
          else {
            bVar29 = 0;
          }
          bVar11 = bVar29 != 0;
          fVar37 = 1.0;
          if (!bVar11) {
            fVar37 = fVar41;
          }
          if (((uVar19 & 0xffffffff) <= uVar32) || ((uVar19 & 0xffffffff) <= uVar1))
          goto LAB_0316f2c4;
          uVar61 = *(undefined4 *)(lVar12 + 0x24);
          uVar50 = *(undefined4 *)(lVar12 + 0x28);
          fVar38 = *pfVar24;
          FUN_04059a68(in_stack_000000c8,uVar32 & 0xffffffff,*(undefined8 *)PTR_DAT_06a0a108);
          fVar60 = in_stack_0000026c;
          fVar64 = fVar45;
          fVar41 = (float)FUN_0316f340(in_stack_00000268,in_stack_0000026c,fVar45,fVar38,uVar61,
                                       uVar50);
          _fStack00000000000001c0 = CONCAT44(fVar60,fVar41);
          fVar38 = fStack0000000000000164;
          fVar46 = (float)uStack0000000000000110;
          if (iStack0000000000000108 == 3) {
            iStack0000000000000108 = 0;
            fVar38 = fVar64;
            fVar46 = fVar41;
            fStack0000000000000128 = fVar60;
            fStack000000000000012c = fVar64;
            fStack0000000000000130 = fVar41;
          }
          unaff_x29 = &PTR_FUN_06db4000;
          in_stack_000001c8 = fVar64;
          if (DAT_06db4c77 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c77 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fVar42 = in_stack_000001c8;
          if (*(uint *)(lVar25 + 0x18) <= uVar1) goto LAB_0316f2c4;
          fVar63 = *pfVar34;
          fVar57 = *(float *)(lVar13 + 0x24);
          fVar48 = fStack00000000000001c0;
          fVar39 = fStack00000000000001c4;
          fVar67 = *(float *)(lVar13 + 0x28);
          if (DAT_06db4c77 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c77 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          lVar21 = *(long *)(unaff_x26 + 0x20);
          if (lVar21 == 0) goto LAB_03168190;
          fVar39 = fVar39 - fVar57;
          iVar28 = *(int *)(lVar21 + 0x18);
          fVar42 = fVar42 - fVar67;
          fVar57 = fVar42 * fVar42;
          fVar48 = SQRT(fVar57 + (fVar48 - fVar63) * (fVar48 - fVar63) + fVar39 * fVar39);
          if (iVar28 < 1) {
            lVar21 = *(long *)(unaff_x26 + 0x78);
            if (lVar21 == 0) goto LAB_03168190;
            iVar28 = *(int *)(lVar21 + 0x18);
            if (0 < iVar28) goto LAB_0316b4d8;
          }
          else {
LAB_0316b4d8:
            fVar39 = (float)FUN_0409f2f4(lVar21,iVar28 + -1,*(undefined8 *)PTR_DAT_069fd088);
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
            plVar27 = (long *)PTR_DAT_069fb978;
            fStack00000000000000f8 = fStack00000000000000f8 - fVar39;
            fStack00000000000000f4 = fStack00000000000000f4 - fVar57;
            fStack00000000000000f0 = fStack00000000000000f0 - fVar42;
            fVar42 = SQRT(fStack00000000000000f0 * fStack00000000000000f0 +
                          fStack00000000000000f8 * fStack00000000000000f8 +
                          fStack00000000000000f4 * fStack00000000000000f4);
            if (fVar42 <= DAT_010fd13c) {
              if (DAT_06db4c71 == '\0') {
                FUN_02d965b8(PTR_DAT_069fb978);
                DAT_06db4c71 = '\x01';
              }
              pfVar20 = *(float **)(*(long *)PTR_DAT_069fb978 + 0xb8);
              fStack00000000000000f8 = *pfVar20;
              fStack00000000000000f4 = pfVar20[1];
              fStack00000000000000f0 = pfVar20[2];
              plVar27 = (long *)PTR_DAT_069fb978;
            }
            else {
              fStack00000000000000f8 = fStack00000000000000f8 / fVar42;
              fStack00000000000000f4 = fStack00000000000000f4 / fVar42;
              fStack00000000000000f0 = fStack00000000000000f0 / fVar42;
              if (DAT_06db4c71 == '\0') {
                FUN_02d965b8(PTR_DAT_069fb978);
                DAT_06db4c71 = '\x01';
              }
            }
            pfVar20 = *(float **)(*plVar27 + 0xb8);
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
              fVar43 = 0.0;
              fVar42 = SQRT((fStack00000000000000fc * fStack00000000000000fc +
                            fStack0000000000000100 * fStack0000000000000100 +
                            fStack0000000000000104 * fStack0000000000000104) *
                            (fStack00000000000000f0 * fStack00000000000000f0 +
                            fStack00000000000000f8 * fStack00000000000000f8 +
                            fStack00000000000000f4 * fStack00000000000000f4));
              if (DAT_010fcd14 <= fVar42) {
                fVar42 = (fStack00000000000000fc * fStack00000000000000f0 +
                         fStack0000000000000104 * fStack00000000000000f8 +
                         fStack0000000000000100 * fStack00000000000000f4) / fVar42;
                fVar43 = 1.0;
                if (fVar42 <= 1.0) {
                  fVar43 = fVar42;
                }
                fVar39 = -1.0;
                if (-1.0 <= fVar42) {
                  fVar39 = fVar43;
                }
                if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                dVar44 = acos((double)fVar39);
                fVar43 = (float)dVar44 * DAT_010fcf40;
              }
              bVar11 = false;
              bVar8 = true;
              bVar9 = false;
              if (*(float *)(in_stack_00000148 + 0x80) < fVar43) {
                bVar11 = false;
                bVar8 = false;
                bVar9 = true;
                if (!NAN(fVar48)) {
                  bVar11 = fVar48 < 1.5;
                  bVar8 = fVar48 == 1.5;
                  bVar9 = false;
                }
              }
              bVar11 = bVar29 != 0 ||
                       (!bVar8 && bVar11 == bVar9) &&
                       1.0 <= SQRT((fStack000000000000012c - fVar64) *
                                   (fStack000000000000012c - fVar64) +
                                   (fStack0000000000000128 - fVar60) *
                                   (fStack0000000000000128 - fVar60) +
                                   (fStack0000000000000130 - fVar41) *
                                   (fStack0000000000000130 - fVar41));
            }
          }
          unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
          if (*(char *)(in_stack_00000148 + 0x5d6) != '\0') {
            if (*(long *)(in_stack_00000148 + 0x20) == 0) goto LAB_03168190;
            FUN_03199614(*(long *)(in_stack_00000148 + 0x20),&stack0x000001c0,0);
          }
          bVar8 = bVar11;
          if (fVar66 < fVar56 + fVar37 + DAT_010fd060) {
            bVar9 = bVar11;
            if (fVar35 * 0.5 <= fVar48) {
              bVar9 = true;
            }
            if (!bVar9 && !bVar3) {
              if (*(uint *)(lVar25 + 0x18) <= uVar1) goto LAB_0316f2c4;
              fVar37 = 1.0;
              _fStack00000000000001c0 = *(ulong *)pfVar34;
              in_stack_000001c8 = *(float *)(lVar13 + 0x28);
              bVar8 = true;
            }
          }
          if (fVar56 + fVar37 <= fVar66) {
            fVar60 = fStack00000000000001c0;
            fVar64 = fStack00000000000001c4;
          }
          else {
            if (*(uint *)(lVar25 + 0x18) <= uVar1) goto LAB_0316f2c4;
            _fStack00000000000001c0 = *(ulong *)pfVar34;
            fVar37 = 1.0;
            in_stack_000001c8 = *(float *)(lVar13 + 0x28);
            bVar8 = true;
            fVar60 = *pfVar34;
            fVar64 = *(float *)(lVar13 + 0x24);
          }
          fVar41 = in_stack_000001c8;
          if (DAT_06db4c77 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c77 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fVar42 = in_stack_000001c8;
          bVar9 = bVar8;
          if (fStack000000000000010c <
              SQRT((fStack000000000000012c - fVar41) * (fStack000000000000012c - fVar41) +
                   (fStack0000000000000130 - fVar60) * (fStack0000000000000130 - fVar60) +
                   (fStack0000000000000128 - fVar64) * (fStack0000000000000128 - fVar64))) {
            bVar9 = true;
          }
          bVar4 = bVar9;
          if (uVar32 != 1) {
            bVar4 = true;
          }
          if (!bVar4) {
            bVar9 = fVar37 == 0.0;
          }
          if (bVar9) {
            fVar51 = fStack00000000000001c0;
            fVar60 = fStack00000000000001c4;
            if (DAT_06db4c77 == '\0') {
              FUN_02d965b8(PTR_DAT_069fbb48);
              DAT_06db4c77 = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              cVar15 = DAT_06db4c77;
            }
            else {
              cVar15 = '\x01';
            }
            fVar64 = in_stack_000001c8;
            uVar19 = _fStack00000000000001c0;
            uStack0000000000000110 = _fStack00000000000001c0 & 0xffffffff;
            fVar60 = SQRT((fStack000000000000012c - fVar42) * (fStack000000000000012c - fVar42) +
                          (fStack0000000000000130 - fVar51) * (fStack0000000000000130 - fVar51) +
                          (fStack0000000000000128 - fVar60) * (fStack0000000000000128 - fVar60));
            fStack0000000000000164 = in_stack_000001c8;
            fStack00000000000001d4 = fVar60 + fStack00000000000001d4;
            *pfVar16 = fVar60 + *pfVar16;
            if (cVar15 == '\0') {
              FUN_02d965b8(PTR_DAT_069fbb48);
              DAT_06db4c77 = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            fVar51 = in_stack_000001c8;
            lVar21 = *(long *)(in_stack_00000148 + 0x68);
            *(ulong *)(unaff_x26 + 0x60) = _fStack00000000000001c0;
            fVar46 = (float)uVar19 - fVar46;
            fStack0000000000000130 = fStack00000000000001c0;
            fVar52 = fVar52 + SQRT(fVar46 * fVar46 + (fVar64 - fVar38) * (fVar64 - fVar38));
            fStack0000000000000128 = fStack00000000000001c4;
            fStack000000000000012c = in_stack_000001c8;
            if ((lVar21 == 0) ||
               (lVar21 = FUN_0400ff1c(lVar21,uVar26 & 0xffffffff,*unaff_x21), lVar21 == 0))
            goto LAB_03168190;
            if (*(float *)(lVar21 + 0x100) == 0.0) {
              if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                 (lVar21 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),uVar26 & 0xffffffff,
                                        *unaff_x21), lVar21 == 0)) goto LAB_03168190;
              if (*(float *)(lVar21 + 0x104) != 0.0) goto LAB_0316bb78;
              if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                 (lVar21 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),uVar26 & 0xffffffff,
                                        *unaff_x21), lVar21 == 0)) goto LAB_03168190;
              if (*(float *)(lVar21 + 0x110) != 0.0) goto LAB_0316bb78;
              if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                 (lVar21 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),uVar26 & 0xffffffff,
                                        *unaff_x21), lVar21 == 0)) goto LAB_03168190;
              if (*(float *)(lVar21 + 0x114) != 0.0) goto LAB_0316bb78;
              lVar21 = *in_stack_000000e0;
              if (lVar21 == 0) goto LAB_03168190;
              lVar23 = *(long *)(lVar21 + 0x10);
              lVar18 = *(long *)PTR_DAT_069ff178;
              *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
              if (lVar23 == 0) goto LAB_03168190;
              uVar54 = *(uint *)(lVar21 + 0x18);
              if (uVar54 < *(uint *)(lVar23 + 0x18)) {
                *(uint *)(lVar21 + 0x18) = uVar54 + 1;
                *(undefined4 *)(lVar23 + (long)(int)uVar54 * 4 + 0x20) = 0;
              }
              else {
                FUN_04059d64(0,lVar21,*(undefined8 *)
                                       (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
              }
            }
            else {
LAB_0316bb78:
              if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
              fVar38 = *pfVar16;
              uVar49 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),uVar26 & 0xffffffff,
                                    *unaff_x21);
              FUN_0316f6a0(fVar38,fVar53,uVar49,uVar49,&stack0x0000022c,&stack0x00000228,
                           &stack0x00000224,&stack0x00000218,&stack0x00000278,&stack0x00000214);
            }
            lVar21 = *in_stack_000000b8;
            if (fVar60 <= 5.0) {
              if (lVar21 == 0) goto LAB_03168190;
              lVar23 = *(long *)(lVar21 + 0x10);
              lVar18 = *(long *)PTR_DAT_069ff178;
              *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
              if (lVar23 == 0) goto LAB_03168190;
              uVar54 = *(uint *)(lVar21 + 0x18);
              fVar38 = (fVar43 / fVar60) * 5.0;
              if (*(uint *)(lVar23 + 0x18) <= uVar54) {
                lVar23 = *(long *)(lVar18 + 0x20);
                goto LAB_0316bcb0;
              }
              *(uint *)(lVar21 + 0x18) = uVar54 + 1;
              *(float *)(lVar23 + (long)(int)uVar54 * 4 + 0x20) = fVar38;
            }
            else {
              if (lVar21 == 0) goto LAB_03168190;
              lVar23 = *(long *)(lVar21 + 0x10);
              lVar18 = *(long *)PTR_DAT_069ff178;
              *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
              if (lVar23 == 0) goto LAB_03168190;
              uVar54 = *(uint *)(lVar21 + 0x18);
              if (uVar54 < *(uint *)(lVar23 + 0x18)) {
                *(uint *)(lVar21 + 0x18) = uVar54 + 1;
                *(float *)(lVar23 + (long)(int)uVar54 * 4 + 0x20) = fVar43;
              }
              else {
                lVar23 = *(long *)(lVar18 + 0x20);
                fVar38 = fVar43;
LAB_0316bcb0:
                FUN_04059d64(fVar38,lVar21,*(undefined8 *)(*(long *)(lVar23 + 0xc0) + 0x70));
              }
            }
            if (bVar10) {
              lVar21 = *in_stack_000000b8;
              if (lVar21 == 0) goto LAB_03168190;
              iVar28 = *(int *)(lVar21 + 0x18);
              if (1 < iVar28) {
                FUN_04059a68(lVar21,iVar28 + -1,*(undefined8 *)PTR_DAT_06a0a108);
                FUN_04059abc(lVar21,iVar28 + -2,*(undefined8 *)PTR_DAT_06a0b5c0);
              }
            }
            puVar5 = PTR_DAT_069fbee0;
            lVar21 = *(long *)(unaff_x26 + 0x20);
            if (lVar21 == 0) goto LAB_03168190;
            lVar23 = *(long *)(lVar21 + 0x10);
            *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
            if (lVar23 == 0) goto LAB_03168190;
            uVar54 = *(uint *)(lVar21 + 0x18);
            if (uVar54 < *(uint *)(lVar23 + 0x18)) {
              lVar23 = lVar23 + (long)(int)uVar54 * 0xc;
              *(uint *)(lVar21 + 0x18) = uVar54 + 1;
              *(float *)(lVar23 + 0x20) = fVar58;
              *(float *)(lVar23 + 0x24) = fVar40;
              *(float *)(lVar23 + 0x28) = fVar51;
            }
            else {
              FUN_0409f624(lVar21,*(undefined8 *)
                                   (*(long *)(*(long *)(*(long *)puVar5 + 0x20) + 0xc0) + 0x70));
            }
            unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
            lVar21 = *(long *)(unaff_x26 + 0x28);
            if (lVar21 == 0) goto LAB_03168190;
            lVar23 = *(long *)(lVar21 + 0x10);
            lVar18 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
            if (lVar23 == 0) goto LAB_03168190;
            uVar54 = *(uint *)(lVar21 + 0x18);
            if (uVar54 < *(uint *)(lVar23 + 0x18)) {
              *(uint *)(lVar21 + 0x18) = uVar54 + 1;
              *(float *)(lVar23 + (long)(int)uVar54 * 4 + 0x20) = fVar37;
            }
            else {
              FUN_04059d64(fVar37,lVar21,
                           *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
            }
            if (bVar8) {
              lVar21 = *(long *)(in_stack_00000148 + 0x2c8);
              if (lVar21 == 0) goto LAB_03168190;
              lVar23 = *(long *)(lVar21 + 0x10);
              lVar18 = *(long *)PTR_DAT_069fc3e0;
              *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
              if (lVar23 == 0) goto LAB_03168190;
              uVar54 = *(uint *)(lVar21 + 0x18);
              if (uVar54 < *(uint *)(lVar23 + 0x18)) {
                *(uint *)(lVar21 + 0x18) = uVar54 + 1;
                *(int *)(lVar23 + (long)(int)uVar54 * 4 + 0x20) = iStack00000000000000d4;
              }
              else {
                FUN_03fb3e1c(lVar21,iStack00000000000000d4,
                             *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
              }
            }
            bVar10 = false;
            fStack00000000000000fc = fStack00000000000000f0;
            fStack0000000000000100 = fStack00000000000000f4;
            iStack00000000000000d4 = iStack00000000000000d4 + 1;
            fStack0000000000000104 = fStack00000000000000f8;
            bVar3 = bVar11;
          }
          else {
            uStack0000000000000110 = (ulong)(uint)fVar46;
            fStack0000000000000164 = fVar38;
          }
          fVar41 = fVar56 + fVar37;
          unaff_x23 = in_stack_00000148;
        } while (fVar41 < fVar66);
        iStack0000000000000108 = 0;
        plVar27 = (long *)PTR_DAT_069fb978;
      }
    }
    else {
      if ((*(long *)(unaff_x23 + 0x68) == 0) ||
         (lVar21 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar26 & 0xffffffff,*unaff_x21),
         lVar21 == 0)) goto LAB_03168190;
      if (*(int *)(lVar21 + 0x6c) != 1) {
        if ((*(long *)(unaff_x23 + 0x68) == 0) ||
           (lVar21 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar26 & 0xffffffff,*unaff_x21),
           lVar21 == 0)) goto LAB_03168190;
        if (*(int *)(lVar21 + 0x6c) != 2) {
          if ((*(long *)(unaff_x23 + 0x68) == 0) ||
             (lVar21 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar26 & 0xffffffff,*unaff_x21),
             lVar21 == 0)) goto LAB_03168190;
          if (*(int *)(lVar21 + 0x6c) == 3) {
            uStack00000000000001ac = 0;
            if (*(long *)(unaff_x23 + 0x68) == 0) goto LAB_03168190;
            if (((long)(*(int *)(*(long *)(unaff_x23 + 0x68) + 0x18) + -2) < (long)uVar32) &&
               (*(char *)(unaff_x23 + 0x84) == '\0')) {
              uVar49 = *(undefined8 *)(unaff_x23 + 0x2e0);
              if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              uVar14 = FUN_0634eb94(uVar49,0,0);
              if ((uVar14 & 1) != 0) goto LAB_0316adcc;
              FUN_030fd644(&stack0x00000290,unaff_x23,uVar32 & 0xffffffff,&stack0x00000238,
                           &stack0x00000240,(long)&stack0x000001d0 + 4,0,&stack0x00000230);
            }
            else {
LAB_0316adcc:
              FUN_030faa2c(&stack0x00000290,unaff_x23,uVar32 & 0xffffffff,&stack0x00000238,
                           &stack0x00000240,(long)&stack0x000001d0 + 4,0,&stack0x00000230);
            }
            if ((*(long *)(unaff_x23 + 0x68) == 0) ||
               (lVar21 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar26 & 0xffffffff,*unaff_x21),
               lVar21 == 0)) goto LAB_03168190;
            lVar23 = *(long *)(unaff_x26 + 0x28);
            *(undefined4 *)(lVar21 + 0x34) = uStack00000000000001ac;
            if (lVar23 == 0) goto LAB_03168190;
            fVar56 = 0.0;
            iVar28 = 0;
            puVar33 = (undefined4 *)(lVar25 + 0x20 + uVar26 * 0xc);
            while( true ) {
              unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
              puVar5 = PTR_DAT_069fbee0;
              plVar27 = (long *)PTR_DAT_069fb978;
              fVar51 = (float)uVar19;
              fStack0000000000000164 = (float)uVar47;
              iVar68 = *(int *)(lVar23 + 0x18);
              if (iVar68 <= iVar28) break;
              if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
              uStack00000000000001a0 =
                   FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),iVar28,*(undefined8 *)PTR_DAT_069fd088);
              fStack00000000000001a4 = fVar51;
              fStack00000000000001a8 = fStack0000000000000164;
              if (*(char *)(in_stack_00000148 + 0x5d6) == '\0') {
                uVar19 = (ulong)*(uint *)(lVar25 + 0x18);
                if ((((uVar19 <= uVar26) || (uVar19 <= uVar32)) || (uVar19 <= uVar1)) ||
                   (uVar19 <= uVar32 + 2)) goto LAB_0316f2c4;
                if (*(long *)(unaff_x26 + 0x28) == 0) goto LAB_03168190;
                uVar50 = *puVar33;
                fVar51 = (float)puVar33[1];
                uVar61 = puVar33[2];
                fVar40 = *pfVar24;
                uVar65 = *(undefined4 *)(lVar12 + 0x24);
                uVar62 = *(undefined4 *)(lVar12 + 0x28);
                FUN_04059a68(*(long *)(unaff_x26 + 0x28),iVar28,*(undefined8 *)PTR_DAT_06a0a108);
                FUN_0316f340(uVar50,fVar51,uVar61,fVar40,uVar65,uVar62);
                fStack00000000000001a4 = fVar51;
                if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                fStack0000000000000164 = fStack00000000000001a8;
                FUN_0409f350(uStack00000000000001a0,*(long *)(unaff_x26 + 0x20),iVar28,
                             *(undefined8 *)PTR_DAT_06a0b7d0);
                if (iVar28 != 0) goto LAB_0316af8c;
LAB_0316b04c:
                lVar21 = *in_stack_000000e0;
                if (lVar21 == 0) goto LAB_03168190;
                lVar23 = *(long *)(lVar21 + 0x10);
                lVar18 = *(long *)PTR_DAT_069ff178;
                *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
                if (lVar23 == 0) goto LAB_03168190;
                uVar54 = *(uint *)(lVar21 + 0x18);
                if (uVar54 < *(uint *)(lVar23 + 0x18)) {
                  *(uint *)(lVar21 + 0x18) = uVar54 + 1;
                  *(undefined4 *)(lVar23 + (long)(int)uVar54 * 4 + 0x20) = 0;
                }
                else {
                  FUN_04059d64(0,lVar21,*(undefined8 *)
                                         (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                }
              }
              else {
                if (*(long *)(in_stack_00000148 + 0x20) == 0) goto LAB_03168190;
                FUN_03199614(*(long *)(in_stack_00000148 + 0x20),&stack0x000001a0,0);
                if (iVar28 == 0) goto LAB_0316b04c;
LAB_0316af8c:
                if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                   (lVar21 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),uVar26 & 0xffffffff,
                                          *(undefined8 *)PTR_DAT_06a0b440), lVar21 == 0))
                goto LAB_03168190;
                if (*(float *)(lVar21 + 0x100) == 0.0) {
                  if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                     (lVar21 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),uVar26 & 0xffffffff,
                                            *(undefined8 *)PTR_DAT_06a0b440), lVar21 == 0))
                  goto LAB_03168190;
                  if (*(float *)(lVar21 + 0x104) == 0.0) {
                    if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                       (lVar21 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                              uVar26 & 0xffffffff,*(undefined8 *)PTR_DAT_06a0b440),
                       lVar21 == 0)) goto LAB_03168190;
                    if (*(float *)(lVar21 + 0x110) == 0.0) {
                      if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                         (lVar21 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                uVar26 & 0xffffffff,*(undefined8 *)PTR_DAT_06a0b440)
                         , lVar21 == 0)) goto LAB_03168190;
                      if (*(float *)(lVar21 + 0x114) == 0.0) goto LAB_0316b04c;
                    }
                  }
                }
                puVar5 = PTR_DAT_069fd088;
                if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                fVar40 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),iVar28 + -1,
                                             *(undefined8 *)PTR_DAT_069fd088);
                if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                fVar58 = fVar51;
                fVar37 = fStack0000000000000164;
                fVar38 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),iVar28,
                                             *(undefined8 *)puVar5);
                if (DAT_06db4c77 == '\0') {
                  FUN_02d965b8(PTR_DAT_069fbb48);
                  DAT_06db4c77 = '\x01';
                }
                if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
                fVar46 = *pfVar16;
                fVar56 = fVar56 + SQRT((fStack0000000000000164 - fVar37) *
                                       (fStack0000000000000164 - fVar37) +
                                       (fVar40 - fVar38) * (fVar40 - fVar38) +
                                       (fVar51 - fVar58) * (fVar51 - fVar58));
                uVar49 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),uVar26 & 0xffffffff,
                                      *(undefined8 *)PTR_DAT_06a0b440);
                FUN_0316f6a0(fVar56 + fVar46,fVar53,uVar49,uVar49,&stack0x0000022c,&stack0x00000228,
                             &stack0x00000224,&stack0x00000218,&stack0x000001a0,&stack0x00000214);
              }
              if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
              uVar47 = (ulong)(uint)fStack00000000000001a8;
              uVar19 = (ulong)(uint)fStack00000000000001a4;
              FUN_0409f350(uStack00000000000001a0,*(long *)(unaff_x26 + 0x20),iVar28,
                           *(undefined8 *)PTR_DAT_06a0b7d0);
              lVar23 = *(long *)(unaff_x26 + 0x28);
              iVar28 = iVar28 + 1;
              if (lVar23 == 0) goto LAB_03168190;
            }
            uVar19 = (ulong)(iVar68 - 1);
            if (iVar68 < 1) {
              if (*(uint *)(lVar25 + 0x18) <= uVar1) goto LAB_0316f2c4;
              lVar21 = *(long *)(unaff_x26 + 0x20);
              if (lVar21 == 0) goto LAB_03168190;
              lVar23 = *(long *)(lVar21 + 0x10);
              fVar56 = *pfVar34;
              uVar50 = *(undefined4 *)(lVar13 + 0x24);
              fStack0000000000000164 = *(float *)(lVar13 + 0x28);
              *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
              if (lVar23 == 0) goto LAB_03168190;
              uVar54 = *(uint *)(lVar21 + 0x18);
              if (uVar54 < *(uint *)(lVar23 + 0x18)) {
                lVar23 = lVar23 + (long)(int)uVar54 * 0xc;
                *(uint *)(lVar21 + 0x18) = uVar54 + 1;
                *(float *)(lVar23 + 0x20) = fVar56;
                *(undefined4 *)(lVar23 + 0x24) = uVar50;
                *(float *)(lVar23 + 0x28) = fStack0000000000000164;
              }
              else {
                FUN_0409f624(lVar21,*(undefined8 *)
                                     (*(long *)(*(long *)(*(long *)puVar5 + 0x20) + 0xc0) + 0x70));
                uVar19 = extraout_x1_00;
              }
              fVar56 = fStack00000000000001d4;
              if ((*(uint *)(lVar25 + 0x18) <= uVar32) || (*(uint *)(lVar25 + 0x18) <= uVar1))
              goto LAB_0316f2c4;
              uVar49 = *(undefined8 *)pfVar24;
              fVar40 = *(float *)(lVar12 + 0x28);
              uVar55 = *(undefined8 *)pfVar34;
              fVar51 = *(float *)(lVar13 + 0x28);
              if (DAT_06db4c77 == '\0') {
                FUN_02d965b8(PTR_DAT_069fbb48,uVar19);
                DAT_06db4c77 = '\x01';
              }
              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              fVar58 = (float)uVar49 - (float)uVar55;
              fVar53 = (float)((ulong)uVar49 >> 0x20) - (float)((ulong)uVar55 >> 0x20);
              fVar40 = fVar40 - fVar51;
              fVar40 = fVar40 * fVar40;
              fStack00000000000001d4 = fVar56 + SQRT(fVar40 + fVar58 * fVar58 + fVar53 * fVar53);
LAB_0316d2dc:
              lVar12 = *(long *)(unaff_x26 + 0x28);
              if (lVar12 == 0) goto LAB_03168190;
              lVar13 = *(long *)(lVar12 + 0x10);
              lVar21 = *(long *)PTR_DAT_069ff178;
              *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
              if (lVar13 == 0) goto LAB_03168190;
              uVar54 = *(uint *)(lVar12 + 0x18);
              if (uVar54 < *(uint *)(lVar13 + 0x18)) {
                *(uint *)(lVar12 + 0x18) = uVar54 + 1;
                *(undefined4 *)(lVar13 + (long)(int)uVar54 * 4 + 0x20) = 0x3f800000;
              }
              else {
                FUN_04059d64(0x3f800000,lVar12,
                             *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
              }
              lVar12 = *in_stack_000000e0;
              if (lVar12 == 0) goto LAB_03168190;
              lVar13 = *(long *)(lVar12 + 0x10);
              lVar21 = *(long *)PTR_DAT_069ff178;
              *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
              if (lVar13 == 0) goto LAB_03168190;
              uVar54 = *(uint *)(lVar12 + 0x18);
              if (uVar54 < *(uint *)(lVar13 + 0x18)) {
                *(uint *)(lVar12 + 0x18) = uVar54 + 1;
                *(undefined4 *)(lVar13 + (long)(int)uVar54 * 4 + 0x20) = 0;
              }
              else {
                FUN_04059d64(0,lVar12,*(undefined8 *)
                                       (*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
              }
            }
            else {
              fVar56 = (float)FUN_04059a68(lVar23,uVar19,*(undefined8 *)PTR_DAT_06a0a108);
              unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
              puVar5 = PTR_DAT_069fd088;
              plVar27 = (long *)PTR_DAT_069fb978;
              fVar51 = 1.0;
              if (fVar56 <= 1.0) {
                lVar12 = *(long *)(unaff_x26 + 0x20);
                if (lVar12 == 0) goto LAB_03168190;
                fVar56 = (float)FUN_0409f2f4(lVar12,*(int *)(lVar12 + 0x18) + -1,
                                             *(undefined8 *)PTR_DAT_069fd088);
                if (*(uint *)(lVar25 + 0x18) <= uVar1) goto LAB_0316f2c4;
                fVar51 = fVar51 - *(float *)(lVar13 + 0x24);
                fStack0000000000000164 = fStack0000000000000164 - *(float *)(lVar13 + 0x28);
                fVar40 = in_stack_000000a0._4_4_;
                if (in_stack_000000a0._4_4_ <=
                    fStack0000000000000164 * fStack0000000000000164 +
                    (fVar56 - *pfVar34) * (fVar56 - *pfVar34) + fVar51 * fVar51) {
                  lVar12 = *(long *)(unaff_x26 + 0x20);
                  if (lVar12 == 0) goto LAB_03168190;
                  fVar56 = in_stack_000000a0._4_4_;
                  fVar51 = (float)FUN_0409f2f4(lVar12,*(int *)(lVar12 + 0x18) + -1,
                                               *(undefined8 *)puVar5);
                  if (*(uint *)(lVar25 + 0x18) <= uVar1) goto LAB_0316f2c4;
                  fVar40 = *pfVar34;
                  fVar53 = *(float *)(lVar13 + 0x24);
                  fVar58 = *(float *)(lVar13 + 0x28);
                  if (DAT_06db4c77 == '\0') {
                    FUN_02d965b8(PTR_DAT_069fbb48);
                    DAT_06db4c77 = '\x01';
                  }
                  if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  puVar6 = PTR_DAT_069fbee0;
                  fVar56 = fVar56 - fVar53;
                  lVar12 = *(long *)(unaff_x26 + 0x20);
                  fStack0000000000000164 = fStack0000000000000164 - fVar58;
                  if (fVar36 <= SQRT(fStack0000000000000164 * fStack0000000000000164 +
                                     (fVar51 - fVar40) * (fVar51 - fVar40) + fVar56 * fVar56)) {
                    if (uVar1 < *(uint *)(lVar25 + 0x18)) {
                      if (lVar12 != 0) {
                        lVar21 = *(long *)(lVar12 + 0x10);
                        fVar56 = *pfVar34;
                        fVar51 = *(float *)(lVar13 + 0x24);
                        fStack0000000000000164 = *(float *)(lVar13 + 0x28);
                        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                        if (lVar21 != 0) {
                          uVar54 = *(uint *)(lVar12 + 0x18);
                          if (uVar54 < *(uint *)(lVar21 + 0x18)) {
                            lVar21 = lVar21 + (long)(int)uVar54 * 0xc;
                            *(uint *)(lVar12 + 0x18) = uVar54 + 1;
                            *(float *)(lVar21 + 0x20) = fVar56;
                            *(float *)(lVar21 + 0x24) = fVar51;
                            *(float *)(lVar21 + 0x28) = fStack0000000000000164;
                          }
                          else {
                            FUN_0409f624(lVar12,*(undefined8 *)
                                                 (*(long *)(*(long *)(*(long *)puVar6 + 0x20) + 0xc0
                                                           ) + 0x70));
                          }
                          fVar56 = fStack00000000000001d4;
                          lVar12 = *(long *)(unaff_x26 + 0x20);
                          if (lVar12 != 0) {
                            fVar58 = (float)FUN_0409f2f4(lVar12,*(int *)(lVar12 + 0x18) + -1,
                                                         *(undefined8 *)puVar5);
                            if (uVar1 < *(uint *)(lVar25 + 0x18)) {
                              fVar53 = *pfVar34;
                              fVar37 = *(float *)(lVar13 + 0x24);
                              fVar40 = *(float *)(lVar13 + 0x28);
                              if (DAT_06db4c77 == '\0') {
                                FUN_02d965b8(PTR_DAT_069fbb48);
                                DAT_06db4c77 = '\x01';
                              }
                              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                                thunk_FUN_02df485c();
                              }
                              fVar51 = fVar51 - fVar37;
                              fStack0000000000000164 = fStack0000000000000164 - fVar40;
                              fVar40 = fStack0000000000000164 * fStack0000000000000164;
                              fStack00000000000001d4 =
                                   fVar56 + SQRT(fVar40 + (fVar58 - fVar53) * (fVar58 - fVar53) +
                                                          fVar51 * fVar51);
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
                  if (*(uint *)(lVar25 + 0x18) <= uVar1) goto LAB_0316f2c4;
                  fStack0000000000000164 = *(float *)(lVar13 + 0x28);
                  fVar40 = *(float *)(lVar13 + 0x24);
                  FUN_0409f350(*pfVar34,lVar12,*(int *)(lVar12 + 0x18) + -1,
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
                if (*(uint *)(lVar25 + 0x18) <= uVar1) goto LAB_0316f2c4;
                fStack0000000000000164 = *(float *)(lVar13 + 0x28);
                fVar40 = *(float *)(lVar13 + 0x24);
                FUN_0409f350(*pfVar34,lVar12,*(int *)(lVar12 + 0x18) + -1,
                             *(undefined8 *)PTR_DAT_06a0b7d0);
              }
            }
            lVar12 = *(long *)(unaff_x26 + 0x20);
            if (lVar12 == 0) goto LAB_03168190;
            iVar28 = *(int *)(lVar12 + 0x18);
            uStack0000000000000110 =
                 FUN_0409f2f4(lVar12,iVar28 + -1,*(undefined8 *)PTR_DAT_069fd088);
            puVar5 = PTR_DAT_069fd088;
            lVar12 = *(long *)(unaff_x26 + 0x20);
            fVar58 = (float)uStack0000000000000110;
            if (lVar12 == 0) goto LAB_03168190;
            fVar56 = fStack0000000000000164;
            if (1 < *(int *)(lVar12 + 0x18)) {
              fStack0000000000000088 = fVar40;
              fStack000000000000008c =
                   (float)FUN_0409f2f4(lVar12,*(int *)(lVar12 + 0x18) + -2,
                                       *(undefined8 *)PTR_DAT_069fd088);
              lVar12 = *(long *)(unaff_x26 + 0x20);
              if (lVar12 == 0) goto LAB_03168190;
              fVar51 = fStack0000000000000088;
              fVar53 = fVar56;
              fVar37 = (float)FUN_0409f2f4(lVar12,*(int *)(lVar12 + 0x18) + -1,*(undefined8 *)puVar5
                                          );
              if (DAT_06db4c75 == '\0') {
                FUN_02d965b8(PTR_DAT_069fbb48);
                DAT_06db4c75 = '\x01';
              }
              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              fStack000000000000008c = fStack000000000000008c - fVar37;
              fStack0000000000000088 = fStack0000000000000088 - fVar51;
              fVar56 = fVar56 - fVar53;
              fStack0000000000000084 =
                   SQRT(fVar56 * fVar56 +
                        fStack000000000000008c * fStack000000000000008c +
                        fStack0000000000000088 * fStack0000000000000088);
              if (fStack0000000000000084 <= DAT_010fd13c) {
                if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
                  FUN_02d965b8(plVar27);
                  *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
                }
                pfVar24 = *(float **)(*plVar27 + 0xb8);
                fStack000000000000008c = *pfVar24;
                fStack0000000000000088 = pfVar24[1];
                fStack0000000000000084 = pfVar24[2];
              }
              else {
                fStack000000000000008c = fStack000000000000008c / fStack0000000000000084;
                fStack0000000000000088 = fStack0000000000000088 / fStack0000000000000084;
                fStack0000000000000084 = fVar56 / fStack0000000000000084;
              }
            }
            lVar12 = *(long *)(in_stack_00000148 + 0x2c8);
            *(float *)(in_stack_00000148 + 0x2c0) =
                 *(float *)(in_stack_00000148 + 0x2c0) + fStack00000000000001d4;
            if (lVar12 == 0) goto LAB_03168190;
            lVar13 = *(long *)(lVar12 + 0x10);
            lVar21 = *(long *)PTR_DAT_069fc3e0;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar13 == 0) goto LAB_03168190;
            uVar54 = *(uint *)(lVar12 + 0x18);
            iStack00000000000000d4 = iVar28 + iStack00000000000000d4;
            fVar53 = fStack00000000000001d4;
            if (uVar54 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar54 + 1;
              *(int *)(lVar13 + (long)(int)uVar54 * 4 + 0x20) = iStack00000000000000d4;
            }
            else {
              FUN_03fb3e1c(lVar12,iStack00000000000000d4,
                           *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
            }
            if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
            iVar28 = *(int *)(*(long *)(unaff_x26 + 0x78) + 0x18);
            fVar51 = fStack0000000000000164;
            if (iVar28 < 1) {
              iStack0000000000000108 = 3;
              unaff_x23 = in_stack_00000148;
              goto LAB_0316c620;
            }
            lVar12 = FUN_0400ff1c(in_stack_00000098,iVar31 + -2,*unaff_x21);
            if ((lVar12 == 0) || (lVar13 = *in_stack_00000090, lVar13 == 0)) goto LAB_03168190;
            iVar68 = *(int *)(lVar12 + 0xbc);
            fVar37 = (float)FUN_04059a68(lVar13,*(int *)(lVar13 + 0x18) + -1,
                                         *(undefined8 *)PTR_DAT_06a0a108);
            lVar12 = *in_stack_00000090;
            if (lVar12 == 0) goto LAB_03168190;
            if (1 < *(int *)(lVar12 + 0x18)) {
              fVar53 = (float)FUN_04059a68(lVar12,*(int *)(lVar12 + 0x18) + -2,
                                           *(undefined8 *)PTR_DAT_06a0a108);
              fVar53 = fVar37 - fVar53;
              fVar37 = fVar53;
            }
            puVar5 = PTR_DAT_069fd088;
            lVar12 = *(long *)(unaff_x26 + 0x78);
            if (lVar12 == 0) goto LAB_03168190;
            fVar38 = (float)FUN_0409f2f4(lVar12,*(int *)(lVar12 + 0x18) + -1,
                                         *(undefined8 *)PTR_DAT_069fd088);
            if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
            fVar46 = fVar53;
            fVar60 = fVar56;
            fVar64 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),0,*(undefined8 *)puVar5);
            if (DAT_06db4c75 == '\0') {
              FUN_02d965b8(PTR_DAT_069fbb48);
              DAT_06db4c75 = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            fVar53 = fVar53 - fVar46;
            uVar19 = (ulong)(uint)DAT_010fd13c;
            fVar56 = SQRT((fVar56 - fVar60) * (fVar56 - fVar60) +
                          (fVar38 - fVar64) * (fVar38 - fVar64) + fVar53 * fVar53);
            if (fVar56 <= DAT_010fd13c) {
              if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
                FUN_02d965b8(plVar27);
                *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
              }
              fVar53 = *(float *)(*(long *)(*plVar27 + 0xb8) + 4);
            }
            else {
              fVar53 = fVar53 / fVar56;
            }
            puVar5 = PTR_DAT_069fd088;
            lVar12 = *(long *)(unaff_x26 + 0x78);
            if (lVar12 == 0) goto LAB_03168190;
            FUN_0409f2f4(lVar12,*(int *)(lVar12 + 0x18) + -1,*(undefined8 *)PTR_DAT_069fd088);
            lVar12 = *(long *)(unaff_x26 + 0x78);
            if (lVar12 == 0) goto LAB_03168190;
            fVar46 = fVar56;
            fVar38 = (float)FUN_0409f2f4(lVar12,*(int *)(lVar12 + 0x18) + -1,*(undefined8 *)puVar5);
            if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
            uVar47 = (ulong)(uint)(float)iVar68;
            fVar60 = (float)iVar28 - (float)iVar68;
            if (1.0 <= fVar60) {
              fVar64 = 0.0;
              iVar68 = *(int *)(*(long *)(unaff_x26 + 0x78) + 0x18);
              iVar28 = 2;
              iVar30 = -2;
              do {
                fVar41 = (float)uVar47;
                if ((iVar28 - iVar68) + -1 < 0) {
                  lVar12 = *(long *)(unaff_x26 + 0x78);
                  if (lVar12 == 0) goto LAB_03168190;
                  fVar66 = (float)uVar19;
                  fVar42 = (float)FUN_0409f2f4(lVar12,iVar30 + *(int *)(lVar12 + 0x18),
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
                  fVar48 = fVar66 - (float)uVar19;
                  fVar64 = fVar64 + SQRT(fVar48 * fVar48 +
                                         (fVar42 - fVar38) * (fVar42 - fVar38) +
                                         (fVar41 - fVar46) * (fVar41 - fVar46));
                  fVar56 = (fVar37 / fVar60) * fVar53 + fVar56;
                  fVar38 = 1.0;
                  if (SQRT(fVar64 / fVar37) <= 1.0) {
                    fVar38 = SQRT(fVar64 / fVar37);
                  }
                  fVar46 = fVar56 + (fVar41 - fVar56) * fVar38;
                  uVar47 = (ulong)(uint)fVar46;
                  FUN_0409f350(fVar42,uVar47,fVar66,lVar12,iVar30 + *(int *)(lVar12 + 0x18),
                               *(undefined8 *)PTR_DAT_06a0b7d0);
                  uVar19 = (ulong)(uint)fVar66;
                  fVar38 = fVar42;
                }
                fVar41 = (float)iVar28;
                iVar28 = iVar28 + 1;
                iVar30 = iVar30 + -1;
              } while (fVar41 <= fVar60);
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
               (lVar12 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar26 & 0xffffffff,*unaff_x21),
               puVar5 = PTR_DAT_069fd088, lVar12 == 0)) goto LAB_03168190;
            if (*(int *)(lVar12 + 0x6c) == 4) {
              if ((*(long *)(unaff_x23 + 0x68) != 0) &&
                 (lVar12 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar26 & 0xffffffff,*unaff_x21),
                 lVar12 != 0)) {
                fStack00000000000001d4 = 0.0;
                *(undefined8 *)(unaff_x26 + 0x20) = *(undefined8 *)(lVar12 + 0x1d8);
                lVar12 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ff188);
                FUN_040594d0(lVar12,*(undefined8 *)PTR_DAT_069ff180);
                if (lVar12 != 0) {
                  lVar13 = *(long *)(lVar12 + 0x10);
                  lVar21 = *(long *)PTR_DAT_069ff178;
                  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                  if (lVar13 != 0) {
                    uVar54 = *(uint *)(lVar12 + 0x18);
                    if (uVar54 < *(uint *)(lVar13 + 0x18)) {
                      *(uint *)(lVar12 + 0x18) = uVar54 + 1;
                      *(undefined4 *)(lVar13 + (long)(int)uVar54 * 4 + 0x20) = 0;
                    }
                    else {
                      FUN_04059d64(0,lVar12,*(undefined8 *)
                                             (*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
                    }
                    lVar13 = *(long *)(unaff_x26 + 0x20);
                    if (lVar13 != 0) {
                      iVar28 = 1;
                      while( true ) {
                        fVar56 = fStack00000000000001d4;
                        fVar37 = (float)uVar47;
                        fVar53 = (float)uVar19;
                        if (*(int *)(lVar13 + 0x18) <= iVar28) break;
                        fVar38 = (float)FUN_0409f2f4(lVar13,iVar28 + -1,*(undefined8 *)puVar5);
                        if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                        fVar46 = fVar53;
                        fVar60 = fVar37;
                        fVar64 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),iVar28,
                                                     *(undefined8 *)puVar5);
                        if (DAT_06db4c77 == '\0') {
                          FUN_02d965b8(PTR_DAT_069fbb48);
                          DAT_06db4c77 = '\x01';
                        }
                        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                          thunk_FUN_02df485c();
                        }
                        fVar37 = fVar37 - fVar60;
                        uVar47 = (ulong)(uint)fVar37;
                        lVar13 = *(long *)(lVar12 + 0x10);
                        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                        uVar19 = (ulong)(uint)(fVar37 * fVar37);
                        fStack00000000000001d4 =
                             fVar56 + SQRT(fVar37 * fVar37 +
                                           (fVar38 - fVar64) * (fVar38 - fVar64) +
                                           (fVar53 - fVar46) * (fVar53 - fVar46));
                        if (lVar13 == 0) goto LAB_03168190;
                        uVar54 = *(uint *)(lVar12 + 0x18);
                        if (uVar54 < *(uint *)(lVar13 + 0x18)) {
                          *(uint *)(lVar12 + 0x18) = uVar54 + 1;
                          *(float *)(lVar13 + (long)(int)uVar54 * 4 + 0x20) = fStack00000000000001d4
                          ;
                        }
                        else {
                          FUN_04059d64(lVar12,*(undefined8 *)
                                               (*(long *)(*(long *)(*(long *)PTR_DAT_069ff178 + 0x20
                                                                   ) + 0xc0) + 0x70));
                        }
                        lVar13 = *(long *)(unaff_x26 + 0x20);
                        iVar28 = iVar28 + 1;
                        if (lVar13 == 0) goto LAB_03168190;
                      }
                      lVar13 = *(long *)(unaff_x26 + 0x28);
                      *pfVar16 = *pfVar16 + fStack00000000000001d4;
                      if (lVar13 != 0) {
                        lVar21 = *(long *)(lVar13 + 0x10);
                        lVar23 = *(long *)PTR_DAT_069ff178;
                        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                        if (lVar21 != 0) {
                          uVar54 = *(uint *)(lVar13 + 0x18);
                          if (uVar54 < *(uint *)(lVar21 + 0x18)) {
                            *(uint *)(lVar13 + 0x18) = uVar54 + 1;
                            *(undefined4 *)(lVar21 + (long)(int)uVar54 * 4 + 0x20) = 0;
                          }
                          else {
                            FUN_04059d64(0,lVar13,*(undefined8 *)
                                                   (*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) +
                                                   0x70));
                          }
                          lVar13 = *in_stack_000000e0;
                          if (lVar13 != 0) {
                            lVar21 = *(long *)(lVar13 + 0x10);
                            lVar23 = *(long *)PTR_DAT_069ff178;
                            *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                            if (lVar21 != 0) {
                              uVar54 = *(uint *)(lVar13 + 0x18);
                              if (uVar54 < *(uint *)(lVar21 + 0x18)) {
                                *(uint *)(lVar13 + 0x18) = uVar54 + 1;
                                *(undefined4 *)(lVar21 + (long)(int)uVar54 * 4 + 0x20) = 0;
                              }
                              else {
                                FUN_04059d64(0,lVar13,*(undefined8 *)
                                                       (*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) +
                                                       0x70));
                              }
                              lVar13 = *(long *)(unaff_x26 + 0x20);
                              if (lVar13 != 0) {
                                iVar28 = 0;
                                while (iVar28 < *(int *)(lVar13 + 0x18)) {
                                  lVar13 = *(long *)(unaff_x26 + 0x28);
                                  fVar56 = (float)FUN_04059a68(lVar12,iVar28,
                                                               *(undefined8 *)PTR_DAT_06a0a108);
                                  if (lVar13 == 0) goto LAB_03168190;
                                  lVar21 = *(long *)(lVar13 + 0x10);
                                  lVar23 = *(long *)PTR_DAT_069ff178;
                                  *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                                  if (lVar21 == 0) goto LAB_03168190;
                                  uVar54 = *(uint *)(lVar13 + 0x18);
                                  if (uVar54 < *(uint *)(lVar21 + 0x18)) {
                                    *(uint *)(lVar13 + 0x18) = uVar54 + 1;
                                    *(float *)(lVar21 + (long)(int)uVar54 * 4 + 0x20) =
                                         fVar56 / fStack00000000000001d4;
                                  }
                                  else {
                                    FUN_04059d64(lVar13,*(undefined8 *)
                                                         (*(long *)(*(long *)(lVar23 + 0x20) + 0xc0)
                                                         + 0x70));
                                  }
                                  lVar13 = *in_stack_000000e0;
                                  if (lVar13 == 0) goto LAB_03168190;
                                  lVar21 = *(long *)(lVar13 + 0x10);
                                  lVar23 = *(long *)PTR_DAT_069ff178;
                                  *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                                  if (lVar21 == 0) goto LAB_03168190;
                                  uVar54 = *(uint *)(lVar13 + 0x18);
                                  if (uVar54 < *(uint *)(lVar21 + 0x18)) {
                                    *(uint *)(lVar13 + 0x18) = uVar54 + 1;
                                    *(undefined4 *)(lVar21 + (long)(int)uVar54 * 4 + 0x20) = 0;
                                  }
                                  else {
                                    FUN_04059d64(0,lVar13,*(undefined8 *)
                                                           (*(long *)(*(long *)(lVar23 + 0x20) +
                                                                     0xc0) + 0x70));
                                  }
                                  lVar13 = *(long *)(unaff_x26 + 0x20);
                                  iVar28 = iVar28 + 1;
                                  if (lVar13 == 0) goto LAB_03168190;
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
      uVar54 = *(uint *)(lVar25 + 0x18);
      fStack0000000000000164 = fVar51;
      if (uVar32 == 1) {
        if ((ulong)uVar54 < 2) goto LAB_0316f2c4;
        fStack0000000000000164 = *(float *)(lVar12 + 0x28);
        *(undefined8 *)(unaff_x26 + 0x60) = *(undefined8 *)pfVar24;
      }
      if (uVar54 <= uVar1) goto LAB_0316f2c4;
      fVar56 = *(float *)(lVar13 + 0x28);
      uVar49 = *(undefined8 *)pfVar34;
      uVar55 = *(undefined8 *)pfVar24;
      fVar52 = *(float *)(lVar12 + 0x28);
      if (DAT_06db4c75 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c75 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar51 = (float)uVar49 - (float)uVar55;
      fVar37 = (float)((ulong)uVar49 >> 0x20) - (float)((ulong)uVar55 >> 0x20);
      fVar56 = fVar56 - fVar52;
      fVar52 = SQRT(fVar56 * fVar56 + fVar51 * fVar51 + fVar37 * fVar37);
      uVar19 = (ulong)(uint)fVar52;
      if (fVar52 <= DAT_010fd13c) {
        if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
          FUN_02d965b8(plVar27);
          *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
        }
        uVar49 = **(undefined8 **)(*plVar27 + 0xb8);
        fVar56 = *(float *)(*(undefined8 **)(*plVar27 + 0xb8) + 1);
      }
      else {
        fVar56 = fVar56 / fVar52;
        uVar49 = CONCAT44(fVar37 / fVar52,fVar51 / fVar52);
      }
      if (*(uint *)(lVar25 + 0x18) <= uVar1) goto LAB_0316f2c4;
      fVar52 = *(float *)(lVar13 + 0x28);
      uVar55 = *(undefined8 *)pfVar34;
      uVar59 = *(undefined8 *)pfVar24;
      fVar51 = *(float *)(lVar12 + 0x28);
      if (DAT_06db4c77 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c77 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar37 = (float)uVar55 - (float)uVar59;
      fVar38 = (float)((ulong)uVar55 >> 0x20) - (float)((ulong)uVar59 >> 0x20);
      fVar52 = fVar52 - fVar51;
      fStack00000000000001d4 = SQRT(fVar52 * fVar52 + fVar37 * fVar37 + fVar38 * fVar38);
      if (*(uint *)(lVar25 + 0x18) <= uVar1) goto LAB_0316f2c4;
      uStack0000000000000110 = (ulong)(uint)fVar58;
      fVar51 = *pfVar34;
      fVar52 = *(float *)(lVar13 + 0x28);
      if (DAT_06db4c77 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c77 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar52 = fVar52 - fStack0000000000000164;
      fVar52 = SQRT((fVar51 - fVar58) * (fVar51 - fVar58) + fVar52 * fVar52) + 0.0;
      fVar51 = 0.0;
      if (uVar32 != 1) {
        fVar51 = fStack000000000000010c;
      }
      uVar14 = (ulong)(uint)fVar51;
      uVar47 = uVar14;
      lVar21 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ff188);
      FUN_040594d0(lVar21,*(undefined8 *)PTR_DAT_069ff180);
      if (fVar51 < fStack00000000000001d4 - fStack000000000000010c) {
        fVar51 = *(float *)((ulong)&stack0x00000278 | 4);
        do {
          if (*(uint *)(lVar25 + 0x18) <= uVar1) goto LAB_0316f2c4;
          uVar55 = *(undefined8 *)pfVar34;
          fVar37 = *(float *)(lVar13 + 0x28);
          if (DAT_06db4c77 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c77 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fVar64 = (float)uVar14;
          fVar38 = (float)uVar49 * fVar64 + fVar58;
          fVar46 = (float)((ulong)uVar49 >> 0x20) * fVar64 + fVar51;
          uVar59 = CONCAT44(fVar46,fVar38);
          fVar60 = fVar56 * fVar64 + fStack0000000000000164;
          fVar38 = fVar38 - (float)uVar55;
          fVar46 = fVar46 - (float)((ulong)uVar55 >> 0x20);
          fVar37 = fVar60 - fVar37;
          fVar37 = SQRT(fVar37 * fVar37 + fVar38 * fVar38 + fVar46 * fVar46);
          uVar19 = (ulong)(uint)fVar37;
          if (fVar36 < fVar37) {
            _uStack00000000000001b0 = uVar59;
            in_stack_000001b8 = fVar60;
            if (*(char *)(unaff_x23 + 0x5d6) != '\0') {
              if (*(long *)(unaff_x23 + 0x20) == 0) goto LAB_03168190;
              FUN_03199614(*(long *)(unaff_x23 + 0x20),&stack0x000001b0,0);
            }
            if ((*(long *)(unaff_x23 + 0x68) == 0) ||
               (lVar23 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar26 & 0xffffffff,*unaff_x21),
               lVar23 == 0)) goto LAB_03168190;
            if (*(float *)(lVar23 + 0x100) == 0.0) {
              if ((*(long *)(unaff_x23 + 0x68) == 0) ||
                 (lVar23 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar26 & 0xffffffff,*unaff_x21),
                 lVar23 == 0)) goto LAB_03168190;
              if (*(float *)(lVar23 + 0x104) != 0.0) goto LAB_0316a920;
              if ((*(long *)(unaff_x23 + 0x68) == 0) ||
                 (lVar23 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar26 & 0xffffffff,*unaff_x21),
                 lVar23 == 0)) goto LAB_03168190;
              if (*(float *)(lVar23 + 0x110) != 0.0) goto LAB_0316a920;
              if ((*(long *)(unaff_x23 + 0x68) == 0) ||
                 (lVar23 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar26 & 0xffffffff,*unaff_x21),
                 lVar23 == 0)) goto LAB_03168190;
              if (*(float *)(lVar23 + 0x114) != 0.0) goto LAB_0316a920;
              lVar23 = *in_stack_000000e0;
              if (lVar23 == 0) goto LAB_03168190;
              lVar18 = *(long *)(lVar23 + 0x10);
              lVar22 = *(long *)PTR_DAT_069ff178;
              *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
              if (lVar18 == 0) goto LAB_03168190;
              uVar54 = *(uint *)(lVar23 + 0x18);
              if (uVar54 < *(uint *)(lVar18 + 0x18)) {
                *(uint *)(lVar23 + 0x18) = uVar54 + 1;
                *(undefined4 *)(lVar18 + (long)(int)uVar54 * 4 + 0x20) = 0;
              }
              else {
                FUN_04059d64(0,lVar23,*(undefined8 *)
                                       (*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
              }
            }
            else {
LAB_0316a920:
              if (*(long *)(unaff_x23 + 0x68) == 0) goto LAB_03168190;
              fVar37 = *pfVar16;
              uVar55 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar26 & 0xffffffff,*unaff_x21);
              FUN_0316f6a0(fVar64 + fVar37,fVar53,uVar55,uVar55,&stack0x0000022c,&stack0x00000228,
                           &stack0x00000224,&stack0x00000218,&stack0x000001b0,&stack0x00000214);
            }
            puVar5 = PTR_DAT_069fbee0;
            lVar23 = *(long *)(unaff_x26 + 0x20);
            if (lVar23 == 0) goto LAB_03168190;
            lVar18 = *(long *)(lVar23 + 0x10);
            uVar19 = (ulong)(uint)in_stack_000001b8;
            *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
            if (lVar18 == 0) goto LAB_03168190;
            uVar54 = *(uint *)(lVar23 + 0x18);
            if (uVar54 < *(uint *)(lVar18 + 0x18)) {
              lVar18 = lVar18 + (long)(int)uVar54 * 0xc;
              *(uint *)(lVar23 + 0x18) = uVar54 + 1;
              *(undefined4 *)(lVar18 + 0x20) = uStack00000000000001b0;
              *(undefined4 *)(lVar18 + 0x24) = uStack00000000000001b4;
              *(float *)(lVar18 + 0x28) = in_stack_000001b8;
            }
            else {
              FUN_0409f624(lVar23,*(undefined8 *)
                                   (*(long *)(*(long *)(*(long *)puVar5 + 0x20) + 0xc0) + 0x70));
            }
            if (lVar21 == 0) goto LAB_03168190;
            lVar23 = *(long *)(lVar21 + 0x10);
            lVar18 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
            if (lVar23 == 0) goto LAB_03168190;
            uVar54 = *(uint *)(lVar21 + 0x18);
            if (uVar54 < *(uint *)(lVar23 + 0x18)) {
              *(uint *)(lVar21 + 0x18) = uVar54 + 1;
              *(undefined4 *)(lVar23 + (long)(int)uVar54 * 4 + 0x20) = 0;
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
            uVar54 = *(uint *)(lVar23 + 0x18);
            if (uVar54 < *(uint *)(lVar18 + 0x18)) {
              *(uint *)(lVar23 + 0x18) = uVar54 + 1;
              *(undefined4 *)(lVar18 + (long)(int)uVar54 * 4 + 0x20) = 0;
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
            uVar54 = *(uint *)(lVar23 + 0x18);
            if (uVar54 < *(uint *)(lVar18 + 0x18)) {
              *(uint *)(lVar23 + 0x18) = uVar54 + 1;
              *(float *)(lVar18 + (long)(int)uVar54 * 4 + 0x20) = fVar64 / fStack00000000000001d4;
            }
            else {
              FUN_04059d64(lVar23,*(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70)
                          );
            }
          }
          uVar47 = (ulong)(uint)fStack000000000000010c;
          uVar14 = (ulong)(uint)(fVar64 + fStack000000000000010c);
        } while (fVar64 + fStack000000000000010c < fStack00000000000001d4 - fStack000000000000010c);
      }
      fStack000000000000012c = (float)uVar19;
      fStack0000000000000128 = (float)uVar47;
      if (*(char *)(unaff_x23 + 0x5d6) == '\0') {
        if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
        lVar23 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),uVar26 & 0xffffffff,
                              *(undefined8 *)PTR_DAT_06a0b440);
        fStack000000000000012c = (float)uVar19;
        fStack0000000000000128 = (float)uVar47;
        if (lVar23 == 0) goto LAB_03168190;
        if (*(int *)(lVar23 + 0x6c) == 1) {
          if (*(long *)(unaff_x26 + 0x28) == 0) goto LAB_03168190;
          iVar28 = 0;
          puVar33 = (undefined4 *)(lVar25 + 0x20 + uVar26 * 0xc);
          lVar23 = *(long *)(unaff_x26 + 0x28);
          while( true ) {
            fStack000000000000012c = (float)uVar19;
            fStack0000000000000128 = (float)uVar47;
            if (*(int *)(lVar23 + 0x18) <= iVar28) break;
            uVar19 = (ulong)*(uint *)(lVar25 + 0x18);
            if ((((uVar19 <= uVar26) || (uVar19 <= uVar32)) || (uVar19 <= uVar1)) ||
               (uVar19 <= uVar32 + 2)) goto LAB_0316f2c4;
            uVar50 = *puVar33;
            fVar56 = (float)puVar33[1];
            uVar54 = puVar33[2];
            fVar51 = *pfVar24;
            uVar61 = *(undefined4 *)(lVar12 + 0x24);
            uVar65 = *(undefined4 *)(lVar12 + 0x28);
            FUN_04059a68(lVar23,iVar28,*(undefined8 *)PTR_DAT_06a0a108);
            FUN_0316f340(uVar50,fVar56,uVar54,fVar51,uVar61,uVar65);
            unaff_x26 = &stack0x00000218;
            if (((in_stack_00000238 == 0) ||
                (uVar50 = FUN_0409f2f4(in_stack_00000238,iVar28,*(undefined8 *)PTR_DAT_069fd088),
                lVar21 == 0)) ||
               (fVar51 = (float)FUN_04059a68(lVar21,iVar28,*(undefined8 *)PTR_DAT_06a0a108),
               in_stack_00000238 == 0)) goto LAB_03168190;
            uVar47 = (ulong)(uint)(fVar56 + fVar51);
            uVar19 = (ulong)uVar54;
            FUN_0409f350(uVar50,in_stack_00000238,iVar28,*(undefined8 *)PTR_DAT_06a0b7d0);
            iVar28 = iVar28 + 1;
            lVar23 = in_stack_00000240;
            if (in_stack_00000240 == 0) goto LAB_03168190;
          }
        }
      }
      puVar5 = PTR_DAT_069fbee0;
      lVar12 = *(long *)(unaff_x26 + 0x20);
      if (lVar12 == 0) goto LAB_03168190;
      if (*(int *)(lVar12 + 0x18) == 0) {
        if (*(uint *)(lVar25 + 0x18) <= uVar1) goto LAB_0316f2c4;
        lVar21 = *(long *)(lVar12 + 0x10);
        fVar56 = *pfVar34;
        uVar50 = *(undefined4 *)(lVar13 + 0x24);
        uVar61 = *(undefined4 *)(lVar13 + 0x28);
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar21 == 0) goto LAB_03168190;
        if (*(int *)(lVar21 + 0x18) == 0) {
          FUN_0409f624(lVar12,*(undefined8 *)
                               (*(long *)(*(long *)(*(long *)puVar5 + 0x20) + 0xc0) + 0x70));
        }
        else {
          *(undefined4 *)(lVar12 + 0x18) = 1;
          *(float *)(lVar21 + 0x20) = fVar56;
          *(undefined4 *)(lVar21 + 0x24) = uVar50;
          *(undefined4 *)(lVar21 + 0x28) = uVar61;
        }
        if (*(uint *)(lVar25 + 0x18) <= uVar1) goto LAB_0316f2c4;
        fVar56 = *pfVar34;
        fVar51 = *(float *)(lVar13 + 0x24);
        fStack000000000000012c = *(float *)(lVar13 + 0x28);
        if (DAT_06db4c77 == '\0') {
          FUN_02d965b8(PTR_DAT_069fbb48);
          DAT_06db4c77 = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        fVar40 = fVar40 - fVar51;
        lVar12 = *(long *)(unaff_x26 + 0x28);
        fStack000000000000012c = fStack0000000000000164 - fStack000000000000012c;
        fStack0000000000000128 = fStack000000000000012c * fStack000000000000012c;
        fStack00000000000001d4 =
             SQRT(fStack0000000000000128 + (fVar58 - fVar56) * (fVar58 - fVar56) + fVar40 * fVar40);
        if (lVar12 == 0) goto LAB_03168190;
        lVar21 = *(long *)(lVar12 + 0x10);
        lVar23 = *(long *)PTR_DAT_069ff178;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar21 == 0) goto LAB_03168190;
        uVar54 = *(uint *)(lVar12 + 0x18);
        if (uVar54 < *(uint *)(lVar21 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar54 + 1;
          *(undefined4 *)(lVar21 + (long)(int)uVar54 * 4 + 0x20) = 0x3f800000;
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
        uVar54 = *(uint *)(lVar12 + 0x18);
        if (uVar54 < *(uint *)(lVar21 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar54 + 1;
          *(undefined4 *)(lVar21 + (long)(int)uVar54 * 4 + 0x20) = 0;
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
        uVar54 = *(uint *)(lVar12 + 0x18);
        if (uVar54 < *(uint *)(lVar21 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar54 + 1;
          *(undefined4 *)(lVar21 + (long)(int)uVar54 * 4 + 0x20) = 0;
        }
        else {
          FUN_04059d64(0,lVar12,*(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
        }
      }
      unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
      puVar5 = PTR_DAT_069fd088;
      plVar27 = (long *)PTR_DAT_069fb978;
      lVar12 = *(long *)(unaff_x26 + 0x20);
      if (lVar12 == 0) goto LAB_03168190;
      unaff_x29 = &PTR_FUN_06db4000;
      if (0 < *(int *)(lVar12 + 0x18)) {
        fVar56 = (float)FUN_0409f2f4(lVar12,*(int *)(lVar12 + 0x18) + -1,
                                     *(undefined8 *)PTR_DAT_069fd088);
        if (*(uint *)(lVar25 + 0x18) <= uVar1) goto LAB_0316f2c4;
        fVar51 = fStack0000000000000128 - *(float *)(lVar13 + 0x24);
        fStack000000000000012c = fStack000000000000012c - *(float *)(lVar13 + 0x28);
        fStack0000000000000128 = in_stack_000000a0._4_4_;
        if (in_stack_000000a0._4_4_ <=
            fStack000000000000012c * fStack000000000000012c +
            (fVar56 - *pfVar34) * (fVar56 - *pfVar34) + fVar51 * fVar51) {
          lVar12 = *(long *)(unaff_x26 + 0x20);
          if (lVar12 == 0) goto LAB_03168190;
          fVar56 = in_stack_000000a0._4_4_;
          fVar51 = (float)FUN_0409f2f4(lVar12,*(int *)(lVar12 + 0x18) + -1,*(undefined8 *)puVar5);
          if (*(uint *)(lVar25 + 0x18) <= uVar1) goto LAB_0316f2c4;
          fVar40 = *pfVar34;
          fVar53 = *(float *)(lVar13 + 0x24);
          fVar58 = *(float *)(lVar13 + 0x28);
          if (DAT_06db4c77 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c77 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          puVar6 = PTR_DAT_069fbee0;
          fVar56 = fVar56 - fVar53;
          lVar12 = *(long *)(unaff_x26 + 0x20);
          fStack000000000000012c = fStack000000000000012c - fVar58;
          if (fVar36 <= SQRT(fStack000000000000012c * fStack000000000000012c +
                             (fVar51 - fVar40) * (fVar51 - fVar40) + fVar56 * fVar56)) {
            if (*(uint *)(lVar25 + 0x18) <= uVar1) goto LAB_0316f2c4;
            if (lVar12 == 0) goto LAB_03168190;
            lVar21 = *(long *)(lVar12 + 0x10);
            fVar56 = *pfVar34;
            fVar51 = *(float *)(lVar13 + 0x24);
            fStack000000000000012c = *(float *)(lVar13 + 0x28);
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar21 == 0) goto LAB_03168190;
            uVar54 = *(uint *)(lVar12 + 0x18);
            if (uVar54 < *(uint *)(lVar21 + 0x18)) {
              lVar21 = lVar21 + (long)(int)uVar54 * 0xc;
              *(uint *)(lVar12 + 0x18) = uVar54 + 1;
              *(float *)(lVar21 + 0x20) = fVar56;
              *(float *)(lVar21 + 0x24) = fVar51;
              *(float *)(lVar21 + 0x28) = fStack000000000000012c;
            }
            else {
              FUN_0409f624(lVar12,*(undefined8 *)
                                   (*(long *)(*(long *)(*(long *)puVar6 + 0x20) + 0xc0) + 0x70));
            }
            fVar56 = fStack00000000000001d4;
            lVar12 = *(long *)(unaff_x26 + 0x20);
            if (lVar12 == 0) goto LAB_03168190;
            fVar40 = (float)FUN_0409f2f4(lVar12,*(int *)(lVar12 + 0x18) + -1,*(undefined8 *)puVar5);
            if (*(uint *)(lVar25 + 0x18) <= uVar1) goto LAB_0316f2c4;
            fVar58 = *pfVar34;
            fVar37 = *(float *)(lVar13 + 0x24);
            fVar53 = *(float *)(lVar13 + 0x28);
            if (DAT_06db4c77 == '\0') {
              FUN_02d965b8(PTR_DAT_069fbb48);
              DAT_06db4c77 = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            fVar51 = fVar51 - fVar37;
            lVar12 = *(long *)(unaff_x26 + 0x28);
            fStack000000000000012c = fStack000000000000012c - fVar53;
            fStack0000000000000128 = fStack000000000000012c * fStack000000000000012c;
            fStack00000000000001d4 =
                 fVar56 + SQRT(fStack0000000000000128 +
                               (fVar40 - fVar58) * (fVar40 - fVar58) + fVar51 * fVar51);
            if (lVar12 == 0) goto LAB_03168190;
            lVar13 = *(long *)(lVar12 + 0x10);
            lVar21 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar13 == 0) goto LAB_03168190;
            uVar54 = *(uint *)(lVar12 + 0x18);
            if (uVar54 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar54 + 1;
              *(undefined4 *)(lVar13 + (long)(int)uVar54 * 4 + 0x20) = 0x3f800000;
            }
            else {
              FUN_04059d64(0x3f800000,lVar12,
                           *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
            }
            lVar12 = *in_stack_000000e0;
            if (lVar12 == 0) goto LAB_03168190;
            lVar13 = *(long *)(lVar12 + 0x10);
            lVar21 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar13 == 0) goto LAB_03168190;
            uVar54 = *(uint *)(lVar12 + 0x18);
            if (uVar54 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar54 + 1;
              *(undefined4 *)(lVar13 + (long)(int)uVar54 * 4 + 0x20) = 0;
            }
            else {
              FUN_04059d64(0,lVar12,*(undefined8 *)
                                     (*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
            }
          }
          else {
            if (lVar12 == 0) goto LAB_03168190;
            if (*(uint *)(lVar25 + 0x18) <= uVar1) goto LAB_0316f2c4;
            fStack000000000000012c = *(float *)(lVar13 + 0x28);
            fStack0000000000000128 = *(float *)(lVar13 + 0x24);
            FUN_0409f350(*pfVar34,lVar12,*(int *)(lVar12 + 0x18) + -1,
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
      iVar28 = *(int *)(lVar12 + 0x18);
      fVar58 = (float)FUN_0409f2f4(lVar12,iVar28 + -1,*(undefined8 *)PTR_DAT_069fd088);
      lVar12 = *(long *)(in_stack_00000148 + 0x2c8);
      *(float *)(in_stack_00000148 + 0x2c0) =
           *(float *)(in_stack_00000148 + 0x2c0) + fStack00000000000001d4;
      if (lVar12 == 0) goto LAB_03168190;
      lVar13 = *(long *)(lVar12 + 0x10);
      lVar21 = *(long *)PTR_DAT_069fc3e0;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      if (lVar13 == 0) goto LAB_03168190;
      uVar54 = *(uint *)(lVar12 + 0x18);
      iStack00000000000000d4 = iVar28 + iStack00000000000000d4;
      if (uVar54 < *(uint *)(lVar13 + 0x18)) {
        *(uint *)(lVar12 + 0x18) = uVar54 + 1;
        *(int *)(lVar13 + (long)(int)uVar54 * 4 + 0x20) = iStack00000000000000d4;
      }
      else {
        FUN_03fb3e1c(lVar12,iStack00000000000000d4,
                     *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
      }
      if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
         (lVar12 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),uVar26 & 0xffffffff,*unaff_x21),
         lVar12 == 0)) goto LAB_03168190;
      iStack0000000000000108 = *(int *)(lVar12 + 0x6c);
      unaff_x23 = in_stack_00000148;
      fVar40 = fStack0000000000000128;
      fVar51 = fStack000000000000012c;
      fStack0000000000000130 = fVar58;
    }
LAB_0316c620:
    if ((*(long *)(unaff_x23 + 0x68) == 0) ||
       (lVar12 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar26 & 0xffffffff,*unaff_x21),
       fVar56 = fStack00000000000001d4, lVar12 == 0)) goto LAB_03168190;
    if (*(char *)(lVar12 + 0xb8) != '\0') {
      if (*(long *)(unaff_x23 + 0x68) == 0) goto LAB_03168190;
      uVar49 = *(undefined8 *)(unaff_x23 + 0x20);
      uVar55 = *(undefined8 *)(unaff_x26 + 0x28);
      uVar50 = *(undefined4 *)(unaff_x23 + 0x128);
      lVar12 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),uVar32 & 0xffffffff,
                            *(undefined8 *)PTR_DAT_06a0b440);
      if (lVar12 == 0) goto LAB_03168190;
      FUN_031098f4(uVar50,fVar35,fVar56,uVar49,&stack0x00000238,uVar55,&stack0x00000248,
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
    fVar53 = fStack0000000000000088;
    fVar56 = fStack0000000000000084;
    FUN_0316fb80(fStack000000000000008c,unaff_x23,extraout_x1,uVar32 & 0xffffffff,lVar25,
                 &stack0x00000268,0,*(undefined8 *)(unaff_x26 + 0x78));
    if (iVar31 + 3 < *(int *)(lVar25 + 0x18)) {
      FUN_0317018c(unaff_x23,*(undefined8 *)(unaff_x23 + 0x68),uVar32 & 0xffffffff,lVar25,
                   &stack0x00000258,0);
    }
    puVar6 = PTR_DAT_069ff178;
    puVar5 = PTR_DAT_069fd088;
    lVar12 = *in_stack_00000090;
    if (lVar12 == 0) goto LAB_03168190;
    lVar13 = *(long *)(lVar12 + 0x10);
    fVar37 = *pfVar16;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    if (lVar13 == 0) goto LAB_03168190;
    uVar54 = *(uint *)(lVar12 + 0x18);
    if (uVar54 < *(uint *)(lVar13 + 0x18)) {
      *(uint *)(lVar12 + 0x18) = uVar54 + 1;
      *(float *)(lVar13 + (long)(int)uVar54 * 4 + 0x20) = fVar37;
    }
    else {
      FUN_04059d64(lVar12,*(undefined8 *)
                           (*(long *)(*(long *)(*(long *)puVar6 + 0x20) + 0xc0) + 0x70));
    }
    if ((long)uVar32 < (long)*(int *)(in_stack_00000098 + 0x18)) {
      lVar12 = FUN_0400ff1c(in_stack_00000098,uVar32 & 0xffffffff,*unaff_x21);
      lVar13 = FUN_0400ff1c(in_stack_00000098,uVar32 & 0xffffffff,*unaff_x21);
      lVar21 = *(long *)(unaff_x26 + 0x78);
      if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      fVar37 = (float)FUN_0409f2f4(lVar21,*(int *)(lVar21 + 0x18) + -1,*(undefined8 *)puVar5);
      lVar21 = *(long *)(unaff_x26 + 0x78);
      if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      fVar38 = fVar53;
      fVar46 = fVar56;
      fVar60 = (float)FUN_0409f2f4(lVar21,*(int *)(lVar21 + 0x18) + -2,*(undefined8 *)puVar5);
      if (DAT_06db4c75 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c75 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar37 = fVar37 - fVar60;
      fVar53 = fVar53 - fVar38;
      fVar56 = fVar56 - fVar46;
      fVar38 = SQRT(fVar56 * fVar56 + fVar37 * fVar37 + fVar53 * fVar53);
      if (fVar38 <= DAT_010fd13c) {
        if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
          FUN_02d965b8(plVar27);
          *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
        }
        pfVar24 = *(float **)(*plVar27 + 0xb8);
        fVar37 = *pfVar24;
        fVar53 = pfVar24[1];
        fVar56 = pfVar24[2];
      }
      else {
        fVar37 = fVar37 / fVar38;
        fVar53 = fVar53 / fVar38;
        fVar56 = fVar56 / fVar38;
      }
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      *(float *)(lVar13 + 0x94) = fVar37;
      *(float *)(lVar13 + 0x98) = fVar53;
      *(float *)(lVar13 + 0x9c) = fVar56;
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      *(float *)(lVar12 + 0x88) = fVar37;
      *(float *)(lVar12 + 0x8c) = fVar53;
      *(float *)(lVar12 + 0x90) = fVar56;
      unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
      unaff_x23 = in_stack_00000148;
    }
    if (uVar32 < 2) {
      if (uVar32 == 1) {
        lVar12 = FUN_0400ff1c(in_stack_00000098,0,*unaff_x21);
        lVar13 = FUN_0400ff1c(in_stack_00000098,0,*unaff_x21);
        if (*(long *)(unaff_x26 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        fVar37 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),1,*(undefined8 *)puVar5);
        if (*(long *)(unaff_x26 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        fVar38 = fVar53;
        fVar46 = fVar56;
        fVar60 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)puVar5);
        if (DAT_06db4c75 == '\0') {
          FUN_02d965b8(PTR_DAT_069fbb48);
          DAT_06db4c75 = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        fVar37 = fVar37 - fVar60;
        fVar53 = fVar53 - fVar38;
        fVar56 = fVar56 - fVar46;
        fVar38 = SQRT(fVar56 * fVar56 + fVar37 * fVar37 + fVar53 * fVar53);
        if (fVar38 <= DAT_010fd13c) {
          if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
            FUN_02d965b8(plVar27);
            *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
          }
          pfVar24 = *(float **)(*plVar27 + 0xb8);
          fVar37 = *pfVar24;
          fVar53 = pfVar24[1];
          fVar56 = pfVar24[2];
        }
        else {
          fVar37 = fVar37 / fVar38;
          fVar53 = fVar53 / fVar38;
          fVar56 = fVar56 / fVar38;
        }
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        *(float *)(lVar13 + 0x94) = fVar37;
        *(float *)(lVar13 + 0x98) = fVar53;
        *(float *)(lVar13 + 0x9c) = fVar56;
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        *(float *)(lVar12 + 0x88) = fVar37;
        *(float *)(lVar12 + 0x8c) = fVar53;
        *(float *)(lVar12 + 0x90) = fVar56;
      }
    }
    else if ((long)uVar32 < (long)*(int *)(in_stack_00000098 + 0x18)) {
      if (*(long *)(unaff_x26 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      iVar31 = *(int *)(*(long *)(unaff_x26 + 0x78) + 0x18);
      lVar12 = FUN_0400ff1c(in_stack_00000098,uVar26 & 0xffffffff,*unaff_x21);
      puVar5 = PTR_DAT_069fd088;
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(int *)(lVar12 + 0xbc) + 1 < iVar31) {
        lVar12 = FUN_0400ff1c(in_stack_00000098,uVar26 & 0xffffffff,*unaff_x21);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(int *)(lVar12 + 0x6c) != 3) {
          lVar13 = *(long *)(unaff_x26 + 0x78);
          lVar12 = FUN_0400ff1c(in_stack_00000098,uVar26 & 0xffffffff,*unaff_x21);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          fVar46 = (float)FUN_0409f2f4(lVar13,*(int *)(lVar12 + 0xbc) + 1,*(undefined8 *)puVar5);
          lVar13 = *(long *)(unaff_x26 + 0x78);
          fVar37 = fVar53;
          fVar38 = fVar56;
          lVar12 = FUN_0400ff1c(in_stack_00000098,uVar26 & 0xffffffff,*unaff_x21);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          fVar60 = (float)FUN_0409f2f4(lVar13,*(undefined4 *)(lVar12 + 0xbc),*(undefined8 *)puVar5);
          lVar12 = FUN_0400ff1c(in_stack_00000098,uVar26 & 0xffffffff,*unaff_x21);
          if (DAT_06db4c75 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c75 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fVar64 = DAT_010fd13c;
          fVar46 = fVar46 - fVar60;
          fVar60 = fVar53 - fVar37;
          fVar38 = fVar56 - fVar38;
          fVar56 = SQRT(fVar38 * fVar38 + fVar46 * fVar46 + fVar60 * fVar60);
          if (fVar56 <= DAT_010fd13c) {
            if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
              FUN_02d965b8(plVar27);
              *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
            }
            pfVar24 = *(float **)(*plVar27 + 0xb8);
            fVar41 = *pfVar24;
            fVar60 = pfVar24[1];
            fVar56 = pfVar24[2];
          }
          else {
            fVar41 = fVar46 / fVar56;
            fVar60 = fVar60 / fVar56;
            fVar56 = fVar38 / fVar56;
          }
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          *(float *)(lVar12 + 0x88) = fVar41;
          *(float *)(lVar12 + 0x8c) = fVar60;
          uVar49 = *unaff_x21;
          *(float *)(lVar12 + 0x90) = fVar56;
          uVar54 = *(uint *)(in_stack_00000098 + 0x18);
          lVar12 = FUN_0400ff1c(in_stack_00000098,uVar26 & 0xffffffff,uVar49);
          if (uVar32 != uVar54) {
            fVar53 = fVar37;
          }
          if (DAT_06db4c75 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c75 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fVar53 = fVar53 - fVar37;
          fVar37 = SQRT(fVar38 * fVar38 + fVar46 * fVar46 + fVar53 * fVar53);
          if (fVar37 <= fVar64) {
            if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
              FUN_02d965b8(plVar27);
              *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
            }
            uVar49 = **(undefined8 **)(*plVar27 + 0xb8);
            fVar38 = *(float *)(*(undefined8 **)(*plVar27 + 0xb8) + 1);
          }
          else {
            fVar38 = fVar38 / fVar37;
            uVar49 = CONCAT44(fVar53 / fVar37,fVar46 / fVar37);
            fVar56 = fVar46;
          }
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          *(undefined8 *)(lVar12 + 0x94) = uVar49;
          *(float *)(lVar12 + 0x9c) = fVar38;
        }
      }
    }
    if ((long)uVar32 < (long)*(int *)(in_stack_00000098 + 0x18)) {
      lVar12 = FUN_0400ff1c(in_stack_00000098,uVar32 & 0xffffffff,*unaff_x21);
      lVar13 = FUN_0400ff1c(in_stack_00000098,uVar32 & 0xffffffff,*unaff_x21);
      if ((lVar13 == 0) || (lVar12 == 0)) goto LAB_03168190;
      uVar49 = *(undefined8 *)(lVar13 + 0x48);
      *(undefined4 *)(lVar12 + 0x5c) = *(undefined4 *)(lVar13 + 0x50);
      *(undefined8 *)(lVar12 + 0x54) = uVar49;
    }
    uVar32 = uVar1;
    unaff_x25 = in_stack_00000098;
    if ((long)(*(int *)(lVar25 + 0x18) + -2) <= (long)uVar1) goto LAB_0316df74;
    goto LAB_03169d3c;
  }
LAB_0316df74:
  if (*(char *)(unaff_x23 + 0x84) == '\0') {
    lVar25 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
    if ((*(long *)(unaff_x26 + 0x78) == 0) || (lVar25 == 0)) goto LAB_03168190;
    uVar49 = *unaff_x21;
    *(undefined4 *)(lVar25 + 0xbc) = *(undefined4 *)(*(long *)(unaff_x26 + 0x78) + 0x18);
    lVar25 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,uVar49);
    if (lVar25 == 0) goto LAB_03168190;
    uVar49 = *unaff_x21;
    *(float *)(lVar25 + 0xc0) = *pfVar16;
    lVar25 = FUN_0400ff1c(unaff_x25,0,uVar49);
    if (lVar25 == 0) goto LAB_03168190;
    uVar49 = *unaff_x21;
    *(undefined4 *)(lVar25 + 0xbc) = 0;
    lVar25 = FUN_0400ff1c(unaff_x25,0,uVar49);
    if (lVar25 == 0) goto LAB_03168190;
    *(undefined4 *)(lVar25 + 0xc0) = 0;
    if (*(int *)(unaff_x25 + 0x18) < 3) goto LAB_0316ea6c;
    lVar25 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
    fVar45 = *pfVar16;
    lVar12 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
    if ((lVar12 == 0) || (lVar25 == 0)) goto LAB_03168190;
    uVar49 = *unaff_x21;
    *(float *)(lVar25 + 200) = fVar45 - *(float *)(lVar12 + 0xc0);
    lVar25 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,uVar49);
    if (lVar25 == 0) goto LAB_03168190;
    fVar45 = *(float *)(lVar25 + 200);
    lVar25 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
    lVar12 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
    if (1000.0 <= fVar45) {
      if (lVar12 == 0) goto LAB_03168190;
      fStack00000000000001d0 = *(float *)(lVar12 + 200) / 1000.0;
      uVar49 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
      uVar49 = FUN_05362cb4(uVar49,*(undefined8 *)PTR_DAT_06a0c488,0);
    }
    else {
      if (lVar12 == 0) goto LAB_03168190;
      uVar49 = FUN_054fad00(lVar12 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
      uVar49 = FUN_05362cb4(uVar49,*(undefined8 *)PTR_DAT_06a0c4f0,0);
    }
    if (lVar25 == 0) goto LAB_03168190;
    *(undefined8 *)(lVar25 + 0xd0) = uVar49;
    LeanTween__value((undefined8 *)(lVar25 + 0xd0),uVar49);
    lVar25 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
    if (lVar25 == 0) goto LAB_03168190;
    fVar45 = *(float *)(lVar25 + 0x4c);
    lVar25 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
    if (lVar25 == 0) goto LAB_03168190;
    fVar35 = *(float *)(lVar25 + 0x4c);
    fVar56 = fVar45 - fVar35;
    if (DAT_06db4ece == '\0') {
      FUN_02d965b8(PTR_DAT_069fbb48);
      DAT_06db4ece = '\x01';
    }
    puVar5 = PTR_DAT_069fbb48;
    if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    fVar40 = 0.0;
    fVar51 = SQRT((fVar52 * fVar52 + fVar56 * fVar56) * DAT_010fd194);
    fVar56 = DAT_010fcd14;
    if (DAT_010fcd14 <= fVar51) {
      fVar56 = -1.0;
      fVar51 = (fVar52 * 0.0 + ABS(fVar45 - fVar35) * 50.0 + 0.0) / fVar51;
      fVar45 = 1.0;
      if (fVar51 <= 1.0) {
        fVar45 = fVar51;
      }
      fVar52 = -1.0;
      if (-1.0 <= fVar51) {
        fVar52 = fVar45;
      }
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        fVar56 = -1.0;
        thunk_FUN_02df485c();
      }
      dVar44 = acos((double)fVar52);
      fVar40 = (float)dVar44 * DAT_010fcf40;
    }
    fVar40 = 90.0 - fVar40;
    lVar25 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
    if (fVar40 <= 10.0) {
      uVar49 = FUN_054fad00(&stack0x00000234,*(undefined8 *)PTR_DAT_06a0c498,0);
    }
    else {
      dVar44 = modf((double)fVar40,(double *)&stack0x00000298);
      if (0.0 <= fVar40) {
        if (dVar44 == 0.5) {
          dVar44 = *(double *)(unaff_x26 + 0x80);
          fVar56 = 1.0;
          goto LAB_0316e5fc;
        }
        fStack00000000000001d0 = (float)(int)(fVar40 + 0.5);
      }
      else if (dVar44 == -0.5) {
        dVar44 = *(double *)(unaff_x26 + 0x80);
        fVar56 = -1.0;
LAB_0316e5fc:
        fStack00000000000001d0 = (float)dVar44;
        if (((long)dVar44 & 1U) != 0) {
          fStack00000000000001d0 = (float)dVar44 + fVar56;
        }
      }
      else {
        fStack00000000000001d0 = (float)(int)(fVar40 + -0.5);
      }
      uVar49 = FUN_054fabf8(&stack0x000001d0,0);
    }
    if (lVar25 == 0) goto LAB_03168190;
    *(undefined8 *)(lVar25 + 0xd8) = uVar49;
    LeanTween__value((undefined8 *)(lVar25 + 0xd8),uVar49);
    lVar25 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
    if (lVar25 == 0) goto LAB_03168190;
    fVar45 = *(float *)(lVar25 + 0x4c);
    lVar25 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
    if (lVar25 == 0) goto LAB_03168190;
    fVar52 = *(float *)(lVar25 + 0x4c);
    lVar25 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
    if (lVar25 == 0) goto LAB_03168190;
    fVar35 = *(float *)(lVar25 + 0x48);
    lVar25 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
    if (lVar25 == 0) goto LAB_03168190;
    fVar51 = *(float *)(lVar25 + 0x50);
    lVar25 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
    if (lVar25 == 0) goto LAB_03168190;
    fVar40 = *(float *)(lVar25 + 0x48);
    lVar25 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
    if (lVar25 == 0) goto LAB_03168190;
    fVar58 = *(float *)(lVar25 + 0x50);
    if (DAT_06db4c77 == '\0') {
      FUN_02d965b8(PTR_DAT_069fbb48);
      DAT_06db4c77 = '\x01';
    }
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    fVar51 = fVar51 - fVar58;
    fVar35 = fVar35 - fVar40;
    lVar25 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
    fStack00000000000001d0 =
         (ABS(fVar45 - fVar52) / SQRT(fVar35 * fVar35 + fVar51 * fVar51)) * 100.0;
    uVar49 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c498,0);
joined_r0x0316ea54:
    if (lVar25 == 0) goto LAB_03168190;
    *(undefined8 *)(lVar25 + 0xe0) = uVar49;
    LeanTween__value((undefined8 *)(lVar25 + 0xe0),uVar49);
  }
  else {
    lVar25 = FUN_0400ff1c(unaff_x25,0,*unaff_x21);
    if ((*(long *)(unaff_x26 + 0x78) == 0) || (lVar25 == 0)) goto LAB_03168190;
    uVar49 = *unaff_x21;
    *(undefined4 *)(lVar25 + 0xbc) = *(undefined4 *)(*(long *)(unaff_x26 + 0x78) + 0x18);
    lVar25 = FUN_0400ff1c(unaff_x25,0,uVar49);
    if (lVar25 == 0) goto LAB_03168190;
    *(float *)(lVar25 + 0xc0) = *pfVar16;
    if (2 < *(int *)(unaff_x25 + 0x18)) {
      lVar25 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
      fVar45 = *pfVar16;
      lVar12 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
      if ((lVar12 == 0) || (lVar25 == 0)) goto LAB_03168190;
      uVar49 = *unaff_x21;
      *(float *)(lVar25 + 200) = fVar45 - *(float *)(lVar12 + 0xc0);
      lVar25 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,uVar49);
      if (lVar25 == 0) goto LAB_03168190;
      fVar45 = *(float *)(lVar25 + 200);
      lVar25 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
      lVar12 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
      if (1000.0 <= fVar45) {
        if (lVar12 == 0) goto LAB_03168190;
        fStack00000000000001d0 = *(float *)(lVar12 + 200) / 1000.0;
        uVar49 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
        uVar49 = FUN_05362cb4(uVar49,*(undefined8 *)PTR_DAT_06a0c488,0);
      }
      else {
        if (lVar12 == 0) goto LAB_03168190;
        uVar49 = FUN_054fad00(lVar12 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
        uVar49 = FUN_05362cb4(uVar49,*(undefined8 *)PTR_DAT_06a0c4f0,0);
      }
      if (lVar25 == 0) goto LAB_03168190;
      *(undefined8 *)(lVar25 + 0xd0) = uVar49;
      LeanTween__value((undefined8 *)(lVar25 + 0xd0),uVar49);
      lVar25 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
      if (lVar25 == 0) goto LAB_03168190;
      fVar45 = *(float *)(lVar25 + 0x4c);
      lVar25 = FUN_0400ff1c(unaff_x25,0,*unaff_x21);
      if (lVar25 == 0) goto LAB_03168190;
      fVar35 = *(float *)(lVar25 + 0x4c);
      fVar56 = fVar45 - fVar35;
      if (DAT_06db4ece == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4ece = '\x01';
      }
      puVar5 = PTR_DAT_069fbb48;
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar40 = 0.0;
      fVar51 = SQRT((fVar52 * fVar52 + fVar56 * fVar56) * DAT_010fd194);
      fVar56 = DAT_010fcd14;
      if (DAT_010fcd14 <= fVar51) {
        fVar56 = -1.0;
        fVar51 = (fVar52 * 0.0 + ABS(fVar45 - fVar35) * 50.0 + 0.0) / fVar51;
        fVar45 = 1.0;
        if (fVar51 <= 1.0) {
          fVar45 = fVar51;
        }
        fVar52 = -1.0;
        if (-1.0 <= fVar51) {
          fVar52 = fVar45;
        }
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          fVar56 = -1.0;
          thunk_FUN_02df485c();
        }
        dVar44 = acos((double)fVar52);
        fVar40 = (float)dVar44 * DAT_010fcf40;
      }
      fVar40 = 90.0 - fVar40;
      lVar25 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
      if (fVar40 <= 10.0) {
        uVar49 = FUN_054fad00(&stack0x00000234,*(undefined8 *)PTR_DAT_06a0c498,0);
      }
      else {
        dVar44 = modf((double)fVar40,(double *)&stack0x00000298);
        if (0.0 <= fVar40) {
          if (dVar44 == 0.5) {
            dVar44 = *(double *)(unaff_x26 + 0x80);
            fVar56 = 1.0;
            goto LAB_0316e5d0;
          }
          fStack00000000000001d0 = (float)(int)(fVar40 + 0.5);
        }
        else if (dVar44 == -0.5) {
          dVar44 = *(double *)(unaff_x26 + 0x80);
          fVar56 = -1.0;
LAB_0316e5d0:
          fStack00000000000001d0 = (float)dVar44;
          if (((long)dVar44 & 1U) != 0) {
            fStack00000000000001d0 = (float)dVar44 + fVar56;
          }
        }
        else {
          fStack00000000000001d0 = (float)(int)(fVar40 + -0.5);
        }
        uVar49 = FUN_054fabf8(&stack0x000001d0,0);
      }
      if (lVar25 == 0) goto LAB_03168190;
      *(undefined8 *)(lVar25 + 0xd8) = uVar49;
      LeanTween__value((undefined8 *)(lVar25 + 0xd8),uVar49);
      lVar25 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
      if (lVar25 == 0) goto LAB_03168190;
      fVar45 = *(float *)(lVar25 + 0x4c);
      lVar25 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
      if (lVar25 == 0) goto LAB_03168190;
      fVar52 = *(float *)(lVar25 + 0x4c);
      lVar25 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
      if (lVar25 == 0) goto LAB_03168190;
      fVar35 = *(float *)(lVar25 + 0x48);
      lVar25 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*unaff_x21);
      if (lVar25 == 0) goto LAB_03168190;
      fVar51 = *(float *)(lVar25 + 0x50);
      lVar25 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
      if (lVar25 == 0) goto LAB_03168190;
      fVar40 = *(float *)(lVar25 + 0x48);
      lVar25 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
      if (lVar25 == 0) goto LAB_03168190;
      fVar58 = *(float *)(lVar25 + 0x50);
      if (DAT_06db4c77 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c77 = '\x01';
      }
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar51 = fVar51 - fVar58;
      fVar35 = fVar35 - fVar40;
      lVar25 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
      fStack00000000000001d0 =
           (ABS(fVar45 - fVar52) / SQRT(fVar35 * fVar35 + fVar51 * fVar51)) * 100.0;
      uVar49 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c498,0);
      goto joined_r0x0316ea54;
    }
  }
LAB_0316ea6c:
  fVar45 = 1000.0;
  if (1000.0 <= *pfVar16) {
    fVar45 = 1000.0;
    fStack00000000000001d0 = *pfVar16 / 1000.0;
    uVar49 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
    puVar17 = (undefined8 *)PTR_DAT_06a0c488;
  }
  else {
    uVar49 = FUN_054fad00(pfVar16,*(undefined8 *)PTR_DAT_06a0c498,0);
    puVar17 = (undefined8 *)PTR_DAT_06a0c4f0;
  }
  uVar49 = FUN_05362cb4(uVar49,*puVar17,0);
  *(undefined8 *)(unaff_x23 + 0x2d0) = uVar49;
  LeanTween__value(unaff_x23 + 0x2d0,uVar49);
  if (*(int *)(unaff_x25 + 0x18) == 2) {
    lVar25 = FUN_0400ff1c(unaff_x25,0,*unaff_x21);
    if (lVar25 == 0) goto LAB_03168190;
    fVar52 = *(float *)(lVar25 + 200);
    lVar25 = FUN_0400ff1c(unaff_x25,0,*unaff_x21);
    lVar12 = FUN_0400ff1c(unaff_x25,0,*unaff_x21);
    if (1000.0 <= fVar52) {
      if (lVar12 == 0) goto LAB_03168190;
      fVar45 = 1000.0;
      fStack00000000000001d0 = *(float *)(lVar12 + 200) / 1000.0;
      uVar49 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
      uVar49 = FUN_05362cb4(uVar49,*(undefined8 *)PTR_DAT_06a0c488,0);
    }
    else {
      if (lVar12 == 0) goto LAB_03168190;
      uVar49 = FUN_054fad00(lVar12 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
      uVar49 = FUN_05362cb4(uVar49,*(undefined8 *)PTR_DAT_06a0c4f0,0);
    }
    if (lVar25 == 0) goto LAB_03168190;
    *(undefined8 *)(lVar25 + 0xd0) = uVar49;
    LeanTween__value((undefined8 *)(lVar25 + 0xd0),uVar49);
  }
  if (*(char *)(unaff_x23 + 0x84) == '\0') {
    lVar25 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*unaff_x21);
    if (lVar25 == 0) goto LAB_03168190;
    *(undefined8 *)(lVar25 + 0xd0) = *(undefined8 *)PTR_DAT_069fcde0;
    LeanTween__value();
  }
  puVar6 = PTR_DAT_06a0b440;
  puVar5 = PTR_DAT_069fd088;
  fVar52 = fVar45;
  if (iStack0000000000000058 != 0) {
    if (*(long *)(unaff_x26 + 0x78) != 0) {
      fVar35 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)PTR_DAT_069fd088);
      if (*(long *)(unaff_x26 + 0x78) != 0) {
        FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)puVar5);
        lVar25 = FUN_0400ff1c(unaff_x25,0,*(undefined8 *)puVar6);
        puVar7 = PTR_DAT_06a0b7d0;
        puVar6 = PTR_DAT_069fbb48;
        if (lVar25 != 0) {
          lVar12 = *(long *)(unaff_x26 + 0x78);
          fVar52 = *(float *)(lVar25 + 200) * 0.5;
          fVar51 = 5.0;
          if (fVar52 <= 5.0) {
            fVar51 = fVar52;
          }
          if (lVar12 != 0) {
            uVar26 = (ulong)(uint)fStack0000000000000054;
            iVar31 = 1;
            fVar35 = fStack0000000000000050 * 10.0 + fVar35;
            uVar32 = (ulong)(uint)fVar35;
            fVar40 = fStack0000000000000054 * 10.0 + fVar56;
            fVar58 = 0.0;
            do {
              fVar56 = (float)uVar26;
              fVar52 = (float)uVar32;
              if (*(int *)(lVar12 + 0x18) <= iVar31) goto LAB_0316ee54;
              fVar36 = (float)FUN_0409f2f4(lVar12,iVar31 + -1,*(undefined8 *)puVar5);
              if (*(long *)(unaff_x26 + 0x78) == 0) break;
              fVar43 = fVar52;
              fVar53 = fVar56;
              fVar37 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar31,*(undefined8 *)puVar5)
              ;
              if (DAT_06db4c77 == '\0') {
                FUN_02d965b8(puVar6);
                DAT_06db4c77 = '\x01';
              }
              if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              fVar43 = fVar52 - fVar43;
              fVar56 = fVar56 - fVar53;
              fVar52 = fVar56 * fVar56;
              fVar58 = fVar58 + SQRT(fVar52 + (fVar36 - fVar37) * (fVar36 - fVar37) +
                                              fVar43 * fVar43);
              if (fVar51 < fVar58) goto LAB_0316ee54;
              if (*(long *)(unaff_x26 + 0x78) == 0) break;
              uVar50 = FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)puVar5);
              if (*(long *)(unaff_x26 + 0x78) == 0) break;
              FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar31,*(undefined8 *)puVar5);
              fVar52 = (float)FUN_031765b0(uVar50,fVar52,fVar56,fVar35,fVar45,fVar40,0);
              if (*(long *)(unaff_x26 + 0x78) == 0) break;
              fVar43 = fVar56;
              fVar53 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar31,*(undefined8 *)puVar5)
              ;
              fVar37 = fVar58 / fVar51;
              fVar36 = 1.0;
              if (fVar37 <= 1.0) {
                fVar36 = fVar37;
              }
              uVar32 = (ulong)(uint)fVar36;
              fVar38 = 0.0;
              if (0.0 <= fVar37) {
                fVar38 = fVar36;
              }
              if (*(long *)(unaff_x26 + 0x78) == 0) break;
              FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar31,*(undefined8 *)puVar5);
              if (*(long *)(unaff_x26 + 0x78) == 0) break;
              uVar26 = (ulong)(uint)(fVar56 + fVar38 * (fVar43 - fVar56));
              FUN_0409f350(fVar52 + fVar38 * (fVar53 - fVar52),*(long *)(unaff_x26 + 0x78),iVar31,
                           *(undefined8 *)puVar7);
              lVar12 = *(long *)(unaff_x26 + 0x78);
              iVar31 = iVar31 + 1;
            } while (lVar12 != 0);
          }
        }
      }
    }
    goto LAB_03168190;
  }
LAB_0316ee54:
  puVar5 = PTR_DAT_069fd088;
  if (bVar2) {
    lVar25 = *(long *)(unaff_x26 + 0x78);
    if (lVar25 == 0) goto LAB_03168190;
    fVar45 = (float)FUN_0409f2f4(lVar25,*(int *)(lVar25 + 0x18) + -1,*(undefined8 *)PTR_DAT_069fd088
                                );
    puVar6 = PTR_DAT_06a0b440;
    if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
    fVar35 = fVar52;
    FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)puVar5);
    lVar25 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -2,*(undefined8 *)puVar6);
    puVar7 = PTR_DAT_06a0b7d0;
    puVar6 = PTR_DAT_069fbb48;
    if (lVar25 == 0) goto LAB_03168190;
    fVar40 = *(float *)(lVar25 + 200) * 0.5;
    fVar51 = 5.0;
    if (fVar40 <= 5.0) {
      fVar51 = fVar40;
    }
    if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
    iVar31 = *(int *)(*(long *)(unaff_x26 + 0x78) + 0x18);
    if (0 < iVar31 + -2) {
      fVar40 = 0.0;
      iVar31 = iVar31 + -1;
      uVar32 = (ulong)(uint)fVar45;
      uVar26 = (ulong)(uint)fVar56;
      do {
        fVar36 = (float)uVar32;
        fVar58 = (float)uVar26;
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        fVar43 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar31,*(undefined8 *)puVar5);
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        iVar31 = iVar31 + -1;
        fVar53 = fVar58;
        fVar37 = fVar36;
        fVar38 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar31,*(undefined8 *)puVar5);
        if (DAT_06db4c77 == '\0') {
          FUN_02d965b8(puVar6);
          DAT_06db4c77 = '\x01';
        }
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        fVar40 = fVar40 + SQRT((fVar36 - fVar37) * (fVar36 - fVar37) +
                               (fVar43 - fVar38) * (fVar43 - fVar38) +
                               (fVar58 - fVar53) * (fVar58 - fVar53));
        if (fVar51 < fVar40) break;
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar31,*(undefined8 *)puVar5);
        fVar58 = fVar56;
        fVar36 = (float)FUN_031765b0(fVar45,fVar52,fVar56,fStack0000000000000060 * 10.0 + fVar45,
                                     fVar35,fStack000000000000005c * 10.0 + fVar56,0);
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        fVar53 = fVar58;
        fVar37 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar31,*(undefined8 *)puVar5);
        fVar38 = fVar40 / fVar51;
        fVar43 = 1.0;
        if (fVar38 <= 1.0) {
          fVar43 = fVar38;
        }
        uVar26 = (ulong)(uint)fVar43;
        fVar46 = 0.0;
        if (0.0 <= fVar38) {
          fVar46 = fVar43;
        }
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar31,*(undefined8 *)puVar5);
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        uVar32 = (ulong)(uint)(fVar58 + fVar46 * (fVar53 - fVar58));
        FUN_0409f350(fVar36 + fVar46 * (fVar37 - fVar36),*(long *)(unaff_x26 + 0x78),iVar31,
                     *(undefined8 *)puVar7);
      } while (1 < iVar31);
    }
  }
  puVar5 = PTR_DAT_06a0b440;
  lVar25 = FUN_0400ff1c(unaff_x25,0,*(undefined8 *)PTR_DAT_06a0b440);
  lVar12 = FUN_0400ff1c(unaff_x25,0,*(undefined8 *)puVar5);
  if (lVar12 != 0) {
    fVar45 = *(float *)(lVar12 + 0x94);
    lVar12 = FUN_0400ff1c(unaff_x25,0,*(undefined8 *)puVar5);
    if (lVar12 != 0) {
      fVar52 = *(float *)(lVar12 + 0x9c);
      if (DAT_06db4c75 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c75 = '\x01';
      }
      puVar6 = PTR_DAT_069fbb48;
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar56 = DAT_010fd13c;
      fVar35 = SQRT(fVar45 * fVar45 + fVar52 * fVar52);
      if (fVar35 <= DAT_010fd13c) {
        if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
          FUN_02d965b8(PTR_DAT_069fb978);
          *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
        }
        uVar49 = **(undefined8 **)(*plVar27 + 0xb8);
        fVar52 = *(float *)(*(undefined8 **)(*plVar27 + 0xb8) + 1);
      }
      else {
        fVar52 = fVar52 / fVar35;
        uVar49 = CONCAT44(0.0 / fVar35,fVar45 / fVar35);
      }
      if (lVar25 != 0) {
        *(undefined8 *)(lVar25 + 0x94) = uVar49;
        uVar49 = *(undefined8 *)puVar5;
        *(float *)(lVar25 + 0x9c) = fVar52;
        lVar25 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,uVar49);
        lVar12 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*(undefined8 *)puVar5);
        if (lVar12 != 0) {
          fVar45 = *(float *)(lVar12 + 0x94);
          lVar12 = FUN_0400ff1c(unaff_x25,*(int *)(unaff_x25 + 0x18) + -1,*(undefined8 *)puVar5);
          if (lVar12 != 0) {
            fVar52 = *(float *)(lVar12 + 0x9c);
            if (DAT_06db4c75 == '\0') {
              FUN_02d965b8(PTR_DAT_069fbb48);
              DAT_06db4c75 = '\x01';
            }
            if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            fVar35 = SQRT(fVar45 * fVar45 + fVar52 * fVar52);
            if (fVar35 <= fVar56) {
              if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
                FUN_02d965b8(PTR_DAT_069fb978);
                *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
              }
              uVar49 = **(undefined8 **)(*plVar27 + 0xb8);
              fVar52 = *(float *)(*(undefined8 **)(*plVar27 + 0xb8) + 1);
            }
            else {
              fVar52 = fVar52 / fVar35;
              uVar49 = CONCAT44(0.0 / fVar35,fVar45 / fVar35);
            }
            if (lVar25 != 0) {
              uVar55 = *(undefined8 *)(unaff_x26 + 0x78);
              *(undefined8 *)(lVar25 + 0x94) = uVar49;
              *(float *)(lVar25 + 0x9c) = fVar52;
              return uVar55;
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


