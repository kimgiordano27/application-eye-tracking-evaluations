/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ProxyFlex<object,-object>$$get_Flex
ENTRY_POINT: 0435a6bc
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ProxyFlex<object,_object>__get_Flex
               (ulong param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long unaff_x21;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  
  if ((param_1 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d39b48);
    FUN_02f07e70(PTR_DAT_06d39b50);
    FUN_02f07e70(PTR_DAT_06d39b58);
    FUN_02f07e70(PTR_DAT_06d397c0);
    *(undefined1 *)(unaff_x21 + 0x10b) = 1;
  }
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  in_stack_00000008 = 0;
  plVar6 = (long *)(param_3 + 0x20);
  lVar3 = *plVar6;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02eea768();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02eea768();
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  lVar3 = *plVar6;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02eea768();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02eea768();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar3 != 0) {
    lVar4 = *plVar6;
    uVar1 = *param_2;
    uVar2 = param_2[1];
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02eea768();
    }
    FUN_04b78380(lVar3,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x1f8));
    lVar3 = *plVar6;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02eea768();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02eea768();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x28);
    if (lVar3 != 0) {
      FUN_04b885f8(lVar3,*param_2,param_2[1],*(undefined8 *)PTR_DAT_06d39b50);
      lVar3 = *plVar6;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02eea768();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02eea768();
      }
      if (**(long **)(lVar3 + 0xb8) != 0) {
        FUN_0520a108(**(long **)(lVar3 + 0xb8),*param_2,param_2[1],*(undefined8 *)PTR_DAT_06d397c0);
        lVar3 = *plVar6;
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02eea768();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02eea768();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x30);
        if (lVar3 != 0) {
          lVar4 = *plVar6;
          uVar1 = *param_2;
          uVar2 = param_2[1];
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_02eea768();
          }
          FUN_04b885f8(lVar3,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x288));
          lVar3 = *plVar6;
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_02eea768();
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_02eea768();
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x38);
          if (lVar3 != 0) {
            lVar4 = *plVar6;
            uVar1 = *param_2;
            uVar2 = param_2[1];
            if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_02eea768();
            }
            uVar5 = FUN_04b88c10(lVar3,uVar1,uVar2,&stack0x00000018,
                                 *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x290));
            if ((uVar5 & 1) != 0) {
              lVar3 = *plVar6;
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_02eea768();
              }
              lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_02eea768();
              }
              if (*(int *)(lVar3 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              lVar3 = *plVar6;
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_02eea768();
              }
              lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_02eea768();
              }
              lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x38);
              if (lVar3 == 0) goto LAB_0435ac10;
              lVar4 = *plVar6;
              uVar1 = *param_2;
              uVar2 = param_2[1];
              if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_02eea768();
              }
              FUN_04b885f8(lVar3,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x2a0));
              lVar3 = in_stack_00000018;
              if (in_stack_00000018 == 0) goto LAB_0435ac10;
              uVar1 = *param_2;
              uVar2 = param_2[1];
              if ((*(byte *)(*plVar6 + 0x135) & 1) == 0) {
                FUN_02eea768();
              }
              (**(code **)(lVar3 + 0x18))
                        (*(undefined8 *)(lVar3 + 0x40),uVar1,uVar2,*(undefined8 *)(lVar3 + 0x28));
            }
            lVar3 = *plVar6;
            if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_02eea768();
            }
            lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
            if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_02eea768();
            }
            if (*(int *)(lVar3 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
            }
            lVar3 = *plVar6;
            if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_02eea768();
            }
            lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
            if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_02eea768();
            }
            lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x48);
            if (lVar3 != 0) {
              lVar4 = *plVar6;
              uVar1 = *param_2;
              uVar2 = param_2[1];
              if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_02eea768();
              }
              uVar5 = FUN_04b88c10(lVar3,uVar1,uVar2,&stack0x00000010,
                                   *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x2b8));
              if ((uVar5 & 1) != 0) {
                lVar3 = *plVar6;
                if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                  lVar3 = FUN_02eea768();
                }
                lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
                if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                  lVar3 = FUN_02eea768();
                }
                if (*(int *)(lVar3 + 0xe0) == 0) {
                  thunk_FUN_02f12b58();
                }
                lVar3 = *plVar6;
                if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                  lVar3 = FUN_02eea768();
                }
                lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
                if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                  lVar3 = FUN_02eea768();
                }
                lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x48);
                if (lVar3 == 0) goto LAB_0435ac10;
                lVar4 = *plVar6;
                uVar1 = *param_2;
                uVar2 = param_2[1];
                if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                  lVar4 = FUN_02eea768();
                }
                FUN_04b885f8(lVar3,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x2c0));
                lVar3 = in_stack_00000010;
                if (in_stack_00000010 == 0) goto LAB_0435ac10;
                uVar1 = *param_2;
                uVar2 = param_2[1];
                if ((*(byte *)(*plVar6 + 0x135) & 1) == 0) {
                  FUN_02eea768();
                }
                (**(code **)(lVar3 + 0x18))
                          (*(undefined8 *)(lVar3 + 0x40),uVar1,uVar2,*(undefined8 *)(lVar3 + 0x28));
              }
              lVar3 = *plVar6;
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_02eea768();
              }
              lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_02eea768();
              }
              if (*(int *)(lVar3 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              lVar3 = *plVar6;
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_02eea768();
              }
              lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_02eea768();
              }
              lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x58);
              if (lVar3 != 0) {
                uVar5 = FUN_04b88c10(lVar3,*param_2,param_2[1],&stack0x00000008,
                                     *(undefined8 *)PTR_DAT_06d39b58);
                if ((uVar5 & 1) == 0) {
                  return;
                }
                lVar3 = *plVar6;
                if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                  lVar3 = FUN_02eea768();
                }
                lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
                if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                  lVar3 = FUN_02eea768();
                }
                if (*(int *)(lVar3 + 0xe0) == 0) {
                  thunk_FUN_02f12b58();
                }
                lVar3 = *plVar6;
                if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                  lVar3 = FUN_02eea768();
                }
                lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
                if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                  lVar3 = FUN_02eea768();
                }
                lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x58);
                if ((lVar3 != 0) &&
                   (FUN_04b885f8(lVar3,*param_2,param_2[1],*(undefined8 *)PTR_DAT_06d39b48),
                   in_stack_00000008 != 0)) {
                  (**(code **)(in_stack_00000008 + 0x18))
                            (*(undefined8 *)(in_stack_00000008 + 0x40),*param_2,param_2[1],
                             *(undefined8 *)(in_stack_00000008 + 0x28));
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0435ac10:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


