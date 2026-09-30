/*
FUNCTION_NAME: OVRManager$$get_useDynamicFoveatedRendering
ENTRY_POINT: 06927890
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


bool OVRManager__get_useDynamicFoveatedRendering(long *param_1)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(*param_1 + 0x4e8))(param_1,*(undefined8 *)(*param_1 + 0x4f0));
  return DAT_015c5a4c < fVar1;
}


