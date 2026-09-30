/*
FUNCTION_NAME: OVRPlugin$$get_fixedFoveatedRenderingLevel
ENTRY_POINT: 073e19b0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_fixedFoveatedRenderingLevel(void)

{
  undefined8 uVar1;
  long unaff_x19;
  
  uVar1 = thunk_FUN_03cf5138();
  *(undefined8 *)(unaff_x19 + 0x28) = uVar1;
  thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x28),uVar1);
  return;
}


