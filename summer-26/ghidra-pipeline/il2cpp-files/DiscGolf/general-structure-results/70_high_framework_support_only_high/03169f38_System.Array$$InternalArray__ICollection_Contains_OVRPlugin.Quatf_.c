/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.Quatf>
ENTRY_POINT: 03169f38
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


undefined8 System_Array__InternalArray__ICollection_Contains<OVRPlugin_Quatf>(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 extraout_x1;
  ulong extraout_x1_00;
  char cVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  float *pfVar18;
  long lVar19;
  long lVar20;
  undefined8 *unaff_x19;
  float *pfVar21;
  ulong unaff_x20;
  long *plVar22;
  undefined8 *puVar23;
  int unaff_w22;
  byte bVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  ulong unaff_x24;
  long unaff_x25;
  undefined4 *puVar28;
  undefined1 *unaff_x26;
  int unaff_w27;
  float *pfVar29;
  long *unaff_x28;
  undefined **unaff_x29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  double dVar36;
  float fVar37;
  ulong uVar38;
  ulong uVar39;
  float fVar40;
  float unaff_s8;
  undefined4 uVar41;
  float unaff_s9;
  float unaff_s10;
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
  undefined4 uVar53;
  float unaff_s15;
  float fVar54;
  int iVar55;
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
  
  iStack00000000000000d4 = unaff_w27;
code_r0x03169f38:
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  fVar37 = 0.0;
  fVar30 = SQRT((unaff_s9 * unaff_s9 + (unaff_s8 - unaff_s10) * (unaff_s8 - unaff_s10)) *
                DAT_010fd194);
  fVar40 = DAT_010fcd14;
  if (DAT_010fcd14 <= fVar30) {
    fVar40 = -1.0;
    fVar30 = (unaff_s9 * 0.0 + ABS(unaff_s8 - unaff_s10) * 50.0 + 0.0) / fVar30;
    fVar37 = 1.0;
    if (fVar30 <= 1.0) {
      fVar37 = fVar30;
    }
    fVar42 = -1.0;
    if (-1.0 <= fVar30) {
      fVar42 = fVar37;
    }
    if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
      fVar40 = -1.0;
      thunk_FUN_02df485c();
    }
    dVar36 = acos((double)fVar42);
    fVar37 = (float)dVar36 * DAT_010fcf40;
  }
  fVar37 = 90.0 - fVar37;
  lVar9 = FUN_0400ff1c(unaff_x25,unaff_w22,*unaff_x19);
  if (fVar37 <= 10.0) {
    uVar10 = FUN_054fad00(&stack0x00000234,*(undefined8 *)PTR_DAT_06a0c498,0);
    puVar15 = (undefined8 *)PTR_DAT_069fd088;
  }
  else {
    dVar36 = modf((double)fVar37,(double *)&stack0x00000298);
    puVar15 = (undefined8 *)PTR_DAT_069fd088;
    if (0.0 <= fVar37) {
      if (dVar36 == 0.5) {
        dVar36 = *(double *)(unaff_x26 + 0x80);
        fVar30 = 1.0;
        goto LAB_0316a098;
      }
      fStack00000000000001d0 = (float)(int)(fVar37 + 0.5);
    }
    else if (dVar36 == -0.5) {
      dVar36 = *(double *)(unaff_x26 + 0x80);
      fVar30 = -1.0;
LAB_0316a098:
      fStack00000000000001d0 = (float)dVar36;
      if (((long)dVar36 & 1U) != 0) {
        fStack00000000000001d0 = (float)dVar36 + fVar30;
      }
    }
    else {
      fStack00000000000001d0 = (float)(int)(fVar37 + -0.5);
    }
    uVar10 = FUN_054fabf8(&stack0x000001d0,0);
  }
  if (lVar9 != 0) {
    *(undefined8 *)(lVar9 + 0xd8) = uVar10;
    LeanTween__value((undefined8 *)(lVar9 + 0xd8),uVar10);
    puVar23 = (undefined8 *)PTR_DAT_06a0b440;
    lVar9 = FUN_0400ff1c(unaff_x25,unaff_w22,*(undefined8 *)PTR_DAT_06a0b440);
    if (lVar9 != 0) {
      fVar30 = *(float *)(lVar9 + 0x4c);
      lVar9 = FUN_0400ff1c(unaff_x25,unaff_x20 & 0xffffffff,*puVar23);
      if (lVar9 != 0) {
        fVar37 = *(float *)(lVar9 + 0x4c);
        lVar9 = FUN_0400ff1c(unaff_x25,unaff_w22,*puVar23);
        if (lVar9 != 0) {
          fVar42 = *(float *)(lVar9 + 0x48);
          lVar9 = FUN_0400ff1c(unaff_x25,unaff_w22,*puVar23);
          if (lVar9 != 0) {
            fVar45 = *(float *)(lVar9 + 0x50);
            lVar9 = FUN_0400ff1c(unaff_x25,unaff_x20 & 0xffffffff,*puVar23);
            if (lVar9 != 0) {
              fVar47 = *(float *)(lVar9 + 0x48);
              lVar9 = FUN_0400ff1c(unaff_x25,unaff_x20 & 0xffffffff,*puVar23);
              if (lVar9 != 0) {
                fVar49 = *(float *)(lVar9 + 0x50);
                if (DAT_06db4c77 == '\0') {
                  FUN_02d965b8(PTR_DAT_069fbb48);
                  DAT_06db4c77 = '\x01';
                }
                if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                fVar45 = fVar45 - fVar49;
                fVar42 = fVar42 - fVar47;
                lVar9 = FUN_0400ff1c(unaff_x25,unaff_w22,*puVar23);
                fVar47 = 100.0;
                fStack00000000000001d0 =
                     (ABS(fVar30 - fVar37) / SQRT(fVar42 * fVar42 + fVar45 * fVar45)) * 100.0;
                uVar10 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c498,0);
                if (lVar9 == 0) goto LAB_03168190;
                *(undefined8 *)(lVar9 + 0xe0) = uVar10;
                LeanTween__value((undefined8 *)(lVar9 + 0xe0),uVar10);
                lVar9 = *(long *)(unaff_x26 + 0x78);
                if (lVar9 == 0) goto LAB_03168190;
                if (2 < *(int *)(lVar9 + 0x18)) {
                  fStack0000000000000104 =
                       (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,*puVar15);
                  lVar9 = *(long *)(unaff_x26 + 0x78);
                  if (lVar9 == 0) goto LAB_03168190;
                  fVar30 = fVar47;
                  fVar37 = fVar40;
                  fVar42 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -2,*puVar15);
                  if (DAT_06db4c75 == '\0') {
                    FUN_02d965b8(PTR_DAT_069fbb48);
                    DAT_06db4c75 = '\x01';
                  }
                  if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  fStack0000000000000104 = fStack0000000000000104 - fVar42;
                  fVar47 = fVar47 - fVar30;
                  fVar40 = fVar40 - fVar37;
                  fStack00000000000000fc =
                       SQRT(fVar40 * fVar40 +
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
                    fStack00000000000000fc = fVar40 / fStack00000000000000fc;
                  }
                }
LAB_0316a33c:
                uVar39 = unaff_x24;
                lVar9 = *(long *)(unaff_x26 + 0x28);
                if (lVar9 == 0) goto LAB_03168190;
                lVar19 = *(long *)(unaff_x26 + 0x20);
                *(undefined4 *)(lVar9 + 0x18) = 0;
                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                if (lVar19 == 0) goto LAB_03168190;
                unaff_s9 = 0.0;
                *(undefined4 *)(lVar19 + 0x18) = 0;
                *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
                if ((*(uint *)(in_stack_00000170 + 0x18) <= uVar39) ||
                   (unaff_x24 = uVar39 + 1, *(uint *)(in_stack_00000170 + 0x18) <= unaff_x24))
                goto LAB_0316f2c4;
                lVar9 = in_stack_00000170 + uVar39 * 0xc;
                lVar19 = in_stack_00000170 + unaff_x24 * 0xc;
                fVar30 = *in_stack_000000d8;
                pfVar21 = (float *)(lVar9 + 0x20);
                fVar42 = *pfVar21;
                fVar40 = *(float *)(lVar9 + 0x24);
                fVar37 = *(float *)(lVar9 + 0x28);
                pfVar29 = (float *)(lVar19 + 0x20);
                fVar45 = *pfVar29;
                fVar49 = *(float *)(lVar19 + 0x24);
                fVar47 = *(float *)(lVar19 + 0x28);
                if (DAT_06db4c77 == '\0') {
                  FUN_02d965b8(PTR_DAT_069fbb48);
                  DAT_06db4c77 = '\x01';
                }
                if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                   (lVar11 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff
                                          ,*puVar23), lVar11 == 0)) goto LAB_03168190;
                fVar40 = fVar40 - fVar49;
                fVar37 = fVar37 - fVar47;
                uVar38 = (ulong)(uint)fVar37;
                uVar17 = (ulong)(uint)(fVar37 * fVar37);
                fVar30 = fVar30 + SQRT(fVar37 * fVar37 +
                                       (fVar42 - fVar45) * (fVar42 - fVar45) + fVar40 * fVar40);
                iVar27 = (int)uVar39;
                if (*(int *)(lVar11 + 0x6c) == 0) {
                  if ((*(uint *)(in_stack_00000170 + 0x18) <= uVar39) ||
                     (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24)) goto LAB_0316f2c4;
                  fVar42 = *pfVar21;
                  fVar40 = *(float *)(lVar9 + 0x24);
                  fVar45 = *pfVar29;
                  fVar49 = *(float *)(lVar19 + 0x24);
                  fVar37 = *(float *)(lVar9 + 0x28);
                  fVar47 = *(float *)(lVar19 + 0x28);
                  if (DAT_06db4c77 == '\0') {
                    FUN_02d965b8(PTR_DAT_069fbb48);
                    DAT_06db4c77 = '\x01';
                  }
                  if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  if (uVar39 < 2) {
                    bVar7 = false;
                  }
                  else {
                    if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
                    lVar11 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),iVar27 + -2,*puVar23);
                    if (lVar11 == 0) goto LAB_03168190;
                    if (*(int *)(lVar11 + 0x6c) == 1) {
                      bVar7 = true;
                    }
                    else {
                      if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                         (lVar11 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),iVar27 + -2,
                                                *puVar23), lVar11 == 0)) goto LAB_03168190;
                      bVar7 = *(int *)(lVar11 + 0x6c) == 2;
                    }
                  }
                  fVar31 = 0.0;
                  if (uVar39 == 1) {
                    fVar31 = fStack0000000000000064;
                  }
                  fVar33 = fStack0000000000000068;
                  if (uVar39 != *(int *)(in_stack_00000170 + 0x18) - 3) {
                    fVar33 = 1.0;
                  }
                  if (fVar33 <= fVar31) {
                    iStack0000000000000108 = 0;
                  }
                  else {
                    fVar40 = fVar40 - fVar49;
                    fVar37 = fVar37 - fVar47;
                    fVar40 = DAT_010fcf10 /
                             SQRT(fVar37 * fVar37 +
                                  (fVar42 - fVar45) * (fVar42 - fVar45) + fVar40 * fVar40);
                    do {
                      uVar17 = *(ulong *)(in_stack_00000170 + 0x18);
                      if (fVar40 + fVar31 <= 1.0) {
                        bVar24 = 0;
                      }
                      else if (uVar39 == (int)uVar17 - 3) {
                        bVar24 = *(byte *)(in_stack_00000148 + 0x84) ^ 1;
                      }
                      else {
                        bVar24 = 0;
                      }
                      bVar8 = bVar24 != 0;
                      fVar37 = 1.0;
                      if (!bVar8) {
                        fVar37 = fVar31;
                      }
                      if (((uVar17 & 0xffffffff) <= uVar39) || ((uVar17 & 0xffffffff) <= unaff_x24))
                      goto LAB_0316f2c4;
                      uVar50 = *(undefined4 *)(lVar9 + 0x24);
                      uVar41 = *(undefined4 *)(lVar9 + 0x28);
                      fVar42 = *pfVar21;
                      FUN_04059a68(in_stack_000000c8,uVar39 & 0xffffffff,
                                   *(undefined8 *)PTR_DAT_06a0a108);
                      fVar47 = in_stack_0000026c;
                      fVar49 = in_stack_00000270;
                      fVar31 = (float)FUN_0316f340(in_stack_00000268,in_stack_0000026c,
                                                   in_stack_00000270,fVar42,uVar50,uVar41);
                      _fStack00000000000001c0 = CONCAT44(fVar47,fVar31);
                      fVar42 = in_stack_00000160._4_4_;
                      fVar45 = (float)in_stack_00000110;
                      if (iStack0000000000000108 == 3) {
                        iStack0000000000000108 = 0;
                        fVar42 = fVar49;
                        fVar45 = fVar31;
                        fStack0000000000000128 = fVar47;
                        fStack000000000000012c = fVar49;
                        in_stack_00000130 = fVar31;
                      }
                      unaff_x29 = &PTR_FUN_06db4000;
                      in_stack_000001c8 = fVar49;
                      if (DAT_06db4c77 == '\0') {
                        FUN_02d965b8(PTR_DAT_069fbb48);
                        DAT_06db4c77 = '\x01';
                      }
                      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                      }
                      fVar34 = in_stack_000001c8;
                      if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
                      fVar52 = *pfVar29;
                      fVar46 = *(float *)(lVar19 + 0x24);
                      fVar32 = fStack00000000000001c0;
                      fVar35 = fStack00000000000001c4;
                      fVar54 = *(float *)(lVar19 + 0x28);
                      if (DAT_06db4c77 == '\0') {
                        FUN_02d965b8(PTR_DAT_069fbb48);
                        DAT_06db4c77 = '\x01';
                      }
                      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                      }
                      lVar11 = *(long *)(unaff_x26 + 0x20);
                      if (lVar11 == 0) goto LAB_03168190;
                      fVar35 = fVar35 - fVar46;
                      iVar25 = *(int *)(lVar11 + 0x18);
                      fVar34 = fVar34 - fVar54;
                      fVar46 = fVar34 * fVar34;
                      fVar32 = SQRT(fVar46 + (fVar32 - fVar52) * (fVar32 - fVar52) + fVar35 * fVar35
                                   );
                      if (iVar25 < 1) {
                        lVar11 = *(long *)(unaff_x26 + 0x78);
                        if (lVar11 == 0) goto LAB_03168190;
                        iVar25 = *(int *)(lVar11 + 0x18);
                        if (0 < iVar25) goto LAB_0316b4d8;
                      }
                      else {
LAB_0316b4d8:
                        fVar35 = (float)FUN_0409f2f4(lVar11,iVar25 + -1,
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
                        plVar22 = (long *)PTR_DAT_069fb978;
                        fStack00000000000000f8 = fStack00000000000000f8 - fVar35;
                        fStack00000000000000f4 = fStack00000000000000f4 - fVar46;
                        fStack00000000000000f0 = fStack00000000000000f0 - fVar34;
                        fVar34 = SQRT(fStack00000000000000f0 * fStack00000000000000f0 +
                                      fStack00000000000000f8 * fStack00000000000000f8 +
                                      fStack00000000000000f4 * fStack00000000000000f4);
                        if (fVar34 <= DAT_010fd13c) {
                          if (DAT_06db4c71 == '\0') {
                            FUN_02d965b8(PTR_DAT_069fb978);
                            DAT_06db4c71 = '\x01';
                          }
                          pfVar18 = *(float **)(*(long *)PTR_DAT_069fb978 + 0xb8);
                          fStack00000000000000f8 = *pfVar18;
                          fStack00000000000000f4 = pfVar18[1];
                          fStack00000000000000f0 = pfVar18[2];
                          plVar22 = (long *)PTR_DAT_069fb978;
                        }
                        else {
                          fStack00000000000000f8 = fStack00000000000000f8 / fVar34;
                          fStack00000000000000f4 = fStack00000000000000f4 / fVar34;
                          fStack00000000000000f0 = fStack00000000000000f0 / fVar34;
                          if (DAT_06db4c71 == '\0') {
                            FUN_02d965b8(PTR_DAT_069fb978);
                            DAT_06db4c71 = '\x01';
                          }
                        }
                        pfVar18 = *(float **)(*plVar22 + 0xb8);
                        if (fStack00000000000000a4 <=
                            (fStack00000000000000fc - pfVar18[2]) *
                            (fStack00000000000000fc - pfVar18[2]) +
                            (fStack0000000000000104 - *pfVar18) *
                            (fStack0000000000000104 - *pfVar18) +
                            (fStack0000000000000100 - pfVar18[1]) *
                            (fStack0000000000000100 - pfVar18[1])) {
                          if (DAT_06db4ece == '\0') {
                            FUN_02d965b8(PTR_DAT_069fbb48);
                            DAT_06db4ece = '\x01';
                          }
                          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                            thunk_FUN_02df485c();
                          }
                          unaff_s15 = 0.0;
                          fVar34 = SQRT((fStack00000000000000fc * fStack00000000000000fc +
                                        fStack0000000000000100 * fStack0000000000000100 +
                                        fStack0000000000000104 * fStack0000000000000104) *
                                        (fStack00000000000000f0 * fStack00000000000000f0 +
                                        fStack00000000000000f8 * fStack00000000000000f8 +
                                        fStack00000000000000f4 * fStack00000000000000f4));
                          if (DAT_010fcd14 <= fVar34) {
                            fVar34 = (fStack00000000000000fc * fStack00000000000000f0 +
                                     fStack0000000000000104 * fStack00000000000000f8 +
                                     fStack0000000000000100 * fStack00000000000000f4) / fVar34;
                            fVar35 = 1.0;
                            if (fVar34 <= 1.0) {
                              fVar35 = fVar34;
                            }
                            fVar46 = -1.0;
                            if (-1.0 <= fVar34) {
                              fVar46 = fVar35;
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
                            if (!NAN(fVar32)) {
                              bVar8 = fVar32 < 1.5;
                              bVar5 = fVar32 == 1.5;
                              bVar6 = false;
                            }
                          }
                          bVar8 = bVar24 != 0 ||
                                  (!bVar5 && bVar8 == bVar6) &&
                                  1.0 <= SQRT((fStack000000000000012c - fVar49) *
                                              (fStack000000000000012c - fVar49) +
                                              (fStack0000000000000128 - fVar47) *
                                              (fStack0000000000000128 - fVar47) +
                                              (in_stack_00000130 - fVar31) *
                                              (in_stack_00000130 - fVar31));
                        }
                      }
                      puVar23 = (undefined8 *)PTR_DAT_06a0b440;
                      if (*(char *)(in_stack_00000148 + 0x5d6) != '\0') {
                        if (*(long *)(in_stack_00000148 + 0x20) == 0) goto LAB_03168190;
                        FUN_03199614(*(long *)(in_stack_00000148 + 0x20),&stack0x000001c0,0);
                      }
                      bVar5 = bVar8;
                      if (fVar33 < fVar40 + fVar37 + DAT_010fd060) {
                        bVar6 = bVar8;
                        if (fStack00000000000000a0 <= fVar32) {
                          bVar6 = true;
                        }
                        if (bVar6 == false && (in_stack_000000c0._4_1_ & 1) == 0) {
                          if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
                          fVar37 = 1.0;
                          _fStack00000000000001c0 = *(ulong *)pfVar29;
                          in_stack_000001c8 = *(float *)(lVar19 + 0x28);
                          bVar5 = true;
                        }
                      }
                      if (fVar40 + fVar37 <= fVar33) {
                        fVar47 = fStack00000000000001c0;
                        fVar49 = fStack00000000000001c4;
                      }
                      else {
                        if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
                        _fStack00000000000001c0 = *(ulong *)pfVar29;
                        fVar37 = 1.0;
                        in_stack_000001c8 = *(float *)(lVar19 + 0x28);
                        bVar5 = true;
                        fVar47 = *pfVar29;
                        fVar49 = *(float *)(lVar19 + 0x24);
                      }
                      fVar31 = in_stack_000001c8;
                      if (DAT_06db4c77 == '\0') {
                        FUN_02d965b8(PTR_DAT_069fbb48);
                        DAT_06db4c77 = '\x01';
                      }
                      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                      }
                      fVar34 = in_stack_000001c8;
                      bVar6 = bVar5;
                      if (fStack000000000000010c <
                          SQRT((fStack000000000000012c - fVar31) * (fStack000000000000012c - fVar31)
                               + (in_stack_00000130 - fVar47) * (in_stack_00000130 - fVar47) +
                                 (fStack0000000000000128 - fVar49) *
                                 (fStack0000000000000128 - fVar49))) {
                        bVar6 = true;
                      }
                      bVar1 = bVar6;
                      if (uVar39 != 1) {
                        bVar1 = true;
                      }
                      if (bVar1 == false) {
                        bVar6 = fVar37 == 0.0;
                      }
                      if (bVar6 == true) {
                        fVar47 = fStack00000000000001c0;
                        fVar49 = fStack00000000000001c4;
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
                        fVar31 = in_stack_000001c8;
                        uVar17 = _fStack00000000000001c0;
                        in_stack_00000110 = _fStack00000000000001c0 & 0xffffffff;
                        fVar47 = SQRT((fStack000000000000012c - fVar34) *
                                      (fStack000000000000012c - fVar34) +
                                      (in_stack_00000130 - fVar47) * (in_stack_00000130 - fVar47) +
                                      (fStack0000000000000128 - fVar49) *
                                      (fStack0000000000000128 - fVar49));
                        in_stack_00000160._4_4_ = in_stack_000001c8;
                        fStack00000000000001d4 = fVar47 + fStack00000000000001d4;
                        *in_stack_000000d8 = fVar47 + *in_stack_000000d8;
                        if (cVar14 == '\0') {
                          FUN_02d965b8(PTR_DAT_069fbb48);
                          DAT_06db4c77 = '\x01';
                        }
                        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                          thunk_FUN_02df485c();
                        }
                        in_stack_00000280 = in_stack_000001c8;
                        lVar11 = *(long *)(in_stack_00000148 + 0x68);
                        *(ulong *)(unaff_x26 + 0x60) = _fStack00000000000001c0;
                        fVar45 = (float)uVar17 - fVar45;
                        in_stack_00000130 = fStack00000000000001c0;
                        unaff_s9 = unaff_s9 +
                                   SQRT(fVar45 * fVar45 + (fVar31 - fVar42) * (fVar31 - fVar42));
                        fStack0000000000000128 = fStack00000000000001c4;
                        fStack000000000000012c = in_stack_000001c8;
                        if ((lVar11 == 0) ||
                           (lVar11 = FUN_0400ff1c(lVar11,unaff_x20 & 0xffffffff,*puVar23),
                           lVar11 == 0)) goto LAB_03168190;
                        if (*(float *)(lVar11 + 0x100) == 0.0) {
                          if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                             (lVar11 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                    unaff_x20 & 0xffffffff,*puVar23), lVar11 == 0))
                          goto LAB_03168190;
                          if (*(float *)(lVar11 + 0x104) != 0.0) goto LAB_0316bb78;
                          if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                             (lVar11 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                    unaff_x20 & 0xffffffff,*puVar23), lVar11 == 0))
                          goto LAB_03168190;
                          if (*(float *)(lVar11 + 0x110) != 0.0) goto LAB_0316bb78;
                          if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                             (lVar11 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                    unaff_x20 & 0xffffffff,*puVar23), lVar11 == 0))
                          goto LAB_03168190;
                          if (*(float *)(lVar11 + 0x114) != 0.0) goto LAB_0316bb78;
                          lVar11 = *in_stack_000000e0;
                          if (lVar11 == 0) goto LAB_03168190;
                          lVar12 = *(long *)(lVar11 + 0x10);
                          lVar16 = *(long *)PTR_DAT_069ff178;
                          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                          if (lVar12 == 0) goto LAB_03168190;
                          uVar43 = *(uint *)(lVar11 + 0x18);
                          if (uVar43 < *(uint *)(lVar12 + 0x18)) {
                            *(uint *)(lVar11 + 0x18) = uVar43 + 1;
                            *(undefined4 *)(lVar12 + (long)(int)uVar43 * 4 + 0x20) = 0;
                          }
                          else {
                            FUN_04059d64(0,lVar11,*(undefined8 *)
                                                   (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) +
                                                   0x70));
                          }
                        }
                        else {
LAB_0316bb78:
                          if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
                          fVar42 = *in_stack_000000d8;
                          uVar10 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                unaff_x20 & 0xffffffff,*puVar23);
                          FUN_0316f6a0(fVar42,fVar30,uVar10,uVar10,&stack0x0000022c,&stack0x00000228
                                       ,&stack0x00000224,&stack0x00000218,&stack0x00000278,
                                       &stack0x00000214);
                        }
                        lVar11 = *in_stack_000000b8;
                        if (fVar47 <= 5.0) {
                          if (lVar11 == 0) goto LAB_03168190;
                          lVar12 = *(long *)(lVar11 + 0x10);
                          lVar16 = *(long *)PTR_DAT_069ff178;
                          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                          if (lVar12 == 0) goto LAB_03168190;
                          uVar43 = *(uint *)(lVar11 + 0x18);
                          fVar42 = (unaff_s15 / fVar47) * 5.0;
                          if (*(uint *)(lVar12 + 0x18) <= uVar43) {
                            lVar12 = *(long *)(lVar16 + 0x20);
                            goto LAB_0316bcb0;
                          }
                          *(uint *)(lVar11 + 0x18) = uVar43 + 1;
                          *(float *)(lVar12 + (long)(int)uVar43 * 4 + 0x20) = fVar42;
                        }
                        else {
                          if (lVar11 == 0) goto LAB_03168190;
                          lVar12 = *(long *)(lVar11 + 0x10);
                          lVar16 = *(long *)PTR_DAT_069ff178;
                          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                          if (lVar12 == 0) goto LAB_03168190;
                          uVar43 = *(uint *)(lVar11 + 0x18);
                          if (uVar43 < *(uint *)(lVar12 + 0x18)) {
                            *(uint *)(lVar11 + 0x18) = uVar43 + 1;
                            *(float *)(lVar12 + (long)(int)uVar43 * 4 + 0x20) = unaff_s15;
                          }
                          else {
                            lVar12 = *(long *)(lVar16 + 0x20);
                            fVar42 = unaff_s15;
LAB_0316bcb0:
                            FUN_04059d64(fVar42,lVar11,
                                         *(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x70));
                          }
                        }
                        if (bVar7) {
                          lVar11 = *in_stack_000000b8;
                          if (lVar11 == 0) goto LAB_03168190;
                          iVar25 = *(int *)(lVar11 + 0x18);
                          if (1 < iVar25) {
                            FUN_04059a68(lVar11,iVar25 + -1,*(undefined8 *)PTR_DAT_06a0a108);
                            FUN_04059abc(lVar11,iVar25 + -2,*(undefined8 *)PTR_DAT_06a0b5c0);
                          }
                        }
                        puVar2 = PTR_DAT_069fbee0;
                        lVar11 = *(long *)(unaff_x26 + 0x20);
                        if (lVar11 == 0) goto LAB_03168190;
                        lVar12 = *(long *)(lVar11 + 0x10);
                        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                        if (lVar12 == 0) goto LAB_03168190;
                        uVar43 = *(uint *)(lVar11 + 0x18);
                        if (uVar43 < *(uint *)(lVar12 + 0x18)) {
                          lVar12 = lVar12 + (long)(int)uVar43 * 0xc;
                          *(uint *)(lVar11 + 0x18) = uVar43 + 1;
                          *(float *)(lVar12 + 0x20) = in_stack_00000278;
                          *(float *)(lVar12 + 0x24) = in_stack_0000027c;
                          *(float *)(lVar12 + 0x28) = in_stack_00000280;
                        }
                        else {
                          FUN_0409f624(lVar11,*(undefined8 *)
                                               (*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0)
                                               + 0x70));
                        }
                        puVar23 = (undefined8 *)PTR_DAT_06a0b440;
                        lVar11 = *(long *)(unaff_x26 + 0x28);
                        if (lVar11 == 0) goto LAB_03168190;
                        lVar12 = *(long *)(lVar11 + 0x10);
                        lVar16 = *(long *)PTR_DAT_069ff178;
                        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                        if (lVar12 == 0) goto LAB_03168190;
                        uVar43 = *(uint *)(lVar11 + 0x18);
                        if (uVar43 < *(uint *)(lVar12 + 0x18)) {
                          *(uint *)(lVar11 + 0x18) = uVar43 + 1;
                          *(float *)(lVar12 + (long)(int)uVar43 * 4 + 0x20) = fVar37;
                        }
                        else {
                          FUN_04059d64(fVar37,lVar11,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                        }
                        if (bVar5 != false) {
                          lVar11 = *(long *)(in_stack_00000148 + 0x2c8);
                          if (lVar11 == 0) goto LAB_03168190;
                          lVar12 = *(long *)(lVar11 + 0x10);
                          lVar16 = *(long *)PTR_DAT_069fc3e0;
                          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                          if (lVar12 == 0) goto LAB_03168190;
                          uVar43 = *(uint *)(lVar11 + 0x18);
                          if (uVar43 < *(uint *)(lVar12 + 0x18)) {
                            *(uint *)(lVar11 + 0x18) = uVar43 + 1;
                            *(int *)(lVar12 + (long)(int)uVar43 * 4 + 0x20) = iStack00000000000000d4
                            ;
                          }
                          else {
                            FUN_03fb3e1c(lVar11,iStack00000000000000d4,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
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
                        in_stack_00000110 = (ulong)(uint)fVar45;
                        in_stack_00000160._4_4_ = fVar42;
                      }
                      fVar31 = fVar40 + fVar37;
                    } while (fVar31 < fVar33);
                    iStack0000000000000108 = 0;
                    unaff_x28 = (long *)PTR_DAT_069fb978;
                  }
                }
                else {
                  if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                     (lVar11 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                            unaff_x20 & 0xffffffff,*puVar23), lVar11 == 0))
                  goto LAB_03168190;
                  if (*(int *)(lVar11 + 0x6c) != 1) {
                    if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                       (lVar11 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                              unaff_x20 & 0xffffffff,*puVar23), lVar11 == 0))
                    goto LAB_03168190;
                    if (*(int *)(lVar11 + 0x6c) != 2) {
                      if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                         (lVar11 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                unaff_x20 & 0xffffffff,*puVar23), lVar11 == 0))
                      goto LAB_03168190;
                      if (*(int *)(lVar11 + 0x6c) == 3) {
                        uStack00000000000001ac = 0;
                        if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
                        if (((long)(*(int *)(*(long *)(in_stack_00000148 + 0x68) + 0x18) + -2) <
                             (long)uVar39) && (*(char *)(in_stack_00000148 + 0x84) == '\0')) {
                          uVar10 = *(undefined8 *)(in_stack_00000148 + 0x2e0);
                          if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
                            thunk_FUN_02df485c();
                          }
                          uVar13 = FUN_0634eb94(uVar10,0,0);
                          if ((uVar13 & 1) != 0) goto LAB_0316adcc;
                          FUN_030fd644(&stack0x00000290,in_stack_00000148,uVar39 & 0xffffffff,
                                       &stack0x00000238,&stack0x00000240,(long)&stack0x000001d0 + 4,
                                       0,&stack0x00000230);
                        }
                        else {
LAB_0316adcc:
                          FUN_030faa2c(&stack0x00000290,in_stack_00000148,uVar39 & 0xffffffff,
                                       &stack0x00000238,&stack0x00000240,(long)&stack0x000001d0 + 4,
                                       0,&stack0x00000230);
                        }
                        if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                           (lVar11 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                  unaff_x20 & 0xffffffff,*puVar23), lVar11 == 0))
                        goto LAB_03168190;
                        lVar12 = *(long *)(unaff_x26 + 0x28);
                        *(undefined4 *)(lVar11 + 0x34) = uStack00000000000001ac;
                        if (lVar12 == 0) goto LAB_03168190;
                        fVar40 = 0.0;
                        iVar25 = 0;
                        puVar28 = (undefined4 *)(in_stack_00000170 + 0x20 + unaff_x20 * 0xc);
                        while( true ) {
                          puVar23 = (undefined8 *)PTR_DAT_06a0b440;
                          puVar2 = PTR_DAT_069fbee0;
                          unaff_x28 = (long *)PTR_DAT_069fb978;
                          fVar37 = (float)uVar17;
                          in_stack_00000160._4_4_ = (float)uVar38;
                          iVar55 = *(int *)(lVar12 + 0x18);
                          if (iVar55 <= iVar25) break;
                          if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                          uStack00000000000001a0 =
                               FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),iVar25,
                                            *(undefined8 *)PTR_DAT_069fd088);
                          fStack00000000000001a4 = fVar37;
                          fStack00000000000001a8 = in_stack_00000160._4_4_;
                          if (*(char *)(in_stack_00000148 + 0x5d6) == '\0') {
                            uVar17 = (ulong)*(uint *)(in_stack_00000170 + 0x18);
                            if ((((uVar17 <= unaff_x20) || (uVar17 <= uVar39)) ||
                                (uVar17 <= unaff_x24)) || (uVar17 <= uVar39 + 2)) goto LAB_0316f2c4;
                            if (*(long *)(unaff_x26 + 0x28) == 0) goto LAB_03168190;
                            uVar41 = *puVar28;
                            fVar37 = (float)puVar28[1];
                            uVar50 = puVar28[2];
                            fVar42 = *pfVar21;
                            uVar53 = *(undefined4 *)(lVar9 + 0x24);
                            uVar51 = *(undefined4 *)(lVar9 + 0x28);
                            FUN_04059a68(*(long *)(unaff_x26 + 0x28),iVar25,
                                         *(undefined8 *)PTR_DAT_06a0a108);
                            FUN_0316f340(uVar41,fVar37,uVar50,fVar42,uVar53,uVar51);
                            fStack00000000000001a4 = fVar37;
                            if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                            in_stack_00000160._4_4_ = fStack00000000000001a8;
                            FUN_0409f350(uStack00000000000001a0,*(long *)(unaff_x26 + 0x20),iVar25,
                                         *(undefined8 *)PTR_DAT_06a0b7d0);
                            if (iVar25 != 0) goto LAB_0316af8c;
LAB_0316b04c:
                            lVar11 = *in_stack_000000e0;
                            if (lVar11 == 0) goto LAB_03168190;
                            lVar12 = *(long *)(lVar11 + 0x10);
                            lVar16 = *(long *)PTR_DAT_069ff178;
                            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                            if (lVar12 == 0) goto LAB_03168190;
                            uVar43 = *(uint *)(lVar11 + 0x18);
                            if (uVar43 < *(uint *)(lVar12 + 0x18)) {
                              *(uint *)(lVar11 + 0x18) = uVar43 + 1;
                              *(undefined4 *)(lVar12 + (long)(int)uVar43 * 4 + 0x20) = 0;
                            }
                            else {
                              FUN_04059d64(0,lVar11,*(undefined8 *)
                                                     (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) +
                                                     0x70));
                            }
                          }
                          else {
                            if (*(long *)(in_stack_00000148 + 0x20) == 0) goto LAB_03168190;
                            FUN_03199614(*(long *)(in_stack_00000148 + 0x20),&stack0x000001a0,0);
                            if (iVar25 == 0) goto LAB_0316b04c;
LAB_0316af8c:
                            if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                               (lVar11 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                      unaff_x20 & 0xffffffff,
                                                      *(undefined8 *)PTR_DAT_06a0b440), lVar11 == 0)
                               ) goto LAB_03168190;
                            if (*(float *)(lVar11 + 0x100) == 0.0) {
                              if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                                 (lVar11 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                        unaff_x20 & 0xffffffff,
                                                        *(undefined8 *)PTR_DAT_06a0b440),
                                 lVar11 == 0)) goto LAB_03168190;
                              if (*(float *)(lVar11 + 0x104) == 0.0) {
                                if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                                   (lVar11 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                          unaff_x20 & 0xffffffff,
                                                          *(undefined8 *)PTR_DAT_06a0b440),
                                   lVar11 == 0)) goto LAB_03168190;
                                if (*(float *)(lVar11 + 0x110) == 0.0) {
                                  if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                                     (lVar11 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                            unaff_x20 & 0xffffffff,
                                                            *(undefined8 *)PTR_DAT_06a0b440),
                                     lVar11 == 0)) goto LAB_03168190;
                                  if (*(float *)(lVar11 + 0x114) == 0.0) goto LAB_0316b04c;
                                }
                              }
                            }
                            puVar2 = PTR_DAT_069fd088;
                            if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                            fVar42 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),iVar25 + -1,
                                                         *(undefined8 *)PTR_DAT_069fd088);
                            if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                            fVar45 = fVar37;
                            fVar47 = in_stack_00000160._4_4_;
                            fVar49 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),iVar25,
                                                         *(undefined8 *)puVar2);
                            if (DAT_06db4c77 == '\0') {
                              FUN_02d965b8(PTR_DAT_069fbb48);
                              DAT_06db4c77 = '\x01';
                            }
                            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                              thunk_FUN_02df485c();
                            }
                            if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
                            fVar31 = *in_stack_000000d8;
                            fVar40 = fVar40 + SQRT((in_stack_00000160._4_4_ - fVar47) *
                                                   (in_stack_00000160._4_4_ - fVar47) +
                                                   (fVar42 - fVar49) * (fVar42 - fVar49) +
                                                   (fVar37 - fVar45) * (fVar37 - fVar45));
                            uVar10 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                  unaff_x20 & 0xffffffff,
                                                  *(undefined8 *)PTR_DAT_06a0b440);
                            FUN_0316f6a0(fVar40 + fVar31,fVar30,uVar10,uVar10,&stack0x0000022c,
                                         &stack0x00000228,&stack0x00000224,&stack0x00000218,
                                         &stack0x000001a0,&stack0x00000214);
                          }
                          if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                          uVar38 = (ulong)(uint)fStack00000000000001a8;
                          uVar17 = (ulong)(uint)fStack00000000000001a4;
                          FUN_0409f350(uStack00000000000001a0,*(long *)(unaff_x26 + 0x20),iVar25,
                                       *(undefined8 *)PTR_DAT_06a0b7d0);
                          lVar12 = *(long *)(unaff_x26 + 0x28);
                          iVar25 = iVar25 + 1;
                          if (lVar12 == 0) goto LAB_03168190;
                        }
                        uVar17 = (ulong)(iVar55 - 1);
                        if (iVar55 < 1) {
                          if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
                          lVar11 = *(long *)(unaff_x26 + 0x20);
                          if (lVar11 == 0) goto LAB_03168190;
                          lVar12 = *(long *)(lVar11 + 0x10);
                          fVar40 = *pfVar29;
                          uVar41 = *(undefined4 *)(lVar19 + 0x24);
                          in_stack_00000160._4_4_ = *(float *)(lVar19 + 0x28);
                          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                          if (lVar12 == 0) goto LAB_03168190;
                          uVar43 = *(uint *)(lVar11 + 0x18);
                          if (uVar43 < *(uint *)(lVar12 + 0x18)) {
                            lVar12 = lVar12 + (long)(int)uVar43 * 0xc;
                            *(uint *)(lVar11 + 0x18) = uVar43 + 1;
                            *(float *)(lVar12 + 0x20) = fVar40;
                            *(undefined4 *)(lVar12 + 0x24) = uVar41;
                            *(float *)(lVar12 + 0x28) = in_stack_00000160._4_4_;
                          }
                          else {
                            FUN_0409f624(lVar11,*(undefined8 *)
                                                 (*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0
                                                           ) + 0x70));
                            uVar17 = extraout_x1_00;
                          }
                          fVar40 = fStack00000000000001d4;
                          if ((*(uint *)(in_stack_00000170 + 0x18) <= uVar39) ||
                             (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24)) goto LAB_0316f2c4;
                          uVar10 = *(undefined8 *)pfVar21;
                          fVar30 = *(float *)(lVar9 + 0x28);
                          uVar44 = *(undefined8 *)pfVar29;
                          fVar37 = *(float *)(lVar19 + 0x28);
                          if (DAT_06db4c77 == '\0') {
                            FUN_02d965b8(PTR_DAT_069fbb48,uVar17);
                            DAT_06db4c77 = '\x01';
                          }
                          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                            thunk_FUN_02df485c();
                          }
                          fVar42 = (float)uVar10 - (float)uVar44;
                          fVar45 = (float)((ulong)uVar10 >> 0x20) - (float)((ulong)uVar44 >> 0x20);
                          fVar30 = fVar30 - fVar37;
                          in_stack_0000027c = fVar30 * fVar30;
                          fStack00000000000001d4 =
                               fVar40 + SQRT(in_stack_0000027c + fVar42 * fVar42 + fVar45 * fVar45);
