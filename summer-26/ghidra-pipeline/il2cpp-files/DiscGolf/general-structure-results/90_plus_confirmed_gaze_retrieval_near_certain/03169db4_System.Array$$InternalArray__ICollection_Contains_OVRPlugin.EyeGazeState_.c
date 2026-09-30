/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.EyeGazeState>
ENTRY_POINT: 03169db4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 167
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


undefined8 System_Array__InternalArray__ICollection_Contains<OVRPlugin_EyeGazeState>(float *param_1)

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
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined8 extraout_x1;
  ulong extraout_x1_00;
  char cVar15;
  long lVar16;
  ulong uVar17;
  float *pfVar18;
  undefined8 *puVar19;
  long lVar20;
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
  float fVar36;
  float fVar37;
  float fVar38;
  double dVar39;
  float fVar40;
  ulong uVar41;
  undefined4 uVar42;
  float fVar43;
  uint uVar44;
  undefined8 uVar45;
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
  float in_stack_00000230;
  long in_stack_00000238;
  long in_stack_00000240;
  undefined4 in_stack_00000268;
  float in_stack_0000026c;
  float in_stack_00000270;
  float in_stack_00000278;
  float in_stack_0000027c;
  float in_stack_00000280;
  
  iStack00000000000000d4 = unaff_w27;
code_r0x03169db4:
  fVar31 = *param_1;
  uVar22 = unaff_x20;
