/*
FUNCTION_NAME: OVRFaceExpressions$$ToArray
ENTRY_POINT: 01f3f928
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 89
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void OVRFaceExpressions__ToArray(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 in_x9;
  long unaff_x19;
  undefined8 uVar10;
  undefined8 *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  
  *(undefined8 *)(unaff_x19 + 0x440) = param_1;
  *(undefined8 *)(unaff_x19 + 0x448) = in_x9;
  thunk_FUN_01286abc(unaff_x19 + 0x448,0);
  in_stack_00000008 = *(undefined8 *)PTR_DAT_027bf170;
  thunk_FUN_01286abc(&stack0x00000008);
  if (0x43 < *(uint *)(unaff_x19 + 0x18)) {
    *(undefined8 *)(unaff_x19 + 0x450) = 0x30304e3556a;
    *(undefined8 *)(unaff_x19 + 0x458) = in_stack_00000008;
    thunk_FUN_01286abc(unaff_x19 + 0x458,0);
    in_stack_00000008 = *(undefined8 *)PTR_DAT_027bfca0;
    thunk_FUN_01286abc(&stack0x00000008);
    if (0x44 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x460) = 0x30304e46faf;
      *(undefined8 *)(unaff_x19 + 0x468) = in_stack_00000008;
      thunk_FUN_01286abc(unaff_x19 + 0x468,0);
      in_stack_00000008 = *(undefined8 *)PTR_DAT_027bf948;
      thunk_FUN_01286abc(&stack0x00000008);
      if (0x45 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + 0x470) = 0x30304e26fb0;
        *(undefined8 *)(unaff_x19 + 0x478) = in_stack_00000008;
        thunk_FUN_01286abc(unaff_x19 + 0x478,0);
        in_stack_00000008 = *(undefined8 *)PTR_DAT_027bf7e8;
        thunk_FUN_01286abc(&stack0x00000008);
        if (0x46 < *(uint *)(unaff_x19 + 0x18)) {
          *(undefined8 *)(unaff_x19 + 0x480) = 0x10104e66fb1;
          *(undefined8 *)(unaff_x19 + 0x488) = in_stack_00000008;
          thunk_FUN_01286abc(unaff_x19 + 0x488,0);
          in_stack_00000008 = *(undefined8 *)PTR_DAT_027bf9c0;
          thunk_FUN_01286abc(&stack0x00000008);
          if (0x47 < *(uint *)(unaff_x19 + 0x18)) {
            *(undefined8 *)(unaff_x19 + 0x490) = 0x30304e96fb2;
            *(undefined8 *)(unaff_x19 + 0x498) = in_stack_00000008;
            thunk_FUN_01286abc(unaff_x19 + 0x498,0);
            in_stack_00000008 = *(undefined8 *)PTR_DAT_027bfa18;
            thunk_FUN_01286abc(&stack0x00000008);
            if (0x48 < *(uint *)(unaff_x19 + 0x18)) {
              *(undefined8 *)(unaff_x19 + 0x4a0) = 0x30304e36fb3;
              *(undefined8 *)(unaff_x19 + 0x4a8) = in_stack_00000008;
              thunk_FUN_01286abc(unaff_x19 + 0x4a8,0);
              in_stack_00000008 = *(undefined8 *)PTR_DAT_027bf028;
              thunk_FUN_01286abc(&stack0x00000008);
              if (0x49 < *(uint *)(unaff_x19 + 0x18)) {
                *(undefined8 *)(unaff_x19 + 0x4b0) = 0x30304e86fb4;
                *(undefined8 *)(unaff_x19 + 0x4b8) = in_stack_00000008;
                thunk_FUN_01286abc(unaff_x19 + 0x4b8,0);
                in_stack_00000008 = *(undefined8 *)PTR_DAT_027bf148;
                thunk_FUN_01286abc(&stack0x00000008);
                if (0x4a < *(uint *)(unaff_x19 + 0x18)) {
                  *(undefined8 *)(unaff_x19 + 0x4c0) = 0x30304e56fb5;
                  *(undefined8 *)(unaff_x19 + 0x4c8) = in_stack_00000008;
                  thunk_FUN_01286abc(unaff_x19 + 0x4c8,0);
                  in_stack_00000008 = *(undefined8 *)PTR_DAT_027bf9f0;
                  thunk_FUN_01286abc(&stack0x00000008);
                  if (0x4b < *(uint *)(unaff_x19 + 0x18)) {
                    *(undefined8 *)(unaff_x19 + 0x4d0) = 0x20204e76fb6;
                    *(undefined8 *)(unaff_x19 + 0x4d8) = in_stack_00000008;
                    thunk_FUN_01286abc(unaff_x19 + 0x4d8,0);
                    in_stack_00000008 = *(undefined8 *)PTR_DAT_027bf3b0;
                    thunk_FUN_01286abc(&stack0x00000008);
                    if (0x4c < *(uint *)(unaff_x19 + 0x18)) {
                      *(undefined8 *)(unaff_x19 + 0x4e0) = 0x30304e66fb7;
                      *(undefined8 *)(unaff_x19 + 0x4e8) = in_stack_00000008;
                      thunk_FUN_01286abc(unaff_x19 + 0x4e8,0);
                      in_stack_00000008 = *(undefined8 *)PTR_DAT_027bfcb8;
                      thunk_FUN_01286abc(&stack0x00000008);
                      if (0x4d < *(uint *)(unaff_x19 + 0x18)) {
                        *(undefined8 *)(unaff_x19 + 0x4f0) = 0x30104e46fbd;
                        *(undefined8 *)(unaff_x19 + 0x4f8) = in_stack_00000008;
                        thunk_FUN_01286abc(unaff_x19 + 0x4f8,0);
                        in_stack_00000008 = *(undefined8 *)PTR_DAT_027bf458;
                        thunk_FUN_01286abc(&stack0x00000008);
                        if (0x4e < *(uint *)(unaff_x19 + 0x18)) {
                          *(undefined8 *)(unaff_x19 + 0x500) = 0x30304e796c6;
                          *(undefined8 *)(unaff_x19 + 0x508) = in_stack_00000008;
                          thunk_FUN_01286abc(unaff_x19 + 0x508,0);
                          in_stack_00000008 = *unaff_x22;
                          thunk_FUN_01286abc(&stack0x00000008);
                          puVar1 = PTR_DAT_027bfcd0;
                          if (0x4f < *(uint *)(unaff_x19 + 0x18)) {
                            *(undefined8 *)(unaff_x19 + 0x510) = 0x10103a4c42c;
                            *(undefined8 *)(unaff_x19 + 0x518) = in_stack_00000008;
                            thunk_FUN_01286abc(unaff_x19 + 0x518,0);
                            in_stack_00000008 = *(undefined8 *)puVar1;
                            thunk_FUN_01286abc(&stack0x00000008);
                            if (0x50 < *(uint *)(unaff_x19 + 0x18)) {
                              *(undefined8 *)(unaff_x19 + 0x520) = 0x30103a4c42d;
                              *(undefined8 *)(unaff_x19 + 0x528) = in_stack_00000008;
                              thunk_FUN_01286abc(unaff_x19 + 0x528,0);
                              in_stack_00000008 = *unaff_x22;
                              thunk_FUN_01286abc(&stack0x00000008);
                              if (0x51 < *(uint *)(unaff_x19 + 0x18)) {
                                *(undefined8 *)(unaff_x19 + 0x530) = 0x3a4c42e;
                                *(undefined8 *)(unaff_x19 + 0x538) = in_stack_00000008;
                                thunk_FUN_01286abc(unaff_x19 + 0x538,0);
                                in_stack_00000008 = *unaff_x29;
                                thunk_FUN_01286abc(&stack0x00000008);
                                if (0x52 < *(uint *)(unaff_x19 + 0x18)) {
                                  *(undefined8 *)(unaff_x19 + 0x540) = 0x30303a4cadc;
                                  *(undefined8 *)(unaff_x19 + 0x548) = in_stack_00000008;
                                  thunk_FUN_01286abc(unaff_x19 + 0x548,0);
                                  in_stack_00000008 = *(undefined8 *)PTR_DAT_027bfbf0;
                                  thunk_FUN_01286abc(&stack0x00000008);
                                  puVar1 = PTR_DAT_027bf060;
                                  if (0x53 < *(uint *)(unaff_x19 + 0x18)) {
                                    *(undefined8 *)(unaff_x19 + 0x550) = 0x10103b5caed;
                                    *(undefined8 *)(unaff_x19 + 0x558) = in_stack_00000008;
                                    thunk_FUN_01286abc(unaff_x19 + 0x558,0);
                                    in_stack_00000008 = *(undefined8 *)puVar1;
                                    thunk_FUN_01286abc(&stack0x00000008);
                                    if (0x54 < *(uint *)(unaff_x19 + 0x18)) {
                                      *(undefined8 *)(unaff_x19 + 0x560) = 0x30303a8d698;
                                      *(undefined8 *)(unaff_x19 + 0x568) = in_stack_00000008;
                                      thunk_FUN_01286abc(unaff_x19 + 0x568,0);
                                      in_stack_00000008 = *(undefined8 *)PTR_DAT_027bf5d0;
                                      thunk_FUN_01286abc(&stack0x00000008);
                                      puVar1 = PTR_DAT_027bf370;
                                      if (0x55 < *(uint *)(unaff_x19 + 0x18)) {
                                        *(undefined8 *)(unaff_x19 + 0x570) = 0xdeaadeaa;
                                        *(undefined8 *)(unaff_x19 + 0x578) = in_stack_00000008;
                                        thunk_FUN_01286abc(unaff_x19 + 0x578,0);
                                        in_stack_00000008 = *(undefined8 *)PTR_DAT_027bf070;
                                        thunk_FUN_01286abc(&stack0x00000008);
                                        if (0x56 < *(uint *)(unaff_x19 + 0x18)) {
                                          *(undefined8 *)(unaff_x19 + 0x580) = 0xdeabdeab;
                                          *(undefined8 *)(unaff_x19 + 0x588) = in_stack_00000008;
                                          thunk_FUN_01286abc(unaff_x19 + 0x588,0);
                                          in_stack_00000008 = *(undefined8 *)PTR_DAT_027bf808;
                                          thunk_FUN_01286abc(&stack0x00000008);
                                          if (0x57 < *(uint *)(unaff_x19 + 0x18)) {
                                            *(undefined8 *)(unaff_x19 + 0x590) = 0xdeacdeac;
                                            *(undefined8 *)(unaff_x19 + 0x598) = in_stack_00000008;
                                            thunk_FUN_01286abc(unaff_x19 + 0x598,0);
                                            in_stack_00000008 = *(undefined8 *)PTR_DAT_027bf930;
                                            thunk_FUN_01286abc(&stack0x00000008);
                                            if (0x58 < *(uint *)(unaff_x19 + 0x18)) {
                                              *(undefined8 *)(unaff_x19 + 0x5a0) = 0xdeaddead;
                                              *(undefined8 *)(unaff_x19 + 0x5a8) = in_stack_00000008
                                              ;
                                              thunk_FUN_01286abc(unaff_x19 + 0x5a8,0);
                                              in_stack_00000008 = *(undefined8 *)puVar1;
                                              thunk_FUN_01286abc(&stack0x00000008);
                                              if (0x59 < *(uint *)(unaff_x19 + 0x18)) {
                                                *(undefined8 *)(unaff_x19 + 0x5b0) = 0xdeaedeae;
                                                *(undefined8 *)(unaff_x19 + 0x5b8) =
                                                     in_stack_00000008;
                                                thunk_FUN_01286abc(unaff_x19 + 0x5b8,0);
                                                in_stack_00000008 = *(undefined8 *)PTR_DAT_027bf7c0;
                                                thunk_FUN_01286abc(&stack0x00000008);
                                                if (0x5a < *(uint *)(unaff_x19 + 0x18)) {
                                                  *(undefined8 *)(unaff_x19 + 0x5c0) = 0xdeafdeaf;
                                                  *(undefined8 *)(unaff_x19 + 0x5c8) =
                                                       in_stack_00000008;
                                                  thunk_FUN_01286abc(unaff_x19 + 0x5c8,0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_027bf270;
                                                  thunk_FUN_01286abc(&stack0x00000008);
                                                  if (0x5b < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x5d0) = 0xdeb0deb0;
                                                    *(undefined8 *)(unaff_x19 + 0x5d8) =
                                                         in_stack_00000008;
                                                    thunk_FUN_01286abc(unaff_x19 + 0x5d8,0);
                                                    in_stack_00000008 =
                                                         *(undefined8 *)PTR_DAT_027bfb70;
                                                    thunk_FUN_01286abc(&stack0x00000008);
                                                    if (0x5c < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x5e0) =
                                                           0xdeb1deb1;
                                                      *(undefined8 *)(unaff_x19 + 0x5e8) =
                                                           in_stack_00000008;
                                                      thunk_FUN_01286abc(unaff_x19 + 0x5e8,0);
                                                      in_stack_00000008 =
                                                           *(undefined8 *)PTR_DAT_027bf040;
                                                      thunk_FUN_01286abc(&stack0x00000008);
                                                      if (0x5d < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x5f0) =
                                                             0xdeb2deb2;
                                                        *(undefined8 *)(unaff_x19 + 0x5f8) =
                                                             in_stack_00000008;
                                                        thunk_FUN_01286abc(unaff_x19 + 0x5f8,0);
                                                        in_stack_00000008 =
                                                             *(undefined8 *)PTR_DAT_027bf9b0;
                                                        thunk_FUN_01286abc(&stack0x00000008);
                                                        if (0x5e < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x600) =
                                                               0xdeb3deb3;
                                                          *(undefined8 *)(unaff_x19 + 0x608) =
                                                               in_stack_00000008;
                                                          thunk_FUN_01286abc(unaff_x19 + 0x608,0);
                                                          in_stack_00000008 =
                                                               *(undefined8 *)PTR_DAT_027bf4e0;
                                                          thunk_FUN_01286abc(&stack0x00000008);
                                                          if (0x5f < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x610) =
                                                                 0x10104b0fde8;
                                                            *(undefined8 *)(unaff_x19 + 0x618) =
                                                                 in_stack_00000008;
                                                            thunk_FUN_01286abc(unaff_x19 + 0x618,0);
                                                            in_stack_00000008 =
                                                                 *(undefined8 *)PTR_DAT_027bf918;
                                                            thunk_FUN_01286abc(&stack0x00000008);
                                                            if (0x60 < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0x620) =
                                                                   0x30304b0fde9;
                                                              *(undefined8 *)(unaff_x19 + 0x628) =
                                                                   in_stack_00000008;
                                                              thunk_FUN_01286abc(unaff_x19 + 0x628,0
                                                                                );
                                                              in_stack_00000008 = 0;
                                                              thunk_FUN_01286abc(&stack0x00000008,0)
                                                              ;
                                                              puVar1 = PTR_DAT_027ba318;
                                                              if (0x61 < *(uint *)(unaff_x19 + 0x18)
                                                                 ) {
                                                                *(undefined8 *)(unaff_x19 + 0x630) =
                                                                     0;
                                                                *(undefined8 *)(unaff_x19 + 0x638) =
                                                                     in_stack_00000008;
                                                                thunk_FUN_01286abc(unaff_x19 + 0x638
                                                                                   ,0);
                                                                *(long *)(*(long *)(*unaff_x23 +
                                                                                   0xb8) + 8) =
                                                                     unaff_x19;
                                                                thunk_FUN_01286abc();
                                                                iVar6 = FUN_01f36368();
                                                                *(int *)(*(long *)(*unaff_x23 + 0xb8
                                                                                  ) + 0x10) =
                                                                     iVar6 + -1;
                                                                if (*(int *)(*(long *)puVar1 + 0xe0)
                                                                    == 0) {
                                                                  thunk_FUN_01220628();
                                                                }
                                                                if (DAT_0293d603 == '\0') {
                                                                  thunk_FUN_01279b34(
                                                  PTR_DAT_027ba318);
                                                  DAT_0293d603 = '\x01';
                                                  }
                                                  puVar5 = PTR_DAT_027befb0;
                                                  puVar4 = PTR_DAT_027befa8;
                                                  puVar3 = PTR_DAT_027befa0;
                                                  puVar2 = PTR_DAT_027bbb40;
                                                  lVar7 = *(long *)puVar1;
                                                  if (*(int *)(lVar7 + 0xe0) == 0) {
                                                    thunk_FUN_01220628();
                                                    lVar7 = *(long *)puVar1;
                                                  }
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(lVar7 + 0xb8) + 0x18);
                                                  uVar8 = thunk_FUN_0124bba8(*(undefined8 *)puVar2);
                                                  System_Collections_Generic_EqualityComparer<TempAllocator_Page<ushort>>__get_Default
                                                            (uVar8,uVar10,*(undefined8 *)puVar3);
                                                  puVar9 = (undefined8 *)
                                                           (*(long *)(*unaff_x23 + 0xb8) + 0x18);
                                                  *puVar9 = uVar8;
                                                  thunk_FUN_01286abc(puVar9,uVar8);
                                                  uVar8 = thunk_FUN_0124bba8(*(undefined8 *)puVar5);
                                                  FUN_01626f58(uVar8,*(undefined8 *)puVar4);
                                                  puVar9 = (undefined8 *)
                                                           (*(long *)(*unaff_x23 + 0xb8) + 0x20);
                                                  *puVar9 = uVar8;
                                                  thunk_FUN_01286abc(puVar9,uVar8);
                                                  return;
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
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


