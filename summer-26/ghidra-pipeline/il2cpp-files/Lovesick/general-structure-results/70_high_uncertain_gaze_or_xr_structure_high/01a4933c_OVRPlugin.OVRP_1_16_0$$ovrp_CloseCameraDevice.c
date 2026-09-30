/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_CloseCameraDevice
ENTRY_POINT: 01a4933c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;data_collection
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_16_0__ovrp_CloseCameraDevice
               (code *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  long unaff_x23;
  
  if (param_1 == (code *)0x0) {
    param_1 = (code *)thunk_FUN_00d625b4();
    *(code **)(unaff_x23 + 0x38) = param_1;
  }
  (*param_1)(param_2,param_3,param_4,param_5);
  return;
}