LAB_03169df8:
  puVar2 = PTR_DAT_06a0b440;
  *(float *)(unaff_x23 + 200) = fVar31;
  lVar9 = FUN_0400ff1c(unaff_x25,unaff_w22,*(undefined8 *)puVar2);
  if (lVar9 != 0) {
    fVar31 = *(float *)(lVar9 + 200);
    lVar9 = FUN_0400ff1c(unaff_x25,unaff_w22,*(undefined8 *)puVar2);
    lVar10 = FUN_0400ff1c(unaff_x25,unaff_w22,*(undefined8 *)puVar2);
    if (1000.0 <= fVar31) {
      if (lVar10 == 0) goto LAB_03168190;
      fStack00000000000001d0 = *(float *)(lVar10 + 200) / 1000.0;
      uVar11 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
      puVar19 = (undefined8 *)PTR_DAT_06a0c488;
    }
    else {
      if (lVar10 == 0) goto LAB_03168190;
      uVar11 = FUN_054fad00(lVar10 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
      puVar19 = (undefined8 *)PTR_DAT_06a0c4f0;
    }
    uVar11 = FUN_05362cb4(uVar11,*puVar19,0);
    if (lVar9 != 0) {
      *(undefined8 *)(lVar9 + 0xd0) = uVar11;
      LeanTween__value((undefined8 *)(lVar9 + 0xd0),uVar11);
      puVar2 = PTR_DAT_06a0b440;
      lVar9 = FUN_0400ff1c(unaff_x25,unaff_w22,*(undefined8 *)PTR_DAT_06a0b440);
      if (lVar9 != 0) {
        fVar31 = *(float *)(lVar9 + 0x4c);
        lVar9 = FUN_0400ff1c(unaff_x25,uVar22 & 0xffffffff,*(undefined8 *)puVar2);
        if (lVar9 != 0) {
          fVar43 = *(float *)(lVar9 + 0x4c);
          if (DAT_06db4ece == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4ece = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fVar32 = fVar31 - fVar43;
          fVar40 = 0.0;
          fVar33 = SQRT((in_stack_00000230 * in_stack_00000230 + fVar32 * fVar32) * DAT_010fd194);
          fVar32 = DAT_010fcd14;
          if (DAT_010fcd14 <= fVar33) {
            fVar32 = -1.0;
            fVar33 = (in_stack_00000230 * 0.0 + ABS(fVar31 - fVar43) * 50.0 + 0.0) / fVar33;
            fVar31 = 1.0;
            if (fVar33 <= 1.0) {
              fVar31 = fVar33;
            }
            fVar43 = -1.0;
            if (-1.0 <= fVar33) {
              fVar43 = fVar31;
            }
            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
              fVar32 = -1.0;
              thunk_FUN_02df485c();
            }
            dVar39 = acos((double)fVar43);
            fVar40 = (float)dVar39 * DAT_010fcf40;
          }
          fVar40 = 90.0 - fVar40;
          lVar9 = FUN_0400ff1c(unaff_x25,unaff_w22,*(undefined8 *)puVar2);
          if (fVar40 <= 10.0) {
            uVar11 = FUN_054fad00(&stack0x00000234,*(undefined8 *)PTR_DAT_06a0c498,0);
            puVar19 = (undefined8 *)PTR_DAT_069fd088;
          }
          else {
            dVar39 = modf((double)fVar40,(double *)&stack0x00000298);
            puVar19 = (undefined8 *)PTR_DAT_069fd088;
            if (0.0 <= fVar40) {
              if (dVar39 == 0.5) {
                dVar39 = *(double *)(unaff_x26 + 0x80);
                fVar31 = 1.0;
                goto LAB_0316a098;
              }
              fStack00000000000001d0 = (float)(int)(fVar40 + 0.5);
            }
            else if (dVar39 == -0.5) {
              dVar39 = *(double *)(unaff_x26 + 0x80);
              fVar31 = -1.0;
LAB_0316a098:
              fStack00000000000001d0 = (float)dVar39;
              if (((long)dVar39 & 1U) != 0) {
                fStack00000000000001d0 = (float)dVar39 + fVar31;
              }
            }
            else {
              fStack00000000000001d0 = (float)(int)(fVar40 + -0.5);
            }
            uVar11 = FUN_054fabf8(&stack0x000001d0,0);
          }
          if (lVar9 != 0) {
            *(undefined8 *)(lVar9 + 0xd8) = uVar11;
            LeanTween__value((undefined8 *)(lVar9 + 0xd8),uVar11);
            puVar24 = (undefined8 *)PTR_DAT_06a0b440;
            lVar9 = FUN_0400ff1c(unaff_x25,unaff_w22,*(undefined8 *)PTR_DAT_06a0b440);
            if (lVar9 != 0) {
              fVar31 = *(float *)(lVar9 + 0x4c);
              lVar9 = FUN_0400ff1c(unaff_x25,uVar22 & 0xffffffff,*puVar24);
              if (lVar9 != 0) {
                fVar43 = *(float *)(lVar9 + 0x4c);
                lVar9 = FUN_0400ff1c(unaff_x25,unaff_w22,*puVar24);
                if (lVar9 != 0) {
                  fVar33 = *(float *)(lVar9 + 0x48);
                  lVar9 = FUN_0400ff1c(unaff_x25,unaff_w22,*puVar24);
                  if (lVar9 != 0) {
                    fVar40 = *(float *)(lVar9 + 0x50);
                    lVar9 = FUN_0400ff1c(unaff_x25,uVar22 & 0xffffffff,*puVar24);
                    if (lVar9 != 0) {
                      fVar47 = *(float *)(lVar9 + 0x48);
                      lVar9 = FUN_0400ff1c(unaff_x25,uVar22 & 0xffffffff,*puVar24);
                      if (lVar9 != 0) {
                        fVar49 = *(float *)(lVar9 + 0x50);
                        if (DAT_06db4c77 == '\0') {
                          FUN_02d965b8(PTR_DAT_069fbb48);
                          DAT_06db4c77 = '\x01';
                        }
                        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                          thunk_FUN_02df485c();
                        }
                        fVar40 = fVar40 - fVar49;
                        fVar33 = fVar33 - fVar47;
                        lVar9 = FUN_0400ff1c(unaff_x25,unaff_w22,*puVar24);
                        fVar47 = 100.0;
                        fStack00000000000001d0 =
                             (ABS(fVar31 - fVar43) / SQRT(fVar33 * fVar33 + fVar40 * fVar40)) *
                             100.0;
                        uVar11 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c498,0);
                        if (lVar9 == 0) goto LAB_03168190;
                        *(undefined8 *)(lVar9 + 0xe0) = uVar11;
                        LeanTween__value((undefined8 *)(lVar9 + 0xe0),uVar11);
                        lVar9 = *(long *)(unaff_x26 + 0x78);
                        if (lVar9 == 0) goto LAB_03168190;
                        if (2 < *(int *)(lVar9 + 0x18)) {
                          fStack0000000000000104 =
                               (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,*puVar19);
                          lVar9 = *(long *)(unaff_x26 + 0x78);
                          if (lVar9 == 0) goto LAB_03168190;
                          fVar31 = fVar47;
                          fVar43 = fVar32;
                          fVar33 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -2,*puVar19);
                          if (DAT_06db4c75 == '\0') {
                            FUN_02d965b8(PTR_DAT_069fbb48);
                            DAT_06db4c75 = '\x01';
                          }
                          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                            thunk_FUN_02df485c();
                          }
                          fStack0000000000000104 = fStack0000000000000104 - fVar33;
                          fVar47 = fVar47 - fVar31;
                          fVar32 = fVar32 - fVar43;
                          fStack00000000000000fc =
                               SQRT(fVar32 * fVar32 +
                                    fStack0000000000000104 * fStack0000000000000104 +
                                    fVar47 * fVar47);
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
                            fStack0000000000000104 = fStack0000000000000104 / fStack00000000000000fc
                            ;
                            fStack0000000000000100 = fVar47 / fStack00000000000000fc;
                            fStack00000000000000fc = fVar32 / fStack00000000000000fc;
                          }
                        }
LAB_0316a33c:
                        unaff_x20 = unaff_x24;
                        lVar9 = *(long *)(unaff_x26 + 0x28);
                        if (lVar9 == 0) goto LAB_03168190;
                        lVar10 = *(long *)(unaff_x26 + 0x20);
                        *(undefined4 *)(lVar9 + 0x18) = 0;
                        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                        if (lVar10 == 0) goto LAB_03168190;
                        in_stack_00000230 = 0.0;
                        *(undefined4 *)(lVar10 + 0x18) = 0;
                        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                        if ((*(uint *)(in_stack_00000170 + 0x18) <= unaff_x20) ||
                           (unaff_x24 = unaff_x20 + 1,
                           *(uint *)(in_stack_00000170 + 0x18) <= unaff_x24)) goto LAB_0316f2c4;
                        lVar9 = in_stack_00000170 + unaff_x20 * 0xc;
                        lVar10 = in_stack_00000170 + unaff_x24 * 0xc;
                        fVar43 = *in_stack_000000d8;
                        pfVar21 = (float *)(lVar9 + 0x20);
                        fVar33 = *pfVar21;
                        fVar31 = *(float *)(lVar9 + 0x24);
                        fVar32 = *(float *)(lVar9 + 0x28);
                        pfVar30 = (float *)(lVar10 + 0x20);
                        fVar40 = *pfVar30;
                        fVar49 = *(float *)(lVar10 + 0x24);
                        fVar47 = *(float *)(lVar10 + 0x28);
                        if (DAT_06db4c77 == '\0') {
                          FUN_02d965b8(PTR_DAT_069fbb48);
                          DAT_06db4c77 = '\x01';
                        }
                        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                          thunk_FUN_02df485c();
                        }
                        if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                           (lVar12 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                  uVar22 & 0xffffffff,*puVar24), lVar12 == 0))
                        goto LAB_03168190;
                        fVar31 = fVar31 - fVar49;
                        fVar32 = fVar32 - fVar47;
                        uVar41 = (ulong)(uint)fVar32;
                        uVar17 = (ulong)(uint)(fVar32 * fVar32);
                        fVar43 = fVar43 + SQRT(fVar32 * fVar32 +
                                               (fVar33 - fVar40) * (fVar33 - fVar40) +
                                               fVar31 * fVar31);
                        iVar28 = (int)unaff_x20;
                        if (*(int *)(lVar12 + 0x6c) == 0) {
                          if ((*(uint *)(in_stack_00000170 + 0x18) <= unaff_x20) ||
                             (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24)) goto LAB_0316f2c4;
                          fVar33 = *pfVar21;
                          fVar31 = *(float *)(lVar9 + 0x24);
                          fVar40 = *pfVar30;
                          fVar49 = *(float *)(lVar10 + 0x24);
                          fVar32 = *(float *)(lVar9 + 0x28);
                          fVar47 = *(float *)(lVar10 + 0x28);
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
                            lVar12 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),iVar28 + -2,
                                                  *puVar24);
                            if (lVar12 == 0) goto LAB_03168190;
                            if (*(int *)(lVar12 + 0x6c) == 1) {
                              bVar7 = true;
                            }
                            else {
                              if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                                 (lVar12 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                        iVar28 + -2,*puVar24), lVar12 == 0))
                              goto LAB_03168190;
                              bVar7 = *(int *)(lVar12 + 0x6c) == 2;
                            }
                          }
                          fVar34 = 0.0;
                          if (unaff_x20 == 1) {
                            fVar34 = fStack0000000000000064;
                          }
                          fVar36 = fStack0000000000000068;
                          if (unaff_x20 != *(int *)(in_stack_00000170 + 0x18) - 3) {
                            fVar36 = 1.0;
                          }
                          if (fVar36 <= fVar34) {
                            iStack0000000000000108 = 0;
                          }
                          else {
                            fVar31 = fVar31 - fVar49;
                            fVar32 = fVar32 - fVar47;
                            fVar31 = DAT_010fcf10 /
                                     SQRT(fVar32 * fVar32 +
                                          (fVar33 - fVar40) * (fVar33 - fVar40) + fVar31 * fVar31);
                            do {
                              uVar17 = *(ulong *)(in_stack_00000170 + 0x18);
                              if (fVar31 + fVar34 <= 1.0) {
                                bVar25 = 0;
                              }
                              else if (unaff_x20 == (int)uVar17 - 3) {
                                bVar25 = *(byte *)(in_stack_00000148 + 0x84) ^ 1;
                              }
                              else {
                                bVar25 = 0;
                              }
                              bVar8 = bVar25 != 0;
                              fVar32 = 1.0;
                              if (!bVar8) {
                                fVar32 = fVar34;
                              }
                              if (((uVar17 & 0xffffffff) <= unaff_x20) ||
                                 ((uVar17 & 0xffffffff) <= unaff_x24)) goto LAB_0316f2c4;
                              uVar50 = *(undefined4 *)(lVar9 + 0x24);
                              uVar42 = *(undefined4 *)(lVar9 + 0x28);
                              fVar33 = *pfVar21;
                              FUN_04059a68(in_stack_000000c8,unaff_x20 & 0xffffffff,
                                           *(undefined8 *)PTR_DAT_06a0a108);
                              fVar47 = in_stack_0000026c;
                              fVar49 = in_stack_00000270;
                              fVar34 = (float)FUN_0316f340(in_stack_00000268,in_stack_0000026c,
                                                           in_stack_00000270,fVar33,uVar50,uVar42);
                              _fStack00000000000001c0 = CONCAT44(fVar47,fVar34);
                              fVar33 = in_stack_00000160._4_4_;
                              fVar40 = (float)in_stack_00000110;
                              if (iStack0000000000000108 == 3) {
                                iStack0000000000000108 = 0;
                                fVar33 = fVar49;
                                fVar40 = fVar34;
                                fStack0000000000000128 = fVar47;
                                fStack000000000000012c = fVar49;
                                in_stack_00000130 = fVar34;
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
                              fVar37 = in_stack_000001c8;
                              if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24)
                              goto LAB_0316f2c4;
                              fVar52 = *pfVar30;
                              fVar46 = *(float *)(lVar10 + 0x24);
                              fVar35 = fStack00000000000001c0;
                              fVar38 = fStack00000000000001c4;
                              fVar54 = *(float *)(lVar10 + 0x28);
                              if (DAT_06db4c77 == '\0') {
                                FUN_02d965b8(PTR_DAT_069fbb48);
                                DAT_06db4c77 = '\x01';
                              }
                              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                                thunk_FUN_02df485c();
                              }
                              lVar12 = *(long *)(unaff_x26 + 0x20);
                              if (lVar12 == 0) goto LAB_03168190;
                              fVar38 = fVar38 - fVar46;
                              iVar26 = *(int *)(lVar12 + 0x18);
                              fVar37 = fVar37 - fVar54;
                              fVar46 = fVar37 * fVar37;
                              fVar35 = SQRT(fVar46 + (fVar35 - fVar52) * (fVar35 - fVar52) +
                                                     fVar38 * fVar38);
                              if (iVar26 < 1) {
                                lVar12 = *(long *)(unaff_x26 + 0x78);
                                if (lVar12 == 0) goto LAB_03168190;
                                iVar26 = *(int *)(lVar12 + 0x18);
                                if (0 < iVar26) goto LAB_0316b4d8;
                              }
                              else {
LAB_0316b4d8:
                                fVar38 = (float)FUN_0409f2f4(lVar12,iVar26 + -1,
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
                                fStack00000000000000f8 = fStack00000000000000f8 - fVar38;
                                fStack00000000000000f4 = fStack00000000000000f4 - fVar46;
                                fStack00000000000000f0 = fStack00000000000000f0 - fVar37;
                                fVar37 = SQRT(fStack00000000000000f0 * fStack00000000000000f0 +
                                              fStack00000000000000f8 * fStack00000000000000f8 +
                                              fStack00000000000000f4 * fStack00000000000000f4);
                                if (fVar37 <= DAT_010fd13c) {
                                  if (DAT_06db4c71 == '\0') {
                                    FUN_02d965b8(PTR_DAT_069fb978);
                                    DAT_06db4c71 = '\x01';
                                  }
                                  pfVar18 = *(float **)(*(long *)PTR_DAT_069fb978 + 0xb8);
                                  fStack00000000000000f8 = *pfVar18;
                                  fStack00000000000000f4 = pfVar18[1];
                                  fStack00000000000000f0 = pfVar18[2];
                                  plVar23 = (long *)PTR_DAT_069fb978;
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
                                pfVar18 = *(float **)(*plVar23 + 0xb8);
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
                                  fVar37 = SQRT((fStack00000000000000fc * fStack00000000000000fc +
                                                fStack0000000000000100 * fStack0000000000000100 +
                                                fStack0000000000000104 * fStack0000000000000104) *
                                                (fStack00000000000000f0 * fStack00000000000000f0 +
                                                fStack00000000000000f8 * fStack00000000000000f8 +
                                                fStack00000000000000f4 * fStack00000000000000f4));
                                  if (DAT_010fcd14 <= fVar37) {
                                    fVar37 = (fStack00000000000000fc * fStack00000000000000f0 +
                                             fStack0000000000000104 * fStack00000000000000f8 +
                                             fStack0000000000000100 * fStack00000000000000f4) /
                                             fVar37;
                                    fVar38 = 1.0;
                                    if (fVar37 <= 1.0) {
                                      fVar38 = fVar37;
                                    }
                                    fVar46 = -1.0;
                                    if (-1.0 <= fVar37) {
                                      fVar46 = fVar38;
                                    }
                                    if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                                      thunk_FUN_02df485c();
                                    }
                                    dVar39 = acos((double)fVar46);
                                    unaff_s15 = (float)dVar39 * DAT_010fcf40;
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
                                          1.0 <= SQRT((fStack000000000000012c - fVar49) *
                                                      (fStack000000000000012c - fVar49) +
                                                      (fStack0000000000000128 - fVar47) *
                                                      (fStack0000000000000128 - fVar47) +
                                                      (in_stack_00000130 - fVar34) *
                                                      (in_stack_00000130 - fVar34));
                                }
                              }
                              puVar24 = (undefined8 *)PTR_DAT_06a0b440;
                              if (*(char *)(in_stack_00000148 + 0x5d6) != '\0') {
                                if (*(long *)(in_stack_00000148 + 0x20) == 0) goto LAB_03168190;
                                FUN_03199614(*(long *)(in_stack_00000148 + 0x20),&stack0x000001c0,0)
                                ;
                              }
                              bVar5 = bVar8;
                              if (fVar36 < fVar31 + fVar32 + DAT_010fd060) {
                                bVar6 = bVar8;
                                if (fStack00000000000000a0 <= fVar35) {
                                  bVar6 = true;
                                }
                                if (bVar6 == false && (in_stack_000000c0._4_1_ & 1) == 0) {
                                  if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24)
                                  goto LAB_0316f2c4;
                                  fVar32 = 1.0;
                                  _fStack00000000000001c0 = *(ulong *)pfVar30;
                                  in_stack_000001c8 = *(float *)(lVar10 + 0x28);
                                  bVar5 = true;
                                }
                              }
                              if (fVar31 + fVar32 <= fVar36) {
                                fVar47 = fStack00000000000001c0;
                                fVar49 = fStack00000000000001c4;
                              }
                              else {
                                if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24)
                                goto LAB_0316f2c4;
                                _fStack00000000000001c0 = *(ulong *)pfVar30;
                                fVar32 = 1.0;
                                in_stack_000001c8 = *(float *)(lVar10 + 0x28);
                                bVar5 = true;
                                fVar47 = *pfVar30;
                                fVar49 = *(float *)(lVar10 + 0x24);
                              }
                              fVar34 = in_stack_000001c8;
                              if (DAT_06db4c77 == '\0') {
                                FUN_02d965b8(PTR_DAT_069fbb48);
                                DAT_06db4c77 = '\x01';
                              }
                              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                                thunk_FUN_02df485c();
                              }
                              fVar37 = in_stack_000001c8;
                              bVar6 = bVar5;
                              if (fStack000000000000010c <
                                  SQRT((fStack000000000000012c - fVar34) *
                                       (fStack000000000000012c - fVar34) +
                                       (in_stack_00000130 - fVar47) * (in_stack_00000130 - fVar47) +
                                       (fStack0000000000000128 - fVar49) *
                                       (fStack0000000000000128 - fVar49))) {
                                bVar6 = true;
                              }
                              bVar1 = bVar6;
                              if (unaff_x20 != 1) {
                                bVar1 = true;
                              }
                              if (bVar1 == false) {
                                bVar6 = fVar32 == 0.0;
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
                                  cVar15 = DAT_06db4c77;
                                }
                                else {
                                  cVar15 = '\x01';
                                }
                                fVar34 = in_stack_000001c8;
                                uVar17 = _fStack00000000000001c0;
                                in_stack_00000110 = _fStack00000000000001c0 & 0xffffffff;
                                fVar47 = SQRT((fStack000000000000012c - fVar37) *
                                              (fStack000000000000012c - fVar37) +
                                              (in_stack_00000130 - fVar47) *
                                              (in_stack_00000130 - fVar47) +
                                              (fStack0000000000000128 - fVar49) *
                                              (fStack0000000000000128 - fVar49));
                                in_stack_00000160._4_4_ = in_stack_000001c8;
                                fStack00000000000001d4 = fVar47 + fStack00000000000001d4;
                                *in_stack_000000d8 = fVar47 + *in_stack_000000d8;
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
                                fVar40 = (float)uVar17 - fVar40;
                                in_stack_00000130 = fStack00000000000001c0;
                                in_stack_00000230 =
                                     in_stack_00000230 +
                                     SQRT(fVar40 * fVar40 + (fVar34 - fVar33) * (fVar34 - fVar33));
                                fStack0000000000000128 = fStack00000000000001c4;
                                fStack000000000000012c = in_stack_000001c8;
                                if ((lVar12 == 0) ||
                                   (lVar12 = FUN_0400ff1c(lVar12,uVar22 & 0xffffffff,*puVar24),
                                   lVar12 == 0)) goto LAB_03168190;
                                if (*(float *)(lVar12 + 0x100) == 0.0) {
                                  if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                                     (lVar12 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                            uVar22 & 0xffffffff,*puVar24),
                                     lVar12 == 0)) goto LAB_03168190;
                                  if (*(float *)(lVar12 + 0x104) != 0.0) goto LAB_0316bb78;
                                  if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                                     (lVar12 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                            uVar22 & 0xffffffff,*puVar24),
                                     lVar12 == 0)) goto LAB_03168190;
                                  if (*(float *)(lVar12 + 0x110) != 0.0) goto LAB_0316bb78;
                                  if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                                     (lVar12 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                            uVar22 & 0xffffffff,*puVar24),
                                     lVar12 == 0)) goto LAB_03168190;
                                  if (*(float *)(lVar12 + 0x114) != 0.0) goto LAB_0316bb78;
                                  lVar12 = *in_stack_000000e0;
                                  if (lVar12 == 0) goto LAB_03168190;
                                  lVar13 = *(long *)(lVar12 + 0x10);
                                  lVar16 = *(long *)PTR_DAT_069ff178;
                                  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                                  if (lVar13 == 0) goto LAB_03168190;
                                  uVar44 = *(uint *)(lVar12 + 0x18);
                                  if (uVar44 < *(uint *)(lVar13 + 0x18)) {
                                    *(uint *)(lVar12 + 0x18) = uVar44 + 1;
                                    *(undefined4 *)(lVar13 + (long)(int)uVar44 * 4 + 0x20) = 0;
                                  }
                                  else {
                                    FUN_04059d64(0,lVar12,*(undefined8 *)
                                                           (*(long *)(*(long *)(lVar16 + 0x20) +
                                                                     0xc0) + 0x70));
                                  }
                                }
                                else {
LAB_0316bb78:
                                  if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
                                  fVar33 = *in_stack_000000d8;
                                  uVar11 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                        uVar22 & 0xffffffff,*puVar24);
                                  FUN_0316f6a0(fVar33,fVar43,uVar11,uVar11,&stack0x0000022c,
                                               &stack0x00000228,&stack0x00000224,&stack0x00000218,
                                               &stack0x00000278,&stack0x00000214);
                                }
                                lVar12 = *in_stack_000000b8;
                                if (fVar47 <= 5.0) {
                                  if (lVar12 == 0) goto LAB_03168190;
                                  lVar13 = *(long *)(lVar12 + 0x10);
                                  lVar16 = *(long *)PTR_DAT_069ff178;
                                  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                                  if (lVar13 == 0) goto LAB_03168190;
                                  uVar44 = *(uint *)(lVar12 + 0x18);
                                  fVar33 = (unaff_s15 / fVar47) * 5.0;
                                  if (*(uint *)(lVar13 + 0x18) <= uVar44) {
                                    lVar13 = *(long *)(lVar16 + 0x20);
                                    goto LAB_0316bcb0;
                                  }
                                  *(uint *)(lVar12 + 0x18) = uVar44 + 1;
                                  *(float *)(lVar13 + (long)(int)uVar44 * 4 + 0x20) = fVar33;
                                }
                                else {
                                  if (lVar12 == 0) goto LAB_03168190;
                                  lVar13 = *(long *)(lVar12 + 0x10);
                                  lVar16 = *(long *)PTR_DAT_069ff178;
                                  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                                  if (lVar13 == 0) goto LAB_03168190;
                                  uVar44 = *(uint *)(lVar12 + 0x18);
                                  if (uVar44 < *(uint *)(lVar13 + 0x18)) {
                                    *(uint *)(lVar12 + 0x18) = uVar44 + 1;
                                    *(float *)(lVar13 + (long)(int)uVar44 * 4 + 0x20) = unaff_s15;
                                  }
                                  else {
                                    lVar13 = *(long *)(lVar16 + 0x20);
                                    fVar33 = unaff_s15;
LAB_0316bcb0:
                                    FUN_04059d64(fVar33,lVar12,
                                                 *(undefined8 *)(*(long *)(lVar13 + 0xc0) + 0x70));
                                  }
                                }
                                if (bVar7) {
                                  lVar12 = *in_stack_000000b8;
                                  if (lVar12 == 0) goto LAB_03168190;
                                  iVar26 = *(int *)(lVar12 + 0x18);
                                  if (1 < iVar26) {
                                    FUN_04059a68(lVar12,iVar26 + -1,*(undefined8 *)PTR_DAT_06a0a108)
                                    ;
                                    FUN_04059abc(lVar12,iVar26 + -2,*(undefined8 *)PTR_DAT_06a0b5c0)
                                    ;
                                  }
                                }
                                puVar2 = PTR_DAT_069fbee0;
                                lVar12 = *(long *)(unaff_x26 + 0x20);
                                if (lVar12 == 0) goto LAB_03168190;
                                lVar13 = *(long *)(lVar12 + 0x10);
                                *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                                if (lVar13 == 0) goto LAB_03168190;
                                uVar44 = *(uint *)(lVar12 + 0x18);
                                if (uVar44 < *(uint *)(lVar13 + 0x18)) {
                                  lVar13 = lVar13 + (long)(int)uVar44 * 0xc;
                                  *(uint *)(lVar12 + 0x18) = uVar44 + 1;
                                  *(float *)(lVar13 + 0x20) = in_stack_00000278;
                                  *(float *)(lVar13 + 0x24) = in_stack_0000027c;
                                  *(float *)(lVar13 + 0x28) = in_stack_00000280;
                                }
                                else {
                                  FUN_0409f624(lVar12,*(undefined8 *)
                                                       (*(long *)(*(long *)(*(long *)puVar2 + 0x20)
                                                                 + 0xc0) + 0x70));
                                }
                                puVar24 = (undefined8 *)PTR_DAT_06a0b440;
                                lVar12 = *(long *)(unaff_x26 + 0x28);
                                if (lVar12 == 0) goto LAB_03168190;
                                lVar13 = *(long *)(lVar12 + 0x10);
                                lVar16 = *(long *)PTR_DAT_069ff178;
                                *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                                if (lVar13 == 0) goto LAB_03168190;
                                uVar44 = *(uint *)(lVar12 + 0x18);
                                if (uVar44 < *(uint *)(lVar13 + 0x18)) {
                                  *(uint *)(lVar12 + 0x18) = uVar44 + 1;
                                  *(float *)(lVar13 + (long)(int)uVar44 * 4 + 0x20) = fVar32;
                                }
                                else {
                                  FUN_04059d64(fVar32,lVar12,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70))
                                  ;
                                }
                                if (bVar5 != false) {
                                  lVar12 = *(long *)(in_stack_00000148 + 0x2c8);
                                  if (lVar12 == 0) goto LAB_03168190;
                                  lVar13 = *(long *)(lVar12 + 0x10);
                                  lVar16 = *(long *)PTR_DAT_069fc3e0;
                                  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                                  if (lVar13 == 0) goto LAB_03168190;
                                  uVar44 = *(uint *)(lVar12 + 0x18);
                                  if (uVar44 < *(uint *)(lVar13 + 0x18)) {
                                    *(uint *)(lVar12 + 0x18) = uVar44 + 1;
                                    *(int *)(lVar13 + (long)(int)uVar44 * 4 + 0x20) =
                                         iStack00000000000000d4;
                                  }
                                  else {
                                    FUN_03fb3e1c(lVar12,iStack00000000000000d4,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70
                                                  ));
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
                                in_stack_00000110 = (ulong)(uint)fVar40;
                                in_stack_00000160._4_4_ = fVar33;
                              }
                              fVar34 = fVar31 + fVar32;
                            } while (fVar34 < fVar36);
                            iStack0000000000000108 = 0;
                            unaff_x28 = (long *)PTR_DAT_069fb978;
                          }
                        }
                        else {
                          if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                             (lVar12 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                    uVar22 & 0xffffffff,*puVar24), lVar12 == 0))
                          goto LAB_03168190;
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
                                if (((long)(*(int *)(*(long *)(in_stack_00000148 + 0x68) + 0x18) +
                                           -2) < (long)unaff_x20) &&
                                   (*(char *)(in_stack_00000148 + 0x84) == '\0')) {
                                  uVar11 = *(undefined8 *)(in_stack_00000148 + 0x2e0);
                                  if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
                                    thunk_FUN_02df485c();
                                  }
                                  uVar14 = FUN_0634eb94(uVar11,0,0);
                                  if ((uVar14 & 1) != 0) goto LAB_0316adcc;
                                  FUN_030fd644(&stack0x00000290,in_stack_00000148,
                                               unaff_x20 & 0xffffffff,&stack0x00000238,
                                               &stack0x00000240,(long)&stack0x000001d0 + 4,0,
                                               &stack0x00000230);
                                }
                                else {
LAB_0316adcc:
                                  FUN_030faa2c(&stack0x00000290,in_stack_00000148,
                                               unaff_x20 & 0xffffffff,&stack0x00000238,
                                               &stack0x00000240,(long)&stack0x000001d0 + 4,0,
                                               &stack0x00000230);
                                }
                                if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                                   (lVar12 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                          uVar22 & 0xffffffff,*puVar24), lVar12 == 0
                                   )) goto LAB_03168190;
                                lVar13 = *(long *)(unaff_x26 + 0x28);
                                *(undefined4 *)(lVar12 + 0x34) = uStack00000000000001ac;
                                if (lVar13 == 0) goto LAB_03168190;
                                fVar31 = 0.0;
                                iVar26 = 0;
                                puVar29 = (undefined4 *)(in_stack_00000170 + 0x20 + uVar22 * 0xc);
                                while( true ) {
                                  puVar24 = (undefined8 *)PTR_DAT_06a0b440;
                                  puVar2 = PTR_DAT_069fbee0;
                                  unaff_x28 = (long *)PTR_DAT_069fb978;
                                  fVar32 = (float)uVar17;
                                  in_stack_00000160._4_4_ = (float)uVar41;
                                  iVar55 = *(int *)(lVar13 + 0x18);
                                  if (iVar55 <= iVar26) break;
                                  if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                                  uStack00000000000001a0 =
                                       FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),iVar26,
                                                    *(undefined8 *)PTR_DAT_069fd088);
                                  fStack00000000000001a4 = fVar32;
                                  fStack00000000000001a8 = in_stack_00000160._4_4_;
                                  if (*(char *)(in_stack_00000148 + 0x5d6) == '\0') {
                                    uVar17 = (ulong)*(uint *)(in_stack_00000170 + 0x18);
                                    if ((((uVar17 <= uVar22) || (uVar17 <= unaff_x20)) ||
                                        (uVar17 <= unaff_x24)) || (uVar17 <= unaff_x20 + 2))
                                    goto LAB_0316f2c4;
                                    if (*(long *)(unaff_x26 + 0x28) == 0) goto LAB_03168190;
                                    uVar42 = *puVar29;
                                    fVar32 = (float)puVar29[1];
                                    uVar50 = puVar29[2];
                                    fVar33 = *pfVar21;
                                    uVar53 = *(undefined4 *)(lVar9 + 0x24);
                                    uVar51 = *(undefined4 *)(lVar9 + 0x28);
                                    FUN_04059a68(*(long *)(unaff_x26 + 0x28),iVar26,
                                                 *(undefined8 *)PTR_DAT_06a0a108);
                                    FUN_0316f340(uVar42,fVar32,uVar50,fVar33,uVar53,uVar51);
                                    fStack00000000000001a4 = fVar32;
                                    if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                                    in_stack_00000160._4_4_ = fStack00000000000001a8;
                                    FUN_0409f350(uStack00000000000001a0,*(long *)(unaff_x26 + 0x20),
                                                 iVar26,*(undefined8 *)PTR_DAT_06a0b7d0);
                                    if (iVar26 != 0) goto LAB_0316af8c;
LAB_0316b04c:
                                    lVar12 = *in_stack_000000e0;
                                    if (lVar12 == 0) goto LAB_03168190;
                                    lVar13 = *(long *)(lVar12 + 0x10);
                                    lVar16 = *(long *)PTR_DAT_069ff178;
                                    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                                    if (lVar13 == 0) goto LAB_03168190;
                                    uVar44 = *(uint *)(lVar12 + 0x18);
                                    if (uVar44 < *(uint *)(lVar13 + 0x18)) {
                                      *(uint *)(lVar12 + 0x18) = uVar44 + 1;
                                      *(undefined4 *)(lVar13 + (long)(int)uVar44 * 4 + 0x20) = 0;
                                    }
                                    else {
                                      FUN_04059d64(0,lVar12,*(undefined8 *)
                                                             (*(long *)(*(long *)(lVar16 + 0x20) +
                                                                       0xc0) + 0x70));
                                    }
                                  }
                                  else {
                                    if (*(long *)(in_stack_00000148 + 0x20) == 0) goto LAB_03168190;
                                    FUN_03199614(*(long *)(in_stack_00000148 + 0x20),
                                                 &stack0x000001a0,0);
                                    if (iVar26 == 0) goto LAB_0316b04c;
LAB_0316af8c:
                                    if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                                       (lVar12 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                              uVar22 & 0xffffffff,
                                                              *(undefined8 *)PTR_DAT_06a0b440),
                                       lVar12 == 0)) goto LAB_03168190;
                                    if (*(float *)(lVar12 + 0x100) == 0.0) {
                                      if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                                         (lVar12 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                                uVar22 & 0xffffffff,
                                                                *(undefined8 *)PTR_DAT_06a0b440),
                                         lVar12 == 0)) goto LAB_03168190;
                                      if (*(float *)(lVar12 + 0x104) == 0.0) {
                                        if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                                           (lVar12 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68
                                                                           ),uVar22 & 0xffffffff,
                                                                  *(undefined8 *)PTR_DAT_06a0b440),
                                           lVar12 == 0)) goto LAB_03168190;
                                        if (*(float *)(lVar12 + 0x110) == 0.0) {
                                          if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                                             (lVar12 = FUN_0400ff1c(*(long *)(in_stack_00000148 +
                                                                             0x68),
                                                                    uVar22 & 0xffffffff,
                                                                    *(undefined8 *)PTR_DAT_06a0b440)
                                             , lVar12 == 0)) goto LAB_03168190;
                                          if (*(float *)(lVar12 + 0x114) == 0.0) goto LAB_0316b04c;
                                        }
                                      }
                                    }
                                    puVar2 = PTR_DAT_069fd088;
                                    if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                                    fVar33 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),
                                                                 iVar26 + -1,
                                                                 *(undefined8 *)PTR_DAT_069fd088);
                                    if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                                    fVar40 = fVar32;
                                    fVar47 = in_stack_00000160._4_4_;
                                    fVar49 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),iVar26,
                                                                 *(undefined8 *)puVar2);
                                    if (DAT_06db4c77 == '\0') {
                                      FUN_02d965b8(PTR_DAT_069fbb48);
                                      DAT_06db4c77 = '\x01';
                                    }
                                    if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                                      thunk_FUN_02df485c();
                                    }
                                    if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
                                    fVar34 = *in_stack_000000d8;
                                    fVar31 = fVar31 + SQRT((in_stack_00000160._4_4_ - fVar47) *
                                                           (in_stack_00000160._4_4_ - fVar47) +
                                                           (fVar33 - fVar49) * (fVar33 - fVar49) +
                                                           (fVar32 - fVar40) * (fVar32 - fVar40));
                                    uVar11 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                          uVar22 & 0xffffffff,
                                                          *(undefined8 *)PTR_DAT_06a0b440);
                                    FUN_0316f6a0(fVar31 + fVar34,fVar43,uVar11,uVar11,
                                                 &stack0x0000022c,&stack0x00000228,&stack0x00000224,
                                                 &stack0x00000218,&stack0x000001a0,&stack0x00000214)
                                    ;
                                  }
                                  if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                                  uVar41 = (ulong)(uint)fStack00000000000001a8;
                                  uVar17 = (ulong)(uint)fStack00000000000001a4;
                                  FUN_0409f350(uStack00000000000001a0,*(long *)(unaff_x26 + 0x20),
                                               iVar26,*(undefined8 *)PTR_DAT_06a0b7d0);
                                  lVar13 = *(long *)(unaff_x26 + 0x28);
                                  iVar26 = iVar26 + 1;
                                  if (lVar13 == 0) goto LAB_03168190;
                                }
                                uVar17 = (ulong)(iVar55 - 1);
                                if (iVar55 < 1) {
                                  if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24)
                                  goto LAB_0316f2c4;
                                  lVar12 = *(long *)(unaff_x26 + 0x20);
                                  if (lVar12 == 0) goto LAB_03168190;
                                  lVar13 = *(long *)(lVar12 + 0x10);
                                  fVar31 = *pfVar30;
                                  uVar42 = *(undefined4 *)(lVar10 + 0x24);
                                  in_stack_00000160._4_4_ = *(float *)(lVar10 + 0x28);
                                  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                                  if (lVar13 == 0) goto LAB_03168190;
                                  uVar44 = *(uint *)(lVar12 + 0x18);
                                  if (uVar44 < *(uint *)(lVar13 + 0x18)) {
                                    lVar13 = lVar13 + (long)(int)uVar44 * 0xc;
                                    *(uint *)(lVar12 + 0x18) = uVar44 + 1;
                                    *(float *)(lVar13 + 0x20) = fVar31;
                                    *(undefined4 *)(lVar13 + 0x24) = uVar42;
                                    *(float *)(lVar13 + 0x28) = in_stack_00000160._4_4_;
                                  }
                                  else {
                                    FUN_0409f624(lVar12,*(undefined8 *)
                                                         (*(long *)(*(long *)(*(long *)puVar2 + 0x20
                                                                             ) + 0xc0) + 0x70));
                                    uVar17 = extraout_x1_00;
                                  }
                                  fVar31 = fStack00000000000001d4;
                                  if ((*(uint *)(in_stack_00000170 + 0x18) <= unaff_x20) ||
                                     (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24))
                                  goto LAB_0316f2c4;
                                  uVar11 = *(undefined8 *)pfVar21;
                                  fVar43 = *(float *)(lVar9 + 0x28);
                                  uVar45 = *(undefined8 *)pfVar30;
                                  fVar32 = *(float *)(lVar10 + 0x28);
                                  if (DAT_06db4c77 == '\0') {
                                    FUN_02d965b8(PTR_DAT_069fbb48,uVar17);
                                    DAT_06db4c77 = '\x01';
                                  }
                                  if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                                    thunk_FUN_02df485c();
                                  }
                                  fVar33 = (float)uVar11 - (float)uVar45;
                                  fVar40 = (float)((ulong)uVar11 >> 0x20) -
                                           (float)((ulong)uVar45 >> 0x20);
                                  fVar43 = fVar43 - fVar32;
                                  in_stack_0000027c = fVar43 * fVar43;
                                  fStack00000000000001d4 =
                                       fVar31 + SQRT(in_stack_0000027c +
                                                     fVar33 * fVar33 + fVar40 * fVar40);
