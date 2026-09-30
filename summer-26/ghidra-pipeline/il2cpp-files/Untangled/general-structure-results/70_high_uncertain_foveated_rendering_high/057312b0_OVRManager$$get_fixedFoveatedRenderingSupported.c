/*
FUNCTION_NAME: OVRManager$$get_fixedFoveatedRenderingSupported
ENTRY_POINT: 057312b0
PROGRAM: Untangled-libil2cpp.so
SCORE: 87
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_foveation_hits_2;functionality_foveated_rendering
*/


undefined8 OVRManager__get_fixedFoveatedRenderingSupported(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  FUN_05645a04(param_1,0);
  Oculus_Platform_CAPI__DateTimeFromNative();
  return *unaff_x19;
}