LAB_0316d2dc:
                          lVar9 = *(long *)(unaff_x26 + 0x28);
                          if (lVar9 == 0) goto LAB_03168190;
                          lVar19 = *(long *)(lVar9 + 0x10);
                          lVar11 = *(long *)PTR_DAT_069ff178;
                          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                          if (lVar19 == 0) goto LAB_03168190;
                          uVar43 = *(uint *)(lVar9 + 0x18);
                          if (uVar43 < *(uint *)(lVar19 + 0x18)) {
                            *(uint *)(lVar9 + 0x18) = uVar43 + 1;
                            *(undefined4 *)(lVar19 + (long)(int)uVar43 * 4 + 0x20) = 0x3f800000;
                          }
                          else {
                            FUN_04059d64(0x3f800000,lVar9,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                          }
                          lVar9 = *in_stack_000000e0;
                          if (lVar9 == 0) goto LAB_03168190;
                          lVar19 = *(long *)(lVar9 + 0x10);
                          lVar11 = *(long *)PTR_DAT_069ff178;
                          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                          if (lVar19 == 0) goto LAB_03168190;
                          uVar43 = *(uint *)(lVar9 + 0x18);
                          if (uVar43 < *(uint *)(lVar19 + 0x18)) {
                            *(uint *)(lVar9 + 0x18) = uVar43 + 1;
                            *(undefined4 *)(lVar19 + (long)(int)uVar43 * 4 + 0x20) = 0;
                          }
                          else {
                            FUN_04059d64(0,lVar9,*(undefined8 *)
                                                  (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70
                                                  ));
                          }
                        }
                        else {
                          fVar40 = (float)FUN_04059a68(lVar12,uVar17,*(undefined8 *)PTR_DAT_06a0a108
                                                      );
                          puVar23 = (undefined8 *)PTR_DAT_06a0b440;
                          puVar2 = PTR_DAT_069fd088;
                          unaff_x28 = (long *)PTR_DAT_069fb978;
                          fVar30 = 1.0;
                          if (fVar40 <= 1.0) {
                            lVar9 = *(long *)(unaff_x26 + 0x20);
                            if (lVar9 == 0) goto LAB_03168190;
                            fVar40 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,
                                                         *(undefined8 *)PTR_DAT_069fd088);
                            if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
                            fVar30 = fVar30 - *(float *)(lVar19 + 0x24);
                            in_stack_00000160._4_4_ =
                                 in_stack_00000160._4_4_ - *(float *)(lVar19 + 0x28);
                            in_stack_0000027c = fStack00000000000000a4;
                            if (fStack00000000000000a4 <=
                                in_stack_00000160._4_4_ * in_stack_00000160._4_4_ +
                                (fVar40 - *pfVar29) * (fVar40 - *pfVar29) + fVar30 * fVar30) {
                              lVar9 = *(long *)(unaff_x26 + 0x20);
                              if (lVar9 == 0) goto LAB_03168190;
                              fVar40 = fStack00000000000000a4;
                              fVar30 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,
                                                           *(undefined8 *)puVar2);
                              if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24)
                              goto LAB_0316f2c4;
                              fVar37 = *pfVar29;
                              fVar45 = *(float *)(lVar19 + 0x24);
                              fVar42 = *(float *)(lVar19 + 0x28);
                              if (DAT_06db4c77 == '\0') {
                                FUN_02d965b8(PTR_DAT_069fbb48);
                                DAT_06db4c77 = '\x01';
                              }
                              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                                thunk_FUN_02df485c();
                              }
                              puVar3 = PTR_DAT_069fbee0;
                              fVar40 = fVar40 - fVar45;
                              lVar9 = *(long *)(unaff_x26 + 0x20);
                              in_stack_00000160._4_4_ = in_stack_00000160._4_4_ - fVar42;
                              if (in_stack_000000b0 <=
                                  SQRT(in_stack_00000160._4_4_ * in_stack_00000160._4_4_ +
                                       (fVar30 - fVar37) * (fVar30 - fVar37) + fVar40 * fVar40)) {
                                if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24)
                                goto LAB_0316f2c4;
                                if (lVar9 != 0) {
                                  lVar11 = *(long *)(lVar9 + 0x10);
                                  fVar40 = *pfVar29;
                                  fVar30 = *(float *)(lVar19 + 0x24);
                                  in_stack_00000160._4_4_ = *(float *)(lVar19 + 0x28);
                                  *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                  if (lVar11 != 0) {
                                    uVar43 = *(uint *)(lVar9 + 0x18);
                                    if (uVar43 < *(uint *)(lVar11 + 0x18)) {
                                      lVar11 = lVar11 + (long)(int)uVar43 * 0xc;
                                      *(uint *)(lVar9 + 0x18) = uVar43 + 1;
                                      *(float *)(lVar11 + 0x20) = fVar40;
                                      *(float *)(lVar11 + 0x24) = fVar30;
                                      *(float *)(lVar11 + 0x28) = in_stack_00000160._4_4_;
                                    }
                                    else {
                                      FUN_0409f624(lVar9,*(undefined8 *)
                                                          (*(long *)(*(long *)(*(long *)puVar3 +
                                                                              0x20) + 0xc0) + 0x70))
                                      ;
                                    }
                                    fVar40 = fStack00000000000001d4;
                                    lVar9 = *(long *)(unaff_x26 + 0x20);
                                    if (lVar9 != 0) {
                                      fVar37 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1
                                                                   ,*(undefined8 *)puVar2);
                                      if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24)
                                      goto LAB_0316f2c4;
                                      fVar42 = *pfVar29;
                                      fVar47 = *(float *)(lVar19 + 0x24);
                                      fVar45 = *(float *)(lVar19 + 0x28);
                                      if (DAT_06db4c77 == '\0') {
                                        FUN_02d965b8(PTR_DAT_069fbb48);
                                        DAT_06db4c77 = '\x01';
                                      }
                                      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                                        thunk_FUN_02df485c();
                                      }
                                      fVar30 = fVar30 - fVar47;
                                      in_stack_00000160._4_4_ = in_stack_00000160._4_4_ - fVar45;
                                      in_stack_0000027c =
                                           in_stack_00000160._4_4_ * in_stack_00000160._4_4_;
                                      fStack00000000000001d4 =
                                           fVar40 + SQRT(in_stack_0000027c +
                                                         (fVar37 - fVar42) * (fVar37 - fVar42) +
                                                         fVar30 * fVar30);
                                      goto LAB_0316d2dc;
                                    }
                                  }
                                }
                                goto LAB_03168190;
                              }
                              if (lVar9 == 0) goto LAB_03168190;
                              if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24)
                              goto LAB_0316f2c4;
                              in_stack_00000160._4_4_ = *(float *)(lVar19 + 0x28);
                              in_stack_0000027c = *(float *)(lVar19 + 0x24);
                              FUN_0409f350(*pfVar29,lVar9,*(int *)(lVar9 + 0x18) + -1,
                                           *(undefined8 *)PTR_DAT_06a0b7d0);
                              lVar9 = *(long *)(unaff_x26 + 0x28);
                              if (lVar9 == 0) goto LAB_03168190;
                              FUN_04059abc(0x3f800000,lVar9,*(int *)(lVar9 + 0x18) + -1,
                                           *(undefined8 *)PTR_DAT_06a0b5c0);
                            }
                          }
                          else {
                            lVar9 = *(long *)(unaff_x26 + 0x28);
                            if (lVar9 == 0) goto LAB_03168190;
                            FUN_04059abc(0x3f800000,lVar9,*(int *)(lVar9 + 0x18) + -1,
                                         *(undefined8 *)PTR_DAT_06a0b5c0);
                            lVar9 = *(long *)(unaff_x26 + 0x20);
                            if (lVar9 == 0) goto LAB_03168190;
                            if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
                            in_stack_00000160._4_4_ = *(float *)(lVar19 + 0x28);
                            in_stack_0000027c = *(float *)(lVar19 + 0x24);
                            FUN_0409f350(*pfVar29,lVar9,*(int *)(lVar9 + 0x18) + -1,
                                         *(undefined8 *)PTR_DAT_06a0b7d0);
                          }
                        }
                        lVar9 = *(long *)(unaff_x26 + 0x20);
                        if (lVar9 == 0) goto LAB_03168190;
                        iVar25 = *(int *)(lVar9 + 0x18);
                        in_stack_00000110 =
                             FUN_0409f2f4(lVar9,iVar25 + -1,*(undefined8 *)PTR_DAT_069fd088);
                        puVar2 = PTR_DAT_069fd088;
                        lVar9 = *(long *)(unaff_x26 + 0x20);
                        in_stack_00000278 = (float)in_stack_00000110;
                        if (lVar9 == 0) goto LAB_03168190;
                        fVar40 = in_stack_00000160._4_4_;
                        if (1 < *(int *)(lVar9 + 0x18)) {
                          fStack0000000000000088 = in_stack_0000027c;
                          fStack000000000000008c =
                               (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -2,
                                                   *(undefined8 *)PTR_DAT_069fd088);
                          lVar9 = *(long *)(unaff_x26 + 0x20);
                          if (lVar9 == 0) goto LAB_03168190;
                          fVar30 = fStack0000000000000088;
                          fVar37 = fVar40;
                          fVar42 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,
                                                       *(undefined8 *)puVar2);
                          if (DAT_06db4c75 == '\0') {
                            FUN_02d965b8(PTR_DAT_069fbb48);
                            DAT_06db4c75 = '\x01';
                          }
                          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                            thunk_FUN_02df485c();
                          }
                          fStack000000000000008c = fStack000000000000008c - fVar42;
                          fStack0000000000000088 = fStack0000000000000088 - fVar30;
                          fVar40 = fVar40 - fVar37;
                          in_stack_00000080._4_4_ =
                               SQRT(fVar40 * fVar40 +
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
                            in_stack_00000080._4_4_ = fVar40 / in_stack_00000080._4_4_;
                          }
                        }
                        lVar9 = *(long *)(in_stack_00000148 + 0x2c8);
                        *(float *)(in_stack_00000148 + 0x2c0) =
                             *(float *)(in_stack_00000148 + 0x2c0) + fStack00000000000001d4;
                        if (lVar9 == 0) goto LAB_03168190;
                        lVar19 = *(long *)(lVar9 + 0x10);
                        lVar11 = *(long *)PTR_DAT_069fc3e0;
                        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                        if (lVar19 == 0) goto LAB_03168190;
                        uVar43 = *(uint *)(lVar9 + 0x18);
                        iStack00000000000000d4 = iVar25 + iStack00000000000000d4;
                        fVar30 = fStack00000000000001d4;
                        if (uVar43 < *(uint *)(lVar19 + 0x18)) {
                          *(uint *)(lVar9 + 0x18) = uVar43 + 1;
                          *(int *)(lVar19 + (long)(int)uVar43 * 4 + 0x20) = iStack00000000000000d4;
                        }
                        else {
                          FUN_03fb3e1c(lVar9,iStack00000000000000d4,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                        }
                        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
                        iVar25 = *(int *)(*(long *)(unaff_x26 + 0x78) + 0x18);
                        in_stack_00000280 = in_stack_00000160._4_4_;
                        if (iVar25 < 1) {
                          iStack0000000000000108 = 3;
                          goto LAB_0316c620;
                        }
                        lVar9 = FUN_0400ff1c(in_stack_00000098,iVar27 + -2,*puVar23);
                        if ((lVar9 == 0) || (lVar19 = *in_stack_00000090, lVar19 == 0))
                        goto LAB_03168190;
                        iVar55 = *(int *)(lVar9 + 0xbc);
                        fVar37 = (float)FUN_04059a68(lVar19,*(int *)(lVar19 + 0x18) + -1,
                                                     *(undefined8 *)PTR_DAT_06a0a108);
                        lVar9 = *in_stack_00000090;
                        if (lVar9 == 0) goto LAB_03168190;
                        if (1 < *(int *)(lVar9 + 0x18)) {
                          fVar30 = (float)FUN_04059a68(lVar9,*(int *)(lVar9 + 0x18) + -2,
                                                       *(undefined8 *)PTR_DAT_06a0a108);
                          fVar30 = fVar37 - fVar30;
                          fVar37 = fVar30;
                        }
                        puVar2 = PTR_DAT_069fd088;
                        lVar9 = *(long *)(unaff_x26 + 0x78);
                        if (lVar9 == 0) goto LAB_03168190;
                        fVar42 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,
                                                     *(undefined8 *)PTR_DAT_069fd088);
                        if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                        fVar45 = fVar30;
                        fVar47 = fVar40;
                        fVar49 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),0,
                                                     *(undefined8 *)puVar2);
                        if (DAT_06db4c75 == '\0') {
                          FUN_02d965b8(PTR_DAT_069fbb48);
                          DAT_06db4c75 = '\x01';
                        }
                        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                          thunk_FUN_02df485c();
                        }
                        fVar30 = fVar30 - fVar45;
                        uVar17 = (ulong)(uint)DAT_010fd13c;
                        fVar40 = SQRT((fVar40 - fVar47) * (fVar40 - fVar47) +
                                      (fVar42 - fVar49) * (fVar42 - fVar49) + fVar30 * fVar30);
                        if (fVar40 <= DAT_010fd13c) {
                          if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
                            FUN_02d965b8(unaff_x28);
                            *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
                          }
                          fVar30 = *(float *)(*(long *)(*unaff_x28 + 0xb8) + 4);
                        }
                        else {
                          fVar30 = fVar30 / fVar40;
                        }
                        puVar2 = PTR_DAT_069fd088;
                        lVar9 = *(long *)(unaff_x26 + 0x78);
                        if (lVar9 == 0) goto LAB_03168190;
                        FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,
                                     *(undefined8 *)PTR_DAT_069fd088);
                        lVar9 = *(long *)(unaff_x26 + 0x78);
                        if (lVar9 == 0) goto LAB_03168190;
                        fVar45 = fVar40;
                        fVar42 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,
                                                     *(undefined8 *)puVar2);
                        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
                        uVar38 = (ulong)(uint)(float)iVar55;
                        fVar47 = (float)iVar25 - (float)iVar55;
                        if (1.0 <= fVar47) {
                          fVar49 = 0.0;
                          iVar55 = *(int *)(*(long *)(unaff_x26 + 0x78) + 0x18);
                          iVar25 = 2;
                          iVar26 = -2;
                          do {
                            fVar31 = (float)uVar38;
                            if ((iVar25 - iVar55) + -1 < 0) {
                              lVar9 = *(long *)(unaff_x26 + 0x78);
                              if (lVar9 == 0) goto LAB_03168190;
                              fVar33 = (float)uVar17;
                              fVar34 = (float)FUN_0409f2f4(lVar9,iVar26 + *(int *)(lVar9 + 0x18),
                                                           *(undefined8 *)PTR_DAT_069fd088);
                              if (DAT_06db4c77 == '\0') {
                                FUN_02d965b8(PTR_DAT_069fbb48);
                                DAT_06db4c77 = '\x01';
                              }
                              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                                thunk_FUN_02df485c();
                              }
                              lVar9 = *(long *)(unaff_x26 + 0x78);
                              if (lVar9 == 0) goto LAB_03168190;
                              fVar32 = fVar33 - (float)uVar17;
                              fVar49 = fVar49 + SQRT(fVar32 * fVar32 +
                                                     (fVar34 - fVar42) * (fVar34 - fVar42) +
                                                     (fVar31 - fVar45) * (fVar31 - fVar45));
                              fVar40 = (fVar37 / fVar47) * fVar30 + fVar40;
                              fVar42 = 1.0;
                              if (SQRT(fVar49 / fVar37) <= 1.0) {
                                fVar42 = SQRT(fVar49 / fVar37);
                              }
                              fVar45 = fVar40 + (fVar31 - fVar40) * fVar42;
                              uVar38 = (ulong)(uint)fVar45;
                              FUN_0409f350(fVar34,uVar38,fVar33,lVar9,
                                           iVar26 + *(int *)(lVar9 + 0x18),
                                           *(undefined8 *)PTR_DAT_06a0b7d0);
                              uVar17 = (ulong)(uint)fVar33;
                              fVar42 = fVar34;
                            }
                            fVar31 = (float)iVar25;
                            iVar25 = iVar25 + 1;
                            iVar26 = iVar26 + -1;
                          } while (fVar31 <= fVar47);
                          iStack0000000000000108 = 3;
                          puVar23 = (undefined8 *)PTR_DAT_06a0b440;
                        }
                        else {
                          iStack0000000000000108 = 3;
                        }
                      }
                      else {
                        if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                           (lVar9 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                 unaff_x20 & 0xffffffff,*puVar23),
                           puVar2 = PTR_DAT_069fd088, lVar9 == 0)) goto LAB_03168190;
                        if (*(int *)(lVar9 + 0x6c) != 4) goto LAB_0316c620;
                        if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                           (lVar9 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                 unaff_x20 & 0xffffffff,*puVar23), lVar9 == 0))
                        goto LAB_03168190;
                        fStack00000000000001d4 = 0.0;
                        *(undefined8 *)(unaff_x26 + 0x20) = *(undefined8 *)(lVar9 + 0x1d8);
                        lVar9 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ff188);
                        FUN_040594d0(lVar9,*(undefined8 *)PTR_DAT_069ff180);
                        if (lVar9 == 0) goto LAB_03168190;
                        lVar19 = *(long *)(lVar9 + 0x10);
                        lVar11 = *(long *)PTR_DAT_069ff178;
                        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                        if (lVar19 == 0) goto LAB_03168190;
                        uVar43 = *(uint *)(lVar9 + 0x18);
                        if (uVar43 < *(uint *)(lVar19 + 0x18)) {
                          *(uint *)(lVar9 + 0x18) = uVar43 + 1;
                          *(undefined4 *)(lVar19 + (long)(int)uVar43 * 4 + 0x20) = 0;
                        }
                        else {
                          FUN_04059d64(0,lVar9,*(undefined8 *)
                                                (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
                          ;
                        }
                        lVar19 = *(long *)(unaff_x26 + 0x20);
                        if (lVar19 == 0) goto LAB_03168190;
                        iVar25 = 1;
                        while( true ) {
                          fVar40 = fStack00000000000001d4;
                          fVar37 = (float)uVar38;
                          fVar30 = (float)uVar17;
                          if (*(int *)(lVar19 + 0x18) <= iVar25) break;
                          fVar42 = (float)FUN_0409f2f4(lVar19,iVar25 + -1,*(undefined8 *)puVar2);
                          if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                          fVar45 = fVar30;
                          fVar47 = fVar37;
                          fVar49 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),iVar25,
                                                       *(undefined8 *)puVar2);
                          if (DAT_06db4c77 == '\0') {
                            FUN_02d965b8(PTR_DAT_069fbb48);
                            DAT_06db4c77 = '\x01';
                          }
                          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                            thunk_FUN_02df485c();
                          }
                          fVar37 = fVar37 - fVar47;
                          uVar38 = (ulong)(uint)fVar37;
                          lVar19 = *(long *)(lVar9 + 0x10);
                          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                          uVar17 = (ulong)(uint)(fVar37 * fVar37);
                          fStack00000000000001d4 =
                               fVar40 + SQRT(fVar37 * fVar37 +
                                             (fVar42 - fVar49) * (fVar42 - fVar49) +
                                             (fVar30 - fVar45) * (fVar30 - fVar45));
                          if (lVar19 == 0) goto LAB_03168190;
                          uVar43 = *(uint *)(lVar9 + 0x18);
                          if (uVar43 < *(uint *)(lVar19 + 0x18)) {
                            *(uint *)(lVar9 + 0x18) = uVar43 + 1;
                            *(float *)(lVar19 + (long)(int)uVar43 * 4 + 0x20) =
                                 fStack00000000000001d4;
                          }
                          else {
                            FUN_04059d64(lVar9,*(undefined8 *)
                                                (*(long *)(*(long *)(*(long *)PTR_DAT_069ff178 +
                                                                    0x20) + 0xc0) + 0x70));
                          }
                          lVar19 = *(long *)(unaff_x26 + 0x20);
                          iVar25 = iVar25 + 1;
                          if (lVar19 == 0) goto LAB_03168190;
                        }
                        lVar19 = *(long *)(unaff_x26 + 0x28);
                        *in_stack_000000d8 = *in_stack_000000d8 + fStack00000000000001d4;
                        if (lVar19 == 0) goto LAB_03168190;
                        lVar11 = *(long *)(lVar19 + 0x10);
                        lVar12 = *(long *)PTR_DAT_069ff178;
                        *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
                        if (lVar11 == 0) goto LAB_03168190;
                        uVar43 = *(uint *)(lVar19 + 0x18);
                        if (uVar43 < *(uint *)(lVar11 + 0x18)) {
                          *(uint *)(lVar19 + 0x18) = uVar43 + 1;
                          *(undefined4 *)(lVar11 + (long)(int)uVar43 * 4 + 0x20) = 0;
                        }
                        else {
                          FUN_04059d64(0,lVar19,*(undefined8 *)
                                                 (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70)
                                      );
                        }
                        lVar19 = *in_stack_000000e0;
                        if (lVar19 == 0) goto LAB_03168190;
                        lVar11 = *(long *)(lVar19 + 0x10);
                        lVar12 = *(long *)PTR_DAT_069ff178;
                        *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
                        if (lVar11 == 0) goto LAB_03168190;
                        uVar43 = *(uint *)(lVar19 + 0x18);
                        if (uVar43 < *(uint *)(lVar11 + 0x18)) {
                          *(uint *)(lVar19 + 0x18) = uVar43 + 1;
                          *(undefined4 *)(lVar11 + (long)(int)uVar43 * 4 + 0x20) = 0;
                        }
                        else {
                          FUN_04059d64(0,lVar19,*(undefined8 *)
                                                 (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70)
                                      );
                        }
                        lVar19 = *(long *)(unaff_x26 + 0x20);
                        if (lVar19 == 0) goto LAB_03168190;
                        iVar25 = 0;
                        while (iVar25 < *(int *)(lVar19 + 0x18)) {
                          lVar19 = *(long *)(unaff_x26 + 0x28);
                          fVar40 = (float)FUN_04059a68(lVar9,iVar25,*(undefined8 *)PTR_DAT_06a0a108)
                          ;
                          if (lVar19 == 0) goto LAB_03168190;
                          lVar11 = *(long *)(lVar19 + 0x10);
                          lVar12 = *(long *)PTR_DAT_069ff178;
                          *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
                          if (lVar11 == 0) goto LAB_03168190;
                          uVar43 = *(uint *)(lVar19 + 0x18);
                          if (uVar43 < *(uint *)(lVar11 + 0x18)) {
                            *(uint *)(lVar19 + 0x18) = uVar43 + 1;
                            *(float *)(lVar11 + (long)(int)uVar43 * 4 + 0x20) =
                                 fVar40 / fStack00000000000001d4;
                          }
                          else {
                            FUN_04059d64(lVar19,*(undefined8 *)
                                                 (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70)
                                        );
                          }
                          lVar19 = *in_stack_000000e0;
                          if (lVar19 == 0) goto LAB_03168190;
                          lVar11 = *(long *)(lVar19 + 0x10);
                          lVar12 = *(long *)PTR_DAT_069ff178;
                          *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
                          if (lVar11 == 0) goto LAB_03168190;
                          uVar43 = *(uint *)(lVar19 + 0x18);
                          if (uVar43 < *(uint *)(lVar11 + 0x18)) {
                            *(uint *)(lVar19 + 0x18) = uVar43 + 1;
                            *(undefined4 *)(lVar11 + (long)(int)uVar43 * 4 + 0x20) = 0;
                          }
                          else {
                            FUN_04059d64(0,lVar19,*(undefined8 *)
                                                   (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) +
                                                   0x70));
                          }
                          lVar19 = *(long *)(unaff_x26 + 0x20);
                          iVar25 = iVar25 + 1;
                          if (lVar19 == 0) goto LAB_03168190;
                        }
                        iStack0000000000000108 = 4;
                        puVar23 = (undefined8 *)PTR_DAT_06a0b440;
                      }
                      goto LAB_0316c620;
                    }
                  }
                  uVar43 = *(uint *)(in_stack_00000170 + 0x18);
                  in_stack_00000160._4_4_ = in_stack_00000280;
                  if (uVar39 == 1) {
                    if ((ulong)uVar43 < 2) goto LAB_0316f2c4;
                    in_stack_00000160._4_4_ = *(float *)(lVar9 + 0x28);
                    *(undefined8 *)(unaff_x26 + 0x60) = *(undefined8 *)pfVar21;
                  }
                  if (uVar43 <= unaff_x24) {
LAB_0316f2c4:
                    /* WARNING: Subroutine does not return */
                    FUN_02d96868();
                  }
                  fVar40 = *(float *)(lVar19 + 0x28);
                  uVar10 = *(undefined8 *)pfVar29;
                  uVar44 = *(undefined8 *)pfVar21;
                  fVar37 = *(float *)(lVar9 + 0x28);
                  if (DAT_06db4c75 == '\0') {
                    FUN_02d965b8(PTR_DAT_069fbb48);
                    DAT_06db4c75 = '\x01';
                  }
                  if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  fVar42 = (float)uVar10 - (float)uVar44;
                  fVar45 = (float)((ulong)uVar10 >> 0x20) - (float)((ulong)uVar44 >> 0x20);
                  fVar40 = fVar40 - fVar37;
                  fVar37 = SQRT(fVar40 * fVar40 + fVar42 * fVar42 + fVar45 * fVar45);
                  uVar17 = (ulong)(uint)fVar37;
                  if (fVar37 <= DAT_010fd13c) {
                    if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
                      FUN_02d965b8(unaff_x28);
                      *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
                    }
                    uVar10 = **(undefined8 **)(*unaff_x28 + 0xb8);
                    fVar40 = *(float *)(*(undefined8 **)(*unaff_x28 + 0xb8) + 1);
                  }
                  else {
                    fVar40 = fVar40 / fVar37;
                    uVar10 = CONCAT44(fVar45 / fVar37,fVar42 / fVar37);
                  }
                  if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
                  fVar37 = *(float *)(lVar19 + 0x28);
                  uVar44 = *(undefined8 *)pfVar29;
                  uVar48 = *(undefined8 *)pfVar21;
                  fVar42 = *(float *)(lVar9 + 0x28);
                  if (DAT_06db4c77 == '\0') {
                    FUN_02d965b8(PTR_DAT_069fbb48);
                    DAT_06db4c77 = '\x01';
                  }
                  if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  fVar45 = (float)uVar44 - (float)uVar48;
                  fVar47 = (float)((ulong)uVar44 >> 0x20) - (float)((ulong)uVar48 >> 0x20);
                  fVar37 = fVar37 - fVar42;
                  fStack00000000000001d4 = SQRT(fVar37 * fVar37 + fVar45 * fVar45 + fVar47 * fVar47)
                  ;
                  if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
                  in_stack_00000110 = (ulong)(uint)in_stack_00000278;
                  fVar42 = *pfVar29;
                  fVar37 = *(float *)(lVar19 + 0x28);
                  if (DAT_06db4c77 == '\0') {
                    FUN_02d965b8(PTR_DAT_069fbb48);
                    DAT_06db4c77 = '\x01';
                  }
                  if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  fVar37 = fVar37 - in_stack_00000160._4_4_;
                  unaff_s9 = SQRT((fVar42 - in_stack_00000278) * (fVar42 - in_stack_00000278) +
                                  fVar37 * fVar37) + 0.0;
                  fVar37 = 0.0;
                  if (uVar39 != 1) {
                    fVar37 = fStack000000000000010c;
                  }
                  uVar13 = (ulong)(uint)fVar37;
                  uVar38 = uVar13;
                  lVar11 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ff188);
                  FUN_040594d0(lVar11,*(undefined8 *)PTR_DAT_069ff180);
                  if (fVar37 < fStack00000000000001d4 - fStack000000000000010c) {
                    fVar37 = *(float *)((ulong)&stack0x00000278 | 4);
                    do {
                      if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
                      uVar44 = *(undefined8 *)pfVar29;
                      fVar42 = *(float *)(lVar19 + 0x28);
                      if (DAT_06db4c77 == '\0') {
                        FUN_02d965b8(PTR_DAT_069fbb48);
                        DAT_06db4c77 = '\x01';
                      }
                      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                      }
                      fVar31 = (float)uVar13;
                      fVar45 = (float)uVar10 * fVar31 + in_stack_00000278;
                      fVar47 = (float)((ulong)uVar10 >> 0x20) * fVar31 + fVar37;
                      uVar48 = CONCAT44(fVar47,fVar45);
                      fVar49 = fVar40 * fVar31 + in_stack_00000160._4_4_;
                      fVar45 = fVar45 - (float)uVar44;
                      fVar47 = fVar47 - (float)((ulong)uVar44 >> 0x20);
                      fVar42 = fVar49 - fVar42;
                      fVar42 = SQRT(fVar42 * fVar42 + fVar45 * fVar45 + fVar47 * fVar47);
                      uVar17 = (ulong)(uint)fVar42;
                      if (in_stack_000000b0 < fVar42) {
                        _uStack00000000000001b0 = uVar48;
                        in_stack_000001b8 = fVar49;
                        if (*(char *)(in_stack_00000148 + 0x5d6) != '\0') {
                          if (*(long *)(in_stack_00000148 + 0x20) == 0) goto LAB_03168190;
                          FUN_03199614(*(long *)(in_stack_00000148 + 0x20),&stack0x000001b0,0);
                        }
                        if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                           (lVar12 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                  unaff_x20 & 0xffffffff,*puVar23), lVar12 == 0))
                        goto LAB_03168190;
                        if (*(float *)(lVar12 + 0x100) == 0.0) {
                          if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                             (lVar12 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                    unaff_x20 & 0xffffffff,*puVar23), lVar12 == 0))
                          goto LAB_03168190;
                          if (*(float *)(lVar12 + 0x104) != 0.0) goto LAB_0316a920;
                          if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                             (lVar12 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                    unaff_x20 & 0xffffffff,*puVar23), lVar12 == 0))
                          goto LAB_03168190;
                          if (*(float *)(lVar12 + 0x110) != 0.0) goto LAB_0316a920;
                          if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                             (lVar12 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                    unaff_x20 & 0xffffffff,*puVar23), lVar12 == 0))
                          goto LAB_03168190;
                          if (*(float *)(lVar12 + 0x114) != 0.0) goto LAB_0316a920;
                          lVar12 = *in_stack_000000e0;
                          if (lVar12 == 0) goto LAB_03168190;
                          lVar16 = *(long *)(lVar12 + 0x10);
                          lVar20 = *(long *)PTR_DAT_069ff178;
                          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                          if (lVar16 == 0) goto LAB_03168190;
                          uVar43 = *(uint *)(lVar12 + 0x18);
                          if (uVar43 < *(uint *)(lVar16 + 0x18)) {
                            *(uint *)(lVar12 + 0x18) = uVar43 + 1;
                            *(undefined4 *)(lVar16 + (long)(int)uVar43 * 4 + 0x20) = 0;
                          }
                          else {
                            FUN_04059d64(0,lVar12,*(undefined8 *)
                                                   (*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) +
                                                   0x70));
                          }
                        }
                        else {
LAB_0316a920:
                          if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
                          fVar42 = *in_stack_000000d8;
                          uVar44 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                unaff_x20 & 0xffffffff,*puVar23);
                          FUN_0316f6a0(fVar31 + fVar42,fVar30,uVar44,uVar44,&stack0x0000022c,
                                       &stack0x00000228,&stack0x00000224,&stack0x00000218,
                                       &stack0x000001b0,&stack0x00000214);
                        }
                        puVar2 = PTR_DAT_069fbee0;
                        lVar12 = *(long *)(unaff_x26 + 0x20);
                        if (lVar12 == 0) goto LAB_03168190;
                        lVar16 = *(long *)(lVar12 + 0x10);
                        uVar17 = (ulong)(uint)in_stack_000001b8;
                        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                        if (lVar16 == 0) goto LAB_03168190;
                        uVar43 = *(uint *)(lVar12 + 0x18);
                        if (uVar43 < *(uint *)(lVar16 + 0x18)) {
                          lVar16 = lVar16 + (long)(int)uVar43 * 0xc;
                          *(uint *)(lVar12 + 0x18) = uVar43 + 1;
                          *(undefined4 *)(lVar16 + 0x20) = uStack00000000000001b0;
                          *(undefined4 *)(lVar16 + 0x24) = uStack00000000000001b4;
                          *(float *)(lVar16 + 0x28) = in_stack_000001b8;
                        }
                        else {
                          FUN_0409f624(lVar12,*(undefined8 *)
                                               (*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0)
                                               + 0x70));
                        }
                        if (lVar11 == 0) goto LAB_03168190;
                        lVar12 = *(long *)(lVar11 + 0x10);
                        lVar16 = *(long *)PTR_DAT_069ff178;
                        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                        if (lVar12 == 0) goto LAB_03168190;
                        uVar43 = *(uint *)(lVar11 + 0x18);
                        if (uVar43 < *(uint *)(lVar12 + 0x18)) {
                          *(uint *)(lVar11 + 0x18) = uVar43 + 1;
                          *(undefined4 *)(lVar12 + (long)(int)uVar43 * 4 + 0x20) = 0;
                        }
                        else {
                          FUN_04059d64(lVar11,*(undefined8 *)
                                               (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                        }
                        lVar12 = *in_stack_000000b8;
                        if (lVar12 == 0) goto LAB_03168190;
                        lVar16 = *(long *)(lVar12 + 0x10);
                        lVar20 = *(long *)PTR_DAT_069ff178;
                        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                        if (lVar16 == 0) goto LAB_03168190;
                        uVar43 = *(uint *)(lVar12 + 0x18);
                        if (uVar43 < *(uint *)(lVar16 + 0x18)) {
                          *(uint *)(lVar12 + 0x18) = uVar43 + 1;
                          *(undefined4 *)(lVar16 + (long)(int)uVar43 * 4 + 0x20) = 0;
                        }
                        else {
                          FUN_04059d64(0,lVar12,*(undefined8 *)
                                                 (*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70)
                                      );
                        }
                        lVar12 = *(long *)(unaff_x26 + 0x28);
                        if (lVar12 == 0) goto LAB_03168190;
                        lVar16 = *(long *)(lVar12 + 0x10);
                        lVar20 = *(long *)PTR_DAT_069ff178;
                        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                        if (lVar16 == 0) goto LAB_03168190;
                        uVar43 = *(uint *)(lVar12 + 0x18);
                        if (uVar43 < *(uint *)(lVar16 + 0x18)) {
                          *(uint *)(lVar12 + 0x18) = uVar43 + 1;
                          *(float *)(lVar16 + (long)(int)uVar43 * 4 + 0x20) =
                               fVar31 / fStack00000000000001d4;
                        }
                        else {
                          FUN_04059d64(lVar12,*(undefined8 *)
                                               (*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
                        }
                      }
                      uVar38 = (ulong)(uint)fStack000000000000010c;
                      uVar13 = (ulong)(uint)(fVar31 + fStack000000000000010c);
                    } while (fVar31 + fStack000000000000010c <
                             fStack00000000000001d4 - fStack000000000000010c);
                  }
                  fStack000000000000012c = (float)uVar17;
                  fStack0000000000000128 = (float)uVar38;
                  if (*(char *)(in_stack_00000148 + 0x5d6) == '\0') {
                    if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
                    lVar12 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff
                                          ,*(undefined8 *)PTR_DAT_06a0b440);
                    fStack000000000000012c = (float)uVar17;
                    fStack0000000000000128 = (float)uVar38;
                    if (lVar12 == 0) goto LAB_03168190;
                    if (*(int *)(lVar12 + 0x6c) == 1) {
                      if (*(long *)(unaff_x26 + 0x28) == 0) goto LAB_03168190;
                      iVar25 = 0;
                      puVar28 = (undefined4 *)(in_stack_00000170 + 0x20 + unaff_x20 * 0xc);
                      lVar12 = *(long *)(unaff_x26 + 0x28);
                      while( true ) {
                        fStack000000000000012c = (float)uVar17;
                        fStack0000000000000128 = (float)uVar38;
                        if (*(int *)(lVar12 + 0x18) <= iVar25) break;
                        uVar17 = (ulong)*(uint *)(in_stack_00000170 + 0x18);
                        if ((((uVar17 <= unaff_x20) || (uVar17 <= uVar39)) || (uVar17 <= unaff_x24))
                           || (uVar17 <= uVar39 + 2)) goto LAB_0316f2c4;
                        uVar41 = *puVar28;
                        fVar40 = (float)puVar28[1];
                        uVar43 = puVar28[2];
                        fVar30 = *pfVar21;
                        uVar50 = *(undefined4 *)(lVar9 + 0x24);
                        uVar53 = *(undefined4 *)(lVar9 + 0x28);
                        FUN_04059a68(lVar12,iVar25,*(undefined8 *)PTR_DAT_06a0a108);
                        FUN_0316f340(uVar41,fVar40,uVar43,fVar30,uVar50,uVar53);
                        unaff_x26 = &stack0x00000218;
                        if (((in_stack_00000238 == 0) ||
                            (uVar41 = FUN_0409f2f4(in_stack_00000238,iVar25,
                                                   *(undefined8 *)PTR_DAT_069fd088), lVar11 == 0))
                           || (fVar30 = (float)FUN_04059a68(lVar11,iVar25,
                                                            *(undefined8 *)PTR_DAT_06a0a108),
                              in_stack_00000238 == 0)) goto LAB_03168190;
                        uVar38 = (ulong)(uint)(fVar40 + fVar30);
                        uVar17 = (ulong)uVar43;
                        FUN_0409f350(uVar41,in_stack_00000238,iVar25,*(undefined8 *)PTR_DAT_06a0b7d0
                                    );
                        iVar25 = iVar25 + 1;
                        lVar12 = in_stack_00000240;
                        if (in_stack_00000240 == 0) goto LAB_03168190;
                      }
                    }
                  }
                  puVar2 = PTR_DAT_069fbee0;
                  lVar9 = *(long *)(unaff_x26 + 0x20);
                  if (lVar9 == 0) goto LAB_03168190;
                  if (*(int *)(lVar9 + 0x18) == 0) {
                    if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
                    lVar11 = *(long *)(lVar9 + 0x10);
                    fVar40 = *pfVar29;
                    uVar41 = *(undefined4 *)(lVar19 + 0x24);
                    uVar50 = *(undefined4 *)(lVar19 + 0x28);
                    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                    if (lVar11 == 0) goto LAB_03168190;
                    if (*(int *)(lVar11 + 0x18) == 0) {
                      FUN_0409f624(lVar9,*(undefined8 *)
                                          (*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0) +
                                          0x70));
                    }
                    else {
                      *(undefined4 *)(lVar9 + 0x18) = 1;
                      *(float *)(lVar11 + 0x20) = fVar40;
                      *(undefined4 *)(lVar11 + 0x24) = uVar41;
                      *(undefined4 *)(lVar11 + 0x28) = uVar50;
                    }
                    if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
                    fVar30 = *pfVar29;
                    fVar40 = *(float *)(lVar19 + 0x24);
                    fStack000000000000012c = *(float *)(lVar19 + 0x28);
                    if (DAT_06db4c77 == '\0') {
                      FUN_02d965b8(PTR_DAT_069fbb48);
                      DAT_06db4c77 = '\x01';
                    }
                    if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                    }
                    fVar40 = in_stack_0000027c - fVar40;
                    lVar9 = *(long *)(unaff_x26 + 0x28);
                    fStack000000000000012c = in_stack_00000160._4_4_ - fStack000000000000012c;
                    fStack0000000000000128 = fStack000000000000012c * fStack000000000000012c;
                    fStack00000000000001d4 =
                         SQRT(fStack0000000000000128 +
                              (in_stack_00000278 - fVar30) * (in_stack_00000278 - fVar30) +
                              fVar40 * fVar40);
                    if (lVar9 == 0) goto LAB_03168190;
                    lVar11 = *(long *)(lVar9 + 0x10);
                    lVar12 = *(long *)PTR_DAT_069ff178;
                    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                    if (lVar11 == 0) goto LAB_03168190;
                    uVar43 = *(uint *)(lVar9 + 0x18);
                    if (uVar43 < *(uint *)(lVar11 + 0x18)) {
                      *(uint *)(lVar9 + 0x18) = uVar43 + 1;
                      *(undefined4 *)(lVar11 + (long)(int)uVar43 * 4 + 0x20) = 0x3f800000;
                    }
                    else {
                      FUN_04059d64(0x3f800000,lVar9,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                    }
                    lVar9 = *in_stack_000000e0;
                    if (lVar9 == 0) goto LAB_03168190;
                    lVar11 = *(long *)(lVar9 + 0x10);
                    lVar12 = *(long *)PTR_DAT_069ff178;
                    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                    if (lVar11 == 0) goto LAB_03168190;
                    uVar43 = *(uint *)(lVar9 + 0x18);
                    if (uVar43 < *(uint *)(lVar11 + 0x18)) {
                      *(uint *)(lVar9 + 0x18) = uVar43 + 1;
                      *(undefined4 *)(lVar11 + (long)(int)uVar43 * 4 + 0x20) = 0;
                    }
                    else {
                      FUN_04059d64(0,lVar9,*(undefined8 *)
                                            (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                    }
                    lVar9 = *in_stack_000000b8;
                    if (lVar9 == 0) goto LAB_03168190;
                    lVar11 = *(long *)(lVar9 + 0x10);
                    lVar12 = *(long *)PTR_DAT_069ff178;
                    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                    if (lVar11 == 0) goto LAB_03168190;
                    uVar43 = *(uint *)(lVar9 + 0x18);
                    if (uVar43 < *(uint *)(lVar11 + 0x18)) {
                      *(uint *)(lVar9 + 0x18) = uVar43 + 1;
                      *(undefined4 *)(lVar11 + (long)(int)uVar43 * 4 + 0x20) = 0;
                    }
                    else {
                      FUN_04059d64(0,lVar9,*(undefined8 *)
                                            (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                    }
                  }
                  puVar23 = (undefined8 *)PTR_DAT_06a0b440;
                  puVar2 = PTR_DAT_069fd088;
                  unaff_x28 = (long *)PTR_DAT_069fb978;
                  lVar9 = *(long *)(unaff_x26 + 0x20);
                  if (lVar9 == 0) goto LAB_03168190;
                  unaff_x29 = &PTR_FUN_06db4000;
                  if (0 < *(int *)(lVar9 + 0x18)) {
                    fVar40 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,
                                                 *(undefined8 *)PTR_DAT_069fd088);
                    if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
                    fVar30 = fStack0000000000000128 - *(float *)(lVar19 + 0x24);
                    fStack000000000000012c = fStack000000000000012c - *(float *)(lVar19 + 0x28);
                    fStack0000000000000128 = fStack00000000000000a4;
                    if (fStack00000000000000a4 <=
                        fStack000000000000012c * fStack000000000000012c +
                        (fVar40 - *pfVar29) * (fVar40 - *pfVar29) + fVar30 * fVar30) {
                      lVar9 = *(long *)(unaff_x26 + 0x20);
                      if (lVar9 == 0) goto LAB_03168190;
                      fVar40 = fStack00000000000000a4;
                      fVar30 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,
                                                   *(undefined8 *)puVar2);
                      if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
                      fVar37 = *pfVar29;
                      fVar45 = *(float *)(lVar19 + 0x24);
                      fVar42 = *(float *)(lVar19 + 0x28);
                      if (DAT_06db4c77 == '\0') {
                        FUN_02d965b8(PTR_DAT_069fbb48);
                        DAT_06db4c77 = '\x01';
                      }
                      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                      }
                      puVar3 = PTR_DAT_069fbee0;
                      fVar40 = fVar40 - fVar45;
                      lVar9 = *(long *)(unaff_x26 + 0x20);
                      fStack000000000000012c = fStack000000000000012c - fVar42;
                      if (in_stack_000000b0 <=
                          SQRT(fStack000000000000012c * fStack000000000000012c +
                               (fVar30 - fVar37) * (fVar30 - fVar37) + fVar40 * fVar40)) {
                        if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
                        if (lVar9 == 0) goto LAB_03168190;
                        lVar11 = *(long *)(lVar9 + 0x10);
                        fVar40 = *pfVar29;
                        fVar30 = *(float *)(lVar19 + 0x24);
                        fStack000000000000012c = *(float *)(lVar19 + 0x28);
                        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                        if (lVar11 == 0) goto LAB_03168190;
                        uVar43 = *(uint *)(lVar9 + 0x18);
                        if (uVar43 < *(uint *)(lVar11 + 0x18)) {
                          lVar11 = lVar11 + (long)(int)uVar43 * 0xc;
                          *(uint *)(lVar9 + 0x18) = uVar43 + 1;
                          *(float *)(lVar11 + 0x20) = fVar40;
                          *(float *)(lVar11 + 0x24) = fVar30;
                          *(float *)(lVar11 + 0x28) = fStack000000000000012c;
                        }
                        else {
                          FUN_0409f624(lVar9,*(undefined8 *)
                                              (*(long *)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0) +
                                              0x70));
                        }
                        fVar40 = fStack00000000000001d4;
                        lVar9 = *(long *)(unaff_x26 + 0x20);
                        if (lVar9 == 0) goto LAB_03168190;
                        fVar37 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,
                                                     *(undefined8 *)puVar2);
                        if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
                        fVar42 = *pfVar29;
                        fVar47 = *(float *)(lVar19 + 0x24);
                        fVar45 = *(float *)(lVar19 + 0x28);
                        if (DAT_06db4c77 == '\0') {
                          FUN_02d965b8(PTR_DAT_069fbb48);
                          DAT_06db4c77 = '\x01';
                        }
                        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                          thunk_FUN_02df485c();
                        }
                        fVar30 = fVar30 - fVar47;
                        lVar9 = *(long *)(unaff_x26 + 0x28);
                        fStack000000000000012c = fStack000000000000012c - fVar45;
                        fStack0000000000000128 = fStack000000000000012c * fStack000000000000012c;
                        fStack00000000000001d4 =
                             fVar40 + SQRT(fStack0000000000000128 +
                                           (fVar37 - fVar42) * (fVar37 - fVar42) + fVar30 * fVar30);
                        if (lVar9 == 0) goto LAB_03168190;
                        lVar19 = *(long *)(lVar9 + 0x10);
                        lVar11 = *(long *)PTR_DAT_069ff178;
                        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                        if (lVar19 == 0) goto LAB_03168190;
                        uVar43 = *(uint *)(lVar9 + 0x18);
                        if (uVar43 < *(uint *)(lVar19 + 0x18)) {
                          *(uint *)(lVar9 + 0x18) = uVar43 + 1;
                          *(undefined4 *)(lVar19 + (long)(int)uVar43 * 4 + 0x20) = 0x3f800000;
                        }
                        else {
                          FUN_04059d64(0x3f800000,lVar9,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                        }
                        lVar9 = *in_stack_000000e0;
                        if (lVar9 == 0) goto LAB_03168190;
                        lVar19 = *(long *)(lVar9 + 0x10);
                        lVar11 = *(long *)PTR_DAT_069ff178;
                        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                        if (lVar19 == 0) goto LAB_03168190;
                        uVar43 = *(uint *)(lVar9 + 0x18);
                        if (uVar43 < *(uint *)(lVar19 + 0x18)) {
                          *(uint *)(lVar9 + 0x18) = uVar43 + 1;
                          *(undefined4 *)(lVar19 + (long)(int)uVar43 * 4 + 0x20) = 0;
                        }
                        else {
                          FUN_04059d64(0,lVar9,*(undefined8 *)
                                                (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
                          ;
                        }
                      }
                      else {
                        if (lVar9 == 0) goto LAB_03168190;
                        if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
                        fStack000000000000012c = *(float *)(lVar19 + 0x28);
                        fStack0000000000000128 = *(float *)(lVar19 + 0x24);
                        FUN_0409f350(*pfVar29,lVar9,*(int *)(lVar9 + 0x18) + -1,
                                     *(undefined8 *)PTR_DAT_06a0b7d0);
                        lVar9 = *(long *)(unaff_x26 + 0x28);
                        if (lVar9 == 0) goto LAB_03168190;
                        FUN_04059abc(0x3f800000,lVar9,*(int *)(lVar9 + 0x18) + -1,
                                     *(undefined8 *)PTR_DAT_06a0b5c0);
                      }
                    }
                  }
                  lVar9 = *(long *)(unaff_x26 + 0x20);
                  if (lVar9 == 0) goto LAB_03168190;
                  iVar25 = *(int *)(lVar9 + 0x18);
                  in_stack_00000278 =
                       (float)FUN_0409f2f4(lVar9,iVar25 + -1,*(undefined8 *)PTR_DAT_069fd088);
                  lVar9 = *(long *)(in_stack_00000148 + 0x2c8);
                  *(float *)(in_stack_00000148 + 0x2c0) =
                       *(float *)(in_stack_00000148 + 0x2c0) + fStack00000000000001d4;
                  if (lVar9 == 0) goto LAB_03168190;
                  lVar19 = *(long *)(lVar9 + 0x10);
                  lVar11 = *(long *)PTR_DAT_069fc3e0;
                  *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                  if (lVar19 == 0) goto LAB_03168190;
                  uVar43 = *(uint *)(lVar9 + 0x18);
                  iStack00000000000000d4 = iVar25 + iStack00000000000000d4;
                  if (uVar43 < *(uint *)(lVar19 + 0x18)) {
                    *(uint *)(lVar9 + 0x18) = uVar43 + 1;
                    *(int *)(lVar19 + (long)(int)uVar43 * 4 + 0x20) = iStack00000000000000d4;
                  }
                  else {
                    FUN_03fb3e1c(lVar9,iStack00000000000000d4,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                     (lVar9 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                           unaff_x20 & 0xffffffff,*puVar23), lVar9 == 0))
                  goto LAB_03168190;
                  iStack0000000000000108 = *(int *)(lVar9 + 0x6c);
                  in_stack_0000027c = fStack0000000000000128;
                  in_stack_00000280 = fStack000000000000012c;
                  in_stack_00000130 = in_stack_00000278;
                }
