/*
FUNCTION_NAME: OVRManager$$GetFixedFoveatedRenderingSupported
ENTRY_POINT: 033a9b98
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 87
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__GetFixedFoveatedRenderingSupported(void)

{
  undefined8 *unaff_x19;
  undefined8 uVar1;
  long *unaff_x20;
  long unaff_x21;
  
  FUN_01d7d918();
  *(undefined1 *)(unaff_x21 + 0x8a2) = 1;
  uVar1 = *unaff_x19;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  FUN_03345618(uVar1,0,0,0);
  return;
}


