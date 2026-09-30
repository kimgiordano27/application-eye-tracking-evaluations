/*
FUNCTION_NAME: UnityEngine.Material$$HasTexture
ENTRY_POINT: 0359a0d8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 UnityEngine_Material__HasTexture(float param_1,float param_2)

{
  uint uVar1;
  short sVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  long unaff_x19;
  long lVar23;
  long unaff_x23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar36 [16];
  uint uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000050;
  
  auVar7._8_8_ = in_stack_00000038;
  auVar7._0_8_ = in_stack_00000030;
  auVar6._8_8_ = in_stack_00000038;
  auVar6._0_8_ = in_stack_00000030;
  auVar5._8_8_ = in_stack_00000038;
  auVar5._0_8_ = in_stack_00000030;
  auVar4._8_8_ = in_stack_00000038;
  auVar4._0_8_ = in_stack_00000030;
  auVar3._8_8_ = in_stack_00000038;
  auVar3._0_8_ = in_stack_00000030;
  auVar36._8_8_ = in_stack_00000038;
  auVar36._0_8_ = in_stack_00000030;
  *(float *)(unaff_x19 + 0x220) = param_2 / param_1;
  _in_stack_00000030 = auVar7;
  if (*(float *)(unaff_x19 + 0x21c) <= param_2 / param_1) {
LAB_0359a6b8:
    fVar33 = *(float *)(unaff_x19 + 0x21c);
    fVar24 = (float)FUN_036c4edc(0);
    *(float *)(unaff_x19 + 0x21c) = fVar33 + fVar24;
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(unaff_x19 + 0x18),0);
    *(undefined4 *)(unaff_x19 + 0x10) = 2;
    return 1;
  }
  *(undefined4 *)(unaff_x19 + 0x21c) = 0;
  _in_stack_00000030 = auVar36;
  if ((((unaff_x23 != 0) && (_in_stack_00000030 = auVar3, *(long *)(unaff_x23 + 0x28) != 0)) &&
      (lVar21 = *(long *)(*(long *)(unaff_x23 + 0x28) + 0x368), _in_stack_00000030 = auVar4,
      lVar21 != 0)) && (lVar21 = *(long *)(lVar21 + 0x38), _in_stack_00000030 = auVar5, lVar21 != 0)
     ) {
    uVar1 = *(uint *)(unaff_x19 + 0x38);
    _in_stack_00000030 = auVar7;
    if (*(uint *)(lVar21 + 0x18) <= uVar1) goto LAB_0359a71c;
    sVar2 = *(short *)(lVar21 + (long)(int)uVar1 * 0x178 + 0x20);
    if ((sVar2 == 0x2026) || (sVar2 == 3)) {
      _in_stack_00000030 = auVar6;
      if (*(long *)(unaff_x23 + 0x20) != 0) {
        uStack0000000000000018 = uVar1;
        FUN_0219eaf8(*(long *)(unaff_x23 + 0x20),&stack0x00000018,
                     *(undefined8 *)VRMShaders_RuntimeOnlyAwaitCaller_<>c__DisplayClass4_0_TypeInfo)
        ;
        return 0;
      }
    }
    else {
      lVar21 = *(long *)(unaff_x19 + 0x30);
      if (lVar21 != 0) {
        if (*(long *)(lVar21 + 0x38) == 0) {
          FUN_0359a7d0(lVar21);
        }
        if (*(long *)(lVar21 + 0xb0) != 0) {
          FUN_02215a88(*(long *)(lVar21 + 0xb0),*(undefined4 *)(unaff_x19 + 0x40),&stack0x00000018,
                       *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
          auVar8._8_8_ = in_stack_00000038;
          auVar8._0_8_ = in_stack_00000030;
          lVar21 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
          if ((lVar21 != 0) && (_in_stack_00000030 = auVar8, *(long *)(lVar21 + 0x20) != 0)) {
            lVar23 = *(long *)(unaff_x19 + 0x1d8);
            fVar33 = *(float *)(unaff_x19 + 0x168);
            fVar34 = *(float *)(unaff_x19 + 0x174);
            fVar35 = *(float *)(unaff_x19 + 0x188);
            fVar32 = *(float *)(unaff_x19 + 0x218);
            fVar31 = *(float *)(lVar21 + 0x2c);
            fVar24 = (float)FUN_03776ea8(*(long *)(lVar21 + 0x20),0);
            if (*(long *)(lVar21 + 0x20) != 0) {
              FUN_03776e6c(&stack0x00000018,*(long *)(lVar21 + 0x20),0);
              in_stack_00000040 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
              in_stack_00000048 = in_stack_00000020;
              in_stack_00000050 = in_stack_00000028;
              fVar25 = (float)FUN_03776ca4(&stack0x00000040,0);
              if (*(long *)(lVar21 + 0x20) != 0) {
                FUN_03776e6c(&stack0x00000018,*(long *)(lVar21 + 0x20),0);
                in_stack_00000040 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
                in_stack_00000048 = in_stack_00000020;
                in_stack_00000050 = in_stack_00000028;
                fVar26 = (float)FUN_03776cac(&stack0x00000040,0);
                if (*(long *)(lVar21 + 0x20) != 0) {
                  FUN_03776e6c(&stack0x00000018,*(long *)(lVar21 + 0x20),0);
                  in_stack_00000040 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
                  in_stack_00000048 = in_stack_00000020;
                  in_stack_00000050 = in_stack_00000028;
                  fVar27 = (float)FUN_03776c9c(&stack0x00000040,0);
                  if (*(long *)(lVar21 + 0x20) != 0) {
                    FUN_03776e6c(&stack0x00000018,*(long *)(lVar21 + 0x20),0);
                    in_stack_00000040 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
                    in_stack_00000048 = in_stack_00000020;
                    in_stack_00000050 = in_stack_00000028;
                    fVar28 = (float)FUN_03776cac(&stack0x00000040,0);
                    if (*(long *)(lVar21 + 0x20) != 0) {
                      FUN_03776e6c(&stack0x00000018,*(long *)(lVar21 + 0x20),0);
                      in_stack_00000040 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
                      in_stack_00000048 = in_stack_00000020;
                      in_stack_00000050 = in_stack_00000028;
                      fVar29 = (float)FUN_03776ca4(&stack0x00000040,0);
                      if (*(long *)(lVar21 + 0x20) != 0) {
                        FUN_03776e6c(&stack0x00000018,*(long *)(lVar21 + 0x20),0);
                        in_stack_00000040 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
                        in_stack_00000048 = in_stack_00000020;
                        in_stack_00000050 = in_stack_00000028;
                        fVar30 = (float)FUN_03776c94(&stack0x00000040,0);
                        auVar9._8_8_ = in_stack_00000038;
                        auVar9._0_8_ = in_stack_00000030;
                        if (lVar23 != 0) {
                          _in_stack_00000030 = auVar9;
                          if (*(uint *)(unaff_x19 + 0x1c4) < *(uint *)(lVar23 + 0x18)) {
                            fVar24 = (fVar35 / fVar32) * fVar31 * fVar24;
                            lVar22 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x1c4) * 0xc;
                            fVar32 = fVar33 + fVar24 * fVar25;
                            fVar31 = fVar34 + fVar24 * (fVar26 - fVar27);
                            *(float *)(lVar22 + 0x20) = fVar32;
                            *(float *)(lVar22 + 0x24) = fVar31;
                            *(undefined4 *)(lVar22 + 0x28) = 0;
                            uVar1 = *(int *)(unaff_x19 + 0x1c4) + 1;
                            if (uVar1 < *(uint *)(lVar23 + 0x18)) {
                              fVar34 = fVar34 + fVar24 * fVar28;
                              lVar22 = lVar23 + (long)(int)uVar1 * 0xc;
                              *(float *)(lVar22 + 0x20) = fVar32;
                              *(float *)(lVar22 + 0x24) = fVar34;
                              *(undefined4 *)(lVar22 + 0x28) = 0;
                              uVar1 = *(int *)(unaff_x19 + 0x1c4) + 2;
                              if (uVar1 < *(uint *)(lVar23 + 0x18)) {
                                lVar22 = lVar23 + (long)(int)uVar1 * 0xc;
                                fVar33 = fVar33 + fVar24 * (fVar29 + fVar30);
                                *(float *)(lVar22 + 0x20) = fVar33;
                                *(float *)(lVar22 + 0x24) = fVar34;
                                *(undefined4 *)(lVar22 + 0x28) = 0;
                                uVar1 = *(int *)(unaff_x19 + 0x1c4) + 3;
                                if (uVar1 < *(uint *)(lVar23 + 0x18)) {
                                  lVar22 = lVar23 + (long)(int)uVar1 * 0xc;
                                  *(float *)(lVar22 + 0x20) = fVar33;
                                  *(float *)(lVar22 + 0x24) = fVar31;
                                  *(undefined4 *)(lVar22 + 0x28) = 0;
                                  if (*(long *)(lVar21 + 0x20) != 0) {
                                    lVar22 = *(long *)(unaff_x19 + 0x1f0);
                                    _in_stack_00000030 = FUN_03776e94(*(long *)(lVar21 + 0x20),0);
                                    if (*(int *)(*(long *)
                                                  System_Runtime_Serialization_Formatters_Binary_ObjectReader_TypeNAssembly_TypeInfo
                                                + 0xe0) == 0) {
                                      thunk_FUN_01a58e78();
                                    }
                                    iVar10 = FUN_03776a58(&stack0x00000030,0);
                                    if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                                       (plVar20 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0xa8),
                                       plVar20 != (long *)0x0)) {
                                      iVar11 = (**(code **)(*plVar20 + 0x188))
                                                         (plVar20,*(undefined8 *)(*plVar20 + 400));
                                      if (*(long *)(lVar21 + 0x20) != 0) {
                                        auVar36 = FUN_03776e94(*(long *)(lVar21 + 0x20),0);
                                        _in_stack_00000030 = auVar36;
                                        iVar12 = FUN_03776a60(&stack0x00000030,0);
                                        if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                                           (plVar20 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0xa8)
                                           , plVar20 != (long *)0x0)) {
                                          iVar13 = (**(code **)(*plVar20 + 0x1a8))
                                                             (plVar20,*(undefined8 *)
                                                                       (*plVar20 + 0x1b0));
                                          if (*(long *)(lVar21 + 0x20) != 0) {
                                            auVar36 = FUN_03776e94(*(long *)(lVar21 + 0x20),0);
                                            _in_stack_00000030 = auVar36;
                                            iVar14 = FUN_03776a60(&stack0x00000030,0);
                                            if (*(long *)(lVar21 + 0x20) != 0) {
                                              auVar36 = FUN_03776e94(*(long *)(lVar21 + 0x20),0);
                                              _in_stack_00000030 = auVar36;
                                              iVar15 = FUN_03776a70(&stack0x00000030,0);
                                              if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                                                 (plVar20 = *(long **)(*(long *)(unaff_x19 + 0x30) +
                                                                      0xa8), plVar20 != (long *)0x0)
                                                 ) {
                                                iVar16 = (**(code **)(*plVar20 + 0x1a8))
                                                                   (plVar20,*(undefined8 *)
                                                                             (*plVar20 + 0x1b0));
                                                if (*(long *)(lVar21 + 0x20) != 0) {
                                                  auVar36 = FUN_03776e94(*(long *)(lVar21 + 0x20),0)
                                                  ;
                                                  _in_stack_00000030 = auVar36;
                                                  iVar17 = FUN_03776a58(&stack0x00000030,0);
                                                  if (*(long *)(lVar21 + 0x20) != 0) {
                                                    auVar36 = FUN_03776e94(*(long *)(lVar21 + 0x20),
                                                                           0);
                                                    _in_stack_00000030 = auVar36;
                                                    iVar18 = FUN_03776a68(&stack0x00000030,0);
                                                    if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                                                       (plVar20 = *(long **)(*(long *)(unaff_x19 +
                                                                                      0x30) + 0xa8),
                                                       plVar20 != (long *)0x0)) {
                                                      iVar19 = (**(code **)(*plVar20 + 0x188))
                                                                         (plVar20,*(undefined8 *)
                                                                                   (*plVar20 + 400))
                                                      ;
                                                      if (lVar22 != 0) {
                                                        if (*(uint *)(unaff_x19 + 0x1c4) <
                                                            *(uint *)(lVar22 + 0x18)) {
                                                          lVar21 = lVar22 + (long)(int)*(uint *)(
                                                  unaff_x19 + 0x1c4) * 8;
                                                  *(float *)(lVar21 + 0x20) =
                                                       (float)iVar10 / (float)iVar11;
                                                  *(float *)(lVar21 + 0x24) =
                                                       (float)iVar12 / (float)iVar13;
                                                  uVar1 = *(int *)(unaff_x19 + 0x1c4) + 1;
                                                  if (uVar1 < *(uint *)(lVar22 + 0x18)) {
                                                    lVar21 = lVar22 + (long)(int)uVar1 * 8;
                                                    fVar24 = (float)(iVar15 + iVar14) /
                                                             (float)iVar16;
                                                    *(float *)(lVar21 + 0x20) =
                                                         (float)iVar10 / (float)iVar11;
                                                    *(float *)(lVar21 + 0x24) = fVar24;
                                                    uVar1 = *(int *)(unaff_x19 + 0x1c4) + 2;
                                                    if (uVar1 < *(uint *)(lVar22 + 0x18)) {
                                                      lVar21 = lVar22 + (long)(int)uVar1 * 8;
                                                      fVar33 = (float)(iVar18 + iVar17) /
                                                               (float)iVar19;
                                                      *(float *)(lVar21 + 0x20) = fVar33;
                                                      *(float *)(lVar21 + 0x24) = fVar24;
                                                      uVar1 = *(int *)(unaff_x19 + 0x1c4) + 3;
                                                      if (uVar1 < *(uint *)(lVar22 + 0x18)) {
                                                        lVar21 = lVar22 + (long)(int)uVar1 * 8;
                                                        *(float *)(lVar21 + 0x20) = fVar33;
                                                        *(float *)(lVar21 + 0x24) =
                                                             (float)iVar12 / (float)iVar13;
                                                        if (*(long *)(unaff_x19 + 0x1c8) != 0) {
                                                          FUN_036a460c(*(long *)(unaff_x19 + 0x1c8),
                                                                       lVar23,0);
                                                          if (*(long *)(unaff_x19 + 0x1c8) != 0) {
                                                            FUN_036a4810(*(long *)(unaff_x19 + 0x1c8
                                                                                  ),lVar22,0);
                                                            plVar20 = *(long **)(unaff_x23 + 0x28);
                                                            if (plVar20 != (long *)0x0) {
                                                              (**(code **)(*plVar20 + 0x7b8))
                                                                        (plVar20,*(undefined8 *)
                                                                                  (unaff_x19 + 0x1c8
                                                                                  ),
                                                                         *(undefined4 *)
                                                                          (unaff_x19 + 0x1c0),
                                                                         *(undefined8 *)
                                                                          (*plVar20 + 0x7c0));
                                                              iVar10 = *(int *)(unaff_x19 + 0x40);
                                                              if (*(int *)(unaff_x19 + 0x3c) < 1) {
                                                                if (*(int *)(unaff_x19 + 0x28) <
                                                                    iVar10) {
                                                                  iVar10 = iVar10 + -1;
                                                                }
                                                                else {
                                                                  iVar10 = *(int *)(unaff_x19 + 0x2c
                                                                                   );
                                                                }
                                                              }
                                                              else if (iVar10 < *(int *)(unaff_x19 +
                                                                                        0x2c)) {
                                                                iVar10 = iVar10 + 1;
                                                              }
                                                              else {
                                                                iVar10 = *(int *)(unaff_x19 + 0x28);
                                                              }
                                                              *(int *)(unaff_x19 + 0x40) = iVar10;
                                                              goto LAB_0359a6b8;
                                                            }
                                                          }
                                                        }
                                                        goto LAB_0359a718;
                                                      }
                                                    }
                                                  }
                                                  }
                                                  goto LAB_0359a71c;
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
                                  goto LAB_0359a718;
                                }
                              }
                            }
                          }
LAB_0359a71c:
                    /* WARNING: Subroutine does not return */
                          FUN_01ab6c44();
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
LAB_0359a718:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


