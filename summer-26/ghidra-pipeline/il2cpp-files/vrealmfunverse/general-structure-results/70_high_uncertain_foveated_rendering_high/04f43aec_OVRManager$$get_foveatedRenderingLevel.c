/*
FUNCTION_NAME: OVRManager$$get_foveatedRenderingLevel
ENTRY_POINT: 04f43aec
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


bool OVRManager__get_foveatedRenderingLevel(float param_1,float param_2)

{
  undefined8 in_stack_00000008;
  
  return in_stack_00000008._4_4_ * in_stack_00000008._4_4_ <= param_2 + param_1;
}


