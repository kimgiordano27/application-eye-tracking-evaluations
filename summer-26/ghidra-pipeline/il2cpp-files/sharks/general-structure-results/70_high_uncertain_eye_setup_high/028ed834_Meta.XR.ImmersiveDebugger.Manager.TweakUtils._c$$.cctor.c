/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakUtils.<>c$$.cctor
ENTRY_POINT: 028ed834
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


void Meta_XR_ImmersiveDebugger_Manager_TweakUtils_<>c___cctor(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long in_stack_00000080;
  long in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  long in_stack_000000b8;
  
  lVar1 = *(long *)(param_1 + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x20);
  if (lVar1 != 0) {
    lVar2 = *(long *)(unaff_x19 + 0x20);
    uVar4 = *unaff_x20;
    uVar6 = unaff_x20[1];
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
                    /* try { // try from 028ed860 to 029ed957 has its CatchHandler @ 028ed958 */
      lVar2 = FUN_0185daa4();
    }
    uVar3 = FUN_02171fa4(lVar1,uVar4,uVar6,&stack0x000000b8,
                         *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0xb0));
    lVar1 = in_stack_000000b8;
    if ((uVar3 & 1) == 0) {
      lVar1 = *(long *)(unaff_x19 + 0x20);
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
      lVar1 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0185daa4();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0185daa4();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x18);
      if (lVar1 != 0) {
        lVar2 = *(long *)(unaff_x19 + 0x20);
        uVar4 = *unaff_x20;
        uVar6 = unaff_x20[1];
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0185daa4();
        }
        uVar3 = FUN_02171fa4(lVar1,uVar4,uVar6,&stack0x00000088,
                             *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0xd0));
        lVar1 = in_stack_00000088;
        if ((uVar3 & 1) == 0) {
          lVar1 = *(long *)(unaff_x19 + 0x20);
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
          if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
            FUN_0185daa4();
          }
          uVar3 = FUN_028ed498();
          if ((uVar3 & 1) == 0) {
            return;
          }
          lVar1 = *(long *)(unaff_x19 + 0x20);
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
          lVar1 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_0185daa4();
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
          if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_0185daa4();
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x30);
          if (lVar1 != 0) {
            lVar2 = *(long *)(unaff_x19 + 0x20);
            uVar4 = *unaff_x20;
            uVar6 = unaff_x20[1];
            if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
              lVar2 = FUN_0185daa4();
            }
            uVar3 = FUN_02171fa4(lVar1,uVar4,uVar6,&stack0x00000080,
                                 *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0xf8));
            lVar1 = in_stack_00000080;
            if ((uVar3 & 1) == 0) {
              lVar1 = *(long *)(unaff_x19 + 0x20);
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
              lVar1 = *(long *)(unaff_x19 + 0x20);
              if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
                lVar1 = FUN_0185daa4();
              }
              lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
              if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
                lVar1 = FUN_0185daa4();
              }
              uVar8 = unaff_x21[1];
              uVar7 = *unaff_x21;
              uVar5 = unaff_x21[2];
              uVar4 = *unaff_x20;
              uVar6 = unaff_x20[1];
              lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 8);
              if (lVar1 != 0) {
                lVar2 = *(long *)(unaff_x19 + 0x20);
                if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
                  lVar2 = FUN_0185daa4();
                }
                in_stack_00000090 = uVar7;
                in_stack_00000098 = uVar8;
                in_stack_000000a0 = uVar5;
                FUN_02176c84(lVar1,uVar4,uVar6,&stack0x00000090,
                             *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x168));
                if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
                  FUN_0185daa4();
                }
                FUN_028ed6dc();
                return;
              }
            }
            else {
              uVar8 = unaff_x21[1];
              uVar7 = *unaff_x21;
              uVar5 = unaff_x21[2];
              uVar4 = *unaff_x20;
              uVar6 = unaff_x20[1];
              if (in_stack_00000080 != 0) {
                if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
                  FUN_0185daa4();
                }
                in_stack_00000090 = uVar7;
                in_stack_00000098 = uVar8;
                in_stack_000000a0 = uVar5;
                (**(code **)(lVar1 + 0x18))
                          (*(undefined8 *)(lVar1 + 0x40),uVar4,uVar6,&stack0x00000090,
                           *(undefined8 *)(lVar1 + 0x28));
                return;
              }
            }
          }
        }
        else {
          uVar4 = unaff_x21[2];
          uVar5 = unaff_x21[1];
          uVar6 = *unaff_x21;
          if (in_stack_00000088 != 0) {
            lVar2 = *(long *)(unaff_x19 + 0x20);
            if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
              lVar2 = FUN_0185daa4();
            }
            in_stack_00000090 = uVar6;
            in_stack_00000098 = uVar5;
            in_stack_000000a0 = uVar4;
            FUN_01de7040(lVar1,&stack0x00000090,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x158));
            return;
          }
        }
      }
    }
    else if (in_stack_000000b8 != 0) {
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_0185daa4();
      }
      FUN_01d23248(lVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


