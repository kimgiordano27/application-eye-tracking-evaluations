/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.InteractableController$$get_Hover
ENTRY_POINT: 028e6b88
PROGRAM: sharks-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x028e6c88) */
/* WARNING: Removing unreachable block (ram,0x028e6d7c) */

void Meta_XR_ImmersiveDebugger_UserInterface_Generic_InteractableController__get_Hover(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *unaff_x26;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  lVar1 = *unaff_x26;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x18);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  uVar2 = *unaff_x20;
  uVar3 = unaff_x20[1];
  if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
    FUN_0185daa4();
  }
  FUN_02170834(lVar1,uVar2,uVar3);
  if (unaff_x21 != 0) {
    if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
    uVar2 = *(undefined8 *)(unaff_x21 + 0x60);
    uVar4 = *(undefined8 *)(unaff_x21 + 0x58);
    uVar3 = *(undefined8 *)(unaff_x21 + 0x50);
    lVar1 = *unaff_x26;
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0185daa4();
    }
    lVar1 = thunk_FUN_0181d094(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x228));
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar1 = *unaff_x26;
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0185daa4();
    }
    FUN_028e74c4(&stack0x00000040,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x228));
    unaff_x19[2] = uVar2;
    unaff_x19[1] = uVar4;
    *unaff_x19 = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


