/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Button$$OnHoverChanged
ENTRY_POINT: 03156d18
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


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Button__OnHoverChanged(long param_1)

{
  int *in_x10;
  long unaff_x19;
  long unaff_x21;
  int unaff_w24;
  
  (**(code **)(param_1 + (long)*in_x10 * 0x10 + 0x138))();
  if (unaff_x21 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db68();
  }
  if (unaff_w24 != 5) {
    if (unaff_w24 != 0) {
      return;
    }
    FUN_03157694();
  }
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


