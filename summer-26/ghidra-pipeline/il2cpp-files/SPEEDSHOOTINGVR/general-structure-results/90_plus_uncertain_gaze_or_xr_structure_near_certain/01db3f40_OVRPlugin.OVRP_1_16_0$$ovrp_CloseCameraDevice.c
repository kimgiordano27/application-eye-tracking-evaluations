/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_CloseCameraDevice
ENTRY_POINT: 01db3f40
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 94
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined4 OVRPlugin_OVRP_1_16_0__ovrp_CloseCameraDevice(void)

{
  int in_w8;
  undefined4 unaff_w21;
  
  if (in_w8 == 0) {
    thunk_FUN_01022c14();
  }
  FUN_01d7e978();
  return unaff_w21;
}


