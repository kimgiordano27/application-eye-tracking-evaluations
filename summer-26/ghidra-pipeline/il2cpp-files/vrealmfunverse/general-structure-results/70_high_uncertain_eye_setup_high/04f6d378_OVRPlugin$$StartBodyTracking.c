/*
FUNCTION_NAME: OVRPlugin$$StartBodyTracking
ENTRY_POINT: 04f6d378
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__StartBodyTracking(undefined1 param_1 [16],undefined1 param_2 [16])

{
  long unaff_x19;
  
  *(long *)(unaff_x19 + 0x14) = param_2._8_8_;
  *(long *)(unaff_x19 + 0xc) = param_2._0_8_;
  return;
}


