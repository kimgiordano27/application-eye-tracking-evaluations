/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.DebugManager$$remove_OnFocusLostAction
ENTRY_POINT: 04c20538
PROGRAM: hellodot-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04c205e0) */

void Meta_XR_ImmersiveDebugger_Manager_DebugManager__remove_OnFocusLostAction(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000008;
  
  FUN_04f951b8();
  lVar2 = *(long *)(unaff_x21 + 0x38);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  uVar1 = *(uint *)(lVar2 + 0x18);
  if ((int)uVar1 < *(int *)(unaff_x21 + 0x30)) {
    lVar3 = *(long *)(lVar2 + 0x10);
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
      *(uint *)(lVar2 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = unaff_x20;
    }
    else {
      FUN_039683cc();
    }
  }
  if (in_stack_00000008._4_1_ != '\0') {
    thunk_FUN_02c6fbb4();
  }
  return;
}


