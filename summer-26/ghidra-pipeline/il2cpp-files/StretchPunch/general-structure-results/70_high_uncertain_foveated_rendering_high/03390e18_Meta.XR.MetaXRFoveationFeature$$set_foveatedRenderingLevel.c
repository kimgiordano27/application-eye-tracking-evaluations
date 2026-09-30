/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$set_foveatedRenderingLevel
ENTRY_POINT: 03390e18
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;strong_foveation_hits_4;functionality_foveated_rendering
*/


bool Meta_XR_MetaXRFoveationFeature__set_foveatedRenderingLevel(void)

{
  int *piVar1;
  int unaff_w20;
  
  piVar1 = (int *)thunk_FUN_01de290c();
  return unaff_w20 == *piVar1;
}


