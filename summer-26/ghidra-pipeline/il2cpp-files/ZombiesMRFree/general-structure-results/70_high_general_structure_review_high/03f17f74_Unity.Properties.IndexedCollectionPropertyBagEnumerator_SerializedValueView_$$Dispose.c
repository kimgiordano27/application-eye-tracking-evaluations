/*
FUNCTION_NAME: Unity.Properties.IndexedCollectionPropertyBagEnumerator<SerializedValueView>$$Dispose
ENTRY_POINT: 03f17f74
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03f186e8) */
/* WARNING: Removing unreachable block (ram,0x03f18430) */

void Unity_Properties_IndexedCollectionPropertyBagEnumerator<SerializedValueView>__Dispose
               (ulong param_1,long param_2)

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
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_02feb2c4();
  }
  lVar6 = *(long *)(*(long *)(param_2 + 0xb8) + 8);
  if (lVar6 != 0) {
    FUN_051d1a78(lVar6,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x30));
    lVar6 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02feb2c4();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x28);
    if (lVar6 != 0) {
      FUN_051d1a78(lVar6,*(undefined8 *)PTR_DAT_06f9a880);
      lVar6 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02feb2c4();
      }
      if (**(long **)(lVar6 + 0xb8) != 0) {
        FUN_03fa7d60(**(long **)(lVar6 + 0xb8),*(undefined8 *)PTR_DAT_06f9a8a0);
        lVar6 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_02feb2c4();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
        if (lVar6 != 0) {
          FUN_051d1a78(lVar6,*(undefined8 *)PTR_DAT_06f9a878);
          lVar6 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_02feb2c4();
          }
          lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x30);
          if (lVar6 != 0) {
            FUN_051d1a78(lVar6,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x40));
            lVar6 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
            if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_02feb2c4();
            }
            puVar5 = PTR_DAT_06f9a8b0;
            puVar4 = PTR_DAT_06f9a8a8;
            puVar3 = PTR_DAT_06f9a890;
            puVar2 = PTR_DAT_06f9a888;
            puVar1 = PTR_DAT_06f9a870;
            lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x40);
            if (lVar6 != 0) {
              FUN_03fca7dc(lVar6,*(undefined8 *)PTR_DAT_06f9a8b0);
              in_stack_00000058 = in_stack_00000008;
              in_stack_00000050 = in_stack_00000000;
              in_stack_00000060 = in_stack_00000010;
              while (uVar7 = FUN_05506594(&stack0x00000050,*(undefined8 *)puVar3), (uVar7 & 1) != 0)
              {
                if (in_stack_00000060 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02fe94e8();
                }
                (**(code **)(in_stack_00000060 + 0x18))
                          (*(undefined8 *)(in_stack_00000060 + 0x40),
                           *(undefined8 *)(in_stack_00000060 + 0x28));
              }
              FUN_05506590(&stack0x00000050,*(undefined8 *)puVar2);
              lVar6 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
              if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                lVar6 = FUN_02feb2c4();
              }
              if (*(int *)(lVar6 + 0xe0) == 0) {
                thunk_FUN_02fdcff0();
              }
              lVar6 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
              if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                lVar6 = FUN_02feb2c4();
              }
              lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x40);
              if (lVar6 != 0) {
                FUN_03fca308(lVar6,*(undefined8 *)puVar4);
                lVar6 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
                if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                  lVar6 = FUN_02feb2c4();
                }
                lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x38);
                if (lVar6 != 0) {
                  FUN_051d1a78(lVar6,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x50));
                  lVar6 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
                  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                    lVar6 = FUN_02feb2c4();
                  }
                  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x50);
                  if (lVar6 != 0) {
                    FUN_03fca7dc(lVar6,*(undefined8 *)puVar5);
                    in_stack_00000058 = in_stack_00000008;
                    in_stack_00000050 = in_stack_00000000;
                    in_stack_00000060 = in_stack_00000010;
                    while (uVar7 = FUN_05506594(&stack0x00000050,*(undefined8 *)puVar3),
                          (uVar7 & 1) != 0) {
                      if (in_stack_00000060 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02fe94e8();
                      }
                      (**(code **)(in_stack_00000060 + 0x18))
                                (*(undefined8 *)(in_stack_00000060 + 0x40),
                                 *(undefined8 *)(in_stack_00000060 + 0x28));
                    }
                    FUN_05506590(&stack0x00000050,*(undefined8 *)puVar2);
                    lVar6 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
                    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                      lVar6 = FUN_02feb2c4();
                    }
                    if (*(int *)(lVar6 + 0xe0) == 0) {
                      thunk_FUN_02fdcff0();
                    }
                    lVar6 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
                    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                      lVar6 = FUN_02feb2c4();
                    }
                    lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x50);
                    if (lVar6 != 0) {
                      FUN_03fca308(lVar6,*(undefined8 *)puVar4);
                      lVar6 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
                      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                        lVar6 = FUN_02feb2c4();
                      }
                      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x48);
                      if (lVar6 != 0) {
                        FUN_051d1a78(lVar6,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x60));
                        lVar6 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
                        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                          lVar6 = FUN_02feb2c4();
                        }
                        lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x60);
                        if (lVar6 != 0) {
                          FUN_03fca7dc(lVar6,*(undefined8 *)puVar5);
                          in_stack_00000058 = in_stack_00000008;
                          in_stack_00000050 = in_stack_00000000;
                          in_stack_00000060 = in_stack_00000010;
                          while (uVar7 = FUN_05506594(&stack0x00000050,*(undefined8 *)puVar3),
                                (uVar7 & 1) != 0) {
                            if (in_stack_00000060 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_02fe94e8();
                            }
                            (**(code **)(in_stack_00000060 + 0x18))
                                      (*(undefined8 *)(in_stack_00000060 + 0x40),
                                       *(undefined8 *)(in_stack_00000060 + 0x28));
                          }
                          FUN_05506590(&stack0x00000050,*(undefined8 *)puVar2);
                          lVar6 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
                          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                            lVar6 = FUN_02feb2c4();
                          }
                          if (*(int *)(lVar6 + 0xe0) == 0) {
                            thunk_FUN_02fdcff0();
                          }
                          lVar6 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
                          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                            lVar6 = FUN_02feb2c4();
                          }
                          lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x60);
                          if (lVar6 != 0) {
                            FUN_03fca308(lVar6,*(undefined8 *)puVar4);
                            lVar6 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
                            if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                              lVar6 = FUN_02feb2c4();
                            }
                            lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x58);
                            if (lVar6 != 0) {
                              FUN_051d1a78(lVar6,*(undefined8 *)puVar1);
                              lVar6 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
                              if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                                lVar6 = FUN_02feb2c4();
                              }
                              lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
                              if ((lVar6 != 0) &&
                                 (lVar6 = FUN_051d16dc(lVar6,*(undefined8 *)
                                                              (*(long *)(*unaff_x19 + 0xc0) + 0x70))
                                 , lVar6 != 0)) {
                                FUN_04debc84(lVar6,*(undefined8 *)
                                                    (*(long *)(*unaff_x19 + 0xc0) + 0x80));
                                in_stack_00000038 = in_stack_00000008;
                                in_stack_00000030 = in_stack_00000000;
                                in_stack_00000040 = in_stack_00000010;
                                while (uVar7 = FUN_055a33a8(&stack0x00000030,
                                                            *(undefined8 *)
                                                             (*(long *)(*unaff_x19 + 0xc0) + 0xb0)),
                                      (uVar7 & 1) != 0) {
                                  FUN_03d24814(in_stack_00000040,
                                               *(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xa8))
                                  ;
                                }
                                FUN_055a33a4(&stack0x00000030,
                                             *(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xb8));
                                lVar6 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
                                if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                                  lVar6 = FUN_02feb2c4();
                                }
                                if (*(int *)(lVar6 + 0xe0) == 0) {
                                  thunk_FUN_02fdcff0();
                                }
                                lVar6 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
                                if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                                  lVar6 = FUN_02feb2c4();
                                }
                                lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
                                if (lVar6 != 0) {
                                  FUN_051d1a78(lVar6,*(undefined8 *)
                                                      (*(long *)(*unaff_x19 + 0xc0) + 0xc0));
                                  lVar6 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
                                  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                                    lVar6 = FUN_02feb2c4();
                                  }
                                  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x20);
                                  if ((lVar6 != 0) &&
                                     (lVar6 = FUN_051d16dc(lVar6,*(undefined8 *)
                                                                  (*(long *)(*unaff_x19 + 0xc0) +
                                                                  0xd0)), lVar6 != 0)) {
                                    FUN_04debc84(&stack0x00000018,lVar6,
                                                 *(undefined8 *)
                                                  (*(long *)(*unaff_x19 + 0xc0) + 0xe0));
                                    while (uVar7 = FUN_055a33a8(&stack0x00000018,
                                                                *(undefined8 *)
                                                                 (*(long *)(*unaff_x19 + 0xc0) +
                                                                 0x110)), (uVar7 & 1) != 0) {
                                      FUN_03d24814(in_stack_00000028,
                                                   *(undefined8 *)
                                                    (*(long *)(*unaff_x19 + 0xc0) + 0x108));
                                    }
                                    FUN_055a33a4(&stack0x00000018,
                                                 *(undefined8 *)
                                                  (*(long *)(*unaff_x19 + 0xc0) + 0x118));
                                    lVar6 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
                                    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                                      lVar6 = FUN_02feb2c4();
                                    }
                                    if (*(int *)(lVar6 + 0xe0) == 0) {
                                      thunk_FUN_02fdcff0();
                                    }
                                    lVar6 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
                                    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                                      lVar6 = FUN_02feb2c4();
                                    }
                                    lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x20);
                                    if (lVar6 != 0) {
                                      FUN_051d1a78(lVar6,*(undefined8 *)
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
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


