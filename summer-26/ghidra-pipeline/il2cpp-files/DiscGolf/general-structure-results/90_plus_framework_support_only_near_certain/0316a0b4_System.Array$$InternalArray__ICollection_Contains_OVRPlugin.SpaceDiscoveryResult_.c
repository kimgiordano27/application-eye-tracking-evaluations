/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 0316a0b4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 107
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array__InternalArray__ICollection_Contains<OVRPlugin_SpaceDiscoveryResult>
          (float param_1,undefined1 param_2 [16],ulong param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined8 extraout_x1;
  ulong extraout_x1_00;
  char cVar15;
  undefined8 *puVar16;
  long lVar17;
  ulong uVar18;
  float *pfVar19;
  long lVar20;
  undefined8 *unaff_x19;
  float *pfVar21;
  ulong unaff_x20;
  ulong uVar22;
  long *plVar23;
  undefined8 *puVar24;
  int unaff_w22;
  byte bVar25;
  int iVar26;
  int iVar27;
  long unaff_x23;
  int iVar28;
  ulong unaff_x24;
  long unaff_x25;
  undefined4 *puVar29;
  undefined1 *unaff_x26;
  int unaff_w27;
  float *pfVar30;
  long *unaff_x28;
  undefined **unaff_x29;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  double dVar36;
  ulong uVar37;
  float fVar38;
  float fVar39;
  undefined4 uVar40;
  float fVar41;
  float fVar42;
  uint uVar43;
  undefined8 uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined8 uVar48;
  float fVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  float fVar52;
  float fVar53;
  undefined4 uVar54;
  float unaff_s15;
  float fVar55;
  int iVar56;
  undefined8 in_stack_00000048;
  float fStack0000000000000050;
  float fStack0000000000000054;
  int iStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined8 in_stack_00000070;
  long *in_stack_00000078;
  undefined8 in_stack_00000080;
  float fStack0000000000000088;
  float fStack000000000000008c;
  long *in_stack_00000090;
  long in_stack_00000098;
  float fStack00000000000000a0;
  float fStack00000000000000a4;
  float in_stack_000000b0;
  long *in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  int iStack00000000000000d4;
  float *in_stack_000000d8;
  long *in_stack_000000e0;
  float fStack00000000000000f0;
  float fStack00000000000000f4;
  float fStack00000000000000f8;
  float fStack00000000000000fc;
  float fStack0000000000000100;
  float fStack0000000000000104;
  int iStack0000000000000108;
  float fStack000000000000010c;
  ulong in_stack_00000110;
  float fStack0000000000000128;
  float fStack000000000000012c;
  float in_stack_00000130;
  long in_stack_00000148;
  undefined8 in_stack_00000160;
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
  
  puVar16 = unaff_x19;
  lVar11 = unaff_x25;
  iStack00000000000000d4 = unaff_w27;
  fStack00000000000001d0 = param_1;
FUN_0316a0c4:
  uVar9 = FUN_054fabf8(&stack0x000001d0,0);
  uVar22 = unaff_x20;
  if (unaff_x23 != 0) {
LAB_0316a0d8:
    fVar38 = (float)param_3;
    *(undefined8 *)(unaff_x23 + 0xd8) = uVar9;
    LeanTween__value((undefined8 *)(unaff_x23 + 0xd8),uVar9);
    puVar24 = (undefined8 *)PTR_DAT_06a0b440;
    lVar10 = FUN_0400ff1c(lVar11,unaff_w22,*(undefined8 *)PTR_DAT_06a0b440);
    if (lVar10 != 0) {
      fVar39 = *(float *)(lVar10 + 0x4c);
      lVar10 = FUN_0400ff1c(lVar11,uVar22 & 0xffffffff,*puVar24);
      if (lVar10 != 0) {
        fVar41 = *(float *)(lVar10 + 0x4c);
        lVar10 = FUN_0400ff1c(lVar11,unaff_w22,*puVar24);
        if (lVar10 != 0) {
          fVar42 = *(float *)(lVar10 + 0x48);
          lVar10 = FUN_0400ff1c(lVar11,unaff_w22,*puVar24);
          if (lVar10 != 0) {
            fVar45 = *(float *)(lVar10 + 0x50);
            lVar10 = FUN_0400ff1c(lVar11,uVar22 & 0xffffffff,*puVar24);
            if (lVar10 != 0) {
              fVar47 = *(float *)(lVar10 + 0x48);
              lVar10 = FUN_0400ff1c(lVar11,uVar22 & 0xffffffff,*puVar24);
              if (lVar10 != 0) {
                fVar49 = *(float *)(lVar10 + 0x50);
                if (DAT_06db4c77 == '\0') {
                  FUN_02d965b8(PTR_DAT_069fbb48);
                  DAT_06db4c77 = '\x01';
                }
                if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                fVar45 = fVar45 - fVar49;
                fVar42 = fVar42 - fVar47;
                lVar11 = FUN_0400ff1c(lVar11,unaff_w22,*puVar24);
                fVar47 = 100.0;
                fStack00000000000001d0 =
                     (ABS(fVar39 - fVar41) / SQRT(fVar42 * fVar42 + fVar45 * fVar45)) * 100.0;
                uVar9 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c498,0);
                if (lVar11 == 0) goto LAB_03168190;
                *(undefined8 *)(lVar11 + 0xe0) = uVar9;
                LeanTween__value((undefined8 *)(lVar11 + 0xe0),uVar9);
                lVar11 = *(long *)(unaff_x26 + 0x78);
                if (lVar11 == 0) goto LAB_03168190;
                if (2 < *(int *)(lVar11 + 0x18)) {
                  fStack0000000000000104 =
                       (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -1,*puVar16);
                  lVar11 = *(long *)(unaff_x26 + 0x78);
                  if (lVar11 == 0) goto LAB_03168190;
                  fVar39 = fVar47;
                  fVar41 = fVar38;
                  fVar42 = (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -2,*puVar16);
                  if (DAT_06db4c75 == '\0') {
                    FUN_02d965b8(PTR_DAT_069fbb48);
                    DAT_06db4c75 = '\x01';
                  }
                  if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  fStack0000000000000104 = fStack0000000000000104 - fVar42;
                  fVar47 = fVar47 - fVar39;
                  fVar38 = fVar38 - fVar41;
                  fStack00000000000000fc =
                       SQRT(fVar38 * fVar38 +
                            fStack0000000000000104 * fStack0000000000000104 + fVar47 * fVar47);
                  if (fStack00000000000000fc <= DAT_010fd13c) {
                    if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
                      FUN_02d965b8(unaff_x28);
                      *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
                    }
                    pfVar21 = *(float **)(*unaff_x28 + 0xb8);
                    fStack0000000000000104 = *pfVar21;
                    fStack0000000000000100 = pfVar21[1];
                    fStack00000000000000fc = pfVar21[2];
                  }
                  else {
                    fStack0000000000000104 = fStack0000000000000104 / fStack00000000000000fc;
                    fStack0000000000000100 = fVar47 / fStack00000000000000fc;
                    fStack00000000000000fc = fVar38 / fStack00000000000000fc;
                  }
                }
LAB_0316a33c:
                unaff_x20 = unaff_x24;
                lVar11 = *(long *)(unaff_x26 + 0x28);
                if (lVar11 == 0) goto LAB_03168190;
                lVar10 = *(long *)(unaff_x26 + 0x20);
                *(undefined4 *)(lVar11 + 0x18) = 0;
                *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                if (lVar10 == 0) goto LAB_03168190;
                fVar38 = 0.0;
                *(undefined4 *)(lVar10 + 0x18) = 0;
                *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                if ((*(uint *)(in_stack_00000170 + 0x18) <= unaff_x20) ||
                   (unaff_x24 = unaff_x20 + 1, *(uint *)(in_stack_00000170 + 0x18) <= unaff_x24))
                goto LAB_0316f2c4;
                lVar11 = in_stack_00000170 + unaff_x20 * 0xc;
                lVar10 = in_stack_00000170 + unaff_x24 * 0xc;
                fVar41 = *in_stack_000000d8;
                pfVar21 = (float *)(lVar11 + 0x20);
                fVar45 = *pfVar21;
                fVar39 = *(float *)(lVar11 + 0x24);
                fVar42 = *(float *)(lVar11 + 0x28);
                pfVar30 = (float *)(lVar10 + 0x20);
                fVar47 = *pfVar30;
                fVar53 = *(float *)(lVar10 + 0x24);
                fVar49 = *(float *)(lVar10 + 0x28);
                if (DAT_06db4c77 == '\0') {
                  FUN_02d965b8(PTR_DAT_069fbb48);
                  DAT_06db4c77 = '\x01';
                }
                if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                   (lVar12 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),uVar22 & 0xffffffff,
                                          *puVar24), lVar12 == 0)) goto LAB_03168190;
                fVar39 = fVar39 - fVar53;
                fVar42 = fVar42 - fVar49;
                uVar37 = (ulong)(uint)fVar42;
                uVar18 = (ulong)(uint)(fVar42 * fVar42);
                fVar41 = fVar41 + SQRT(fVar42 * fVar42 +
                                       (fVar45 - fVar47) * (fVar45 - fVar47) + fVar39 * fVar39);
                iVar28 = (int)unaff_x20;
                if (*(int *)(lVar12 + 0x6c) == 0) {
                  if ((*(uint *)(in_stack_00000170 + 0x18) <= unaff_x20) ||
                     (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24)) goto LAB_0316f2c4;
                  fVar45 = *pfVar21;
                  fVar39 = *(float *)(lVar11 + 0x24);
                  fVar47 = *pfVar30;
                  fVar53 = *(float *)(lVar10 + 0x24);
                  fVar42 = *(float *)(lVar11 + 0x28);
                  fVar49 = *(float *)(lVar10 + 0x28);
                  if (DAT_06db4c77 == '\0') {
                    FUN_02d965b8(PTR_DAT_069fbb48);
                    DAT_06db4c77 = '\x01';
                  }
                  if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  if (unaff_x20 < 2) {
                    bVar7 = false;
                  }
                  else {
                    if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
                    lVar12 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),iVar28 + -2,*puVar24);
                    if (lVar12 == 0) goto LAB_03168190;
                    if (*(int *)(lVar12 + 0x6c) == 1) {
                      bVar7 = true;
                    }
                    else {
                      if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                         (lVar12 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),iVar28 + -2,
                                                *puVar24), lVar12 == 0)) goto LAB_03168190;
                      bVar7 = *(int *)(lVar12 + 0x6c) == 2;
                    }
                  }
                  fVar33 = 0.0;
                  if (unaff_x20 == 1) {
                    fVar33 = fStack0000000000000064;
                  }
                  fVar34 = fStack0000000000000068;
                  if (unaff_x20 != *(int *)(in_stack_00000170 + 0x18) - 3) {
                    fVar34 = 1.0;
                  }
                  if (fVar34 <= fVar33) {
                    iStack0000000000000108 = 0;
                  }
                  else {
                    fVar39 = fVar39 - fVar53;
                    fVar42 = fVar42 - fVar49;
                    fVar39 = DAT_010fcf10 /
                             SQRT(fVar42 * fVar42 +
                                  (fVar45 - fVar47) * (fVar45 - fVar47) + fVar39 * fVar39);
                    do {
                      uVar18 = *(ulong *)(in_stack_00000170 + 0x18);
                      if (fVar39 + fVar33 <= 1.0) {
                        bVar25 = 0;
                      }
                      else if (unaff_x20 == (int)uVar18 - 3) {
                        bVar25 = *(byte *)(in_stack_00000148 + 0x84) ^ 1;
                      }
                      else {
                        bVar25 = 0;
                      }
                      bVar8 = bVar25 != 0;
                      fVar42 = 1.0;
                      if (!bVar8) {
                        fVar42 = fVar33;
                      }
                      if (((uVar18 & 0xffffffff) <= unaff_x20) ||
                         ((uVar18 & 0xffffffff) <= unaff_x24)) goto LAB_0316f2c4;
                      uVar50 = *(undefined4 *)(lVar11 + 0x24);
                      uVar40 = *(undefined4 *)(lVar11 + 0x28);
                      fVar45 = *pfVar21;
                      FUN_04059a68(in_stack_000000c8,unaff_x20 & 0xffffffff,
                                   *(undefined8 *)PTR_DAT_06a0a108);
                      fVar49 = in_stack_0000026c;
                      fVar53 = in_stack_00000270;
                      fVar33 = (float)FUN_0316f340(in_stack_00000268,in_stack_0000026c,
                                                   in_stack_00000270,fVar45,uVar50,uVar40);
                      _fStack00000000000001c0 = CONCAT44(fVar49,fVar33);
                      fVar45 = in_stack_00000160._4_4_;
                      fVar47 = (float)in_stack_00000110;
                      if (iStack0000000000000108 == 3) {
                        iStack0000000000000108 = 0;
                        fVar45 = fVar53;
                        fVar47 = fVar33;
                        fStack0000000000000128 = fVar49;
                        fStack000000000000012c = fVar53;
                        in_stack_00000130 = fVar33;
                      }
                      unaff_x29 = &PTR_FUN_06db4000;
                      in_stack_000001c8 = fVar53;
                      if (DAT_06db4c77 == '\0') {
                        FUN_02d965b8(PTR_DAT_069fbb48);
                        DAT_06db4c77 = '\x01';
                      }
                      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                      }
                      fVar32 = in_stack_000001c8;
                      if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
                      fVar52 = *pfVar30;
                      fVar46 = *(float *)(lVar10 + 0x24);
                      fVar35 = fStack00000000000001c0;
                      fVar31 = fStack00000000000001c4;
                      fVar55 = *(float *)(lVar10 + 0x28);
                      if (DAT_06db4c77 == '\0') {
                        FUN_02d965b8(PTR_DAT_069fbb48);
                        DAT_06db4c77 = '\x01';
                      }
                      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                      }
                      lVar12 = *(long *)(unaff_x26 + 0x20);
                      if (lVar12 == 0) goto LAB_03168190;
                      fVar31 = fVar31 - fVar46;
                      iVar26 = *(int *)(lVar12 + 0x18);
                      fVar32 = fVar32 - fVar55;
                      fVar46 = fVar32 * fVar32;
                      fVar35 = SQRT(fVar46 + (fVar35 - fVar52) * (fVar35 - fVar52) + fVar31 * fVar31
                                   );
                      if (iVar26 < 1) {
                        lVar12 = *(long *)(unaff_x26 + 0x78);
                        if (lVar12 == 0) goto LAB_03168190;
                        iVar26 = *(int *)(lVar12 + 0x18);
                        if (0 < iVar26) goto LAB_0316b4d8;
                      }
                      else {
LAB_0316b4d8:
                        fVar31 = (float)FUN_0409f2f4(lVar12,iVar26 + -1,
                                                     *(undefined8 *)PTR_DAT_069fd088);
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
                        plVar23 = (long *)PTR_DAT_069fb978;
                        fStack00000000000000f8 = fStack00000000000000f8 - fVar31;
                        fStack00000000000000f4 = fStack00000000000000f4 - fVar46;
                        fStack00000000000000f0 = fStack00000000000000f0 - fVar32;
                        fVar32 = SQRT(fStack00000000000000f0 * fStack00000000000000f0 +
                                      fStack00000000000000f8 * fStack00000000000000f8 +
                                      fStack00000000000000f4 * fStack00000000000000f4);
                        if (fVar32 <= DAT_010fd13c) {
                          if (DAT_06db4c71 == '\0') {
                            FUN_02d965b8(PTR_DAT_069fb978);
                            DAT_06db4c71 = '\x01';
                          }
                          pfVar19 = *(float **)(*(long *)PTR_DAT_069fb978 + 0xb8);
                          fStack00000000000000f8 = *pfVar19;
                          fStack00000000000000f4 = pfVar19[1];
                          fStack00000000000000f0 = pfVar19[2];
                          plVar23 = (long *)PTR_DAT_069fb978;
                        }
                        else {
                          fStack00000000000000f8 = fStack00000000000000f8 / fVar32;
                          fStack00000000000000f4 = fStack00000000000000f4 / fVar32;
                          fStack00000000000000f0 = fStack00000000000000f0 / fVar32;
                          if (DAT_06db4c71 == '\0') {
                            FUN_02d965b8(PTR_DAT_069fb978);
                            DAT_06db4c71 = '\x01';
                          }
                        }
                        pfVar19 = *(float **)(*plVar23 + 0xb8);
                        if (fStack00000000000000a4 <=
                            (fStack00000000000000fc - pfVar19[2]) *
                            (fStack00000000000000fc - pfVar19[2]) +
                            (fStack0000000000000104 - *pfVar19) *
                            (fStack0000000000000104 - *pfVar19) +
                            (fStack0000000000000100 - pfVar19[1]) *
                            (fStack0000000000000100 - pfVar19[1])) {
                          if (DAT_06db4ece == '\0') {
                            FUN_02d965b8(PTR_DAT_069fbb48);
                            DAT_06db4ece = '\x01';
                          }
                          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                            thunk_FUN_02df485c();
                          }
                          unaff_s15 = 0.0;
                          fVar32 = SQRT((fStack00000000000000fc * fStack00000000000000fc +
                                        fStack0000000000000100 * fStack0000000000000100 +
                                        fStack0000000000000104 * fStack0000000000000104) *
                                        (fStack00000000000000f0 * fStack00000000000000f0 +
                                        fStack00000000000000f8 * fStack00000000000000f8 +
                                        fStack00000000000000f4 * fStack00000000000000f4));
                          if (DAT_010fcd14 <= fVar32) {
                            fVar32 = (fStack00000000000000fc * fStack00000000000000f0 +
                                     fStack0000000000000104 * fStack00000000000000f8 +
                                     fStack0000000000000100 * fStack00000000000000f4) / fVar32;
                            fVar31 = 1.0;
                            if (fVar32 <= 1.0) {
                              fVar31 = fVar32;
                            }
                            fVar46 = -1.0;
                            if (-1.0 <= fVar32) {
                              fVar46 = fVar31;
                            }
                            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                              thunk_FUN_02df485c();
                            }
                            dVar36 = acos((double)fVar46);
                            unaff_s15 = (float)dVar36 * DAT_010fcf40;
                          }
                          bVar8 = false;
                          bVar5 = true;
                          bVar6 = false;
                          if (*(float *)(in_stack_00000148 + 0x80) < unaff_s15) {
                            bVar8 = false;
                            bVar5 = false;
                            bVar6 = true;
                            if (!NAN(fVar35)) {
                              bVar8 = fVar35 < 1.5;
                              bVar5 = fVar35 == 1.5;
                              bVar6 = false;
                            }
                          }
                          bVar8 = bVar25 != 0 ||
                                  (!bVar5 && bVar8 == bVar6) &&
                                  1.0 <= SQRT((fStack000000000000012c - fVar53) *
                                              (fStack000000000000012c - fVar53) +
                                              (fStack0000000000000128 - fVar49) *
                                              (fStack0000000000000128 - fVar49) +
                                              (in_stack_00000130 - fVar33) *
                                              (in_stack_00000130 - fVar33));
                        }
                      }
                      puVar24 = (undefined8 *)PTR_DAT_06a0b440;
                      if (*(char *)(in_stack_00000148 + 0x5d6) != '\0') {
                        if (*(long *)(in_stack_00000148 + 0x20) == 0) goto LAB_03168190;
                        FUN_03199614(*(long *)(in_stack_00000148 + 0x20),&stack0x000001c0,0);
                      }
                      bVar5 = bVar8;
                      if (fVar34 < fVar39 + fVar42 + DAT_010fd060) {
                        bVar6 = bVar8;
                        if (fStack00000000000000a0 <= fVar35) {
                          bVar6 = true;
                        }
                        if (bVar6 == false && (in_stack_000000c0._4_1_ & 1) == 0) {
                          if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
                          fVar42 = 1.0;
                          _fStack00000000000001c0 = *(ulong *)pfVar30;
                          in_stack_000001c8 = *(float *)(lVar10 + 0x28);
                          bVar5 = true;
                        }
                      }
                      if (fVar39 + fVar42 <= fVar34) {
                        fVar49 = fStack00000000000001c0;
                        fVar53 = fStack00000000000001c4;
                      }
                      else {
                        if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
                        _fStack00000000000001c0 = *(ulong *)pfVar30;
                        fVar42 = 1.0;
                        in_stack_000001c8 = *(float *)(lVar10 + 0x28);
                        bVar5 = true;
                        fVar49 = *pfVar30;
                        fVar53 = *(float *)(lVar10 + 0x24);
                      }
                      fVar33 = in_stack_000001c8;
                      if (DAT_06db4c77 == '\0') {
                        FUN_02d965b8(PTR_DAT_069fbb48);
                        DAT_06db4c77 = '\x01';
                      }
                      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                      }
                      fVar32 = in_stack_000001c8;
                      bVar6 = bVar5;
                      if (fStack000000000000010c <
                          SQRT((fStack000000000000012c - fVar33) * (fStack000000000000012c - fVar33)
                               + (in_stack_00000130 - fVar49) * (in_stack_00000130 - fVar49) +
                                 (fStack0000000000000128 - fVar53) *
                                 (fStack0000000000000128 - fVar53))) {
                        bVar6 = true;
                      }
                      bVar1 = bVar6;
                      if (unaff_x20 != 1) {
                        bVar1 = true;
                      }
                      if (bVar1 == false) {
                        bVar6 = fVar42 == 0.0;
                      }
                      if (bVar6 == true) {
                        fVar49 = fStack00000000000001c0;
                        fVar53 = fStack00000000000001c4;
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
                        fVar33 = in_stack_000001c8;
                        uVar18 = _fStack00000000000001c0;
                        in_stack_00000110 = _fStack00000000000001c0 & 0xffffffff;
                        fVar49 = SQRT((fStack000000000000012c - fVar32) *
                                      (fStack000000000000012c - fVar32) +
                                      (in_stack_00000130 - fVar49) * (in_stack_00000130 - fVar49) +
                                      (fStack0000000000000128 - fVar53) *
                                      (fStack0000000000000128 - fVar53));
                        in_stack_00000160._4_4_ = in_stack_000001c8;
                        fStack00000000000001d4 = fVar49 + fStack00000000000001d4;
                        *in_stack_000000d8 = fVar49 + *in_stack_000000d8;
                        if (cVar15 == '\0') {
                          FUN_02d965b8(PTR_DAT_069fbb48);
                          DAT_06db4c77 = '\x01';
                        }
                        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                          thunk_FUN_02df485c();
                        }
                        in_stack_00000280 = in_stack_000001c8;
                        lVar12 = *(long *)(in_stack_00000148 + 0x68);
                        *(ulong *)(unaff_x26 + 0x60) = _fStack00000000000001c0;
                        fVar47 = (float)uVar18 - fVar47;
                        in_stack_00000130 = fStack00000000000001c0;
                        fVar38 = fVar38 + SQRT(fVar47 * fVar47 +
                                               (fVar33 - fVar45) * (fVar33 - fVar45));
                        fStack0000000000000128 = fStack00000000000001c4;
                        fStack000000000000012c = in_stack_000001c8;
                        if ((lVar12 == 0) ||
                           (lVar12 = FUN_0400ff1c(lVar12,uVar22 & 0xffffffff,*puVar24), lVar12 == 0)
                           ) goto LAB_03168190;
                        if (*(float *)(lVar12 + 0x100) == 0.0) {
                          if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                             (lVar12 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                    uVar22 & 0xffffffff,*puVar24), lVar12 == 0))
                          goto LAB_03168190;
                          if (*(float *)(lVar12 + 0x104) != 0.0) goto LAB_0316bb78;
                          if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                             (lVar12 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                    uVar22 & 0xffffffff,*puVar24), lVar12 == 0))
                          goto LAB_03168190;
                          if (*(float *)(lVar12 + 0x110) != 0.0) goto LAB_0316bb78;
                          if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                             (lVar12 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                    uVar22 & 0xffffffff,*puVar24), lVar12 == 0))
                          goto LAB_03168190;
                          if (*(float *)(lVar12 + 0x114) != 0.0) goto LAB_0316bb78;
                          lVar12 = *in_stack_000000e0;
                          if (lVar12 == 0) goto LAB_03168190;
                          lVar13 = *(long *)(lVar12 + 0x10);
                          lVar17 = *(long *)PTR_DAT_069ff178;
                          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                          if (lVar13 == 0) goto LAB_03168190;
                          uVar43 = *(uint *)(lVar12 + 0x18);
                          if (uVar43 < *(uint *)(lVar13 + 0x18)) {
                            *(uint *)(lVar12 + 0x18) = uVar43 + 1;
                            *(undefined4 *)(lVar13 + (long)(int)uVar43 * 4 + 0x20) = 0;
                          }
                          else {
                            FUN_04059d64(0,lVar12,*(undefined8 *)
                                                   (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) +
                                                   0x70));
                          }
                        }
                        else {
LAB_0316bb78:
                          if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
                          fVar45 = *in_stack_000000d8;
                          uVar9 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                               uVar22 & 0xffffffff,*puVar24);
                          FUN_0316f6a0(fVar45,fVar41,uVar9,uVar9,&stack0x0000022c,&stack0x00000228,
                                       &stack0x00000224,&stack0x00000218,&stack0x00000278,
                                       &stack0x00000214);
                        }
                        lVar12 = *in_stack_000000b8;
                        if (fVar49 <= 5.0) {
                          if (lVar12 == 0) goto LAB_03168190;
                          lVar13 = *(long *)(lVar12 + 0x10);
                          lVar17 = *(long *)PTR_DAT_069ff178;
                          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                          if (lVar13 == 0) goto LAB_03168190;
                          uVar43 = *(uint *)(lVar12 + 0x18);
                          fVar45 = (unaff_s15 / fVar49) * 5.0;
                          if (*(uint *)(lVar13 + 0x18) <= uVar43) {
                            lVar13 = *(long *)(lVar17 + 0x20);
                            goto LAB_0316bcb0;
                          }
                          *(uint *)(lVar12 + 0x18) = uVar43 + 1;
                          *(float *)(lVar13 + (long)(int)uVar43 * 4 + 0x20) = fVar45;
                        }
                        else {
                          if (lVar12 == 0) goto LAB_03168190;
                          lVar13 = *(long *)(lVar12 + 0x10);
                          lVar17 = *(long *)PTR_DAT_069ff178;
                          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                          if (lVar13 == 0) goto LAB_03168190;
                          uVar43 = *(uint *)(lVar12 + 0x18);
                          if (uVar43 < *(uint *)(lVar13 + 0x18)) {
                            *(uint *)(lVar12 + 0x18) = uVar43 + 1;
                            *(float *)(lVar13 + (long)(int)uVar43 * 4 + 0x20) = unaff_s15;
                          }
                          else {
                            lVar13 = *(long *)(lVar17 + 0x20);
                            fVar45 = unaff_s15;
LAB_0316bcb0:
                            FUN_04059d64(fVar45,lVar12,
                                         *(undefined8 *)(*(long *)(lVar13 + 0xc0) + 0x70));
                          }
                        }
                        if (bVar7) {
                          lVar12 = *in_stack_000000b8;
                          if (lVar12 == 0) goto LAB_03168190;
                          iVar26 = *(int *)(lVar12 + 0x18);
                          if (1 < iVar26) {
                            FUN_04059a68(lVar12,iVar26 + -1,*(undefined8 *)PTR_DAT_06a0a108);
                            FUN_04059abc(lVar12,iVar26 + -2,*(undefined8 *)PTR_DAT_06a0b5c0);
                          }
                        }
                        puVar2 = PTR_DAT_069fbee0;
                        lVar12 = *(long *)(unaff_x26 + 0x20);
                        if (lVar12 == 0) goto LAB_03168190;
                        lVar13 = *(long *)(lVar12 + 0x10);
                        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                        if (lVar13 == 0) goto LAB_03168190;
                        uVar43 = *(uint *)(lVar12 + 0x18);
                        if (uVar43 < *(uint *)(lVar13 + 0x18)) {
                          lVar13 = lVar13 + (long)(int)uVar43 * 0xc;
                          *(uint *)(lVar12 + 0x18) = uVar43 + 1;
                          *(float *)(lVar13 + 0x20) = in_stack_00000278;
                          *(float *)(lVar13 + 0x24) = in_stack_0000027c;
                          *(float *)(lVar13 + 0x28) = in_stack_00000280;
                        }
                        else {
                          FUN_0409f624(lVar12,*(undefined8 *)
                                               (*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0)
                                               + 0x70));
                        }
                        puVar24 = (undefined8 *)PTR_DAT_06a0b440;
                        lVar12 = *(long *)(unaff_x26 + 0x28);
                        if (lVar12 == 0) goto LAB_03168190;
                        lVar13 = *(long *)(lVar12 + 0x10);
                        lVar17 = *(long *)PTR_DAT_069ff178;
                        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                        if (lVar13 == 0) goto LAB_03168190;
                        uVar43 = *(uint *)(lVar12 + 0x18);
                        if (uVar43 < *(uint *)(lVar13 + 0x18)) {
                          *(uint *)(lVar12 + 0x18) = uVar43 + 1;
                          *(float *)(lVar13 + (long)(int)uVar43 * 4 + 0x20) = fVar42;
                        }
                        else {
                          FUN_04059d64(fVar42,lVar12,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                        }
                        if (bVar5 != false) {
                          lVar12 = *(long *)(in_stack_00000148 + 0x2c8);
                          if (lVar12 == 0) goto LAB_03168190;
                          lVar13 = *(long *)(lVar12 + 0x10);
                          lVar17 = *(long *)PTR_DAT_069fc3e0;
                          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                          if (lVar13 == 0) goto LAB_03168190;
                          uVar43 = *(uint *)(lVar12 + 0x18);
                          if (uVar43 < *(uint *)(lVar13 + 0x18)) {
                            *(uint *)(lVar12 + 0x18) = uVar43 + 1;
                            *(int *)(lVar13 + (long)(int)uVar43 * 4 + 0x20) = iStack00000000000000d4
                            ;
                          }
                          else {
                            FUN_03fb3e1c(lVar12,iStack00000000000000d4,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                          }
                        }
                        bVar7 = false;
                        fStack00000000000000fc = fStack00000000000000f0;
                        fStack0000000000000100 = fStack00000000000000f4;
                        iStack00000000000000d4 = iStack00000000000000d4 + 1;
                        fStack0000000000000104 = fStack00000000000000f8;
                        in_stack_000000c0._4_1_ = bVar8;
                      }
                      else {
                        in_stack_00000110 = (ulong)(uint)fVar47;
                        in_stack_00000160._4_4_ = fVar45;
                      }
                      fVar33 = fVar39 + fVar42;
                    } while (fVar33 < fVar34);
                    iStack0000000000000108 = 0;
                    unaff_x28 = (long *)PTR_DAT_069fb978;
                  }
                }
                else {
                  if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                     (lVar12 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),uVar22 & 0xffffffff,
                                            *puVar24), lVar12 == 0)) goto LAB_03168190;
                  if (*(int *)(lVar12 + 0x6c) != 1) {
                    if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                       (lVar12 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                              uVar22 & 0xffffffff,*puVar24), lVar12 == 0))
                    goto LAB_03168190;
                    if (*(int *)(lVar12 + 0x6c) != 2) {
                      if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                         (lVar12 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                uVar22 & 0xffffffff,*puVar24), lVar12 == 0))
                      goto LAB_03168190;
                      if (*(int *)(lVar12 + 0x6c) == 3) {
                        uStack00000000000001ac = 0;
                        if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
                        if (((long)(*(int *)(*(long *)(in_stack_00000148 + 0x68) + 0x18) + -2) <
                             (long)unaff_x20) && (*(char *)(in_stack_00000148 + 0x84) == '\0')) {
                          uVar9 = *(undefined8 *)(in_stack_00000148 + 0x2e0);
                          if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
                            thunk_FUN_02df485c();
                          }
                          uVar14 = FUN_0634eb94(uVar9,0,0);
                          if ((uVar14 & 1) != 0) goto LAB_0316adcc;
                          FUN_030fd644(&stack0x00000290,in_stack_00000148,unaff_x20 & 0xffffffff,
                                       &stack0x00000238,&stack0x00000240,(long)&stack0x000001d0 + 4,
                                       0,&stack0x00000230);
                        }
                        else {
LAB_0316adcc:
                          FUN_030faa2c(&stack0x00000290,in_stack_00000148,unaff_x20 & 0xffffffff,
                                       &stack0x00000238,&stack0x00000240,(long)&stack0x000001d0 + 4,
                                       0,&stack0x00000230);
                        }
                        if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                           (lVar12 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                  uVar22 & 0xffffffff,*puVar24), lVar12 == 0))
                        goto LAB_03168190;
                        lVar13 = *(long *)(unaff_x26 + 0x28);
                        *(undefined4 *)(lVar12 + 0x34) = uStack00000000000001ac;
                        if (lVar13 == 0) goto LAB_03168190;
                        fVar39 = 0.0;
                        iVar26 = 0;
                        puVar29 = (undefined4 *)(in_stack_00000170 + 0x20 + uVar22 * 0xc);
                        while( true ) {
                          puVar24 = (undefined8 *)PTR_DAT_06a0b440;
                          puVar2 = PTR_DAT_069fbee0;
                          unaff_x28 = (long *)PTR_DAT_069fb978;
                          fVar42 = (float)uVar18;
                          in_stack_00000160._4_4_ = (float)uVar37;
                          iVar56 = *(int *)(lVar13 + 0x18);
                          if (iVar56 <= iVar26) break;
                          if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                          uStack00000000000001a0 =
                               FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),iVar26,
                                            *(undefined8 *)PTR_DAT_069fd088);
                          fStack00000000000001a4 = fVar42;
                          fStack00000000000001a8 = in_stack_00000160._4_4_;
                          if (*(char *)(in_stack_00000148 + 0x5d6) == '\0') {
                            uVar18 = (ulong)*(uint *)(in_stack_00000170 + 0x18);
                            if ((((uVar18 <= uVar22) || (uVar18 <= unaff_x20)) ||
                                (uVar18 <= unaff_x24)) || (uVar18 <= unaff_x20 + 2))
                            goto LAB_0316f2c4;
                            if (*(long *)(unaff_x26 + 0x28) == 0) goto LAB_03168190;
                            uVar40 = *puVar29;
                            fVar42 = (float)puVar29[1];
                            uVar50 = puVar29[2];
                            fVar45 = *pfVar21;
                            uVar54 = *(undefined4 *)(lVar11 + 0x24);
                            uVar51 = *(undefined4 *)(lVar11 + 0x28);
                            FUN_04059a68(*(long *)(unaff_x26 + 0x28),iVar26,
                                         *(undefined8 *)PTR_DAT_06a0a108);
                            FUN_0316f340(uVar40,fVar42,uVar50,fVar45,uVar54,uVar51);
                            fStack00000000000001a4 = fVar42;
                            if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                            in_stack_00000160._4_4_ = fStack00000000000001a8;
                            FUN_0409f350(uStack00000000000001a0,*(long *)(unaff_x26 + 0x20),iVar26,
                                         *(undefined8 *)PTR_DAT_06a0b7d0);
                            if (iVar26 != 0) goto LAB_0316af8c;
LAB_0316b04c:
                            lVar12 = *in_stack_000000e0;
                            if (lVar12 == 0) goto LAB_03168190;
                            lVar13 = *(long *)(lVar12 + 0x10);
                            lVar17 = *(long *)PTR_DAT_069ff178;
                            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                            if (lVar13 == 0) goto LAB_03168190;
                            uVar43 = *(uint *)(lVar12 + 0x18);
                            if (uVar43 < *(uint *)(lVar13 + 0x18)) {
                              *(uint *)(lVar12 + 0x18) = uVar43 + 1;
                              *(undefined4 *)(lVar13 + (long)(int)uVar43 * 4 + 0x20) = 0;
                            }
                            else {
                              FUN_04059d64(0,lVar12,*(undefined8 *)
                                                     (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) +
                                                     0x70));
                            }
                          }
                          else {
                            if (*(long *)(in_stack_00000148 + 0x20) == 0) goto LAB_03168190;
                            FUN_03199614(*(long *)(in_stack_00000148 + 0x20),&stack0x000001a0,0);
                            if (iVar26 == 0) goto LAB_0316b04c;
LAB_0316af8c:
                            if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                               (lVar12 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                      uVar22 & 0xffffffff,
                                                      *(undefined8 *)PTR_DAT_06a0b440), lVar12 == 0)
                               ) goto LAB_03168190;
                            if (*(float *)(lVar12 + 0x100) == 0.0) {
                              if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                                 (lVar12 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                        uVar22 & 0xffffffff,
                                                        *(undefined8 *)PTR_DAT_06a0b440),
                                 lVar12 == 0)) goto LAB_03168190;
                              if (*(float *)(lVar12 + 0x104) == 0.0) {
                                if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                                   (lVar12 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                          uVar22 & 0xffffffff,
                                                          *(undefined8 *)PTR_DAT_06a0b440),
                                   lVar12 == 0)) goto LAB_03168190;
                                if (*(float *)(lVar12 + 0x110) == 0.0) {
                                  if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                                     (lVar12 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                            uVar22 & 0xffffffff,
                                                            *(undefined8 *)PTR_DAT_06a0b440),
                                     lVar12 == 0)) goto LAB_03168190;
                                  if (*(float *)(lVar12 + 0x114) == 0.0) goto LAB_0316b04c;
                                }
                              }
                            }
                            puVar2 = PTR_DAT_069fd088;
                            if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                            fVar45 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),iVar26 + -1,
                                                         *(undefined8 *)PTR_DAT_069fd088);
                            if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                            fVar47 = fVar42;
                            fVar49 = in_stack_00000160._4_4_;
                            fVar53 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),iVar26,
                                                         *(undefined8 *)puVar2);
                            if (DAT_06db4c77 == '\0') {
                              FUN_02d965b8(PTR_DAT_069fbb48);
                              DAT_06db4c77 = '\x01';
                            }
                            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                              thunk_FUN_02df485c();
                            }
                            if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
                            fVar33 = *in_stack_000000d8;
                            fVar39 = fVar39 + SQRT((in_stack_00000160._4_4_ - fVar49) *
                                                   (in_stack_00000160._4_4_ - fVar49) +
                                                   (fVar45 - fVar53) * (fVar45 - fVar53) +
                                                   (fVar42 - fVar47) * (fVar42 - fVar47));
                            uVar9 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                 uVar22 & 0xffffffff,*(undefined8 *)PTR_DAT_06a0b440
                                                );
                            FUN_0316f6a0(fVar39 + fVar33,fVar41,uVar9,uVar9,&stack0x0000022c,
                                         &stack0x00000228,&stack0x00000224,&stack0x00000218,
                                         &stack0x000001a0,&stack0x00000214);
                          }
                          if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                          uVar37 = (ulong)(uint)fStack00000000000001a8;
                          uVar18 = (ulong)(uint)fStack00000000000001a4;
                          FUN_0409f350(uStack00000000000001a0,*(long *)(unaff_x26 + 0x20),iVar26,
                                       *(undefined8 *)PTR_DAT_06a0b7d0);
                          lVar13 = *(long *)(unaff_x26 + 0x28);
                          iVar26 = iVar26 + 1;
                          if (lVar13 == 0) goto LAB_03168190;
                        }
                        uVar18 = (ulong)(iVar56 - 1);
                        if (iVar56 < 1) {
                          if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
                          lVar12 = *(long *)(unaff_x26 + 0x20);
                          if (lVar12 == 0) goto LAB_03168190;
                          lVar13 = *(long *)(lVar12 + 0x10);
                          fVar39 = *pfVar30;
                          uVar40 = *(undefined4 *)(lVar10 + 0x24);
                          in_stack_00000160._4_4_ = *(float *)(lVar10 + 0x28);
                          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                          if (lVar13 == 0) goto LAB_03168190;
                          uVar43 = *(uint *)(lVar12 + 0x18);
                          if (uVar43 < *(uint *)(lVar13 + 0x18)) {
                            lVar13 = lVar13 + (long)(int)uVar43 * 0xc;
                            *(uint *)(lVar12 + 0x18) = uVar43 + 1;
                            *(float *)(lVar13 + 0x20) = fVar39;
                            *(undefined4 *)(lVar13 + 0x24) = uVar40;
                            *(float *)(lVar13 + 0x28) = in_stack_00000160._4_4_;
                          }
                          else {
                            FUN_0409f624(lVar12,*(undefined8 *)
                                                 (*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0
                                                           ) + 0x70));
                            uVar18 = extraout_x1_00;
                          }
                          fVar39 = fStack00000000000001d4;
                          if ((*(uint *)(in_stack_00000170 + 0x18) <= unaff_x20) ||
                             (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24)) goto LAB_0316f2c4;
                          uVar9 = *(undefined8 *)pfVar21;
                          fVar41 = *(float *)(lVar11 + 0x28);
                          uVar44 = *(undefined8 *)pfVar30;
                          fVar42 = *(float *)(lVar10 + 0x28);
                          if (DAT_06db4c77 == '\0') {
                            FUN_02d965b8(PTR_DAT_069fbb48,uVar18);
                            DAT_06db4c77 = '\x01';
                          }
                          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                            thunk_FUN_02df485c();
                          }
                          fVar45 = (float)uVar9 - (float)uVar44;
                          fVar47 = (float)((ulong)uVar9 >> 0x20) - (float)((ulong)uVar44 >> 0x20);
                          fVar41 = fVar41 - fVar42;
                          in_stack_0000027c = fVar41 * fVar41;
                          fStack00000000000001d4 =
                               fVar39 + SQRT(in_stack_0000027c + fVar45 * fVar45 + fVar47 * fVar47);
