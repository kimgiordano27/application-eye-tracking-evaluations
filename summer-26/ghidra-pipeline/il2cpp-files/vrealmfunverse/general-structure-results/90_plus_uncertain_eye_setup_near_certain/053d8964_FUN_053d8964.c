/*
FUNCTION_NAME: FUN_053d8964
ENTRY_POINT: 053d8964
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 118
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_3;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_21
*/


/* WARNING: Removing unreachable block (ram,0x053d9504) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_053d8964(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 local_38;
  char local_2c [4];
  undefined8 local_28;
  
  if ((DAT_066d0a2d & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_0631e400);
    FUN_02b3c81c(OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo);
    FUN_02b3c81c(PTR_DAT_0631e428);
    FUN_02b3c81c(PTR_DAT_0632ce70);
    FUN_02b3c81c(OVRPlugin_OVRP_1_74_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_75_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_76_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_78_0_TypeInfo);
    FUN_02b3c81c(PTR_DAT_06336f88);
    FUN_02b3c81c(PTR_DAT_0632ceb8);
    FUN_02b3c81c(PTR_DAT_06336f98);
    FUN_02b3c81c(UnityEngine_InputSystem_LowLevel_GamepadButton_var);
    FUN_02b3c81c(OVRPlugin_OVRP_1_79_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_7_0_TypeInfo);
    FUN_02b3c81c(PTR_DAT_0632cdb8);
    FUN_02b3c81c(OVRPlugin_OVRP_1_81_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_82_0_TypeInfo);
    FUN_02b3c81c(PTR_DAT_0632cdc0);
    FUN_02b3c81c(PTR_DAT_0632cdc8);
    FUN_02b3c81c(PTR_DAT_0632cdd0);
    FUN_02b3c81c(PTR_DAT_0632cdd8);
    FUN_02b3c81c(PTR_DAT_063349a0);
    FUN_02b3c81c(PTR_DAT_063345a8);
    FUN_02b3c81c(PTR_DAT_0632cde0);
    FUN_02b3c81c(PTR_DAT_0632cde8);
    FUN_02b3c81c(OVRPlugin_OVRP_1_83_0_TypeInfo);
    FUN_02b3c81c(System_Linq_Expressions_Interpreter_MulInstruction_MulInt64_TypeInfo);
    FUN_02b3c81c(PTR_DAT_0632cdf0);
    FUN_02b3c81c(OVRPlugin_OVRP_1_84_0_TypeInfo);
    FUN_02b3c81c(PTR_DAT_0632cdf8);
    FUN_02b3c81c(PTR_DAT_0632ce00);
    FUN_02b3c81c(PTR_DAT_0632d250);
    FUN_02b3c81c(PTR_DAT_0632ce08);
    FUN_02b3c81c(System_Func<TResult>_var);
    FUN_02b3c81c(OVRPlugin_OVRP_1_85_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_86_0_TypeInfo);
    FUN_02b3c81c(PTR_DAT_0632ce10);
    FUN_02b3c81c(PTR_DAT_0632ce18);
    FUN_02b3c81c(PTR_DAT_0632ce20);
    FUN_02b3c81c(PTR_DAT_0632ce28);
    FUN_02b3c81c(OVRPlugin_OVRP_1_87_0_TypeInfo);
    DAT_066d0a2d = 1;
  }
  local_28 = 0;
  local_2c[0] = '\0';
  local_38 = 0;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar2 = FUN_04c08c14(param_1,*(undefined8 *)PTR_DAT_063349a0,4,0);
  puVar1 = OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo;
  uVar5 = 0;
  if ((uVar2 & 1) != 0) {
    lVar3 = *(long *)OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar1;
    }
    local_2c[0] = '\0';
    local_28 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x60);
    FUN_04ddecfc(local_28,local_2c,0);
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar1;
    }
    if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x28) == 0) {
      uVar5 = thunk_FUN_02b79644(*(undefined8 *)OVRPlugin_OVRP_1_78_0_TypeInfo);
      FUN_0452d044(uVar5,*(undefined8 *)OVRPlugin_OVRP_1_76_0_TypeInfo);
      lVar3 = *(long *)puVar1;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar3 = *(long *)puVar1;
      }
      puVar4 = (undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x28);
      *puVar4 = uVar5;
      thunk_FUN_02bb0e9c(puVar4,uVar5);
      lVar3 = *(long *)puVar1;
    }
    local_38 = 0;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar1;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x28);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar2 = FUN_0452f928(lVar3,param_1,&local_38,*(undefined8 *)OVRPlugin_OVRP_1_75_0_TypeInfo);
    if ((uVar2 & 1) == 0) {
      uVar5 = FUN_04c0e450(param_1,7,0);
      uVar2 = thunk_FUN_04c08854(uVar5,*(undefined8 *)PTR_DAT_0632ce18,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = thunk_FUN_04c08854(uVar5,*(undefined8 *)PTR_DAT_0632cde0,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = thunk_FUN_04c08854(uVar5,*(undefined8 *)PTR_DAT_0632cde8,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = thunk_FUN_04c08854(uVar5,*(undefined8 *)PTR_DAT_0632cdb8,0);
            if ((uVar2 & 1) == 0) {
              uVar2 = thunk_FUN_04c08854(uVar5,*(undefined8 *)PTR_DAT_0632cdf0,0);
              if ((uVar2 & 1) == 0) {
                uVar2 = thunk_FUN_04c08854(uVar5,*(undefined8 *)PTR_DAT_0632cdc8,0);
                if ((uVar2 & 1) == 0) {
                  uVar2 = thunk_FUN_04c08854(uVar5,*(undefined8 *)PTR_DAT_0632ce10,0);
                  if ((uVar2 & 1) == 0) {
                    uVar2 = thunk_FUN_04c08854(uVar5,*(undefined8 *)PTR_DAT_0632cdf8,0);
                    if ((uVar2 & 1) == 0) {
                      uVar2 = thunk_FUN_04c08854(uVar5,*(undefined8 *)PTR_DAT_0632ce00,0);
                      if ((uVar2 & 1) == 0) {
                        uVar2 = thunk_FUN_04c08854(uVar5,*(undefined8 *)PTR_DAT_0632ce08,0);
                        if ((uVar2 & 1) == 0) {
                          uVar2 = thunk_FUN_04c08854(uVar5,*(undefined8 *)PTR_DAT_0632ce20,0);
                          if ((uVar2 & 1) == 0) {
                            uVar2 = thunk_FUN_04c08854(uVar5,*(undefined8 *)PTR_DAT_0632ce28,0);
                            if ((uVar2 & 1) == 0) {
                              uVar2 = thunk_FUN_04c08854(uVar5,*(undefined8 *)PTR_DAT_0632cdd8,0);
                              if ((uVar2 & 1) == 0) {
                                uVar2 = thunk_FUN_04c08854(uVar5,*(undefined8 *)PTR_DAT_0632cdd0,0);
                                if ((uVar2 & 1) == 0) {
                                  uVar2 = thunk_FUN_04c08854(uVar5,*(undefined8 *)PTR_DAT_0632d250,0
                                                            );
                                  if ((uVar2 & 1) == 0) {
                                    uVar2 = thunk_FUN_04c08854(uVar5,*(undefined8 *)
                                                                      OVRPlugin_OVRP_1_83_0_TypeInfo
                                                               ,0);
                                    if ((uVar2 & 1) == 0) {
                                      uVar2 = thunk_FUN_04c08854(uVar5,*(undefined8 *)
                                                                                                                                                
                                                  OVRPlugin_OVRP_1_86_0_TypeInfo,0);
                                      if ((uVar2 & 1) == 0) {
                                        uVar2 = thunk_FUN_04c08854(uVar5,*(undefined8 *)
                                                                          PTR_DAT_0632cdc0,0);
                                        if ((uVar2 & 1) == 0) {
                                          uVar2 = thunk_FUN_04c08854(uVar5,*(undefined8 *)
                                                                                                                                                        
                                                  System_Linq_Expressions_Interpreter_MulInstruction_MulInt64_TypeInfo
                                                  ,0);
                                          if ((uVar2 & 1) == 0) {
                                            uVar2 = thunk_FUN_04c08854(uVar5,*(undefined8 *)
                                                                                                                                                            
                                                  OVRPlugin_OVRP_1_87_0_TypeInfo,0);
                                            if ((uVar2 & 1) == 0) {
                                              uVar2 = thunk_FUN_04c08854(uVar5,*(undefined8 *)
                                                                                                                                                                
                                                  OVRPlugin_OVRP_1_84_0_TypeInfo,0);
                                              if ((uVar2 & 1) == 0) {
                                                uVar2 = thunk_FUN_04c08854(uVar5,*(undefined8 *)
                                                                                  PTR_DAT_063345a8,0
                                                                          );
                                                if ((uVar2 & 1) == 0) {
                                                  uVar2 = thunk_FUN_04c08854(uVar5,*(undefined8 *)
                                                                                                                                                                        
                                                  OVRPlugin_OVRP_1_82_0_TypeInfo,0);
                                                  if ((uVar2 & 1) == 0) {
                                                    uVar2 = thunk_FUN_04c08854(uVar5,*(undefined8 *)
                                                                                                                                                                            
                                                  System_Func<TResult>_var,0);
                                                  if ((uVar2 & 1) == 0) {
                                                    uVar2 = thunk_FUN_04c08854(uVar5,*(undefined8 *)
                                                                                                                                                                            
                                                  OVRPlugin_OVRP_1_81_0_TypeInfo,0);
                                                  if ((uVar2 & 1) == 0) {
                                                    uVar2 = thunk_FUN_04c08854(uVar5,*(undefined8 *)
                                                                                                                                                                            
                                                  OVRPlugin_OVRP_1_85_0_TypeInfo,0);
                                                  if ((uVar2 & 1) == 0) {
                                                    uVar5 = 0;
                                                  }
                                                  else {
                                                    uVar5 = *(undefined8 *)
                                                             OVRPlugin_OVRP_1_79_0_TypeInfo;
                                                    if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0)
                                                                + 0xe4) == 0) {
                                                      thunk_FUN_02b9ad44();
                                                    }
                                                    uVar5 = FUN_04d8a7b0(uVar5,0);
                                                  }
                                                  }
                                                  else {
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_InputSystem_LowLevel_GamepadButton_var
                                                  ;
                                                  if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) +
                                                              0xe4) == 0) {
                                                    thunk_FUN_02b9ad44();
                                                  }
                                                  uVar5 = FUN_04d8a7b0(uVar5,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar3 = *(long *)(PTR_DAT_06312310 + 0xa0);
                                                    if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0)
                                                                + 0xe4) == 0) {
                                                      thunk_FUN_02b9ad44();
                                                    }
                                                    uVar5 = FUN_04d8a7b0(lVar3 + 0x20,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar3 = *(long *)(PTR_DAT_06312310 + 0x250);
                                                    if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0)
                                                                + 0xe4) == 0) {
                                                      thunk_FUN_02b9ad44();
                                                    }
                                                    uVar5 = FUN_04d8a7b0(lVar3 + 0x20,0);
                                                  }
                                                }
                                                else {
                                                  lVar3 = *(long *)(PTR_DAT_06312310 + 0x98);
                                                  if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) +
                                                              0xe4) == 0) {
                                                    thunk_FUN_02b9ad44();
                                                  }
                                                  uVar5 = FUN_04d8a7b0(lVar3 + 0x20,0);
                                                }
                                              }
                                              else {
                                                uVar5 = *(undefined8 *)OVRPlugin_OVRP_1_7_0_TypeInfo
                                                ;
                                                if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) +
                                                            0xe4) == 0) {
                                                  thunk_FUN_02b9ad44();
                                                }
                                                uVar5 = FUN_04d8a7b0(uVar5,0);
                                              }
                                            }
                                            else {
                                              uVar5 = *(undefined8 *)PTR_DAT_06336f98;
                                              if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4
                                                          ) == 0) {
                                                thunk_FUN_02b9ad44();
                                              }
                                              uVar5 = FUN_04d8a7b0(uVar5,0);
                                            }
                                          }
                                          else {
                                            uVar5 = *(undefined8 *)PTR_DAT_06336f88;
                                            if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4)
                                                == 0) {
                                              thunk_FUN_02b9ad44();
                                            }
                                            uVar5 = FUN_04d8a7b0(uVar5,0);
                                          }
                                        }
                                        else {
                                          uVar5 = *(undefined8 *)PTR_DAT_0632ceb8;
                                          if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) ==
                                              0) {
                                            thunk_FUN_02b9ad44();
                                          }
                                          uVar5 = FUN_04d8a7b0(uVar5,0);
                                        }
                                      }
                                      else {
                                        lVar3 = *(long *)(PTR_DAT_06312310 + 0x10);
                                        if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0
                                           ) {
                                          thunk_FUN_02b9ad44();
                                        }
                                        uVar5 = FUN_04d8a7b0(lVar3 + 0x20,0);
                                      }
                                    }
                                    else {
                                      uVar5 = *(undefined8 *)PTR_DAT_0631e400;
                                      if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0)
                                      {
                                        thunk_FUN_02b9ad44();
                                      }
                                      uVar5 = FUN_04d8a7b0(uVar5,0);
                                    }
                                  }
                                  else {
                                    lVar3 = *(long *)(PTR_DAT_06312310 + 0x90);
                                    if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
                                      thunk_FUN_02b9ad44();
                                    }
                                    uVar5 = FUN_04d8a7b0(lVar3 + 0x20,0);
                                  }
                                }
                                else {
                                  uVar5 = *(undefined8 *)PTR_DAT_0631e428;
                                  if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
                                    thunk_FUN_02b9ad44();
                                  }
                                  uVar5 = FUN_04d8a7b0(uVar5,0);
                                }
                              }
                              else {
                                uVar5 = *(undefined8 *)PTR_DAT_0632ce70;
                                if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
                                  thunk_FUN_02b9ad44();
                                }
                                uVar5 = FUN_04d8a7b0(uVar5,0);
                              }
                            }
                            else {
                              lVar3 = *(long *)(PTR_DAT_06312310 + 0x80);
                              if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
                                thunk_FUN_02b9ad44();
                              }
                              uVar5 = FUN_04d8a7b0(lVar3 + 0x20,0);
                            }
                          }
                          else {
                            lVar3 = *(long *)(PTR_DAT_06312310 + 0x78);
                            if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
                              thunk_FUN_02b9ad44();
                            }
                            uVar5 = FUN_04d8a7b0(lVar3 + 0x20,0);
                          }
                        }
                        else {
                          lVar3 = *(long *)(PTR_DAT_06312310 + 0x70);
                          if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
                            thunk_FUN_02b9ad44();
                          }
                          uVar5 = FUN_04d8a7b0(lVar3 + 0x20,0);
                        }
                      }
                      else {
                        lVar3 = *(long *)(PTR_DAT_06312310 + 0x68);
                        if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
                          thunk_FUN_02b9ad44();
                        }
                        uVar5 = FUN_04d8a7b0(lVar3 + 0x20,0);
                      }
                    }
                    else {
                      lVar3 = *(long *)(PTR_DAT_06312310 + 0x50);
                      if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
                        thunk_FUN_02b9ad44();
                      }
                      uVar5 = FUN_04d8a7b0(lVar3 + 0x20,0);
                    }
                  }
                  else {
                    lVar3 = *(long *)(PTR_DAT_06312310 + 0x48);
                    if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                    }
                    uVar5 = FUN_04d8a7b0(lVar3 + 0x20,0);
                  }
                }
                else {
                  lVar3 = *(long *)(PTR_DAT_06312310 + 0x40);
                  if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                  }
                  uVar5 = FUN_04d8a7b0(lVar3 + 0x20,0);
                }
              }
              else {
                lVar3 = *(long *)(PTR_DAT_06312310 + 0x38);
                if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                }
                uVar5 = FUN_04d8a7b0(lVar3 + 0x20,0);
              }
            }
            else {
              lVar3 = *(long *)(PTR_DAT_06312310 + 0x18);
              if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              uVar5 = FUN_04d8a7b0(lVar3 + 0x20,0);
            }
          }
          else {
            lVar3 = *(long *)(PTR_DAT_06312310 + 0x30);
            if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            uVar5 = FUN_04d8a7b0(lVar3 + 0x20,0);
          }
        }
        else {
          lVar3 = *(long *)(PTR_DAT_06312310 + 0x28);
          if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar5 = FUN_04d8a7b0(lVar3 + 0x20,0);
        }
      }
      else {
        lVar3 = *(long *)(PTR_DAT_06312310 + 0x88);
        if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar5 = FUN_04d8a7b0(lVar3 + 0x20,0);
      }
      if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar2 = FUN_04d94540(uVar5,0,0);
      if ((uVar2 & 1) != 0) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_053e1620(uVar5,&local_38);
      }
      lVar3 = *(long *)puVar1;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar3 = *(long *)puVar1;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x28);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_0452ddc0(lVar3,param_1,local_38,*(undefined8 *)OVRPlugin_OVRP_1_74_0_TypeInfo);
    }
    uVar5 = local_38;
    if (local_2c[0] != '\0') {
      thunk_FUN_02b4a54c(local_28,0);
    }
  }
  return uVar5;
}


