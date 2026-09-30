/*
FUNCTION_NAME: Meta.XR.Samples.SampleMetadata$$SendEvent
ENTRY_POINT: 02dc0320
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


byte Meta_XR_Samples_SampleMetadata__SendEvent(void)

{
  byte bVar1;
  long unaff_x29;
  
  bVar1 = OVRPlugin_GetFaceStateInternal_m9BDC8584B91A51CFD4B6CA5F9DB17C79DB69DBB2();
  *(byte *)(unaff_x29 + -1) = bVar1 & 1;
  return *(byte *)(unaff_x29 + -1) & 1;
}