LAB_0316d2dc:
                                  lVar9 = *(long *)(unaff_x26 + 0x28);
                                  if (lVar9 == 0) goto LAB_03168190;
                                  lVar10 = *(long *)(lVar9 + 0x10);
                                  lVar12 = *(long *)PTR_DAT_069ff178;
                                  *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                  if (lVar10 == 0) goto LAB_03168190;
                                  uVar44 = *(uint *)(lVar9 + 0x18);
                                  if (uVar44 < *(uint *)(lVar10 + 0x18)) {
                                    *(uint *)(lVar9 + 0x18) = uVar44 + 1;
                                    *(undefined4 *)(lVar10 + (long)(int)uVar44 * 4 + 0x20) =
                                         0x3f800000;
                                  }
                                  else {
                                    FUN_04059d64(0x3f800000,lVar9,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70
                                                  ));
                                  }
                                  lVar9 = *in_stack_000000e0;
                                  if (lVar9 == 0) goto LAB_03168190;
                                  lVar10 = *(long *)(lVar9 + 0x10);
                                  lVar12 = *(long *)PTR_DAT_069ff178;
                                  *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                  if (lVar10 == 0) goto LAB_03168190;
                                  uVar44 = *(uint *)(lVar9 + 0x18);
                                  if (uVar44 < *(uint *)(lVar10 + 0x18)) {
                                    *(uint *)(lVar9 + 0x18) = uVar44 + 1;
                                    *(undefined4 *)(lVar10 + (long)(int)uVar44 * 4 + 0x20) = 0;
                                  }
                                  else {
                                    FUN_04059d64(0,lVar9,*(undefined8 *)
                                                          (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                  }
                                }
                                else {
                                  fVar31 = (float)FUN_04059a68(lVar13,uVar17,
                                                               *(undefined8 *)PTR_DAT_06a0a108);
                                  puVar24 = (undefined8 *)PTR_DAT_06a0b440;
                                  puVar2 = PTR_DAT_069fd088;
                                  unaff_x28 = (long *)PTR_DAT_069fb978;
                                  fVar43 = 1.0;
                                  if (fVar31 <= 1.0) {
                                    lVar9 = *(long *)(unaff_x26 + 0x20);
                                    if (lVar9 == 0) goto LAB_03168190;
                                    fVar31 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,
                                                                 *(undefined8 *)PTR_DAT_069fd088);
                                    if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24)
                                    goto LAB_0316f2c4;
                                    fVar43 = fVar43 - *(float *)(lVar10 + 0x24);
                                    in_stack_00000160._4_4_ =
                                         in_stack_00000160._4_4_ - *(float *)(lVar10 + 0x28);
                                    in_stack_0000027c = fStack00000000000000a4;
                                    if (fStack00000000000000a4 <=
                                        in_stack_00000160._4_4_ * in_stack_00000160._4_4_ +
                                        (fVar31 - *pfVar30) * (fVar31 - *pfVar30) + fVar43 * fVar43)
                                    {
                                      lVar9 = *(long *)(unaff_x26 + 0x20);
                                      if (lVar9 == 0) goto LAB_03168190;
                                      fVar31 = fStack00000000000000a4;
                                      fVar43 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1
                                                                   ,*(undefined8 *)puVar2);
                                      if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24)
                                      goto LAB_0316f2c4;
                                      fVar32 = *pfVar30;
                                      fVar40 = *(float *)(lVar10 + 0x24);
                                      fVar33 = *(float *)(lVar10 + 0x28);
                                      if (DAT_06db4c77 == '\0') {
                                        FUN_02d965b8(PTR_DAT_069fbb48);
                                        DAT_06db4c77 = '\x01';
                                      }
                                      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                                        thunk_FUN_02df485c();
                                      }
                                      puVar3 = PTR_DAT_069fbee0;
                                      fVar31 = fVar31 - fVar40;
                                      lVar9 = *(long *)(unaff_x26 + 0x20);
                                      in_stack_00000160._4_4_ = in_stack_00000160._4_4_ - fVar33;
                                      if (in_stack_000000b0 <=
                                          SQRT(in_stack_00000160._4_4_ * in_stack_00000160._4_4_ +
                                               (fVar43 - fVar32) * (fVar43 - fVar32) +
                                               fVar31 * fVar31)) {
                                        if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24)
                                        goto LAB_0316f2c4;
                                        if (lVar9 != 0) {
                                          lVar12 = *(long *)(lVar9 + 0x10);
                                          fVar31 = *pfVar30;
                                          fVar43 = *(float *)(lVar10 + 0x24);
                                          in_stack_00000160._4_4_ = *(float *)(lVar10 + 0x28);
                                          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                          if (lVar12 != 0) {
                                            uVar44 = *(uint *)(lVar9 + 0x18);
                                            if (uVar44 < *(uint *)(lVar12 + 0x18)) {
                                              lVar12 = lVar12 + (long)(int)uVar44 * 0xc;
                                              *(uint *)(lVar9 + 0x18) = uVar44 + 1;
                                              *(float *)(lVar12 + 0x20) = fVar31;
                                              *(float *)(lVar12 + 0x24) = fVar43;
                                              *(float *)(lVar12 + 0x28) = in_stack_00000160._4_4_;
                                            }
                                            else {
                                              FUN_0409f624(lVar9,*(undefined8 *)
                                                                  (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                            }
                                            fVar31 = fStack00000000000001d4;
                                            lVar9 = *(long *)(unaff_x26 + 0x20);
                                            if (lVar9 != 0) {
                                              fVar32 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 
                                                  0x18) + -1,*(undefined8 *)puVar2);
                                              if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24)
                                              goto LAB_0316f2c4;
                                              fVar33 = *pfVar30;
                                              fVar47 = *(float *)(lVar10 + 0x24);
                                              fVar40 = *(float *)(lVar10 + 0x28);
                                              if (DAT_06db4c77 == '\0') {
                                                FUN_02d965b8(PTR_DAT_069fbb48);
                                                DAT_06db4c77 = '\x01';
                                              }
                                              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                                                thunk_FUN_02df485c();
                                              }
                                              fVar43 = fVar43 - fVar47;
                                              in_stack_00000160._4_4_ =
                                                   in_stack_00000160._4_4_ - fVar40;
                                              in_stack_0000027c =
                                                   in_stack_00000160._4_4_ * in_stack_00000160._4_4_
                                              ;
                                              fStack00000000000001d4 =
                                                   fVar31 + SQRT(in_stack_0000027c +
                                                                 (fVar32 - fVar33) *
                                                                 (fVar32 - fVar33) + fVar43 * fVar43
                                                                );
                                              goto LAB_0316d2dc;
                                            }
                                          }
                                        }
                                        goto LAB_03168190;
                                      }
                                      if (lVar9 == 0) goto LAB_03168190;
                                      if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24)
                                      goto LAB_0316f2c4;
                                      in_stack_00000160._4_4_ = *(float *)(lVar10 + 0x28);
                                      in_stack_0000027c = *(float *)(lVar10 + 0x24);
                                      FUN_0409f350(*pfVar30,lVar9,*(int *)(lVar9 + 0x18) + -1,
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
                                    if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24)
                                    goto LAB_0316f2c4;
                                    in_stack_00000160._4_4_ = *(float *)(lVar10 + 0x28);
                                    in_stack_0000027c = *(float *)(lVar10 + 0x24);
                                    FUN_0409f350(*pfVar30,lVar9,*(int *)(lVar9 + 0x18) + -1,
                                                 *(undefined8 *)PTR_DAT_06a0b7d0);
                                  }
                                }
                                lVar9 = *(long *)(unaff_x26 + 0x20);
                                if (lVar9 == 0) goto LAB_03168190;
                                iVar26 = *(int *)(lVar9 + 0x18);
                                in_stack_00000110 =
                                     FUN_0409f2f4(lVar9,iVar26 + -1,*(undefined8 *)PTR_DAT_069fd088)
                                ;
                                puVar2 = PTR_DAT_069fd088;
                                lVar9 = *(long *)(unaff_x26 + 0x20);
                                in_stack_00000278 = (float)in_stack_00000110;
                                if (lVar9 == 0) goto LAB_03168190;
                                fVar31 = in_stack_00000160._4_4_;
                                if (1 < *(int *)(lVar9 + 0x18)) {
                                  fStack0000000000000088 = in_stack_0000027c;
                                  fStack000000000000008c =
                                       (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -2,
                                                           *(undefined8 *)PTR_DAT_069fd088);
                                  lVar9 = *(long *)(unaff_x26 + 0x20);
                                  if (lVar9 == 0) goto LAB_03168190;
                                  fVar43 = fStack0000000000000088;
                                  fVar32 = fVar31;
                                  fVar33 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,
                                                               *(undefined8 *)puVar2);
                                  if (DAT_06db4c75 == '\0') {
                                    FUN_02d965b8(PTR_DAT_069fbb48);
                                    DAT_06db4c75 = '\x01';
                                  }
                                  if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                                    thunk_FUN_02df485c();
                                  }
                                  fStack000000000000008c = fStack000000000000008c - fVar33;
                                  fStack0000000000000088 = fStack0000000000000088 - fVar43;
                                  fVar31 = fVar31 - fVar32;
                                  in_stack_00000080._4_4_ =
                                       SQRT(fVar31 * fVar31 +
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
                                    in_stack_00000080._4_4_ = fVar31 / in_stack_00000080._4_4_;
                                  }
                                }
                                lVar9 = *(long *)(in_stack_00000148 + 0x2c8);
                                *(float *)(in_stack_00000148 + 0x2c0) =
                                     *(float *)(in_stack_00000148 + 0x2c0) + fStack00000000000001d4;
                                if (lVar9 == 0) goto LAB_03168190;
                                lVar10 = *(long *)(lVar9 + 0x10);
                                lVar12 = *(long *)PTR_DAT_069fc3e0;
                                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                if (lVar10 == 0) goto LAB_03168190;
                                uVar44 = *(uint *)(lVar9 + 0x18);
                                iStack00000000000000d4 = iVar26 + iStack00000000000000d4;
                                fVar43 = fStack00000000000001d4;
                                if (uVar44 < *(uint *)(lVar10 + 0x18)) {
                                  *(uint *)(lVar9 + 0x18) = uVar44 + 1;
                                  *(int *)(lVar10 + (long)(int)uVar44 * 4 + 0x20) =
                                       iStack00000000000000d4;
                                }
                                else {
                                  FUN_03fb3e1c(lVar9,iStack00000000000000d4,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
                                  ;
                                }
                                if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
                                iVar26 = *(int *)(*(long *)(unaff_x26 + 0x78) + 0x18);
                                in_stack_00000280 = in_stack_00000160._4_4_;
                                if (iVar26 < 1) {
                                  iStack0000000000000108 = 3;
                                  goto LAB_0316c620;
                                }
                                lVar9 = FUN_0400ff1c(in_stack_00000098,iVar28 + -2,*puVar24);
                                if ((lVar9 == 0) || (lVar10 = *in_stack_00000090, lVar10 == 0))
                                goto LAB_03168190;
                                iVar55 = *(int *)(lVar9 + 0xbc);
                                fVar32 = (float)FUN_04059a68(lVar10,*(int *)(lVar10 + 0x18) + -1,
                                                             *(undefined8 *)PTR_DAT_06a0a108);
                                lVar9 = *in_stack_00000090;
                                if (lVar9 == 0) goto LAB_03168190;
                                if (1 < *(int *)(lVar9 + 0x18)) {
                                  fVar43 = (float)FUN_04059a68(lVar9,*(int *)(lVar9 + 0x18) + -2,
                                                               *(undefined8 *)PTR_DAT_06a0a108);
                                  fVar43 = fVar32 - fVar43;
                                  fVar32 = fVar43;
                                }
                                puVar2 = PTR_DAT_069fd088;
                                lVar9 = *(long *)(unaff_x26 + 0x78);
                                if (lVar9 == 0) goto LAB_03168190;
                                fVar33 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,
                                                             *(undefined8 *)PTR_DAT_069fd088);
                                if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                                fVar40 = fVar43;
                                fVar47 = fVar31;
                                fVar49 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),0,
                                                             *(undefined8 *)puVar2);
                                if (DAT_06db4c75 == '\0') {
                                  FUN_02d965b8(PTR_DAT_069fbb48);
                                  DAT_06db4c75 = '\x01';
                                }
                                if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                                  thunk_FUN_02df485c();
                                }
                                fVar43 = fVar43 - fVar40;
                                uVar17 = (ulong)(uint)DAT_010fd13c;
                                fVar31 = SQRT((fVar31 - fVar47) * (fVar31 - fVar47) +
                                              (fVar33 - fVar49) * (fVar33 - fVar49) +
                                              fVar43 * fVar43);
                                if (fVar31 <= DAT_010fd13c) {
                                  if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
                                    FUN_02d965b8(unaff_x28);
                                    *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
                                  }
                                  fVar43 = *(float *)(*(long *)(*unaff_x28 + 0xb8) + 4);
                                }
                                else {
                                  fVar43 = fVar43 / fVar31;
                                }
                                puVar2 = PTR_DAT_069fd088;
                                lVar9 = *(long *)(unaff_x26 + 0x78);
                                if (lVar9 == 0) goto LAB_03168190;
                                FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,
                                             *(undefined8 *)PTR_DAT_069fd088);
                                lVar9 = *(long *)(unaff_x26 + 0x78);
                                if (lVar9 == 0) goto LAB_03168190;
                                fVar40 = fVar31;
                                fVar33 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,
                                                             *(undefined8 *)puVar2);
                                if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
                                uVar41 = (ulong)(uint)(float)iVar55;
                                fVar47 = (float)iVar26 - (float)iVar55;
                                if (1.0 <= fVar47) {
                                  fVar49 = 0.0;
                                  iVar55 = *(int *)(*(long *)(unaff_x26 + 0x78) + 0x18);
                                  iVar26 = 2;
                                  iVar27 = -2;
                                  do {
                                    fVar34 = (float)uVar41;
                                    if ((iVar26 - iVar55) + -1 < 0) {
                                      lVar9 = *(long *)(unaff_x26 + 0x78);
                                      if (lVar9 == 0) goto LAB_03168190;
                                      fVar36 = (float)uVar17;
                                      fVar37 = (float)FUN_0409f2f4(lVar9,iVar27 + *(int *)(lVar9 + 
                                                  0x18),*(undefined8 *)PTR_DAT_069fd088);
                                      if (DAT_06db4c77 == '\0') {
                                        FUN_02d965b8(PTR_DAT_069fbb48);
                                        DAT_06db4c77 = '\x01';
                                      }
                                      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                                        thunk_FUN_02df485c();
                                      }
                                      lVar9 = *(long *)(unaff_x26 + 0x78);
                                      if (lVar9 == 0) goto LAB_03168190;
                                      fVar35 = fVar36 - (float)uVar17;
                                      fVar49 = fVar49 + SQRT(fVar35 * fVar35 +
                                                             (fVar37 - fVar33) * (fVar37 - fVar33) +
                                                             (fVar34 - fVar40) * (fVar34 - fVar40));
                                      fVar31 = (fVar32 / fVar47) * fVar43 + fVar31;
                                      fVar33 = 1.0;
                                      if (SQRT(fVar49 / fVar32) <= 1.0) {
                                        fVar33 = SQRT(fVar49 / fVar32);
                                      }
                                      fVar40 = fVar31 + (fVar34 - fVar31) * fVar33;
                                      uVar41 = (ulong)(uint)fVar40;
                                      FUN_0409f350(fVar37,uVar41,fVar36,lVar9,
                                                   iVar27 + *(int *)(lVar9 + 0x18),
                                                   *(undefined8 *)PTR_DAT_06a0b7d0);
                                      uVar17 = (ulong)(uint)fVar36;
                                      fVar33 = fVar37;
                                    }
                                    fVar34 = (float)iVar26;
                                    iVar26 = iVar26 + 1;
                                    iVar27 = iVar27 + -1;
                                  } while (fVar34 <= fVar47);
                                  iStack0000000000000108 = 3;
                                  puVar24 = (undefined8 *)PTR_DAT_06a0b440;
                                }
                                else {
                                  iStack0000000000000108 = 3;
                                }
                              }
                              else {
                                if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                                   (lVar9 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                         uVar22 & 0xffffffff,*puVar24),
                                   puVar2 = PTR_DAT_069fd088, lVar9 == 0)) goto LAB_03168190;
                                if (*(int *)(lVar9 + 0x6c) != 4) goto LAB_0316c620;
                                if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                                   (lVar9 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                         uVar22 & 0xffffffff,*puVar24), lVar9 == 0))
                                goto LAB_03168190;
                                fStack00000000000001d4 = 0.0;
                                *(undefined8 *)(unaff_x26 + 0x20) = *(undefined8 *)(lVar9 + 0x1d8);
                                lVar9 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ff188);
                                FUN_040594d0(lVar9,*(undefined8 *)PTR_DAT_069ff180);
                                if (lVar9 == 0) goto LAB_03168190;
                                lVar10 = *(long *)(lVar9 + 0x10);
                                lVar12 = *(long *)PTR_DAT_069ff178;
                                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                if (lVar10 == 0) goto LAB_03168190;
                                uVar44 = *(uint *)(lVar9 + 0x18);
                                if (uVar44 < *(uint *)(lVar10 + 0x18)) {
                                  *(uint *)(lVar9 + 0x18) = uVar44 + 1;
                                  *(undefined4 *)(lVar10 + (long)(int)uVar44 * 4 + 0x20) = 0;
                                }
                                else {
                                  FUN_04059d64(0,lVar9,*(undefined8 *)
                                                        (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0)
                                                        + 0x70));
                                }
                                lVar10 = *(long *)(unaff_x26 + 0x20);
                                if (lVar10 == 0) goto LAB_03168190;
                                iVar26 = 1;
                                while( true ) {
                                  fVar31 = fStack00000000000001d4;
                                  fVar32 = (float)uVar41;
                                  fVar43 = (float)uVar17;
                                  if (*(int *)(lVar10 + 0x18) <= iVar26) break;
                                  fVar33 = (float)FUN_0409f2f4(lVar10,iVar26 + -1,
                                                               *(undefined8 *)puVar2);
                                  if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                                  fVar40 = fVar43;
                                  fVar47 = fVar32;
                                  fVar49 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),iVar26,
                                                               *(undefined8 *)puVar2);
                                  if (DAT_06db4c77 == '\0') {
                                    FUN_02d965b8(PTR_DAT_069fbb48);
                                    DAT_06db4c77 = '\x01';
                                  }
                                  if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                                    thunk_FUN_02df485c();
                                  }
                                  fVar32 = fVar32 - fVar47;
                                  uVar41 = (ulong)(uint)fVar32;
                                  lVar10 = *(long *)(lVar9 + 0x10);
                                  *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                  uVar17 = (ulong)(uint)(fVar32 * fVar32);
                                  fStack00000000000001d4 =
                                       fVar31 + SQRT(fVar32 * fVar32 +
                                                     (fVar33 - fVar49) * (fVar33 - fVar49) +
                                                     (fVar43 - fVar40) * (fVar43 - fVar40));
                                  if (lVar10 == 0) goto LAB_03168190;
                                  uVar44 = *(uint *)(lVar9 + 0x18);
                                  if (uVar44 < *(uint *)(lVar10 + 0x18)) {
                                    *(uint *)(lVar9 + 0x18) = uVar44 + 1;
                                    *(float *)(lVar10 + (long)(int)uVar44 * 4 + 0x20) =
                                         fStack00000000000001d4;
                                  }
                                  else {
                                    FUN_04059d64(lVar9,*(undefined8 *)
                                                        (*(long *)(*(long *)(*(long *)
                                                  PTR_DAT_069ff178 + 0x20) + 0xc0) + 0x70));
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
                                uVar44 = *(uint *)(lVar10 + 0x18);
                                if (uVar44 < *(uint *)(lVar12 + 0x18)) {
                                  *(uint *)(lVar10 + 0x18) = uVar44 + 1;
                                  *(undefined4 *)(lVar12 + (long)(int)uVar44 * 4 + 0x20) = 0;
                                }
                                else {
                                  FUN_04059d64(0,lVar10,*(undefined8 *)
                                                         (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0)
                                                         + 0x70));
                                }
                                lVar10 = *in_stack_000000e0;
                                if (lVar10 == 0) goto LAB_03168190;
                                lVar12 = *(long *)(lVar10 + 0x10);
                                lVar13 = *(long *)PTR_DAT_069ff178;
                                *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                                if (lVar12 == 0) goto LAB_03168190;
                                uVar44 = *(uint *)(lVar10 + 0x18);
                                if (uVar44 < *(uint *)(lVar12 + 0x18)) {
                                  *(uint *)(lVar10 + 0x18) = uVar44 + 1;
                                  *(undefined4 *)(lVar12 + (long)(int)uVar44 * 4 + 0x20) = 0;
                                }
                                else {
                                  FUN_04059d64(0,lVar10,*(undefined8 *)
                                                         (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0)
                                                         + 0x70));
                                }
                                lVar10 = *(long *)(unaff_x26 + 0x20);
                                if (lVar10 == 0) goto LAB_03168190;
                                iVar26 = 0;
                                while (iVar26 < *(int *)(lVar10 + 0x18)) {
                                  lVar10 = *(long *)(unaff_x26 + 0x28);
                                  fVar31 = (float)FUN_04059a68(lVar9,iVar26,
                                                               *(undefined8 *)PTR_DAT_06a0a108);
                                  if (lVar10 == 0) goto LAB_03168190;
                                  lVar12 = *(long *)(lVar10 + 0x10);
                                  lVar13 = *(long *)PTR_DAT_069ff178;
                                  *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                                  if (lVar12 == 0) goto LAB_03168190;
                                  uVar44 = *(uint *)(lVar10 + 0x18);
                                  if (uVar44 < *(uint *)(lVar12 + 0x18)) {
                                    *(uint *)(lVar10 + 0x18) = uVar44 + 1;
                                    *(float *)(lVar12 + (long)(int)uVar44 * 4 + 0x20) =
                                         fVar31 / fStack00000000000001d4;
                                  }
                                  else {
                                    FUN_04059d64(lVar10,*(undefined8 *)
                                                         (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0)
                                                         + 0x70));
                                  }
                                  lVar10 = *in_stack_000000e0;
                                  if (lVar10 == 0) goto LAB_03168190;
                                  lVar12 = *(long *)(lVar10 + 0x10);
                                  lVar13 = *(long *)PTR_DAT_069ff178;
                                  *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                                  if (lVar12 == 0) goto LAB_03168190;
                                  uVar44 = *(uint *)(lVar10 + 0x18);
                                  if (uVar44 < *(uint *)(lVar12 + 0x18)) {
                                    *(uint *)(lVar10 + 0x18) = uVar44 + 1;
                                    *(undefined4 *)(lVar12 + (long)(int)uVar44 * 4 + 0x20) = 0;
                                  }
                                  else {
                                    FUN_04059d64(0,lVar10,*(undefined8 *)
                                                           (*(long *)(*(long *)(lVar13 + 0x20) +
                                                                     0xc0) + 0x70));
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
                          uVar44 = *(uint *)(in_stack_00000170 + 0x18);
                          in_stack_00000160._4_4_ = in_stack_00000280;
                          if (unaff_x20 == 1) {
                            if ((ulong)uVar44 < 2) goto LAB_0316f2c4;
                            in_stack_00000160._4_4_ = *(float *)(lVar9 + 0x28);
                            *(undefined8 *)(unaff_x26 + 0x60) = *(undefined8 *)pfVar21;
                          }
                          if (uVar44 <= unaff_x24) {
LAB_0316f2c4:
                    /* WARNING: Subroutine does not return */
                            FUN_02d96868();
                          }
                          fVar31 = *(float *)(lVar10 + 0x28);
                          uVar11 = *(undefined8 *)pfVar30;
                          uVar45 = *(undefined8 *)pfVar21;
                          fVar32 = *(float *)(lVar9 + 0x28);
                          if (DAT_06db4c75 == '\0') {
                            FUN_02d965b8(PTR_DAT_069fbb48);
                            DAT_06db4c75 = '\x01';
                          }
                          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                            thunk_FUN_02df485c();
                          }
                          fVar33 = (float)uVar11 - (float)uVar45;
                          fVar40 = (float)((ulong)uVar11 >> 0x20) - (float)((ulong)uVar45 >> 0x20);
                          fVar31 = fVar31 - fVar32;
                          fVar32 = SQRT(fVar31 * fVar31 + fVar33 * fVar33 + fVar40 * fVar40);
                          uVar17 = (ulong)(uint)fVar32;
                          if (fVar32 <= DAT_010fd13c) {
                            if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
                              FUN_02d965b8(unaff_x28);
                              *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
                            }
                            uVar11 = **(undefined8 **)(*unaff_x28 + 0xb8);
                            fVar31 = *(float *)(*(undefined8 **)(*unaff_x28 + 0xb8) + 1);
                          }
                          else {
                            fVar31 = fVar31 / fVar32;
                            uVar11 = CONCAT44(fVar40 / fVar32,fVar33 / fVar32);
                          }
                          if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
                          fVar32 = *(float *)(lVar10 + 0x28);
                          uVar45 = *(undefined8 *)pfVar30;
                          uVar48 = *(undefined8 *)pfVar21;
                          fVar33 = *(float *)(lVar9 + 0x28);
                          if (DAT_06db4c77 == '\0') {
                            FUN_02d965b8(PTR_DAT_069fbb48);
                            DAT_06db4c77 = '\x01';
                          }
                          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                            thunk_FUN_02df485c();
                          }
                          fVar40 = (float)uVar45 - (float)uVar48;
                          fVar47 = (float)((ulong)uVar45 >> 0x20) - (float)((ulong)uVar48 >> 0x20);
                          fVar32 = fVar32 - fVar33;
                          fStack00000000000001d4 =
                               SQRT(fVar32 * fVar32 + fVar40 * fVar40 + fVar47 * fVar47);
                          if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
                          in_stack_00000110 = (ulong)(uint)in_stack_00000278;
                          fVar33 = *pfVar30;
                          fVar32 = *(float *)(lVar10 + 0x28);
                          if (DAT_06db4c77 == '\0') {
                            FUN_02d965b8(PTR_DAT_069fbb48);
                            DAT_06db4c77 = '\x01';
                          }
                          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                            thunk_FUN_02df485c();
                          }
                          fVar32 = fVar32 - in_stack_00000160._4_4_;
                          in_stack_00000230 =
                               SQRT((fVar33 - in_stack_00000278) * (fVar33 - in_stack_00000278) +
                                    fVar32 * fVar32) + 0.0;
                          fVar32 = 0.0;
                          if (unaff_x20 != 1) {
                            fVar32 = fStack000000000000010c;
                          }
                          uVar14 = (ulong)(uint)fVar32;
                          uVar41 = uVar14;
                          lVar12 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ff188);
                          FUN_040594d0(lVar12,*(undefined8 *)PTR_DAT_069ff180);
                          if (fVar32 < fStack00000000000001d4 - fStack000000000000010c) {
                            fVar32 = *(float *)((ulong)&stack0x00000278 | 4);
                            do {
                              if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24)
                              goto LAB_0316f2c4;
                              uVar45 = *(undefined8 *)pfVar30;
                              fVar33 = *(float *)(lVar10 + 0x28);
                              if (DAT_06db4c77 == '\0') {
                                FUN_02d965b8(PTR_DAT_069fbb48);
                                DAT_06db4c77 = '\x01';
                              }
                              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                                thunk_FUN_02df485c();
                              }
                              fVar34 = (float)uVar14;
                              fVar40 = (float)uVar11 * fVar34 + in_stack_00000278;
                              fVar47 = (float)((ulong)uVar11 >> 0x20) * fVar34 + fVar32;
                              uVar48 = CONCAT44(fVar47,fVar40);
                              fVar49 = fVar31 * fVar34 + in_stack_00000160._4_4_;
                              fVar40 = fVar40 - (float)uVar45;
                              fVar47 = fVar47 - (float)((ulong)uVar45 >> 0x20);
                              fVar33 = fVar49 - fVar33;
                              fVar33 = SQRT(fVar33 * fVar33 + fVar40 * fVar40 + fVar47 * fVar47);
                              uVar17 = (ulong)(uint)fVar33;
                              if (in_stack_000000b0 < fVar33) {
                                _uStack00000000000001b0 = uVar48;
                                in_stack_000001b8 = fVar49;
                                if (*(char *)(in_stack_00000148 + 0x5d6) != '\0') {
                                  if (*(long *)(in_stack_00000148 + 0x20) == 0) goto LAB_03168190;
                                  FUN_03199614(*(long *)(in_stack_00000148 + 0x20),&stack0x000001b0,
                                               0);
                                }
                                if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                                   (lVar13 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                          uVar22 & 0xffffffff,*puVar24), lVar13 == 0
                                   )) goto LAB_03168190;
                                if (*(float *)(lVar13 + 0x100) == 0.0) {
                                  if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                                     (lVar13 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                            uVar22 & 0xffffffff,*puVar24),
                                     lVar13 == 0)) goto LAB_03168190;
                                  if (*(float *)(lVar13 + 0x104) != 0.0) goto LAB_0316a920;
                                  if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                                     (lVar13 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                            uVar22 & 0xffffffff,*puVar24),
                                     lVar13 == 0)) goto LAB_03168190;
                                  if (*(float *)(lVar13 + 0x110) != 0.0) goto LAB_0316a920;
                                  if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                                     (lVar13 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                            uVar22 & 0xffffffff,*puVar24),
                                     lVar13 == 0)) goto LAB_03168190;
                                  if (*(float *)(lVar13 + 0x114) != 0.0) goto LAB_0316a920;
                                  lVar13 = *in_stack_000000e0;
                                  if (lVar13 == 0) goto LAB_03168190;
                                  lVar16 = *(long *)(lVar13 + 0x10);
                                  lVar20 = *(long *)PTR_DAT_069ff178;
                                  *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                                  if (lVar16 == 0) goto LAB_03168190;
                                  uVar44 = *(uint *)(lVar13 + 0x18);
                                  if (uVar44 < *(uint *)(lVar16 + 0x18)) {
                                    *(uint *)(lVar13 + 0x18) = uVar44 + 1;
                                    *(undefined4 *)(lVar16 + (long)(int)uVar44 * 4 + 0x20) = 0;
                                  }
                                  else {
                                    FUN_04059d64(0,lVar13,*(undefined8 *)
                                                           (*(long *)(*(long *)(lVar20 + 0x20) +
                                                                     0xc0) + 0x70));
                                  }
                                }
                                else {
LAB_0316a920:
                                  if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
                                  fVar33 = *in_stack_000000d8;
                                  uVar45 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                        uVar22 & 0xffffffff,*puVar24);
                                  FUN_0316f6a0(fVar34 + fVar33,fVar43,uVar45,uVar45,&stack0x0000022c
                                               ,&stack0x00000228,&stack0x00000224,&stack0x00000218,
                                               &stack0x000001b0,&stack0x00000214);
                                }
                                puVar2 = PTR_DAT_069fbee0;
                                lVar13 = *(long *)(unaff_x26 + 0x20);
                                if (lVar13 == 0) goto LAB_03168190;
                                lVar16 = *(long *)(lVar13 + 0x10);
                                uVar17 = (ulong)(uint)in_stack_000001b8;
                                *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                                if (lVar16 == 0) goto LAB_03168190;
                                uVar44 = *(uint *)(lVar13 + 0x18);
                                if (uVar44 < *(uint *)(lVar16 + 0x18)) {
                                  lVar16 = lVar16 + (long)(int)uVar44 * 0xc;
                                  *(uint *)(lVar13 + 0x18) = uVar44 + 1;
                                  *(undefined4 *)(lVar16 + 0x20) = uStack00000000000001b0;
                                  *(undefined4 *)(lVar16 + 0x24) = uStack00000000000001b4;
                                  *(float *)(lVar16 + 0x28) = in_stack_000001b8;
                                }
                                else {
                                  FUN_0409f624(lVar13,*(undefined8 *)
                                                       (*(long *)(*(long *)(*(long *)puVar2 + 0x20)
                                                                 + 0xc0) + 0x70));
                                }
                                if (lVar12 == 0) goto LAB_03168190;
                                lVar13 = *(long *)(lVar12 + 0x10);
                                lVar16 = *(long *)PTR_DAT_069ff178;
                                *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                                if (lVar13 == 0) goto LAB_03168190;
                                uVar44 = *(uint *)(lVar12 + 0x18);
                                if (uVar44 < *(uint *)(lVar13 + 0x18)) {
                                  *(uint *)(lVar12 + 0x18) = uVar44 + 1;
                                  *(undefined4 *)(lVar13 + (long)(int)uVar44 * 4 + 0x20) = 0;
                                }
                                else {
                                  FUN_04059d64(lVar12,*(undefined8 *)
                                                       (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) +
                                                       0x70));
                                }
                                lVar13 = *in_stack_000000b8;
                                if (lVar13 == 0) goto LAB_03168190;
                                lVar16 = *(long *)(lVar13 + 0x10);
                                lVar20 = *(long *)PTR_DAT_069ff178;
                                *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                                if (lVar16 == 0) goto LAB_03168190;
                                uVar44 = *(uint *)(lVar13 + 0x18);
                                if (uVar44 < *(uint *)(lVar16 + 0x18)) {
                                  *(uint *)(lVar13 + 0x18) = uVar44 + 1;
                                  *(undefined4 *)(lVar16 + (long)(int)uVar44 * 4 + 0x20) = 0;
                                }
                                else {
                                  FUN_04059d64(0,lVar13,*(undefined8 *)
                                                         (*(long *)(*(long *)(lVar20 + 0x20) + 0xc0)
                                                         + 0x70));
                                }
                                lVar13 = *(long *)(unaff_x26 + 0x28);
                                if (lVar13 == 0) goto LAB_03168190;
                                lVar16 = *(long *)(lVar13 + 0x10);
                                lVar20 = *(long *)PTR_DAT_069ff178;
                                *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                                if (lVar16 == 0) goto LAB_03168190;
                                uVar44 = *(uint *)(lVar13 + 0x18);
                                if (uVar44 < *(uint *)(lVar16 + 0x18)) {
                                  *(uint *)(lVar13 + 0x18) = uVar44 + 1;
                                  *(float *)(lVar16 + (long)(int)uVar44 * 4 + 0x20) =
                                       fVar34 / fStack00000000000001d4;
                                }
                                else {
                                  FUN_04059d64(lVar13,*(undefined8 *)
                                                       (*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) +
                                                       0x70));
                                }
                              }
                              uVar41 = (ulong)(uint)fStack000000000000010c;
                              uVar14 = (ulong)(uint)(fVar34 + fStack000000000000010c);
                            } while (fVar34 + fStack000000000000010c <
                                     fStack00000000000001d4 - fStack000000000000010c);
                          }
                          fStack000000000000012c = (float)uVar17;
                          fStack0000000000000128 = (float)uVar41;
                          if (*(char *)(in_stack_00000148 + 0x5d6) == '\0') {
                            if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
                            lVar13 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                  uVar22 & 0xffffffff,
                                                  *(undefined8 *)PTR_DAT_06a0b440);
                            fStack000000000000012c = (float)uVar17;
                            fStack0000000000000128 = (float)uVar41;
                            if (lVar13 == 0) goto LAB_03168190;
                            if (*(int *)(lVar13 + 0x6c) == 1) {
                              if (*(long *)(unaff_x26 + 0x28) == 0) goto LAB_03168190;
                              iVar26 = 0;
                              puVar29 = (undefined4 *)(in_stack_00000170 + 0x20 + uVar22 * 0xc);
                              lVar13 = *(long *)(unaff_x26 + 0x28);
                              while( true ) {
                                fStack000000000000012c = (float)uVar17;
                                fStack0000000000000128 = (float)uVar41;
                                if (*(int *)(lVar13 + 0x18) <= iVar26) break;
                                uVar17 = (ulong)*(uint *)(in_stack_00000170 + 0x18);
                                if ((((uVar17 <= uVar22) || (uVar17 <= unaff_x20)) ||
                                    (uVar17 <= unaff_x24)) || (uVar17 <= unaff_x20 + 2))
                                goto LAB_0316f2c4;
                                uVar42 = *puVar29;
                                fVar31 = (float)puVar29[1];
                                uVar44 = puVar29[2];
                                fVar43 = *pfVar21;
                                uVar50 = *(undefined4 *)(lVar9 + 0x24);
                                uVar53 = *(undefined4 *)(lVar9 + 0x28);
                                FUN_04059a68(lVar13,iVar26,*(undefined8 *)PTR_DAT_06a0a108);
                                FUN_0316f340(uVar42,fVar31,uVar44,fVar43,uVar50,uVar53);
                                unaff_x26 = &stack0x00000218;
                                if (((in_stack_00000238 == 0) ||
                                    (uVar42 = FUN_0409f2f4(in_stack_00000238,iVar26,
                                                           *(undefined8 *)PTR_DAT_069fd088),
                                    lVar12 == 0)) ||
                                   (fVar43 = (float)FUN_04059a68(lVar12,iVar26,
                                                                 *(undefined8 *)PTR_DAT_06a0a108),
                                   in_stack_00000238 == 0)) goto LAB_03168190;
                                uVar41 = (ulong)(uint)(fVar31 + fVar43);
                                uVar17 = (ulong)uVar44;
                                FUN_0409f350(uVar42,in_stack_00000238,iVar26,
                                             *(undefined8 *)PTR_DAT_06a0b7d0);
                                iVar26 = iVar26 + 1;
                                lVar13 = in_stack_00000240;
                                if (in_stack_00000240 == 0) goto LAB_03168190;
                              }
                            }
                          }
                          puVar2 = PTR_DAT_069fbee0;
                          lVar9 = *(long *)(unaff_x26 + 0x20);
                          if (lVar9 == 0) goto LAB_03168190;
                          if (*(int *)(lVar9 + 0x18) == 0) {
                            if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
                            lVar12 = *(long *)(lVar9 + 0x10);
                            fVar31 = *pfVar30;
                            uVar42 = *(undefined4 *)(lVar10 + 0x24);
                            uVar50 = *(undefined4 *)(lVar10 + 0x28);
                            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                            if (lVar12 == 0) goto LAB_03168190;
                            if (*(int *)(lVar12 + 0x18) == 0) {
                              FUN_0409f624(lVar9,*(undefined8 *)
                                                  (*(long *)(*(long *)(*(long *)puVar2 + 0x20) +
                                                            0xc0) + 0x70));
                            }
                            else {
                              *(undefined4 *)(lVar9 + 0x18) = 1;
                              *(float *)(lVar12 + 0x20) = fVar31;
                              *(undefined4 *)(lVar12 + 0x24) = uVar42;
                              *(undefined4 *)(lVar12 + 0x28) = uVar50;
                            }
                            if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
                            fVar43 = *pfVar30;
                            fVar31 = *(float *)(lVar10 + 0x24);
                            fStack000000000000012c = *(float *)(lVar10 + 0x28);
                            if (DAT_06db4c77 == '\0') {
                              FUN_02d965b8(PTR_DAT_069fbb48);
                              DAT_06db4c77 = '\x01';
                            }
                            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                              thunk_FUN_02df485c();
                            }
                            fVar31 = in_stack_0000027c - fVar31;
                            lVar9 = *(long *)(unaff_x26 + 0x28);
                            fStack000000000000012c =
                                 in_stack_00000160._4_4_ - fStack000000000000012c;
                            fStack0000000000000128 = fStack000000000000012c * fStack000000000000012c
                            ;
                            fStack00000000000001d4 =
                                 SQRT(fStack0000000000000128 +
                                      (in_stack_00000278 - fVar43) * (in_stack_00000278 - fVar43) +
                                      fVar31 * fVar31);
                            if (lVar9 == 0) goto LAB_03168190;
                            lVar12 = *(long *)(lVar9 + 0x10);
                            lVar13 = *(long *)PTR_DAT_069ff178;
                            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                            if (lVar12 == 0) goto LAB_03168190;
                            uVar44 = *(uint *)(lVar9 + 0x18);
                            if (uVar44 < *(uint *)(lVar12 + 0x18)) {
                              *(uint *)(lVar9 + 0x18) = uVar44 + 1;
                              *(undefined4 *)(lVar12 + (long)(int)uVar44 * 4 + 0x20) = 0x3f800000;
                            }
                            else {
                              FUN_04059d64(0x3f800000,lVar9,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                            }
                            lVar9 = *in_stack_000000e0;
                            if (lVar9 == 0) goto LAB_03168190;
                            lVar12 = *(long *)(lVar9 + 0x10);
                            lVar13 = *(long *)PTR_DAT_069ff178;
                            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                            if (lVar12 == 0) goto LAB_03168190;
                            uVar44 = *(uint *)(lVar9 + 0x18);
                            if (uVar44 < *(uint *)(lVar12 + 0x18)) {
                              *(uint *)(lVar9 + 0x18) = uVar44 + 1;
                              *(undefined4 *)(lVar12 + (long)(int)uVar44 * 4 + 0x20) = 0;
                            }
                            else {
                              FUN_04059d64(0,lVar9,*(undefined8 *)
                                                    (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) +
                                                    0x70));
                            }
                            lVar9 = *in_stack_000000b8;
                            if (lVar9 == 0) goto LAB_03168190;
                            lVar12 = *(long *)(lVar9 + 0x10);
                            lVar13 = *(long *)PTR_DAT_069ff178;
                            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                            if (lVar12 == 0) goto LAB_03168190;
                            uVar44 = *(uint *)(lVar9 + 0x18);
                            if (uVar44 < *(uint *)(lVar12 + 0x18)) {
                              *(uint *)(lVar9 + 0x18) = uVar44 + 1;
                              *(undefined4 *)(lVar12 + (long)(int)uVar44 * 4 + 0x20) = 0;
                            }
                            else {
                              FUN_04059d64(0,lVar9,*(undefined8 *)
                                                    (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) +
                                                    0x70));
                            }
                          }
                          puVar24 = (undefined8 *)PTR_DAT_06a0b440;
                          puVar2 = PTR_DAT_069fd088;
                          unaff_x28 = (long *)PTR_DAT_069fb978;
                          lVar9 = *(long *)(unaff_x26 + 0x20);
                          if (lVar9 == 0) goto LAB_03168190;
                          unaff_x29 = &PTR_FUN_06db4000;
                          if (0 < *(int *)(lVar9 + 0x18)) {
                            fVar31 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,
                                                         *(undefined8 *)PTR_DAT_069fd088);
                            if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24) goto LAB_0316f2c4;
                            fVar43 = fStack0000000000000128 - *(float *)(lVar10 + 0x24);
                            fStack000000000000012c =
                                 fStack000000000000012c - *(float *)(lVar10 + 0x28);
                            fStack0000000000000128 = fStack00000000000000a4;
                            if (fStack00000000000000a4 <=
                                fStack000000000000012c * fStack000000000000012c +
                                (fVar31 - *pfVar30) * (fVar31 - *pfVar30) + fVar43 * fVar43) {
                              lVar9 = *(long *)(unaff_x26 + 0x20);
                              if (lVar9 == 0) goto LAB_03168190;
                              fVar31 = fStack00000000000000a4;
                              fVar43 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,
                                                           *(undefined8 *)puVar2);
                              if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24)
                              goto LAB_0316f2c4;
                              fVar32 = *pfVar30;
                              fVar40 = *(float *)(lVar10 + 0x24);
                              fVar33 = *(float *)(lVar10 + 0x28);
                              if (DAT_06db4c77 == '\0') {
                                FUN_02d965b8(PTR_DAT_069fbb48);
                                DAT_06db4c77 = '\x01';
                              }
                              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                                thunk_FUN_02df485c();
                              }
                              puVar3 = PTR_DAT_069fbee0;
                              fVar31 = fVar31 - fVar40;
                              lVar9 = *(long *)(unaff_x26 + 0x20);
                              fStack000000000000012c = fStack000000000000012c - fVar33;
                              if (in_stack_000000b0 <=
                                  SQRT(fStack000000000000012c * fStack000000000000012c +
                                       (fVar43 - fVar32) * (fVar43 - fVar32) + fVar31 * fVar31)) {
                                if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24)
                                goto LAB_0316f2c4;
                                if (lVar9 == 0) goto LAB_03168190;
                                lVar12 = *(long *)(lVar9 + 0x10);
                                fVar31 = *pfVar30;
                                fVar43 = *(float *)(lVar10 + 0x24);
                                fStack000000000000012c = *(float *)(lVar10 + 0x28);
                                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                if (lVar12 == 0) goto LAB_03168190;
                                uVar44 = *(uint *)(lVar9 + 0x18);
                                if (uVar44 < *(uint *)(lVar12 + 0x18)) {
                                  lVar12 = lVar12 + (long)(int)uVar44 * 0xc;
                                  *(uint *)(lVar9 + 0x18) = uVar44 + 1;
                                  *(float *)(lVar12 + 0x20) = fVar31;
                                  *(float *)(lVar12 + 0x24) = fVar43;
                                  *(float *)(lVar12 + 0x28) = fStack000000000000012c;
                                }
                                else {
                                  FUN_0409f624(lVar9,*(undefined8 *)
                                                      (*(long *)(*(long *)(*(long *)puVar3 + 0x20) +
                                                                0xc0) + 0x70));
                                }
                                fVar31 = fStack00000000000001d4;
                                lVar9 = *(long *)(unaff_x26 + 0x20);
                                if (lVar9 == 0) goto LAB_03168190;
                                fVar32 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,
                                                             *(undefined8 *)puVar2);
                                if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24)
                                goto LAB_0316f2c4;
                                fVar33 = *pfVar30;
                                fVar47 = *(float *)(lVar10 + 0x24);
                                fVar40 = *(float *)(lVar10 + 0x28);
                                if (DAT_06db4c77 == '\0') {
                                  FUN_02d965b8(PTR_DAT_069fbb48);
                                  DAT_06db4c77 = '\x01';
                                }
                                if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                                  thunk_FUN_02df485c();
                                }
                                fVar43 = fVar43 - fVar47;
                                lVar9 = *(long *)(unaff_x26 + 0x28);
                                fStack000000000000012c = fStack000000000000012c - fVar40;
                                fStack0000000000000128 =
                                     fStack000000000000012c * fStack000000000000012c;
                                fStack00000000000001d4 =
                                     fVar31 + SQRT(fStack0000000000000128 +
                                                   (fVar32 - fVar33) * (fVar32 - fVar33) +
                                                   fVar43 * fVar43);
                                if (lVar9 == 0) goto LAB_03168190;
                                lVar10 = *(long *)(lVar9 + 0x10);
                                lVar12 = *(long *)PTR_DAT_069ff178;
                                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                if (lVar10 == 0) goto LAB_03168190;
                                uVar44 = *(uint *)(lVar9 + 0x18);
                                if (uVar44 < *(uint *)(lVar10 + 0x18)) {
                                  *(uint *)(lVar9 + 0x18) = uVar44 + 1;
                                  *(undefined4 *)(lVar10 + (long)(int)uVar44 * 4 + 0x20) =
                                       0x3f800000;
                                }
                                else {
                                  FUN_04059d64(0x3f800000,lVar9,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
                                  ;
                                }
                                lVar9 = *in_stack_000000e0;
                                if (lVar9 == 0) goto LAB_03168190;
                                lVar10 = *(long *)(lVar9 + 0x10);
                                lVar12 = *(long *)PTR_DAT_069ff178;
                                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                if (lVar10 == 0) goto LAB_03168190;
                                uVar44 = *(uint *)(lVar9 + 0x18);
                                if (uVar44 < *(uint *)(lVar10 + 0x18)) {
                                  *(uint *)(lVar9 + 0x18) = uVar44 + 1;
                                  *(undefined4 *)(lVar10 + (long)(int)uVar44 * 4 + 0x20) = 0;
                                }
                                else {
                                  FUN_04059d64(0,lVar9,*(undefined8 *)
                                                        (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0)
                                                        + 0x70));
                                }
                              }
                              else {
                                if (lVar9 == 0) goto LAB_03168190;
                                if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x24)
                                goto LAB_0316f2c4;
                                fStack000000000000012c = *(float *)(lVar10 + 0x28);
                                fStack0000000000000128 = *(float *)(lVar10 + 0x24);
                                FUN_0409f350(*pfVar30,lVar9,*(int *)(lVar9 + 0x18) + -1,
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
                          iVar26 = *(int *)(lVar9 + 0x18);
                          in_stack_00000278 =
                               (float)FUN_0409f2f4(lVar9,iVar26 + -1,*(undefined8 *)PTR_DAT_069fd088
                                                  );
                          lVar9 = *(long *)(in_stack_00000148 + 0x2c8);
                          *(float *)(in_stack_00000148 + 0x2c0) =
                               *(float *)(in_stack_00000148 + 0x2c0) + fStack00000000000001d4;
                          if (lVar9 == 0) goto LAB_03168190;
                          lVar10 = *(long *)(lVar9 + 0x10);
                          lVar12 = *(long *)PTR_DAT_069fc3e0;
                          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                          if (lVar10 == 0) goto LAB_03168190;
                          uVar44 = *(uint *)(lVar9 + 0x18);
                          iStack00000000000000d4 = iVar26 + iStack00000000000000d4;
                          if (uVar44 < *(uint *)(lVar10 + 0x18)) {
                            *(uint *)(lVar9 + 0x18) = uVar44 + 1;
                            *(int *)(lVar10 + (long)(int)uVar44 * 4 + 0x20) = iStack00000000000000d4
                            ;
                          }
                          else {
                            FUN_03fb3e1c(lVar9,iStack00000000000000d4,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                          }
                          if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                             (lVar9 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                   uVar22 & 0xffffffff,*puVar24), lVar9 == 0))
                          goto LAB_03168190;
                          iStack0000000000000108 = *(int *)(lVar9 + 0x6c);
                          in_stack_0000027c = fStack0000000000000128;
                          in_stack_00000280 = fStack000000000000012c;
                          in_stack_00000130 = in_stack_00000278;
                        }
