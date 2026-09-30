/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ProxyFlex<object,-object>$$.ctor
ENTRY_POINT: 0435a754
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


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ProxyFlex<object,_object>___ctor
               (ulong param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long lVar5;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_02eea768();
  }
  lVar5 = *(long *)(*(long *)(param_2 + 0xb8) + 8);
  if (lVar5 != 0) {
    lVar3 = *unaff_x20;
    uVar1 = *unaff_x19;
    uVar2 = unaff_x19[1];
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02eea768();
    }
    FUN_04b78380(lVar5,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x1f8));
    lVar5 = *unaff_x20;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02eea768();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02eea768();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x28);
    if (lVar5 != 0) {
      FUN_04b885f8(lVar5,*unaff_x19,unaff_x19[1],*(undefined8 *)PTR_DAT_06d39b50);
      lVar5 = *unaff_x20;
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02eea768();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02eea768();
      }
      if (**(long **)(lVar5 + 0xb8) != 0) {
        FUN_0520a108(**(long **)(lVar5 + 0xb8),*unaff_x19,unaff_x19[1],
                     *(undefined8 *)PTR_DAT_06d397c0);
        lVar5 = *unaff_x20;
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02eea768();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02eea768();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x30);
        if (lVar5 != 0) {
          lVar3 = *unaff_x20;
          uVar1 = *unaff_x19;
          uVar2 = unaff_x19[1];
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_02eea768();
          }
          FUN_04b885f8(lVar5,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x288));
          lVar5 = *unaff_x20;
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_02eea768();
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_02eea768();
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x38);
          if (lVar5 != 0) {
            lVar3 = *unaff_x20;
            uVar1 = *unaff_x19;
            uVar2 = unaff_x19[1];
            if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_02eea768();
            }
            uVar4 = FUN_04b88c10(lVar5,uVar1,uVar2,&stack0x00000018,
                                 *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x290));
            if ((uVar4 & 1) != 0) {
              lVar5 = *unaff_x20;
              if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                lVar5 = FUN_02eea768();
              }
              lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
              if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                lVar5 = FUN_02eea768();
              }
              if (*(int *)(lVar5 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              lVar5 = *unaff_x20;
              if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                lVar5 = FUN_02eea768();
              }
              lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
              if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                lVar5 = FUN_02eea768();
              }
              lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x38);
              if (lVar5 == 0) goto LAB_0435ac10;
              lVar3 = *unaff_x20;
              uVar1 = *unaff_x19;
              uVar2 = unaff_x19[1];
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_02eea768();
              }
              FUN_04b885f8(lVar5,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x2a0));
              lVar5 = in_stack_00000018;
              if (in_stack_00000018 == 0) goto LAB_0435ac10;
              uVar1 = *unaff_x19;
              uVar2 = unaff_x19[1];
              if ((*(byte *)(*unaff_x20 + 0x135) & 1) == 0) {
                FUN_02eea768();
              }
              (**(code **)(lVar5 + 0x18))
                        (*(undefined8 *)(lVar5 + 0x40),uVar1,uVar2,*(undefined8 *)(lVar5 + 0x28));
            }
            lVar5 = *unaff_x20;
            if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_02eea768();
            }
            lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
            if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_02eea768();
            }
            if (*(int *)(lVar5 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
            }
            lVar5 = *unaff_x20;
            if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_02eea768();
            }
            lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
            if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_02eea768();
            }
            lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x48);
            if (lVar5 != 0) {
              lVar3 = *unaff_x20;
              uVar1 = *unaff_x19;
              uVar2 = unaff_x19[1];
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_02eea768();
              }
              uVar4 = FUN_04b88c10(lVar5,uVar1,uVar2,&stack0x00000010,
                                   *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x2b8));
              if ((uVar4 & 1) != 0) {
                lVar5 = *unaff_x20;
                if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                  lVar5 = FUN_02eea768();
                }
                lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
                if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                  lVar5 = FUN_02eea768();
                }
                if (*(int *)(lVar5 + 0xe0) == 0) {
                  thunk_FUN_02f12b58();
                }
                lVar5 = *unaff_x20;
                if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                  lVar5 = FUN_02eea768();
                }
                lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
                if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                  lVar5 = FUN_02eea768();
                }
                lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x48);
                if (lVar5 == 0) goto LAB_0435ac10;
                lVar3 = *unaff_x20;
                uVar1 = *unaff_x19;
                uVar2 = unaff_x19[1];
                if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                  lVar3 = FUN_02eea768();
                }
                FUN_04b885f8(lVar5,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x2c0));
                lVar5 = in_stack_00000010;
                if (in_stack_00000010 == 0) goto LAB_0435ac10;
                uVar1 = *unaff_x19;
                uVar2 = unaff_x19[1];
                if ((*(byte *)(*unaff_x20 + 0x135) & 1) == 0) {
                  FUN_02eea768();
                }
                (**(code **)(lVar5 + 0x18))
                          (*(undefined8 *)(lVar5 + 0x40),uVar1,uVar2,*(undefined8 *)(lVar5 + 0x28));
              }
              lVar5 = *unaff_x20;
              if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                lVar5 = FUN_02eea768();
              }
              lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
              if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                lVar5 = FUN_02eea768();
              }
              if (*(int *)(lVar5 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              lVar5 = *unaff_x20;
              if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                lVar5 = FUN_02eea768();
              }
              lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
              if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                lVar5 = FUN_02eea768();
              }
              lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x58);
              if (lVar5 != 0) {
                uVar4 = FUN_04b88c10(lVar5,*unaff_x19,unaff_x19[1],&stack0x00000008,
                                     *(undefined8 *)PTR_DAT_06d39b58);
                if ((uVar4 & 1) == 0) {
                  return;
                }
                lVar5 = *unaff_x20;
                if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                  lVar5 = FUN_02eea768();
                }
                lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
                if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                  lVar5 = FUN_02eea768();
                }
                if (*(int *)(lVar5 + 0xe0) == 0) {
                  thunk_FUN_02f12b58();
                }
                lVar5 = *unaff_x20;
                if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                  lVar5 = FUN_02eea768();
                }
                lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
                if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                  lVar5 = FUN_02eea768();
                }
                lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x58);
                if ((lVar5 != 0) &&
                   (FUN_04b885f8(lVar5,*unaff_x19,unaff_x19[1],*(undefined8 *)PTR_DAT_06d39b48),
                   in_stack_00000008 != 0)) {
                  (**(code **)(in_stack_00000008 + 0x18))
                            (*(undefined8 *)(in_stack_00000008 + 0x40),*unaff_x19,unaff_x19[1],
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


