/*
FUNCTION_NAME: OVRManager$$SetDynamicFoveatedRenderingEnabled
ENTRY_POINT: 05d65c80
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__SetDynamicFoveatedRenderingEnabled(long param_1)

{
  undefined8 unaff_x19;
  long unaff_x20;
  
  *(undefined8 *)(param_1 + 0x28) = 0;
  thunk_FUN_0333a630();
  *(undefined8 *)(unaff_x20 + 0x30) = unaff_x19;
  thunk_FUN_0333a630((undefined8 *)(unaff_x20 + 0x30));
  return;
}