LAB_0316c620:
                        if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                           (lVar9 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                 uVar22 & 0xffffffff,*puVar24),
                           fVar31 = fStack00000000000001d4, lVar9 == 0)) goto LAB_03168190;
                        if (*(char *)(lVar9 + 0xb8) != '\0') {
                          if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
                          uVar11 = *(undefined8 *)(in_stack_00000148 + 0x20);
                          uVar45 = *(undefined8 *)(unaff_x26 + 0x28);
                          uVar42 = *(undefined4 *)(in_stack_00000148 + 0x128);
                          lVar9 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                               unaff_x20 & 0xffffffff,
                                               *(undefined8 *)PTR_DAT_06a0b440);
                          if (lVar9 == 0) goto LAB_03168190;
                          FUN_031098f4(uVar42,uStack000000000000006c,fVar31,uVar11,&stack0x00000238,
                                       uVar45,&stack0x00000248,*(undefined1 *)(lVar9 + 0xb8),
                                       *(undefined8 *)(unaff_x26 + 0x78),in_stack_00000070,
                                       in_stack_000000e0);
                          puVar24 = (undefined8 *)PTR_DAT_06a0b440;
                        }
                        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
                        FUN_0409f858(*(long *)(unaff_x26 + 0x78),*(undefined8 *)(unaff_x26 + 0x20),
                                     *(undefined8 *)PTR_DAT_06a0b3a0);
                        if (*in_stack_00000078 == 0) goto LAB_03168190;
                        FUN_04059f70(*in_stack_00000078,*(undefined8 *)(unaff_x26 + 0x28),
                                     *(undefined8 *)PTR_DAT_06a0b3d8);
                        fVar43 = fStack0000000000000088;
                        fVar31 = in_stack_00000080._4_4_;
                        FUN_0316fb80(fStack000000000000008c,in_stack_00000148,extraout_x1,
                                     unaff_x20 & 0xffffffff,in_stack_00000170,&stack0x00000268,0,
                                     *(undefined8 *)(unaff_x26 + 0x78));
                        if (iVar28 + 3 < *(int *)(in_stack_00000170 + 0x18)) {
                          FUN_0317018c(in_stack_00000148,*(undefined8 *)(in_stack_00000148 + 0x68),
                                       unaff_x20 & 0xffffffff,in_stack_00000170,&stack0x00000258,0);
                        }
                        puVar3 = PTR_DAT_069ff178;
                        puVar2 = PTR_DAT_069fd088;
                        lVar9 = *in_stack_00000090;
                        if (lVar9 == 0) goto LAB_03168190;
                        lVar10 = *(long *)(lVar9 + 0x10);
                        fVar32 = *in_stack_000000d8;
                        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                        if (lVar10 == 0) goto LAB_03168190;
                        uVar44 = *(uint *)(lVar9 + 0x18);
                        if (uVar44 < *(uint *)(lVar10 + 0x18)) {
                          *(uint *)(lVar9 + 0x18) = uVar44 + 1;
                          *(float *)(lVar10 + (long)(int)uVar44 * 4 + 0x20) = fVar32;
                        }
                        else {
                          FUN_04059d64(lVar9,*(undefined8 *)
                                              (*(long *)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0) +
                                              0x70));
                        }
                        if ((long)unaff_x20 < (long)*(int *)(in_stack_00000098 + 0x18)) {
                          lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*puVar24);
                          lVar10 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*puVar24);
                          lVar12 = *(long *)(unaff_x26 + 0x78);
                          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_02d96860();
                          }
                          fVar32 = (float)FUN_0409f2f4(lVar12,*(int *)(lVar12 + 0x18) + -1,
                                                       *(undefined8 *)puVar2);
                          lVar12 = *(long *)(unaff_x26 + 0x78);
                          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_02d96860();
                          }
                          fVar33 = fVar43;
                          fVar40 = fVar31;
                          fVar47 = (float)FUN_0409f2f4(lVar12,*(int *)(lVar12 + 0x18) + -2,
                                                       *(undefined8 *)puVar2);
                          if (DAT_06db4c75 == '\0') {
                            FUN_02d965b8(PTR_DAT_069fbb48);
                            DAT_06db4c75 = '\x01';
                          }
                          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                            thunk_FUN_02df485c();
                          }
                          fVar32 = fVar32 - fVar47;
                          fVar43 = fVar43 - fVar33;
                          fVar31 = fVar31 - fVar40;
                          fVar33 = SQRT(fVar31 * fVar31 + fVar32 * fVar32 + fVar43 * fVar43);
                          if (fVar33 <= DAT_010fd13c) {
                            if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
                              FUN_02d965b8(unaff_x28);
                              *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
                            }
                            pfVar21 = *(float **)(*unaff_x28 + 0xb8);
                            fVar32 = *pfVar21;
                            fVar43 = pfVar21[1];
                            fVar31 = pfVar21[2];
                          }
                          else {
                            fVar32 = fVar32 / fVar33;
                            fVar43 = fVar43 / fVar33;
                            fVar31 = fVar31 / fVar33;
                          }
                          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_02d96860();
                          }
                          *(float *)(lVar10 + 0x94) = fVar32;
                          *(float *)(lVar10 + 0x98) = fVar43;
                          *(float *)(lVar10 + 0x9c) = fVar31;
                          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_02d96860();
                          }
                          *(float *)(lVar9 + 0x88) = fVar32;
                          *(float *)(lVar9 + 0x8c) = fVar43;
                          *(float *)(lVar9 + 0x90) = fVar31;
                          puVar24 = (undefined8 *)PTR_DAT_06a0b440;
                        }
                        if (unaff_x20 < 2) {
                          if (unaff_x20 == 1) {
                            lVar9 = FUN_0400ff1c(in_stack_00000098,uVar22 & 0xffffffff,*puVar24);
                            lVar10 = FUN_0400ff1c(in_stack_00000098,uVar22 & 0xffffffff,*puVar24);
                            if (*(long *)(unaff_x26 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_02d96860();
                            }
                            fVar32 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),1,
                                                         *(undefined8 *)puVar2);
                            if (*(long *)(unaff_x26 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_02d96860();
                            }
                            fVar33 = fVar43;
                            fVar40 = fVar31;
                            fVar47 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,
                                                         *(undefined8 *)puVar2);
                            if (DAT_06db4c75 == '\0') {
                              FUN_02d965b8(PTR_DAT_069fbb48);
                              DAT_06db4c75 = '\x01';
                            }
                            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                              thunk_FUN_02df485c();
                            }
                            fVar32 = fVar32 - fVar47;
                            fVar43 = fVar43 - fVar33;
                            fVar31 = fVar31 - fVar40;
                            fVar33 = SQRT(fVar31 * fVar31 + fVar32 * fVar32 + fVar43 * fVar43);
                            if (fVar33 <= DAT_010fd13c) {
                              if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
                                FUN_02d965b8(unaff_x28);
                                *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
                              }
                              pfVar21 = *(float **)(*unaff_x28 + 0xb8);
                              fVar32 = *pfVar21;
                              fVar43 = pfVar21[1];
                              fVar31 = pfVar21[2];
                            }
                            else {
                              fVar32 = fVar32 / fVar33;
                              fVar43 = fVar43 / fVar33;
                              fVar31 = fVar31 / fVar33;
                            }
                            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_02d96860();
                            }
                            *(float *)(lVar10 + 0x94) = fVar32;
                            *(float *)(lVar10 + 0x98) = fVar43;
                            *(float *)(lVar10 + 0x9c) = fVar31;
                            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_02d96860();
                            }
                            *(float *)(lVar9 + 0x88) = fVar32;
                            *(float *)(lVar9 + 0x8c) = fVar43;
                            *(float *)(lVar9 + 0x90) = fVar31;
                          }
                        }
                        else if ((long)unaff_x20 < (long)*(int *)(in_stack_00000098 + 0x18)) {
                          if (*(long *)(unaff_x26 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_02d96860();
                          }
                          iVar28 = *(int *)(*(long *)(unaff_x26 + 0x78) + 0x18);
                          lVar9 = FUN_0400ff1c(in_stack_00000098,uVar22 & 0xffffffff,*puVar24);
                          puVar2 = PTR_DAT_069fd088;
                          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_02d96860();
                          }
                          if (*(int *)(lVar9 + 0xbc) + 1 < iVar28) {
                            lVar9 = FUN_0400ff1c(in_stack_00000098,uVar22 & 0xffffffff,*puVar24);
                            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_02d96860();
                            }
                            if (*(int *)(lVar9 + 0x6c) != 3) {
                              lVar10 = *(long *)(unaff_x26 + 0x78);
                              lVar9 = FUN_0400ff1c(in_stack_00000098,uVar22 & 0xffffffff,*puVar24);
                              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_02d96860();
                              }
                              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_02d96860();
                              }
                              fVar40 = (float)FUN_0409f2f4(lVar10,*(int *)(lVar9 + 0xbc) + 1,
                                                           *(undefined8 *)puVar2);
                              lVar10 = *(long *)(unaff_x26 + 0x78);
                              fVar32 = fVar43;
                              fVar33 = fVar31;
                              lVar9 = FUN_0400ff1c(in_stack_00000098,uVar22 & 0xffffffff,*puVar24);
                              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_02d96860();
                              }
                              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_02d96860();
                              }
                              fVar47 = (float)FUN_0409f2f4(lVar10,*(undefined4 *)(lVar9 + 0xbc),
                                                           *(undefined8 *)puVar2);
                              lVar9 = FUN_0400ff1c(in_stack_00000098,uVar22 & 0xffffffff,*puVar24);
                              if (DAT_06db4c75 == '\0') {
                                FUN_02d965b8(PTR_DAT_069fbb48);
                                DAT_06db4c75 = '\x01';
                              }
                              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                                thunk_FUN_02df485c();
                              }
                              fVar49 = DAT_010fd13c;
                              fVar40 = fVar40 - fVar47;
                              fVar47 = fVar43 - fVar32;
                              fVar33 = fVar31 - fVar33;
                              fVar31 = SQRT(fVar33 * fVar33 + fVar40 * fVar40 + fVar47 * fVar47);
                              if (fVar31 <= DAT_010fd13c) {
                                if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
                                  FUN_02d965b8(unaff_x28);
                                  *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
                                }
                                pfVar21 = *(float **)(*unaff_x28 + 0xb8);
                                fVar34 = *pfVar21;
                                fVar47 = pfVar21[1];
                                fVar31 = pfVar21[2];
                              }
                              else {
                                fVar34 = fVar40 / fVar31;
                                fVar47 = fVar47 / fVar31;
                                fVar31 = fVar33 / fVar31;
                              }
                              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_02d96860();
                              }
                              *(float *)(lVar9 + 0x88) = fVar34;
                              *(float *)(lVar9 + 0x8c) = fVar47;
                              uVar11 = *puVar24;
                              *(float *)(lVar9 + 0x90) = fVar31;
                              uVar44 = *(uint *)(in_stack_00000098 + 0x18);
                              lVar9 = FUN_0400ff1c(in_stack_00000098,uVar22 & 0xffffffff,uVar11);
                              if (unaff_x20 != uVar44) {
                                fVar43 = fVar32;
                              }
                              if (DAT_06db4c75 == '\0') {
                                FUN_02d965b8(PTR_DAT_069fbb48);
                                DAT_06db4c75 = '\x01';
                              }
                              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                                thunk_FUN_02df485c();
                              }
                              fVar43 = fVar43 - fVar32;
                              fVar32 = SQRT(fVar33 * fVar33 + fVar40 * fVar40 + fVar43 * fVar43);
                              if (fVar32 <= fVar49) {
                                if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
                                  FUN_02d965b8(unaff_x28);
                                  *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
                                }
                                uVar11 = **(undefined8 **)(*unaff_x28 + 0xb8);
                                fVar33 = *(float *)(*(undefined8 **)(*unaff_x28 + 0xb8) + 1);
                              }
                              else {
                                fVar33 = fVar33 / fVar32;
                                uVar11 = CONCAT44(fVar43 / fVar32,fVar40 / fVar32);
                                fVar31 = fVar40;
                              }
                              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_02d96860();
                              }
                              *(undefined8 *)(lVar9 + 0x94) = uVar11;
                              *(float *)(lVar9 + 0x9c) = fVar33;
                            }
                          }
                        }
                        if ((long)unaff_x20 < (long)*(int *)(in_stack_00000098 + 0x18)) {
                          lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*puVar24);
                          lVar10 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*puVar24);
                          if ((lVar10 == 0) || (lVar9 == 0)) goto LAB_03168190;
                          uVar11 = *(undefined8 *)(lVar10 + 0x48);
                          *(undefined4 *)(lVar9 + 0x5c) = *(undefined4 *)(lVar10 + 0x50);
                          *(undefined8 *)(lVar9 + 0x54) = uVar11;
                        }
                        if ((long)(*(int *)(in_stack_00000170 + 0x18) + -2) <= (long)unaff_x24) {
                          if (*(char *)(in_stack_00000148 + 0x84) == '\0') {
                            lVar9 = FUN_0400ff1c(in_stack_00000098,
                                                 *(int *)(in_stack_00000098 + 0x18) + -1,*puVar24);
                            if ((*(long *)(unaff_x26 + 0x78) == 0) || (lVar9 == 0))
                            goto LAB_03168190;
                            uVar11 = *puVar24;
                            *(undefined4 *)(lVar9 + 0xbc) =
                                 *(undefined4 *)(*(long *)(unaff_x26 + 0x78) + 0x18);
                            lVar9 = FUN_0400ff1c(in_stack_00000098,
                                                 *(int *)(in_stack_00000098 + 0x18) + -1,uVar11);
                            if (lVar9 == 0) goto LAB_03168190;
                            uVar11 = *puVar24;
                            *(float *)(lVar9 + 0xc0) = *in_stack_000000d8;
                            lVar9 = FUN_0400ff1c(in_stack_00000098,0,uVar11);
                            if (lVar9 == 0) goto LAB_03168190;
                            uVar11 = *puVar24;
                            *(undefined4 *)(lVar9 + 0xbc) = 0;
                            lVar9 = FUN_0400ff1c(in_stack_00000098,0,uVar11);
                            if (lVar9 == 0) goto LAB_03168190;
                            *(undefined4 *)(lVar9 + 0xc0) = 0;
                            if (2 < *(int *)(in_stack_00000098 + 0x18)) {
                              lVar9 = FUN_0400ff1c(in_stack_00000098,
                                                   *(int *)(in_stack_00000098 + 0x18) + -2,*puVar24)
                              ;
                              fVar31 = *in_stack_000000d8;
                              lVar10 = FUN_0400ff1c(in_stack_00000098,
                                                    *(int *)(in_stack_00000098 + 0x18) + -2,*puVar24
                                                   );
                              if ((lVar10 == 0) || (lVar9 == 0)) goto LAB_03168190;
                              uVar11 = *puVar24;
                              *(float *)(lVar9 + 200) = fVar31 - *(float *)(lVar10 + 0xc0);
                              lVar9 = FUN_0400ff1c(in_stack_00000098,
                                                   *(int *)(in_stack_00000098 + 0x18) + -2,uVar11);
                              if (lVar9 == 0) goto LAB_03168190;
                              fVar31 = *(float *)(lVar9 + 200);
                              lVar9 = FUN_0400ff1c(in_stack_00000098,
                                                   *(int *)(in_stack_00000098 + 0x18) + -2,*puVar24)
                              ;
                              lVar10 = FUN_0400ff1c(in_stack_00000098,
                                                    *(int *)(in_stack_00000098 + 0x18) + -2,*puVar24
                                                   );
                              if (1000.0 <= fVar31) {
                                if (lVar10 == 0) goto LAB_03168190;
                                fStack00000000000001d0 = *(float *)(lVar10 + 200) / 1000.0;
                                uVar11 = FUN_054fad00(&stack0x000001d0,
                                                      *(undefined8 *)PTR_DAT_06a0c4e0,0);
                                uVar11 = FUN_05362cb4(uVar11,*(undefined8 *)PTR_DAT_06a0c488,0);
                              }
                              else {
                                if (lVar10 == 0) goto LAB_03168190;
                                uVar11 = FUN_054fad00(lVar10 + 200,*(undefined8 *)PTR_DAT_06a0c498,0
                                                     );
                                uVar11 = FUN_05362cb4(uVar11,*(undefined8 *)PTR_DAT_06a0c4f0,0);
                              }
                              if (lVar9 != 0) {
                                *(undefined8 *)(lVar9 + 0xd0) = uVar11;
                                LeanTween__value((undefined8 *)(lVar9 + 0xd0),uVar11);
                                lVar9 = FUN_0400ff1c(in_stack_00000098,
                                                     *(int *)(in_stack_00000098 + 0x18) + -2,
                                                     *puVar24);
                                if (lVar9 != 0) {
                                  fVar43 = *(float *)(lVar9 + 0x4c);
                                  lVar9 = FUN_0400ff1c(in_stack_00000098,
                                                       *(int *)(in_stack_00000098 + 0x18) + -1,
                                                       *puVar24);
                                  if (lVar9 != 0) {
                                    fVar32 = *(float *)(lVar9 + 0x4c);
                                    fVar31 = fVar43 - fVar32;
                                    if (DAT_06db4ece == '\0') {
                                      FUN_02d965b8(PTR_DAT_069fbb48);
                                      DAT_06db4ece = '\x01';
                                    }
                                    puVar2 = PTR_DAT_069fbb48;
                                    if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                                      thunk_FUN_02df485c();
                                    }
                                    fVar40 = 0.0;
                                    fVar33 = SQRT((in_stack_00000230 * in_stack_00000230 +
                                                  fVar31 * fVar31) * DAT_010fd194);
                                    fVar31 = DAT_010fcd14;
                                    if (DAT_010fcd14 <= fVar33) {
                                      fVar31 = -1.0;
                                      fVar33 = (in_stack_00000230 * 0.0 +
                                               ABS(fVar43 - fVar32) * 50.0 + 0.0) / fVar33;
                                      fVar43 = 1.0;
                                      if (fVar33 <= 1.0) {
                                        fVar43 = fVar33;
                                      }
                                      fVar32 = -1.0;
                                      if (-1.0 <= fVar33) {
                                        fVar32 = fVar43;
                                      }
                                      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                                        fVar31 = -1.0;
                                        thunk_FUN_02df485c();
                                      }
                                      dVar39 = acos((double)fVar32);
                                      fVar40 = (float)dVar39 * DAT_010fcf40;
                                    }
                                    fVar40 = 90.0 - fVar40;
                                    lVar9 = FUN_0400ff1c(in_stack_00000098,
                                                         *(int *)(in_stack_00000098 + 0x18) + -2,
                                                         *puVar24);
                                    if (fVar40 <= 10.0) {
                                      uVar11 = FUN_054fad00(&stack0x00000234,
                                                            *(undefined8 *)PTR_DAT_06a0c498,0);
                                    }
                                    else {
                                      dVar39 = modf((double)fVar40,(double *)&stack0x00000298);
                                      if (0.0 <= fVar40) {
                                        if (dVar39 == 0.5) {
                                          dVar39 = *(double *)(unaff_x26 + 0x80);
                                          fVar31 = 1.0;
                                          goto LAB_0316e5fc;
                                        }
                                        fStack00000000000001d0 = (float)(int)(fVar40 + 0.5);
                                      }
                                      else if (dVar39 == -0.5) {
                                        dVar39 = *(double *)(unaff_x26 + 0x80);
                                        fVar31 = -1.0;
LAB_0316e5fc:
                                        fStack00000000000001d0 = (float)dVar39;
                                        if (((long)dVar39 & 1U) != 0) {
                                          fStack00000000000001d0 = (float)dVar39 + fVar31;
                                        }
                                      }
                                      else {
                                        fStack00000000000001d0 = (float)(int)(fVar40 + -0.5);
                                      }
                                      uVar11 = FUN_054fabf8(&stack0x000001d0,0);
                                    }
                                    if (lVar9 != 0) {
                                      *(undefined8 *)(lVar9 + 0xd8) = uVar11;
                                      LeanTween__value((undefined8 *)(lVar9 + 0xd8),uVar11);
                                      lVar9 = FUN_0400ff1c(in_stack_00000098,
                                                           *(int *)(in_stack_00000098 + 0x18) + -2,
                                                           *puVar24);
                                      if (lVar9 != 0) {
                                        fVar43 = *(float *)(lVar9 + 0x4c);
                                        lVar9 = FUN_0400ff1c(in_stack_00000098,
                                                             *(int *)(in_stack_00000098 + 0x18) + -1
                                                             ,*puVar24);
                                        if (lVar9 != 0) {
                                          fVar32 = *(float *)(lVar9 + 0x4c);
                                          lVar9 = FUN_0400ff1c(in_stack_00000098,
                                                               *(int *)(in_stack_00000098 + 0x18) +
                                                               -2,*puVar24);
                                          if (lVar9 != 0) {
                                            fVar33 = *(float *)(lVar9 + 0x48);
                                            lVar9 = FUN_0400ff1c(in_stack_00000098,
                                                                 *(int *)(in_stack_00000098 + 0x18)
                                                                 + -2,*puVar24);
                                            if (lVar9 != 0) {
                                              fVar40 = *(float *)(lVar9 + 0x50);
                                              lVar9 = FUN_0400ff1c(in_stack_00000098,
                                                                   *(int *)(in_stack_00000098 + 0x18
                                                                           ) + -1,*puVar24);
                                              if (lVar9 != 0) {
                                                fVar47 = *(float *)(lVar9 + 0x48);
                                                lVar9 = FUN_0400ff1c(in_stack_00000098,
                                                                     *(int *)(in_stack_00000098 +
                                                                             0x18) + -1,*puVar24);
                                                if (lVar9 != 0) {
                                                  fVar49 = *(float *)(lVar9 + 0x50);
                                                  if (DAT_06db4c77 == '\0') {
                                                    FUN_02d965b8(PTR_DAT_069fbb48);
                                                    DAT_06db4c77 = '\x01';
                                                  }
                                                  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                  }
                                                  fVar40 = fVar40 - fVar49;
                                                  fVar33 = fVar33 - fVar47;
                                                  lVar9 = FUN_0400ff1c(in_stack_00000098,
                                                                       *(int *)(in_stack_00000098 +
                                                                               0x18) + -2,*puVar24);
                                                  fStack00000000000001d0 =
                                                       (ABS(fVar43 - fVar32) /
                                                       SQRT(fVar33 * fVar33 + fVar40 * fVar40)) *
                                                       100.0;
                                                  uVar11 = FUN_054fad00(&stack0x000001d0,
                                                                        *(undefined8 *)
                                                                         PTR_DAT_06a0c498,0);
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
                            lVar9 = FUN_0400ff1c(in_stack_00000098,0,*puVar24);
                            if ((*(long *)(unaff_x26 + 0x78) == 0) || (lVar9 == 0))
                            goto LAB_03168190;
                            uVar11 = *puVar24;
                            *(undefined4 *)(lVar9 + 0xbc) =
                                 *(undefined4 *)(*(long *)(unaff_x26 + 0x78) + 0x18);
                            lVar9 = FUN_0400ff1c(in_stack_00000098,0,uVar11);
                            if (lVar9 == 0) goto LAB_03168190;
                            *(float *)(lVar9 + 0xc0) = *in_stack_000000d8;
                            if (2 < *(int *)(in_stack_00000098 + 0x18)) {
                              lVar9 = FUN_0400ff1c(in_stack_00000098,
                                                   *(int *)(in_stack_00000098 + 0x18) + -1,*puVar24)
                              ;
                              fVar31 = *in_stack_000000d8;
                              lVar10 = FUN_0400ff1c(in_stack_00000098,
                                                    *(int *)(in_stack_00000098 + 0x18) + -1,*puVar24
                                                   );
                              if ((lVar10 == 0) || (lVar9 == 0)) goto LAB_03168190;
                              uVar11 = *puVar24;
                              *(float *)(lVar9 + 200) = fVar31 - *(float *)(lVar10 + 0xc0);
                              lVar9 = FUN_0400ff1c(in_stack_00000098,
                                                   *(int *)(in_stack_00000098 + 0x18) + -1,uVar11);
                              if (lVar9 == 0) goto LAB_03168190;
                              fVar31 = *(float *)(lVar9 + 200);
                              lVar9 = FUN_0400ff1c(in_stack_00000098,
                                                   *(int *)(in_stack_00000098 + 0x18) + -1,*puVar24)
                              ;
                              lVar10 = FUN_0400ff1c(in_stack_00000098,
                                                    *(int *)(in_stack_00000098 + 0x18) + -1,*puVar24
                                                   );
                              if (1000.0 <= fVar31) {
                                if (lVar10 == 0) goto LAB_03168190;
                                fStack00000000000001d0 = *(float *)(lVar10 + 200) / 1000.0;
                                uVar11 = FUN_054fad00(&stack0x000001d0,
                                                      *(undefined8 *)PTR_DAT_06a0c4e0,0);
                                uVar11 = FUN_05362cb4(uVar11,*(undefined8 *)PTR_DAT_06a0c488,0);
                              }
                              else {
                                if (lVar10 == 0) goto LAB_03168190;
                                uVar11 = FUN_054fad00(lVar10 + 200,*(undefined8 *)PTR_DAT_06a0c498,0
                                                     );
                                uVar11 = FUN_05362cb4(uVar11,*(undefined8 *)PTR_DAT_06a0c4f0,0);
                              }
                              if (lVar9 == 0) goto LAB_03168190;
                              *(undefined8 *)(lVar9 + 0xd0) = uVar11;
                              LeanTween__value((undefined8 *)(lVar9 + 0xd0),uVar11);
                              lVar9 = FUN_0400ff1c(in_stack_00000098,
                                                   *(int *)(in_stack_00000098 + 0x18) + -1,*puVar24)
                              ;
                              if (lVar9 == 0) goto LAB_03168190;
                              fVar43 = *(float *)(lVar9 + 0x4c);
                              lVar9 = FUN_0400ff1c(in_stack_00000098,0,*puVar24);
                              if (lVar9 == 0) goto LAB_03168190;
                              fVar32 = *(float *)(lVar9 + 0x4c);
                              fVar31 = fVar43 - fVar32;
                              if (DAT_06db4ece == '\0') {
                                FUN_02d965b8(PTR_DAT_069fbb48);
                                DAT_06db4ece = '\x01';
                              }
                              puVar2 = PTR_DAT_069fbb48;
                              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                                thunk_FUN_02df485c();
                              }
                              fVar40 = 0.0;
                              fVar33 = SQRT((in_stack_00000230 * in_stack_00000230 + fVar31 * fVar31
                                            ) * DAT_010fd194);
                              fVar31 = DAT_010fcd14;
                              if (DAT_010fcd14 <= fVar33) {
                                fVar31 = -1.0;
                                fVar33 = (in_stack_00000230 * 0.0 +
                                         ABS(fVar43 - fVar32) * 50.0 + 0.0) / fVar33;
                                fVar43 = 1.0;
                                if (fVar33 <= 1.0) {
                                  fVar43 = fVar33;
                                }
                                fVar32 = -1.0;
                                if (-1.0 <= fVar33) {
                                  fVar32 = fVar43;
                                }
                                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                                  fVar31 = -1.0;
                                  thunk_FUN_02df485c();
                                }
                                dVar39 = acos((double)fVar32);
                                fVar40 = (float)dVar39 * DAT_010fcf40;
                              }
                              fVar40 = 90.0 - fVar40;
                              lVar9 = FUN_0400ff1c(in_stack_00000098,
                                                   *(int *)(in_stack_00000098 + 0x18) + -1,*puVar24)
                              ;
                              if (fVar40 <= 10.0) {
                                uVar11 = FUN_054fad00(&stack0x00000234,
                                                      *(undefined8 *)PTR_DAT_06a0c498,0);
                              }
                              else {
                                dVar39 = modf((double)fVar40,(double *)&stack0x00000298);
                                if (0.0 <= fVar40) {
                                  if (dVar39 == 0.5) {
                                    dVar39 = *(double *)(unaff_x26 + 0x80);
                                    fVar31 = 1.0;
                                    goto LAB_0316e5d0;
                                  }
                                  fStack00000000000001d0 = (float)(int)(fVar40 + 0.5);
                                }
                                else if (dVar39 == -0.5) {
                                  dVar39 = *(double *)(unaff_x26 + 0x80);
                                  fVar31 = -1.0;
LAB_0316e5d0:
                                  fStack00000000000001d0 = (float)dVar39;
                                  if (((long)dVar39 & 1U) != 0) {
                                    fStack00000000000001d0 = (float)dVar39 + fVar31;
                                  }
                                }
                                else {
                                  fStack00000000000001d0 = (float)(int)(fVar40 + -0.5);
                                }
                                uVar11 = FUN_054fabf8(&stack0x000001d0,0);
                              }
                              if (lVar9 == 0) goto LAB_03168190;
                              *(undefined8 *)(lVar9 + 0xd8) = uVar11;
                              LeanTween__value((undefined8 *)(lVar9 + 0xd8),uVar11);
                              lVar9 = FUN_0400ff1c(in_stack_00000098,
                                                   *(int *)(in_stack_00000098 + 0x18) + -2,*puVar24)
                              ;
                              if (lVar9 == 0) goto LAB_03168190;
                              fVar43 = *(float *)(lVar9 + 0x4c);
                              lVar9 = FUN_0400ff1c(in_stack_00000098,
                                                   *(int *)(in_stack_00000098 + 0x18) + -1,*puVar24)
                              ;
                              if (lVar9 == 0) goto LAB_03168190;
                              fVar32 = *(float *)(lVar9 + 0x4c);
                              lVar9 = FUN_0400ff1c(in_stack_00000098,
                                                   *(int *)(in_stack_00000098 + 0x18) + -2,*puVar24)
                              ;
                              if (lVar9 == 0) goto LAB_03168190;
                              fVar33 = *(float *)(lVar9 + 0x48);
                              lVar9 = FUN_0400ff1c(in_stack_00000098,
                                                   *(int *)(in_stack_00000098 + 0x18) + -2,*puVar24)
                              ;
                              if (lVar9 == 0) goto LAB_03168190;
                              fVar40 = *(float *)(lVar9 + 0x50);
                              lVar9 = FUN_0400ff1c(in_stack_00000098,
                                                   *(int *)(in_stack_00000098 + 0x18) + -1,*puVar24)
                              ;
                              if (lVar9 == 0) goto LAB_03168190;
                              fVar47 = *(float *)(lVar9 + 0x48);
                              lVar9 = FUN_0400ff1c(in_stack_00000098,
                                                   *(int *)(in_stack_00000098 + 0x18) + -1,*puVar24)
                              ;
                              if (lVar9 == 0) goto LAB_03168190;
                              fVar49 = *(float *)(lVar9 + 0x50);
                              if (DAT_06db4c77 == '\0') {
                                FUN_02d965b8(PTR_DAT_069fbb48);
                                DAT_06db4c77 = '\x01';
                              }
                              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                                thunk_FUN_02df485c();
                              }
                              fVar40 = fVar40 - fVar49;
                              fVar33 = fVar33 - fVar47;
                              lVar9 = FUN_0400ff1c(in_stack_00000098,
                                                   *(int *)(in_stack_00000098 + 0x18) + -1,*puVar24)
                              ;
                              fStack00000000000001d0 =
                                   (ABS(fVar43 - fVar32) / SQRT(fVar33 * fVar33 + fVar40 * fVar40))
                                   * 100.0;
                              uVar11 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c498
                                                    ,0);
                              if (lVar9 == 0) goto LAB_03168190;
LAB_0316ea58:
                              *(undefined8 *)(lVar9 + 0xe0) = uVar11;
                              LeanTween__value((undefined8 *)(lVar9 + 0xe0),uVar11);
                            }
                          }
                          fVar43 = 1000.0;
                          if (1000.0 <= *in_stack_000000d8) {
                            fVar43 = 1000.0;
                            fStack00000000000001d0 = *in_stack_000000d8 / 1000.0;
                            uVar11 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0
                                                 );
                            puVar19 = (undefined8 *)PTR_DAT_06a0c488;
                          }
                          else {
                            uVar11 = FUN_054fad00(in_stack_000000d8,*(undefined8 *)PTR_DAT_06a0c498,
                                                  0);
                            puVar19 = (undefined8 *)PTR_DAT_06a0c4f0;
                          }
                          uVar11 = FUN_05362cb4(uVar11,*puVar19,0);
                          *(undefined8 *)(in_stack_00000148 + 0x2d0) = uVar11;
                          LeanTween__value(in_stack_00000148 + 0x2d0,uVar11);
                          if (*(int *)(in_stack_00000098 + 0x18) == 2) {
                            lVar9 = FUN_0400ff1c(in_stack_00000098,0,*puVar24);
                            if (lVar9 == 0) goto LAB_03168190;
                            fVar32 = *(float *)(lVar9 + 200);
                            lVar9 = FUN_0400ff1c(in_stack_00000098,0,*puVar24);
                            lVar10 = FUN_0400ff1c(in_stack_00000098,0,*puVar24);
                            if (1000.0 <= fVar32) {
                              if (lVar10 == 0) goto LAB_03168190;
                              fVar43 = 1000.0;
                              fStack00000000000001d0 = *(float *)(lVar10 + 200) / 1000.0;
                              uVar11 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0
                                                    ,0);
                              uVar11 = FUN_05362cb4(uVar11,*(undefined8 *)PTR_DAT_06a0c488,0);
                            }
                            else {
                              if (lVar10 == 0) goto LAB_03168190;
                              uVar11 = FUN_054fad00(lVar10 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
                              uVar11 = FUN_05362cb4(uVar11,*(undefined8 *)PTR_DAT_06a0c4f0,0);
                            }
                            if (lVar9 == 0) goto LAB_03168190;
                            *(undefined8 *)(lVar9 + 0xd0) = uVar11;
                            LeanTween__value((undefined8 *)(lVar9 + 0xd0),uVar11);
                          }
                          if (*(char *)(in_stack_00000148 + 0x84) == '\0') {
                            lVar9 = FUN_0400ff1c(in_stack_00000098,
                                                 *(int *)(in_stack_00000098 + 0x18) + -1,*puVar24);
                            if (lVar9 == 0) goto LAB_03168190;
                            *(undefined8 *)(lVar9 + 0xd0) = *(undefined8 *)PTR_DAT_069fcde0;
                            LeanTween__value();
                          }
                          puVar3 = PTR_DAT_06a0b440;
                          puVar2 = PTR_DAT_069fd088;
                          fVar32 = fVar43;
                          if (iStack0000000000000058 == 0) goto LAB_0316ee54;
                          if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
                          fVar33 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,
                                                       *(undefined8 *)PTR_DAT_069fd088);
                          if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
                          FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)puVar2);
                          lVar9 = FUN_0400ff1c(in_stack_00000098,0,*(undefined8 *)puVar3);
                          puVar4 = PTR_DAT_06a0b7d0;
                          puVar3 = PTR_DAT_069fbb48;
                          if (lVar9 == 0) goto LAB_03168190;
                          lVar10 = *(long *)(unaff_x26 + 0x78);
                          fVar32 = *(float *)(lVar9 + 200) * 0.5;
                          fVar40 = 5.0;
                          if (fVar32 <= 5.0) {
                            fVar40 = fVar32;
                          }
                          if (lVar10 == 0) goto LAB_03168190;
                          uVar17 = (ulong)(uint)fStack0000000000000054;
                          iVar28 = 1;
                          fVar33 = fStack0000000000000050 * 10.0 + fVar33;
                          uVar22 = (ulong)(uint)fVar33;
                          fVar47 = fStack0000000000000054 * 10.0 + fVar31;
                          fVar49 = 0.0;
                          goto LAB_0316ecc4;
                        }
                        fStack00000000000001d4 = 0.0;
                        lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*puVar24);
                        if ((*(long *)(unaff_x26 + 0x78) == 0) || (lVar9 == 0)) goto LAB_03168190;
                        uVar11 = *puVar24;
                        *(undefined4 *)(lVar9 + 0xbc) =
                             *(undefined4 *)(*(long *)(unaff_x26 + 0x78) + 0x18);
                        lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,uVar11);
                        if (lVar9 == 0) goto LAB_03168190;
                        *(float *)(lVar9 + 0xc0) = *in_stack_000000d8;
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
        }
      }
    }
  }
  goto LAB_03168190;
  while( true ) {
    fVar36 = fVar32;
    fVar37 = fVar31;
    fVar35 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar28,*(undefined8 *)puVar2);
    if (DAT_06db4c77 == '\0') {
      FUN_02d965b8(puVar3);
      DAT_06db4c77 = '\x01';
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    fVar36 = fVar32 - fVar36;
    fVar31 = fVar31 - fVar37;
    fVar32 = fVar31 * fVar31;
    fVar49 = fVar49 + SQRT(fVar32 + (fVar34 - fVar35) * (fVar34 - fVar35) + fVar36 * fVar36);
    if (fVar40 < fVar49) goto LAB_0316ee54;
    if (*(long *)(unaff_x26 + 0x78) == 0) break;
    uVar42 = FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)puVar2);
    if (*(long *)(unaff_x26 + 0x78) == 0) break;
    FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar28,*(undefined8 *)puVar2);
    fVar32 = (float)FUN_031765b0(uVar42,fVar32,fVar31,fVar33,fVar43,fVar47,0);
    if (*(long *)(unaff_x26 + 0x78) == 0) break;
    fVar36 = fVar31;
    fVar37 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar28,*(undefined8 *)puVar2);
    fVar35 = fVar49 / fVar40;
    fVar34 = 1.0;
    if (fVar35 <= 1.0) {
      fVar34 = fVar35;
    }
    uVar22 = (ulong)(uint)fVar34;
    fVar38 = 0.0;
    if (0.0 <= fVar35) {
      fVar38 = fVar34;
    }
    if (*(long *)(unaff_x26 + 0x78) == 0) break;
    FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar28,*(undefined8 *)puVar2);
    if (*(long *)(unaff_x26 + 0x78) == 0) break;
    uVar17 = (ulong)(uint)(fVar31 + fVar38 * (fVar36 - fVar31));
    FUN_0409f350(fVar32 + fVar38 * (fVar37 - fVar32),*(long *)(unaff_x26 + 0x78),iVar28,
                 *(undefined8 *)puVar4);
    lVar10 = *(long *)(unaff_x26 + 0x78);
    iVar28 = iVar28 + 1;
    if (lVar10 == 0) break;
