/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$OnDisable
ENTRY_POINT: 06dfec30
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentRaycastManager__OnDisable(undefined1 param_1 [16])

{
  undefined4 in_w8;
  long unaff_x19;
  
  *(long *)(unaff_x19 + 0x38) = param_1._8_8_;
  *(long *)(unaff_x19 + 0x30) = param_1._0_8_;
  *(undefined4 *)(unaff_x19 + 0xc) = in_w8;
  return;
}


