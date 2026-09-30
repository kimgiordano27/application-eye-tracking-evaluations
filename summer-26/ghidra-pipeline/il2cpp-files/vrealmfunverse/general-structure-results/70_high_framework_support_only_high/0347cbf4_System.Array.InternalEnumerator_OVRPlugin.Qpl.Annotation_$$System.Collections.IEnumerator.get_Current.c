/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Qpl.Annotation>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 0347cbf4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0347d3f8) */
/* WARNING: Removing unreachable block (ram,0x0347d11c) */

void System_Array_InternalEnumerator<OVRPlugin_Qpl_Annotation>__System_Collections_IEnumerator_get_Current
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x19;
  undefined8 in_stack_00000000;
  undefined8 *in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 *in_stack_00000038;
  long in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 *in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000078;
  
  FUN_0440ee00(param_2,**(undefined8 **)(param_1 + 0x668));
  lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x28);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02b76218();
  }
  if (**(long **)(lVar6 + 0xb8) != 0) {
    FUN_04a4fc90(**(long **)(lVar6 + 0xb8),*(undefined8 *)PTR_DAT_06320688);
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x28);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02b76218();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
    if (lVar6 != 0) {
      FUN_0440ee00(lVar6,*(undefined8 *)PTR_DAT_06320660);
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x28);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02b76218();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x30);
      if (lVar6 != 0) {
        FUN_0440ee00(lVar6,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x40));
        lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x28);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_02b76218();
        }
        puVar5 = PTR_DAT_06320698;
        puVar4 = PTR_DAT_06320690;
        puVar3 = PTR_DAT_06320678;
        puVar2 = PTR_DAT_06320670;
        puVar1 = PTR_DAT_06320658;
        lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x40);
        if (lVar6 != 0) {
          FUN_04a71b00(lVar6,*(undefined8 *)PTR_DAT_06320698);
          in_stack_00000060 = in_stack_00000010;
          in_stack_00000058 = in_stack_00000008;
          in_stack_00000050 = in_stack_00000000;
          while (uVar7 = FUN_0472e344(&stack0x00000050,*(undefined8 *)puVar3), (uVar7 & 1) != 0) {
            if (in_stack_00000060 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            (**(code **)(in_stack_00000060 + 0x18))
                      (*(undefined8 *)(in_stack_00000060 + 0x40),
                       *(undefined8 *)(in_stack_00000060 + 0x28));
          }
          FUN_0472e340(&stack0x00000050,*(undefined8 *)puVar2);
          lVar6 = *(long *)(*(long *)(*(long *)(in_stack_00000078 + 0x20) + 0xc0) + 0x28);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_02b76218();
          }
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          lVar6 = *(long *)(*(long *)(*(long *)(in_stack_00000078 + 0x20) + 0xc0) + 0x28);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_02b76218();
          }
          lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x40);
          if (lVar6 != 0) {
            FUN_04a7162c(lVar6,*(undefined8 *)puVar4);
            lVar6 = *(long *)(*(long *)(*(long *)(in_stack_00000078 + 0x20) + 0xc0) + 0x28);
            if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_02b76218();
            }
            lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x38);
            if (lVar6 != 0) {
              FUN_0440ee00(lVar6,*(undefined8 *)
                                  (*(long *)(*(long *)(in_stack_00000078 + 0x20) + 0xc0) + 0x50));
              lVar6 = *(long *)(*(long *)(*(long *)(in_stack_00000078 + 0x20) + 0xc0) + 0x28);
              if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                lVar6 = FUN_02b76218();
              }
              lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x50);
              if (lVar6 != 0) {
                FUN_04a71b00(lVar6,*(undefined8 *)puVar5);
                in_stack_00000060 = in_stack_00000010;
                in_stack_00000050 = 0;
                in_stack_00000058 = &stack0x00000050;
                while (uVar7 = FUN_0472e344(&stack0x00000050,*(undefined8 *)puVar3),
                      (uVar7 & 1) != 0) {
                  if (in_stack_00000060 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02b3cac4();
                  }
                  (**(code **)(in_stack_00000060 + 0x18))
                            (*(undefined8 *)(in_stack_00000060 + 0x40),
                             *(undefined8 *)(in_stack_00000060 + 0x28));
                }
                FUN_0472e340(&stack0x00000050,*(undefined8 *)puVar2);
                lVar6 = *(long *)(*(long *)(*(long *)(in_stack_00000078 + 0x20) + 0xc0) + 0x28);
                if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                  lVar6 = FUN_02b76218();
                }
                if (*(int *)(lVar6 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                }
                lVar6 = *(long *)(*(long *)(*(long *)(in_stack_00000078 + 0x20) + 0xc0) + 0x28);
                if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                  lVar6 = FUN_02b76218();
                }
                lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x50);
                if (lVar6 != 0) {
                  FUN_04a7162c(lVar6,*(undefined8 *)puVar4);
                  lVar6 = *(long *)(*(long *)(*(long *)(in_stack_00000078 + 0x20) + 0xc0) + 0x28);
                  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                    lVar6 = FUN_02b76218();
                  }
                  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x48);
                  if (lVar6 != 0) {
                    FUN_0440ee00(lVar6,*(undefined8 *)
                                        (*(long *)(*(long *)(in_stack_00000078 + 0x20) + 0xc0) +
                                        0x60));
                    lVar6 = *(long *)(*(long *)(*(long *)(in_stack_00000078 + 0x20) + 0xc0) + 0x28);
                    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                      lVar6 = FUN_02b76218();
                    }
                    lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x60);
                    if (lVar6 != 0) {
                      FUN_04a71b00(lVar6,*(undefined8 *)puVar5);
                      in_stack_00000060 = in_stack_00000010;
                      in_stack_00000050 = 0;
                      in_stack_00000058 = &stack0x00000050;
                      while (uVar7 = FUN_0472e344(&stack0x00000050,*(undefined8 *)puVar3),
                            (uVar7 & 1) != 0) {
                        if (in_stack_00000060 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_02b3cac4();
                        }
                        (**(code **)(in_stack_00000060 + 0x18))
                                  (*(undefined8 *)(in_stack_00000060 + 0x40),
                                   *(undefined8 *)(in_stack_00000060 + 0x28));
                      }
                      FUN_0472e340(&stack0x00000050,*(undefined8 *)puVar2);
                      lVar6 = *(long *)(*(long *)(*(long *)(in_stack_00000078 + 0x20) + 0xc0) + 0x28
                                       );
                      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                        lVar6 = FUN_02b76218();
                      }
                      if (*(int *)(lVar6 + 0xe4) == 0) {
                        thunk_FUN_02b9ad44();
                      }
                      lVar6 = *(long *)(*(long *)(*(long *)(in_stack_00000078 + 0x20) + 0xc0) + 0x28
                                       );
                      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                        lVar6 = FUN_02b76218();
                      }
                      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x60);
                      if (lVar6 != 0) {
                        FUN_04a7162c(lVar6,*(undefined8 *)puVar4);
                        lVar6 = *(long *)(*(long *)(*(long *)(in_stack_00000078 + 0x20) + 0xc0) +
                                         0x28);
                        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                          lVar6 = FUN_02b76218();
                        }
                        lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x58);
                        if (lVar6 != 0) {
                          FUN_0440ee00(lVar6,*(undefined8 *)puVar1);
                          lVar6 = *(long *)(*(long *)(*(long *)(in_stack_00000078 + 0x20) + 0xc0) +
                                           0x28);
                          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                            lVar6 = FUN_02b76218();
                          }
                          lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
                          if ((lVar6 != 0) &&
                             (lVar6 = FUN_0440ea58(lVar6,*(undefined8 *)
                                                          (*(long *)(*(long *)(in_stack_00000078 +
                                                                              0x20) + 0xc0) + 0x70))
                             , lVar6 != 0)) {
                            FUN_040ed8d0(lVar6,*(undefined8 *)
                                                (*(long *)(*(long *)(in_stack_00000078 + 0x20) +
                                                          0xc0) + 0x80));
                            in_stack_00000040 = in_stack_00000010;
                            in_stack_00000030 = 0;
                            in_stack_00000038 = &stack0x00000050;
                            while (uVar7 = FUN_047bb584(&stack0x00000030,
                                                        *(undefined8 *)
                                                         (*(long *)(*(long *)(in_stack_00000078 +
                                                                             0x20) + 0xc0) + 0xb0)),
                                  (uVar7 & 1) != 0) {
                              FUN_0323b600(in_stack_00000040,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(in_stack_00000078 + 0x20) + 0xc0) +
                                            0xa8));
                            }
                            FUN_047bb580(&stack0x00000030,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(in_stack_00000078 + 0x20) + 0xc0) +
                                          0xb8));
                            lVar6 = *(long *)(*(long *)(*(long *)(in_stack_00000078 + 0x20) + 0xc0)
                                             + 0x28);
                            if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                              lVar6 = FUN_02b76218();
                            }
                            if (*(int *)(lVar6 + 0xe4) == 0) {
                              thunk_FUN_02b9ad44();
                            }
                            lVar6 = *(long *)(*(long *)(*(long *)(in_stack_00000078 + 0x20) + 0xc0)
                                             + 0x28);
                            if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                              lVar6 = FUN_02b76218();
                            }
                            lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
                            if (lVar6 != 0) {
                              FUN_0440ee00(lVar6,*(undefined8 *)
                                                  (*(long *)(*(long *)(in_stack_00000078 + 0x20) +
                                                            0xc0) + 0xc0));
                              lVar6 = *(long *)(*(long *)(*(long *)(in_stack_00000078 + 0x20) + 0xc0
                                                         ) + 0x28);
                              if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                                lVar6 = FUN_02b76218();
                              }
                              lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x20);
                              if ((lVar6 != 0) &&
                                 (lVar6 = FUN_0440ea58(lVar6,*(undefined8 *)
                                                              (*(long *)(*(long *)(in_stack_00000078
                                                                                  + 0x20) + 0xc0) +
                                                              0xd0)), lVar6 != 0)) {
                                FUN_040ed8d0(&stack0x00000018,lVar6,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(in_stack_00000078 + 0x20) + 0xc0)
                                              + 0xe0));
                                while (uVar7 = FUN_047bb584(&stack0x00000018,
                                                            *(undefined8 *)
                                                             (*(long *)(*(long *)(in_stack_00000078
                                                                                 + 0x20) + 0xc0) +
                                                             0x110)), (uVar7 & 1) != 0) {
                                  FUN_0323b600(in_stack_00000028,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(in_stack_00000078 + 0x20) +
                                                          0xc0) + 0x108));
                                }
                                FUN_047bb580(&stack0x00000018,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(in_stack_00000078 + 0x20) + 0xc0)
                                              + 0x118));
                                lVar6 = *(long *)(*(long *)(*(long *)(in_stack_00000078 + 0x20) +
                                                           0xc0) + 0x28);
                                if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                                  lVar6 = FUN_02b76218();
                                }
                                if (*(int *)(lVar6 + 0xe4) == 0) {
                                  thunk_FUN_02b9ad44();
                                }
                                lVar6 = *(long *)(*(long *)(*(long *)(in_stack_00000078 + 0x20) +
                                                           0xc0) + 0x28);
                                if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                                  lVar6 = FUN_02b76218();
                                }
                                lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x20);
                                if (lVar6 != 0) {
                                  FUN_0440ee00(lVar6,*(undefined8 *)
                                                      (*(long *)(*(long *)(in_stack_00000078 + 0x20)
                                                                + 0xc0) + 0x120));
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
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


