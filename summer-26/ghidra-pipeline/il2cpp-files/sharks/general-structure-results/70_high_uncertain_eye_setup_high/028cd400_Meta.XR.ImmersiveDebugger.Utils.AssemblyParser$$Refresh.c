/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.AssemblyParser$$Refresh
ENTRY_POINT: 028cd400
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_AssemblyParser__Refresh(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  
  if ((DAT_03a2459b & 1) == 0) {
    FUN_017fc350(PTR_DAT_037fb698);
    FUN_017fc350(PTR_DAT_037fb6a0);
    FUN_017fc350(PTR_DAT_037fb6a8);
                    /* try { // try from 028cd448 to 029cd457 has its CatchHandler @ 028cd458 */
    FUN_017fc350(PTR_DAT_037faae0);
    DAT_03a2459b = 1;
  }
                    /* catch() { ... } // from try @ 028cd3cc with catch @ 028cd458
                       catch() { ... } // from try @ 028cd448 with catch @ 028cd458 */
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
                    /* try { // try from 028cd45c to 029cd45f has its CatchHandler @ 028cd468 */
  in_stack_00000008 = 0;
                    /* try { // try from 028cd460 to 029cd46b has its CatchHandler @ 028cd314 */
  plVar6 = (long *)(param_2 + 0x20);
  lVar3 = *plVar6;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 028cd45c with catch @ 028cd468
                        */
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  lVar3 = *plVar6;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar3 != 0) {
    lVar4 = *plVar6;
    uVar1 = *param_1;
    uVar2 = param_1[1];
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4();
    }
    FUN_02157fa4(lVar3,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x1f8));
    lVar3 = *plVar6;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0185daa4();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0185daa4();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x28);
    if (lVar3 != 0) {
      FUN_02171ca8(lVar3,*param_1,param_1[1],*(undefined8 *)PTR_DAT_037fb6a0);
      lVar3 = *plVar6;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0185daa4();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0185daa4();
      }
      if (**(long **)(lVar3 + 0xb8) != 0) {
        FUN_024c5210(**(long **)(lVar3 + 0xb8),*param_1,param_1[1],*(undefined8 *)PTR_DAT_037faae0);
        lVar3 = *plVar6;
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_0185daa4();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_0185daa4();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x30);
        if (lVar3 != 0) {
          lVar4 = *plVar6;
          uVar1 = *param_1;
          uVar2 = param_1[1];
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_0185daa4();
          }
          FUN_02171ca8(lVar3,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x288));
          lVar3 = *plVar6;
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_0185daa4();
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_0185daa4();
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x38);
          if (lVar3 != 0) {
            lVar4 = *plVar6;
            uVar1 = *param_1;
            uVar2 = param_1[1];
            if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_0185daa4();
            }
            uVar5 = FUN_021722c0(lVar3,uVar1,uVar2,&stack0x00000018,
                                 *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x290));
            if ((uVar5 & 1) != 0) {
              lVar3 = *plVar6;
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_0185daa4();
              }
              lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_0185daa4();
              }
              if (*(int *)(lVar3 + 0xe0) == 0) {
                thunk_FUN_01843fdc();
              }
              lVar3 = *plVar6;
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_0185daa4();
              }
              lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_0185daa4();
              }
              lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x38);
              if (lVar3 == 0) goto LAB_028cd968;
              lVar4 = *plVar6;
              uVar1 = *param_1;
              uVar2 = param_1[1];
              if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_0185daa4();
              }
              FUN_02171ca8(lVar3,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x2a0));
              lVar3 = in_stack_00000018;
              if (in_stack_00000018 == 0) goto LAB_028cd968;
              uVar1 = *param_1;
              uVar2 = param_1[1];
              if ((*(byte *)(*plVar6 + 0x135) & 1) == 0) {
                FUN_0185daa4();
              }
              (**(code **)(lVar3 + 0x18))
                        (*(undefined8 *)(lVar3 + 0x40),uVar1,uVar2,*(undefined8 *)(lVar3 + 0x28));
            }
            lVar3 = *plVar6;
            if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_0185daa4();
            }
            lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
            if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_0185daa4();
            }
            if (*(int *)(lVar3 + 0xe0) == 0) {
              thunk_FUN_01843fdc();
            }
            lVar3 = *plVar6;
            if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_0185daa4();
            }
            lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
            if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_0185daa4();
            }
            lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x48);
            if (lVar3 != 0) {
              lVar4 = *plVar6;
              uVar1 = *param_1;
              uVar2 = param_1[1];
              if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_0185daa4();
              }
              uVar5 = FUN_021722c0(lVar3,uVar1,uVar2,&stack0x00000010,
                                   *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x2b8));
              if ((uVar5 & 1) != 0) {
                lVar3 = *plVar6;
                if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                  lVar3 = FUN_0185daa4();
                }
                lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
                if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                  lVar3 = FUN_0185daa4();
                }
                if (*(int *)(lVar3 + 0xe0) == 0) {
                  thunk_FUN_01843fdc();
                }
                lVar3 = *plVar6;
                if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                  lVar3 = FUN_0185daa4();
                }
                lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
                if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                  lVar3 = FUN_0185daa4();
                }
                lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x48);
                if (lVar3 == 0) goto LAB_028cd968;
                lVar4 = *plVar6;
                uVar1 = *param_1;
                uVar2 = param_1[1];
                if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                  lVar4 = FUN_0185daa4();
                }
                FUN_02171ca8(lVar3,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x2c0));
                lVar3 = in_stack_00000010;
                if (in_stack_00000010 == 0) goto LAB_028cd968;
                uVar1 = *param_1;
                uVar2 = param_1[1];
                if ((*(byte *)(*plVar6 + 0x135) & 1) == 0) {
                  FUN_0185daa4();
                }
                (**(code **)(lVar3 + 0x18))
                          (*(undefined8 *)(lVar3 + 0x40),uVar1,uVar2,*(undefined8 *)(lVar3 + 0x28));
              }
              lVar3 = *plVar6;
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_0185daa4();
              }
              lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_0185daa4();
              }
              if (*(int *)(lVar3 + 0xe0) == 0) {
                thunk_FUN_01843fdc();
              }
              lVar3 = *plVar6;
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_0185daa4();
              }
              lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_0185daa4();
              }
              lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x58);
              if (lVar3 != 0) {
                uVar5 = FUN_021722c0(lVar3,*param_1,param_1[1],&stack0x00000008,
                                     *(undefined8 *)PTR_DAT_037fb6a8);
                if ((uVar5 & 1) == 0) {
                  return;
                }
                lVar3 = *plVar6;
                if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                  lVar3 = FUN_0185daa4();
                }
                lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
                if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                  lVar3 = FUN_0185daa4();
                }
                if (*(int *)(lVar3 + 0xe0) == 0) {
                  thunk_FUN_01843fdc();
                }
                lVar3 = *plVar6;
                if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                  lVar3 = FUN_0185daa4();
                }
                lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
                if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                  lVar3 = FUN_0185daa4();
                }
                lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x58);
                if ((lVar3 != 0) &&
                   (FUN_02171ca8(lVar3,*param_1,param_1[1],*(undefined8 *)PTR_DAT_037fb698),
                   in_stack_00000008 != 0)) {
                  (**(code **)(in_stack_00000008 + 0x18))
                            (*(undefined8 *)(in_stack_00000008 + 0x40),*param_1,param_1[1],
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
LAB_028cd968:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


