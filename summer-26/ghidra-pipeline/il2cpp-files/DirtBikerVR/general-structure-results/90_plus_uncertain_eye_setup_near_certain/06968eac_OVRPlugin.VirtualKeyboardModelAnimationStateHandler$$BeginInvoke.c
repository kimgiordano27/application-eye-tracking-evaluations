/*
FUNCTION_NAME: OVRPlugin.VirtualKeyboardModelAnimationStateHandler$$BeginInvoke
ENTRY_POINT: 06968eac
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


void OVRPlugin_VirtualKeyboardModelAnimationStateHandler__BeginInvoke
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long unaff_x19;
  int unaff_w21;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
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
  
  fStack000000000000007c = param_8 - param_2;
  fVar21 = in_s16 - param_3;
  param_8 = param_8 + param_2;
  param_3 = in_s16 + param_3;
  fVar19 = *(float *)(unaff_x19 + 0xa4) + param_5;
  fVar17 = *(float *)(unaff_x19 + 0xa0) + param_1 * param_6;
  param_5 = *(float *)(unaff_x19 + 0xa4) - param_5;
  fVar22 = *(float *)(unaff_x19 + 0xa0) - param_1 * param_6;
  in_stack_00000078 = FUN_07cadf5c(in_s19 + param_1 * param_7);
  fStack000000000000000c = fVar17;
  uVar12 = FUN_07cadf5c(in_s19 - param_1 * param_7);
  fStack0000000000000004 = param_5;
                    /* try { // try from 06968f1c to 06a68f27 has its CatchHandler @ 06968fc0 */
                    /* try { // try from 06968f28 to 06a68fdb has its CatchHandler @ 06968e54 */
  uVar13 = FUN_07cadf5c(in_s17 + param_4);
  fVar17 = fStack000000000000007c;
  uVar14 = FUN_07cadf5c(in_s17 - param_4);
  lVar6 = *(long *)(unaff_x19 + 0x120);
  if (lVar6 != 0) {
    uVar4 = unaff_w21 * 2;
    if (*(uint *)(lVar6 + 0x18) <= uVar4) {
LAB_06969440:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    uVar9 = (ulong)(int)uVar4;
    lVar6 = lVar6 + (long)(int)uVar4 * 0xc;
    *(undefined4 *)(lVar6 + 0x20) = in_stack_00000078;
    *(float *)(lVar6 + 0x24) = fStack000000000000000c;
    *(float *)(lVar6 + 0x28) = fVar19;
    lVar6 = *(long *)(unaff_x19 + 0x120);
    if (lVar6 != 0) {
      uVar8 = uVar9 | 1;
      uVar7 = (uint)uVar8;
      if (*(uint *)(lVar6 + 0x18) <= uVar7) goto LAB_06969440;
      lVar6 = lVar6 + (long)(int)uVar7 * 0xc;
      *(undefined4 *)(lVar6 + 0x20) = uVar12;
      *(float *)(lVar6 + 0x24) = fVar22;
      *(float *)(lVar6 + 0x28) = fStack0000000000000004;
      lVar6 = *(long *)(unaff_x19 + 0x120);
      if (lVar6 != 0) {
        uVar1 = uVar4 + 2;
        if (*(uint *)(lVar6 + 0x18) <= uVar1) goto LAB_06969440;
        lVar10 = (long)(int)uVar1;
        lVar6 = lVar6 + (long)(int)uVar1 * 0xc;
        *(undefined4 *)(lVar6 + 0x20) = uVar13;
        *(float *)(lVar6 + 0x24) = param_3;
        *(float *)(lVar6 + 0x28) = param_8;
        lVar6 = *(long *)(unaff_x19 + 0x120);
        if (lVar6 != 0) {
          uVar2 = uVar4 + 3;
          if (*(uint *)(lVar6 + 0x18) <= uVar2) goto LAB_06969440;
          lVar11 = (long)(int)uVar2;
          lVar6 = lVar6 + (long)(int)uVar2 * 0xc;
          *(undefined4 *)(lVar6 + 0x20) = uVar14;
          *(float *)(lVar6 + 0x24) = fVar21;
          *(float *)(lVar6 + 0x28) = fVar17;
          if ((*(long *)(unaff_x19 + 0x158) != 0) &&
             (lVar6 = FUN_07c9c69c(*(long *)(unaff_x19 + 0x158),0), lVar6 != 0)) {
            uVar13 = *(undefined4 *)(unaff_x19 + 0x94);
            uVar14 = *(undefined4 *)(unaff_x19 + 0x98);
            uVar12 = FUN_07cadc80(*(undefined4 *)(unaff_x19 + 0x90),lVar6,0);
            if (*(long *)(unaff_x19 + 0x158) != 0) {
              lVar6 = FUN_07c9c69c(*(long *)(unaff_x19 + 0x158),0);
              if (lVar6 != 0) {
                uVar18 = *(undefined4 *)(unaff_x19 + 0x4c);
                uVar20 = *(undefined4 *)(unaff_x19 + 0x50);
                uVar15 = FUN_07cadc80(*(undefined4 *)(unaff_x19 + 0x48),lVar6,0);
                lVar6 = *(long *)(unaff_x19 + 0x128);
                if (lVar6 != 0) {
                  if (uVar4 < *(uint *)(lVar6 + 0x18)) {
                    lVar6 = lVar6 + (long)(int)uVar4 * 0xc;
                    *(undefined4 *)(lVar6 + 0x20) = uVar12;
                    *(undefined4 *)(lVar6 + 0x24) = uVar13;
                    *(undefined4 *)(lVar6 + 0x28) = uVar14;
                    lVar6 = *(long *)(unaff_x19 + 0x128);
                    if (lVar6 == 0) goto LAB_0696943c;
                    if (uVar7 < *(uint *)(lVar6 + 0x18)) {
                      lVar6 = lVar6 + (long)(int)uVar7 * 0xc;
                      *(undefined4 *)(lVar6 + 0x20) = uVar12;
                      *(undefined4 *)(lVar6 + 0x24) = uVar13;
                      *(undefined4 *)(lVar6 + 0x28) = uVar14;
                      lVar6 = *(long *)(unaff_x19 + 0x128);
                      if (lVar6 == 0) goto LAB_0696943c;
                      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                        lVar6 = lVar6 + (long)(int)uVar1 * 0xc;
                        *(undefined4 *)(lVar6 + 0x20) = uVar15;
                        *(undefined4 *)(lVar6 + 0x24) = uVar18;
                        *(undefined4 *)(lVar6 + 0x28) = uVar20;
                        lVar6 = *(long *)(unaff_x19 + 0x128);
                        if (lVar6 == 0) goto LAB_0696943c;
                        if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                          lVar6 = lVar6 + (long)(int)uVar2 * 0xc;
                          *(undefined4 *)(lVar6 + 0x20) = uVar15;
                          *(undefined4 *)(lVar6 + 0x24) = uVar18;
                          *(undefined4 *)(lVar6 + 0x28) = uVar20;
                          uVar14 = *(undefined4 *)(unaff_x19 + 0x70);
                          uVar18 = *(undefined4 *)(unaff_x19 + 0x74);
                          uVar13 = *(undefined4 *)(unaff_x19 + 0xb4);
                          uVar15 = *(undefined4 *)(unaff_x19 + 0xb8);
                          uVar20 = *(undefined4 *)(unaff_x19 + 0xbc);
                          uVar12 = FUN_07cadc80(*(undefined4 *)(unaff_x19 + 0x6c));
                          uVar13 = FUN_07cadc80(uVar13);
                          lVar6 = *(long *)(unaff_x19 + 0x138);
                          if (lVar6 == 0) goto LAB_0696943c;
                          if (uVar4 < *(uint *)(lVar6 + 0x18)) {
                            lVar6 = lVar6 + uVar9 * 0x10;
                            *(undefined4 *)(lVar6 + 0x20) = uVar13;
                            *(undefined4 *)(lVar6 + 0x24) = uVar15;
                            *(undefined4 *)(lVar6 + 0x28) = uVar20;
                            *(undefined4 *)(lVar6 + 0x2c) = 0;
                            lVar6 = *(long *)(unaff_x19 + 0x138);
                            if (lVar6 == 0) goto LAB_0696943c;
                            if (uVar7 < *(uint *)(lVar6 + 0x18)) {
                              lVar6 = lVar6 + uVar8 * 0x10;
                              *(undefined4 *)(lVar6 + 0x20) = uVar13;
                              *(undefined4 *)(lVar6 + 0x24) = uVar15;
                              *(undefined4 *)(lVar6 + 0x28) = uVar20;
                              *(undefined4 *)(lVar6 + 0x2c) = 0;
                              lVar6 = *(long *)(unaff_x19 + 0x138);
                              if (lVar6 == 0) goto LAB_0696943c;
                              if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                lVar6 = lVar6 + lVar10 * 0x10;
                                *(undefined4 *)(lVar6 + 0x20) = uVar12;
                                *(undefined4 *)(lVar6 + 0x24) = uVar14;
                                *(undefined4 *)(lVar6 + 0x28) = uVar18;
                                *(undefined4 *)(lVar6 + 0x2c) = 0;
                                lVar6 = *(long *)(unaff_x19 + 0x138);
                                if (lVar6 == 0) goto LAB_0696943c;
                                if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                                  lVar6 = lVar6 + lVar11 * 0x10;
                                  *(undefined4 *)(lVar6 + 0x20) = uVar12;
                                  *(undefined4 *)(lVar6 + 0x24) = uVar14;
                                  *(undefined4 *)(lVar6 + 0x28) = uVar18;
                                  *(undefined4 *)(lVar6 + 0x2c) = 0;
                                  lVar6 = *(long *)(unaff_x19 + 0x118);
                                  if (lVar6 == 0) goto LAB_0696943c;
                                  if (uVar4 < *(uint *)(lVar6 + 0x18)) {
                                    uVar16 = *(undefined8 *)(unaff_x19 + 0xc4);
                                    lVar6 = lVar6 + uVar9 * 0x10;
                                    *(undefined8 *)(lVar6 + 0x28) =
                                         *(undefined8 *)(unaff_x19 + 0xcc);
                                    *(undefined8 *)(lVar6 + 0x20) = uVar16;
                                    lVar6 = *(long *)(unaff_x19 + 0x118);
                                    if (lVar6 == 0) goto LAB_0696943c;
                                    if (uVar7 < *(uint *)(lVar6 + 0x18)) {
                                      uVar16 = *(undefined8 *)(unaff_x19 + 0xc4);
                                      lVar6 = lVar6 + uVar8 * 0x10;
                                      *(undefined8 *)(lVar6 + 0x28) =
                                           *(undefined8 *)(unaff_x19 + 0xcc);
                                      *(undefined8 *)(lVar6 + 0x20) = uVar16;
                                      lVar6 = *(long *)(unaff_x19 + 0x118);
                                      if (lVar6 == 0) goto LAB_0696943c;
                                      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                        uVar16 = *(undefined8 *)(unaff_x19 + 0x7c);
                                        lVar6 = lVar6 + lVar10 * 0x10;
                                        *(undefined8 *)(lVar6 + 0x28) =
                                             *(undefined8 *)(unaff_x19 + 0x84);
                                        *(undefined8 *)(lVar6 + 0x20) = uVar16;
                                        lVar6 = *(long *)(unaff_x19 + 0x118);
                                        if (lVar6 == 0) goto LAB_0696943c;
                                        if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                                          uVar16 = *(undefined8 *)(unaff_x19 + 0x7c);
                                          lVar6 = lVar6 + lVar11 * 0x10;
                                          *(undefined8 *)(lVar6 + 0x28) =
                                               *(undefined8 *)(unaff_x19 + 0x84);
                                          *(undefined8 *)(lVar6 + 0x20) = uVar16;
                                          lVar6 = *(long *)(unaff_x19 + 0x140);
                                          if (lVar6 == 0) goto LAB_0696943c;
                                          if (uVar4 < *(uint *)(lVar6 + 0x18)) {
                                            *(undefined8 *)(lVar6 + uVar9 * 8 + 0x20) =
                                                 *(undefined8 *)(unaff_x19 + 0x28);
                                            lVar6 = *(long *)(unaff_x19 + 0x140);
                                            if (lVar6 == 0) goto LAB_0696943c;
                                            if (uVar7 < *(uint *)(lVar6 + 0x18)) {
                                              *(undefined8 *)(lVar6 + uVar8 * 8 + 0x20) =
                                                   *(undefined8 *)(unaff_x19 + 0x38);
                                              lVar6 = *(long *)(unaff_x19 + 0x140);
                                              if (lVar6 == 0) goto LAB_0696943c;
                                              if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                *(undefined8 *)(lVar6 + lVar10 * 8 + 0x20) =
                                                     *(undefined8 *)(unaff_x19 + 0x30);
                                                lVar6 = *(long *)(unaff_x19 + 0x140);
                                                if (lVar6 == 0) goto LAB_0696943c;
                                                if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                                                  *(undefined8 *)(lVar6 + lVar11 * 8 + 0x20) =
                                                       *(undefined8 *)(unaff_x19 + 0x40);
                                                  lVar6 = *(long *)(unaff_x19 + 0x130);
                                                  if (lVar6 == 0) goto LAB_0696943c;
                                                  uVar5 = unaff_w21 * 3;
                                                  uVar3 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar5 < uVar3) {
                                                    *(uint *)(lVar6 + (long)(int)uVar5 * 4 + 0x20) =
                                                         uVar4;
                                                    if (uVar5 + 2 < uVar3) {
                                                      *(uint *)(lVar6 + (long)(int)(uVar5 + 2) * 4 +
                                                               0x20) = uVar7;
                                                      if (uVar5 + 1 < uVar3) {
                                                        *(uint *)(lVar6 + (long)(int)(uVar5 + 1) * 4
                                                                 + 0x20) = uVar1;
                                                        if (uVar5 + 3 < uVar3) {
                                                          *(uint *)(lVar6 + (long)(int)(uVar5 + 3) *
                                                                            4 + 0x20) = uVar1;
                                                          if (uVar5 + 5 < uVar3) {
                                                            *(uint *)(lVar6 + (long)(int)(uVar5 + 5)
                                                                              * 4 + 0x20) = uVar7;
                                                            if (uVar5 + 4 < uVar3) {
                                                              lVar10 = *(long *)(unaff_x19 + 0x100);
                                                              *(uint *)(lVar6 + (long)(int)(uVar5 + 
                                                  4) * 4 + 0x20) = uVar2;
                                                  if (lVar10 != 0) {
                                                    FUN_07c72230(lVar10,*(undefined8 *)
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


