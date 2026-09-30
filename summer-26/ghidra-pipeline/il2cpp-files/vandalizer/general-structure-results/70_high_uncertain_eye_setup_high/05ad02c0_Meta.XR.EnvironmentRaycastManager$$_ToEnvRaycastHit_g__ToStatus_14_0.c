/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$<ToEnvRaycastHit>g__ToStatus|14_0
ENTRY_POINT: 05ad02c0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_EnvironmentRaycastManager__<ToEnvRaycastHit>g__ToStatus_14_0(undefined1 param_1 [16])

{
  uint in_w9;
  uint in_w10;
  long unaff_x19;
  
  *(long *)(unaff_x19 + 0x18) = param_1._8_8_;
  *(long *)(unaff_x19 + 0x10) = param_1._0_8_;
  return in_w10 < in_w9;
}


