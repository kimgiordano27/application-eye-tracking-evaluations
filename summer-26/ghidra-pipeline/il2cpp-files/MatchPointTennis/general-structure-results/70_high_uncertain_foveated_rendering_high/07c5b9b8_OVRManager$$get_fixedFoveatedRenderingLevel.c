/*
FUNCTION_NAME: OVRManager$$get_fixedFoveatedRenderingLevel
ENTRY_POINT: 07c5b9b8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__get_fixedFoveatedRenderingLevel(undefined8 param_1,undefined8 param_2)

{
  long unaff_x19;
  
  *(undefined8 *)(unaff_x19 + 0x30) = param_2;
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x30));
  return;
}


