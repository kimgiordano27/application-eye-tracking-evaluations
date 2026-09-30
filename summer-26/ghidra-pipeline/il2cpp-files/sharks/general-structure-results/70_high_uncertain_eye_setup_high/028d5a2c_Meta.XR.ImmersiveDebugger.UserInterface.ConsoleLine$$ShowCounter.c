/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.ConsoleLine$$ShowCounter
ENTRY_POINT: 028d5a2c
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


void Meta_XR_ImmersiveDebugger_UserInterface_ConsoleLine__ShowCounter(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
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
  
  uVar1 = FUN_02171fa4();
  lVar3 = in_stack_00000088;
  if ((uVar1 & 1) == 0) {
    lVar3 = *(long *)(unaff_x19 + 0x20);
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
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
    uVar1 = FUN_028d558c();
    if ((uVar1 & 1) != 0) {
      lVar3 = *(long *)(unaff_x19 + 0x20);
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
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0185daa4();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0185daa4();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x30);
      if (lVar3 == 0) {
LAB_028d5ce8:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      lVar2 = *(long *)(unaff_x19 + 0x20);
      uVar4 = *unaff_x20;
      uVar6 = unaff_x20[1];
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0185daa4();
      }
      uVar1 = FUN_02171fa4(lVar3,uVar4,uVar6,&stack0x00000080,
                           *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0xf8));
      lVar3 = in_stack_00000080;
      if ((uVar1 & 1) == 0) {
        lVar3 = *(long *)(unaff_x19 + 0x20);
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
        lVar3 = *(long *)(unaff_x19 + 0x20);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_0185daa4();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_0185daa4();
        }
        uVar8 = unaff_x21[1];
        uVar7 = *unaff_x21;
        uVar5 = unaff_x21[2];
        uVar4 = *unaff_x20;
        uVar6 = unaff_x20[1];
        lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
        if (lVar3 == 0) goto LAB_028d5ce8;
        lVar2 = *(long *)(unaff_x19 + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0185daa4();
        }
        in_stack_00000090 = uVar7;
        in_stack_00000098 = uVar8;
        in_stack_000000a0 = uVar5;
        FUN_021608b4(lVar3,uVar4,uVar6,&stack0x00000090,
                     *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x168));
        if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_0185daa4();
        }
        FUN_028d57d0();
      }
      else {
        uVar8 = unaff_x21[1];
        uVar7 = *unaff_x21;
        uVar5 = unaff_x21[2];
        uVar4 = *unaff_x20;
        uVar6 = unaff_x20[1];
        if (in_stack_00000080 == 0) goto LAB_028d5ce8;
        if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_0185daa4();
        }
        in_stack_00000090 = uVar7;
        in_stack_00000098 = uVar8;
        in_stack_000000a0 = uVar5;
        (**(code **)(lVar3 + 0x18))
                  (*(undefined8 *)(lVar3 + 0x40),uVar4,uVar6,&stack0x00000090,
                   *(undefined8 *)(lVar3 + 0x28));
      }
    }
  }
  else {
    uVar4 = unaff_x21[2];
    uVar5 = unaff_x21[1];
    uVar6 = *unaff_x21;
    if (in_stack_00000088 == 0) goto LAB_028d5ce8;
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    in_stack_00000090 = uVar6;
    in_stack_00000098 = uVar5;
    in_stack_000000a0 = uVar4;
    FUN_01de5ee8(lVar3,&stack0x00000090,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x158));
  }
  return;
}