LAB_0316d2dc:
                          lVar11 = *(long *)(unaff_x26 + 0x28);
                          if (lVar11 == 0) goto LAB_03168190;
                          lVar10 = *(long *)(lVar11 + 0x10);
                          lVar12 = *(long *)PTR_DAT_069ff178;
                          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                          if (lVar10 == 0) goto LAB_03168190;
                          uVar43 = *(uint *)(lVar11 + 0x18);
                          if (uVar43 < *(uint *)(lVar10 + 0x18)) {
                            *(uint *)(lVar11 + 0x18) = uVar43 + 1;
                            *(undefined4 *)(lVar10 + (long)(int)uVar43 * 4 + 0x20) = 0x3f800000;
                          }
                          else {
                            FUN_04059d64(0x3f800000,lVar11,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                          }
                          lVar11 = *in_stack_000000e0;
                          if (lVar11 == 0) goto LAB_03168190;
                          lVar10 = *(long *)(lVar11 + 0x10);
                          lVar12 = *(long *)PTR_DAT_069ff178;
                          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                          if (lVar10 == 0) goto LAB_03168190;
                          uVar43 = *(uint *)(lVar11 + 0x18);
                          if (uVar43 < *(uint *)(lVar10 + 0x18)) {
                            *(uint *)(lVar11 + 0x18) = uVar43 + 1;
                            *(undefined4 *)(lVar10 + (long)(int)uVar43 * 4 + 0x20) = 0;
                          }
                          else {
                            FUN_04059d64(0,lVar11,*(undefined8 *)
                                                   (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) +
                                                   0x70));
                          }
                        }
                        else {
                          fVar39 = (float)FUN_04059a68(lVar13,uVar18,*(undefined8 *)PTR_DAT_06a0a108
                                                      );
                          puVar24 = (undefined8 *)PTR_DAT_06a0b440;
                          puVar2 = PTR_DAT_069fd088;
                          unaff_x28 = (long *)PTR_DAT_069fb978;
                          fVar41 = 1.0;
                          if (fVar39 <= 1.0) {
                            lVar11 = *(long *)(unaff_x26 + 0x20);
                            if (lVar11 == 0) goto LAB_03168190;
                            fVar39 = (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -1,
                                                         *(undefined8 *)PTR_DAT_069fd088);
                            if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
                            fVar41 = fVar41 - *(float *)(lVar10 + 0x24);
                            in_stack_00000160._4_4_ =
                                 in_stack_00000160._4_4_ - *(float *)(lVar10 + 0x28);
                            in_stack_0000027c = fStack00000000000000a4;
                            if (fStack00000000000000a4 <=
                                in_stack_00000160._4_4_ * in_stack_00000160._4_4_ +
                                (fVar39 - *pfVar30) * (fVar39 - *pfVar30) + fVar41 * fVar41) {
                              lVar11 = *(long *)(unaff_x26 + 0x20);
                              if (lVar11 == 0) goto LAB_03168190;
                              fVar39 = fStack00000000000000a4;
                              fVar41 = (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -1,
                                                           *(undefined8 *)puVar2);
                              if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24)
                              goto LAB_0316f2c4;
                              fVar42 = *pfVar30;
                              fVar47 = *(float *)(lVar10 + 0x24);
                              fVar45 = *(float *)(lVar10 + 0x28);
                              if (DAT_06db4c77 == '\0') {
                                FUN_02d965b8(PTR_DAT_069fbb48);
                                DAT_06db4c77 = '\x01';
                              }
                              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                                thunk_FUN_02df485c();
                              }
                              puVar3 = PTR_DAT_069fbee0;
                              fVar39 = fVar39 - fVar47;
                              lVar11 = *(long *)(unaff_x26 + 0x20);
                              in_stack_00000160._4_4_ = in_stack_00000160._4_4_ - fVar45;
                              if (in_stack_000000b0 <=
                                  SQRT(in_stack_00000160._4_4_ * in_stack_00000160._4_4_ +
                                       (fVar41 - fVar42) * (fVar41 - fVar42) + fVar39 * fVar39)) {
                                if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24)
                                goto LAB_0316f2c4;
                                if (lVar11 != 0) {
                                  lVar12 = *(long *)(lVar11 + 0x10);
                                  fVar39 = *pfVar30;
                                  fVar41 = *(float *)(lVar10 + 0x24);
                                  in_stack_00000160._4_4_ = *(float *)(lVar10 + 0x28);
                                  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                                  if (lVar12 != 0) {
                                    uVar43 = *(uint *)(lVar11 + 0x18);
                                    if (uVar43 < *(uint *)(lVar12 + 0x18)) {
                                      lVar12 = lVar12 + (long)(int)uVar43 * 0xc;
                                      *(uint *)(lVar11 + 0x18) = uVar43 + 1;
                                      *(float *)(lVar12 + 0x20) = fVar39;
                                      *(float *)(lVar12 + 0x24) = fVar41;
                                      *(float *)(lVar12 + 0x28) = in_stack_00000160._4_4_;
                                    }
                                    else {
                                      FUN_0409f624(lVar11,*(undefined8 *)
                                                           (*(long *)(*(long *)(*(long *)puVar3 +
                                                                               0x20) + 0xc0) + 0x70)
                                                  );
                                    }
                                    fVar39 = fStack00000000000001d4;
                                    lVar11 = *(long *)(unaff_x26 + 0x20);
                                    if (lVar11 != 0) {
                                      fVar42 = (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) +
                                                                          -1,*(undefined8 *)puVar2);
                                      if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24)
                                      goto LAB_0316f2c4;
                                      fVar45 = *pfVar30;
                                      fVar49 = *(float *)(lVar10 + 0x24);
                                      fVar47 = *(float *)(lVar10 + 0x28);
                                      if (DAT_06db4c77 == '\0') {
                                        FUN_02d965b8(PTR_DAT_069fbb48);
                                        DAT_06db4c77 = '\x01';
                                      }
                                      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                                        thunk_FUN_02df485c();
                                      }
                                      fVar41 = fVar41 - fVar49;
                                      in_stack_00000160._4_4_ = in_stack_00000160._4_4_ - fVar47;
                                      in_stack_0000027c =
                                           in_stack_00000160._4_4_ * in_stack_00000160._4_4_;
                                      fStack00000000000001d4 =
                                           fVar39 + SQRT(in_stack_0000027c +
                                                         (fVar42 - fVar45) * (fVar42 - fVar45) +
                                                         fVar41 * fVar41);
                                      goto LAB_0316d2dc;
                                    }
                                  }
                                }
                                goto LAB_03168190;
                              }
                              if (lVar11 == 0) goto LAB_03168190;
                              if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24)
                              goto LAB_0316f2c4;
                              in_stack_00000160._4_4_ = *(float *)(lVar10 + 0x28);
                              in_stack_0000027c = *(float *)(lVar10 + 0x24);
                              FUN_0409f350(*pfVar30,lVar11,*(int *)(lVar11 + 0x18) + -1,
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
                            if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
                            in_stack_00000160._4_4_ = *(float *)(lVar10 + 0x28);
                            in_stack_0000027c = *(float *)(lVar10 + 0x24);
                            FUN_0409f350(*pfVar30,lVar11,*(int *)(lVar11 + 0x18) + -1,
                                         *(undefined8 *)PTR_DAT_06a0b7d0);
                          }
                        }
                        lVar11 = *(long *)(unaff_x26 + 0x20);
                        if (lVar11 == 0) goto LAB_03168190;
                        iVar26 = *(int *)(lVar11 + 0x18);
                        in_stack_00000110 =
                             FUN_0409f2f4(lVar11,iVar26 + -1,*(undefined8 *)PTR_DAT_069fd088);
                        puVar2 = PTR_DAT_069fd088;
                        lVar11 = *(long *)(unaff_x26 + 0x20);
                        in_stack_00000278 = (float)in_stack_00000110;
                        if (lVar11 == 0) goto LAB_03168190;
                        fVar39 = in_stack_00000160._4_4_;
                        if (1 < *(int *)(lVar11 + 0x18)) {
                          fStack0000000000000088 = in_stack_0000027c;
                          fStack000000000000008c =
                               (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -2,
                                                   *(undefined8 *)PTR_DAT_069fd088);
                          lVar11 = *(long *)(unaff_x26 + 0x20);
                          if (lVar11 == 0) goto LAB_03168190;
                          fVar41 = fStack0000000000000088;
                          fVar42 = fVar39;
                          fVar45 = (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -1,
                                                       *(undefined8 *)puVar2);
                          if (DAT_06db4c75 == '\0') {
                            FUN_02d965b8(PTR_DAT_069fbb48);
                            DAT_06db4c75 = '\x01';
                          }
                          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                            thunk_FUN_02df485c();
                          }
                          fStack000000000000008c = fStack000000000000008c - fVar45;
                          fStack0000000000000088 = fStack0000000000000088 - fVar41;
                          fVar39 = fVar39 - fVar42;
                          in_stack_00000080._4_4_ =
                               SQRT(fVar39 * fVar39 +
                                    fStack000000000000008c * fStack000000000000008c +
                                    fStack0000000000000088 * fStack0000000000000088);
                          if (in_stack_00000080._4_4_ <= DAT_010fd13c) {
                            if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
                              FUN_02d965b8(unaff_x28);
                              *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
                            }
                            pfVar21 = *(float **)(*unaff_x28 + 0xb8);
                            fStack000000000000008c = *pfVar21;
                            fStack0000000000000088 = pfVar21[1];
                            in_stack_00000080._4_4_ = pfVar21[2];
                          }
                          else {
                            fStack000000000000008c =
                                 fStack000000000000008c / in_stack_00000080._4_4_;
                            fStack0000000000000088 =
                                 fStack0000000000000088 / in_stack_00000080._4_4_;
                            in_stack_00000080._4_4_ = fVar39 / in_stack_00000080._4_4_;
                          }
                        }
                        lVar11 = *(long *)(in_stack_00000148 + 0x2c8);
                        *(float *)(in_stack_00000148 + 0x2c0) =
                             *(float *)(in_stack_00000148 + 0x2c0) + fStack00000000000001d4;
                        if (lVar11 == 0) goto LAB_03168190;
                        lVar10 = *(long *)(lVar11 + 0x10);
                        lVar12 = *(long *)PTR_DAT_069fc3e0;
                        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                        if (lVar10 == 0) goto LAB_03168190;
                        uVar43 = *(uint *)(lVar11 + 0x18);
                        iStack00000000000000d4 = iVar26 + iStack00000000000000d4;
                        fVar41 = fStack00000000000001d4;
                        if (uVar43 < *(uint *)(lVar10 + 0x18)) {
                          *(uint *)(lVar11 + 0x18) = uVar43 + 1;
                          *(int *)(lVar10 + (long)(int)uVar43 * 4 + 0x20) = iStack00000000000000d4;
                        }
                        else {
                          FUN_03fb3e1c(lVar11,iStack00000000000000d4,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                        }
                        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
                        iVar26 = *(int *)(*(long *)(unaff_x26 + 0x78) + 0x18);
                        in_stack_00000280 = in_stack_00000160._4_4_;
                        if (iVar26 < 1) {
                          iStack0000000000000108 = 3;
                          goto LAB_0316c620;
                        }
                        lVar11 = FUN_0400ff1c(in_stack_00000098,iVar28 + -2,*puVar24);
                        if ((lVar11 == 0) || (lVar10 = *in_stack_00000090, lVar10 == 0))
                        goto LAB_03168190;
                        iVar56 = *(int *)(lVar11 + 0xbc);
                        fVar42 = (float)FUN_04059a68(lVar10,*(int *)(lVar10 + 0x18) + -1,
                                                     *(undefined8 *)PTR_DAT_06a0a108);
                        lVar11 = *in_stack_00000090;
                        if (lVar11 == 0) goto LAB_03168190;
                        if (1 < *(int *)(lVar11 + 0x18)) {
                          fVar41 = (float)FUN_04059a68(lVar11,*(int *)(lVar11 + 0x18) + -2,
                                                       *(undefined8 *)PTR_DAT_06a0a108);
                          fVar41 = fVar42 - fVar41;
                          fVar42 = fVar41;
                        }
                        puVar2 = PTR_DAT_069fd088;
                        lVar11 = *(long *)(unaff_x26 + 0x78);
                        if (lVar11 == 0) goto LAB_03168190;
                        fVar45 = (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -1,
                                                     *(undefined8 *)PTR_DAT_069fd088);
                        if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                        fVar47 = fVar41;
                        fVar49 = fVar39;
                        fVar53 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),0,
                                                     *(undefined8 *)puVar2);
                        if (DAT_06db4c75 == '\0') {
                          FUN_02d965b8(PTR_DAT_069fbb48);
                          DAT_06db4c75 = '\x01';
                        }
                        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                          thunk_FUN_02df485c();
                        }
                        fVar41 = fVar41 - fVar47;
                        uVar18 = (ulong)(uint)DAT_010fd13c;
                        fVar39 = SQRT((fVar39 - fVar49) * (fVar39 - fVar49) +
                                      (fVar45 - fVar53) * (fVar45 - fVar53) + fVar41 * fVar41);
                        if (fVar39 <= DAT_010fd13c) {
                          if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
                            FUN_02d965b8(unaff_x28);
                            *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
                          }
                          fVar41 = *(float *)(*(long *)(*unaff_x28 + 0xb8) + 4);
                        }
                        else {
                          fVar41 = fVar41 / fVar39;
                        }
                        puVar2 = PTR_DAT_069fd088;
                        lVar11 = *(long *)(unaff_x26 + 0x78);
                        if (lVar11 == 0) goto LAB_03168190;
                        FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -1,
                                     *(undefined8 *)PTR_DAT_069fd088);
                        lVar11 = *(long *)(unaff_x26 + 0x78);
                        if (lVar11 == 0) goto LAB_03168190;
                        fVar47 = fVar39;
                        fVar45 = (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -1,
                                                     *(undefined8 *)puVar2);
                        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
                        uVar37 = (ulong)(uint)(float)iVar56;
                        fVar49 = (float)iVar26 - (float)iVar56;
                        if (1.0 <= fVar49) {
                          fVar53 = 0.0;
                          iVar56 = *(int *)(*(long *)(unaff_x26 + 0x78) + 0x18);
                          iVar26 = 2;
                          iVar27 = -2;
                          do {
                            fVar33 = (float)uVar37;
                            if ((iVar26 - iVar56) + -1 < 0) {
                              lVar11 = *(long *)(unaff_x26 + 0x78);
                              if (lVar11 == 0) goto LAB_03168190;
                              fVar34 = (float)uVar18;
                              fVar32 = (float)FUN_0409f2f4(lVar11,iVar27 + *(int *)(lVar11 + 0x18),
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
                              fVar35 = fVar34 - (float)uVar18;
                              fVar53 = fVar53 + SQRT(fVar35 * fVar35 +
                                                     (fVar32 - fVar45) * (fVar32 - fVar45) +
                                                     (fVar33 - fVar47) * (fVar33 - fVar47));
                              fVar39 = (fVar42 / fVar49) * fVar41 + fVar39;
                              fVar45 = 1.0;
                              if (SQRT(fVar53 / fVar42) <= 1.0) {
                                fVar45 = SQRT(fVar53 / fVar42);
                              }
                              fVar47 = fVar39 + (fVar33 - fVar39) * fVar45;
                              uVar37 = (ulong)(uint)fVar47;
                              FUN_0409f350(fVar32,uVar37,fVar34,lVar11,
                                           iVar27 + *(int *)(lVar11 + 0x18),
                                           *(undefined8 *)PTR_DAT_06a0b7d0);
                              uVar18 = (ulong)(uint)fVar34;
                              fVar45 = fVar32;
                            }
                            fVar33 = (float)iVar26;
                            iVar26 = iVar26 + 1;
                            iVar27 = iVar27 + -1;
                          } while (fVar33 <= fVar49);
                          iStack0000000000000108 = 3;
                          puVar24 = (undefined8 *)PTR_DAT_06a0b440;
                        }
                        else {
                          iStack0000000000000108 = 3;
                        }
                      }
                      else {
                        if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                           (lVar11 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                  uVar22 & 0xffffffff,*puVar24),
                           puVar2 = PTR_DAT_069fd088, lVar11 == 0)) goto LAB_03168190;
                        if (*(int *)(lVar11 + 0x6c) != 4) goto LAB_0316c620;
                        if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                           (lVar11 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                  uVar22 & 0xffffffff,*puVar24), lVar11 == 0))
                        goto LAB_03168190;
                        fStack00000000000001d4 = 0.0;
                        *(undefined8 *)(unaff_x26 + 0x20) = *(undefined8 *)(lVar11 + 0x1d8);
                        lVar11 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ff188);
                        FUN_040594d0(lVar11,*(undefined8 *)PTR_DAT_069ff180);
                        if (lVar11 == 0) goto LAB_03168190;
                        lVar10 = *(long *)(lVar11 + 0x10);
                        lVar12 = *(long *)PTR_DAT_069ff178;
                        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                        if (lVar10 == 0) goto LAB_03168190;
                        uVar43 = *(uint *)(lVar11 + 0x18);
                        if (uVar43 < *(uint *)(lVar10 + 0x18)) {
                          *(uint *)(lVar11 + 0x18) = uVar43 + 1;
                          *(undefined4 *)(lVar10 + (long)(int)uVar43 * 4 + 0x20) = 0;
                        }
                        else {
                          FUN_04059d64(0,lVar11,*(undefined8 *)
                                                 (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70)
                                      );
                        }
                        lVar10 = *(long *)(unaff_x26 + 0x20);
                        if (lVar10 == 0) goto LAB_03168190;
                        iVar26 = 1;
                        while( true ) {
                          fVar39 = fStack00000000000001d4;
                          fVar42 = (float)uVar37;
                          fVar41 = (float)uVar18;
                          if (*(int *)(lVar10 + 0x18) <= iVar26) break;
                          fVar45 = (float)FUN_0409f2f4(lVar10,iVar26 + -1,*(undefined8 *)puVar2);
                          if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                          fVar47 = fVar41;
                          fVar49 = fVar42;
                          fVar53 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),iVar26,
                                                       *(undefined8 *)puVar2);
                          if (DAT_06db4c77 == '\0') {
                            FUN_02d965b8(PTR_DAT_069fbb48);
                            DAT_06db4c77 = '\x01';
                          }
                          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                            thunk_FUN_02df485c();
                          }
                          fVar42 = fVar42 - fVar49;
                          uVar37 = (ulong)(uint)fVar42;
                          lVar10 = *(long *)(lVar11 + 0x10);
                          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                          uVar18 = (ulong)(uint)(fVar42 * fVar42);
                          fStack00000000000001d4 =
                               fVar39 + SQRT(fVar42 * fVar42 +
                                             (fVar45 - fVar53) * (fVar45 - fVar53) +
                                             (fVar41 - fVar47) * (fVar41 - fVar47));
                          if (lVar10 == 0) goto LAB_03168190;
                          uVar43 = *(uint *)(lVar11 + 0x18);
                          if (uVar43 < *(uint *)(lVar10 + 0x18)) {
                            *(uint *)(lVar11 + 0x18) = uVar43 + 1;
                            *(float *)(lVar10 + (long)(int)uVar43 * 4 + 0x20) =
                                 fStack00000000000001d4;
                          }
                          else {
                            FUN_04059d64(lVar11,*(undefined8 *)
                                                 (*(long *)(*(long *)(*(long *)PTR_DAT_069ff178 +
                                                                     0x20) + 0xc0) + 0x70));
                          }
                          lVar10 = *(long *)(unaff_x26 + 0x20);
                          iVar26 = iVar26 + 1;
                          if (lVar10 == 0) goto LAB_03168190;
                        }
                        lVar10 = *(long *)(unaff_x26 + 0x28);
                        *in_stack_000000d8 = *in_stack_000000d8 + fStack00000000000001d4;
                        if (lVar10 == 0) goto LAB_03168190;
                        lVar12 = *(long *)(lVar10 + 0x10);
                        lVar13 = *(long *)PTR_DAT_069ff178;
                        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                        if (lVar12 == 0) goto LAB_03168190;
                        uVar43 = *(uint *)(lVar10 + 0x18);
                        if (uVar43 < *(uint *)(lVar12 + 0x18)) {
                          *(uint *)(lVar10 + 0x18) = uVar43 + 1;
                          *(undefined4 *)(lVar12 + (long)(int)uVar43 * 4 + 0x20) = 0;
                        }
                        else {
                          FUN_04059d64(0,lVar10,*(undefined8 *)
                                                 (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70)
                                      );
                        }
                        lVar10 = *in_stack_000000e0;
                        if (lVar10 == 0) goto LAB_03168190;
                        lVar12 = *(long *)(lVar10 + 0x10);
                        lVar13 = *(long *)PTR_DAT_069ff178;
                        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                        if (lVar12 == 0) goto LAB_03168190;
                        uVar43 = *(uint *)(lVar10 + 0x18);
                        if (uVar43 < *(uint *)(lVar12 + 0x18)) {
                          *(uint *)(lVar10 + 0x18) = uVar43 + 1;
                          *(undefined4 *)(lVar12 + (long)(int)uVar43 * 4 + 0x20) = 0;
                        }
                        else {
                          FUN_04059d64(0,lVar10,*(undefined8 *)
                                                 (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70)
                                      );
                        }
                        lVar10 = *(long *)(unaff_x26 + 0x20);
                        if (lVar10 == 0) goto LAB_03168190;
                        iVar26 = 0;
                        while (iVar26 < *(int *)(lVar10 + 0x18)) {
                          lVar10 = *(long *)(unaff_x26 + 0x28);
                          fVar39 = (float)FUN_04059a68(lVar11,iVar26,*(undefined8 *)PTR_DAT_06a0a108
                                                      );
                          if (lVar10 == 0) goto LAB_03168190;
                          lVar12 = *(long *)(lVar10 + 0x10);
                          lVar13 = *(long *)PTR_DAT_069ff178;
                          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                          if (lVar12 == 0) goto LAB_03168190;
                          uVar43 = *(uint *)(lVar10 + 0x18);
                          if (uVar43 < *(uint *)(lVar12 + 0x18)) {
                            *(uint *)(lVar10 + 0x18) = uVar43 + 1;
                            *(float *)(lVar12 + (long)(int)uVar43 * 4 + 0x20) =
                                 fVar39 / fStack00000000000001d4;
                          }
                          else {
                            FUN_04059d64(lVar10,*(undefined8 *)
                                                 (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70)
                                        );
                          }
                          lVar10 = *in_stack_000000e0;
                          if (lVar10 == 0) goto LAB_03168190;
                          lVar12 = *(long *)(lVar10 + 0x10);
                          lVar13 = *(long *)PTR_DAT_069ff178;
                          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                          if (lVar12 == 0) goto LAB_03168190;
                          uVar43 = *(uint *)(lVar10 + 0x18);
                          if (uVar43 < *(uint *)(lVar12 + 0x18)) {
                            *(uint *)(lVar10 + 0x18) = uVar43 + 1;
                            *(undefined4 *)(lVar12 + (long)(int)uVar43 * 4 + 0x20) = 0;
                          }
                          else {
                            FUN_04059d64(0,lVar10,*(undefined8 *)
                                                   (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) +
                                                   0x70));
                          }
                          lVar10 = *(long *)(unaff_x26 + 0x20);
                          iVar26 = iVar26 + 1;
                          if (lVar10 == 0) goto LAB_03168190;
                        }
                        iStack0000000000000108 = 4;
                        puVar24 = (undefined8 *)PTR_DAT_06a0b440;
                      }
                      goto LAB_0316c620;
                    }
                  }
                  uVar43 = *(uint *)(in_stack_00000170 + 0x18);
                  in_stack_00000160._4_4_ = in_stack_00000280;
                  if (unaff_x20 == 1) {
                    if ((ulong)uVar43 < 2) goto LAB_0316f2c4;
                    in_stack_00000160._4_4_ = *(float *)(lVar11 + 0x28);
                    *(undefined8 *)(unaff_x26 + 0x60) = *(undefined8 *)pfVar21;
                  }
                  if (uVar43 <= unaff_x24) {
LAB_0316f2c4:
                    /* WARNING: Subroutine does not return */
                    FUN_02d96868();
                  }
                  fVar39 = *(float *)(lVar10 + 0x28);
                  uVar9 = *(undefined8 *)pfVar30;
                  uVar44 = *(undefined8 *)pfVar21;
                  fVar38 = *(float *)(lVar11 + 0x28);
                  if (DAT_06db4c75 == '\0') {
                    FUN_02d965b8(PTR_DAT_069fbb48);
                    DAT_06db4c75 = '\x01';
                  }
                  if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  fVar42 = (float)uVar9 - (float)uVar44;
                  fVar45 = (float)((ulong)uVar9 >> 0x20) - (float)((ulong)uVar44 >> 0x20);
                  fVar39 = fVar39 - fVar38;
                  fVar38 = SQRT(fVar39 * fVar39 + fVar42 * fVar42 + fVar45 * fVar45);
                  uVar18 = (ulong)(uint)fVar38;
                  if (fVar38 <= DAT_010fd13c) {
                    if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
                      FUN_02d965b8(unaff_x28);
                      *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
                    }
                    uVar9 = **(undefined8 **)(*unaff_x28 + 0xb8);
                    fVar39 = *(float *)(*(undefined8 **)(*unaff_x28 + 0xb8) + 1);
                  }
                  else {
                    fVar39 = fVar39 / fVar38;
                    uVar9 = CONCAT44(fVar45 / fVar38,fVar42 / fVar38);
                  }
                  if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
                  fVar38 = *(float *)(lVar10 + 0x28);
                  uVar44 = *(undefined8 *)pfVar30;
                  uVar48 = *(undefined8 *)pfVar21;
                  fVar42 = *(float *)(lVar11 + 0x28);
                  if (DAT_06db4c77 == '\0') {
                    FUN_02d965b8(PTR_DAT_069fbb48);
                    DAT_06db4c77 = '\x01';
                  }
                  if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  fVar45 = (float)uVar44 - (float)uVar48;
                  fVar47 = (float)((ulong)uVar44 >> 0x20) - (float)((ulong)uVar48 >> 0x20);
                  fVar38 = fVar38 - fVar42;
                  fStack00000000000001d4 = SQRT(fVar38 * fVar38 + fVar45 * fVar45 + fVar47 * fVar47)
                  ;
                  if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
                  in_stack_00000110 = (ulong)(uint)in_stack_00000278;
                  fVar42 = *pfVar30;
                  fVar38 = *(float *)(lVar10 + 0x28);
                  if (DAT_06db4c77 == '\0') {
                    FUN_02d965b8(PTR_DAT_069fbb48);
                    DAT_06db4c77 = '\x01';
                  }
                  if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  fVar38 = fVar38 - in_stack_00000160._4_4_;
                  fVar38 = SQRT((fVar42 - in_stack_00000278) * (fVar42 - in_stack_00000278) +
                                fVar38 * fVar38) + 0.0;
                  fVar42 = 0.0;
                  if (unaff_x20 != 1) {
                    fVar42 = fStack000000000000010c;
                  }
                  uVar14 = (ulong)(uint)fVar42;
                  uVar37 = uVar14;
                  lVar12 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ff188);
                  FUN_040594d0(lVar12,*(undefined8 *)PTR_DAT_069ff180);
                  if (fVar42 < fStack00000000000001d4 - fStack000000000000010c) {
                    fVar42 = *(float *)((ulong)&stack0x00000278 | 4);
                    do {
                      if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
                      uVar44 = *(undefined8 *)pfVar30;
                      fVar45 = *(float *)(lVar10 + 0x28);
                      if (DAT_06db4c77 == '\0') {
                        FUN_02d965b8(PTR_DAT_069fbb48);
                        DAT_06db4c77 = '\x01';
                      }
                      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                      }
                      fVar33 = (float)uVar14;
                      fVar47 = (float)uVar9 * fVar33 + in_stack_00000278;
                      fVar49 = (float)((ulong)uVar9 >> 0x20) * fVar33 + fVar42;
                      uVar48 = CONCAT44(fVar49,fVar47);
                      fVar53 = fVar39 * fVar33 + in_stack_00000160._4_4_;
                      fVar47 = fVar47 - (float)uVar44;
                      fVar49 = fVar49 - (float)((ulong)uVar44 >> 0x20);
                      fVar45 = fVar53 - fVar45;
                      fVar45 = SQRT(fVar45 * fVar45 + fVar47 * fVar47 + fVar49 * fVar49);
                      uVar18 = (ulong)(uint)fVar45;
                      if (in_stack_000000b0 < fVar45) {
                        _uStack00000000000001b0 = uVar48;
                        in_stack_000001b8 = fVar53;
                        if (*(char *)(in_stack_00000148 + 0x5d6) != '\0') {
                          if (*(long *)(in_stack_00000148 + 0x20) == 0) goto LAB_03168190;
                          FUN_03199614(*(long *)(in_stack_00000148 + 0x20),&stack0x000001b0,0);
                        }
                        if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                           (lVar13 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                  uVar22 & 0xffffffff,*puVar24), lVar13 == 0))
                        goto LAB_03168190;
                        if (*(float *)(lVar13 + 0x100) == 0.0) {
                          if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                             (lVar13 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                    uVar22 & 0xffffffff,*puVar24), lVar13 == 0))
                          goto LAB_03168190;
                          if (*(float *)(lVar13 + 0x104) != 0.0) goto LAB_0316a920;
                          if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                             (lVar13 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                    uVar22 & 0xffffffff,*puVar24), lVar13 == 0))
                          goto LAB_03168190;
                          if (*(float *)(lVar13 + 0x110) != 0.0) goto LAB_0316a920;
                          if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                             (lVar13 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                    uVar22 & 0xffffffff,*puVar24), lVar13 == 0))
                          goto LAB_03168190;
                          if (*(float *)(lVar13 + 0x114) != 0.0) goto LAB_0316a920;
                          lVar13 = *in_stack_000000e0;
                          if (lVar13 == 0) goto LAB_03168190;
                          lVar17 = *(long *)(lVar13 + 0x10);
                          lVar20 = *(long *)PTR_DAT_069ff178;
                          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                          if (lVar17 == 0) goto LAB_03168190;
                          uVar43 = *(uint *)(lVar13 + 0x18);
                          if (uVar43 < *(uint *)(lVar17 + 0x18)) {
                            *(uint *)(lVar13 + 0x18) = uVar43 + 1;
                            *(undefined4 *)(lVar17 + (long)(int)uVar43 * 4 + 0x20) = 0;
                          }
                          else {
                            FUN_04059d64(0,lVar13,*(undefined8 *)
                                                   (*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) +
                                                   0x70));
                          }
                        }
                        else {
LAB_0316a920:
                          if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
                          fVar45 = *in_stack_000000d8;
                          uVar44 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                uVar22 & 0xffffffff,*puVar24);
                          FUN_0316f6a0(fVar33 + fVar45,fVar41,uVar44,uVar44,&stack0x0000022c,
                                       &stack0x00000228,&stack0x00000224,&stack0x00000218,
                                       &stack0x000001b0,&stack0x00000214);
                        }
                        puVar2 = PTR_DAT_069fbee0;
                        lVar13 = *(long *)(unaff_x26 + 0x20);
                        if (lVar13 == 0) goto LAB_03168190;
                        lVar17 = *(long *)(lVar13 + 0x10);
                        uVar18 = (ulong)(uint)in_stack_000001b8;
                        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                        if (lVar17 == 0) goto LAB_03168190;
                        uVar43 = *(uint *)(lVar13 + 0x18);
                        if (uVar43 < *(uint *)(lVar17 + 0x18)) {
                          lVar17 = lVar17 + (long)(int)uVar43 * 0xc;
                          *(uint *)(lVar13 + 0x18) = uVar43 + 1;
                          *(undefined4 *)(lVar17 + 0x20) = uStack00000000000001b0;
                          *(undefined4 *)(lVar17 + 0x24) = uStack00000000000001b4;
                          *(float *)(lVar17 + 0x28) = in_stack_000001b8;
                        }
                        else {
                          FUN_0409f624(lVar13,*(undefined8 *)
                                               (*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0)
                                               + 0x70));
                        }
                        if (lVar12 == 0) goto LAB_03168190;
                        lVar13 = *(long *)(lVar12 + 0x10);
                        lVar17 = *(long *)PTR_DAT_069ff178;
                        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                        if (lVar13 == 0) goto LAB_03168190;
                        uVar43 = *(uint *)(lVar12 + 0x18);
                        if (uVar43 < *(uint *)(lVar13 + 0x18)) {
                          *(uint *)(lVar12 + 0x18) = uVar43 + 1;
                          *(undefined4 *)(lVar13 + (long)(int)uVar43 * 4 + 0x20) = 0;
                        }
                        else {
                          FUN_04059d64(lVar12,*(undefined8 *)
                                               (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                        }
                        lVar13 = *in_stack_000000b8;
                        if (lVar13 == 0) goto LAB_03168190;
                        lVar17 = *(long *)(lVar13 + 0x10);
                        lVar20 = *(long *)PTR_DAT_069ff178;
                        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                        if (lVar17 == 0) goto LAB_03168190;
                        uVar43 = *(uint *)(lVar13 + 0x18);
                        if (uVar43 < *(uint *)(lVar17 + 0x18)) {
                          *(uint *)(lVar13 + 0x18) = uVar43 + 1;
                          *(undefined4 *)(lVar17 + (long)(int)uVar43 * 4 + 0x20) = 0;
                        }
                        else {
                          FUN_04059d64(0,lVar13,*(undefined8 *)
                                                 (*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70)
                                      );
                        }
                        lVar13 = *(long *)(unaff_x26 + 0x28);
                        if (lVar13 == 0) goto LAB_03168190;
                        lVar17 = *(long *)(lVar13 + 0x10);
                        lVar20 = *(long *)PTR_DAT_069ff178;
                        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                        if (lVar17 == 0) goto LAB_03168190;
                        uVar43 = *(uint *)(lVar13 + 0x18);
                        if (uVar43 < *(uint *)(lVar17 + 0x18)) {
                          *(uint *)(lVar13 + 0x18) = uVar43 + 1;
                          *(float *)(lVar17 + (long)(int)uVar43 * 4 + 0x20) =
                               fVar33 / fStack00000000000001d4;
                        }
                        else {
                          FUN_04059d64(lVar13,*(undefined8 *)
                                               (*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
                        }
                      }
                      uVar37 = (ulong)(uint)fStack000000000000010c;
                      uVar14 = (ulong)(uint)(fVar33 + fStack000000000000010c);
                    } while (fVar33 + fStack000000000000010c <
                             fStack00000000000001d4 - fStack000000000000010c);
                  }
                  fStack000000000000012c = (float)uVar18;
                  fStack0000000000000128 = (float)uVar37;
                  if (*(char *)(in_stack_00000148 + 0x5d6) == '\0') {
                    if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
                    lVar13 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),uVar22 & 0xffffffff,
                                          *(undefined8 *)PTR_DAT_06a0b440);
                    fStack000000000000012c = (float)uVar18;
                    fStack0000000000000128 = (float)uVar37;
                    if (lVar13 == 0) goto LAB_03168190;
                    if (*(int *)(lVar13 + 0x6c) == 1) {
                      if (*(long *)(unaff_x26 + 0x28) == 0) goto LAB_03168190;
                      iVar26 = 0;
                      puVar29 = (undefined4 *)(in_stack_00000170 + 0x20 + uVar22 * 0xc);
                      lVar13 = *(long *)(unaff_x26 + 0x28);
                      while( true ) {
                        fStack000000000000012c = (float)uVar18;
                        fStack0000000000000128 = (float)uVar37;
                        if (*(int *)(lVar13 + 0x18) <= iVar26) break;
                        uVar18 = (ulong)*(uint *)(in_stack_00000170 + 0x18);
                        if ((((uVar18 <= uVar22) || (uVar18 <= unaff_x20)) || (uVar18 <= unaff_x24))
                           || (uVar18 <= unaff_x20 + 2)) goto LAB_0316f2c4;
                        uVar40 = *puVar29;
                        fVar39 = (float)puVar29[1];
                        uVar43 = puVar29[2];
                        fVar41 = *pfVar21;
                        uVar50 = *(undefined4 *)(lVar11 + 0x24);
                        uVar54 = *(undefined4 *)(lVar11 + 0x28);
                        FUN_04059a68(lVar13,iVar26,*(undefined8 *)PTR_DAT_06a0a108);
                        FUN_0316f340(uVar40,fVar39,uVar43,fVar41,uVar50,uVar54);
                        unaff_x26 = &stack0x00000218;
                        if (((in_stack_00000238 == 0) ||
                            (uVar40 = FUN_0409f2f4(in_stack_00000238,iVar26,
                                                   *(undefined8 *)PTR_DAT_069fd088), lVar12 == 0))
                           || (fVar41 = (float)FUN_04059a68(lVar12,iVar26,
                                                            *(undefined8 *)PTR_DAT_06a0a108),
                              in_stack_00000238 == 0)) goto LAB_03168190;
                        uVar37 = (ulong)(uint)(fVar39 + fVar41);
                        uVar18 = (ulong)uVar43;
                        FUN_0409f350(uVar40,in_stack_00000238,iVar26,*(undefined8 *)PTR_DAT_06a0b7d0
                                    );
                        iVar26 = iVar26 + 1;
                        lVar13 = in_stack_00000240;
                        if (in_stack_00000240 == 0) goto LAB_03168190;
                      }
                    }
                  }
                  puVar2 = PTR_DAT_069fbee0;
                  lVar11 = *(long *)(unaff_x26 + 0x20);
                  if (lVar11 == 0) goto LAB_03168190;
                  if (*(int *)(lVar11 + 0x18) == 0) {
                    if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
                    lVar12 = *(long *)(lVar11 + 0x10);
                    fVar39 = *pfVar30;
                    uVar40 = *(undefined4 *)(lVar10 + 0x24);
                    uVar50 = *(undefined4 *)(lVar10 + 0x28);
                    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                    if (lVar12 == 0) goto LAB_03168190;
                    if (*(int *)(lVar12 + 0x18) == 0) {
                      FUN_0409f624(lVar11,*(undefined8 *)
                                           (*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0) +
                                           0x70));
                    }
                    else {
                      *(undefined4 *)(lVar11 + 0x18) = 1;
                      *(float *)(lVar12 + 0x20) = fVar39;
                      *(undefined4 *)(lVar12 + 0x24) = uVar40;
                      *(undefined4 *)(lVar12 + 0x28) = uVar50;
                    }
                    if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
                    fVar41 = *pfVar30;
                    fVar39 = *(float *)(lVar10 + 0x24);
                    fStack000000000000012c = *(float *)(lVar10 + 0x28);
                    if (DAT_06db4c77 == '\0') {
                      FUN_02d965b8(PTR_DAT_069fbb48);
                      DAT_06db4c77 = '\x01';
                    }
                    if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                    }
                    fVar39 = in_stack_0000027c - fVar39;
                    lVar11 = *(long *)(unaff_x26 + 0x28);
                    fStack000000000000012c = in_stack_00000160._4_4_ - fStack000000000000012c;
                    fStack0000000000000128 = fStack000000000000012c * fStack000000000000012c;
                    fStack00000000000001d4 =
                         SQRT(fStack0000000000000128 +
                              (in_stack_00000278 - fVar41) * (in_stack_00000278 - fVar41) +
                              fVar39 * fVar39);
                    if (lVar11 == 0) goto LAB_03168190;
                    lVar12 = *(long *)(lVar11 + 0x10);
                    lVar13 = *(long *)PTR_DAT_069ff178;
                    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                    if (lVar12 == 0) goto LAB_03168190;
                    uVar43 = *(uint *)(lVar11 + 0x18);
                    if (uVar43 < *(uint *)(lVar12 + 0x18)) {
                      *(uint *)(lVar11 + 0x18) = uVar43 + 1;
                      *(undefined4 *)(lVar12 + (long)(int)uVar43 * 4 + 0x20) = 0x3f800000;
                    }
                    else {
                      FUN_04059d64(0x3f800000,lVar11,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                    }
                    lVar11 = *in_stack_000000e0;
                    if (lVar11 == 0) goto LAB_03168190;
                    lVar12 = *(long *)(lVar11 + 0x10);
                    lVar13 = *(long *)PTR_DAT_069ff178;
                    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                    if (lVar12 == 0) goto LAB_03168190;
                    uVar43 = *(uint *)(lVar11 + 0x18);
                    if (uVar43 < *(uint *)(lVar12 + 0x18)) {
                      *(uint *)(lVar11 + 0x18) = uVar43 + 1;
                      *(undefined4 *)(lVar12 + (long)(int)uVar43 * 4 + 0x20) = 0;
                    }
                    else {
                      FUN_04059d64(0,lVar11,*(undefined8 *)
                                             (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                    }
                    lVar11 = *in_stack_000000b8;
                    if (lVar11 == 0) goto LAB_03168190;
                    lVar12 = *(long *)(lVar11 + 0x10);
                    lVar13 = *(long *)PTR_DAT_069ff178;
                    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                    if (lVar12 == 0) goto LAB_03168190;
                    uVar43 = *(uint *)(lVar11 + 0x18);
                    if (uVar43 < *(uint *)(lVar12 + 0x18)) {
                      *(uint *)(lVar11 + 0x18) = uVar43 + 1;
                      *(undefined4 *)(lVar12 + (long)(int)uVar43 * 4 + 0x20) = 0;
                    }
                    else {
                      FUN_04059d64(0,lVar11,*(undefined8 *)
                                             (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                    }
                  }
                  puVar24 = (undefined8 *)PTR_DAT_06a0b440;
                  puVar2 = PTR_DAT_069fd088;
                  unaff_x28 = (long *)PTR_DAT_069fb978;
                  lVar11 = *(long *)(unaff_x26 + 0x20);
                  if (lVar11 == 0) goto LAB_03168190;
                  unaff_x29 = &PTR_FUN_06db4000;
                  if (0 < *(int *)(lVar11 + 0x18)) {
                    fVar39 = (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -1,
                                                 *(undefined8 *)PTR_DAT_069fd088);
                    if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
                    fVar41 = fStack0000000000000128 - *(float *)(lVar10 + 0x24);
                    fStack000000000000012c = fStack000000000000012c - *(float *)(lVar10 + 0x28);
                    fStack0000000000000128 = fStack00000000000000a4;
                    if (fStack00000000000000a4 <=
                        fStack000000000000012c * fStack000000000000012c +
                        (fVar39 - *pfVar30) * (fVar39 - *pfVar30) + fVar41 * fVar41) {
                      lVar11 = *(long *)(unaff_x26 + 0x20);
                      if (lVar11 == 0) goto LAB_03168190;
                      fVar39 = fStack00000000000000a4;
                      fVar41 = (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -1,
                                                   *(undefined8 *)puVar2);
                      if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
                      fVar42 = *pfVar30;
                      fVar47 = *(float *)(lVar10 + 0x24);
                      fVar45 = *(float *)(lVar10 + 0x28);
                      if (DAT_06db4c77 == '\0') {
                        FUN_02d965b8(PTR_DAT_069fbb48);
                        DAT_06db4c77 = '\x01';
                      }
                      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                      }
                      puVar3 = PTR_DAT_069fbee0;
                      fVar39 = fVar39 - fVar47;
                      lVar11 = *(long *)(unaff_x26 + 0x20);
                      fStack000000000000012c = fStack000000000000012c - fVar45;
                      if (in_stack_000000b0 <=
                          SQRT(fStack000000000000012c * fStack000000000000012c +
                               (fVar41 - fVar42) * (fVar41 - fVar42) + fVar39 * fVar39)) {
                        if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
                        if (lVar11 == 0) goto LAB_03168190;
                        lVar12 = *(long *)(lVar11 + 0x10);
                        fVar39 = *pfVar30;
                        fVar41 = *(float *)(lVar10 + 0x24);
                        fStack000000000000012c = *(float *)(lVar10 + 0x28);
                        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                        if (lVar12 == 0) goto LAB_03168190;
                        uVar43 = *(uint *)(lVar11 + 0x18);
                        if (uVar43 < *(uint *)(lVar12 + 0x18)) {
                          lVar12 = lVar12 + (long)(int)uVar43 * 0xc;
                          *(uint *)(lVar11 + 0x18) = uVar43 + 1;
                          *(float *)(lVar12 + 0x20) = fVar39;
                          *(float *)(lVar12 + 0x24) = fVar41;
                          *(float *)(lVar12 + 0x28) = fStack000000000000012c;
                        }
                        else {
                          FUN_0409f624(lVar11,*(undefined8 *)
                                               (*(long *)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0)
                                               + 0x70));
                        }
                        fVar39 = fStack00000000000001d4;
                        lVar11 = *(long *)(unaff_x26 + 0x20);
                        if (lVar11 == 0) goto LAB_03168190;
                        fVar42 = (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -1,
                                                     *(undefined8 *)puVar2);
                        if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
                        fVar45 = *pfVar30;
                        fVar49 = *(float *)(lVar10 + 0x24);
                        fVar47 = *(float *)(lVar10 + 0x28);
                        if (DAT_06db4c77 == '\0') {
                          FUN_02d965b8(PTR_DAT_069fbb48);
                          DAT_06db4c77 = '\x01';
                        }
                        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                          thunk_FUN_02df485c();
                        }
                        fVar41 = fVar41 - fVar49;
                        lVar11 = *(long *)(unaff_x26 + 0x28);
                        fStack000000000000012c = fStack000000000000012c - fVar47;
                        fStack0000000000000128 = fStack000000000000012c * fStack000000000000012c;
                        fStack00000000000001d4 =
                             fVar39 + SQRT(fStack0000000000000128 +
                                           (fVar42 - fVar45) * (fVar42 - fVar45) + fVar41 * fVar41);
                        if (lVar11 == 0) goto LAB_03168190;
                        lVar10 = *(long *)(lVar11 + 0x10);
                        lVar12 = *(long *)PTR_DAT_069ff178;
                        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                        if (lVar10 == 0) goto LAB_03168190;
                        uVar43 = *(uint *)(lVar11 + 0x18);
                        if (uVar43 < *(uint *)(lVar10 + 0x18)) {
                          *(uint *)(lVar11 + 0x18) = uVar43 + 1;
                          *(undefined4 *)(lVar10 + (long)(int)uVar43 * 4 + 0x20) = 0x3f800000;
                        }
                        else {
                          FUN_04059d64(0x3f800000,lVar11,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                        }
                        lVar11 = *in_stack_000000e0;
                        if (lVar11 == 0) goto LAB_03168190;
                        lVar10 = *(long *)(lVar11 + 0x10);
                        lVar12 = *(long *)PTR_DAT_069ff178;
                        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                        if (lVar10 == 0) goto LAB_03168190;
                        uVar43 = *(uint *)(lVar11 + 0x18);
                        if (uVar43 < *(uint *)(lVar10 + 0x18)) {
                          *(uint *)(lVar11 + 0x18) = uVar43 + 1;
                          *(undefined4 *)(lVar10 + (long)(int)uVar43 * 4 + 0x20) = 0;
                        }
                        else {
                          FUN_04059d64(0,lVar11,*(undefined8 *)
                                                 (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70)
                                      );
                        }
                      }
                      else {
                        if (lVar11 == 0) goto LAB_03168190;
                        if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
                        fStack000000000000012c = *(float *)(lVar10 + 0x28);
                        fStack0000000000000128 = *(float *)(lVar10 + 0x24);
                        FUN_0409f350(*pfVar30,lVar11,*(int *)(lVar11 + 0x18) + -1,
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
                  in_stack_00000278 =
                       (float)FUN_0409f2f4(lVar11,iVar26 + -1,*(undefined8 *)PTR_DAT_069fd088);
                  lVar11 = *(long *)(in_stack_00000148 + 0x2c8);
                  *(float *)(in_stack_00000148 + 0x2c0) =
                       *(float *)(in_stack_00000148 + 0x2c0) + fStack00000000000001d4;
                  if (lVar11 == 0) goto LAB_03168190;
                  lVar10 = *(long *)(lVar11 + 0x10);
                  lVar12 = *(long *)PTR_DAT_069fc3e0;
                  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                  if (lVar10 == 0) goto LAB_03168190;
                  uVar43 = *(uint *)(lVar11 + 0x18);
                  iStack00000000000000d4 = iVar26 + iStack00000000000000d4;
                  if (uVar43 < *(uint *)(lVar10 + 0x18)) {
                    *(uint *)(lVar11 + 0x18) = uVar43 + 1;
                    *(int *)(lVar10 + (long)(int)uVar43 * 4 + 0x20) = iStack00000000000000d4;
                  }
                  else {
                    FUN_03fb3e1c(lVar11,iStack00000000000000d4,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                     (lVar11 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),uVar22 & 0xffffffff,
                                            *puVar24), lVar11 == 0)) goto LAB_03168190;
                  iStack0000000000000108 = *(int *)(lVar11 + 0x6c);
                  in_stack_0000027c = fStack0000000000000128;
                  in_stack_00000280 = fStack000000000000012c;
                  in_stack_00000130 = in_stack_00000278;
                }
LAB_0316c620:
                if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                   (lVar11 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),uVar22 & 0xffffffff,
                                          *puVar24), fVar39 = fStack00000000000001d4, lVar11 == 0))
                goto LAB_03168190;
                if (*(char *)(lVar11 + 0xb8) != '\0') {
                  if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
                  uVar9 = *(undefined8 *)(in_stack_00000148 + 0x20);
                  uVar44 = *(undefined8 *)(unaff_x26 + 0x28);
                  uVar40 = *(undefined4 *)(in_stack_00000148 + 0x128);
                  lVar11 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                        *(undefined8 *)PTR_DAT_06a0b440);
                  if (lVar11 == 0) goto LAB_03168190;
                  FUN_031098f4(uVar40,uStack000000000000006c,fVar39,uVar9,&stack0x00000238,uVar44,
                               &stack0x00000248,*(undefined1 *)(lVar11 + 0xb8),
                               *(undefined8 *)(unaff_x26 + 0x78),in_stack_00000070,in_stack_000000e0
                              );
                  puVar24 = (undefined8 *)PTR_DAT_06a0b440;
                }
                if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
                FUN_0409f858(*(long *)(unaff_x26 + 0x78),*(undefined8 *)(unaff_x26 + 0x20),
                             *(undefined8 *)PTR_DAT_06a0b3a0);
                if (*in_stack_00000078 == 0) goto LAB_03168190;
                FUN_04059f70(*in_stack_00000078,*(undefined8 *)(unaff_x26 + 0x28),
                             *(undefined8 *)PTR_DAT_06a0b3d8);
                fVar41 = fStack0000000000000088;
                fVar39 = in_stack_00000080._4_4_;
                FUN_0316fb80(fStack000000000000008c,in_stack_00000148,extraout_x1,
                             unaff_x20 & 0xffffffff,in_stack_00000170,&stack0x00000268,0,
                             *(undefined8 *)(unaff_x26 + 0x78));
                if (iVar28 + 3 < *(int *)(in_stack_00000170 + 0x18)) {
                  FUN_0317018c(in_stack_00000148,*(undefined8 *)(in_stack_00000148 + 0x68),
                               unaff_x20 & 0xffffffff,in_stack_00000170,&stack0x00000258,0);
                }
                puVar3 = PTR_DAT_069ff178;
                puVar2 = PTR_DAT_069fd088;
                lVar11 = *in_stack_00000090;
                if (lVar11 == 0) goto LAB_03168190;
                lVar10 = *(long *)(lVar11 + 0x10);
                fVar42 = *in_stack_000000d8;
                *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                if (lVar10 == 0) goto LAB_03168190;
                uVar43 = *(uint *)(lVar11 + 0x18);
                if (uVar43 < *(uint *)(lVar10 + 0x18)) {
                  *(uint *)(lVar11 + 0x18) = uVar43 + 1;
                  *(float *)(lVar10 + (long)(int)uVar43 * 4 + 0x20) = fVar42;
                }
                else {
                  FUN_04059d64(lVar11,*(undefined8 *)
                                       (*(long *)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0) + 0x70))
                  ;
                }
                if ((long)unaff_x20 < (long)*(int *)(in_stack_00000098 + 0x18)) {
                  lVar11 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*puVar24);
                  lVar10 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*puVar24);
                  lVar12 = *(long *)(unaff_x26 + 0x78);
                  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  fVar42 = (float)FUN_0409f2f4(lVar12,*(int *)(lVar12 + 0x18) + -1,
                                               *(undefined8 *)puVar2);
                  lVar12 = *(long *)(unaff_x26 + 0x78);
                  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  fVar45 = fVar41;
                  fVar47 = fVar39;
                  fVar49 = (float)FUN_0409f2f4(lVar12,*(int *)(lVar12 + 0x18) + -2,
                                               *(undefined8 *)puVar2);
                  if (DAT_06db4c75 == '\0') {
                    FUN_02d965b8(PTR_DAT_069fbb48);
                    DAT_06db4c75 = '\x01';
                  }
                  if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  fVar42 = fVar42 - fVar49;
                  fVar41 = fVar41 - fVar45;
                  fVar39 = fVar39 - fVar47;
                  fVar45 = SQRT(fVar39 * fVar39 + fVar42 * fVar42 + fVar41 * fVar41);
                  if (fVar45 <= DAT_010fd13c) {
                    if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
                      FUN_02d965b8(unaff_x28);
                      *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
                    }
                    pfVar21 = *(float **)(*unaff_x28 + 0xb8);
                    fVar42 = *pfVar21;
                    fVar41 = pfVar21[1];
                    fVar39 = pfVar21[2];
                  }
                  else {
                    fVar42 = fVar42 / fVar45;
                    fVar41 = fVar41 / fVar45;
                    fVar39 = fVar39 / fVar45;
                  }
                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  *(float *)(lVar10 + 0x94) = fVar42;
                  *(float *)(lVar10 + 0x98) = fVar41;
                  *(float *)(lVar10 + 0x9c) = fVar39;
                  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  *(float *)(lVar11 + 0x88) = fVar42;
                  *(float *)(lVar11 + 0x8c) = fVar41;
                  *(float *)(lVar11 + 0x90) = fVar39;
                  puVar24 = (undefined8 *)PTR_DAT_06a0b440;
                }
                if (unaff_x20 < 2) {
                  if (unaff_x20 == 1) {
                    lVar11 = FUN_0400ff1c(in_stack_00000098,uVar22 & 0xffffffff,*puVar24);
                    lVar10 = FUN_0400ff1c(in_stack_00000098,uVar22 & 0xffffffff,*puVar24);
                    if (*(long *)(unaff_x26 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d96860();
                    }
                    fVar42 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),1,*(undefined8 *)puVar2
                                                );
                    if (*(long *)(unaff_x26 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d96860();
                    }
                    fVar45 = fVar41;
                    fVar47 = fVar39;
                    fVar49 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)puVar2
                                                );
                    if (DAT_06db4c75 == '\0') {
                      FUN_02d965b8(PTR_DAT_069fbb48);
                      DAT_06db4c75 = '\x01';
                    }
                    if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                    }
                    fVar42 = fVar42 - fVar49;
                    fVar41 = fVar41 - fVar45;
                    fVar39 = fVar39 - fVar47;
                    fVar45 = SQRT(fVar39 * fVar39 + fVar42 * fVar42 + fVar41 * fVar41);
                    if (fVar45 <= DAT_010fd13c) {
                      if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
                        FUN_02d965b8(unaff_x28);
                        *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
                      }
                      pfVar21 = *(float **)(*unaff_x28 + 0xb8);
                      fVar42 = *pfVar21;
                      fVar41 = pfVar21[1];
                      fVar39 = pfVar21[2];
                    }
                    else {
                      fVar42 = fVar42 / fVar45;
                      fVar41 = fVar41 / fVar45;
                      fVar39 = fVar39 / fVar45;
                    }
                    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d96860();
                    }
                    *(float *)(lVar10 + 0x94) = fVar42;
                    *(float *)(lVar10 + 0x98) = fVar41;
                    *(float *)(lVar10 + 0x9c) = fVar39;
                    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d96860();
                    }
                    *(float *)(lVar11 + 0x88) = fVar42;
                    *(float *)(lVar11 + 0x8c) = fVar41;
                    *(float *)(lVar11 + 0x90) = fVar39;
                  }
                }
                else if ((long)unaff_x20 < (long)*(int *)(in_stack_00000098 + 0x18)) {
                  if (*(long *)(unaff_x26 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  iVar28 = *(int *)(*(long *)(unaff_x26 + 0x78) + 0x18);
                  lVar11 = FUN_0400ff1c(in_stack_00000098,uVar22 & 0xffffffff,*puVar24);
                  puVar2 = PTR_DAT_069fd088;
                  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  if (*(int *)(lVar11 + 0xbc) + 1 < iVar28) {
                    lVar11 = FUN_0400ff1c(in_stack_00000098,uVar22 & 0xffffffff,*puVar24);
                    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d96860();
                    }
                    if (*(int *)(lVar11 + 0x6c) != 3) {
                      lVar10 = *(long *)(unaff_x26 + 0x78);
                      lVar11 = FUN_0400ff1c(in_stack_00000098,uVar22 & 0xffffffff,*puVar24);
                      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02d96860();
                      }
                      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02d96860();
                      }
                      fVar47 = (float)FUN_0409f2f4(lVar10,*(int *)(lVar11 + 0xbc) + 1,
                                                   *(undefined8 *)puVar2);
                      lVar10 = *(long *)(unaff_x26 + 0x78);
                      fVar42 = fVar41;
                      fVar45 = fVar39;
                      lVar11 = FUN_0400ff1c(in_stack_00000098,uVar22 & 0xffffffff,*puVar24);
                      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02d96860();
                      }
                      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02d96860();
                      }
                      fVar49 = (float)FUN_0409f2f4(lVar10,*(undefined4 *)(lVar11 + 0xbc),
                                                   *(undefined8 *)puVar2);
                      lVar11 = FUN_0400ff1c(in_stack_00000098,uVar22 & 0xffffffff,*puVar24);
                      if (DAT_06db4c75 == '\0') {
                        FUN_02d965b8(PTR_DAT_069fbb48);
                        DAT_06db4c75 = '\x01';
                      }
                      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                      }
                      fVar53 = DAT_010fd13c;
                      fVar47 = fVar47 - fVar49;
                      fVar49 = fVar41 - fVar42;
                      fVar45 = fVar39 - fVar45;
                      fVar39 = SQRT(fVar45 * fVar45 + fVar47 * fVar47 + fVar49 * fVar49);
                      if (fVar39 <= DAT_010fd13c) {
                        if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
                          FUN_02d965b8(unaff_x28);
                          *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
                        }
                        pfVar21 = *(float **)(*unaff_x28 + 0xb8);
                        fVar33 = *pfVar21;
                        fVar49 = pfVar21[1];
                        fVar39 = pfVar21[2];
                      }
                      else {
                        fVar33 = fVar47 / fVar39;
                        fVar49 = fVar49 / fVar39;
                        fVar39 = fVar45 / fVar39;
                      }
                      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02d96860();
                      }
                      *(float *)(lVar11 + 0x88) = fVar33;
                      *(float *)(lVar11 + 0x8c) = fVar49;
                      uVar9 = *puVar24;
                      *(float *)(lVar11 + 0x90) = fVar39;
                      uVar43 = *(uint *)(in_stack_00000098 + 0x18);
                      lVar11 = FUN_0400ff1c(in_stack_00000098,uVar22 & 0xffffffff,uVar9);
                      if (unaff_x20 != uVar43) {
                        fVar41 = fVar42;
                      }
                      if (DAT_06db4c75 == '\0') {
                        FUN_02d965b8(PTR_DAT_069fbb48);
                        DAT_06db4c75 = '\x01';
                      }
                      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                      }
                      fVar41 = fVar41 - fVar42;
                      fVar42 = SQRT(fVar45 * fVar45 + fVar47 * fVar47 + fVar41 * fVar41);
                      if (fVar42 <= fVar53) {
                        if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
                          FUN_02d965b8(unaff_x28);
                          *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
                        }
                        uVar9 = **(undefined8 **)(*unaff_x28 + 0xb8);
                        fVar45 = *(float *)(*(undefined8 **)(*unaff_x28 + 0xb8) + 1);
                      }
                      else {
                        fVar45 = fVar45 / fVar42;
                        uVar9 = CONCAT44(fVar41 / fVar42,fVar47 / fVar42);
                        fVar39 = fVar47;
                      }
                      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02d96860();
                      }
                      *(undefined8 *)(lVar11 + 0x94) = uVar9;
                      *(float *)(lVar11 + 0x9c) = fVar45;
                    }
                  }
                }
                if ((long)unaff_x20 < (long)*(int *)(in_stack_00000098 + 0x18)) {
                  lVar11 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*puVar24);
                  lVar10 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*puVar24);
                  if ((lVar10 == 0) || (lVar11 == 0)) goto LAB_03168190;
                  uVar9 = *(undefined8 *)(lVar10 + 0x48);
                  *(undefined4 *)(lVar11 + 0x5c) = *(undefined4 *)(lVar10 + 0x50);
                  *(undefined8 *)(lVar11 + 0x54) = uVar9;
                }
                if ((long)(*(int *)(in_stack_00000170 + 0x18) + -2) <= (long)unaff_x24) {
                  if (*(char *)(in_stack_00000148 + 0x84) == '\0') {
                    lVar11 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                                          *puVar24);
                    if ((*(long *)(unaff_x26 + 0x78) == 0) || (lVar11 == 0)) goto LAB_03168190;
                    uVar9 = *puVar24;
                    *(undefined4 *)(lVar11 + 0xbc) =
                         *(undefined4 *)(*(long *)(unaff_x26 + 0x78) + 0x18);
                    lVar11 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                                          uVar9);
                    if (lVar11 == 0) goto LAB_03168190;
                    uVar9 = *puVar24;
                    *(float *)(lVar11 + 0xc0) = *in_stack_000000d8;
                    lVar11 = FUN_0400ff1c(in_stack_00000098,0,uVar9);
                    if (lVar11 == 0) goto LAB_03168190;
                    uVar9 = *puVar24;
                    *(undefined4 *)(lVar11 + 0xbc) = 0;
                    lVar11 = FUN_0400ff1c(in_stack_00000098,0,uVar9);
                    if (lVar11 == 0) goto LAB_03168190;
                    *(undefined4 *)(lVar11 + 0xc0) = 0;
                    if (2 < *(int *)(in_stack_00000098 + 0x18)) {
                      lVar11 = FUN_0400ff1c(in_stack_00000098,
                                            *(int *)(in_stack_00000098 + 0x18) + -2,*puVar24);
                      fVar39 = *in_stack_000000d8;
                      lVar10 = FUN_0400ff1c(in_stack_00000098,
                                            *(int *)(in_stack_00000098 + 0x18) + -2,*puVar24);
                      if ((lVar10 == 0) || (lVar11 == 0)) goto LAB_03168190;
                      uVar9 = *puVar24;
                      *(float *)(lVar11 + 200) = fVar39 - *(float *)(lVar10 + 0xc0);
                      lVar11 = FUN_0400ff1c(in_stack_00000098,
                                            *(int *)(in_stack_00000098 + 0x18) + -2,uVar9);
                      if (lVar11 == 0) goto LAB_03168190;
                      fVar39 = *(float *)(lVar11 + 200);
                      lVar11 = FUN_0400ff1c(in_stack_00000098,
                                            *(int *)(in_stack_00000098 + 0x18) + -2,*puVar24);
                      lVar10 = FUN_0400ff1c(in_stack_00000098,
                                            *(int *)(in_stack_00000098 + 0x18) + -2,*puVar24);
                      if (1000.0 <= fVar39) {
                        if (lVar10 == 0) goto LAB_03168190;
                        fStack00000000000001d0 = *(float *)(lVar10 + 200) / 1000.0;
                        uVar9 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
                        uVar9 = FUN_05362cb4(uVar9,*(undefined8 *)PTR_DAT_06a0c488,0);
                      }
                      else {
                        if (lVar10 == 0) goto LAB_03168190;
                        uVar9 = FUN_054fad00(lVar10 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
                        uVar9 = FUN_05362cb4(uVar9,*(undefined8 *)PTR_DAT_06a0c4f0,0);
                      }
                      if (lVar11 != 0) {
                        *(undefined8 *)(lVar11 + 0xd0) = uVar9;
                        LeanTween__value((undefined8 *)(lVar11 + 0xd0),uVar9);
                        lVar11 = FUN_0400ff1c(in_stack_00000098,
                                              *(int *)(in_stack_00000098 + 0x18) + -2,*puVar24);
                        if (lVar11 != 0) {
                          fVar41 = *(float *)(lVar11 + 0x4c);
                          lVar11 = FUN_0400ff1c(in_stack_00000098,
                                                *(int *)(in_stack_00000098 + 0x18) + -1,*puVar24);
                          if (lVar11 != 0) {
                            fVar42 = *(float *)(lVar11 + 0x4c);
                            fVar39 = fVar41 - fVar42;
                            if (DAT_06db4ece == '\0') {
                              FUN_02d965b8(PTR_DAT_069fbb48);
                              DAT_06db4ece = '\x01';
                            }
                            puVar2 = PTR_DAT_069fbb48;
                            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                              thunk_FUN_02df485c();
                            }
                            fVar47 = 0.0;
                            fVar45 = SQRT((fVar38 * fVar38 + fVar39 * fVar39) * DAT_010fd194);
                            fVar39 = DAT_010fcd14;
                            if (DAT_010fcd14 <= fVar45) {
                              fVar39 = -1.0;
                              fVar45 = (fVar38 * 0.0 + ABS(fVar41 - fVar42) * 50.0 + 0.0) / fVar45;
                              fVar38 = 1.0;
                              if (fVar45 <= 1.0) {
                                fVar38 = fVar45;
                              }
                              fVar41 = -1.0;
                              if (-1.0 <= fVar45) {
                                fVar41 = fVar38;
                              }
                              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                                fVar39 = -1.0;
                                thunk_FUN_02df485c();
                              }
                              dVar36 = acos((double)fVar41);
                              fVar47 = (float)dVar36 * DAT_010fcf40;
                            }
                            fVar47 = 90.0 - fVar47;
                            lVar11 = FUN_0400ff1c(in_stack_00000098,
                                                  *(int *)(in_stack_00000098 + 0x18) + -2,*puVar24);
                            if (fVar47 <= 10.0) {
                              uVar9 = FUN_054fad00(&stack0x00000234,*(undefined8 *)PTR_DAT_06a0c498,
                                                   0);
                            }
                            else {
                              dVar36 = modf((double)fVar47,(double *)&stack0x00000298);
                              if (0.0 <= fVar47) {
                                if (dVar36 == 0.5) {
                                  dVar36 = *(double *)(unaff_x26 + 0x80);
                                  fVar39 = 1.0;
                                  goto LAB_0316e5fc;
                                }
                                fStack00000000000001d0 = (float)(int)(fVar47 + 0.5);
                              }
                              else if (dVar36 == -0.5) {
                                dVar36 = *(double *)(unaff_x26 + 0x80);
                                fVar39 = -1.0;
LAB_0316e5fc:
                                fStack00000000000001d0 = (float)dVar36;
                                if (((long)dVar36 & 1U) != 0) {
                                  fStack00000000000001d0 = (float)dVar36 + fVar39;
                                }
                              }
                              else {
                                fStack00000000000001d0 = (float)(int)(fVar47 + -0.5);
                              }
                              uVar9 = FUN_054fabf8(&stack0x000001d0,0);
                            }
                            if (lVar11 != 0) {
                              *(undefined8 *)(lVar11 + 0xd8) = uVar9;
                              LeanTween__value((undefined8 *)(lVar11 + 0xd8),uVar9);
                              lVar11 = FUN_0400ff1c(in_stack_00000098,
                                                    *(int *)(in_stack_00000098 + 0x18) + -2,*puVar24
                                                   );
                              if (lVar11 != 0) {
                                fVar38 = *(float *)(lVar11 + 0x4c);
                                lVar11 = FUN_0400ff1c(in_stack_00000098,
                                                      *(int *)(in_stack_00000098 + 0x18) + -1,
                                                      *puVar24);
                                if (lVar11 != 0) {
                                  fVar41 = *(float *)(lVar11 + 0x4c);
                                  lVar11 = FUN_0400ff1c(in_stack_00000098,
                                                        *(int *)(in_stack_00000098 + 0x18) + -2,
                                                        *puVar24);
                                  if (lVar11 != 0) {
                                    fVar42 = *(float *)(lVar11 + 0x48);
                                    lVar11 = FUN_0400ff1c(in_stack_00000098,
                                                          *(int *)(in_stack_00000098 + 0x18) + -2,
                                                          *puVar24);
                                    if (lVar11 != 0) {
                                      fVar45 = *(float *)(lVar11 + 0x50);
                                      lVar11 = FUN_0400ff1c(in_stack_00000098,
                                                            *(int *)(in_stack_00000098 + 0x18) + -1,
                                                            *puVar24);
                                      if (lVar11 != 0) {
                                        fVar47 = *(float *)(lVar11 + 0x48);
                                        lVar11 = FUN_0400ff1c(in_stack_00000098,
                                                              *(int *)(in_stack_00000098 + 0x18) +
                                                              -1,*puVar24);
                                        if (lVar11 != 0) {
                                          fVar49 = *(float *)(lVar11 + 0x50);
                                          if (DAT_06db4c77 == '\0') {
                                            FUN_02d965b8(PTR_DAT_069fbb48);
                                            DAT_06db4c77 = '\x01';
                                          }
                                          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                                            thunk_FUN_02df485c();
                                          }
                                          fVar45 = fVar45 - fVar49;
                                          fVar42 = fVar42 - fVar47;
                                          lVar11 = FUN_0400ff1c(in_stack_00000098,
                                                                *(int *)(in_stack_00000098 + 0x18) +
                                                                -2,*puVar24);
                                          fStack00000000000001d0 =
                                               (ABS(fVar38 - fVar41) /
                                               SQRT(fVar42 * fVar42 + fVar45 * fVar45)) * 100.0;
                                          uVar9 = FUN_054fad00(&stack0x000001d0,
                                                               *(undefined8 *)PTR_DAT_06a0c498,0);
                                          if (lVar11 != 0) goto LAB_0316ea58;
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
                      goto LAB_03168190;
                    }
                  }
                  else {
                    lVar11 = FUN_0400ff1c(in_stack_00000098,0,*puVar24);
                    if ((*(long *)(unaff_x26 + 0x78) == 0) || (lVar11 == 0)) goto LAB_03168190;
                    uVar9 = *puVar24;
                    *(undefined4 *)(lVar11 + 0xbc) =
                         *(undefined4 *)(*(long *)(unaff_x26 + 0x78) + 0x18);
                    lVar11 = FUN_0400ff1c(in_stack_00000098,0,uVar9);
                    if (lVar11 == 0) goto LAB_03168190;
                    *(float *)(lVar11 + 0xc0) = *in_stack_000000d8;
                    if (2 < *(int *)(in_stack_00000098 + 0x18)) {
                      lVar11 = FUN_0400ff1c(in_stack_00000098,
                                            *(int *)(in_stack_00000098 + 0x18) + -1,*puVar24);
                      fVar39 = *in_stack_000000d8;
                      lVar10 = FUN_0400ff1c(in_stack_00000098,
                                            *(int *)(in_stack_00000098 + 0x18) + -1,*puVar24);
                      if ((lVar10 == 0) || (lVar11 == 0)) goto LAB_03168190;
                      uVar9 = *puVar24;
                      *(float *)(lVar11 + 200) = fVar39 - *(float *)(lVar10 + 0xc0);
                      lVar11 = FUN_0400ff1c(in_stack_00000098,
                                            *(int *)(in_stack_00000098 + 0x18) + -1,uVar9);
                      if (lVar11 == 0) goto LAB_03168190;
                      fVar39 = *(float *)(lVar11 + 200);
                      lVar11 = FUN_0400ff1c(in_stack_00000098,
                                            *(int *)(in_stack_00000098 + 0x18) + -1,*puVar24);
                      lVar10 = FUN_0400ff1c(in_stack_00000098,
                                            *(int *)(in_stack_00000098 + 0x18) + -1,*puVar24);
                      if (1000.0 <= fVar39) {
                        if (lVar10 == 0) goto LAB_03168190;
                        fStack00000000000001d0 = *(float *)(lVar10 + 200) / 1000.0;
                        uVar9 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
                        uVar9 = FUN_05362cb4(uVar9,*(undefined8 *)PTR_DAT_06a0c488,0);
                      }
                      else {
                        if (lVar10 == 0) goto LAB_03168190;
                        uVar9 = FUN_054fad00(lVar10 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
                        uVar9 = FUN_05362cb4(uVar9,*(undefined8 *)PTR_DAT_06a0c4f0,0);
                      }
                      if (lVar11 == 0) goto LAB_03168190;
                      *(undefined8 *)(lVar11 + 0xd0) = uVar9;
                      LeanTween__value((undefined8 *)(lVar11 + 0xd0),uVar9);
                      lVar11 = FUN_0400ff1c(in_stack_00000098,
                                            *(int *)(in_stack_00000098 + 0x18) + -1,*puVar24);
                      if (lVar11 == 0) goto LAB_03168190;
                      fVar41 = *(float *)(lVar11 + 0x4c);
                      lVar11 = FUN_0400ff1c(in_stack_00000098,0,*puVar24);
                      if (lVar11 == 0) goto LAB_03168190;
                      fVar42 = *(float *)(lVar11 + 0x4c);
                      fVar39 = fVar41 - fVar42;
                      if (DAT_06db4ece == '\0') {
                        FUN_02d965b8(PTR_DAT_069fbb48);
                        DAT_06db4ece = '\x01';
                      }
                      puVar2 = PTR_DAT_069fbb48;
                      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                      }
                      fVar47 = 0.0;
                      fVar45 = SQRT((fVar38 * fVar38 + fVar39 * fVar39) * DAT_010fd194);
                      fVar39 = DAT_010fcd14;
                      if (DAT_010fcd14 <= fVar45) {
                        fVar39 = -1.0;
                        fVar45 = (fVar38 * 0.0 + ABS(fVar41 - fVar42) * 50.0 + 0.0) / fVar45;
                        fVar38 = 1.0;
                        if (fVar45 <= 1.0) {
                          fVar38 = fVar45;
                        }
                        fVar41 = -1.0;
                        if (-1.0 <= fVar45) {
                          fVar41 = fVar38;
                        }
                        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                          fVar39 = -1.0;
                          thunk_FUN_02df485c();
                        }
                        dVar36 = acos((double)fVar41);
                        fVar47 = (float)dVar36 * DAT_010fcf40;
                      }
                      fVar47 = 90.0 - fVar47;
                      lVar11 = FUN_0400ff1c(in_stack_00000098,
                                            *(int *)(in_stack_00000098 + 0x18) + -1,*puVar24);
                      if (fVar47 <= 10.0) {
                        uVar9 = FUN_054fad00(&stack0x00000234,*(undefined8 *)PTR_DAT_06a0c498,0);
                      }
                      else {
                        dVar36 = modf((double)fVar47,(double *)&stack0x00000298);
                        if (0.0 <= fVar47) {
                          if (dVar36 == 0.5) {
                            dVar36 = *(double *)(unaff_x26 + 0x80);
                            fVar39 = 1.0;
                            goto LAB_0316e5d0;
                          }
                          fStack00000000000001d0 = (float)(int)(fVar47 + 0.5);
                        }
                        else if (dVar36 == -0.5) {
                          dVar36 = *(double *)(unaff_x26 + 0x80);
                          fVar39 = -1.0;
LAB_0316e5d0:
                          fStack00000000000001d0 = (float)dVar36;
                          if (((long)dVar36 & 1U) != 0) {
                            fStack00000000000001d0 = (float)dVar36 + fVar39;
                          }
                        }
                        else {
                          fStack00000000000001d0 = (float)(int)(fVar47 + -0.5);
                        }
                        uVar9 = FUN_054fabf8(&stack0x000001d0,0);
                      }
                      if (lVar11 == 0) goto LAB_03168190;
                      *(undefined8 *)(lVar11 + 0xd8) = uVar9;
                      LeanTween__value((undefined8 *)(lVar11 + 0xd8),uVar9);
                      lVar11 = FUN_0400ff1c(in_stack_00000098,
                                            *(int *)(in_stack_00000098 + 0x18) + -2,*puVar24);
                      if (lVar11 == 0) goto LAB_03168190;
                      fVar38 = *(float *)(lVar11 + 0x4c);
                      lVar11 = FUN_0400ff1c(in_stack_00000098,
                                            *(int *)(in_stack_00000098 + 0x18) + -1,*puVar24);
                      if (lVar11 == 0) goto LAB_03168190;
                      fVar41 = *(float *)(lVar11 + 0x4c);
                      lVar11 = FUN_0400ff1c(in_stack_00000098,
                                            *(int *)(in_stack_00000098 + 0x18) + -2,*puVar24);
                      if (lVar11 == 0) goto LAB_03168190;
                      fVar42 = *(float *)(lVar11 + 0x48);
                      lVar11 = FUN_0400ff1c(in_stack_00000098,
                                            *(int *)(in_stack_00000098 + 0x18) + -2,*puVar24);
                      if (lVar11 == 0) goto LAB_03168190;
                      fVar45 = *(float *)(lVar11 + 0x50);
                      lVar11 = FUN_0400ff1c(in_stack_00000098,
                                            *(int *)(in_stack_00000098 + 0x18) + -1,*puVar24);
                      if (lVar11 == 0) goto LAB_03168190;
                      fVar47 = *(float *)(lVar11 + 0x48);
                      lVar11 = FUN_0400ff1c(in_stack_00000098,
                                            *(int *)(in_stack_00000098 + 0x18) + -1,*puVar24);
                      if (lVar11 == 0) goto LAB_03168190;
                      fVar49 = *(float *)(lVar11 + 0x50);
                      if (DAT_06db4c77 == '\0') {
                        FUN_02d965b8(PTR_DAT_069fbb48);
                        DAT_06db4c77 = '\x01';
                      }
                      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                      }
                      fVar45 = fVar45 - fVar49;
                      fVar42 = fVar42 - fVar47;
                      lVar11 = FUN_0400ff1c(in_stack_00000098,
                                            *(int *)(in_stack_00000098 + 0x18) + -1,*puVar24);
                      fStack00000000000001d0 =
                           (ABS(fVar38 - fVar41) / SQRT(fVar42 * fVar42 + fVar45 * fVar45)) * 100.0;
                      uVar9 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c498,0);
                      if (lVar11 == 0) goto LAB_03168190;
LAB_0316ea58:
                      *(undefined8 *)(lVar11 + 0xe0) = uVar9;
                      LeanTween__value((undefined8 *)(lVar11 + 0xe0),uVar9);
                    }
                  }
                  fVar38 = 1000.0;
                  if (1000.0 <= *in_stack_000000d8) {
                    fVar38 = 1000.0;
                    fStack00000000000001d0 = *in_stack_000000d8 / 1000.0;
                    uVar9 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
                    puVar16 = (undefined8 *)PTR_DAT_06a0c488;
                  }
                  else {
                    uVar9 = FUN_054fad00(in_stack_000000d8,*(undefined8 *)PTR_DAT_06a0c498,0);
                    puVar16 = (undefined8 *)PTR_DAT_06a0c4f0;
                  }
                  uVar9 = FUN_05362cb4(uVar9,*puVar16,0);
                  *(undefined8 *)(in_stack_00000148 + 0x2d0) = uVar9;
                  LeanTween__value(in_stack_00000148 + 0x2d0,uVar9);
                  if (*(int *)(in_stack_00000098 + 0x18) == 2) {
                    lVar11 = FUN_0400ff1c(in_stack_00000098,0,*puVar24);
                    if (lVar11 == 0) goto LAB_03168190;
                    fVar41 = *(float *)(lVar11 + 200);
                    lVar11 = FUN_0400ff1c(in_stack_00000098,0,*puVar24);
                    lVar10 = FUN_0400ff1c(in_stack_00000098,0,*puVar24);
                    if (1000.0 <= fVar41) {
                      if (lVar10 == 0) goto LAB_03168190;
                      fVar38 = 1000.0;
                      fStack00000000000001d0 = *(float *)(lVar10 + 200) / 1000.0;
                      uVar9 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
                      uVar9 = FUN_05362cb4(uVar9,*(undefined8 *)PTR_DAT_06a0c488,0);
                    }
                    else {
                      if (lVar10 == 0) goto LAB_03168190;
                      uVar9 = FUN_054fad00(lVar10 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
                      uVar9 = FUN_05362cb4(uVar9,*(undefined8 *)PTR_DAT_06a0c4f0,0);
                    }
                    if (lVar11 == 0) goto LAB_03168190;
                    *(undefined8 *)(lVar11 + 0xd0) = uVar9;
                    LeanTween__value((undefined8 *)(lVar11 + 0xd0),uVar9);
                  }
                  if (*(char *)(in_stack_00000148 + 0x84) == '\0') {
                    lVar11 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                                          *puVar24);
                    if (lVar11 == 0) goto LAB_03168190;
                    *(undefined8 *)(lVar11 + 0xd0) = *(undefined8 *)PTR_DAT_069fcde0;
                    LeanTween__value();
                  }
                  puVar3 = PTR_DAT_06a0b440;
                  puVar2 = PTR_DAT_069fd088;
                  fVar41 = fVar38;
                  if (iStack0000000000000058 == 0) goto LAB_0316ee54;
                  if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
                  fVar42 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,
                                               *(undefined8 *)PTR_DAT_069fd088);
                  if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
                  FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)puVar2);
                  lVar11 = FUN_0400ff1c(in_stack_00000098,0,*(undefined8 *)puVar3);
                  puVar4 = PTR_DAT_06a0b7d0;
                  puVar3 = PTR_DAT_069fbb48;
                  if (lVar11 == 0) goto LAB_03168190;
                  lVar10 = *(long *)(unaff_x26 + 0x78);
                  fVar41 = *(float *)(lVar11 + 200) * 0.5;
                  fVar45 = 5.0;
                  if (fVar41 <= 5.0) {
                    fVar45 = fVar41;
                  }
                  if (lVar10 == 0) goto LAB_03168190;
                  uVar18 = (ulong)(uint)fStack0000000000000054;
                  iVar28 = 1;
                  fVar42 = fStack0000000000000050 * 10.0 + fVar42;
                  uVar22 = (ulong)(uint)fVar42;
                  fVar47 = fStack0000000000000054 * 10.0 + fVar39;
                  fVar49 = 0.0;
                  goto LAB_0316ecc4;
                }
                fStack00000000000001d4 = 0.0;
                lVar11 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*puVar24);
                if ((*(long *)(unaff_x26 + 0x78) == 0) || (lVar11 == 0)) goto LAB_03168190;
                uVar9 = *puVar24;
                *(undefined4 *)(lVar11 + 0xbc) = *(undefined4 *)(*(long *)(unaff_x26 + 0x78) + 0x18)
                ;
                lVar11 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,uVar9);
                if (lVar11 == 0) goto LAB_03168190;
                *(float *)(lVar11 + 0xc0) = *in_stack_000000d8;
                uVar22 = unaff_x20;
                if (1 < unaff_x24) goto code_r0x03169d90;
                goto LAB_0316a33c;
              }
            }
          }
        }
      }
    }
  }
  goto LAB_03168190;
  while( true ) {
    fVar33 = fVar41;
    fVar34 = fVar39;
    fVar32 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar28,*(undefined8 *)puVar2);
    if (DAT_06db4c77 == '\0') {
      FUN_02d965b8(puVar3);
      DAT_06db4c77 = '\x01';
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    fVar33 = fVar41 - fVar33;
    fVar39 = fVar39 - fVar34;
    fVar41 = fVar39 * fVar39;
    fVar49 = fVar49 + SQRT(fVar41 + (fVar53 - fVar32) * (fVar53 - fVar32) + fVar33 * fVar33);
    if (fVar45 < fVar49) goto LAB_0316ee54;
    if (*(long *)(unaff_x26 + 0x78) == 0) break;
    uVar40 = FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)puVar2);
    if (*(long *)(unaff_x26 + 0x78) == 0) break;
    FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar28,*(undefined8 *)puVar2);
    fVar41 = (float)FUN_031765b0(uVar40,fVar41,fVar39,fVar42,fVar38,fVar47,0);
    if (*(long *)(unaff_x26 + 0x78) == 0) break;
    fVar33 = fVar39;
    fVar34 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar28,*(undefined8 *)puVar2);
    fVar32 = fVar49 / fVar45;
    fVar53 = 1.0;
    if (fVar32 <= 1.0) {
      fVar53 = fVar32;
    }
    uVar22 = (ulong)(uint)fVar53;
    fVar35 = 0.0;
    if (0.0 <= fVar32) {
      fVar35 = fVar53;
    }
    if (*(long *)(unaff_x26 + 0x78) == 0) break;
    FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar28,*(undefined8 *)puVar2);
    if (*(long *)(unaff_x26 + 0x78) == 0) break;
    uVar18 = (ulong)(uint)(fVar39 + fVar35 * (fVar33 - fVar39));
    FUN_0409f350(fVar41 + fVar35 * (fVar34 - fVar41),*(long *)(unaff_x26 + 0x78),iVar28,
                 *(undefined8 *)puVar4);
    lVar10 = *(long *)(unaff_x26 + 0x78);
    iVar28 = iVar28 + 1;
    if (lVar10 == 0) break;
