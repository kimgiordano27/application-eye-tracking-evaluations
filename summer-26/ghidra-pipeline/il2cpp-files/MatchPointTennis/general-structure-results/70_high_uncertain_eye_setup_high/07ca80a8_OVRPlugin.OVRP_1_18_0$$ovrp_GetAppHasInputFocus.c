/*
FUNCTION_NAME: OVRPlugin.OVRP_1_18_0$$ovrp_GetAppHasInputFocus
ENTRY_POINT: 07ca80a8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_18_0__ovrp_GetAppHasInputFocus(undefined1 param_1 [16])

{
  undefined4 in_w9;
  undefined8 in_x10;
  long unaff_x19;
  
  *(undefined4 *)(unaff_x19 + 0x2c) = in_w9;
  *(undefined8 *)(unaff_x19 + 0x24) = in_x10;
  *(long *)(unaff_x19 + 0x1c) = param_1._8_8_;
  *(long *)(unaff_x19 + 0x14) = param_1._0_8_;
  *(undefined4 *)(unaff_x19 + 0x10) = 1;
  return;
}


