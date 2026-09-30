/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$set_useDynamicFoveatedRendering
ENTRY_POINT: 02bec9d4
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;strong_foveation_hits_4;functionality_foveated_rendering
*/


void Meta_XR_MetaXRFoveationFeature__set_useDynamicFoveatedRendering(long param_1)

{
  undefined8 *unaff_x19;
  undefined8 uVar1;
  long *unaff_x20;
  long unaff_x21;
  
  FUN_017fc350(*(undefined8 *)(param_1 + 0xdf8));
  *(undefined1 *)(unaff_x21 + 0xd21) = 1;
  uVar1 = *unaff_x19;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  FUN_02b4e408(uVar1,0);
  return;
}


