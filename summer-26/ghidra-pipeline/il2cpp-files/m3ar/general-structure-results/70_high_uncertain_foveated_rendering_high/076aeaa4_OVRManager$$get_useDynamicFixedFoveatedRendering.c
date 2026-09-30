/*
FUNCTION_NAME: OVRManager$$get_useDynamicFixedFoveatedRendering
ENTRY_POINT: 076aeaa4
PROGRAM: m3ar-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__get_useDynamicFixedFoveatedRendering(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  FUN_0403162c();
  *(undefined1 *)(unaff_x22 + 0x88) = 1;
  uVar1 = thunk_FUN_0406ddbc(*(undefined8 *)(unaff_x19 + 0x20),*unaff_x20);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x38);
  uVar2 = *unaff_x21;
  *(undefined8 *)(unaff_x19 + 0x28) = uVar1;
  uVar1 = thunk_FUN_0406ddbc(uVar3,uVar2);
  uVar2 = *unaff_x21;
  *(undefined8 *)(unaff_x19 + 0x40) = uVar1;
  thunk_FUN_0406ddbc(uVar3,uVar2);
  return;
}


