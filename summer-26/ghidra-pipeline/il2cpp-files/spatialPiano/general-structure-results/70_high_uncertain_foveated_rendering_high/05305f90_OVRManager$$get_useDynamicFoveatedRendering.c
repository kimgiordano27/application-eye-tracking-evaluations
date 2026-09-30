/*
FUNCTION_NAME: OVRManager$$get_useDynamicFoveatedRendering
ENTRY_POINT: 05305f90
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__get_useDynamicFoveatedRendering(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_02f08768(*(undefined8 *)(param_1 + 0x680));
  *(undefined1 *)(unaff_x21 + 0x131) = 1;
  uVar1 = thunk_FUN_02f45174(*(undefined8 *)(unaff_x19 + 0x28),*unaff_x20);
  *(undefined8 *)(unaff_x19 + 0x30) = uVar1;
  return;
}


