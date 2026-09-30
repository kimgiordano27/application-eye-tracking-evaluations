/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Slider$$Setup
ENTRY_POINT: 03159ba4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Slider__Setup(void)

{
  long unaff_x19;
  int unaff_w20;
  int unaff_w21;
  long unaff_x22;
  
  OVRManager_PassthroughCapabilities___ctor(0);
  if (unaff_w20 < 0) {
    FUN_033b3224(0x10,4,0);
  }
  if (*(int *)(unaff_x19 + 0x18) - unaff_w21 < unaff_w20) {
    FUN_033b2d60(0x17,0);
  }
  if (1 < unaff_w20) {
    FUN_020228fc(*(undefined8 *)(unaff_x19 + 0x10),unaff_w21,unaff_w20,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x188));
  }
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


