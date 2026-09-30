/*
FUNCTION_NAME: OVRFaceExpressions.FaceExpressionsEnumerator$$Dispose
ENTRY_POINT: 01f3fba4
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 89
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void OVRFaceExpressions_FaceExpressionsEnumerator__Dispose(undefined8 *param_1)

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
  long unaff_x19;
  undefined8 uVar10;
  undefined8 *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x29;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000008 = *param_1;
  uStack0000000000000000 = 0x20204e76fb6;
  thunk_FUN_01286abc(&stack0x00000008);
  if (0x4b < *(uint *)(unaff_x19 + 0x18)) {
    *(undefined8 *)(unaff_x19 + 0x4d0) = uStack0000000000000000;
    *(undefined8 *)(unaff_x19 + 0x4d8) = uStack0000000000000008;
    thunk_FUN_01286abc(unaff_x19 + 0x4d8,0);
    uStack0000000000000008 = *(undefined8 *)PTR_DAT_027bf3b0;
    uStack0000000000000000 = 0x30304e66fb7;
    thunk_FUN_01286abc(&stack0x00000008);
    if (0x4c < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x4e0) = uStack0000000000000000;
      *(undefined8 *)(unaff_x19 + 0x4e8) = uStack0000000000000008;
      thunk_FUN_01286abc(unaff_x19 + 0x4e8,0);
      uStack0000000000000008 = *(undefined8 *)PTR_DAT_027bfcb8;
      uStack0000000000000000 = 0x30104e46fbd;
      thunk_FUN_01286abc(&stack0x00000008);
      if (0x4d < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + 0x4f0) = uStack0000000000000000;
        *(undefined8 *)(unaff_x19 + 0x4f8) = uStack0000000000000008;
        thunk_FUN_01286abc(unaff_x19 + 0x4f8,0);
        uStack0000000000000008 = *(undefined8 *)PTR_DAT_027bf458;
        uStack0000000000000000 = 0x30304e796c6;
        thunk_FUN_01286abc(&stack0x00000008);
        if (0x4e < *(uint *)(unaff_x19 + 0x18)) {
          *(undefined8 *)(unaff_x19 + 0x500) = uStack0000000000000000;
          *(undefined8 *)(unaff_x19 + 0x508) = uStack0000000000000008;
          thunk_FUN_01286abc(unaff_x19 + 0x508,0);
          uStack0000000000000008 = *unaff_x22;
          uStack0000000000000000 = 0x10103a4c42c;
          thunk_FUN_01286abc(&stack0x00000008);
          puVar1 = PTR_DAT_027bfcd0;
          if (0x4f < *(uint *)(unaff_x19 + 0x18)) {
            *(undefined8 *)(unaff_x19 + 0x510) = uStack0000000000000000;
            *(undefined8 *)(unaff_x19 + 0x518) = uStack0000000000000008;
            thunk_FUN_01286abc(unaff_x19 + 0x518,0);
            uStack0000000000000008 = *(undefined8 *)puVar1;
            uStack0000000000000000 = 0x30103a4c42d;
            thunk_FUN_01286abc(&stack0x00000008);
            if (0x50 < *(uint *)(unaff_x19 + 0x18)) {
              *(undefined8 *)(unaff_x19 + 0x520) = uStack0000000000000000;
              *(undefined8 *)(unaff_x19 + 0x528) = uStack0000000000000008;
              thunk_FUN_01286abc(unaff_x19 + 0x528,0);
              uStack0000000000000008 = *unaff_x22;
              uStack0000000000000000 = 0x3a4c42e;
              thunk_FUN_01286abc(&stack0x00000008);
              if (0x51 < *(uint *)(unaff_x19 + 0x18)) {
                *(undefined8 *)(unaff_x19 + 0x530) = uStack0000000000000000;
                *(undefined8 *)(unaff_x19 + 0x538) = uStack0000000000000008;
                thunk_FUN_01286abc(unaff_x19 + 0x538,0);
                uStack0000000000000008 = *unaff_x29;
                uStack0000000000000000 = 0x30303a4cadc;
                thunk_FUN_01286abc(&stack0x00000008);
                if (0x52 < *(uint *)(unaff_x19 + 0x18)) {
                  *(undefined8 *)(unaff_x19 + 0x540) = uStack0000000000000000;
                  *(undefined8 *)(unaff_x19 + 0x548) = uStack0000000000000008;
                  thunk_FUN_01286abc(unaff_x19 + 0x548,0);
                  uStack0000000000000008 = *(undefined8 *)PTR_DAT_027bfbf0;
                  uStack0000000000000000 = 0x10103b5caed;
                  thunk_FUN_01286abc(&stack0x00000008);
                  puVar1 = PTR_DAT_027bf060;
                  if (0x53 < *(uint *)(unaff_x19 + 0x18)) {
                    *(undefined8 *)(unaff_x19 + 0x550) = uStack0000000000000000;
                    *(undefined8 *)(unaff_x19 + 0x558) = uStack0000000000000008;
                    thunk_FUN_01286abc(unaff_x19 + 0x558,0);
                    uStack0000000000000008 = *(undefined8 *)puVar1;
                    uStack0000000000000000 = 0x30303a8d698;
                    thunk_FUN_01286abc(&stack0x00000008);
                    if (0x54 < *(uint *)(unaff_x19 + 0x18)) {
                      *(undefined8 *)(unaff_x19 + 0x560) = uStack0000000000000000;
                      *(undefined8 *)(unaff_x19 + 0x568) = uStack0000000000000008;
                      thunk_FUN_01286abc(unaff_x19 + 0x568,0);
                      uStack0000000000000008 = *(undefined8 *)PTR_DAT_027bf5d0;
                      uStack0000000000000000 = 0xdeaadeaa;
                      thunk_FUN_01286abc(&stack0x00000008);
                      puVar1 = PTR_DAT_027bf370;
                      if (0x55 < *(uint *)(unaff_x19 + 0x18)) {
                        *(undefined8 *)(unaff_x19 + 0x570) = uStack0000000000000000;
                        *(undefined8 *)(unaff_x19 + 0x578) = uStack0000000000000008;
                        thunk_FUN_01286abc(unaff_x19 + 0x578,0);
                        uStack0000000000000008 = *(undefined8 *)PTR_DAT_027bf070;
                        uStack0000000000000000 = 0xdeabdeab;
                        thunk_FUN_01286abc(&stack0x00000008);
                        if (0x56 < *(uint *)(unaff_x19 + 0x18)) {
                          *(undefined8 *)(unaff_x19 + 0x580) = uStack0000000000000000;
                          *(undefined8 *)(unaff_x19 + 0x588) = uStack0000000000000008;
                          thunk_FUN_01286abc(unaff_x19 + 0x588,0);
                          uStack0000000000000008 = *(undefined8 *)PTR_DAT_027bf808;
                          uStack0000000000000000 = 0xdeacdeac;
                          thunk_FUN_01286abc(&stack0x00000008);
                          if (0x57 < *(uint *)(unaff_x19 + 0x18)) {
                            *(undefined8 *)(unaff_x19 + 0x590) = uStack0000000000000000;
                            *(undefined8 *)(unaff_x19 + 0x598) = uStack0000000000000008;
                            thunk_FUN_01286abc(unaff_x19 + 0x598,0);
                            uStack0000000000000008 = *(undefined8 *)PTR_DAT_027bf930;
                            uStack0000000000000000 = 0xdeaddead;
                            thunk_FUN_01286abc(&stack0x00000008);
                            if (0x58 < *(uint *)(unaff_x19 + 0x18)) {
                              *(undefined8 *)(unaff_x19 + 0x5a0) = uStack0000000000000000;
                              *(undefined8 *)(unaff_x19 + 0x5a8) = uStack0000000000000008;
                              thunk_FUN_01286abc(unaff_x19 + 0x5a8,0);
                              uStack0000000000000008 = *(undefined8 *)puVar1;
                              uStack0000000000000000 = 0xdeaedeae;
                              thunk_FUN_01286abc(&stack0x00000008);
                              if (0x59 < *(uint *)(unaff_x19 + 0x18)) {
                                *(undefined8 *)(unaff_x19 + 0x5b0) = uStack0000000000000000;
                                *(undefined8 *)(unaff_x19 + 0x5b8) = uStack0000000000000008;
                                thunk_FUN_01286abc(unaff_x19 + 0x5b8,0);
                                uStack0000000000000008 = *(undefined8 *)PTR_DAT_027bf7c0;
                                uStack0000000000000000 = 0xdeafdeaf;
                                thunk_FUN_01286abc(&stack0x00000008);
                                if (0x5a < *(uint *)(unaff_x19 + 0x18)) {
                                  *(undefined8 *)(unaff_x19 + 0x5c0) = uStack0000000000000000;
                                  *(undefined8 *)(unaff_x19 + 0x5c8) = uStack0000000000000008;
                                  thunk_FUN_01286abc(unaff_x19 + 0x5c8,0);
                                  uStack0000000000000008 = *(undefined8 *)PTR_DAT_027bf270;
                                  uStack0000000000000000 = 0xdeb0deb0;
                                  thunk_FUN_01286abc(&stack0x00000008);
                                  if (0x5b < *(uint *)(unaff_x19 + 0x18)) {
                                    *(undefined8 *)(unaff_x19 + 0x5d0) = uStack0000000000000000;
                                    *(undefined8 *)(unaff_x19 + 0x5d8) = uStack0000000000000008;
                                    thunk_FUN_01286abc(unaff_x19 + 0x5d8,0);
                                    uStack0000000000000008 = *(undefined8 *)PTR_DAT_027bfb70;
                                    uStack0000000000000000 = 0xdeb1deb1;
                                    thunk_FUN_01286abc(&stack0x00000008);
                                    if (0x5c < *(uint *)(unaff_x19 + 0x18)) {
                                      *(undefined8 *)(unaff_x19 + 0x5e0) = uStack0000000000000000;
                                      *(undefined8 *)(unaff_x19 + 0x5e8) = uStack0000000000000008;
                                      thunk_FUN_01286abc(unaff_x19 + 0x5e8,0);
                                      uStack0000000000000008 = *(undefined8 *)PTR_DAT_027bf040;
                                      uStack0000000000000000 = 0xdeb2deb2;
                                      thunk_FUN_01286abc(&stack0x00000008);
                                      if (0x5d < *(uint *)(unaff_x19 + 0x18)) {
                                        *(undefined8 *)(unaff_x19 + 0x5f0) = uStack0000000000000000;
                                        *(undefined8 *)(unaff_x19 + 0x5f8) = uStack0000000000000008;
                                        thunk_FUN_01286abc(unaff_x19 + 0x5f8,0);
                                        uStack0000000000000008 = *(undefined8 *)PTR_DAT_027bf9b0;
                                        uStack0000000000000000 = 0xdeb3deb3;
                                        thunk_FUN_01286abc(&stack0x00000008);
                                        if (0x5e < *(uint *)(unaff_x19 + 0x18)) {
                                          *(undefined8 *)(unaff_x19 + 0x600) =
                                               uStack0000000000000000;
                                          *(undefined8 *)(unaff_x19 + 0x608) =
                                               uStack0000000000000008;
                                          thunk_FUN_01286abc(unaff_x19 + 0x608,0);
                                          uStack0000000000000008 = *(undefined8 *)PTR_DAT_027bf4e0;
                                          uStack0000000000000000 = 0x10104b0fde8;
                                          thunk_FUN_01286abc(&stack0x00000008);
                                          if (0x5f < *(uint *)(unaff_x19 + 0x18)) {
                                            *(undefined8 *)(unaff_x19 + 0x610) =
                                                 uStack0000000000000000;
                                            *(undefined8 *)(unaff_x19 + 0x618) =
                                                 uStack0000000000000008;
                                            thunk_FUN_01286abc(unaff_x19 + 0x618,0);
                                            uStack0000000000000008 = *(undefined8 *)PTR_DAT_027bf918
                                            ;
                                            uStack0000000000000000 = 0x30304b0fde9;
                                            thunk_FUN_01286abc(&stack0x00000008);
                                            if (0x60 < *(uint *)(unaff_x19 + 0x18)) {
                                              *(undefined8 *)(unaff_x19 + 0x620) =
                                                   uStack0000000000000000;
                                              *(undefined8 *)(unaff_x19 + 0x628) =
                                                   uStack0000000000000008;
                                              thunk_FUN_01286abc(unaff_x19 + 0x628,0);
                                              uStack0000000000000000 = 0;
                                              uStack0000000000000008 = 0;
                                              thunk_FUN_01286abc(&stack0x00000008,0);
                                              puVar1 = PTR_DAT_027ba318;
                                              if (0x61 < *(uint *)(unaff_x19 + 0x18)) {
                                                *(undefined8 *)(unaff_x19 + 0x630) =
                                                     uStack0000000000000000;
                                                *(undefined8 *)(unaff_x19 + 0x638) =
                                                     uStack0000000000000008;
                                                thunk_FUN_01286abc(unaff_x19 + 0x638,0);
                                                *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8) =
                                                     unaff_x19;
                                                thunk_FUN_01286abc();
                                                iVar6 = FUN_01f36368();
                                                *(int *)(*(long *)(*unaff_x23 + 0xb8) + 0x10) =
                                                     iVar6 + -1;
                                                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                                                  thunk_FUN_01220628();
                                                }
                                                if (DAT_0293d603 == '\0') {
                                                  thunk_FUN_01279b34(PTR_DAT_027ba318);
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
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