LAB_0316ecc4:
    fVar39 = (float)uVar18;
    fVar41 = (float)uVar22;
    if (*(int *)(lVar10 + 0x18) <= iVar28) goto LAB_0316ee54;
    fVar53 = (float)FUN_0409f2f4(lVar10,iVar28 + -1,*(undefined8 *)puVar2);
    if (*(long *)(unaff_x26 + 0x78) == 0) break;
  }
  goto LAB_03168190;
code_r0x03169d90:
  if (unaff_x24 == 2) {
    lVar11 = FUN_0400ff1c(in_stack_00000098,0,*puVar24);
    if (lVar11 == 0) goto LAB_03168190;
    unaff_w22 = 0;
    fVar39 = *in_stack_000000d8;
  }
  else {
    unaff_w22 = (int)unaff_x24 + -2;
    lVar11 = FUN_0400ff1c(in_stack_00000098,unaff_w22,*puVar24);
    fVar39 = *in_stack_000000d8;
    lVar10 = FUN_0400ff1c(in_stack_00000098,unaff_w22,*puVar24);
    if ((lVar10 == 0) || (lVar11 == 0)) goto LAB_03168190;
    fVar39 = fVar39 - *(float *)(lVar10 + 0xc0);
  }
  puVar2 = PTR_DAT_06a0b440;
  *(float *)(lVar11 + 200) = fVar39;
  lVar11 = FUN_0400ff1c(in_stack_00000098,unaff_w22,*(undefined8 *)puVar2);
  if (lVar11 == 0) goto LAB_03168190;
  fVar39 = *(float *)(lVar11 + 200);
  lVar11 = FUN_0400ff1c(in_stack_00000098,unaff_w22,*(undefined8 *)puVar2);
  lVar10 = FUN_0400ff1c(in_stack_00000098,unaff_w22,*(undefined8 *)puVar2);
  if (1000.0 <= fVar39) {
    if (lVar10 == 0) goto LAB_03168190;
    fStack00000000000001d0 = *(float *)(lVar10 + 200) / 1000.0;
    uVar9 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
    puVar16 = (undefined8 *)PTR_DAT_06a0c488;
  }
  else {
    if (lVar10 == 0) goto LAB_03168190;
    uVar9 = FUN_054fad00(lVar10 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
    puVar16 = (undefined8 *)PTR_DAT_06a0c4f0;
  }
  uVar9 = FUN_05362cb4(uVar9,*puVar16,0);
  if (lVar11 == 0) goto LAB_03168190;
  *(undefined8 *)(lVar11 + 0xd0) = uVar9;
  LeanTween__value((undefined8 *)(lVar11 + 0xd0),uVar9);
  puVar2 = PTR_DAT_06a0b440;
  lVar11 = FUN_0400ff1c(in_stack_00000098,unaff_w22,*(undefined8 *)PTR_DAT_06a0b440);
  if (lVar11 == 0) goto LAB_03168190;
  fVar39 = *(float *)(lVar11 + 0x4c);
  lVar11 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*(undefined8 *)puVar2);
  if (lVar11 == 0) goto LAB_03168190;
  fVar41 = *(float *)(lVar11 + 0x4c);
  if (DAT_06db4ece == '\0') {
    FUN_02d965b8(PTR_DAT_069fbb48);
    DAT_06db4ece = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  fVar42 = fVar39 - fVar41;
  param_3 = (ulong)(uint)DAT_010fcd14;
  fVar45 = 0.0;
  fVar42 = SQRT((fVar38 * fVar38 + fVar42 * fVar42) * DAT_010fd194);
  if (DAT_010fcd14 <= fVar42) {
    param_3 = 0xbf800000;
    fVar42 = (fVar38 * 0.0 + ABS(fVar39 - fVar41) * 50.0 + 0.0) / fVar42;
    fVar38 = 1.0;
    if (fVar42 <= 1.0) {
      fVar38 = fVar42;
    }
    fVar39 = -1.0;
    if (-1.0 <= fVar42) {
      fVar39 = fVar38;
    }
    if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    dVar36 = acos((double)fVar39);
    fVar45 = (float)dVar36 * DAT_010fcf40;
  }
  fVar45 = 90.0 - fVar45;
  unaff_x23 = FUN_0400ff1c(in_stack_00000098,unaff_w22,*(undefined8 *)puVar2);
  lVar11 = in_stack_00000098;
  if (10.0 < fVar45) goto code_r0x0316a014;
  uVar9 = FUN_054fad00(&stack0x00000234,*(undefined8 *)PTR_DAT_06a0c498,0);
  puVar16 = (undefined8 *)PTR_DAT_069fd088;
  if (unaff_x23 == 0) goto LAB_03168190;
  goto LAB_0316a0d8;
code_r0x0316a014:
  dVar36 = modf((double)fVar45,(double *)&stack0x00000298);
  puVar16 = (undefined8 *)PTR_DAT_069fd088;
  if (0.0 <= fVar45) {
    if (dVar36 != 0.5) {
      fStack00000000000001d0 = (float)(int)(fVar45 + 0.5);
      goto FUN_0316a0c4;
    }
    dVar36 = *(double *)(unaff_x26 + 0x80);
    fVar38 = 1.0;
  }
  else {
    if (dVar36 != -0.5) {
      fStack00000000000001d0 = (float)(int)(fVar45 + -0.5);
      goto FUN_0316a0c4;
    }
    dVar36 = *(double *)(unaff_x26 + 0x80);
    fVar38 = -1.0;
  }
  fStack00000000000001d0 = (float)dVar36;
  if (((long)dVar36 & 1U) != 0) {
    fStack00000000000001d0 = (float)dVar36 + fVar38;
  }
  goto FUN_0316a0c4;
LAB_0316ee54:
  puVar2 = PTR_DAT_069fd088;
  if (in_stack_00000048._4_4_ != 0) {
    lVar11 = *(long *)(unaff_x26 + 0x78);
    if (lVar11 == 0) goto LAB_03168190;
    fVar38 = (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -1,*(undefined8 *)PTR_DAT_069fd088
                                );
    puVar3 = PTR_DAT_06a0b440;
    if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
    fVar42 = fVar41;
    FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)puVar2);
    lVar11 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,
                          *(undefined8 *)puVar3);
    puVar4 = PTR_DAT_06a0b7d0;
    puVar3 = PTR_DAT_069fbb48;
    if (lVar11 == 0) goto LAB_03168190;
    fVar47 = *(float *)(lVar11 + 200) * 0.5;
    fVar45 = 5.0;
    if (fVar47 <= 5.0) {
      fVar45 = fVar47;
    }
    if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
    iVar28 = *(int *)(*(long *)(unaff_x26 + 0x78) + 0x18);
    if (0 < iVar28 + -2) {
      fVar47 = 0.0;
      iVar28 = iVar28 + -1;
      uVar22 = (ulong)(uint)fVar38;
      uVar18 = (ulong)(uint)fVar39;
      do {
        fVar53 = (float)uVar22;
        fVar49 = (float)uVar18;
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        fVar33 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar28,*(undefined8 *)puVar2);
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        iVar28 = iVar28 + -1;
        fVar34 = fVar49;
        fVar32 = fVar53;
        fVar35 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar28,*(undefined8 *)puVar2);
        if (DAT_06db4c77 == '\0') {
          FUN_02d965b8(puVar3);
          DAT_06db4c77 = '\x01';
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        fVar47 = fVar47 + SQRT((fVar53 - fVar32) * (fVar53 - fVar32) +
                               (fVar33 - fVar35) * (fVar33 - fVar35) +
                               (fVar49 - fVar34) * (fVar49 - fVar34));
        if (fVar45 < fVar47) break;
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar28,*(undefined8 *)puVar2);
        fVar49 = fVar39;
        fVar53 = (float)FUN_031765b0(fVar38,fVar41,fVar39,fStack0000000000000060 * 10.0 + fVar38,
                                     fVar42,fStack000000000000005c * 10.0 + fVar39,0);
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        fVar34 = fVar49;
        fVar32 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar28,*(undefined8 *)puVar2);
        fVar35 = fVar47 / fVar45;
        fVar33 = 1.0;
        if (fVar35 <= 1.0) {
          fVar33 = fVar35;
        }
        uVar18 = (ulong)(uint)fVar33;
        fVar31 = 0.0;
        if (0.0 <= fVar35) {
          fVar31 = fVar33;
        }
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar28,*(undefined8 *)puVar2);
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        uVar22 = (ulong)(uint)(fVar49 + fVar31 * (fVar34 - fVar49));
        FUN_0409f350(fVar53 + fVar31 * (fVar32 - fVar53),*(long *)(unaff_x26 + 0x78),iVar28,
                     *(undefined8 *)puVar4);
      } while (1 < iVar28);
    }
  }
  puVar2 = PTR_DAT_06a0b440;
  lVar11 = FUN_0400ff1c(in_stack_00000098,0,*(undefined8 *)PTR_DAT_06a0b440);
  lVar10 = FUN_0400ff1c(in_stack_00000098,0,*(undefined8 *)puVar2);
  if (lVar10 != 0) {
    fVar38 = *(float *)(lVar10 + 0x94);
    lVar10 = FUN_0400ff1c(in_stack_00000098,0,*(undefined8 *)puVar2);
    if (lVar10 != 0) {
      fVar39 = *(float *)(lVar10 + 0x9c);
      if (DAT_06db4c75 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c75 = '\x01';
      }
      puVar3 = PTR_DAT_069fbb48;
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar41 = DAT_010fd13c;
      fVar42 = SQRT(fVar38 * fVar38 + fVar39 * fVar39);
      if (fVar42 <= DAT_010fd13c) {
        if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
          FUN_02d965b8(PTR_DAT_069fb978);
          *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
        }
        uVar9 = **(undefined8 **)(*unaff_x28 + 0xb8);
        fVar39 = *(float *)(*(undefined8 **)(*unaff_x28 + 0xb8) + 1);
      }
      else {
        fVar39 = fVar39 / fVar42;
        uVar9 = CONCAT44(0.0 / fVar42,fVar38 / fVar42);
      }
      if (lVar11 != 0) {
        *(undefined8 *)(lVar11 + 0x94) = uVar9;
        uVar9 = *(undefined8 *)puVar2;
        *(float *)(lVar11 + 0x9c) = fVar39;
        lVar11 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,uVar9);
        lVar10 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                              *(undefined8 *)puVar2);
        if (lVar10 != 0) {
          fVar38 = *(float *)(lVar10 + 0x94);
          lVar10 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                                *(undefined8 *)puVar2);
          if (lVar10 != 0) {
            fVar39 = *(float *)(lVar10 + 0x9c);
            if (DAT_06db4c75 == '\0') {
              FUN_02d965b8(PTR_DAT_069fbb48);
              DAT_06db4c75 = '\x01';
            }
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            fVar42 = SQRT(fVar38 * fVar38 + fVar39 * fVar39);
            if (fVar42 <= fVar41) {
              if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
                FUN_02d965b8(PTR_DAT_069fb978);
                *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
              }
              uVar9 = **(undefined8 **)(*unaff_x28 + 0xb8);
              fVar39 = *(float *)(*(undefined8 **)(*unaff_x28 + 0xb8) + 1);
            }
            else {
              fVar39 = fVar39 / fVar42;
              uVar9 = CONCAT44(0.0 / fVar42,fVar38 / fVar42);
            }
            if (lVar11 != 0) {
              uVar44 = *(undefined8 *)(unaff_x26 + 0x78);
              *(undefined8 *)(lVar11 + 0x94) = uVar9;
              *(float *)(lVar11 + 0x9c) = fVar39;
              return uVar44;
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


