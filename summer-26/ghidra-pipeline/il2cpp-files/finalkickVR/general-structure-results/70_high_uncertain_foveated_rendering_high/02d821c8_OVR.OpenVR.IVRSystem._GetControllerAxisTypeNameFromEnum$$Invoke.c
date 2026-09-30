/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetControllerAxisTypeNameFromEnum$$Invoke
ENTRY_POINT: 02d821c8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 88
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;ui_interaction;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_2;strong_foveation_hits_1;functionality_foveated_rendering
*/


byte OVR_OpenVR_IVRSystem__GetControllerAxisTypeNameFromEnum__Invoke(void)

{
  byte bVar1;
  
  bVar1 = OVRPlugin_get_fixedFoveatedRenderingSupported_mAA2ED8AD8AEF2EDAE1234213993594EEBDBD491D(0)
  ;
  return bVar1 & 1;
}


