/*
FUNCTION_NAME: OVRPlugin$$set_useDynamicFixedFoveatedRendering
ENTRY_POINT: 03384d80
PROGRAM: gunraiders-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__set_useDynamicFixedFoveatedRendering(void)

{
  byte unaff_w19;
  byte unaff_w20;
  byte unaff_w21;
  long unaff_x22;
  
  FUN_033a8464();
  *(byte *)(unaff_x22 + 0x10) = unaff_w21 & 1;
  *(byte *)(unaff_x22 + 0x12) = unaff_w20 & 1;
  *(byte *)(unaff_x22 + 0x11) = unaff_w19 & 1;
  return;
}


