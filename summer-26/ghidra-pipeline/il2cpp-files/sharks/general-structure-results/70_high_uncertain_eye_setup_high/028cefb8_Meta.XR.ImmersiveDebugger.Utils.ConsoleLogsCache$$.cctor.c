/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ConsoleLogsCache$$.cctor
ENTRY_POINT: 028cefb8
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


void Meta_XR_ImmersiveDebugger_Utils_ConsoleLogsCache___cctor(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined8 uStack0000000000000014;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined8 uStack0000000000000034;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined8 uStack0000000000000054;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  long in_stack_00000088;
  long in_stack_00000090;
  long in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined4 in_stack_000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 in_stack_000000b0;
  undefined8 uStack00000000000000b4;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0xc0) + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0185daa4();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x20);
  if (lVar2 != 0) {
    lVar3 = *(long *)(unaff_x19 + 0x20);
    uVar6 = *unaff_x20;
    uVar1 = unaff_x20[1];
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0185daa4();
    }
                    /* try { // try from 028ceff0 to 029cf017 has its CatchHandler @ 028cf19c */
    uVar4 = FUN_02171fa4(lVar2,uVar6,uVar1,&stack0x00000098,
                         *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0xb0));
    lVar2 = in_stack_00000098;
    if ((uVar4 & 1) == 0) {
      lVar2 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0185daa4();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0185daa4();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      lVar2 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0185daa4();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0185daa4();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x18);
      if (lVar2 != 0) {
        lVar3 = *(long *)(unaff_x19 + 0x20);
        uVar6 = *unaff_x20;
        uVar1 = unaff_x20[1];
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_0185daa4();
        }
        uVar4 = FUN_02171fa4(lVar2,uVar6,uVar1,&stack0x00000090,
                             *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0xd0));
        lVar2 = in_stack_00000090;
        if ((uVar4 & 1) == 0) {
          lVar2 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_0185daa4();
          }
          lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_0185daa4();
          }
          if (*(int *)(lVar2 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
            FUN_0185daa4();
          }
          uVar4 = FUN_028cec18();
          if ((uVar4 & 1) == 0) {
            return;
          }
          lVar2 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_0185daa4();
          }
          lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_0185daa4();
          }
          if (*(int *)(lVar2 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          lVar2 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_0185daa4();
          }
          lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_0185daa4();
          }
          lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x30);
          if (lVar2 != 0) {
            lVar3 = *(long *)(unaff_x19 + 0x20);
            uVar6 = *unaff_x20;
            uVar1 = unaff_x20[1];
            if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_0185daa4();
            }
            uVar4 = FUN_02171fa4(lVar2,uVar6,uVar1,&stack0x00000088,
                                 *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0xf8));
            lVar2 = in_stack_00000088;
            if ((uVar4 & 1) == 0) {
              lVar2 = *(long *)(unaff_x19 + 0x20);
              if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
                lVar2 = FUN_0185daa4();
              }
              lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
              if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
                lVar2 = FUN_0185daa4();
              }
              if (*(int *)(lVar2 + 0xe0) == 0) {
                thunk_FUN_01843fdc();
              }
              lVar2 = *(long *)(unaff_x19 + 0x20);
              if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
                lVar2 = FUN_0185daa4();
              }
              lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
              if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
                lVar2 = FUN_0185daa4();
              }
              uVar5 = *unaff_x21;
              uStack0000000000000014 = *(undefined8 *)((long)unaff_x21 + 0x14);
              uVar6 = *unaff_x20;
              uVar1 = unaff_x20[1];
              lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
              uStack0000000000000070 =
                   (undefined4)((ulong)*(undefined8 *)((long)unaff_x21 + 0xc) >> 0x20);
              uStack000000000000006c = (undefined4)((ulong)unaff_x21[1] >> 0x20);
              if (lVar2 != 0) {
                uStack0000000000000008 = (undefined4)unaff_x21[1];
                uStack000000000000000c = uStack000000000000006c;
                lVar3 = *(long *)(unaff_x19 + 0x20);
                if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                  lVar3 = FUN_0185daa4();
                }
                in_stack_000000a8 = uStack0000000000000008;
                uStack00000000000000b4 = uStack0000000000000014;
                uStack00000000000000ac = uStack000000000000000c;
                in_stack_000000b0 = uStack0000000000000070;
                in_stack_000000a0 = uVar5;
                FUN_02159dd0(lVar2,uVar6,uVar1,&stack0x000000a0,
                             *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x168));
                if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
                  FUN_0185daa4();
                }
                FUN_028cee5c();
                return;
              }
            }
            else {
              uVar5 = *unaff_x21;
              uStack0000000000000034 = *(undefined8 *)((long)unaff_x21 + 0x14);
              uVar6 = *unaff_x20;
              uVar1 = unaff_x20[1];
              uStack0000000000000070 =
                   (undefined4)((ulong)*(undefined8 *)((long)unaff_x21 + 0xc) >> 0x20);
              uStack000000000000006c = (undefined4)((ulong)unaff_x21[1] >> 0x20);
              if (in_stack_00000088 != 0) {
                uStack0000000000000028 = (undefined4)unaff_x21[1];
                uStack000000000000002c = uStack000000000000006c;
                if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
                  FUN_0185daa4();
                }
                in_stack_000000a8 = uStack0000000000000028;
                uStack00000000000000b4 = uStack0000000000000034;
                uStack00000000000000ac = uStack000000000000002c;
                in_stack_000000b0 = uStack0000000000000070;
                in_stack_000000a0 = uVar5;
                (**(code **)(lVar2 + 0x18))
                          (*(undefined8 *)(lVar2 + 0x40),uVar6,uVar1,&stack0x000000a0,
                           *(undefined8 *)(lVar2 + 0x28));
                return;
              }
            }
          }
        }
        else {
          uStack0000000000000054 = *(undefined8 *)((long)unaff_x21 + 0x14);
          uVar6 = *unaff_x21;
          uStack0000000000000070 =
               (undefined4)((ulong)*(undefined8 *)((long)unaff_x21 + 0xc) >> 0x20);
          uStack000000000000006c = (undefined4)((ulong)unaff_x21[1] >> 0x20);
          if (in_stack_00000090 != 0) {
            uStack0000000000000048 = (undefined4)unaff_x21[1];
            uStack000000000000004c = uStack000000000000006c;
            lVar3 = *(long *)(unaff_x19 + 0x20);
            if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_0185daa4();
            }
            in_stack_000000a8 = uStack0000000000000048;
            uStack00000000000000b4 = uStack0000000000000054;
            uStack00000000000000ac = uStack000000000000004c;
            in_stack_000000b0 = uStack0000000000000070;
            in_stack_000000a0 = uVar6;
            FUN_01de5a80(lVar2,&stack0x000000a0,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x158));
            return;
          }
        }
      }
    }
    else if (in_stack_00000098 != 0) {
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_0185daa4();
      }
                    /* try { // try from 028cf030 to 029cf08f has its CatchHandler @ 028cf1a0 */
      FUN_01d22aa4(lVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


