/*
FUNCTION_NAME: OVRManager$$SetFoveatedRenderingLevel
ENTRY_POINT: 060bb3c4
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


void OVRManager__SetFoveatedRenderingLevel(void)

{
  long unaff_x21;
  
  FUN_03642964();
  *(undefined1 *)(unaff_x21 + 0x99b) = 1;
  FUN_04b0da78();
  FUN_060bb0dc();
  return;
}


