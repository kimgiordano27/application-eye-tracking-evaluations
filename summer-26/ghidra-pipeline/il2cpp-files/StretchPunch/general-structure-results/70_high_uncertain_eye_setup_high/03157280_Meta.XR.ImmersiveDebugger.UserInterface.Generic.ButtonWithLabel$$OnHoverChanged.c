/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithLabel$$OnHoverChanged
ENTRY_POINT: 03157280
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithLabel__OnHoverChanged(void)

{
  uint in_w8;
  long lVar1;
  long in_x9;
  long unaff_x19;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  
  if (in_x9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  if (in_w8 < *(uint *)(in_x9 + 0x18)) {
    lVar1 = in_x9 + (long)(int)in_w8 * 0x38;
    *(undefined8 *)(lVar1 + 0x50) = in_stack_00000070;
    *(undefined8 *)(lVar1 + 0x38) = in_stack_00000058;
    *(undefined8 *)(lVar1 + 0x30) = in_stack_00000050;
    *(undefined8 *)(lVar1 + 0x48) = in_stack_00000068;
    *(undefined8 *)(lVar1 + 0x40) = in_stack_00000060;
    *(undefined8 *)(lVar1 + 0x28) = in_stack_00000048;
    *(undefined8 *)(lVar1 + 0x20) = in_stack_00000040;
    thunk_FUN_01e10808(lVar1 + 0x20,0);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


