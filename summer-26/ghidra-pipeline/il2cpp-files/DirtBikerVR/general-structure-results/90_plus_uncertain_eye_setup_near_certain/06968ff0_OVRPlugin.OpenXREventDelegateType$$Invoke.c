/*
FUNCTION_NAME: OVRPlugin.OpenXREventDelegateType$$Invoke
ENTRY_POINT: 06968ff0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OpenXREventDelegateType__Invoke
               (long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long unaff_x19;
  int unaff_w21;
  uint uVar5;
  long unaff_x22;
  uint unaff_w23;
  uint unaff_w24;
  long unaff_x26;
  long unaff_x27;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  
                    /* try { // try from 06968ff0 to 06a68ff7 has its CatchHandler @ 06969000 */
  if (param_1 != 0) {
                    /* try { // try from 06968ff8 to 06a69003 has its CatchHandler @ 06968e54 */
    uVar1 = unaff_w23 + 3;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06968ff0 with catch @ 06969000
                        */
    if (*(uint *)(param_1 + 0x18) <= uVar1) goto LAB_06969440;
    lVar6 = (long)(int)uVar1;
    param_1 = param_1 + (long)(int)uVar1 * 0xc;
    *(undefined4 *)(param_1 + 0x20) = param_2;
    *(undefined4 *)(param_1 + 0x24) = param_3;
    *(undefined4 *)(param_1 + 0x28) = param_4;
    if ((*(long *)(unaff_x19 + 0x158) != 0) &&
       (lVar4 = FUN_07c9c69c(*(long *)(unaff_x19 + 0x158),0), lVar4 != 0)) {
      uVar10 = *(undefined4 *)(unaff_x19 + 0x94);
      uVar12 = *(undefined4 *)(unaff_x19 + 0x98);
      uVar7 = FUN_07cadc80(*(undefined4 *)(unaff_x19 + 0x90),lVar4,0);
      if (*(long *)(unaff_x19 + 0x158) != 0) {
        lVar4 = FUN_07c9c69c(*(long *)(unaff_x19 + 0x158),0);
        if (lVar4 != 0) {
          uVar11 = *(undefined4 *)(unaff_x19 + 0x4c);
          uVar13 = *(undefined4 *)(unaff_x19 + 0x50);
          uVar8 = FUN_07cadc80(*(undefined4 *)(unaff_x19 + 0x48),lVar4,0);
          lVar4 = *(long *)(unaff_x19 + 0x128);
          if (lVar4 != 0) {
            if (unaff_w23 < *(uint *)(lVar4 + 0x18)) {
              lVar4 = lVar4 + (long)(int)unaff_x26 * 0xc;
              *(undefined4 *)(lVar4 + 0x20) = uVar7;
              *(undefined4 *)(lVar4 + 0x24) = uVar10;
              *(undefined4 *)(lVar4 + 0x28) = uVar12;
              lVar4 = *(long *)(unaff_x19 + 0x128);
              if (lVar4 == 0) goto LAB_0696943c;
              uVar5 = (uint)unaff_x22;
              if (uVar5 < *(uint *)(lVar4 + 0x18)) {
                lVar4 = lVar4 + (long)(int)uVar5 * 0xc;
                *(undefined4 *)(lVar4 + 0x20) = uVar7;
                *(undefined4 *)(lVar4 + 0x24) = uVar10;
                *(undefined4 *)(lVar4 + 0x28) = uVar12;
                lVar4 = *(long *)(unaff_x19 + 0x128);
                if (lVar4 == 0) goto LAB_0696943c;
                if (unaff_w24 < *(uint *)(lVar4 + 0x18)) {
                  lVar4 = lVar4 + (long)(int)unaff_x27 * 0xc;
                  *(undefined4 *)(lVar4 + 0x20) = uVar8;
                  *(undefined4 *)(lVar4 + 0x24) = uVar11;
                  *(undefined4 *)(lVar4 + 0x28) = uVar13;
                  lVar4 = *(long *)(unaff_x19 + 0x128);
                  if (lVar4 == 0) goto LAB_0696943c;
                  if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                    lVar4 = lVar4 + (long)(int)uVar1 * 0xc;
                    *(undefined4 *)(lVar4 + 0x20) = uVar8;
                    *(undefined4 *)(lVar4 + 0x24) = uVar11;
                    *(undefined4 *)(lVar4 + 0x28) = uVar13;
                    uVar12 = *(undefined4 *)(unaff_x19 + 0x70);
                    uVar11 = *(undefined4 *)(unaff_x19 + 0x74);
                    uVar10 = *(undefined4 *)(unaff_x19 + 0xb4);
                    uVar8 = *(undefined4 *)(unaff_x19 + 0xb8);
                    uVar13 = *(undefined4 *)(unaff_x19 + 0xbc);
                    uVar7 = FUN_07cadc80(*(undefined4 *)(unaff_x19 + 0x6c));
                    uVar10 = FUN_07cadc80(uVar10);
                    lVar4 = *(long *)(unaff_x19 + 0x138);
                    if (lVar4 == 0) goto LAB_0696943c;
                    if (unaff_w23 < *(uint *)(lVar4 + 0x18)) {
                      lVar4 = lVar4 + unaff_x26 * 0x10;
                      *(undefined4 *)(lVar4 + 0x20) = uVar10;
                      *(undefined4 *)(lVar4 + 0x24) = uVar8;
                      *(undefined4 *)(lVar4 + 0x28) = uVar13;
                      *(undefined4 *)(lVar4 + 0x2c) = 0;
                      lVar4 = *(long *)(unaff_x19 + 0x138);
                      if (lVar4 == 0) goto LAB_0696943c;
                      if (uVar5 < *(uint *)(lVar4 + 0x18)) {
                        lVar4 = lVar4 + unaff_x22 * 0x10;
                        *(undefined4 *)(lVar4 + 0x20) = uVar10;
                        *(undefined4 *)(lVar4 + 0x24) = uVar8;
                        *(undefined4 *)(lVar4 + 0x28) = uVar13;
                        *(undefined4 *)(lVar4 + 0x2c) = 0;
                        lVar4 = *(long *)(unaff_x19 + 0x138);
                        if (lVar4 == 0) goto LAB_0696943c;
                        if (unaff_w24 < *(uint *)(lVar4 + 0x18)) {
                          lVar4 = lVar4 + unaff_x27 * 0x10;
                          *(undefined4 *)(lVar4 + 0x20) = uVar7;
                          *(undefined4 *)(lVar4 + 0x24) = uVar12;
                          *(undefined4 *)(lVar4 + 0x28) = uVar11;
                          *(undefined4 *)(lVar4 + 0x2c) = 0;
                          lVar4 = *(long *)(unaff_x19 + 0x138);
                          if (lVar4 == 0) goto LAB_0696943c;
                          if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                            lVar4 = lVar4 + lVar6 * 0x10;
                            *(undefined4 *)(lVar4 + 0x20) = uVar7;
                            *(undefined4 *)(lVar4 + 0x24) = uVar12;
                            *(undefined4 *)(lVar4 + 0x28) = uVar11;
                            *(undefined4 *)(lVar4 + 0x2c) = 0;
                            lVar4 = *(long *)(unaff_x19 + 0x118);
                            if (lVar4 == 0) goto LAB_0696943c;
                            if (unaff_w23 < *(uint *)(lVar4 + 0x18)) {
                              uVar9 = *(undefined8 *)(unaff_x19 + 0xc4);
                              lVar4 = lVar4 + unaff_x26 * 0x10;
                              *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(unaff_x19 + 0xcc);
                              *(undefined8 *)(lVar4 + 0x20) = uVar9;
                              lVar4 = *(long *)(unaff_x19 + 0x118);
                              if (lVar4 == 0) goto LAB_0696943c;
                              if (uVar5 < *(uint *)(lVar4 + 0x18)) {
                                uVar9 = *(undefined8 *)(unaff_x19 + 0xc4);
                                lVar4 = lVar4 + unaff_x22 * 0x10;
                                *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(unaff_x19 + 0xcc);
                                *(undefined8 *)(lVar4 + 0x20) = uVar9;
                                lVar4 = *(long *)(unaff_x19 + 0x118);
                                if (lVar4 == 0) goto LAB_0696943c;
                                if (unaff_w24 < *(uint *)(lVar4 + 0x18)) {
                                  uVar9 = *(undefined8 *)(unaff_x19 + 0x7c);
                                  lVar4 = lVar4 + unaff_x27 * 0x10;
                                  *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(unaff_x19 + 0x84);
                                  *(undefined8 *)(lVar4 + 0x20) = uVar9;
                                  lVar4 = *(long *)(unaff_x19 + 0x118);
                                  if (lVar4 == 0) goto LAB_0696943c;
                                  if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                    uVar9 = *(undefined8 *)(unaff_x19 + 0x7c);
                                    lVar4 = lVar4 + lVar6 * 0x10;
                                    *(undefined8 *)(lVar4 + 0x28) =
                                         *(undefined8 *)(unaff_x19 + 0x84);
                                    *(undefined8 *)(lVar4 + 0x20) = uVar9;
                                    lVar4 = *(long *)(unaff_x19 + 0x140);
                                    if (lVar4 == 0) goto LAB_0696943c;
                                    if (unaff_w23 < *(uint *)(lVar4 + 0x18)) {
                                      *(undefined8 *)(lVar4 + unaff_x26 * 8 + 0x20) =
                                           *(undefined8 *)(unaff_x19 + 0x28);
                                      lVar4 = *(long *)(unaff_x19 + 0x140);
                                      if (lVar4 == 0) goto LAB_0696943c;
                                      if (uVar5 < *(uint *)(lVar4 + 0x18)) {
                                        *(undefined8 *)(lVar4 + unaff_x22 * 8 + 0x20) =
                                             *(undefined8 *)(unaff_x19 + 0x38);
                                        lVar4 = *(long *)(unaff_x19 + 0x140);
                                        if (lVar4 == 0) goto LAB_0696943c;
                                        if (unaff_w24 < *(uint *)(lVar4 + 0x18)) {
                                          *(undefined8 *)(lVar4 + unaff_x27 * 8 + 0x20) =
                                               *(undefined8 *)(unaff_x19 + 0x30);
                                          lVar4 = *(long *)(unaff_x19 + 0x140);
                                          if (lVar4 == 0) goto LAB_0696943c;
                                          if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                            *(undefined8 *)(lVar4 + lVar6 * 8 + 0x20) =
                                                 *(undefined8 *)(unaff_x19 + 0x40);
                                            lVar6 = *(long *)(unaff_x19 + 0x130);
                                            if (lVar6 == 0) goto LAB_0696943c;
                                            uVar3 = unaff_w21 * 3;
                                            uVar2 = *(uint *)(lVar6 + 0x18);
                                            if (uVar3 < uVar2) {
                                              *(uint *)(lVar6 + (long)(int)uVar3 * 4 + 0x20) =
                                                   unaff_w23;
                                              if (uVar3 + 2 < uVar2) {
                                                *(uint *)(lVar6 + (long)(int)(uVar3 + 2) * 4 + 0x20)
                                                     = uVar5;
                                                if (uVar3 + 1 < uVar2) {
                                                  *(uint *)(lVar6 + (long)(int)(uVar3 + 1) * 4 +
                                                           0x20) = unaff_w24;
                                                  if (uVar3 + 3 < uVar2) {
                                                    *(uint *)(lVar6 + (long)(int)(uVar3 + 3) * 4 +
                                                             0x20) = unaff_w24;
                                                    if (uVar3 + 5 < uVar2) {
                                                      *(uint *)(lVar6 + (long)(int)(uVar3 + 5) * 4 +
                                                               0x20) = uVar5;
                                                      if (uVar3 + 4 < uVar2) {
                                                        lVar4 = *(long *)(unaff_x19 + 0x100);
                                                        *(uint *)(lVar6 + (long)(int)(uVar3 + 4) * 4
                                                                 + 0x20) = uVar1;
                                                        if (lVar4 != 0) {
                                                          FUN_07c72230(lVar4,*(undefined8 *)
                                                                              (unaff_x19 + 0x120),0)
                                                          ;
                                                          if (*(long *)(unaff_x19 + 0x100) != 0) {
                                                            FUN_07c722dc(*(long *)(unaff_x19 + 0x100
                                                                                  ),
                                                                         *(undefined8 *)
                                                                          (unaff_x19 + 0x128),0);
                                                            if (*(long *)(unaff_x19 + 0x100) != 0) {
                                                              FUN_07c72388(*(long *)(unaff_x19 +
                                                                                    0x100),
                                                                           *(undefined8 *)
                                                                            (unaff_x19 + 0x138),0);
                                                              if (*(long *)(unaff_x19 + 0x100) != 0)
                                                              {
                                                                FUN_07c73ad4(*(long *)(unaff_x19 +
                                                                                      0x100),
                                                                             *(undefined8 *)
                                                                              (unaff_x19 + 0x130),0)
                                                                ;
                                                                if (*(long *)(unaff_x19 + 0x100) !=
                                                                    0) {
                                                                  FUN_07c72638(*(long *)(unaff_x19 +
                                                                                        0x100),
                                                                               *(undefined8 *)
                                                                                (unaff_x19 + 0x118),
                                                                               0);
                                                                  if (*(long *)(unaff_x19 + 0x100)
                                                                      != 0) {
                                                                    FUN_07c72434(*(long *)(unaff_x19
                                                                                          + 0x100),
                                                                                 *(undefined8 *)
                                                                                  (unaff_x19 + 0x140
                                                                                  ),0);
                                                                    if (*(long *)(unaff_x19 + 0x100)
                                                                        != 0) {
                                                                      in_stack_00000018 =
                                                                           *(undefined8 *)
                                                                            (unaff_x19 + 0x18);
                                                                      in_stack_00000010 =
                                                                           *(undefined8 *)
                                                                            (unaff_x19 + 0x10);
                                                                      in_stack_00000020 =
                                                                           *(undefined8 *)
                                                                            (unaff_x19 + 0x20);
                                                                      FUN_07c7142c(*(long *)(
                                                  unaff_x19 + 0x100),&stack0x00000010,0);
                                                  if (*(long *)(unaff_x19 + 0xe0) != 0) {
                                                    FUN_07c6df20(*(long *)(unaff_x19 + 0xe0),
                                                                 *(undefined8 *)(unaff_x19 + 0x100),
                                                                 0);
                                                    *(int *)(unaff_x19 + 0x148) =
                                                         *(int *)(unaff_x19 + 0x148) + 2;
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
LAB_06969440:
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c8();
          }
        }
      }
    }
  }
LAB_0696943c:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


