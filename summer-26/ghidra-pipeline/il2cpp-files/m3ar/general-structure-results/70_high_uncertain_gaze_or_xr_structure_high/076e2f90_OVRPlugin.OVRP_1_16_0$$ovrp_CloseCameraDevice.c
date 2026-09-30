/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_CloseCameraDevice
ENTRY_POINT: 076e2f90
PROGRAM: m3ar-libil2cpp.so
SCORE: 81
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;data_collection
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_16_0__ovrp_CloseCameraDevice(void)

{
  long unaff_x19;
  
  if (*(char *)(unaff_x19 + 0xc08) == '\0') {
    FUN_0403162c(PTR_DAT_08f65568);
    *(undefined1 *)(unaff_x19 + 0xc08) = 1;
  }
  FUN_08575f94(0);
  return;
}