LAB_0316ecc4:
    fVar31 = (float)uVar17;
    fVar32 = (float)uVar22;
    if (*(int *)(lVar10 + 0x18) <= iVar28) goto LAB_0316ee54;
    fVar34 = (float)FUN_0409f2f4(lVar10,iVar28 + -1,*(undefined8 *)puVar2);
    if (*(long *)(unaff_x26 + 0x78) == 0) break;
  }
  goto LAB_03168190;
code_r0x03169d90:
  unaff_x25 = in_stack_00000098;
  if (unaff_x24 == 2) goto code_r0x03169d98;
  unaff_w22 = (int)unaff_x24 + -2;
  unaff_x23 = FUN_0400ff1c(in_stack_00000098,unaff_w22,*puVar24);
  fVar31 = *in_stack_000000d8;
  lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_w22,*puVar24);
  if ((lVar9 == 0) || (unaff_x23 == 0)) goto LAB_03168190;
  fVar31 = fVar31 - *(float *)(lVar9 + 0xc0);
  goto LAB_03169df8;
code_r0x03169d98:
  unaff_x23 = FUN_0400ff1c(in_stack_00000098,0,*puVar24);
  if (unaff_x23 == 0) goto LAB_03168190;
  unaff_w22 = 0;
  param_1 = in_stack_000000d8;
  goto code_r0x03169db4;
