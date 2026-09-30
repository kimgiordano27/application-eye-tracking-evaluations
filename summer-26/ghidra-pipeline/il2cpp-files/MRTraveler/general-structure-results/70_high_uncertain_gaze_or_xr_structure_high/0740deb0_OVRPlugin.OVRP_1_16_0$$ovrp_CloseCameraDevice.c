/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_CloseCameraDevice
ENTRY_POINT: 0740deb0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 81
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;data_collection
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_16_0__ovrp_CloseCameraDevice(long param_1)

{
  undefined8 unaff_x19;
  long *unaff_x20;
  
  *(undefined8 *)(*(long *)(param_1 + 0xb8) + 8) = unaff_x19;
  thunk_FUN_03d233cc();
  *(undefined1 *)(*(long *)(*unaff_x20 + 0xb8) + 0x10) = 0;
  return;
}


