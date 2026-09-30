/*
FUNCTION_NAME: OVRPlugin.OpenXREventDelegateType$$.ctor
ENTRY_POINT: 06968f50
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OpenXREventDelegateType___ctor(undefined1 param_1 [16],undefined4 param_2)

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
  undefined8 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s12;
  undefined4 unaff_s14;
  undefined4 unaff_s15;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  
  uVar12 = FUN_07cadf5c();
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
    *(undefined4 *)(lVar6 + 0x20) = uStack0000000000000078;
    *(undefined4 *)(lVar6 + 0x24) = uStack000000000000000c;
    *(undefined4 *)(lVar6 + 0x28) = uStack0000000000000008;
    lVar6 = *(long *)(unaff_x19 + 0x120);
    if (lVar6 != 0) {
      uVar8 = uVar9 | 1;
      uVar7 = (uint)uVar8;
      if (*(uint *)(lVar6 + 0x18) <= uVar7) goto LAB_06969440;
      lVar6 = lVar6 + (long)(int)uVar7 * 0xc;
      *(undefined4 *)(lVar6 + 0x20) = unaff_s14;
      *(undefined4 *)(lVar6 + 0x24) = unaff_s15;
      *(undefined4 *)(lVar6 + 0x28) = in_stack_00000000._4_4_;
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 06968f1c with catch @ 06968fc0
                        */
      lVar6 = *(long *)(unaff_x19 + 0x120);
      if (lVar6 != 0) {
        uVar1 = uVar4 + 2;
        if (*(uint *)(lVar6 + 0x18) <= uVar1) goto LAB_06969440;
        lVar10 = (long)(int)uVar1;
                    /* try { // try from 06968fdc to 06a68fdf has its CatchHandler @ 06968fec */
        lVar6 = lVar6 + (long)(int)uVar1 * 0xc;
        *(undefined4 *)(lVar6 + 0x20) = unaff_s8;
        *(undefined4 *)(lVar6 + 0x24) = unaff_s9;
        *(undefined4 *)(lVar6 + 0x28) = unaff_s12;
                    /* catch() { ... } // from try @ 06968fdc with catch @ 06968fec */
        lVar6 = *(long *)(unaff_x19 + 0x120);
        if (lVar6 != 0) {
          uVar2 = uVar4 + 3;
          if (*(uint *)(lVar6 + 0x18) <= uVar2) goto LAB_06969440;
          lVar11 = (long)(int)uVar2;
          lVar6 = lVar6 + (long)(int)uVar2 * 0xc;
          *(undefined4 *)(lVar6 + 0x20) = uVar12;
          *(undefined4 *)(lVar6 + 0x24) = param_2;
          *(undefined4 *)(lVar6 + 0x28) = uStack000000000000007c;
          if ((*(long *)(unaff_x19 + 0x158) != 0) &&
             (lVar6 = FUN_07c9c69c(*(long *)(unaff_x19 + 0x158),0), lVar6 != 0)) {
            uVar15 = *(undefined4 *)(unaff_x19 + 0x94);
            uVar17 = *(undefined4 *)(unaff_x19 + 0x98);
            uVar12 = FUN_07cadc80(*(undefined4 *)(unaff_x19 + 0x90),lVar6,0);
            if (*(long *)(unaff_x19 + 0x158) != 0) {
              lVar6 = FUN_07c9c69c(*(long *)(unaff_x19 + 0x158),0);
              if (lVar6 != 0) {
                uVar16 = *(undefined4 *)(unaff_x19 + 0x4c);
                uVar18 = *(undefined4 *)(unaff_x19 + 0x50);
                uVar13 = FUN_07cadc80(*(undefined4 *)(unaff_x19 + 0x48),lVar6,0);
                lVar6 = *(long *)(unaff_x19 + 0x128);
                if (lVar6 != 0) {
                  if (uVar4 < *(uint *)(lVar6 + 0x18)) {
                    lVar6 = lVar6 + (long)(int)uVar4 * 0xc;
                    *(undefined4 *)(lVar6 + 0x20) = uVar12;
                    *(undefined4 *)(lVar6 + 0x24) = uVar15;
                    *(undefined4 *)(lVar6 + 0x28) = uVar17;
                    lVar6 = *(long *)(unaff_x19 + 0x128);
                    if (lVar6 == 0) goto LAB_0696943c;
                    if (uVar7 < *(uint *)(lVar6 + 0x18)) {
                      lVar6 = lVar6 + (long)(int)uVar7 * 0xc;
                      *(undefined4 *)(lVar6 + 0x20) = uVar12;
                      *(undefined4 *)(lVar6 + 0x24) = uVar15;
                      *(undefined4 *)(lVar6 + 0x28) = uVar17;
                      lVar6 = *(long *)(unaff_x19 + 0x128);
                      if (lVar6 == 0) goto LAB_0696943c;
                      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                        lVar6 = lVar6 + (long)(int)uVar1 * 0xc;
                        *(undefined4 *)(lVar6 + 0x20) = uVar13;
                        *(undefined4 *)(lVar6 + 0x24) = uVar16;
                        *(undefined4 *)(lVar6 + 0x28) = uVar18;
                        lVar6 = *(long *)(unaff_x19 + 0x128);
                        if (lVar6 == 0) goto LAB_0696943c;
                        if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                          lVar6 = lVar6 + (long)(int)uVar2 * 0xc;
                          *(undefined4 *)(lVar6 + 0x20) = uVar13;
                          *(undefined4 *)(lVar6 + 0x24) = uVar16;
                          *(undefined4 *)(lVar6 + 0x28) = uVar18;
                          uVar17 = *(undefined4 *)(unaff_x19 + 0x70);
                          uVar16 = *(undefined4 *)(unaff_x19 + 0x74);
                          uVar15 = *(undefined4 *)(unaff_x19 + 0xb4);
                          uVar13 = *(undefined4 *)(unaff_x19 + 0xb8);
                          uVar18 = *(undefined4 *)(unaff_x19 + 0xbc);
                          uVar12 = FUN_07cadc80(*(undefined4 *)(unaff_x19 + 0x6c));
                          uVar15 = FUN_07cadc80(uVar15);
                          lVar6 = *(long *)(unaff_x19 + 0x138);
                          if (lVar6 == 0) goto LAB_0696943c;
                          if (uVar4 < *(uint *)(lVar6 + 0x18)) {
                            lVar6 = lVar6 + uVar9 * 0x10;
                            *(undefined4 *)(lVar6 + 0x20) = uVar15;
                            *(undefined4 *)(lVar6 + 0x24) = uVar13;
                            *(undefined4 *)(lVar6 + 0x28) = uVar18;
                            *(undefined4 *)(lVar6 + 0x2c) = 0;
                            lVar6 = *(long *)(unaff_x19 + 0x138);
                            if (lVar6 == 0) goto LAB_0696943c;
                            if (uVar7 < *(uint *)(lVar6 + 0x18)) {
                              lVar6 = lVar6 + uVar8 * 0x10;
                              *(undefined4 *)(lVar6 + 0x20) = uVar15;
                              *(undefined4 *)(lVar6 + 0x24) = uVar13;
                              *(undefined4 *)(lVar6 + 0x28) = uVar18;
                              *(undefined4 *)(lVar6 + 0x2c) = 0;
                              lVar6 = *(long *)(unaff_x19 + 0x138);
                              if (lVar6 == 0) goto LAB_0696943c;
                              if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                lVar6 = lVar6 + lVar10 * 0x10;
                                *(undefined4 *)(lVar6 + 0x20) = uVar12;
                                *(undefined4 *)(lVar6 + 0x24) = uVar17;
                                *(undefined4 *)(lVar6 + 0x28) = uVar16;
                                *(undefined4 *)(lVar6 + 0x2c) = 0;
                                lVar6 = *(long *)(unaff_x19 + 0x138);
                                if (lVar6 == 0) goto LAB_0696943c;
                                if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                                  lVar6 = lVar6 + lVar11 * 0x10;
                                  *(undefined4 *)(lVar6 + 0x20) = uVar12;
                                  *(undefined4 *)(lVar6 + 0x24) = uVar17;
                                  *(undefined4 *)(lVar6 + 0x28) = uVar16;
                                  *(undefined4 *)(lVar6 + 0x2c) = 0;
                                  lVar6 = *(long *)(unaff_x19 + 0x118);
                                  if (lVar6 == 0) goto LAB_0696943c;
                                  if (uVar4 < *(uint *)(lVar6 + 0x18)) {
                                    uVar14 = *(undefined8 *)(unaff_x19 + 0xc4);
                                    lVar6 = lVar6 + uVar9 * 0x10;
                                    *(undefined8 *)(lVar6 + 0x28) =
                                         *(undefined8 *)(unaff_x19 + 0xcc);
                                    *(undefined8 *)(lVar6 + 0x20) = uVar14;
                                    lVar6 = *(long *)(unaff_x19 + 0x118);
                                    if (lVar6 == 0) goto LAB_0696943c;
                                    if (uVar7 < *(uint *)(lVar6 + 0x18)) {
                                      uVar14 = *(undefined8 *)(unaff_x19 + 0xc4);
                                      lVar6 = lVar6 + uVar8 * 0x10;
                                      *(undefined8 *)(lVar6 + 0x28) =
                                           *(undefined8 *)(unaff_x19 + 0xcc);
                                      *(undefined8 *)(lVar6 + 0x20) = uVar14;
                                      lVar6 = *(long *)(unaff_x19 + 0x118);
                                      if (lVar6 == 0) goto LAB_0696943c;
                                      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                        uVar14 = *(undefined8 *)(unaff_x19 + 0x7c);
                                        lVar6 = lVar6 + lVar10 * 0x10;
                                        *(undefined8 *)(lVar6 + 0x28) =
                                             *(undefined8 *)(unaff_x19 + 0x84);
                                        *(undefined8 *)(lVar6 + 0x20) = uVar14;
                                        lVar6 = *(long *)(unaff_x19 + 0x118);
                                        if (lVar6 == 0) goto LAB_0696943c;
                                        if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                                          uVar14 = *(undefined8 *)(unaff_x19 + 0x7c);
                                          lVar6 = lVar6 + lVar11 * 0x10;
                                          *(undefined8 *)(lVar6 + 0x28) =
                                               *(undefined8 *)(unaff_x19 + 0x84);
                                          *(undefined8 *)(lVar6 + 0x20) = uVar14;
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


