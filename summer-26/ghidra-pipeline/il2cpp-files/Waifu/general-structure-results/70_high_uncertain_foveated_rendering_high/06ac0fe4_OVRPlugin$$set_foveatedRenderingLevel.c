/*
FUNCTION_NAME: OVRPlugin$$set_foveatedRenderingLevel
ENTRY_POINT: 06ac0fe4
PROGRAM: Waifu-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__set_foveatedRenderingLevel
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,
               undefined4 param_4)

{
  long unaff_x19;
  
  *(undefined4 *)(unaff_x19 + 0x2c) = param_3;
  *(undefined4 *)(unaff_x19 + 0x30) = param_4;
  return;
}