LAB_0316c620:
                if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                   (lVar9 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                         *puVar23), fVar40 = fStack00000000000001d4, lVar9 == 0))
                goto LAB_03168190;
                if (*(char *)(lVar9 + 0xb8) != '\0') {
                  if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
                  uVar10 = *(undefined8 *)(in_stack_00000148 + 0x20);
                  uVar44 = *(undefined8 *)(unaff_x26 + 0x28);
                  uVar41 = *(undefined4 *)(in_stack_00000148 + 0x128);
                  lVar9 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),uVar39 & 0xffffffff,
                                       *(undefined8 *)PTR_DAT_06a0b440);
                  if (lVar9 == 0) goto LAB_03168190;
                  FUN_031098f4(uVar41,uStack000000000000006c,fVar40,uVar10,&stack0x00000238,uVar44,
                               &stack0x00000248,*(undefined1 *)(lVar9 + 0xb8),
                               *(undefined8 *)(unaff_x26 + 0x78),in_stack_00000070,in_stack_000000e0
                              );
                  puVar23 = (undefined8 *)PTR_DAT_06a0b440;
                }
                if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
                FUN_0409f858(*(long *)(unaff_x26 + 0x78),*(undefined8 *)(unaff_x26 + 0x20),
                             *(undefined8 *)PTR_DAT_06a0b3a0);
                if (*in_stack_00000078 == 0) goto LAB_03168190;
                FUN_04059f70(*in_stack_00000078,*(undefined8 *)(unaff_x26 + 0x28),
                             *(undefined8 *)PTR_DAT_06a0b3d8);
                fVar30 = fStack0000000000000088;
                fVar40 = in_stack_00000080._4_4_;
                FUN_0316fb80(fStack000000000000008c,in_stack_00000148,extraout_x1,
                             uVar39 & 0xffffffff,in_stack_00000170,&stack0x00000268,0,
                             *(undefined8 *)(unaff_x26 + 0x78));
                if (iVar27 + 3 < *(int *)(in_stack_00000170 + 0x18)) {
                  FUN_0317018c(in_stack_00000148,*(undefined8 *)(in_stack_00000148 + 0x68),
                               uVar39 & 0xffffffff,in_stack_00000170,&stack0x00000258,0);
                }
                puVar3 = PTR_DAT_069ff178;
                puVar2 = PTR_DAT_069fd088;
                lVar9 = *in_stack_00000090;
                if (lVar9 == 0) goto LAB_03168190;
                lVar19 = *(long *)(lVar9 + 0x10);
                fVar37 = *in_stack_000000d8;
                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                if (lVar19 == 0) goto LAB_03168190;
                uVar43 = *(uint *)(lVar9 + 0x18);
                if (uVar43 < *(uint *)(lVar19 + 0x18)) {
                  *(uint *)(lVar9 + 0x18) = uVar43 + 1;
                  *(float *)(lVar19 + (long)(int)uVar43 * 4 + 0x20) = fVar37;
                }
                else {
                  FUN_04059d64(lVar9,*(undefined8 *)
                                      (*(long *)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0) + 0x70));
                }
                if ((long)uVar39 < (long)*(int *)(in_stack_00000098 + 0x18)) {
                  lVar9 = FUN_0400ff1c(in_stack_00000098,uVar39 & 0xffffffff,*puVar23);
                  lVar19 = FUN_0400ff1c(in_stack_00000098,uVar39 & 0xffffffff,*puVar23);
                  lVar11 = *(long *)(unaff_x26 + 0x78);
                  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  fVar37 = (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -1,
                                               *(undefined8 *)puVar2);
                  lVar11 = *(long *)(unaff_x26 + 0x78);
                  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  fVar42 = fVar30;
                  fVar45 = fVar40;
                  fVar47 = (float)FUN_0409f2f4(lVar11,*(int *)(lVar11 + 0x18) + -2,
                                               *(undefined8 *)puVar2);
                  if (DAT_06db4c75 == '\0') {
                    FUN_02d965b8(PTR_DAT_069fbb48);
                    DAT_06db4c75 = '\x01';
                  }
                  if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  fVar37 = fVar37 - fVar47;
                  fVar30 = fVar30 - fVar42;
                  fVar40 = fVar40 - fVar45;
                  fVar42 = SQRT(fVar40 * fVar40 + fVar37 * fVar37 + fVar30 * fVar30);
                  if (fVar42 <= DAT_010fd13c) {
                    if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
                      FUN_02d965b8(unaff_x28);
                      *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
                    }
                    pfVar21 = *(float **)(*unaff_x28 + 0xb8);
                    fVar37 = *pfVar21;
                    fVar30 = pfVar21[1];
                    fVar40 = pfVar21[2];
                  }
                  else {
                    fVar37 = fVar37 / fVar42;
                    fVar30 = fVar30 / fVar42;
                    fVar40 = fVar40 / fVar42;
                  }
                  if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  *(float *)(lVar19 + 0x94) = fVar37;
                  *(float *)(lVar19 + 0x98) = fVar30;
                  *(float *)(lVar19 + 0x9c) = fVar40;
                  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  *(float *)(lVar9 + 0x88) = fVar37;
                  *(float *)(lVar9 + 0x8c) = fVar30;
                  *(float *)(lVar9 + 0x90) = fVar40;
                  puVar23 = (undefined8 *)PTR_DAT_06a0b440;
                }
                if (uVar39 < 2) {
                  if (uVar39 == 1) {
                    lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*puVar23);
                    lVar19 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*puVar23);
                    if (*(long *)(unaff_x26 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d96860();
                    }
                    fVar37 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),1,*(undefined8 *)puVar2
                                                );
                    if (*(long *)(unaff_x26 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d96860();
                    }
                    fVar42 = fVar30;
                    fVar45 = fVar40;
                    fVar47 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)puVar2
                                                );
                    if (DAT_06db4c75 == '\0') {
                      FUN_02d965b8(PTR_DAT_069fbb48);
                      DAT_06db4c75 = '\x01';
                    }
                    if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                    }
                    fVar37 = fVar37 - fVar47;
                    fVar30 = fVar30 - fVar42;
                    fVar40 = fVar40 - fVar45;
                    fVar42 = SQRT(fVar40 * fVar40 + fVar37 * fVar37 + fVar30 * fVar30);
                    if (fVar42 <= DAT_010fd13c) {
                      if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
                        FUN_02d965b8(unaff_x28);
                        *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
                      }
                      pfVar21 = *(float **)(*unaff_x28 + 0xb8);
                      fVar37 = *pfVar21;
                      fVar30 = pfVar21[1];
                      fVar40 = pfVar21[2];
                    }
                    else {
                      fVar37 = fVar37 / fVar42;
                      fVar30 = fVar30 / fVar42;
                      fVar40 = fVar40 / fVar42;
                    }
                    if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d96860();
                    }
                    *(float *)(lVar19 + 0x94) = fVar37;
                    *(float *)(lVar19 + 0x98) = fVar30;
                    *(float *)(lVar19 + 0x9c) = fVar40;
                    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d96860();
                    }
                    *(float *)(lVar9 + 0x88) = fVar37;
                    *(float *)(lVar9 + 0x8c) = fVar30;
                    *(float *)(lVar9 + 0x90) = fVar40;
                  }
                }
                else if ((long)uVar39 < (long)*(int *)(in_stack_00000098 + 0x18)) {
                  if (*(long *)(unaff_x26 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  iVar27 = *(int *)(*(long *)(unaff_x26 + 0x78) + 0x18);
                  lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*puVar23);
                  puVar2 = PTR_DAT_069fd088;
                  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  if (*(int *)(lVar9 + 0xbc) + 1 < iVar27) {
                    lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*puVar23);
                    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d96860();
                    }
                    if (*(int *)(lVar9 + 0x6c) != 3) {
                      lVar19 = *(long *)(unaff_x26 + 0x78);
                      lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*puVar23);
                      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02d96860();
                      }
                      if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02d96860();
                      }
                      fVar45 = (float)FUN_0409f2f4(lVar19,*(int *)(lVar9 + 0xbc) + 1,
                                                   *(undefined8 *)puVar2);
                      lVar19 = *(long *)(unaff_x26 + 0x78);
                      fVar37 = fVar30;
                      fVar42 = fVar40;
                      lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*puVar23);
                      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02d96860();
                      }
                      if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02d96860();
                      }
                      fVar47 = (float)FUN_0409f2f4(lVar19,*(undefined4 *)(lVar9 + 0xbc),
                                                   *(undefined8 *)puVar2);
                      lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*puVar23);
                      if (DAT_06db4c75 == '\0') {
                        FUN_02d965b8(PTR_DAT_069fbb48);
                        DAT_06db4c75 = '\x01';
                      }
                      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                      }
                      fVar49 = DAT_010fd13c;
                      fVar45 = fVar45 - fVar47;
                      fVar47 = fVar30 - fVar37;
                      fVar42 = fVar40 - fVar42;
                      fVar40 = SQRT(fVar42 * fVar42 + fVar45 * fVar45 + fVar47 * fVar47);
                      if (fVar40 <= DAT_010fd13c) {
                        if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
                          FUN_02d965b8(unaff_x28);
                          *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
                        }
                        pfVar21 = *(float **)(*unaff_x28 + 0xb8);
                        fVar31 = *pfVar21;
                        fVar47 = pfVar21[1];
                        fVar40 = pfVar21[2];
                      }
                      else {
                        fVar31 = fVar45 / fVar40;
                        fVar47 = fVar47 / fVar40;
                        fVar40 = fVar42 / fVar40;
                      }
                      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02d96860();
                      }
                      *(float *)(lVar9 + 0x88) = fVar31;
                      *(float *)(lVar9 + 0x8c) = fVar47;
                      uVar10 = *puVar23;
                      *(float *)(lVar9 + 0x90) = fVar40;
                      uVar43 = *(uint *)(in_stack_00000098 + 0x18);
                      lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,uVar10);
                      if (uVar39 != uVar43) {
                        fVar30 = fVar37;
                      }
                      if (DAT_06db4c75 == '\0') {
                        FUN_02d965b8(PTR_DAT_069fbb48);
                        DAT_06db4c75 = '\x01';
                      }
                      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                      }
                      fVar30 = fVar30 - fVar37;
                      fVar37 = SQRT(fVar42 * fVar42 + fVar45 * fVar45 + fVar30 * fVar30);
                      if (fVar37 <= fVar49) {
                        if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
                          FUN_02d965b8(unaff_x28);
                          *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
                        }
                        uVar10 = **(undefined8 **)(*unaff_x28 + 0xb8);
                        fVar42 = *(float *)(*(undefined8 **)(*unaff_x28 + 0xb8) + 1);
                      }
                      else {
                        fVar42 = fVar42 / fVar37;
                        uVar10 = CONCAT44(fVar30 / fVar37,fVar45 / fVar37);
                        fVar40 = fVar45;
                      }
                      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02d96860();
                      }
                      *(undefined8 *)(lVar9 + 0x94) = uVar10;
                      *(float *)(lVar9 + 0x9c) = fVar42;
                    }
                  }
                }
                if ((long)uVar39 < (long)*(int *)(in_stack_00000098 + 0x18)) {
                  lVar9 = FUN_0400ff1c(in_stack_00000098,uVar39 & 0xffffffff,*puVar23);
                  lVar19 = FUN_0400ff1c(in_stack_00000098,uVar39 & 0xffffffff,*puVar23);
                  if ((lVar19 == 0) || (lVar9 == 0)) goto LAB_03168190;
                  uVar10 = *(undefined8 *)(lVar19 + 0x48);
                  *(undefined4 *)(lVar9 + 0x5c) = *(undefined4 *)(lVar19 + 0x50);
                  *(undefined8 *)(lVar9 + 0x54) = uVar10;
                }
                if ((long)(*(int *)(in_stack_00000170 + 0x18) + -2) <= (long)unaff_x24) {
                  if (*(char *)(in_stack_00000148 + 0x84) == '\0') {
                    lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                                         *puVar23);
                    if ((*(long *)(unaff_x26 + 0x78) == 0) || (lVar9 == 0)) goto LAB_03168190;
                    uVar10 = *puVar23;
                    *(undefined4 *)(lVar9 + 0xbc) =
                         *(undefined4 *)(*(long *)(unaff_x26 + 0x78) + 0x18);
                    lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                                         uVar10);
                    if (lVar9 == 0) goto LAB_03168190;
                    uVar10 = *puVar23;
                    *(float *)(lVar9 + 0xc0) = *in_stack_000000d8;
                    lVar9 = FUN_0400ff1c(in_stack_00000098,0,uVar10);
                    if (lVar9 == 0) goto LAB_03168190;
                    uVar10 = *puVar23;
                    *(undefined4 *)(lVar9 + 0xbc) = 0;
                    lVar9 = FUN_0400ff1c(in_stack_00000098,0,uVar10);
                    if (lVar9 == 0) goto LAB_03168190;
                    *(undefined4 *)(lVar9 + 0xc0) = 0;
                    if (2 < *(int *)(in_stack_00000098 + 0x18)) {
                      lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2
                                           ,*puVar23);
                      fVar40 = *in_stack_000000d8;
                      lVar19 = FUN_0400ff1c(in_stack_00000098,
                                            *(int *)(in_stack_00000098 + 0x18) + -2,*puVar23);
                      if ((lVar19 == 0) || (lVar9 == 0)) goto LAB_03168190;
                      uVar10 = *puVar23;
                      *(float *)(lVar9 + 200) = fVar40 - *(float *)(lVar19 + 0xc0);
                      lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2
                                           ,uVar10);
                      if (lVar9 == 0) goto LAB_03168190;
                      fVar40 = *(float *)(lVar9 + 200);
                      lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2
                                           ,*puVar23);
                      lVar19 = FUN_0400ff1c(in_stack_00000098,
                                            *(int *)(in_stack_00000098 + 0x18) + -2,*puVar23);
                      if (1000.0 <= fVar40) {
                        if (lVar19 == 0) goto LAB_03168190;
                        fStack00000000000001d0 = *(float *)(lVar19 + 200) / 1000.0;
                        uVar10 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
                        uVar10 = FUN_05362cb4(uVar10,*(undefined8 *)PTR_DAT_06a0c488,0);
                      }
                      else {
                        if (lVar19 == 0) goto LAB_03168190;
                        uVar10 = FUN_054fad00(lVar19 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
                        uVar10 = FUN_05362cb4(uVar10,*(undefined8 *)PTR_DAT_06a0c4f0,0);
                      }
                      if (lVar9 != 0) {
                        *(undefined8 *)(lVar9 + 0xd0) = uVar10;
                        LeanTween__value((undefined8 *)(lVar9 + 0xd0),uVar10);
                        lVar9 = FUN_0400ff1c(in_stack_00000098,
                                             *(int *)(in_stack_00000098 + 0x18) + -2,*puVar23);
                        if (lVar9 != 0) {
                          fVar30 = *(float *)(lVar9 + 0x4c);
                          lVar9 = FUN_0400ff1c(in_stack_00000098,
                                               *(int *)(in_stack_00000098 + 0x18) + -1,*puVar23);
                          if (lVar9 != 0) {
                            fVar37 = *(float *)(lVar9 + 0x4c);
                            fVar40 = fVar30 - fVar37;
                            if (DAT_06db4ece == '\0') {
                              FUN_02d965b8(PTR_DAT_069fbb48);
                              DAT_06db4ece = '\x01';
                            }
                            puVar2 = PTR_DAT_069fbb48;
                            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                              thunk_FUN_02df485c();
                            }
                            fVar45 = 0.0;
                            fVar42 = SQRT((unaff_s9 * unaff_s9 + fVar40 * fVar40) * DAT_010fd194);
                            fVar40 = DAT_010fcd14;
                            if (DAT_010fcd14 <= fVar42) {
                              fVar40 = -1.0;
                              fVar42 = (unaff_s9 * 0.0 + ABS(fVar30 - fVar37) * 50.0 + 0.0) / fVar42
                              ;
                              fVar30 = 1.0;
                              if (fVar42 <= 1.0) {
                                fVar30 = fVar42;
                              }
                              fVar37 = -1.0;
                              if (-1.0 <= fVar42) {
                                fVar37 = fVar30;
                              }
                              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                                fVar40 = -1.0;
                                thunk_FUN_02df485c();
                              }
                              dVar36 = acos((double)fVar37);
                              fVar45 = (float)dVar36 * DAT_010fcf40;
                            }
                            fVar45 = 90.0 - fVar45;
                            lVar9 = FUN_0400ff1c(in_stack_00000098,
                                                 *(int *)(in_stack_00000098 + 0x18) + -2,*puVar23);
                            if (fVar45 <= 10.0) {
                              uVar10 = FUN_054fad00(&stack0x00000234,*(undefined8 *)PTR_DAT_06a0c498
                                                    ,0);
                            }
                            else {
                              dVar36 = modf((double)fVar45,(double *)&stack0x00000298);
                              if (0.0 <= fVar45) {
                                if (dVar36 == 0.5) {
                                  dVar36 = *(double *)(unaff_x26 + 0x80);
                                  fVar40 = 1.0;
                                  goto LAB_0316e5fc;
                                }
                                fStack00000000000001d0 = (float)(int)(fVar45 + 0.5);
                              }
                              else if (dVar36 == -0.5) {
                                dVar36 = *(double *)(unaff_x26 + 0x80);
                                fVar40 = -1.0;
LAB_0316e5fc:
                                fStack00000000000001d0 = (float)dVar36;
                                if (((long)dVar36 & 1U) != 0) {
                                  fStack00000000000001d0 = (float)dVar36 + fVar40;
                                }
                              }
                              else {
                                fStack00000000000001d0 = (float)(int)(fVar45 + -0.5);
                              }
                              uVar10 = FUN_054fabf8(&stack0x000001d0,0);
                            }
                            if (lVar9 != 0) {
                              *(undefined8 *)(lVar9 + 0xd8) = uVar10;
                              LeanTween__value((undefined8 *)(lVar9 + 0xd8),uVar10);
                              lVar9 = FUN_0400ff1c(in_stack_00000098,
                                                   *(int *)(in_stack_00000098 + 0x18) + -2,*puVar23)
                              ;
                              if (lVar9 != 0) {
                                fVar30 = *(float *)(lVar9 + 0x4c);
                                lVar9 = FUN_0400ff1c(in_stack_00000098,
                                                     *(int *)(in_stack_00000098 + 0x18) + -1,
                                                     *puVar23);
                                if (lVar9 != 0) {
                                  fVar37 = *(float *)(lVar9 + 0x4c);
                                  lVar9 = FUN_0400ff1c(in_stack_00000098,
                                                       *(int *)(in_stack_00000098 + 0x18) + -2,
                                                       *puVar23);
                                  if (lVar9 != 0) {
                                    fVar42 = *(float *)(lVar9 + 0x48);
                                    lVar9 = FUN_0400ff1c(in_stack_00000098,
                                                         *(int *)(in_stack_00000098 + 0x18) + -2,
                                                         *puVar23);
                                    if (lVar9 != 0) {
                                      fVar45 = *(float *)(lVar9 + 0x50);
                                      lVar9 = FUN_0400ff1c(in_stack_00000098,
                                                           *(int *)(in_stack_00000098 + 0x18) + -1,
                                                           *puVar23);
                                      if (lVar9 != 0) {
                                        fVar47 = *(float *)(lVar9 + 0x48);
                                        lVar9 = FUN_0400ff1c(in_stack_00000098,
                                                             *(int *)(in_stack_00000098 + 0x18) + -1
                                                             ,*puVar23);
                                        if (lVar9 != 0) {
                                          fVar49 = *(float *)(lVar9 + 0x50);
                                          if (DAT_06db4c77 == '\0') {
                                            FUN_02d965b8(PTR_DAT_069fbb48);
                                            DAT_06db4c77 = '\x01';
                                          }
                                          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                                            thunk_FUN_02df485c();
                                          }
                                          fVar45 = fVar45 - fVar49;
                                          fVar42 = fVar42 - fVar47;
                                          lVar9 = FUN_0400ff1c(in_stack_00000098,
                                                               *(int *)(in_stack_00000098 + 0x18) +
                                                               -2,*puVar23);
                                          fStack00000000000001d0 =
                                               (ABS(fVar30 - fVar37) /
                                               SQRT(fVar42 * fVar42 + fVar45 * fVar45)) * 100.0;
                                          uVar10 = FUN_054fad00(&stack0x000001d0,
                                                                *(undefined8 *)PTR_DAT_06a0c498,0);
                                          if (lVar9 != 0) goto LAB_0316ea58;
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
                    lVar9 = FUN_0400ff1c(in_stack_00000098,0,*puVar23);
                    if ((*(long *)(unaff_x26 + 0x78) == 0) || (lVar9 == 0)) goto LAB_03168190;
                    uVar10 = *puVar23;
                    *(undefined4 *)(lVar9 + 0xbc) =
                         *(undefined4 *)(*(long *)(unaff_x26 + 0x78) + 0x18);
                    lVar9 = FUN_0400ff1c(in_stack_00000098,0,uVar10);
                    if (lVar9 == 0) goto LAB_03168190;
                    *(float *)(lVar9 + 0xc0) = *in_stack_000000d8;
                    if (2 < *(int *)(in_stack_00000098 + 0x18)) {
                      lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1
                                           ,*puVar23);
                      fVar40 = *in_stack_000000d8;
                      lVar19 = FUN_0400ff1c(in_stack_00000098,
                                            *(int *)(in_stack_00000098 + 0x18) + -1,*puVar23);
                      if ((lVar19 == 0) || (lVar9 == 0)) goto LAB_03168190;
                      uVar10 = *puVar23;
                      *(float *)(lVar9 + 200) = fVar40 - *(float *)(lVar19 + 0xc0);
                      lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1
                                           ,uVar10);
                      if (lVar9 == 0) goto LAB_03168190;
                      fVar40 = *(float *)(lVar9 + 200);
                      lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1
                                           ,*puVar23);
                      lVar19 = FUN_0400ff1c(in_stack_00000098,
                                            *(int *)(in_stack_00000098 + 0x18) + -1,*puVar23);
                      if (1000.0 <= fVar40) {
                        if (lVar19 == 0) goto LAB_03168190;
                        fStack00000000000001d0 = *(float *)(lVar19 + 200) / 1000.0;
                        uVar10 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
                        uVar10 = FUN_05362cb4(uVar10,*(undefined8 *)PTR_DAT_06a0c488,0);
                      }
                      else {
                        if (lVar19 == 0) goto LAB_03168190;
                        uVar10 = FUN_054fad00(lVar19 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
                        uVar10 = FUN_05362cb4(uVar10,*(undefined8 *)PTR_DAT_06a0c4f0,0);
                      }
                      if (lVar9 == 0) goto LAB_03168190;
                      *(undefined8 *)(lVar9 + 0xd0) = uVar10;
                      LeanTween__value((undefined8 *)(lVar9 + 0xd0),uVar10);
                      lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1
                                           ,*puVar23);
                      if (lVar9 == 0) goto LAB_03168190;
                      fVar30 = *(float *)(lVar9 + 0x4c);
                      lVar9 = FUN_0400ff1c(in_stack_00000098,0,*puVar23);
                      if (lVar9 == 0) goto LAB_03168190;
                      fVar37 = *(float *)(lVar9 + 0x4c);
                      fVar40 = fVar30 - fVar37;
                      if (DAT_06db4ece == '\0') {
                        FUN_02d965b8(PTR_DAT_069fbb48);
                        DAT_06db4ece = '\x01';
                      }
                      puVar2 = PTR_DAT_069fbb48;
                      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                      }
                      fVar45 = 0.0;
                      fVar42 = SQRT((unaff_s9 * unaff_s9 + fVar40 * fVar40) * DAT_010fd194);
                      fVar40 = DAT_010fcd14;
                      if (DAT_010fcd14 <= fVar42) {
                        fVar40 = -1.0;
                        fVar42 = (unaff_s9 * 0.0 + ABS(fVar30 - fVar37) * 50.0 + 0.0) / fVar42;
                        fVar30 = 1.0;
                        if (fVar42 <= 1.0) {
                          fVar30 = fVar42;
                        }
                        fVar37 = -1.0;
                        if (-1.0 <= fVar42) {
                          fVar37 = fVar30;
                        }
                        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                          fVar40 = -1.0;
                          thunk_FUN_02df485c();
                        }
                        dVar36 = acos((double)fVar37);
                        fVar45 = (float)dVar36 * DAT_010fcf40;
                      }
                      fVar45 = 90.0 - fVar45;
                      lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1
                                           ,*puVar23);
                      if (fVar45 <= 10.0) {
                        uVar10 = FUN_054fad00(&stack0x00000234,*(undefined8 *)PTR_DAT_06a0c498,0);
                      }
                      else {
                        dVar36 = modf((double)fVar45,(double *)&stack0x00000298);
                        if (0.0 <= fVar45) {
                          if (dVar36 == 0.5) {
                            dVar36 = *(double *)(unaff_x26 + 0x80);
                            fVar40 = 1.0;
                            goto LAB_0316e5d0;
                          }
                          fStack00000000000001d0 = (float)(int)(fVar45 + 0.5);
                        }
                        else if (dVar36 == -0.5) {
                          dVar36 = *(double *)(unaff_x26 + 0x80);
                          fVar40 = -1.0;
LAB_0316e5d0:
                          fStack00000000000001d0 = (float)dVar36;
                          if (((long)dVar36 & 1U) != 0) {
                            fStack00000000000001d0 = (float)dVar36 + fVar40;
                          }
                        }
                        else {
                          fStack00000000000001d0 = (float)(int)(fVar45 + -0.5);
                        }
                        uVar10 = FUN_054fabf8(&stack0x000001d0,0);
                      }
                      if (lVar9 == 0) goto LAB_03168190;
                      *(undefined8 *)(lVar9 + 0xd8) = uVar10;
                      LeanTween__value((undefined8 *)(lVar9 + 0xd8),uVar10);
                      lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2
                                           ,*puVar23);
                      if (lVar9 == 0) goto LAB_03168190;
                      fVar30 = *(float *)(lVar9 + 0x4c);
                      lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1
                                           ,*puVar23);
                      if (lVar9 == 0) goto LAB_03168190;
                      fVar37 = *(float *)(lVar9 + 0x4c);
                      lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2
                                           ,*puVar23);
                      if (lVar9 == 0) goto LAB_03168190;
                      fVar42 = *(float *)(lVar9 + 0x48);
                      lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2
                                           ,*puVar23);
                      if (lVar9 == 0) goto LAB_03168190;
                      fVar45 = *(float *)(lVar9 + 0x50);
                      lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1
                                           ,*puVar23);
                      if (lVar9 == 0) goto LAB_03168190;
                      fVar47 = *(float *)(lVar9 + 0x48);
                      lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1
                                           ,*puVar23);
                      if (lVar9 == 0) goto LAB_03168190;
                      fVar49 = *(float *)(lVar9 + 0x50);
                      if (DAT_06db4c77 == '\0') {
                        FUN_02d965b8(PTR_DAT_069fbb48);
                        DAT_06db4c77 = '\x01';
                      }
                      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                      }
                      fVar45 = fVar45 - fVar49;
                      fVar42 = fVar42 - fVar47;
                      lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1
                                           ,*puVar23);
                      fStack00000000000001d0 =
                           (ABS(fVar30 - fVar37) / SQRT(fVar42 * fVar42 + fVar45 * fVar45)) * 100.0;
                      uVar10 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c498,0);
                      if (lVar9 == 0) goto LAB_03168190;
