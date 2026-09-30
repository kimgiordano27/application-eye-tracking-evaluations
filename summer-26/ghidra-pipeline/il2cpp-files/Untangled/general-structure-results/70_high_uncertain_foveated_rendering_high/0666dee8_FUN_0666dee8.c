/*
FUNCTION_NAME: FUN_0666dee8
ENTRY_POINT: 0666dee8
PROGRAM: Untangled-libil2cpp.so
SCORE: 81
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;strong_foveation_hits_4;functionality_foveated_rendering
*/


void FUN_0666dee8(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = Meta_XR_MetaXRFoveationFeature_TypeInfo;
  puVar1 = Meta_XR_MetaXREyeTrackedFoveationFeature_TypeInfo;
  if ((DAT_071cf9ae & 1) == 0) {
    FUN_02f07e70(Meta_XR_MetaXRFoveationFeature_TypeInfo);
    FUN_02f07e70(Meta_XR_MetaXREyeTrackedFoveationFeature_TypeInfo);
    DAT_071cf9ae = 1;
  }
  FUN_0666d940(param_1 & 1,*(undefined8 *)puVar1,*(undefined8 *)puVar2);
  return;
}