LAB_0316ee54:
  puVar2 = PTR_DAT_069fd088;
  if (in_stack_00000048._4_4_ != 0) {
    lVar9 = *(long *)(unaff_x26 + 0x78);
    if (lVar9 == 0) goto LAB_03168190;
    fVar43 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,*(undefined8 *)PTR_DAT_069fd088);
    puVar3 = PTR_DAT_06a0b440;
    if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
    fVar33 = fVar32;
    FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)puVar2);
    lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,
                         *(undefined8 *)puVar3);
    puVar4 = PTR_DAT_06a0b7d0;
    puVar3 = PTR_DAT_069fbb48;
    if (lVar9 == 0) goto LAB_03168190;
    fVar47 = *(float *)(lVar9 + 200) * 0.5;
    fVar40 = 5.0;
    if (fVar47 <= 5.0) {
      fVar40 = fVar47;
    }
    if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
    iVar28 = *(int *)(*(long *)(unaff_x26 + 0x78) + 0x18);
    if (0 < iVar28 + -2) {
      fVar47 = 0.0;
      iVar28 = iVar28 + -1;
      uVar22 = (ulong)(uint)fVar43;
      uVar17 = (ulong)(uint)fVar31;
      do {
        fVar34 = (float)uVar22;
        fVar49 = (float)uVar17;
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        fVar36 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar28,*(undefined8 *)puVar2);
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        iVar28 = iVar28 + -1;
        fVar37 = fVar49;
        fVar35 = fVar34;
        fVar38 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar28,*(undefined8 *)puVar2);
        if (DAT_06db4c77 == '\0') {
          FUN_02d965b8(puVar3);
          DAT_06db4c77 = '\x01';
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        fVar47 = fVar47 + SQRT((fVar34 - fVar35) * (fVar34 - fVar35) +
                               (fVar36 - fVar38) * (fVar36 - fVar38) +
                               (fVar49 - fVar37) * (fVar49 - fVar37));
        if (fVar40 < fVar47) break;
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar28,*(undefined8 *)puVar2);
        fVar49 = fVar31;
        fVar34 = (float)FUN_031765b0(fVar43,fVar32,fVar31,fStack0000000000000060 * 10.0 + fVar43,
                                     fVar33,fStack000000000000005c * 10.0 + fVar31,0);
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        fVar37 = fVar49;
        fVar35 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar28,*(undefined8 *)puVar2);
        fVar38 = fVar47 / fVar40;
        fVar36 = 1.0;
        if (fVar38 <= 1.0) {
          fVar36 = fVar38;
        }
        uVar17 = (ulong)(uint)fVar36;
        fVar46 = 0.0;
        if (0.0 <= fVar38) {
          fVar46 = fVar36;
        }
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar28,*(undefined8 *)puVar2);
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        uVar22 = (ulong)(uint)(fVar49 + fVar46 * (fVar37 - fVar49));
        FUN_0409f350(fVar34 + fVar46 * (fVar35 - fVar34),*(long *)(unaff_x26 + 0x78),iVar28,
                     *(undefined8 *)puVar4);
      } while (1 < iVar28);
    }
  }
  puVar2 = PTR_DAT_06a0b440;
  lVar9 = FUN_0400ff1c(in_stack_00000098,0,*(undefined8 *)PTR_DAT_06a0b440);
  lVar10 = FUN_0400ff1c(in_stack_00000098,0,*(undefined8 *)puVar2);
  if (lVar10 != 0) {
    fVar31 = *(float *)(lVar10 + 0x94);
    lVar10 = FUN_0400ff1c(in_stack_00000098,0,*(undefined8 *)puVar2);
    if (lVar10 != 0) {
      fVar43 = *(float *)(lVar10 + 0x9c);
      if (DAT_06db4c75 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c75 = '\x01';
      }
      puVar3 = PTR_DAT_069fbb48;
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar32 = DAT_010fd13c;
      fVar33 = SQRT(fVar31 * fVar31 + fVar43 * fVar43);
      if (fVar33 <= DAT_010fd13c) {
        if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
          FUN_02d965b8(PTR_DAT_069fb978);
          *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
        }
        uVar11 = **(undefined8 **)(*unaff_x28 + 0xb8);
        fVar43 = *(float *)(*(undefined8 **)(*unaff_x28 + 0xb8) + 1);
      }
      else {
        fVar43 = fVar43 / fVar33;
        uVar11 = CONCAT44(0.0 / fVar33,fVar31 / fVar33);
      }
      if (lVar9 != 0) {
        *(undefined8 *)(lVar9 + 0x94) = uVar11;
        uVar11 = *(undefined8 *)puVar2;
        *(float *)(lVar9 + 0x9c) = fVar43;
        lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,uVar11);
        lVar10 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                              *(undefined8 *)puVar2);
        if (lVar10 != 0) {
          fVar31 = *(float *)(lVar10 + 0x94);
          lVar10 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                                *(undefined8 *)puVar2);
          if (lVar10 != 0) {
            fVar43 = *(float *)(lVar10 + 0x9c);
            if (DAT_06db4c75 == '\0') {
              FUN_02d965b8(PTR_DAT_069fbb48);
              DAT_06db4c75 = '\x01';
            }
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            fVar33 = SQRT(fVar31 * fVar31 + fVar43 * fVar43);
            if (fVar33 <= fVar32) {
              if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
                FUN_02d965b8(PTR_DAT_069fb978);
                *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
              }
              uVar11 = **(undefined8 **)(*unaff_x28 + 0xb8);
              fVar43 = *(float *)(*(undefined8 **)(*unaff_x28 + 0xb8) + 1);
            }
            else {
              fVar43 = fVar43 / fVar33;
              uVar11 = CONCAT44(0.0 / fVar33,fVar31 / fVar33);
            }
            if (lVar9 != 0) {
              uVar45 = *(undefined8 *)(unaff_x26 + 0x78);
              *(undefined8 *)(lVar9 + 0x94) = uVar11;
              *(float *)(lVar9 + 0x9c) = fVar43;
              return uVar45;
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


