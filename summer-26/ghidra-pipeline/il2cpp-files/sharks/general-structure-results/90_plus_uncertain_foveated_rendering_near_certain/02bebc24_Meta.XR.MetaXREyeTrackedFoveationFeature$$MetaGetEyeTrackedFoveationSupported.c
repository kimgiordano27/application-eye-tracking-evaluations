/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$MetaGetEyeTrackedFoveationSupported
ENTRY_POINT: 02bebc24
PROGRAM: sharks-libil2cpp.so
SCORE: 102
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_2;strong_foveation_hits_4;functionality_foveated_rendering
*/


void Meta_XR_MetaXREyeTrackedFoveationFeature__MetaGetEyeTrackedFoveationSupported(long param_1)

{
  undefined4 uVar1;
  undefined4 *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  
  FUN_017fc350(*(undefined8 *)(param_1 + 0xdf8));
  *(undefined1 *)(unaff_x21 + 0xd0a) = 1;
  uVar1 = *unaff_x19;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  FUN_02b4ee0c(uVar1,0);
  return;
}


