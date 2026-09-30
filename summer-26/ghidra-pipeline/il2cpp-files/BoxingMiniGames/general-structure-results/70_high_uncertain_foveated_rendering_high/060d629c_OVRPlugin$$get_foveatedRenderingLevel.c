/*
FUNCTION_NAME: OVRPlugin$$get_foveatedRenderingLevel
ENTRY_POINT: 060d629c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_foveatedRenderingLevel(float param_1)

{
  long unaff_x19;
  
  param_1 = SQRT(param_1);
  FUN_071d0c1c(param_1 * *(float *)(unaff_x19 + 100),param_1 * *(float *)(unaff_x19 + 0x68),
               param_1 * *(float *)(unaff_x19 + 0x6c));
  return;
}


