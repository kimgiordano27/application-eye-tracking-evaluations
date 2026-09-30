/*
FUNCTION_NAME: OVRManager$$set_fixedFoveatedRenderingLevel
ENTRY_POINT: 033a9d0c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__set_fixedFoveatedRenderingLevel(void)

{
  undefined1 in_w8;
  undefined8 *unaff_x25;
  undefined8 uVar1;
  long *unaff_x26;
  long unaff_x27;
  
  *(undefined1 *)(unaff_x27 + 0x8a5) = in_w8;
  uVar1 = *unaff_x25;
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  FUN_033459a8(uVar1);
  return;
}


