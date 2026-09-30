/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Slider$$set_FillBackgroundStyle
ENTRY_POINT: 063668e0
PROGRAM: Waifu-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Slider__set_FillBackgroundStyle(long param_1)

{
  long unaff_x19;
  undefined4 unaff_w20;
  undefined4 unaff_w22;
  
  if (param_1 != 0) {
    FUN_042b3978(param_1,unaff_w22,DAT_083eb438);
    if (*(long *)(unaff_x19 + 0xb0) != 0) {
      FUN_0438ebf0(*(long *)(unaff_x19 + 0xb0),unaff_w20,DAT_083ebbc0);
      if (*(long *)(unaff_x19 + 0xb8) != 0) {
        FUN_05d2ca4c();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


