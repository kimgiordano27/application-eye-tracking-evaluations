/*
FUNCTION_NAME: OVRPlugin.VirtualKeyboardModelAnimationStateHandler$$Invoke
ENTRY_POINT: 06968e98
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_VirtualKeyboardModelAnimationStateHandler__Invoke
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long unaff_x19;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float in_s16;
  float in_s17;
  float in_s19;
  float fStack0000000000000004;
  float fStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000078;
  float fStack000000000000007c;
  
  iVar3 = *(int *)(unaff_x19 + 0x148);
  fStack000000000000007c = param_8 - param_2 * param_1;
  fVar22 = in_s16 - param_1 * param_3;
  param_8 = param_8 + param_2 * param_1;
  fVar23 = in_s16 + param_1 * param_3;
  fVar20 = *(float *)(unaff_x19 + 0xa4) + param_1 * param_5;
  fVar18 = *(float *)(unaff_x19 + 0xa0) + param_1 * param_6;
  fVar24 = *(float *)(unaff_x19 + 0xa4) - param_1 * param_5;
  fVar25 = *(float *)(unaff_x19 + 0xa0) - param_1 * param_6;
  in_stack_00000078 = FUN_07cadf5c(in_s19 + param_1 * param_7);
  fStack000000000000000c = fVar18;
  uVar13 = FUN_07cadf5c(in_s19 - param_1 * param_7);
  fStack0000000000000004 = fVar24;
  uVar14 = FUN_07cadf5c(in_s17 + param_1 * param_4);
  fVar18 = fStack000000000000007c;
  uVar15 = FUN_07cadf5c(in_s17 - param_1 * param_4);
  lVar7 = *(long *)(unaff_x19 + 0x120);
  if (lVar7 != 0) {
    uVar5 = iVar3 * 2;
    if (*(uint *)(lVar7 + 0x18) <= uVar5) {
LAB_06969440:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    uVar10 = (ulong)(int)uVar5;
    lVar7 = lVar7 + (long)(int)uVar5 * 0xc;
    *(undefined4 *)(lVar7 + 0x20) = in_stack_00000078;
    *(float *)(lVar7 + 0x24) = fStack000000000000000c;
    *(float *)(lVar7 + 0x28) = fVar20;
    lVar7 = *(long *)(unaff_x19 + 0x120);
    if (lVar7 != 0) {
      uVar9 = uVar10 | 1;
      uVar8 = (uint)uVar9;
      if (*(uint *)(lVar7 + 0x18) <= uVar8) goto LAB_06969440;
      lVar7 = lVar7 + (long)(int)uVar8 * 0xc;
      *(undefined4 *)(lVar7 + 0x20) = uVar13;
      *(float *)(lVar7 + 0x24) = fVar25;
      *(float *)(lVar7 + 0x28) = fStack0000000000000004;
      lVar7 = *(long *)(unaff_x19 + 0x120);
      if (lVar7 != 0) {
        uVar1 = uVar5 + 2;
        if (*(uint *)(lVar7 + 0x18) <= uVar1) goto LAB_06969440;
        lVar11 = (long)(int)uVar1;
        lVar7 = lVar7 + (long)(int)uVar1 * 0xc;
        *(undefined4 *)(lVar7 + 0x20) = uVar14;
        *(float *)(lVar7 + 0x24) = fVar23;
        *(float *)(lVar7 + 0x28) = param_8;
        lVar7 = *(long *)(unaff_x19 + 0x120);
        if (lVar7 != 0) {
          uVar2 = uVar5 + 3;
          if (*(uint *)(lVar7 + 0x18) <= uVar2) goto LAB_06969440;
          lVar12 = (long)(int)uVar2;
          lVar7 = lVar7 + (long)(int)uVar2 * 0xc;
          *(undefined4 *)(lVar7 + 0x20) = uVar15;
          *(float *)(lVar7 + 0x24) = fVar22;
          *(float *)(lVar7 + 0x28) = fVar18;
          if ((*(long *)(unaff_x19 + 0x158) != 0) &&
             (lVar7 = FUN_07c9c69c(*(long *)(unaff_x19 + 0x158),0), lVar7 != 0)) {
            uVar14 = *(undefined4 *)(unaff_x19 + 0x94);
            uVar15 = *(undefined4 *)(unaff_x19 + 0x98);
            uVar13 = FUN_07cadc80(*(undefined4 *)(unaff_x19 + 0x90),lVar7,0);
            if (*(long *)(unaff_x19 + 0x158) != 0) {
              lVar7 = FUN_07c9c69c(*(long *)(unaff_x19 + 0x158),0);
              if (lVar7 != 0) {
                uVar19 = *(undefined4 *)(unaff_x19 + 0x4c);
                uVar21 = *(undefined4 *)(unaff_x19 + 0x50);
                uVar16 = FUN_07cadc80(*(undefined4 *)(unaff_x19 + 0x48),lVar7,0);
                lVar7 = *(long *)(unaff_x19 + 0x128);
                if (lVar7 != 0) {
                  if (uVar5 < *(uint *)(lVar7 + 0x18)) {
                    lVar7 = lVar7 + (long)(int)uVar5 * 0xc;
                    *(undefined4 *)(lVar7 + 0x20) = uVar13;
                    *(undefined4 *)(lVar7 + 0x24) = uVar14;
                    *(undefined4 *)(lVar7 + 0x28) = uVar15;
                    lVar7 = *(long *)(unaff_x19 + 0x128);
                    if (lVar7 == 0) goto LAB_0696943c;
                    if (uVar8 < *(uint *)(lVar7 + 0x18)) {
                      lVar7 = lVar7 + (long)(int)uVar8 * 0xc;
                      *(undefined4 *)(lVar7 + 0x20) = uVar13;
                      *(undefined4 *)(lVar7 + 0x24) = uVar14;
                      *(undefined4 *)(lVar7 + 0x28) = uVar15;
                      lVar7 = *(long *)(unaff_x19 + 0x128);
                      if (lVar7 == 0) goto LAB_0696943c;
                      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                        lVar7 = lVar7 + (long)(int)uVar1 * 0xc;
                        *(undefined4 *)(lVar7 + 0x20) = uVar16;
                        *(undefined4 *)(lVar7 + 0x24) = uVar19;
                        *(undefined4 *)(lVar7 + 0x28) = uVar21;
                        lVar7 = *(long *)(unaff_x19 + 0x128);
                        if (lVar7 == 0) goto LAB_0696943c;
                        if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                          lVar7 = lVar7 + (long)(int)uVar2 * 0xc;
                          *(undefined4 *)(lVar7 + 0x20) = uVar16;
                          *(undefined4 *)(lVar7 + 0x24) = uVar19;
                          *(undefined4 *)(lVar7 + 0x28) = uVar21;
                          uVar15 = *(undefined4 *)(unaff_x19 + 0x70);
                          uVar19 = *(undefined4 *)(unaff_x19 + 0x74);
                          uVar14 = *(undefined4 *)(unaff_x19 + 0xb4);
                          uVar16 = *(undefined4 *)(unaff_x19 + 0xb8);
                          uVar21 = *(undefined4 *)(unaff_x19 + 0xbc);
                          uVar13 = FUN_07cadc80(*(undefined4 *)(unaff_x19 + 0x6c));
                          uVar14 = FUN_07cadc80(uVar14);
                          lVar7 = *(long *)(unaff_x19 + 0x138);
                          if (lVar7 == 0) goto LAB_0696943c;
                          if (uVar5 < *(uint *)(lVar7 + 0x18)) {
                            lVar7 = lVar7 + uVar10 * 0x10;
                            *(undefined4 *)(lVar7 + 0x20) = uVar14;
                            *(undefined4 *)(lVar7 + 0x24) = uVar16;
                            *(undefined4 *)(lVar7 + 0x28) = uVar21;
                            *(undefined4 *)(lVar7 + 0x2c) = 0;
                            lVar7 = *(long *)(unaff_x19 + 0x138);
                            if (lVar7 == 0) goto LAB_0696943c;
                            if (uVar8 < *(uint *)(lVar7 + 0x18)) {
                              lVar7 = lVar7 + uVar9 * 0x10;
                              *(undefined4 *)(lVar7 + 0x20) = uVar14;
                              *(undefined4 *)(lVar7 + 0x24) = uVar16;
                              *(undefined4 *)(lVar7 + 0x28) = uVar21;
                              *(undefined4 *)(lVar7 + 0x2c) = 0;
                              lVar7 = *(long *)(unaff_x19 + 0x138);
                              if (lVar7 == 0) goto LAB_0696943c;
                              if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                lVar7 = lVar7 + lVar11 * 0x10;
                                *(undefined4 *)(lVar7 + 0x20) = uVar13;
                                *(undefined4 *)(lVar7 + 0x24) = uVar15;
                                *(undefined4 *)(lVar7 + 0x28) = uVar19;
                                *(undefined4 *)(lVar7 + 0x2c) = 0;
                                lVar7 = *(long *)(unaff_x19 + 0x138);
                                if (lVar7 == 0) goto LAB_0696943c;
                                if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                                  lVar7 = lVar7 + lVar12 * 0x10;
                                  *(undefined4 *)(lVar7 + 0x20) = uVar13;
                                  *(undefined4 *)(lVar7 + 0x24) = uVar15;
                                  *(undefined4 *)(lVar7 + 0x28) = uVar19;
                                  *(undefined4 *)(lVar7 + 0x2c) = 0;
                                  lVar7 = *(long *)(unaff_x19 + 0x118);
                                  if (lVar7 == 0) goto LAB_0696943c;
                                  if (uVar5 < *(uint *)(lVar7 + 0x18)) {
                                    uVar17 = *(undefined8 *)(unaff_x19 + 0xc4);
                                    lVar7 = lVar7 + uVar10 * 0x10;
                                    *(undefined8 *)(lVar7 + 0x28) =
                                         *(undefined8 *)(unaff_x19 + 0xcc);
                                    *(undefined8 *)(lVar7 + 0x20) = uVar17;
                                    lVar7 = *(long *)(unaff_x19 + 0x118);
                                    if (lVar7 == 0) goto LAB_0696943c;
                                    if (uVar8 < *(uint *)(lVar7 + 0x18)) {
                                      uVar17 = *(undefined8 *)(unaff_x19 + 0xc4);
                                      lVar7 = lVar7 + uVar9 * 0x10;
                                      *(undefined8 *)(lVar7 + 0x28) =
                                           *(undefined8 *)(unaff_x19 + 0xcc);
                                      *(undefined8 *)(lVar7 + 0x20) = uVar17;
                                      lVar7 = *(long *)(unaff_x19 + 0x118);
                                      if (lVar7 == 0) goto LAB_0696943c;
                                      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                        uVar17 = *(undefined8 *)(unaff_x19 + 0x7c);
                                        lVar7 = lVar7 + lVar11 * 0x10;
                                        *(undefined8 *)(lVar7 + 0x28) =
                                             *(undefined8 *)(unaff_x19 + 0x84);
                                        *(undefined8 *)(lVar7 + 0x20) = uVar17;
                                        lVar7 = *(long *)(unaff_x19 + 0x118);
                                        if (lVar7 == 0) goto LAB_0696943c;
                                        if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                                          uVar17 = *(undefined8 *)(unaff_x19 + 0x7c);
                                          lVar7 = lVar7 + lVar12 * 0x10;
                                          *(undefined8 *)(lVar7 + 0x28) =
                                               *(undefined8 *)(unaff_x19 + 0x84);
                                          *(undefined8 *)(lVar7 + 0x20) = uVar17;
                                          lVar7 = *(long *)(unaff_x19 + 0x140);
                                          if (lVar7 == 0) goto LAB_0696943c;
                                          if (uVar5 < *(uint *)(lVar7 + 0x18)) {
                                            *(undefined8 *)(lVar7 + uVar10 * 8 + 0x20) =
                                                 *(undefined8 *)(unaff_x19 + 0x28);
                                            lVar7 = *(long *)(unaff_x19 + 0x140);
                                            if (lVar7 == 0) goto LAB_0696943c;
                                            if (uVar8 < *(uint *)(lVar7 + 0x18)) {
                                              *(undefined8 *)(lVar7 + uVar9 * 8 + 0x20) =
                                                   *(undefined8 *)(unaff_x19 + 0x38);
                                              lVar7 = *(long *)(unaff_x19 + 0x140);
                                              if (lVar7 == 0) goto LAB_0696943c;
                                              if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                *(undefined8 *)(lVar7 + lVar11 * 8 + 0x20) =
                                                     *(undefined8 *)(unaff_x19 + 0x30);
                                                lVar7 = *(long *)(unaff_x19 + 0x140);
                                                if (lVar7 == 0) goto LAB_0696943c;
                                                if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                                                  *(undefined8 *)(lVar7 + lVar12 * 8 + 0x20) =
                                                       *(undefined8 *)(unaff_x19 + 0x40);
                                                  lVar7 = *(long *)(unaff_x19 + 0x130);
                                                  if (lVar7 == 0) goto LAB_0696943c;
                                                  uVar6 = iVar3 * 3;
                                                  uVar4 = *(uint *)(lVar7 + 0x18);
                                                  if (uVar6 < uVar4) {
                                                    *(uint *)(lVar7 + (long)(int)uVar6 * 4 + 0x20) =
                                                         uVar5;
                                                    if (uVar6 + 2 < uVar4) {
                                                      *(uint *)(lVar7 + (long)(int)(uVar6 + 2) * 4 +
                                                               0x20) = uVar8;
                                                      if (uVar6 + 1 < uVar4) {
                                                        *(uint *)(lVar7 + (long)(int)(uVar6 + 1) * 4
                                                                 + 0x20) = uVar1;
                                                        if (uVar6 + 3 < uVar4) {
                                                          *(uint *)(lVar7 + (long)(int)(uVar6 + 3) *
                                                                            4 + 0x20) = uVar1;
                                                          if (uVar6 + 5 < uVar4) {
                                                            *(uint *)(lVar7 + (long)(int)(uVar6 + 5)
                                                                              * 4 + 0x20) = uVar8;
                                                            if (uVar6 + 4 < uVar4) {
                                                              lVar11 = *(long *)(unaff_x19 + 0x100);
                                                              *(uint *)(lVar7 + (long)(int)(uVar6 + 
                                                  4) * 4 + 0x20) = uVar2;
                                                  if (lVar11 != 0) {
                                                    FUN_07c72230(lVar11,*(undefined8 *)
                                                                         (unaff_x19 + 0x120),0);
                                                    if (*(long *)(unaff_x19 + 0x100) != 0) {
                                                      FUN_07c722dc(*(long *)(unaff_x19 + 0x100),
                                                                   *(undefined8 *)
                                                                    (unaff_x19 + 0x128),0);
                                                      if (*(long *)(unaff_x19 + 0x100) != 0) {
                                                        FUN_07c72388(*(long *)(unaff_x19 + 0x100),
                                                                     *(undefined8 *)
                                                                      (unaff_x19 + 0x138),0);
                                                        if (*(long *)(unaff_x19 + 0x100) != 0) {
                                                          FUN_07c73ad4(*(long *)(unaff_x19 + 0x100),
                                                                       *(undefined8 *)
                                                                        (unaff_x19 + 0x130),0);
                                                          if (*(long *)(unaff_x19 + 0x100) != 0) {
                                                            FUN_07c72638(*(long *)(unaff_x19 + 0x100
                                                                                  ),
                                                                         *(undefined8 *)
                                                                          (unaff_x19 + 0x118),0);
                                                            if (*(long *)(unaff_x19 + 0x100) != 0) {
                                                              FUN_07c72434(*(long *)(unaff_x19 +
                                                                                    0x100),
                                                                           *(undefined8 *)
                                                                            (unaff_x19 + 0x140),0);
                                                              if (*(long *)(unaff_x19 + 0x100) != 0)
                                                              {
                                                                in_stack_00000018 =
                                                                     *(undefined8 *)
                                                                      (unaff_x19 + 0x18);
                                                                in_stack_00000010 =
                                                                     *(undefined8 *)
                                                                      (unaff_x19 + 0x10);
                                                                in_stack_00000020 =
                                                                     *(undefined8 *)
                                                                      (unaff_x19 + 0x20);
                                                                FUN_07c7142c(*(long *)(unaff_x19 +
                                                                                      0x100),
                                                                             &stack0x00000010,0);
                                                                if (*(long *)(unaff_x19 + 0xe0) != 0
                                                                   ) {
                                                                  FUN_07c6df20(*(long *)(unaff_x19 +
                                                                                        0xe0),
                                                                               *(undefined8 *)
                                                                                (unaff_x19 + 0x100),
                                                                               0);
                                                                  *(int *)(unaff_x19 + 0x148) =
                                                                       *(int *)(unaff_x19 + 0x148) +
                                                                       2;
                                                                  return;
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                  goto LAB_0696943c;
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
                            }
                          }
                        }
                      }
                    }
                  }
                  goto LAB_06969440;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0696943c:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


