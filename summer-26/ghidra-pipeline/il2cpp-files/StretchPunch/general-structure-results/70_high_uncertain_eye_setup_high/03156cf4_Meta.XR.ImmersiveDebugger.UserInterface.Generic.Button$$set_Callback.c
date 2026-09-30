/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Button$$set_Callback
ENTRY_POINT: 03156cf4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Button__set_Callback
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long in_x9;
  int *in_x10;
  long in_x11;
  long unaff_x19;
  long unaff_x21;
  int unaff_w24;
  
  do {
    if (in_x11 == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_03156d24:
      (*(code *)*puVar1)();
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
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar1 = (undefined8 *)FUN_01dde8fc();
      goto LAB_03156d24;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  } while( true );
}


