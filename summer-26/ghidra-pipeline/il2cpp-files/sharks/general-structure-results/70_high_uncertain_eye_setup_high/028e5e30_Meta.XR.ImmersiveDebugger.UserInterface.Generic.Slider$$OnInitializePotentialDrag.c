/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Slider$$OnInitializePotentialDrag
ENTRY_POINT: 028e5e30
PROGRAM: sharks-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Slider__OnInitializePotentialDrag(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  undefined8 *unaff_x20;
  long in_stack_00000008;
  undefined8 in_stack_00000028;
  
  uVar4 = FUN_028e590c();
  if ((uVar4 & 1) == 0) {
    return;
  }
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
  if (lVar5 != 0) {
    lVar6 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *unaff_x20;
    uVar2 = unaff_x20[1];
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0185daa4();
    }
    uVar4 = FUN_02171fa4(lVar5,uVar1,uVar2,&stack0x00000008,
                         *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0xf8));
    uVar1 = in_stack_00000028;
    lVar5 = in_stack_00000008;
    if ((uVar4 & 1) == 0) {
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
      uVar1 = in_stack_00000028;
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
      if (lVar5 != 0) {
        lVar6 = *(long *)(unaff_x19 + 0x20);
        uVar2 = *unaff_x20;
        uVar3 = unaff_x20[1];
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_0185daa4();
        }
        FUN_02170834(lVar5,uVar2,uVar3,uVar1,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x168));
        if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_0185daa4();
        }
        FUN_028e5b50();
        return;
      }
    }
    else if (in_stack_00000008 != 0) {
      uVar2 = *unaff_x20;
      uVar3 = unaff_x20[1];
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_0185daa4();
      }
      (**(code **)(lVar5 + 0x18))
                (*(undefined8 *)(lVar5 + 0x40),uVar2,uVar3,uVar1,*(undefined8 *)(lVar5 + 0x28));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


