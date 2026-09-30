/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Member$$get_Description
ENTRY_POINT: 028dc23c
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Member__get_Description(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  undefined8 *unaff_x20;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000028;
  
                    /* try { // try from 028dc240 to 029dc303 has its CatchHandler @ 028dbe64 */
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    FUN_0185daa4();
  }
  uVar3 = FUN_02171fa4();
  lVar5 = in_stack_00000010;
  if ((uVar3 & 1) == 0) {
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0185daa4();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0185daa4();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
    uVar3 = FUN_028dbdb4();
    if ((uVar3 & 1) != 0) {
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0185daa4();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0185daa4();
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0185daa4();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0185daa4();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x30);
      if (lVar5 == 0) {
LAB_028dc49c:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      lVar4 = *(long *)(unaff_x19 + 0x20);
      uVar1 = *unaff_x20;
      uVar2 = unaff_x20[1];
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0185daa4();
      }
      uVar3 = FUN_02171fa4(lVar5,uVar1,uVar2,&stack0x00000008,
                           *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0xf8));
      lVar5 = in_stack_00000008;
      if ((uVar3 & 1) == 0) {
        lVar5 = *(long *)(unaff_x19 + 0x20);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_0185daa4();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_0185daa4();
        }
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        lVar5 = *(long *)(unaff_x19 + 0x20);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_0185daa4();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_0185daa4();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
        if (lVar5 == 0) goto LAB_028dc49c;
        lVar4 = *(long *)(unaff_x19 + 0x20);
        uVar1 = *unaff_x20;
        uVar2 = unaff_x20[1];
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0185daa4();
        }
        FUN_02166e60(lVar5,uVar1,uVar2,in_stack_00000028._4_1_ != '\0',
                     *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x168));
        if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_0185daa4();
        }
        Meta_XR_ImmersiveDebugger_UserInterface_LogEntry__set_Count();
      }
      else {
        if (in_stack_00000008 == 0) goto LAB_028dc49c;
        uVar1 = *unaff_x20;
        uVar2 = unaff_x20[1];
        if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_0185daa4();
        }
        (**(code **)(lVar5 + 0x18))
                  (*(undefined8 *)(lVar5 + 0x40),uVar1,uVar2,in_stack_00000028._4_1_ != '\0',
                   *(undefined8 *)(lVar5 + 0x28));
      }
    }
  }
  else {
    if (in_stack_00000010 == 0) goto LAB_028dc49c;
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4();
    }
    FUN_01de6284(lVar5,in_stack_00000028._4_1_ != '\0',
                 *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x158));
  }
  return;
}


