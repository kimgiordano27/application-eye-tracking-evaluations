/*
FUNCTION_NAME: OVRManager$$GetFoveatedRenderingLevel
ENTRY_POINT: 05ff262c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__GetFoveatedRenderingLevel(void)

{
  undefined8 uVar1;
  undefined1 in_w8;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  
  *(undefined1 *)(unaff_x21 + 0x871) = in_w8;
  uVar1 = thunk_FUN_0322f04c(*(undefined8 *)(unaff_x19 + 0x20),*unaff_x20);
  *(undefined8 *)(unaff_x19 + 0x28) = uVar1;
  thunk_FUN_0329bf60((undefined8 *)(unaff_x19 + 0x28),uVar1);
  return;
}


