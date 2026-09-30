/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$set_foveatedRenderingLevel
ENTRY_POINT: 05fdb9a8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;strong_foveation_hits_4;functionality_foveated_rendering
*/


void Meta_XR_MetaXRFoveationFeature__set_foveatedRenderingLevel(undefined4 param_1)

{
  long unaff_x19;
  
  *(undefined4 *)(unaff_x19 + 0xd4) = param_1;
  *(undefined4 *)(unaff_x19 + 0xd0) = 0;
  return;
}


