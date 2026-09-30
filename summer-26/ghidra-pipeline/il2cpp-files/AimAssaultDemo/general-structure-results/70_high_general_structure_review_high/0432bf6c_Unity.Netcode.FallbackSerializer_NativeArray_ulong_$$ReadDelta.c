/*
FUNCTION_NAME: Unity.Netcode.FallbackSerializer<NativeArray<ulong>>$$ReadDelta
ENTRY_POINT: 0432bf6c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0432c650) */
/* WARNING: Removing unreachable block (ram,0x0432c398) */

void Unity_Netcode_FallbackSerializer<NativeArray<ulong>>__ReadDelta(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x19;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000060;
  
  lVar6 = *(long *)(*(long *)(param_1 + 0xc0) + 0x28);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03775678();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
  if (lVar6 != 0) {
    FUN_059eb0a8(lVar6,*(undefined8 *)PTR_DAT_07d98208);
    lVar6 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03775678();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x30);
    if (lVar6 != 0) {
      FUN_059eb0a8(lVar6,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x40));
      lVar6 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03775678();
      }
      puVar5 = PTR_DAT_07d98240;
      puVar4 = PTR_DAT_07d98238;
      puVar3 = PTR_DAT_07d98220;
      puVar2 = PTR_DAT_07d98218;
      puVar1 = PTR_DAT_07d98200;
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x40);
      if (lVar6 != 0) {
        FUN_045b99ec(lVar6,*(undefined8 *)PTR_DAT_07d98240);
        in_stack_00000058 = in_stack_00000008;
        in_stack_00000050 = in_stack_00000000;
        in_stack_00000060 = in_stack_00000010;
        while (uVar7 = FUN_05d6471c(&stack0x00000050,*(undefined8 *)puVar3), (uVar7 & 1) != 0) {
          if (in_stack_00000060 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          (**(code **)(in_stack_00000060 + 0x18))
                    (*(undefined8 *)(in_stack_00000060 + 0x40),
                     *(undefined8 *)(in_stack_00000060 + 0x28));
        }
        FUN_05d64718(&stack0x00000050,*(undefined8 *)puVar2);
        lVar6 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_03775678();
        }
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        lVar6 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_03775678();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x40);
        if (lVar6 != 0) {
          FUN_045b9518(lVar6,*(undefined8 *)puVar4);
          lVar6 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_03775678();
          }
          lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x38);
          if (lVar6 != 0) {
            FUN_059eb0a8(lVar6,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x50));
            lVar6 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
            if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_03775678();
            }
            lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x50);
            if (lVar6 != 0) {
              FUN_045b99ec(lVar6,*(undefined8 *)puVar5);
              in_stack_00000058 = in_stack_00000008;
              in_stack_00000050 = in_stack_00000000;
              in_stack_00000060 = in_stack_00000010;
              while (uVar7 = FUN_05d6471c(&stack0x00000050,*(undefined8 *)puVar3), (uVar7 & 1) != 0)
              {
                if (in_stack_00000060 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373b7b4();
                }
                (**(code **)(in_stack_00000060 + 0x18))
                          (*(undefined8 *)(in_stack_00000060 + 0x40),
                           *(undefined8 *)(in_stack_00000060 + 0x28));
              }
              FUN_05d64718(&stack0x00000050,*(undefined8 *)puVar2);
              lVar6 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
              if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                lVar6 = FUN_03775678();
              }
              if (*(int *)(lVar6 + 0xe4) == 0) {
                thunk_FUN_03798b70();
              }
              lVar6 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
              if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                lVar6 = FUN_03775678();
              }
              lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x50);
              if (lVar6 != 0) {
                FUN_045b9518(lVar6,*(undefined8 *)puVar4);
                lVar6 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
                if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                  lVar6 = FUN_03775678();
                }
                lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x48);
                if (lVar6 != 0) {
                  FUN_059eb0a8(lVar6,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x60));
                  lVar6 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
                  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                    lVar6 = FUN_03775678();
                  }
                  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x60);
                  if (lVar6 != 0) {
                    FUN_045b99ec(lVar6,*(undefined8 *)puVar5);
                    in_stack_00000058 = in_stack_00000008;
                    in_stack_00000050 = in_stack_00000000;
                    in_stack_00000060 = in_stack_00000010;
                    while (uVar7 = FUN_05d6471c(&stack0x00000050,*(undefined8 *)puVar3),
                          (uVar7 & 1) != 0) {
                      if (in_stack_00000060 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_0373b7b4();
                      }
                      (**(code **)(in_stack_00000060 + 0x18))
                                (*(undefined8 *)(in_stack_00000060 + 0x40),
                                 *(undefined8 *)(in_stack_00000060 + 0x28));
                    }
                    FUN_05d64718(&stack0x00000050,*(undefined8 *)puVar2);
                    lVar6 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
                    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                      lVar6 = FUN_03775678();
                    }
                    if (*(int *)(lVar6 + 0xe4) == 0) {
                      thunk_FUN_03798b70();
                    }
                    lVar6 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
                    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                      lVar6 = FUN_03775678();
                    }
                    lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x60);
                    if (lVar6 != 0) {
                      FUN_045b9518(lVar6,*(undefined8 *)puVar4);
                      lVar6 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
                      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                        lVar6 = FUN_03775678();
                      }
                      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x58);
                      if (lVar6 != 0) {
                        FUN_059eb0a8(lVar6,*(undefined8 *)puVar1);
                        lVar6 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
                        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                          lVar6 = FUN_03775678();
                        }
                        lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
                        if ((lVar6 != 0) &&
                           (lVar6 = FUN_059ead0c(lVar6,*(undefined8 *)
                                                        (*(long *)(*unaff_x19 + 0xc0) + 0x70)),
                           lVar6 != 0)) {
                          FUN_05648f14(lVar6,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x80));
                          in_stack_00000038 = in_stack_00000008;
                          in_stack_00000030 = in_stack_00000000;
                          in_stack_00000040 = in_stack_00000010;
                          while (uVar7 = FUN_05e12288(&stack0x00000030,
                                                      *(undefined8 *)
                                                       (*(long *)(*unaff_x19 + 0xc0) + 0xb0)),
                                (uVar7 & 1) != 0) {
                            FUN_040ed9d4(in_stack_00000040,
                                         *(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xa8));
                          }
                          FUN_05e12284(&stack0x00000030,
                                       *(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xb8));
                          lVar6 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
                          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                            lVar6 = FUN_03775678();
                          }
                          if (*(int *)(lVar6 + 0xe4) == 0) {
                            thunk_FUN_03798b70();
                          }
                          lVar6 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
                          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                            lVar6 = FUN_03775678();
                          }
                          lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
                          if (lVar6 != 0) {
                            FUN_059eb0a8(lVar6,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xc0))
                            ;
                            lVar6 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
                            if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                              lVar6 = FUN_03775678();
                            }
                            lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x20);
                            if ((lVar6 != 0) &&
                               (lVar6 = FUN_059ead0c(lVar6,*(undefined8 *)
                                                            (*(long *)(*unaff_x19 + 0xc0) + 0xd0)),
                               lVar6 != 0)) {
                              FUN_05648f14(&stack0x00000018,lVar6,
                                           *(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xe0));
                              while (uVar7 = FUN_05e12288(&stack0x00000018,
                                                          *(undefined8 *)
                                                           (*(long *)(*unaff_x19 + 0xc0) + 0x110)),
                                    (uVar7 & 1) != 0) {
                                FUN_040ed9d4(in_stack_00000028,
                                             *(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x108));
                              }
                              FUN_05e12284(&stack0x00000018,
                                           *(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x118));
                              lVar6 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
                              if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                                lVar6 = FUN_03775678();
                              }
                              if (*(int *)(lVar6 + 0xe4) == 0) {
                                thunk_FUN_03798b70();
                              }
                              lVar6 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
                              if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                                lVar6 = FUN_03775678();
                              }
                              lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x20);
                              if (lVar6 != 0) {
                                FUN_059eb0a8(lVar6,*(undefined8 *)
                                                    (*(long *)(*unaff_x19 + 0xc0) + 0x120));
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
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


