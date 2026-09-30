/*
FUNCTION_NAME: Amazon.Runtime.Internal.Util.EncryptUploadPartStream$$get_Position
ENTRY_POINT: 04abdf0c
PROGRAM: Hyper-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_2
*/


void Amazon_Runtime_Internal_Util_EncryptUploadPartStream__get_Position(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long unaff_x20;
  long *unaff_x21;
  long lVar6;
  undefined8 uVar7;
  long unaff_x23;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 in_stack_00000010;
  
  lVar6 = *unaff_x21;
  puVar5 = *(undefined8 **)(lVar6 + 0x38);
  if (puVar5 == (undefined8 *)0x0) {
    FUN_04980b90(lVar6);
    puVar5 = *(undefined8 **)(lVar6 + 0x38);
  }
  uVar7 = *puVar5;
  if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  FUN_08d895f0(uVar7,0);
  lVar6 = FUN_04a7ee78();
  puVar1 = PTR_DAT_0ac0d878;
  if (lVar6 != 0) {
    FUN_05dd59a0(lVar6,*(undefined8 *)PTR_DAT_0ac0daf8);
    lVar6 = *(long *)puVar1;
    puVar5 = *(undefined8 **)(lVar6 + 0x38);
    if (puVar5 == (undefined8 *)0x0) {
      FUN_04980b90(lVar6);
      puVar5 = *(undefined8 **)(lVar6 + 0x38);
    }
    uVar7 = *puVar5;
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    FUN_08d895f0(uVar7,0);
    lVar6 = FUN_04a7ee78();
    puVar1 = PTR_DAT_0ac0d800;
    if (lVar6 != 0) {
      FUN_05dd59a0(lVar6,*(undefined8 *)PTR_DAT_0ac0db98);
      lVar6 = *(long *)puVar1;
      puVar5 = *(undefined8 **)(lVar6 + 0x38);
      if (puVar5 == (undefined8 *)0x0) {
        FUN_04980b90(lVar6);
        puVar5 = *(undefined8 **)(lVar6 + 0x38);
      }
      uVar7 = *puVar5;
      if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_08d895f0(uVar7,0);
      lVar6 = FUN_04a7ee78();
      puVar1 = PTR_DAT_0ac0d788;
      if (lVar6 != 0) {
        FUN_05dd59a0(lVar6,*(undefined8 *)PTR_DAT_0ac0db90);
        lVar6 = *(long *)puVar1;
        puVar5 = *(undefined8 **)(lVar6 + 0x38);
        if (puVar5 == (undefined8 *)0x0) {
          FUN_04980b90(lVar6);
          puVar5 = *(undefined8 **)(lVar6 + 0x38);
        }
        uVar7 = *puVar5;
        if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        FUN_08d895f0(uVar7,0);
        lVar6 = FUN_04a7ee78();
        puVar1 = PTR_DAT_0ac0d838;
        if (lVar6 != 0) {
          FUN_05dd59a0(lVar6,*(undefined8 *)PTR_DAT_0ac0db80);
          lVar6 = *(long *)puVar1;
          puVar5 = *(undefined8 **)(lVar6 + 0x38);
          if (puVar5 == (undefined8 *)0x0) {
            FUN_04980b90(lVar6);
            puVar5 = *(undefined8 **)(lVar6 + 0x38);
          }
          uVar7 = *puVar5;
          if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          FUN_08d895f0(uVar7,0);
          lVar6 = FUN_04a7ee78();
          puVar1 = PTR_DAT_0ac0d828;
          if (lVar6 != 0) {
            FUN_05dd59a0(lVar6,*(undefined8 *)PTR_DAT_0ac0db88);
            lVar6 = *(long *)puVar1;
            puVar5 = *(undefined8 **)(lVar6 + 0x38);
            if (puVar5 == (undefined8 *)0x0) {
              FUN_04980b90(lVar6);
              puVar5 = *(undefined8 **)(lVar6 + 0x38);
            }
            uVar7 = *puVar5;
            if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_049a583c();
            }
            FUN_08d895f0(uVar7,0);
            lVar6 = FUN_04a7ee78();
            puVar1 = PTR_DAT_0ac0d8b0;
            if (lVar6 != 0) {
              FUN_05dd59a0(lVar6,*(undefined8 *)PTR_DAT_0ac0db70);
              lVar6 = *(long *)puVar1;
              puVar5 = *(undefined8 **)(lVar6 + 0x38);
              if (puVar5 == (undefined8 *)0x0) {
                FUN_04980b90(lVar6);
                puVar5 = *(undefined8 **)(lVar6 + 0x38);
              }
              uVar7 = *puVar5;
              if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_049a583c();
              }
              FUN_08d895f0(uVar7,0);
              lVar6 = FUN_04a7ee78();
              puVar1 = PTR_DAT_0ac0d7f0;
              if (lVar6 != 0) {
                FUN_05dd59a0(lVar6,*(undefined8 *)PTR_DAT_0ac0db78);
                lVar6 = *(long *)puVar1;
                puVar5 = *(undefined8 **)(lVar6 + 0x38);
                if (puVar5 == (undefined8 *)0x0) {
                  FUN_04980b90(lVar6);
                  puVar5 = *(undefined8 **)(lVar6 + 0x38);
                }
                uVar7 = *puVar5;
                if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
                  thunk_FUN_049a583c();
                }
                FUN_08d895f0(uVar7,0);
                lVar6 = FUN_04a7ee78();
                puVar1 = PTR_DAT_0ac0d868;
                if (lVar6 != 0) {
                  FUN_05dd59a0(lVar6,*(undefined8 *)PTR_DAT_0ac0db00);
                  lVar6 = *(long *)puVar1;
                  puVar5 = *(undefined8 **)(lVar6 + 0x38);
                  if (puVar5 == (undefined8 *)0x0) {
                    FUN_04980b90(lVar6);
                    puVar5 = *(undefined8 **)(lVar6 + 0x38);
                  }
                  uVar7 = *puVar5;
                  if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
                    thunk_FUN_049a583c();
                  }
                  FUN_08d895f0(uVar7,0);
                  lVar6 = FUN_04a7ee78();
                  puVar1 = PTR_DAT_0ac0d938;
                  if (lVar6 != 0) {
                    FUN_05dd59a0(lVar6,*(undefined8 *)PTR_DAT_0ac0db58);
                    lVar6 = *(long *)puVar1;
                    puVar5 = *(undefined8 **)(lVar6 + 0x38);
                    if (puVar5 == (undefined8 *)0x0) {
                      FUN_04980b90(lVar6);
                      puVar5 = *(undefined8 **)(lVar6 + 0x38);
                    }
                    uVar7 = *puVar5;
                    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
                      thunk_FUN_049a583c();
                    }
                    FUN_08d895f0(uVar7,0);
                    lVar6 = FUN_04a7ee78();
                    puVar1 = PTR_DAT_0ac0d7b0;
                    if (lVar6 != 0) {
                      FUN_05dd59a0(lVar6,*(undefined8 *)PTR_DAT_0ac0dc60);
                      lVar6 = *(long *)puVar1;
                      puVar5 = *(undefined8 **)(lVar6 + 0x38);
                      if (puVar5 == (undefined8 *)0x0) {
                        FUN_04980b90(lVar6);
                        puVar5 = *(undefined8 **)(lVar6 + 0x38);
                      }
                      uVar7 = *puVar5;
                      if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
                        thunk_FUN_049a583c();
                      }
                      FUN_08d895f0(uVar7,0);
                      lVar6 = FUN_04a7ee78();
                      puVar1 = PTR_DAT_0ac0d910;
                      if (lVar6 != 0) {
                        FUN_05dd59a0(lVar6,*(undefined8 *)PTR_DAT_0ac0dab8);
                        lVar6 = *(long *)puVar1;
                        puVar5 = *(undefined8 **)(lVar6 + 0x38);
                        if (puVar5 == (undefined8 *)0x0) {
                          FUN_04980b90(lVar6);
                          puVar5 = *(undefined8 **)(lVar6 + 0x38);
                        }
                        uVar7 = *puVar5;
                        if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
                          thunk_FUN_049a583c();
                        }
                        FUN_08d895f0(uVar7,0);
                        lVar6 = FUN_04a7ee78();
                        puVar1 = PTR_DAT_0ac0d880;
                        if (lVar6 != 0) {
                          FUN_05dd59a0(lVar6,*(undefined8 *)PTR_DAT_0ac0dc38);
                          lVar6 = *(long *)puVar1;
                          puVar5 = *(undefined8 **)(lVar6 + 0x38);
                          if (puVar5 == (undefined8 *)0x0) {
                            FUN_04980b90(lVar6);
                            puVar5 = *(undefined8 **)(lVar6 + 0x38);
                          }
                          uVar7 = *puVar5;
                          if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
                            thunk_FUN_049a583c();
                          }
                          FUN_08d895f0(uVar7,0);
                          lVar6 = FUN_04a7ee78();
                          puVar3 = PTR_DAT_0ac0dc30;
                          puVar1 = PTR_DAT_0ac0a7a8;
                          if (lVar6 != 0) {
                            lVar6 = FUN_05dd59a0(lVar6,*(undefined8 *)PTR_DAT_0ac0dc30);
                            in_stack_00000010 = 0;
                            uVar7 = thunk_FUN_04983b98(*(undefined8 *)puVar1,&stack0x00000010);
                            puVar2 = PTR_DAT_0ac0d898;
                            if (lVar6 != 0) {
                              FUN_0a49c564(lVar6,uVar7,0);
                              lVar6 = *(long *)puVar2;
                              puVar5 = *(undefined8 **)(lVar6 + 0x38);
                              if (puVar5 == (undefined8 *)0x0) {
                                FUN_04980b90(lVar6);
                                puVar5 = *(undefined8 **)(lVar6 + 0x38);
                              }
                              uVar7 = *puVar5;
                              if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
                                thunk_FUN_049a583c();
                              }
                              FUN_08d895f0(uVar7,0);
                              lVar6 = FUN_04a7ee78();
                              if (lVar6 != 0) {
                                lVar6 = FUN_05dd59a0(lVar6,*(undefined8 *)puVar3);
                                uStack000000000000000c = 1;
                                uVar7 = thunk_FUN_04983b98(*(undefined8 *)puVar1,
                                                           (long)&stack0x00000008 + 4);
                                puVar2 = PTR_DAT_0ac0d8f0;
                                if (lVar6 != 0) {
                                  FUN_0a49c564(lVar6,uVar7,0);
                                  lVar6 = *(long *)puVar2;
                                  puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                  if (puVar5 == (undefined8 *)0x0) {
                                    FUN_04980b90(lVar6);
                                    puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                  }
                                  uVar7 = *puVar5;
                                  if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
                                    thunk_FUN_049a583c();
                                  }
                                  FUN_08d895f0(uVar7,0);
                                  lVar6 = FUN_04a7ee78();
                                  if (lVar6 != 0) {
                                    lVar6 = FUN_05dd59a0(lVar6,*(undefined8 *)puVar3);
                                    uStack0000000000000008 = 2;
                                    uVar7 = thunk_FUN_04983b98(*(undefined8 *)puVar1,
                                                               &stack0x00000008);
                                    puVar2 = PTR_DAT_0ac0d950;
                                    if (lVar6 != 0) {
                                      FUN_0a49c564(lVar6,uVar7,0);
                                      lVar6 = *(long *)puVar2;
                                      puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                      if (puVar5 == (undefined8 *)0x0) {
                                        FUN_04980b90(lVar6);
                                        puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                      }
                                      uVar7 = *puVar5;
                                      if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
                                        thunk_FUN_049a583c();
                                      }
                                      FUN_08d895f0(uVar7,0);
                                      lVar6 = FUN_04a7ee78();
                                      if ((lVar6 != 0) &&
                                         (lVar6 = FUN_05dd59a0(lVar6,*(undefined8 *)PTR_DAT_0ac0dc70
                                                              ), lVar6 != 0)) {
                                        lVar6 = FUN_05dd59a0(lVar6,*(undefined8 *)puVar3);
                                        in_stack_00000000._4_4_ = 3;
                                        uVar7 = thunk_FUN_04983b98(*(undefined8 *)puVar1,
                                                                   (long)&stack0x00000000 + 4);
                                        puVar1 = PTR_DAT_0ac0d978;
                                        if (lVar6 != 0) {
                                          FUN_0a49c564(lVar6,uVar7,0);
                                          lVar6 = *(long *)puVar1;
                                          puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                          if (puVar5 == (undefined8 *)0x0) {
                                            FUN_04980b90(lVar6);
                                            puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                          }
                                          uVar7 = *puVar5;
                                          if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
                                            thunk_FUN_049a583c();
                                          }
                                          FUN_08d895f0(uVar7,0);
                                          lVar6 = FUN_04a7ee78();
                                          if (lVar6 != 0) {
                                            FUN_05dd59a0(lVar6,*(undefined8 *)PTR_DAT_0ac0dca8);
                                            lVar6 = FUN_04a7efd8();
                                            puVar1 = PTR_DAT_0ac0d7c8;
                                            if (lVar6 != 0) {
                                              FUN_05dd59a0(lVar6,*(undefined8 *)PTR_DAT_0ac0dae8);
                                              lVar6 = *(long *)puVar1;
                                              puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                              if (puVar5 == (undefined8 *)0x0) {
                                                FUN_04980b90(lVar6);
                                                puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                              }
                                              uVar7 = *puVar5;
                                              if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0)
                                              {
                                                thunk_FUN_049a583c();
                                              }
                                              FUN_08d895f0(uVar7,0);
                                              lVar6 = FUN_04a7ee78();
                                              puVar1 = PTR_DAT_0ac0d9f8;
                                              if (lVar6 != 0) {
                                                FUN_05dd59a0(lVar6,*(undefined8 *)PTR_DAT_0ac0dad0);
                                                lVar6 = *(long *)puVar1;
                                                puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                if (puVar5 == (undefined8 *)0x0) {
                                                  FUN_04980b90(lVar6);
                                                  puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                }
                                                uVar7 = *puVar5;
                                                if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) ==
                                                    0) {
                                                  thunk_FUN_049a583c();
                                                }
                                                FUN_08d895f0(uVar7,0);
                                                lVar6 = FUN_04a7ee78();
                                                puVar1 = PTR_DAT_0ac0d9f0;
                                                if (lVar6 != 0) {
                                                  FUN_05dd59a0(lVar6,*(undefined8 *)PTR_DAT_0ac0dd78
                                                              );
                                                  lVar6 = *(long *)puVar1;
                                                  puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                  if (puVar5 == (undefined8 *)0x0) {
                                                    FUN_04980b90(lVar6);
                                                    puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                  }
                                                  uVar7 = *puVar5;
                                                  if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4)
                                                      == 0) {
                                                    thunk_FUN_049a583c();
                                                  }
                                                  FUN_08d895f0(uVar7,0);
                                                  lVar6 = FUN_04a7ee78();
                                                  puVar1 = PTR_DAT_0ac0d858;
                                                  if (lVar6 != 0) {
                                                    FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                        PTR_DAT_0ac0dd60);
                                                    lVar6 = *(long *)puVar1;
                                                    puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                    if (puVar5 == (undefined8 *)0x0) {
                                                      FUN_04980b90(lVar6);
                                                      puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                    }
                                                    uVar7 = *puVar5;
                                                    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4)
                                                        == 0) {
                                                      thunk_FUN_049a583c();
                                                    }
                                                    FUN_08d895f0(uVar7,0);
                                                    lVar6 = FUN_04a7ee78();
                                                    puVar1 = PTR_DAT_0ac0d988;
                                                    if (lVar6 != 0) {
                                                      FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                          PTR_DAT_0ac0db48);
                                                      lVar6 = *(long *)puVar1;
                                                      puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                      if (puVar5 == (undefined8 *)0x0) {
                                                        FUN_04980b90(lVar6);
                                                        puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                      }
                                                      uVar7 = *puVar5;
                                                      if (*(int *)(*(long *)(unaff_x23 + 0xe0) +
                                                                  0xe4) == 0) {
                                                        thunk_FUN_049a583c();
                                                      }
                                                      FUN_08d895f0(uVar7,0);
                                                      lVar6 = FUN_04a7ee78();
                                                      puVar1 = PTR_DAT_0ac0d8d0;
                                                      if (lVar6 != 0) {
                                                        FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                            PTR_DAT_0ac0dcc0);
                                                        lVar6 = *(long *)puVar1;
                                                        puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                        if (puVar5 == (undefined8 *)0x0) {
                                                          FUN_04980b90(lVar6);
                                                          puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                        }
                                                        uVar7 = *puVar5;
                                                        if (*(int *)(*(long *)(unaff_x23 + 0xe0) +
                                                                    0xe4) == 0) {
                                                          thunk_FUN_049a583c();
                                                        }
                                                        FUN_08d895f0(uVar7,0);
                                                        lVar6 = FUN_04a7ee78();
                                                        puVar1 = PTR_DAT_0ac0d810;
                                                        if (lVar6 != 0) {
                                                          FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                              PTR_DAT_0ac0dbf8);
                                                          lVar6 = *(long *)puVar1;
                                                          puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                          if (puVar5 == (undefined8 *)0x0) {
                                                            FUN_04980b90(lVar6);
                                                            puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                          }
                                                          uVar7 = *puVar5;
                                                          if (*(int *)(*(long *)(unaff_x23 + 0xe0) +
                                                                      0xe4) == 0) {
                                                            thunk_FUN_049a583c();
                                                          }
                                                          FUN_08d895f0(uVar7,0);
                                                          lVar6 = FUN_04a7ee78();
                                                          puVar1 = PTR_DAT_0ac0d798;
                                                          if (lVar6 != 0) {
                                                            FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                                PTR_DAT_0ac0db18);
                                                            lVar6 = *(long *)puVar1;
                                                            puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                            if (puVar5 == (undefined8 *)0x0) {
                                                              FUN_04980b90(lVar6);
                                                              puVar5 = *(undefined8 **)
                                                                        (lVar6 + 0x38);
                                                            }
                                                            uVar7 = *puVar5;
                                                            if (*(int *)(*(long *)(unaff_x23 + 0xe0)
                                                                        + 0xe4) == 0) {
                                                              thunk_FUN_049a583c();
                                                            }
                                                            FUN_08d895f0(uVar7,0);
                                                            lVar6 = FUN_04a7ee78();
                                                            puVar1 = PTR_DAT_0ac0d848;
                                                            if (lVar6 != 0) {
                                                              FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                                  PTR_DAT_0ac0da98);
                                                              lVar6 = *(long *)puVar1;
                                                              puVar5 = *(undefined8 **)
                                                                        (lVar6 + 0x38);
                                                              if (puVar5 == (undefined8 *)0x0) {
                                                                FUN_04980b90(lVar6);
                                                                puVar5 = *(undefined8 **)
                                                                          (lVar6 + 0x38);
                                                              }
                                                              uVar7 = *puVar5;
                                                              if (*(int *)(*(long *)(unaff_x23 +
                                                                                    0xe0) + 0xe4) ==
                                                                  0) {
                                                                thunk_FUN_049a583c();
                                                              }
                                                              FUN_08d895f0(uVar7,0);
                                                              lVar6 = FUN_04a7ee78();
                                                              puVar1 = PTR_DAT_0ac0d820;
                                                              if (lVar6 != 0) {
                                                                FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                                    PTR_DAT_0ac0db38
                                                                            );
                                                                lVar6 = *(long *)puVar1;
                                                                puVar5 = *(undefined8 **)
                                                                          (lVar6 + 0x38);
                                                                if (puVar5 == (undefined8 *)0x0) {
                                                                  FUN_04980b90(lVar6);
                                                                  puVar5 = *(undefined8 **)
                                                                            (lVar6 + 0x38);
                                                                }
                                                                uVar7 = *puVar5;
                                                                if (*(int *)(*(long *)(unaff_x23 +
                                                                                      0xe0) + 0xe4)
                                                                    == 0) {
                                                                  thunk_FUN_049a583c();
                                                                }
                                                                FUN_08d895f0(uVar7,0);
                                                                lVar6 = FUN_04a7ee78();
                                                                puVar1 = PTR_DAT_0ac0d8c0;
                                                                if (lVar6 != 0) {
                                                                  FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_0ac0db20);
                                                  lVar6 = *(long *)puVar1;
                                                  puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                  if (puVar5 == (undefined8 *)0x0) {
                                                    FUN_04980b90(lVar6);
                                                    puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                  }
                                                  uVar7 = *puVar5;
                                                  if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4)
                                                      == 0) {
                                                    thunk_FUN_049a583c();
                                                  }
                                                  FUN_08d895f0(uVar7,0);
                                                  lVar6 = FUN_04a7ee78();
                                                  puVar1 = PTR_DAT_0ac0d8a0;
                                                  if (lVar6 != 0) {
                                                    FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                        PTR_DAT_0ac0dbd0);
                                                    lVar6 = *(long *)puVar1;
                                                    puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                    if (puVar5 == (undefined8 *)0x0) {
                                                      FUN_04980b90(lVar6);
                                                      puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                    }
                                                    uVar7 = *puVar5;
                                                    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4)
                                                        == 0) {
                                                      thunk_FUN_049a583c();
                                                    }
                                                    FUN_08d895f0(uVar7,0);
                                                    lVar6 = FUN_04a7ee78();
                                                    puVar1 = PTR_DAT_0ac0d870;
                                                    if (lVar6 != 0) {
                                                      FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                          PTR_DAT_0ac0dbb8);
                                                      lVar6 = *(long *)puVar1;
                                                      puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                      if (puVar5 == (undefined8 *)0x0) {
                                                        FUN_04980b90(lVar6);
                                                        puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                      }
                                                      uVar7 = *puVar5;
                                                      if (*(int *)(*(long *)(unaff_x23 + 0xe0) +
                                                                  0xe4) == 0) {
                                                        thunk_FUN_049a583c();
                                                      }
                                                      FUN_08d895f0(uVar7,0);
                                                      lVar6 = FUN_04a7ee78();
                                                      if (lVar6 != 0) {
                                                        lVar6 = FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                                    PTR_DAT_0ac0db60
                                                                            );
                                                        if (((*(long *)(unaff_x20 + 0x20) != 0) &&
                                                            (lVar4 = *(long *)(*(long *)(unaff_x20 +
                                                                                        0x20) + 0x50
                                                                              ), lVar4 != 0)) &&
                                                           (lVar4 = FUN_05bde968(lVar4,*(undefined8
                                                                                         *)
                                                  PTR_DAT_0ac0da70), lVar4 != 0)) {
                                                    FUN_0a188eb0(lVar4,0);
                                                    uVar7 = thunk_FUN_04983b98(*(undefined8 *)
                                                                                (unaff_x23 + 0x78));
                                                    puVar1 = PTR_DAT_0ac0d8f8;
                                                    if (lVar6 != 0) {
                                                      FUN_0a49bf34(lVar6,*(undefined8 *)
                                                                          PTR_DAT_0ac0dd98,uVar7,0);
                                                      lVar6 = *(long *)puVar1;
                                                      puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                      if (puVar5 == (undefined8 *)0x0) {
                                                        FUN_04980b90(lVar6);
                                                        puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                      }
                                                      uVar7 = *puVar5;
                                                      if (*(int *)(*(long *)(unaff_x23 + 0xe0) +
                                                                  0xe4) == 0) {
                                                        thunk_FUN_049a583c();
                                                      }
                                                      FUN_08d895f0(uVar7,0);
                                                      lVar6 = FUN_04a7ee78();
                                                      puVar1 = PTR_DAT_0ac0d850;
                                                      if (lVar6 != 0) {
                                                        FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                            PTR_DAT_0ac0dc18);
                                                        lVar6 = *(long *)puVar1;
                                                        puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                        if (puVar5 == (undefined8 *)0x0) {
                                                          FUN_04980b90(lVar6);
                                                          puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                        }
                                                        uVar7 = *puVar5;
                                                        if (*(int *)(*(long *)(unaff_x23 + 0xe0) +
                                                                    0xe4) == 0) {
                                                          thunk_FUN_049a583c();
                                                        }
                                                        FUN_08d895f0(uVar7,0);
                                                        lVar6 = FUN_04a7ee78();
                                                        puVar1 = PTR_DAT_0ac0d970;
                                                        if (lVar6 != 0) {
                                                          FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                              PTR_DAT_0ac0db40);
                                                          lVar6 = *(long *)puVar1;
                                                          puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                          if (puVar5 == (undefined8 *)0x0) {
                                                            FUN_04980b90(lVar6);
                                                            puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                          }
                                                          uVar7 = *puVar5;
                                                          if (*(int *)(*(long *)(unaff_x23 + 0xe0) +
                                                                      0xe4) == 0) {
                                                            thunk_FUN_049a583c();
                                                          }
                                                          FUN_08d895f0(uVar7,0);
                                                          lVar6 = FUN_04a7ee78();
                                                          puVar1 = PTR_DAT_0ac0d7e0;
                                                          if (lVar6 != 0) {
                                                            FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                                PTR_DAT_0ac0dca0);
                                                            lVar6 = *(long *)puVar1;
                                                            puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                            if (puVar5 == (undefined8 *)0x0) {
                                                              FUN_04980b90(lVar6);
                                                              puVar5 = *(undefined8 **)
                                                                        (lVar6 + 0x38);
                                                            }
                                                            uVar7 = *puVar5;
                                                            if (*(int *)(*(long *)(unaff_x23 + 0xe0)
                                                                        + 0xe4) == 0) {
                                                              thunk_FUN_049a583c();
                                                            }
                                                            FUN_08d895f0(uVar7,0);
                                                            lVar6 = FUN_04a7ee78();
                                                            puVar1 = PTR_DAT_0ac0d7b8;
                                                            if (lVar6 != 0) {
                                                              FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                                  PTR_DAT_0ac0daf0);
                                                              lVar6 = *(long *)puVar1;
                                                              puVar5 = *(undefined8 **)
                                                                        (lVar6 + 0x38);
                                                              if (puVar5 == (undefined8 *)0x0) {
                                                                FUN_04980b90(lVar6);
                                                                puVar5 = *(undefined8 **)
                                                                          (lVar6 + 0x38);
                                                              }
                                                              uVar7 = *puVar5;
                                                              if (*(int *)(*(long *)(unaff_x23 +
                                                                                    0xe0) + 0xe4) ==
                                                                  0) {
                                                                thunk_FUN_049a583c();
                                                              }
                                                              FUN_08d895f0(uVar7,0);
                                                              lVar6 = FUN_04a7ee78();
                                                              puVar1 = PTR_DAT_0ac0d980;
                                                              if (lVar6 != 0) {
                                                                FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                                    PTR_DAT_0ac0dac0
                                                                            );
                                                                lVar6 = *(long *)puVar1;
                                                                puVar5 = *(undefined8 **)
                                                                          (lVar6 + 0x38);
                                                                if (puVar5 == (undefined8 *)0x0) {
                                                                  FUN_04980b90(lVar6);
                                                                  puVar5 = *(undefined8 **)
                                                                            (lVar6 + 0x38);
                                                                }
                                                                uVar7 = *puVar5;
                                                                if (*(int *)(*(long *)(unaff_x23 +
                                                                                      0xe0) + 0xe4)
                                                                    == 0) {
                                                                  thunk_FUN_049a583c();
                                                                }
                                                                FUN_08d895f0(uVar7,0);
                                                                lVar6 = FUN_04a7ee78();
                                                                puVar1 = PTR_DAT_0ac0d9b0;
                                                                if (lVar6 != 0) {
                                                                  FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_0ac0dcb8);
                                                  lVar6 = *(long *)puVar1;
                                                  puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                  if (puVar5 == (undefined8 *)0x0) {
                                                    FUN_04980b90(lVar6);
                                                    puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                  }
                                                  uVar7 = *puVar5;
                                                  if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4)
                                                      == 0) {
                                                    thunk_FUN_049a583c();
                                                  }
                                                  FUN_08d895f0(uVar7,0);
                                                  lVar6 = FUN_04a7ee78();
                                                  puVar1 = PTR_DAT_0ac0d9a8;
                                                  if (lVar6 != 0) {
                                                    FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                        PTR_DAT_0ac0dd08);
                                                    lVar6 = *(long *)puVar1;
                                                    puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                    if (puVar5 == (undefined8 *)0x0) {
                                                      FUN_04980b90(lVar6);
                                                      puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                    }
                                                    uVar7 = *puVar5;
                                                    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4)
                                                        == 0) {
                                                      thunk_FUN_049a583c();
                                                    }
                                                    FUN_08d895f0(uVar7,0);
                                                    lVar6 = FUN_04a7ee78();
                                                    puVar1 = PTR_DAT_0ac0d9a0;
                                                    if (lVar6 != 0) {
                                                      FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                          PTR_DAT_0ac0dce8);
                                                      lVar6 = *(long *)puVar1;
                                                      puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                      if (puVar5 == (undefined8 *)0x0) {
                                                        FUN_04980b90(lVar6);
                                                        puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                      }
                                                      uVar7 = *puVar5;
                                                      if (*(int *)(*(long *)(unaff_x23 + 0xe0) +
                                                                  0xe4) == 0) {
                                                        thunk_FUN_049a583c();
                                                      }
                                                      FUN_08d895f0(uVar7,0);
                                                      lVar6 = FUN_04a7ee78();
                                                      puVar1 = PTR_DAT_0ac0d7d8;
                                                      if (lVar6 != 0) {
                                                        FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                            PTR_DAT_0ac0dce0);
                                                        lVar6 = *(long *)puVar1;
                                                        puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                        if (puVar5 == (undefined8 *)0x0) {
                                                          FUN_04980b90(lVar6);
                                                          puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                        }
                                                        uVar7 = *puVar5;
                                                        if (*(int *)(*(long *)(unaff_x23 + 0xe0) +
                                                                    0xe4) == 0) {
                                                          thunk_FUN_049a583c();
                                                        }
                                                        FUN_08d895f0(uVar7,0);
                                                        lVar6 = FUN_04a7ee78();
                                                        puVar1 = PTR_DAT_0ac0d968;
                                                        if (lVar6 != 0) {
                                                          FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                              PTR_DAT_0ac0dae0);
                                                          lVar6 = *(long *)puVar1;
                                                          puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                          if (puVar5 == (undefined8 *)0x0) {
                                                            FUN_04980b90(lVar6);
                                                            puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                          }
                                                          uVar7 = *puVar5;
                                                          if (*(int *)(*(long *)(unaff_x23 + 0xe0) +
                                                                      0xe4) == 0) {
                                                            thunk_FUN_049a583c();
                                                          }
                                                          FUN_08d895f0(uVar7,0);
                                                          lVar6 = FUN_04a7ee78();
                                                          puVar1 = PTR_DAT_0ac0d888;
                                                          if (lVar6 != 0) {
                                                            FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                                PTR_DAT_0ac0dc88);
                                                            lVar6 = *(long *)puVar1;
                                                            puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                            if (puVar5 == (undefined8 *)0x0) {
                                                              FUN_04980b90(lVar6);
                                                              puVar5 = *(undefined8 **)
                                                                        (lVar6 + 0x38);
                                                            }
                                                            uVar7 = *puVar5;
                                                            if (*(int *)(*(long *)(unaff_x23 + 0xe0)
                                                                        + 0xe4) == 0) {
                                                              thunk_FUN_049a583c();
                                                            }
                                                            FUN_08d895f0(uVar7,0);
                                                            lVar6 = FUN_04a7ee78();
                                                            puVar1 = PTR_DAT_0ac0d998;
                                                            if (lVar6 != 0) {
                                                              FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                                  PTR_DAT_0ac0dba0);
                                                              lVar6 = *(long *)puVar1;
                                                              puVar5 = *(undefined8 **)
                                                                        (lVar6 + 0x38);
                                                              if (puVar5 == (undefined8 *)0x0) {
                                                                FUN_04980b90(lVar6);
                                                                puVar5 = *(undefined8 **)
                                                                          (lVar6 + 0x38);
                                                              }
                                                              uVar7 = *puVar5;
                                                              if (*(int *)(*(long *)(unaff_x23 +
                                                                                    0xe0) + 0xe4) ==
                                                                  0) {
                                                                thunk_FUN_049a583c();
                                                              }
                                                              FUN_08d895f0(uVar7,0);
                                                              lVar6 = FUN_04a7ee78();
                                                              puVar1 = PTR_DAT_0ac0d860;
                                                              if (lVar6 != 0) {
                                                                FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                                    PTR_DAT_0ac0dcd8
                                                                            );
                                                                lVar6 = *(long *)puVar1;
                                                                puVar5 = *(undefined8 **)
                                                                          (lVar6 + 0x38);
                                                                if (puVar5 == (undefined8 *)0x0) {
                                                                  FUN_04980b90(lVar6);
                                                                  puVar5 = *(undefined8 **)
                                                                            (lVar6 + 0x38);
                                                                }
                                                                uVar7 = *puVar5;
                                                                if (*(int *)(*(long *)(unaff_x23 +
                                                                                      0xe0) + 0xe4)
                                                                    == 0) {
                                                                  thunk_FUN_049a583c();
                                                                }
                                                                FUN_08d895f0(uVar7,0);
                                                                lVar6 = FUN_04a7ee78();
                                                                puVar1 = PTR_DAT_0ac0d928;
                                                                if (lVar6 != 0) {
                                                                  FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_0ac0db50);
                                                  lVar6 = *(long *)puVar1;
                                                  puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                  if (puVar5 == (undefined8 *)0x0) {
                                                    FUN_04980b90(lVar6);
                                                    puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                  }
                                                  uVar7 = *puVar5;
                                                  if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4)
                                                      == 0) {
                                                    thunk_FUN_049a583c();
                                                  }
                                                  FUN_08d895f0(uVar7,0);
                                                  lVar6 = FUN_04a7ee78();
                                                  puVar1 = PTR_DAT_0ac0d7f8;
                                                  if (lVar6 != 0) {
                                                    FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                        PTR_DAT_0ac0dc50);
                                                    lVar6 = *(long *)puVar1;
                                                    puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                    if (puVar5 == (undefined8 *)0x0) {
                                                      FUN_04980b90(lVar6);
                                                      puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                    }
                                                    uVar7 = *puVar5;
                                                    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4)
                                                        == 0) {
                                                      thunk_FUN_049a583c();
                                                    }
                                                    FUN_08d895f0(uVar7,0);
                                                    lVar6 = FUN_04a7ee78();
                                                    puVar1 = PTR_DAT_0ac0d8c8;
                                                    if (lVar6 != 0) {
                                                      FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                          PTR_DAT_0ac0db08);
                                                      lVar6 = *(long *)puVar1;
                                                      puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                      if (puVar5 == (undefined8 *)0x0) {
                                                        FUN_04980b90(lVar6);
                                                        puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                      }
                                                      uVar7 = *puVar5;
                                                      if (*(int *)(*(long *)(unaff_x23 + 0xe0) +
                                                                  0xe4) == 0) {
                                                        thunk_FUN_049a583c();
                                                      }
                                                      FUN_08d895f0(uVar7,0);
                                                      lVar6 = FUN_04a7ee78();
                                                      puVar1 = PTR_DAT_0ac09968;
                                                      if (lVar6 != 0) {
                                                        FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                            PTR_DAT_0ac0dbf0);
                                                        uVar7 = thunk_FUN_04983f60(*(undefined8 *)
                                                                                    puVar1);
                                                        FUN_0527ce9c(uVar7,0);
                                                        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                                                          thunk_FUN_049a583c();
                                                        }
                                                        if (DAT_0b31f3e3 == '\0') {
                                                          FUN_04947ee4(PTR_DAT_0ac09968);
                                                          DAT_0b31f3e3 = '\x01';
                                                        }
                                                        lVar6 = *(long *)puVar1;
                                                        if (*(int *)(lVar6 + 0xe4) == 0) {
                                                          thunk_FUN_049a583c();
                                                          lVar6 = *(long *)puVar1;
                                                        }
                                                        **(undefined8 **)(lVar6 + 0xb8) = uVar7;
                                                        thunk_FUN_049ee3d8(*(undefined8 *)
                                                                            (*(long *)puVar1 + 0xb8)
                                                                           ,uVar7);
                                                        lVar6 = FUN_04a7efd8();
                                                        puVar1 = PTR_DAT_0ac0d9d8;
                                                        if (lVar6 != 0) {
                                                          FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                              PTR_DAT_0ac0dbd8);
                                                          FUN_0527d4b8(0);
                                                          FUN_04a7efd8();
                                                          lVar6 = *(long *)puVar1;
                                                          puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                          if (puVar5 == (undefined8 *)0x0) {
                                                            FUN_04980b90(lVar6);
                                                            puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                          }
                                                          uVar7 = *puVar5;
                                                          if (*(int *)(*(long *)(unaff_x23 + 0xe0) +
                                                                      0xe4) == 0) {
                                                            thunk_FUN_049a583c();
                                                          }
                                                          FUN_08d895f0(uVar7,0);
                                                          lVar6 = FUN_04a7ee78();
                                                          if ((lVar6 != 0) &&
                                                             (lVar6 = FUN_05dd59a0(lVar6,*(
                                                  undefined8 *)PTR_DAT_0ac0dd48),
                                                  puVar1 = PTR_DAT_0ac0d920, lVar6 != 0)) {
                                                    FUN_05dd5dc4(lVar6,*(undefined8 *)
                                                                        (unaff_x20 + 0x38),
                                                                 *(undefined8 *)PTR_DAT_0ac0dd88);
                                                    lVar6 = *(long *)puVar1;
                                                    puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                    if (puVar5 == (undefined8 *)0x0) {
                                                      FUN_04980b90(lVar6);
                                                      puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                    }
                                                    uVar7 = *puVar5;
                                                    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4)
                                                        == 0) {
                                                      thunk_FUN_049a583c();
                                                    }
                                                    FUN_08d895f0(uVar7,0);
                                                    lVar6 = FUN_04a7ee78();
                                                    puVar1 = PTR_DAT_0ac0d9c0;
                                                    if (lVar6 != 0) {
                                                      FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                          PTR_DAT_0ac0dc48);
                                                      lVar6 = *(long *)puVar1;
                                                      puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                      if (puVar5 == (undefined8 *)0x0) {
                                                        FUN_04980b90(lVar6);
                                                        puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                      }
                                                      uVar7 = *puVar5;
                                                      if (*(int *)(*(long *)(unaff_x23 + 0xe0) +
                                                                  0xe4) == 0) {
                                                        thunk_FUN_049a583c();
                                                      }
                                                      FUN_08d895f0(uVar7,0);
                                                      lVar6 = FUN_04a7ee78();
                                                      puVar1 = PTR_DAT_0ac0d8d8;
                                                      if (lVar6 != 0) {
                                                        FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                            PTR_DAT_0ac0dd30);
                                                        lVar6 = *(long *)puVar1;
                                                        puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                        if (puVar5 == (undefined8 *)0x0) {
                                                          FUN_04980b90(lVar6);
                                                          puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                        }
                                                        uVar7 = *puVar5;
                                                        if (*(int *)(*(long *)(unaff_x23 + 0xe0) +
                                                                    0xe4) == 0) {
                                                          thunk_FUN_049a583c();
                                                        }
                                                        FUN_08d895f0(uVar7,0);
                                                        lVar6 = FUN_04a7ee78();
                                                        puVar1 = PTR_DAT_0ac0d890;
                                                        if (lVar6 != 0) {
                                                          FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                              PTR_DAT_0ac0dc00);
                                                          lVar6 = *(long *)puVar1;
                                                          puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                          if (puVar5 == (undefined8 *)0x0) {
                                                            FUN_04980b90(lVar6);
                                                            puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                          }
                                                          uVar7 = *puVar5;
                                                          if (*(int *)(*(long *)(unaff_x23 + 0xe0) +
                                                                      0xe4) == 0) {
                                                            thunk_FUN_049a583c();
                                                          }
                                                          FUN_08d895f0(uVar7,0);
                                                          lVar6 = FUN_04a7ee78();
                                                          puVar1 = PTR_DAT_0ac0d8e8;
                                                          if (lVar6 != 0) {
                                                            FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                                PTR_DAT_0ac0dbb0);
                                                            lVar6 = *(long *)puVar1;
                                                            puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                            if (puVar5 == (undefined8 *)0x0) {
                                                              FUN_04980b90(lVar6);
                                                              puVar5 = *(undefined8 **)
                                                                        (lVar6 + 0x38);
                                                            }
                                                            uVar7 = *puVar5;
                                                            if (*(int *)(*(long *)(unaff_x23 + 0xe0)
                                                                        + 0xe4) == 0) {
                                                              thunk_FUN_049a583c();
                                                            }
                                                            FUN_08d895f0(uVar7,0);
                                                            lVar6 = FUN_04a7ee78();
                                                            puVar3 = PTR_DAT_0ac0da78;
                                                            puVar1 = PTR_DAT_0ac09788;
                                                            if (lVar6 != 0) {
                                                              FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                                  PTR_DAT_0ac0dc10);
                                                              uVar7 = *(undefined8 *)
                                                                       (unaff_x20 + 0x40);
                                                              if (*(int *)(*(long *)puVar1 + 0xe4)
                                                                  == 0) {
                                                                thunk_FUN_049a583c();
                                                              }
                                                              FUN_05cf065c(uVar7,*(undefined8 *)
                                                                                  puVar3);
                                                              lVar6 = FUN_04a7efd8();
                                                              puVar1 = PTR_DAT_0ac0d958;
                                                              if (lVar6 != 0) {
                                                                FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                                    PTR_DAT_0ac0dbe0
                                                                            );
                                                                lVar6 = *(long *)puVar1;
                                                                puVar5 = *(undefined8 **)
                                                                          (lVar6 + 0x38);
                                                                if (puVar5 == (undefined8 *)0x0) {
                                                                  FUN_04980b90(lVar6);
                                                                  puVar5 = *(undefined8 **)
                                                                            (lVar6 + 0x38);
                                                                }
                                                                uVar7 = *puVar5;
                                                                if (*(int *)(*(long *)(unaff_x23 +
                                                                                      0xe0) + 0xe4)
                                                                    == 0) {
                                                                  thunk_FUN_049a583c();
                                                                }
                                                                FUN_08d895f0(uVar7,0);
                                                                lVar6 = FUN_04a7ee78();
                                                                if (lVar6 != 0) {
                                                                  FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_0ac0dc78);
                                                  lVar6 = FUN_05b05f20();
                                                  if (lVar6 != 0) {
                                                    FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                        PTR_DAT_0ac0dab0);
                                                    lVar6 = FUN_05b05f20();
                                                    puVar1 = PTR_DAT_0ac0d8a8;
                                                    if (lVar6 != 0) {
                                                      FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                          PTR_DAT_0ac0dd70);
                                                      lVar6 = *(long *)puVar1;
                                                      puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                      if (puVar5 == (undefined8 *)0x0) {
                                                        FUN_04980b90(lVar6);
                                                        puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                      }
                                                      uVar7 = *puVar5;
                                                      if (*(int *)(*(long *)(unaff_x23 + 0xe0) +
                                                                  0xe4) == 0) {
                                                        thunk_FUN_049a583c();
                                                      }
                                                      FUN_08d895f0(uVar7,0);
                                                      lVar6 = FUN_04a7ee78();
                                                      puVar1 = PTR_DAT_0ac0d908;
                                                      if (lVar6 != 0) {
                                                        FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                            PTR_DAT_0ac0dbc0);
                                                        lVar6 = *(long *)puVar1;
                                                        puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                        if (puVar5 == (undefined8 *)0x0) {
                                                          FUN_04980b90(lVar6);
                                                          puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                        }
                                                        uVar7 = *puVar5;
                                                        if (*(int *)(*(long *)(unaff_x23 + 0xe0) +
                                                                    0xe4) == 0) {
                                                          thunk_FUN_049a583c();
                                                        }
                                                        FUN_08d895f0(uVar7,0);
                                                        lVar6 = FUN_04a7ee78();
                                                        puVar1 = PTR_DAT_0ac0d9e0;
                                                        if (lVar6 != 0) {
                                                          FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                              PTR_DAT_0ac0dc28);
                                                          lVar6 = *(long *)puVar1;
                                                          puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                          if (puVar5 == (undefined8 *)0x0) {
                                                            FUN_04980b90(lVar6);
                                                            puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                          }
                                                          uVar7 = *puVar5;
                                                          if (*(int *)(*(long *)(unaff_x23 + 0xe0) +
                                                                      0xe4) == 0) {
                                                            thunk_FUN_049a583c();
                                                          }
                                                          FUN_08d895f0(uVar7,0);
                                                          lVar6 = FUN_04a7ee78();
                                                          if (lVar6 != 0) {
                                                            FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                                PTR_DAT_0ac0dd50);
                                                            lVar6 = FUN_05b05f20();
                                                            if (lVar6 != 0) {
                                                              FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                                  PTR_DAT_0ac0dcf8);
                                                              lVar6 = FUN_05b05f20();
                                                              if (lVar6 != 0) {
                                                                FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                                    PTR_DAT_0ac0dd00
                                                                            );
                                                                lVar6 = FUN_05b05f20();
                                                                if (lVar6 != 0) {
                                                                  FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_0ac0dd68);
                                                  lVar6 = FUN_05b05f20();
                                                  if (lVar6 != 0) {
                                                    FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                        PTR_DAT_0ac0dcb0);
                                                    lVar6 = FUN_05b05f20();
                                                    puVar1 = PTR_DAT_0ac0d960;
                                                    if (lVar6 != 0) {
                                                      FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                          PTR_DAT_0ac0dbe8);
                                                      lVar6 = *(long *)puVar1;
                                                      puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                      if (puVar5 == (undefined8 *)0x0) {
                                                        FUN_04980b90(lVar6);
                                                        puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                      }
                                                      uVar7 = *puVar5;
                                                      if (*(int *)(*(long *)(unaff_x23 + 0xe0) +
                                                                  0xe4) == 0) {
                                                        thunk_FUN_049a583c();
                                                      }
                                                      FUN_08d895f0(uVar7,0);
                                                      lVar6 = FUN_04a7ee78();
                                                      if (lVar6 != 0) {
                                                        FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                            PTR_DAT_0ac0dc80);
                                                        lVar6 = FUN_05b05f20();
                                                        if (lVar6 != 0) {
                                                          FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                              PTR_DAT_0ac0da80);
                                                          lVar6 = FUN_05b05f20();
                                                          if (lVar6 != 0) {
                                                            FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                                PTR_DAT_0ac0dd20);
                                                            lVar6 = FUN_05b05f20();
                                                            if (lVar6 != 0) {
                                                              FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                                  PTR_DAT_0ac0db68);
                                                              lVar6 = FUN_05b05f20();
                                                              if (lVar6 != 0) {
                                                                FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                                    PTR_DAT_0ac0dc90
                                                                            );
                                                                lVar6 = FUN_05b05f20();
                                                                if (lVar6 != 0) {
                                                                  FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_0ac0dc98);
                                                  lVar6 = FUN_05b05f20();
                                                  puVar1 = PTR_DAT_0ac0d930;
                                                  if (lVar6 != 0) {
                                                    FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                        PTR_DAT_0ac0dd18);
                                                    lVar6 = *(long *)puVar1;
                                                    puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                    if (puVar5 == (undefined8 *)0x0) {
                                                      FUN_04980b90(lVar6);
                                                      puVar5 = *(undefined8 **)(lVar6 + 0x38);
                                                    }
                                                    uVar7 = *puVar5;
                                                    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4)
                                                        == 0) {
                                                      thunk_FUN_049a583c();
                                                    }
                                                    FUN_08d895f0(uVar7,0);
                                                    lVar6 = FUN_04a7ee78();
                                                    if (lVar6 != 0) {
                                                      FUN_05dd59a0(lVar6,*(undefined8 *)
                                                                          PTR_DAT_0ac0dc58);
                                                      FUN_04abfbd0();
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
  FUN_0494818c();
}


