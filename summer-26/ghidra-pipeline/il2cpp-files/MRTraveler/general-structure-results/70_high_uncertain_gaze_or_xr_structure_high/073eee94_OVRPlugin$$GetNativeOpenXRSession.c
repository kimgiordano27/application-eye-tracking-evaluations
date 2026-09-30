/*
FUNCTION_NAME: OVRPlugin$$GetNativeOpenXRSession
ENTRY_POINT: 073eee94
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined1 OVRPlugin__GetNativeOpenXRSession(undefined8 param_1)

{
  undefined4 unaff_w19;
  long unaff_x20;
  undefined8 in_stack_00000008;
  
  if ((int)param_1 == -1) {
    param_1 = FUN_073ee780();
    *(int *)(unaff_x20 + 0x10) = (int)param_1;
  }
  FUN_073ee8ac(param_1,unaff_w19,(long)&stack0x00000008 + 4);
  return in_stack_00000008._4_1_;
}