LAB_0316ea58:
                      *(undefined8 *)(lVar9 + 0xe0) = uVar10;
                      LeanTween__value((undefined8 *)(lVar9 + 0xe0),uVar10);
                    }
                  }
                  fVar30 = 1000.0;
                  if (1000.0 <= *in_stack_000000d8) {
                    fVar30 = 1000.0;
                    fStack00000000000001d0 = *in_stack_000000d8 / 1000.0;
                    uVar10 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
                    puVar15 = (undefined8 *)PTR_DAT_06a0c488;
                  }
                  else {
                    uVar10 = FUN_054fad00(in_stack_000000d8,*(undefined8 *)PTR_DAT_06a0c498,0);
                    puVar15 = (undefined8 *)PTR_DAT_06a0c4f0;
                  }
                  uVar10 = FUN_05362cb4(uVar10,*puVar15,0);
                  *(undefined8 *)(in_stack_00000148 + 0x2d0) = uVar10;
                  LeanTween__value(in_stack_00000148 + 0x2d0,uVar10);
                  if (*(int *)(in_stack_00000098 + 0x18) == 2) {
                    lVar9 = FUN_0400ff1c(in_stack_00000098,0,*puVar23);
                    if (lVar9 == 0) goto LAB_03168190;
                    fVar37 = *(float *)(lVar9 + 200);
                    lVar9 = FUN_0400ff1c(in_stack_00000098,0,*puVar23);
                    lVar19 = FUN_0400ff1c(in_stack_00000098,0,*puVar23);
                    if (1000.0 <= fVar37) {
                      if (lVar19 == 0) goto LAB_03168190;
                      fVar30 = 1000.0;
                      fStack00000000000001d0 = *(float *)(lVar19 + 200) / 1000.0;
                      uVar10 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
                      uVar10 = FUN_05362cb4(uVar10,*(undefined8 *)PTR_DAT_06a0c488,0);
                    }
                    else {
                      if (lVar19 == 0) goto LAB_03168190;
                      uVar10 = FUN_054fad00(lVar19 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
                      uVar10 = FUN_05362cb4(uVar10,*(undefined8 *)PTR_DAT_06a0c4f0,0);
                    }
                    if (lVar9 == 0) goto LAB_03168190;
                    *(undefined8 *)(lVar9 + 0xd0) = uVar10;
                    LeanTween__value((undefined8 *)(lVar9 + 0xd0),uVar10);
                  }
                  if (*(char *)(in_stack_00000148 + 0x84) == '\0') {
                    lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                                         *puVar23);
                    if (lVar9 == 0) goto LAB_03168190;
                    *(undefined8 *)(lVar9 + 0xd0) = *(undefined8 *)PTR_DAT_069fcde0;
                    LeanTween__value();
                  }
                  puVar3 = PTR_DAT_06a0b440;
                  puVar2 = PTR_DAT_069fd088;
                  fVar37 = fVar30;
                  if (iStack0000000000000058 == 0) goto LAB_0316ee54;
                  if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
                  fVar42 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,
                                               *(undefined8 *)PTR_DAT_069fd088);
                  if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
                  FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)puVar2);
                  lVar9 = FUN_0400ff1c(in_stack_00000098,0,*(undefined8 *)puVar3);
                  puVar4 = PTR_DAT_06a0b7d0;
                  puVar3 = PTR_DAT_069fbb48;
                  if (lVar9 == 0) goto LAB_03168190;
                  lVar19 = *(long *)(unaff_x26 + 0x78);
                  fVar37 = *(float *)(lVar9 + 200) * 0.5;
                  fVar45 = 5.0;
                  if (fVar37 <= 5.0) {
                    fVar45 = fVar37;
                  }
                  if (lVar19 == 0) goto LAB_03168190;
                  uVar17 = (ulong)(uint)fStack0000000000000054;
                  iVar27 = 1;
                  fVar42 = fStack0000000000000050 * 10.0 + fVar42;
                  uVar39 = (ulong)(uint)fVar42;
                  fVar47 = fStack0000000000000054 * 10.0 + fVar40;
                  fVar49 = 0.0;
                  goto LAB_0316ecc4;
                }
                fStack00000000000001d4 = 0.0;
                lVar9 = FUN_0400ff1c(in_stack_00000098,uVar39 & 0xffffffff,*puVar23);
                if ((*(long *)(unaff_x26 + 0x78) == 0) || (lVar9 == 0)) goto LAB_03168190;
                uVar10 = *puVar23;
                *(undefined4 *)(lVar9 + 0xbc) = *(undefined4 *)(*(long *)(unaff_x26 + 0x78) + 0x18);
                lVar9 = FUN_0400ff1c(in_stack_00000098,uVar39 & 0xffffffff,uVar10);
                if (lVar9 == 0) goto LAB_03168190;
                *(float *)(lVar9 + 0xc0) = *in_stack_000000d8;
                unaff_x20 = uVar39;
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
    fVar33 = fVar37;
    fVar34 = fVar40;
    fVar32 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar27,*(undefined8 *)puVar2);
    if (DAT_06db4c77 == '\0') {
      FUN_02d965b8(puVar3);
      DAT_06db4c77 = '\x01';
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    fVar33 = fVar37 - fVar33;
    fVar40 = fVar40 - fVar34;
    fVar37 = fVar40 * fVar40;
    fVar49 = fVar49 + SQRT(fVar37 + (fVar31 - fVar32) * (fVar31 - fVar32) + fVar33 * fVar33);
    if (fVar45 < fVar49) goto LAB_0316ee54;
    if (*(long *)(unaff_x26 + 0x78) == 0) break;
    uVar41 = FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)puVar2);
    if (*(long *)(unaff_x26 + 0x78) == 0) break;
    FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar27,*(undefined8 *)puVar2);
    fVar37 = (float)FUN_031765b0(uVar41,fVar37,fVar40,fVar42,fVar30,fVar47,0);
    if (*(long *)(unaff_x26 + 0x78) == 0) break;
    fVar33 = fVar40;
    fVar34 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar27,*(undefined8 *)puVar2);
    fVar32 = fVar49 / fVar45;
    fVar31 = 1.0;
    if (fVar32 <= 1.0) {
      fVar31 = fVar32;
    }
    uVar39 = (ulong)(uint)fVar31;
    fVar35 = 0.0;
    if (0.0 <= fVar32) {
      fVar35 = fVar31;
    }
    if (*(long *)(unaff_x26 + 0x78) == 0) break;
    FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar27,*(undefined8 *)puVar2);
    if (*(long *)(unaff_x26 + 0x78) == 0) break;
    uVar17 = (ulong)(uint)(fVar40 + fVar35 * (fVar33 - fVar40));
    FUN_0409f350(fVar37 + fVar35 * (fVar34 - fVar37),*(long *)(unaff_x26 + 0x78),iVar27,
                 *(undefined8 *)puVar4);
    lVar19 = *(long *)(unaff_x26 + 0x78);
    iVar27 = iVar27 + 1;
    if (lVar19 == 0) break;
