/*
FUNCTION_NAME: Unity.Netcode.FallbackSerializer<NativeArray<ulong>>$$WriteDelta
ENTRY_POINT: 0432bdf4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0432c650) */
/* WARNING: Removing unreachable block (ram,0x0432c398) */

void Unity_Netcode_FallbackSerializer<NativeArray<ulong>>__WriteDelta
               (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  
  if ((DAT_08255914 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d98200);
    FUN_0373b518(PTR_DAT_07d98208);
    FUN_0373b518(PTR_DAT_07d98210);
    FUN_0373b518(PTR_DAT_07d98218);
    FUN_0373b518(PTR_DAT_07d98220);
    FUN_0373b518(PTR_DAT_07d98228);
    FUN_0373b518(PTR_DAT_07d98230);
    FUN_0373b518(PTR_DAT_07d98238);
    FUN_0373b518(PTR_DAT_07d98240);
    DAT_08255914 = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  plVar8 = (long *)(param_2 + 0x20);
  lVar6 = *(long *)(*(long *)(*plVar8 + 0xc0) + 0x28);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03775678();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar6 = *(long *)(*(long *)(*plVar8 + 0xc0) + 0x28);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03775678();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
  if (lVar6 != 0) {
    FUN_059dce9c(lVar6,*(undefined8 *)(*(long *)(*plVar8 + 0xc0) + 0x30));
    lVar6 = *(long *)(*(long *)(*plVar8 + 0xc0) + 0x28);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03775678();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x28);
    if (lVar6 != 0) {
      FUN_059eb0a8(lVar6,*(undefined8 *)PTR_DAT_07d98210);
      lVar6 = *(long *)(*(long *)(*plVar8 + 0xc0) + 0x28);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03775678();
      }
      if (**(long **)(lVar6 + 0xb8) != 0) {
        FUN_04586864(**(long **)(lVar6 + 0xb8),*(undefined8 *)PTR_DAT_07d98230);
        lVar6 = *(long *)(*(long *)(*plVar8 + 0xc0) + 0x28);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_03775678();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
        if (lVar6 != 0) {
          FUN_059eb0a8(lVar6,*(undefined8 *)PTR_DAT_07d98208);
          lVar6 = *(long *)(*(long *)(*plVar8 + 0xc0) + 0x28);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_03775678();
          }
          lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x30);
          if (lVar6 != 0) {
            FUN_059eb0a8(lVar6,*(undefined8 *)(*(long *)(*plVar8 + 0xc0) + 0x40));
            lVar6 = *(long *)(*(long *)(*plVar8 + 0xc0) + 0x28);
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
              FUN_045b99ec(&local_c0,lVar6,*(undefined8 *)PTR_DAT_07d98240);
              uStack_68 = uStack_b8;
              local_70 = local_c0;
              local_60 = local_b0;
              while (uVar7 = FUN_05d6471c(&local_70,*(undefined8 *)puVar3), (uVar7 & 1) != 0) {
                if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373b7b4();
                }
                (**(code **)(local_60 + 0x18))
                          (*(undefined8 *)(local_60 + 0x40),*(undefined8 *)(local_60 + 0x28));
              }
              FUN_05d64718(&local_70,*(undefined8 *)puVar2);
              lVar6 = *(long *)(*(long *)(*plVar8 + 0xc0) + 0x28);
              if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                lVar6 = FUN_03775678();
              }
              if (*(int *)(lVar6 + 0xe4) == 0) {
                thunk_FUN_03798b70();
              }
              lVar6 = *(long *)(*(long *)(*plVar8 + 0xc0) + 0x28);
              if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                lVar6 = FUN_03775678();
              }
              lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x40);
              if (lVar6 != 0) {
                FUN_045b9518(lVar6,*(undefined8 *)puVar4);
                lVar6 = *(long *)(*(long *)(*plVar8 + 0xc0) + 0x28);
                if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                  lVar6 = FUN_03775678();
                }
                lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x38);
                if (lVar6 != 0) {
                  FUN_059eb0a8(lVar6,*(undefined8 *)(*(long *)(*plVar8 + 0xc0) + 0x50));
                  lVar6 = *(long *)(*(long *)(*plVar8 + 0xc0) + 0x28);
                  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                    lVar6 = FUN_03775678();
                  }
                  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x50);
                  if (lVar6 != 0) {
                    FUN_045b99ec(&local_c0,lVar6,*(undefined8 *)puVar5);
                    uStack_68 = uStack_b8;
                    local_70 = local_c0;
                    local_60 = local_b0;
                    while (uVar7 = FUN_05d6471c(&local_70,*(undefined8 *)puVar3), (uVar7 & 1) != 0)
                    {
                      if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_0373b7b4();
                      }
                      (**(code **)(local_60 + 0x18))
                                (*(undefined8 *)(local_60 + 0x40),*(undefined8 *)(local_60 + 0x28));
                    }
                    FUN_05d64718(&local_70,*(undefined8 *)puVar2);
                    lVar6 = *(long *)(*(long *)(*plVar8 + 0xc0) + 0x28);
                    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                      lVar6 = FUN_03775678();
                    }
                    if (*(int *)(lVar6 + 0xe4) == 0) {
                      thunk_FUN_03798b70();
                    }
                    lVar6 = *(long *)(*(long *)(*plVar8 + 0xc0) + 0x28);
                    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                      lVar6 = FUN_03775678();
                    }
                    lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x50);
                    if (lVar6 != 0) {
                      FUN_045b9518(lVar6,*(undefined8 *)puVar4);
                      lVar6 = *(long *)(*(long *)(*plVar8 + 0xc0) + 0x28);
                      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                        lVar6 = FUN_03775678();
                      }
                      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x48);
                      if (lVar6 != 0) {
                        FUN_059eb0a8(lVar6,*(undefined8 *)(*(long *)(*plVar8 + 0xc0) + 0x60));
                        lVar6 = *(long *)(*(long *)(*plVar8 + 0xc0) + 0x28);
                        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                          lVar6 = FUN_03775678();
                        }
                        lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x60);
                        if (lVar6 != 0) {
                          FUN_045b99ec(&local_c0,lVar6,*(undefined8 *)puVar5);
                          uStack_68 = uStack_b8;
                          local_70 = local_c0;
                          local_60 = local_b0;
                          while (uVar7 = FUN_05d6471c(&local_70,*(undefined8 *)puVar3),
                                (uVar7 & 1) != 0) {
                            if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_0373b7b4();
                            }
                            (**(code **)(local_60 + 0x18))
                                      (*(undefined8 *)(local_60 + 0x40),
                                       *(undefined8 *)(local_60 + 0x28));
                          }
                          FUN_05d64718(&local_70,*(undefined8 *)puVar2);
                          lVar6 = *(long *)(*(long *)(*plVar8 + 0xc0) + 0x28);
                          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                            lVar6 = FUN_03775678();
                          }
                          if (*(int *)(lVar6 + 0xe4) == 0) {
                            thunk_FUN_03798b70();
                          }
                          lVar6 = *(long *)(*(long *)(*plVar8 + 0xc0) + 0x28);
                          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                            lVar6 = FUN_03775678();
                          }
                          lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x60);
                          if (lVar6 != 0) {
                            FUN_045b9518(lVar6,*(undefined8 *)puVar4);
                            lVar6 = *(long *)(*(long *)(*plVar8 + 0xc0) + 0x28);
                            if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                              lVar6 = FUN_03775678();
                            }
                            lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x58);
                            if (lVar6 != 0) {
                              FUN_059eb0a8(lVar6,*(undefined8 *)puVar1);
                              lVar6 = *(long *)(*(long *)(*plVar8 + 0xc0) + 0x28);
                              if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                                lVar6 = FUN_03775678();
                              }
                              lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
                              if ((lVar6 != 0) &&
                                 (lVar6 = FUN_059ead0c(lVar6,*(undefined8 *)
                                                              (*(long *)(*plVar8 + 0xc0) + 0x70)),
                                 lVar6 != 0)) {
                                FUN_05648f14(&local_c0,lVar6,
                                             *(undefined8 *)(*(long *)(*plVar8 + 0xc0) + 0x80));
                                uStack_88 = uStack_b8;
                                local_90 = local_c0;
                                local_80 = local_b0;
                                while (uVar7 = FUN_05e12288(&local_90,
                                                            *(undefined8 *)
                                                             (*(long *)(*plVar8 + 0xc0) + 0xb0)),
                                      (uVar7 & 1) != 0) {
                                  FUN_040ed9d4(local_80,*(undefined8 *)
                                                         (*(long *)(*plVar8 + 0xc0) + 0xa8));
                                }
                                FUN_05e12284(&local_90,
                                             *(undefined8 *)(*(long *)(*plVar8 + 0xc0) + 0xb8));
                                lVar6 = *(long *)(*(long *)(*plVar8 + 0xc0) + 0x28);
                                if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                                  lVar6 = FUN_03775678();
                                }
                                if (*(int *)(lVar6 + 0xe4) == 0) {
                                  thunk_FUN_03798b70();
                                }
                                lVar6 = *(long *)(*(long *)(*plVar8 + 0xc0) + 0x28);
                                if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                                  lVar6 = FUN_03775678();
                                }
                                lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
                                if (lVar6 != 0) {
                                  FUN_059eb0a8(lVar6,*(undefined8 *)
                                                      (*(long *)(*plVar8 + 0xc0) + 0xc0));
                                  lVar6 = *(long *)(*(long *)(*plVar8 + 0xc0) + 0x28);
                                  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                                    lVar6 = FUN_03775678();
                                  }
                                  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x20);
                                  if ((lVar6 != 0) &&
                                     (lVar6 = FUN_059ead0c(lVar6,*(undefined8 *)
                                                                  (*(long *)(*plVar8 + 0xc0) + 0xd0)
                                                          ), lVar6 != 0)) {
                                    FUN_05648f14(&local_a8,lVar6,
                                                 *(undefined8 *)(*(long *)(*plVar8 + 0xc0) + 0xe0));
                                    while (uVar7 = FUN_05e12288(&local_a8,
                                                                *(undefined8 *)
                                                                 (*(long *)(*plVar8 + 0xc0) + 0x110)
                                                               ), (uVar7 & 1) != 0) {
                                      FUN_040ed9d4(local_98,*(undefined8 *)
                                                             (*(long *)(*plVar8 + 0xc0) + 0x108));
                                    }
                                    FUN_05e12284(&local_a8,
                                                 *(undefined8 *)(*(long *)(*plVar8 + 0xc0) + 0x118))
                                    ;
                                    lVar6 = *(long *)(*(long *)(*plVar8 + 0xc0) + 0x28);
                                    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                                      lVar6 = FUN_03775678();
                                    }
                                    if (*(int *)(lVar6 + 0xe4) == 0) {
                                      thunk_FUN_03798b70();
                                    }
                                    lVar6 = *(long *)(*(long *)(*plVar8 + 0xc0) + 0x28);
                                    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                                      lVar6 = FUN_03775678();
                                    }
                                    lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x20);
                                    if (lVar6 != 0) {
                                      FUN_059eb0a8(lVar6,*(undefined8 *)
                                                          (*(long *)(*plVar8 + 0xc0) + 0x120));
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
  FUN_0373b7b4();
}


