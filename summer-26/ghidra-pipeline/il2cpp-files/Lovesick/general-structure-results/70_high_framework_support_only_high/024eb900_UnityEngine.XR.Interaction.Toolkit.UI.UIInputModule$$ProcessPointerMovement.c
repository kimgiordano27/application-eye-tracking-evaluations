/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.UI.UIInputModule$$ProcessPointerMovement
ENTRY_POINT: 024eb900
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 UnityEngine_XR_Interaction_Toolkit_UI_UIInputModule__ProcessPointerMovement(void)

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
  undefined *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  long unaff_x19;
  long lVar24;
  undefined8 *unaff_x21;
  long unaff_x23;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float unaff_s8;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar37 [16];
  uint uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000050;
  
  fVar25 = (float)FUN_026fd668();
  *(undefined4 *)(unaff_x19 + 0x21c) = 0;
  *(float *)(unaff_x19 + 0x218) = unaff_s8 * fVar25;
  iVar11 = *(int *)(unaff_x19 + 0x3c);
  if (DAT_03775283 == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03775283 = '\x01';
  }
  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
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
  auVar37._8_8_ = in_stack_00000038;
  auVar37._0_8_ = in_stack_00000030;
  iVar12 = -iVar11;
  if (-1 < iVar11) {
    iVar12 = iVar11;
  }
  *(float *)(unaff_x19 + 0x220) = 1.0 / (float)iVar12;
                    /* catch() { ... } // from try @ 024eb67c with catch @ 024eb97c */
  _in_stack_00000030 = auVar7;
  if (*(float *)(unaff_x19 + 0x21c) <= 1.0 / (float)iVar12) {
LAB_024ebf44:
    fVar34 = *(float *)(unaff_x19 + 0x21c);
    fVar25 = (float)FUN_02689110(0);
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    *(float *)(unaff_x19 + 0x21c) = fVar34 + fVar25;
    *(undefined4 *)(unaff_x19 + 0x10) = 2;
    return 1;
  }
  *(undefined4 *)(unaff_x19 + 0x21c) = 0;
  _in_stack_00000030 = auVar37;
                    /* try { // try from 024eb98c to 025eb9b7 has its CatchHandler @ 024eb9cc */
  if ((((unaff_x23 != 0) && (_in_stack_00000030 = auVar3, *(long *)(unaff_x23 + 0x20) != 0)) &&
      (lVar22 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0x360), _in_stack_00000030 = auVar4,
      lVar22 != 0)) && (lVar22 = *(long *)(lVar22 + 0x38), _in_stack_00000030 = auVar5, lVar22 != 0)
     ) {
                    /* catch() { ... } // from try @ 024eb4f4 with catch @ 024eb9a0 */
    uVar1 = *(uint *)(unaff_x19 + 0x38);
    _in_stack_00000030 = auVar7;
    if (*(uint *)(lVar22 + 0x18) <= uVar1) goto LAB_024ebf9c;
                    /* try { // try from 024eb9b8 to 025eb9c3 has its CatchHandler @ 024eb238 */
    sVar2 = *(short *)(lVar22 + (long)(int)uVar1 * 0x178 + 0x20);
                    /* try { // try from 024eb9c4 to 025eb9cb has its CatchHandler @ 024eb9cc */
                    /* catch() { ... } // from try @ 024eb98c with catch @ 024eb9cc
                       catch() { ... } // from try @ 024eb9c4 with catch @ 024eb9cc */
    if ((sVar2 == 0x2026) || (sVar2 == 3)) {
      _in_stack_00000030 = auVar6;
      if (*(long *)(unaff_x23 + 0x18) != 0) {
        uStack0000000000000018 = uVar1;
        FUN_0129de0c(*(long *)(unaff_x23 + 0x18),&stack0x00000018,
                     *(undefined8 *)OVRPlugin_Sizef_TypeInfo);
        return 0;
      }
    }
    else {
      lVar22 = *(long *)(unaff_x19 + 0x30);
      if (lVar22 != 0) {
        if (*(long *)(lVar22 + 0x38) == 0) {
          FUN_024ec04c(lVar22);
        }
        if (*(long *)(lVar22 + 0xb0) != 0) {
          FUN_0132138c(*(long *)(lVar22 + 0xb0),*(undefined4 *)(unaff_x19 + 0x40),&stack0x00000018,
                       *unaff_x21);
          auVar8._8_8_ = in_stack_00000038;
          auVar8._0_8_ = in_stack_00000030;
          lVar22 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
          if ((lVar22 != 0) && (_in_stack_00000030 = auVar8, *(long *)(lVar22 + 0x20) != 0)) {
            lVar24 = *(long *)(unaff_x19 + 0x1d8);
            fVar34 = *(float *)(unaff_x19 + 0x168);
            fVar35 = *(float *)(unaff_x19 + 0x174);
            fVar36 = *(float *)(unaff_x19 + 0x188);
            fVar33 = *(float *)(unaff_x19 + 0x218);
            fVar32 = *(float *)(lVar22 + 0x2c);
            fVar25 = (float)FUN_026fd668(*(long *)(lVar22 + 0x20),0);
            if (*(long *)(lVar22 + 0x20) != 0) {
              FUN_026fd62c(&stack0x00000018,*(long *)(lVar22 + 0x20),0);
              in_stack_00000040 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
              in_stack_00000048 = in_stack_00000020;
              in_stack_00000050 = in_stack_00000028;
              fVar26 = (float)FUN_026fd464(&stack0x00000040,0);
              if (*(long *)(lVar22 + 0x20) != 0) {
                FUN_026fd62c(&stack0x00000018,*(long *)(lVar22 + 0x20),0);
                in_stack_00000040 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
                in_stack_00000048 = in_stack_00000020;
                in_stack_00000050 = in_stack_00000028;
                fVar27 = (float)FUN_026fd46c(&stack0x00000040,0);
                if (*(long *)(lVar22 + 0x20) != 0) {
                  FUN_026fd62c(&stack0x00000018,*(long *)(lVar22 + 0x20),0);
                  in_stack_00000040 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
                  in_stack_00000048 = in_stack_00000020;
                  in_stack_00000050 = in_stack_00000028;
                  fVar28 = (float)FUN_026fd45c(&stack0x00000040,0);
                  if (*(long *)(lVar22 + 0x20) != 0) {
                    FUN_026fd62c(&stack0x00000018,*(long *)(lVar22 + 0x20),0);
                    in_stack_00000040 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
                    in_stack_00000048 = in_stack_00000020;
                    in_stack_00000050 = in_stack_00000028;
                    fVar29 = (float)FUN_026fd46c(&stack0x00000040,0);
                    if (*(long *)(lVar22 + 0x20) != 0) {
                      FUN_026fd62c(&stack0x00000018,*(long *)(lVar22 + 0x20),0);
                      in_stack_00000040 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
                      in_stack_00000048 = in_stack_00000020;
                      in_stack_00000050 = in_stack_00000028;
                      fVar30 = (float)FUN_026fd464(&stack0x00000040,0);
                      if (*(long *)(lVar22 + 0x20) != 0) {
                        FUN_026fd62c(&stack0x00000018,*(long *)(lVar22 + 0x20),0);
                        in_stack_00000040 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
                        in_stack_00000048 = in_stack_00000020;
                        in_stack_00000050 = in_stack_00000028;
                        fVar31 = (float)FUN_026fd454(&stack0x00000040,0);
                        auVar9._8_8_ = in_stack_00000038;
                        auVar9._0_8_ = in_stack_00000030;
                        if (lVar24 != 0) {
                          _in_stack_00000030 = auVar9;
                          if (*(uint *)(unaff_x19 + 0x1c4) < *(uint *)(lVar24 + 0x18)) {
                            fVar25 = (fVar36 / fVar33) * fVar32 * fVar25;
                            lVar23 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x1c4) * 0xc;
                            fVar33 = fVar34 + fVar25 * fVar26;
                            fVar32 = fVar35 + fVar25 * (fVar27 - fVar28);
                            *(float *)(lVar23 + 0x20) = fVar33;
                            *(float *)(lVar23 + 0x24) = fVar32;
                            *(undefined4 *)(lVar23 + 0x28) = 0;
                            uVar1 = *(int *)(unaff_x19 + 0x1c4) + 1;
                            if (uVar1 < *(uint *)(lVar24 + 0x18)) {
                              fVar35 = fVar35 + fVar25 * fVar29;
                              lVar23 = lVar24 + (long)(int)uVar1 * 0xc;
                              *(float *)(lVar23 + 0x20) = fVar33;
                              *(float *)(lVar23 + 0x24) = fVar35;
                              *(undefined4 *)(lVar23 + 0x28) = 0;
                              uVar1 = *(int *)(unaff_x19 + 0x1c4) + 2;
                              if (uVar1 < *(uint *)(lVar24 + 0x18)) {
                                lVar23 = lVar24 + (long)(int)uVar1 * 0xc;
                                fVar34 = fVar34 + fVar25 * (fVar30 + fVar31);
                                *(float *)(lVar23 + 0x20) = fVar34;
                                *(float *)(lVar23 + 0x24) = fVar35;
                                *(undefined4 *)(lVar23 + 0x28) = 0;
                                uVar1 = *(int *)(unaff_x19 + 0x1c4) + 3;
                                if (uVar1 < *(uint *)(lVar24 + 0x18)) {
                                  lVar23 = lVar24 + (long)(int)uVar1 * 0xc;
                                  *(float *)(lVar23 + 0x20) = fVar34;
                                  *(float *)(lVar23 + 0x24) = fVar32;
                                  *(undefined4 *)(lVar23 + 0x28) = 0;
                                  puVar10 = StringLiteral_1944;
                                  if (*(long *)(lVar22 + 0x20) != 0) {
                                    lVar23 = *(long *)(unaff_x19 + 0x1f0);
                                    _in_stack_00000030 = FUN_026fd654(*(long *)(lVar22 + 0x20),0);
                                    if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                                      thunk_FUN_00d32864();
                                    }
                                    iVar11 = FUN_026fd218(&stack0x00000030,0);
                                    if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                                       (plVar21 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0xa8),
                                       plVar21 != (long *)0x0)) {
                                      iVar12 = (**(code **)(*plVar21 + 0x188))
                                                         (plVar21,*(undefined8 *)(*plVar21 + 400));
                                      if (*(long *)(lVar22 + 0x20) != 0) {
                                        auVar37 = FUN_026fd654(*(long *)(lVar22 + 0x20),0);
                                        _in_stack_00000030 = auVar37;
                                        iVar13 = FUN_026fd220(&stack0x00000030,0);
                                        if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                                           (plVar21 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0xa8)
                                           , plVar21 != (long *)0x0)) {
                                          iVar14 = (**(code **)(*plVar21 + 0x1a8))
                                                             (plVar21,*(undefined8 *)
                                                                       (*plVar21 + 0x1b0));
                                          if (*(long *)(lVar22 + 0x20) != 0) {
                                            auVar37 = FUN_026fd654(*(long *)(lVar22 + 0x20),0);
                                            _in_stack_00000030 = auVar37;
                                            iVar15 = FUN_026fd220(&stack0x00000030,0);
                                            if (*(long *)(lVar22 + 0x20) != 0) {
                                              auVar37 = FUN_026fd654(*(long *)(lVar22 + 0x20),0);
                                              _in_stack_00000030 = auVar37;
                                              iVar16 = FUN_026fd230(&stack0x00000030,0);
                                              if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                                                 (plVar21 = *(long **)(*(long *)(unaff_x19 + 0x30) +
                                                                      0xa8), plVar21 != (long *)0x0)
                                                 ) {
                                                iVar17 = (**(code **)(*plVar21 + 0x1a8))
                                                                   (plVar21,*(undefined8 *)
                                                                             (*plVar21 + 0x1b0));
                                                if (*(long *)(lVar22 + 0x20) != 0) {
                                                  auVar37 = FUN_026fd654(*(long *)(lVar22 + 0x20),0)
                                                  ;
                                                  _in_stack_00000030 = auVar37;
                                                  iVar18 = FUN_026fd218(&stack0x00000030,0);
                                                  if (*(long *)(lVar22 + 0x20) != 0) {
                                                    auVar37 = FUN_026fd654(*(long *)(lVar22 + 0x20),
                                                                           0);
                                                    _in_stack_00000030 = auVar37;
                                                    iVar19 = FUN_026fd228(&stack0x00000030,0);
                                                    if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                                                       (plVar21 = *(long **)(*(long *)(unaff_x19 +
                                                                                      0x30) + 0xa8),
                                                       plVar21 != (long *)0x0)) {
                                                      iVar20 = (**(code **)(*plVar21 + 0x188))
                                                                         (plVar21,*(undefined8 *)
                                                                                   (*plVar21 + 400))
                                                      ;
                                                      if (lVar23 != 0) {
                                                        if (*(uint *)(unaff_x19 + 0x1c4) <
                                                            *(uint *)(lVar23 + 0x18)) {
                                                          lVar22 = lVar23 + (long)(int)*(uint *)(
                                                  unaff_x19 + 0x1c4) * 8;
                                                  *(float *)(lVar22 + 0x20) =
                                                       (float)iVar11 / (float)iVar12;
                                                  *(float *)(lVar22 + 0x24) =
                                                       (float)iVar13 / (float)iVar14;
                                                  uVar1 = *(int *)(unaff_x19 + 0x1c4) + 1;
                                                  if (uVar1 < *(uint *)(lVar23 + 0x18)) {
                                                    lVar22 = lVar23 + (long)(int)uVar1 * 8;
                                                    fVar25 = (float)(iVar16 + iVar15) /
                                                             (float)iVar17;
                                                    *(float *)(lVar22 + 0x20) =
                                                         (float)iVar11 / (float)iVar12;
                                                    *(float *)(lVar22 + 0x24) = fVar25;
                                                    uVar1 = *(int *)(unaff_x19 + 0x1c4) + 2;
                                                    if (uVar1 < *(uint *)(lVar23 + 0x18)) {
                                                      lVar22 = lVar23 + (long)(int)uVar1 * 8;
                                                      fVar34 = (float)(iVar19 + iVar18) /
                                                               (float)iVar20;
                                                      *(float *)(lVar22 + 0x20) = fVar34;
                                                      *(float *)(lVar22 + 0x24) = fVar25;
                                                      uVar1 = *(int *)(unaff_x19 + 0x1c4) + 3;
                                                      if (uVar1 < *(uint *)(lVar23 + 0x18)) {
                                                        lVar22 = lVar23 + (long)(int)uVar1 * 8;
                                                        *(float *)(lVar22 + 0x20) = fVar34;
                                                        *(float *)(lVar22 + 0x24) =
                                                             (float)iVar13 / (float)iVar14;
                                                        if (*(long *)(unaff_x19 + 0x1c8) != 0) {
                                                          FUN_0266b9c4(*(long *)(unaff_x19 + 0x1c8),
                                                                       lVar24,0);
                                                          if (*(long *)(unaff_x19 + 0x1c8) != 0) {
                                                            FUN_0266bbc8(*(long *)(unaff_x19 + 0x1c8
                                                                                  ),lVar23,0);
                                                            plVar21 = *(long **)(unaff_x23 + 0x20);
                                                            if (plVar21 != (long *)0x0) {
                                                              (**(code **)(*plVar21 + 0x7e8))
                                                                        (plVar21,*(undefined8 *)
                                                                                  (unaff_x19 + 0x1c8
                                                                                  ),
                                                                         *(undefined4 *)
                                                                          (unaff_x19 + 0x1c0),
                                                                         *(undefined8 *)
                                                                          (*plVar21 + 0x7f0));
                                                              iVar11 = *(int *)(unaff_x19 + 0x40);
                                                              if (*(int *)(unaff_x19 + 0x3c) < 1) {
                    /* try { // try from 024ebf24 to 025ec037 has its CatchHandler @ 024ebf24
                       catch() { ... } // from try @ 024ebf24 with catch @ 024ebf24
                       catch() { ... } // from try @ 024ec05c with catch @ 024ebf24
                       catch() { ... } // from try @ 024ec0a8 with catch @ 024ebf24
                       catch() { ... } // from try @ 024ec0d8 with catch @ 024ebf24 */
                                                                if (*(int *)(unaff_x19 + 0x28) <
                                                                    iVar11) {
                                                                  iVar11 = iVar11 + -1;
                                                                }
                                                                else {
                                                                  iVar11 = *(int *)(unaff_x19 + 0x2c
                                                                                   );
                                                                }
                                                              }
                                                              else if (iVar11 < *(int *)(unaff_x19 +
                                                                                        0x2c)) {
                                                                iVar11 = iVar11 + 1;
                                                              }
                                                              else {
                                                                iVar11 = *(int *)(unaff_x19 + 0x28);
                                                              }
                                                              *(int *)(unaff_x19 + 0x40) = iVar11;
                                                              goto LAB_024ebf44;
                                                            }
                                                          }
                                                        }
                                                        goto LAB_024ebf98;
                                                      }
                                                    }
                                                  }
                                                  }
                                                  goto LAB_024ebf9c;
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
                                  goto LAB_024ebf98;
                                }
                              }
                            }
                          }
LAB_024ebf9c:
                    /* WARNING: Subroutine does not return */
                          FUN_00da5194();
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
LAB_024ebf98:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