LAB_0316ecc4:
    fVar40 = (float)uVar17;
    fVar37 = (float)uVar39;
    if (*(int *)(lVar19 + 0x18) <= iVar27) goto LAB_0316ee54;
    fVar31 = (float)FUN_0409f2f4(lVar19,iVar27 + -1,*(undefined8 *)puVar2);
    if (*(long *)(unaff_x26 + 0x78) == 0) break;
  }
  goto LAB_03168190;
code_r0x03169d90:
  if (unaff_x24 == 2) {
    lVar9 = FUN_0400ff1c(in_stack_00000098,0,*puVar23);
    if (lVar9 == 0) goto LAB_03168190;
    unaff_w22 = 0;
    fVar40 = *in_stack_000000d8;
  }
  else {
    unaff_w22 = (int)unaff_x24 + -2;
    lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_w22,*puVar23);
    fVar40 = *in_stack_000000d8;
    lVar19 = FUN_0400ff1c(in_stack_00000098,unaff_w22,*puVar23);
    if ((lVar19 == 0) || (lVar9 == 0)) goto LAB_03168190;
    fVar40 = fVar40 - *(float *)(lVar19 + 0xc0);
  }
  puVar2 = PTR_DAT_06a0b440;
  *(float *)(lVar9 + 200) = fVar40;
  lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_w22,*(undefined8 *)puVar2);
  if (lVar9 == 0) goto LAB_03168190;
  fVar40 = *(float *)(lVar9 + 200);
  lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_w22,*(undefined8 *)puVar2);
  lVar19 = FUN_0400ff1c(in_stack_00000098,unaff_w22,*(undefined8 *)puVar2);
  if (1000.0 <= fVar40) {
    if (lVar19 == 0) goto LAB_03168190;
    fStack00000000000001d0 = *(float *)(lVar19 + 200) / 1000.0;
    uVar10 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
    puVar15 = (undefined8 *)PTR_DAT_06a0c488;
  }
  else {
    if (lVar19 == 0) goto LAB_03168190;
    uVar10 = FUN_054fad00(lVar19 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
    puVar15 = (undefined8 *)PTR_DAT_06a0c4f0;
  }
  uVar10 = FUN_05362cb4(uVar10,*puVar15,0);
  if (lVar9 == 0) goto LAB_03168190;
  *(undefined8 *)(lVar9 + 0xd0) = uVar10;
  LeanTween__value((undefined8 *)(lVar9 + 0xd0),uVar10);
  unaff_x19 = (undefined8 *)PTR_DAT_06a0b440;
  lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_w22,*(undefined8 *)PTR_DAT_06a0b440);
  if (lVar9 == 0) goto LAB_03168190;
  unaff_s8 = *(float *)(lVar9 + 0x4c);
  lVar9 = FUN_0400ff1c(in_stack_00000098,uVar39 & 0xffffffff,*unaff_x19);
  if (lVar9 == 0) goto LAB_03168190;
  unaff_s10 = *(float *)(lVar9 + 0x4c);
  if (DAT_06db4ece == '\0') {
    FUN_02d965b8(PTR_DAT_069fbb48);
    DAT_06db4ece = '\x01';
  }
  param_1 = *(long *)PTR_DAT_069fbb48;
  unaff_x25 = in_stack_00000098;
  goto code_r0x03169f38;
