/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<OVRPlugin.Vector3f>
ENTRY_POINT: 0193d820
PROGRAM: sharks-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IndexOf<OVRPlugin_Vector3f>
               (undefined1 param_1 [16],float param_2,float param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  float *pfVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  long *plVar18;
  long lVar19;
  long unaff_x19;
  long unaff_x20;
  long *plVar20;
  long *plVar21;
  undefined8 uVar22;
  ulong uVar23;
  undefined8 *puVar24;
  long unaff_x26;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  long in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined4 uStack0000000000000080;
  float fStack0000000000000084;
  float fStack0000000000000088;
  float fStack000000000000008c;
  float fStack0000000000000090;
  float fStack0000000000000094;
  undefined4 uStack0000000000000098;
  float fStack000000000000009c;
  float fStack00000000000000a0;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  float fStack00000000000000ac;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  long in_stack_000000c0;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  long *in_stack_000000e0;
  long in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_00000120;
  undefined4 in_stack_00000128;
  undefined8 in_stack_00000150;
  undefined4 in_stack_00000158;
  
  FUN_017fc350();
  FUN_017fc350(PTR_DAT_037f3790);
  FUN_017fc350(PTR_DAT_037f4e78);
  FUN_017fc350(PTR_DAT_037f4e80);
  FUN_017fc350(PTR_DAT_037f3758);
  FUN_017fc350(PTR_DAT_037f4e88);
  FUN_017fc350(PTR_DAT_037f2b10);
  FUN_017fc350(PTR_DAT_037f4a40);
  FUN_017fc350(PTR_DAT_037f4e90);
  FUN_017fc350(PTR_DAT_037f4e98);
  FUN_017fc350(PTR_DAT_037f4ea0);
  FUN_017fc350(PTR_DAT_037f4ea8);
  *(undefined1 *)(unaff_x20 + 0xfc) = 1;
  in_stack_000000f0 = 0;
  in_stack_000000b0 = 0;
  in_stack_000000b8 = 0;
  *(undefined8 *)(unaff_x26 + 0x84) = 0;
  *(undefined8 *)(unaff_x26 + 0x7c) = 0;
  *(undefined8 *)(unaff_x26 + 0x68) = 0;
  *(undefined8 *)(unaff_x26 + 0x60) = 0;
  *(undefined8 *)(unaff_x26 + 0x78) = 0;
  *(undefined8 *)(unaff_x26 + 0x70) = 0;
  *(undefined8 *)(unaff_x26 + 0x54) = 0;
  *(undefined8 *)(unaff_x26 + 0x4c) = 0;
  *(undefined8 *)(unaff_x26 + 0x38) = 0;
  *(undefined8 *)(unaff_x26 + 0x30) = 0;
  *(undefined8 *)(unaff_x26 + 0x48) = 0;
  *(undefined8 *)(unaff_x26 + 0x40) = 0;
  *(undefined8 *)(unaff_x26 + 0x18) = 0;
  *(undefined8 *)(unaff_x26 + 0x10) = 0;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000c0 = 0;
  lVar13 = *(long *)(unaff_x19 + 0x30);
  if (lVar13 != 0) {
    iVar1 = *(int *)(lVar13 + 0x18);
    *(undefined4 *)(lVar13 + 0x18) = 0;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_02bf1354(*(undefined8 *)(lVar13 + 0x10),0,iVar1,0);
    }
    lVar13 = FUN_033e6c1c();
    if (lVar13 != 0) {
      fVar25 = (float)FUN_033f2e00(lVar13,0);
      if (*(long *)(unaff_x19 + 0x48) != 0) {
        fVar41 = param_3;
        fVar32 = param_2;
        fVar26 = (float)FUN_033f2e00(*(long *)(unaff_x19 + 0x48),0);
        fVar35 = fVar41;
        fVar33 = fVar32;
        if (DAT_03a21ec8 == '\0') {
          FUN_017fc350(PTR_DAT_037f2b80);
          DAT_03a21ec8 = '\x01';
        }
        puVar3 = PTR_DAT_037f2b80;
        if (*(int *)(*(long *)PTR_DAT_037f2b80 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        lVar13 = FUN_033e6c1c();
        if (lVar13 != 0) {
          uVar27 = FUN_033f2e00(lVar13,0);
          if (*(long *)(unaff_x19 + 0x48) != 0) {
            fVar38 = fVar35;
            fVar39 = fVar33;
            fVar28 = (float)FUN_033f2e00(*(long *)(unaff_x19 + 0x48),0);
            fVar36 = fVar38;
            fVar37 = fVar39;
            lVar13 = FUN_033e6c1c();
            if (lVar13 != 0) {
              fVar29 = (float)FUN_033f2e00(lVar13,0);
              if (DAT_03a21ec8 == '\0') {
                FUN_017fc350(PTR_DAT_037f2b80);
                DAT_03a21ec8 = '\x01';
              }
              fVar28 = fVar28 - fVar29;
              fVar39 = fVar39 - fVar37;
              fVar38 = fVar38 - fVar36;
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_01843fdc();
              }
              fVar36 = DAT_009a636c;
              fVar34 = fVar38 * fVar38;
              fVar29 = SQRT(fVar34 + fVar28 * fVar28 + fVar39 * fVar39);
              fVar37 = DAT_009a636c;
              if (fVar29 <= DAT_009a636c) {
                if (DAT_03a21ec9 == '\0') {
                  FUN_017fc350(PTR_DAT_037f2b88);
                  DAT_03a21ec9 = '\x01';
                }
                pfVar14 = *(float **)(*(long *)PTR_DAT_037f2b88 + 0xb8);
                fVar28 = *pfVar14;
                fVar39 = pfVar14[1];
                fVar38 = pfVar14[2];
              }
              else {
                fVar28 = fVar28 / fVar29;
                fVar39 = fVar39 / fVar29;
                fVar38 = fVar38 / fVar29;
              }
              if (*(long *)(unaff_x19 + 0x48) != 0) {
                uVar30 = FUN_033f2e00(*(long *)(unaff_x19 + 0x48),0);
                fVar29 = fVar37;
                fVar40 = fVar34;
                lVar13 = FUN_033e6c1c();
                if (lVar13 != 0) {
                  fVar31 = (float)FUN_033f2e00(lVar13,0);
                  if (*(long *)(unaff_x19 + 0x48) != 0) {
                    param_2 = param_2 - fVar32;
                    fVar41 = param_3 - fVar41;
                    fVar42 = param_2 * param_2;
                    fVar32 = (float)FUN_033f2e00(*(long *)(unaff_x19 + 0x48),0);
                    if (DAT_03a21ec8 == '\0') {
                      FUN_017fc350(PTR_DAT_037f2b80);
                      DAT_03a21ec8 = '\x01';
                    }
                    fVar31 = fVar31 - fVar32;
                    fVar40 = fVar40 - param_2;
                    fVar29 = fVar29 - param_3;
                    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                      thunk_FUN_01843fdc();
                    }
                    puVar3 = PTR_DAT_037f4a40;
                    fVar32 = SQRT(fVar29 * fVar29 + fVar31 * fVar31 + fVar40 * fVar40);
                    if (fVar32 <= fVar36) {
                      if (DAT_03a21ec9 == '\0') {
                        FUN_017fc350(PTR_DAT_037f2b88);
                        DAT_03a21ec9 = '\x01';
                      }
                      pfVar14 = *(float **)(*(long *)PTR_DAT_037f2b88 + 0xb8);
                      fVar31 = *pfVar14;
                      fVar40 = pfVar14[1];
                      fVar29 = pfVar14[2];
                    }
                    else {
                      fVar31 = fVar31 / fVar32;
                      fVar29 = fVar29 / fVar32;
                      fVar40 = fVar40 / fVar32;
                    }
                    fVar25 = SQRT(fVar41 * fVar41 + (fVar25 - fVar26) * (fVar25 - fVar26) + fVar42);
                    uVar7 = FUN_033e9e90(*(undefined4 *)(unaff_x19 + 0x40),0);
                    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                      thunk_FUN_01843fdc(*(long *)puVar3);
                    }
                    uStack0000000000000098 = uVar27;
                    fStack000000000000009c = fVar33;
                    fStack00000000000000a0 = fVar35;
                    fStack00000000000000a4 = fVar28;
                    fStack00000000000000a8 = fVar39;
                    fStack00000000000000ac = fVar38;
                    lVar13 = FUN_03431348(fVar25,&stack0x00000098,uVar7,0);
                    uVar27 = FUN_033e9e90(*(undefined4 *)(unaff_x19 + 0x40),0);
                    uStack0000000000000080 = uVar30;
                    fStack0000000000000084 = fVar34;
                    fStack0000000000000088 = fVar37;
                    fStack000000000000008c = fVar31;
                    fStack0000000000000090 = fVar40;
                    fStack0000000000000094 = fVar29;
                    lVar8 = FUN_03431348(fVar25,&stack0x00000080,uVar27,0);
                    puVar6 = PTR_DAT_037f4e80;
                    puVar3 = PTR_DAT_037f3790;
                    if (lVar13 != 0) {
                      if (0 < (int)*(ulong *)(lVar13 + 0x18)) {
                        uVar23 = 0;
                        uVar15 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
                        puVar24 = (undefined8 *)(lVar13 + 0x20);
                        do {
                          if (uVar15 <= uVar23) goto LAB_0193e380;
                          in_stack_00000158 = *(undefined4 *)(puVar24 + 5);
                          in_stack_00000150 = puVar24[4];
                          uVar11 = *puVar24;
                          uVar22 = puVar24[3];
                          uVar10 = puVar24[2];
                          *(undefined8 *)(unaff_x26 + 0x68) = puVar24[1];
                          *(undefined8 *)(unaff_x26 + 0x60) = uVar11;
                          *(undefined8 *)(unaff_x26 + 0x78) = uVar22;
                          *(undefined8 *)(unaff_x26 + 0x70) = uVar10;
                          lVar9 = FUN_034333dc(&stack0x00000130,0);
                          if (lVar9 == 0) goto LAB_0193e37c;
                          uVar10 = FUN_033e6c58(lVar9,0);
                          if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_0193e37c;
                          uVar15 = FUN_0270a7d4(*(long *)(unaff_x19 + 0x30),uVar10,
                                                *(undefined8 *)puVar6);
                          if ((uVar15 & 1) == 0) {
                            lVar9 = *(long *)(unaff_x19 + 0x30);
                            if (lVar9 == 0) goto LAB_0193e37c;
                            lVar16 = *(long *)(lVar9 + 0x10);
                            lVar19 = *(long *)puVar3;
                            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                            if (lVar16 == 0) goto LAB_0193e37c;
                            uVar2 = *(uint *)(lVar9 + 0x18);
                            if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                              *(uint *)(lVar9 + 0x18) = uVar2 + 1;
                              puVar17 = (undefined8 *)(lVar16 + (long)(int)uVar2 * 8 + 0x20);
                              *puVar17 = uVar10;
                              thunk_FUN_0188fd20(puVar17,uVar10);
                            }
                            else {
                              FUN_0270a444(lVar9,uVar10,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
                            }
                          }
                          uVar15 = (ulong)*(uint *)(lVar13 + 0x18);
                          uVar23 = uVar23 + 1;
                          puVar24 = (undefined8 *)((long)puVar24 + 0x2c);
                        } while ((long)uVar23 < (long)(int)*(uint *)(lVar13 + 0x18));
                      }
                      if (lVar8 != 0) {
                        if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
                          uVar23 = 0;
                          uVar15 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
                          puVar24 = (undefined8 *)(lVar8 + 0x20);
                          do {
                            if (uVar15 <= uVar23) {
LAB_0193e380:
                    /* WARNING: Subroutine does not return */
                              FUN_017fc5b0();
                            }
                            in_stack_00000128 = *(undefined4 *)(puVar24 + 5);
                            in_stack_00000120 = puVar24[4];
                            uVar11 = *puVar24;
                            uVar22 = puVar24[3];
                            uVar10 = puVar24[2];
                            *(undefined8 *)(unaff_x26 + 0x38) = puVar24[1];
                            *(undefined8 *)(unaff_x26 + 0x30) = uVar11;
                            *(undefined8 *)(unaff_x26 + 0x48) = uVar22;
                            *(undefined8 *)(unaff_x26 + 0x40) = uVar10;
                            lVar13 = FUN_034333dc(&stack0x00000100,0);
                            if (lVar13 == 0) goto LAB_0193e37c;
                            uVar10 = FUN_033e6c58(lVar13,0);
                            if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_0193e37c;
                            uVar15 = FUN_0270a7d4(*(long *)(unaff_x19 + 0x30),uVar10,
                                                  *(undefined8 *)puVar6);
                            if ((uVar15 & 1) == 0) {
                              lVar13 = *(long *)(unaff_x19 + 0x30);
                              if (lVar13 == 0) goto LAB_0193e37c;
                              lVar9 = *(long *)(lVar13 + 0x10);
                              lVar16 = *(long *)puVar3;
                              *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                              if (lVar9 == 0) goto LAB_0193e37c;
                              uVar2 = *(uint *)(lVar13 + 0x18);
                              if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                puVar17 = (undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
                                *puVar17 = uVar10;
                                thunk_FUN_0188fd20(puVar17,uVar10);
                              }
                              else {
                                FUN_0270a444(lVar13,uVar10,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                              }
                            }
                            uVar15 = (ulong)*(uint *)(lVar8 + 0x18);
                            uVar23 = uVar23 + 1;
                            puVar24 = (undefined8 *)((long)puVar24 + 0x2c);
                          } while ((long)uVar23 < (long)(int)*(uint *)(lVar8 + 0x18));
                        }
                        puVar5 = PTR_DAT_037f4e50;
                        puVar4 = PTR_DAT_037f3748;
                        puVar3 = PTR_DAT_037f2d40;
                        if (*(long *)(unaff_x19 + 0x20) != 0) {
                          FUN_02200a68(&stack0x00000058,*(long *)(unaff_x19 + 0x20),
                                       *(undefined8 *)PTR_DAT_037f4e38);
                          plVar20 = (long *)0x0;
                          in_stack_000000d8 = in_stack_00000060;
                          in_stack_000000d0 = in_stack_00000058;
                          *(undefined8 *)(unaff_x26 + 0x18) = in_stack_00000070;
                          *(long *)(unaff_x26 + 0x10) = in_stack_00000068;
                          in_stack_000000f0 = in_stack_00000078;
                          while (uVar23 = FUN_02358864(&stack0x000000d0,*(undefined8 *)puVar5),
                                lVar13 = in_stack_000000e8, plVar18 = in_stack_000000e0,
                                (uVar23 & 1) != 0) {
                            if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_017fc5a8();
                            }
                            uVar23 = FUN_0270a7d4(*(long *)(unaff_x19 + 0x30),in_stack_000000e0,
                                                  *(undefined8 *)puVar6);
                            if ((uVar23 & 1) == 0) {
                              FUN_0193e5bc(uVar23,plVar18,lVar13);
                              if (plVar18 != (long *)0x0) {
                                plVar20 = plVar18;
                              }
                              uVar22 = *(undefined8 *)PTR_DAT_037f4ea8;
                              uVar10 = 0;
                              if (plVar18 != (long *)0x0) {
                                if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_017fc5a8();
                                }
                                uVar10 = (**(code **)(*plVar20 + 0x168))
                                                   (plVar20,*(undefined8 *)(*plVar20 + 0x170));
                              }
                              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_017fc5a8();
                              }
                              if (*(int *)(lVar13 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_017fc5b0();
                              }
                              plVar18 = *(long **)(lVar13 + 0x20);
                              if (plVar18 == (long *)0x0) {
                                uVar11 = 0;
                              }
                              else {
                                if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_017fc5a8();
                                }
                                uVar11 = (**(code **)(*plVar18 + 0x168))
                                                   (plVar18,*(undefined8 *)(*plVar18 + 0x170));
                              }
                              uVar10 = FUN_02a503d0(uVar22,uVar10,uVar11,0);
                              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                                thunk_FUN_01843fdc();
                              }
                              FUN_033bce1c(uVar10,0);
                            }
                          }
                          FUN_02358984(&stack0x000000d0,*(undefined8 *)PTR_DAT_037f4e48);
                          if (*(long *)(unaff_x19 + 0x28) != 0) {
                            FUN_022007c0(*(long *)(unaff_x19 + 0x28),*(undefined8 *)PTR_DAT_037f4e28
                                        );
                            if (*(long *)(unaff_x19 + 0x30) != 0) {
                              FUN_0270ae40(&stack0x00000058,*(long *)(unaff_x19 + 0x30),
                                           *(undefined8 *)PTR_DAT_037f3758);
                              plVar20 = (long *)0x0;
                              in_stack_000000b8 = in_stack_00000060;
                              in_stack_000000b0 = in_stack_00000058;
                              in_stack_000000c0 = in_stack_00000068;
                              while (uVar23 = FUN_022e1404(&stack0x000000b0,*(undefined8 *)puVar4),
                                    lVar13 = in_stack_000000c0, (uVar23 & 1) != 0) {
                                if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_017fc5a8();
                                }
                                uVar23 = FUN_0220082c(*(long *)(unaff_x19 + 0x20),in_stack_000000c0,
                                                      *(undefined8 *)PTR_DAT_037f4e30);
                                if ((uVar23 & 1) == 0) {
                                  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_017fc5a8();
                                  }
                                  uVar10 = FUN_033ed158(lVar13,0);
                                  uVar10 = FUN_02a43498(*(undefined8 *)PTR_DAT_037f4ea0,uVar10,0);
                                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                                    thunk_FUN_01843fdc();
                                  }
                                  FUN_033bce1c(uVar10,0);
                                  lVar8 = FUN_01b26fcc(lVar13,*(undefined8 *)PTR_DAT_037f4e60);
                                  if (*(int *)(*(long *)PTR_DAT_037f2b10 + 0xe0) == 0) {
                                    thunk_FUN_01843fdc();
                                  }
                                  uVar23 = FUN_033e963c(lVar8,0,0);
                                  if ((uVar23 & 1) != 0) {
                                    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_017fc5a8();
                                    }
                                    plVar18 = (long *)FUN_033c92e0(lVar8,0);
                                    if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_017fc5a8();
                                    }
                                    auVar43 = FUN_02bf1b10(plVar18,0);
                                    lVar9 = auVar43._0_8_;
                                    if (lVar9 == 0) {
                                      auVar44._8_8_ = 0;
                                      auVar44._0_8_ = auVar43._8_8_;
                                      auVar44 = auVar44 << 0x40;
                                    }
                                    else {
                                      uVar10 = *(undefined8 *)PTR_DAT_037f4e88;
                                      auVar44 = thunk_FUN_01861ac0(lVar9,uVar10);
                                      if (auVar44._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_017fc944(lVar9,uVar10);
                                      }
                                    }
                                    if (*(long *)(unaff_x19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_017fc5a8(0,auVar44._8_8_,auVar44._0_8_);
                                    }
                                    FUN_02200638(*(long *)(unaff_x19 + 0x28),lVar13,auVar44._0_8_,
                                                 *(undefined8 *)PTR_DAT_037f4e20);
                                    if (0 < (int)plVar18[3]) {
                                      uVar23 = 0;
                                      uVar15 = plVar18[3] & 0xffffffff;
                                      plVar21 = plVar18 + 4;
                                      do {
                                        lVar13 = *(long *)(unaff_x19 + 0x38);
                                        if (lVar13 != 0) {
                                          lVar9 = thunk_FUN_01861ac0(lVar13,*(undefined8 *)
                                                                             (*plVar18 + 0x40));
                                          if (lVar9 == 0) {
                                            uVar10 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
                                            FUN_017fc474(uVar10,0);
                                          }
                                          uVar15 = (ulong)*(uint *)(plVar18 + 3);
                                        }
                                        if (uVar15 <= uVar23) {
                    /* WARNING: Subroutine does not return */
                                          FUN_017fc5b0();
                                        }
                                        *plVar21 = lVar13;
                                        thunk_FUN_0188fd20(plVar21,lVar13);
                                        uVar15 = (ulong)*(uint *)(plVar18 + 3);
                                        uVar23 = uVar23 + 1;
                                        plVar21 = plVar21 + 1;
                                      } while ((long)uVar23 < (long)(int)*(uint *)(plVar18 + 3));
                                    }
                                    thunk_FUN_033c8c18(lVar8,plVar18,0);
                                  }
                                }
                                else {
                                  if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_017fc5a8();
                                  }
                                  lVar8 = *(long *)(unaff_x19 + 0x28);
                                  uVar10 = FUN_022005b8(*(long *)(unaff_x19 + 0x20),lVar13,
                                                        *(undefined8 *)PTR_DAT_037f4e40);
                                  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_017fc5a8();
                                  }
                                  FUN_02200638(lVar8,lVar13,uVar10,*(undefined8 *)PTR_DAT_037f4e20);
                                  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_017fc5a8();
                                  }
                                  uVar10 = FUN_033ed158(lVar13,0);
                                  if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_017fc5a8();
                                  }
                                  lVar13 = FUN_022005b8(*(long *)(unaff_x19 + 0x20),lVar13,
                                                        *(undefined8 *)PTR_DAT_037f4e40);
                                  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_017fc5a8();
                                  }
                                  if (*(int *)(lVar13 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_017fc5b0();
                                  }
                                  plVar18 = *(long **)(lVar13 + 0x20);
                                  uVar22 = *(undefined8 *)PTR_DAT_037f4e90;
                                  if (plVar18 != (long *)0x0) {
                                    plVar20 = plVar18;
                                  }
                                  uVar11 = *(undefined8 *)PTR_DAT_037f4e98;
                                  if (plVar18 == (long *)0x0) {
                                    uVar12 = 0;
                                  }
                                  else {
                                    if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_017fc5a8();
                                    }
                                    uVar12 = (**(code **)(*plVar20 + 0x168))
                                                       (plVar20,*(undefined8 *)(*plVar20 + 0x170));
                                  }
                                  uVar10 = FUN_02a506f0(uVar11,uVar10,uVar22,uVar12,0);
                                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                                    thunk_FUN_01843fdc();
                                  }
                                  FUN_033bce1c(uVar10,0);
                                }
                              }
                              FUN_022e1400(&stack0x000000b0,*(undefined8 *)PTR_DAT_037f3740);
                              if (*(long *)(unaff_x19 + 0x20) != 0) {
                                FUN_022007c0(*(long *)(unaff_x19 + 0x20),
                                             *(undefined8 *)PTR_DAT_037f4e28);
                                if (*(long *)(unaff_x19 + 0x28) != 0) {
                                  FUN_02200a68(&stack0x00000058,*(long *)(unaff_x19 + 0x28),
                                               *(undefined8 *)PTR_DAT_037f4e38);
                                  in_stack_000000d8 = in_stack_00000060;
                                  in_stack_000000d0 = in_stack_00000058;
                                  *(undefined8 *)(unaff_x26 + 0x18) = in_stack_00000070;
                                  *(long *)(unaff_x26 + 0x10) = in_stack_00000068;
                                  puVar3 = PTR_DAT_037f4e20;
                                  in_stack_000000f0 = in_stack_00000078;
                                  while( true ) {
                                    uVar23 = FUN_02358864(&stack0x000000d0,*(undefined8 *)puVar5);
                                    if ((uVar23 & 1) == 0) {
                                      FUN_02358984(&stack0x000000d0,*(undefined8 *)PTR_DAT_037f4e48)
                                      ;
                                      return;
                                    }
                                    if (*(long *)(unaff_x19 + 0x20) == 0) break;
                                    FUN_02200638(*(long *)(unaff_x19 + 0x20),in_stack_000000e0,
                                                 in_stack_000000e8,*(undefined8 *)puVar3);
                                  }
                    /* WARNING: Subroutine does not return */
                                  FUN_017fc5a8();
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
          }
        }
      }
    }
  }
LAB_0193e37c:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


