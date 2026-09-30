/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Console$$get_Dirty
ENTRY_POINT: 028d1cd4
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Console__get_Dirty
               (undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000028;
  
  if ((DAT_03a245ad & 1) == 0) {
    FUN_017fc350(PTR_DAT_037fb610);
    DAT_03a245ad = 1;
  }
  in_stack_00000028 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  lVar1 = *(long *)(param_3 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  lVar1 = *(long *)(param_3 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x20);
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_3 + 0x20);
    uVar4 = *param_1;
    uVar5 = param_1[1];
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    uVar3 = FUN_02171fa4(lVar1,uVar4,uVar5,&stack0x00000028,
                         *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0xb0));
    lVar1 = in_stack_00000028;
    if ((uVar3 & 1) == 0) {
      lVar1 = *(long *)(param_3 + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0185daa4();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0185daa4();
      }
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      lVar1 = *(long *)(param_3 + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0185daa4();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0185daa4();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x18);
      if (lVar1 != 0) {
        lVar2 = *(long *)(param_3 + 0x20);
        uVar4 = *param_1;
        uVar5 = param_1[1];
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0185daa4();
        }
        uVar3 = FUN_02171fa4(lVar1,uVar4,uVar5,&stack0x00000018,
                             *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0xd0));
        lVar1 = in_stack_00000018;
        if ((uVar3 & 1) == 0) {
          lVar1 = *(long *)(param_3 + 0x20);
          if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_0185daa4();
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
          if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_0185daa4();
          }
          if (*(int *)(lVar1 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          lVar1 = *(long *)(param_3 + 0x20);
          if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_0185daa4();
          }
          uVar3 = FUN_028d20c4(param_1,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0xf0));
          if ((uVar3 & 1) == 0) {
            thunk_FUN_01851c08(PTR_DAT_037f9268);
            uVar4 = thunk_FUN_018617ec();
            uVar5 = thunk_FUN_01851c08(PTR_DAT_037fb618);
            uVar4 = FUN_02a50b00(uVar5,param_2,uVar4,0);
            thunk_FUN_01851c08(PTR_DAT_037f8d50);
            uVar5 = thunk_FUN_01861bbc();
            FUN_02bcf6b4(uVar5,uVar4,param_2,0);
                    /* WARNING: Subroutine does not return */
            FUN_017fc474(uVar5,param_3);
          }
          lVar1 = *(long *)(param_3 + 0x20);
          if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_0185daa4();
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
          if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_0185daa4();
          }
          if (*(int *)(lVar1 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          lVar1 = *(long *)(param_3 + 0x20);
          if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_0185daa4();
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
          if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_0185daa4();
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x30);
          if (lVar1 != 0) {
            lVar2 = *(long *)(param_3 + 0x20);
            uVar4 = *param_1;
            uVar5 = param_1[1];
            if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
              lVar2 = FUN_0185daa4();
            }
            uVar3 = FUN_02171fa4(lVar1,uVar4,uVar5,&stack0x00000010,
                                 *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0xf8));
            if ((uVar3 & 1) == 0) {
              lVar1 = *(long *)(param_3 + 0x20);
              if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
                lVar1 = FUN_0185daa4();
              }
              lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
              if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
                lVar1 = FUN_0185daa4();
              }
              if (*(int *)(lVar1 + 0xe0) == 0) {
                thunk_FUN_01843fdc();
              }
              lVar1 = *(long *)(param_3 + 0x20);
              if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
                lVar1 = FUN_0185daa4();
              }
              lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
              if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
                lVar1 = FUN_0185daa4();
              }
              lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x10);
              if (lVar1 != 0) {
                FUN_02170834(lVar1,*param_1,param_1[1],param_2,*(undefined8 *)PTR_DAT_037fb610);
                lVar1 = *(long *)(param_3 + 0x20);
                if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
                  lVar1 = FUN_0185daa4();
                }
                FUN_028d2308(param_1,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x108));
                return;
              }
            }
            else {
              lVar1 = FUN_02afcf34(param_2,0);
              if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02afcff4(lVar1,0);
              }
            }
          }
        }
        else if (in_stack_00000018 != 0) {
          lVar2 = *(long *)(param_3 + 0x20);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_0185daa4();
          }
          FUN_01de5cfc(lVar1,param_2,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0xe8));
          return;
        }
      }
    }
    else if (in_stack_00000028 != 0) {
      lVar2 = *(long *)(param_3 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0185daa4();
      }
      FUN_01d221a8(lVar1,param_2,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 200));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


