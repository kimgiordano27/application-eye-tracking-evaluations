/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$MetaGetEyeTrackedFoveationSupported
ENTRY_POINT: 0906bc50
PROGRAM: Hyper-libil2cpp.so
SCORE: 102
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_2;strong_foveation_hits_4;functionality_foveated_rendering
*/


void Meta_XR_MetaXREyeTrackedFoveationFeature__MetaGetEyeTrackedFoveationSupported(ulong param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar1;
  long unaff_x21;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x3c0);
  if ((param_1 & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac783c0);
    *(undefined1 *)(unaff_x21 + 0xb8) = 1;
  }
  thunk_FUN_04983e64(*(undefined8 *)(unaff_x19 + 0x50),*puVar1);
  return;
}


