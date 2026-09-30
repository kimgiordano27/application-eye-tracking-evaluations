/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ConsoleLogsCache.<>c__DisplayClass7_0$$<EnqueueLogEntry>b__0
ENTRY_POINT: 028cf048
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_ConsoleLogsCache_<>c__DisplayClass7_0__<EnqueueLogEntry>b__0
               (void)

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
  undefined8 in_stack_000000a0;
  undefined4 in_stack_000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 in_stack_000000b0;
  undefined8 uStack00000000000000b4;
  
  lVar2 = FUN_0185daa4();
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
                    /* try { // try from 028cf0bc to 029cf0c3 has its CatchHandler @ 028cf190 */
                    /* try { // try from 028cf0c4 to 029cf16f has its CatchHandler @ 028ceedc */
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
                    /* try { // try from 028cf170 to 029cf173 has its CatchHandler @ 028cf194 */
        FUN_0185daa4();
      }
                    /* try { // try from 028cf174 to 029cf17b has its CatchHandler @ 028cf198 */
                    /* try { // try from 028cf17c to 029cf17f has its CatchHandler @ 028ceedc */
                    /* try { // try from 028cf180 to 029cf183 has its CatchHandler @ 028cf18c */
      uVar4 = FUN_028cec18();
                    /* try { // try from 028cf184 to 029cf1b7 has its CatchHandler @ 028ceedc */
      if ((uVar4 & 1) != 0) {
        lVar2 = *(long *)(unaff_x19 + 0x20);
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 028cf180 with catch @ 028cf18c
                        */
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 028cf0bc with catch @ 028cf190
                        */
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 028cf170 with catch @ 028cf194
                        */
          lVar2 = FUN_0185daa4();
        }
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 028cf174 with catch @ 028cf198
                        */
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 028ceff0 with catch @ 028cf19c
                        */
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 028cf030 with catch @ 028cf1a0
                        */
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0185daa4();
        }
        if (*(int *)(lVar2 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
                    /* try { // try from 028cf1b8 to 029cf1bb has its CatchHandler @ 028cf1c8 */
        lVar2 = *(long *)(unaff_x19 + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0185daa4();
        }
                    /* catch() { ... } // from try @ 028cf1b8 with catch @ 028cf1c8 */
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0185daa4();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x30);
        if (lVar2 == 0) goto LAB_028cf384;
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
          if (lVar2 == 0) goto LAB_028cf384;
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
        }
        else {
          uVar5 = *unaff_x21;
          uStack0000000000000034 = *(undefined8 *)((long)unaff_x21 + 0x14);
          uVar6 = *unaff_x20;
          uVar1 = unaff_x20[1];
          uStack0000000000000070 =
               (undefined4)((ulong)*(undefined8 *)((long)unaff_x21 + 0xc) >> 0x20);
          uStack000000000000006c = (undefined4)((ulong)unaff_x21[1] >> 0x20);
          if (in_stack_00000088 == 0) goto LAB_028cf384;
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
        }
      }
    }
    else {
      uStack0000000000000054 = *(undefined8 *)((long)unaff_x21 + 0x14);
      uVar6 = *unaff_x21;
      uStack0000000000000070 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x21 + 0xc) >> 0x20);
      uStack000000000000006c = (undefined4)((ulong)unaff_x21[1] >> 0x20);
      if (in_stack_00000090 == 0) goto LAB_028cf384;
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
    }
    return;
  }
LAB_028cf384:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


