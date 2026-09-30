/*
FUNCTION_NAME: OVRPlugin$$GetNativeOpenXRSession
ENTRY_POINT: 02c2fb58
PROGRAM: sharks-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__GetNativeOpenXRSession(void)

{
  long unaff_x19;
  long unaff_x21;
  
  *(undefined1 *)(unaff_x21 + 0xfa2) = 1;
  *(undefined4 *)(unaff_x19 + 0x8c) = 0xffffffff;
  FUN_02bdddc4();
  *(undefined4 *)(unaff_x19 + 0x60) = 0x8013152d;
  return;
}