LAB_0316ee54:
  puVar2 = PTR_DAT_069fd088;
  if (in_stack_00000048._4_4_ != 0) {
    lVar9 = *(long *)(unaff_x26 + 0x78);
    if (lVar9 == 0) goto LAB_03168190;
    fVar30 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,*(undefined8 *)PTR_DAT_069fd088);
    puVar3 = PTR_DAT_06a0b440;
    if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
    fVar42 = fVar37;
    FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)puVar2);
    lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,
                         *(undefined8 *)puVar3);
    puVar4 = PTR_DAT_06a0b7d0;
    puVar3 = PTR_DAT_069fbb48;
    if (lVar9 == 0) goto LAB_03168190;
    fVar47 = *(float *)(lVar9 + 200) * 0.5;
    fVar45 = 5.0;
    if (fVar47 <= 5.0) {
      fVar45 = fVar47;
    }
    if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
    iVar27 = *(int *)(*(long *)(unaff_x26 + 0x78) + 0x18);
    if (0 < iVar27 + -2) {
      fVar47 = 0.0;
      iVar27 = iVar27 + -1;
      uVar39 = (ulong)(uint)fVar30;
      uVar17 = (ulong)(uint)fVar40;
      do {
        fVar31 = (float)uVar39;
        fVar49 = (float)uVar17;
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        fVar33 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar27,*(undefined8 *)puVar2);
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        iVar27 = iVar27 + -1;
        fVar34 = fVar49;
        fVar32 = fVar31;
        fVar35 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar27,*(undefined8 *)puVar2);
        if (DAT_06db4c77 == '\0') {
          FUN_02d965b8(puVar3);
          DAT_06db4c77 = '\x01';
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        fVar47 = fVar47 + SQRT((fVar31 - fVar32) * (fVar31 - fVar32) +
                               (fVar33 - fVar35) * (fVar33 - fVar35) +
                               (fVar49 - fVar34) * (fVar49 - fVar34));
        if (fVar45 < fVar47) break;
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar27,*(undefined8 *)puVar2);
        fVar49 = fVar40;
        fVar31 = (float)FUN_031765b0(fVar30,fVar37,fVar40,fStack0000000000000060 * 10.0 + fVar30,
                                     fVar42,fStack000000000000005c * 10.0 + fVar40,0);
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        fVar34 = fVar49;
        fVar32 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar27,*(undefined8 *)puVar2);
        fVar35 = fVar47 / fVar45;
        fVar33 = 1.0;
        if (fVar35 <= 1.0) {
          fVar33 = fVar35;
        }
        uVar17 = (ulong)(uint)fVar33;
        fVar46 = 0.0;
        if (0.0 <= fVar35) {
          fVar46 = fVar33;
        }
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar27,*(undefined8 *)puVar2);
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        uVar39 = (ulong)(uint)(fVar49 + fVar46 * (fVar34 - fVar49));
        FUN_0409f350(fVar31 + fVar46 * (fVar32 - fVar31),*(long *)(unaff_x26 + 0x78),iVar27,
                     *(undefined8 *)puVar4);
      } while (1 < iVar27);
    }
  }
  puVar2 = PTR_DAT_06a0b440;
  lVar9 = FUN_0400ff1c(in_stack_00000098,0,*(undefined8 *)PTR_DAT_06a0b440);
  lVar19 = FUN_0400ff1c(in_stack_00000098,0,*(undefined8 *)puVar2);
  if (lVar19 != 0) {
    fVar40 = *(float *)(lVar19 + 0x94);
    lVar19 = FUN_0400ff1c(in_stack_00000098,0,*(undefined8 *)puVar2);
    if (lVar19 != 0) {
      fVar30 = *(float *)(lVar19 + 0x9c);
      if (DAT_06db4c75 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c75 = '\x01';
      }
      puVar3 = PTR_DAT_069fbb48;
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar37 = DAT_010fd13c;
      fVar42 = SQRT(fVar40 * fVar40 + fVar30 * fVar30);
      if (fVar42 <= DAT_010fd13c) {
        if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
          FUN_02d965b8(PTR_DAT_069fb978);
          *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
        }
        uVar10 = **(undefined8 **)(*unaff_x28 + 0xb8);
        fVar30 = *(float *)(*(undefined8 **)(*unaff_x28 + 0xb8) + 1);
      }
      else {
        fVar30 = fVar30 / fVar42;
        uVar10 = CONCAT44(0.0 / fVar42,fVar40 / fVar42);
      }
      if (lVar9 != 0) {
        *(undefined8 *)(lVar9 + 0x94) = uVar10;
        uVar10 = *(undefined8 *)puVar2;
        *(float *)(lVar9 + 0x9c) = fVar30;
        lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,uVar10);
        lVar19 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                              *(undefined8 *)puVar2);
        if (lVar19 != 0) {
          fVar40 = *(float *)(lVar19 + 0x94);
          lVar19 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                                *(undefined8 *)puVar2);
          if (lVar19 != 0) {
            fVar30 = *(float *)(lVar19 + 0x9c);
            if (DAT_06db4c75 == '\0') {
              FUN_02d965b8(PTR_DAT_069fbb48);
              DAT_06db4c75 = '\x01';
            }
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            fVar42 = SQRT(fVar40 * fVar40 + fVar30 * fVar30);
            if (fVar42 <= fVar37) {
              if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
                FUN_02d965b8(PTR_DAT_069fb978);
                *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
              }
              uVar10 = **(undefined8 **)(*unaff_x28 + 0xb8);
              fVar30 = *(float *)(*(undefined8 **)(*unaff_x28 + 0xb8) + 1);
            }
            else {
              fVar30 = fVar30 / fVar42;
              uVar10 = CONCAT44(0.0 / fVar42,fVar40 / fVar42);
            }
            if (lVar9 != 0) {
              uVar44 = *(undefined8 *)(unaff_x26 + 0x78);
              *(undefined8 *)(lVar9 + 0x94) = uVar10;
              *(float *)(lVar9 + 0x9c) = fVar30;
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


