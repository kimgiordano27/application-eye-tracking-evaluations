/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithLabel$$UpdateBackground
ENTRY_POINT: 031572a0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithLabel__UpdateBackground(void)

{
  uint in_w8;
  long lVar1;
  long in_x9;
  uint in_w10;
  long unaff_x19;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  if (in_w8 < in_w10) {
    lVar1 = in_x9 + (long)(int)in_w8 * 0x38;
    *(undefined8 *)(lVar1 + 0x50) = in_stack_00000030;
    *(undefined8 *)(lVar1 + 0x38) = in_stack_00000018;
    *(undefined8 *)(lVar1 + 0x30) = in_stack_00000010;
    *(undefined8 *)(lVar1 + 0x48) = in_stack_00000028;
    *(undefined8 *)(lVar1 + 0x40) = in_stack_00000020;
    *(undefined8 *)(lVar1 + 0x28) = in_stack_00000008;
    *(undefined8 *)(lVar1 + 0x20) = in_stack_00000000;
    thunk_FUN_01e10808(lVar1 + 0x20,0);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


