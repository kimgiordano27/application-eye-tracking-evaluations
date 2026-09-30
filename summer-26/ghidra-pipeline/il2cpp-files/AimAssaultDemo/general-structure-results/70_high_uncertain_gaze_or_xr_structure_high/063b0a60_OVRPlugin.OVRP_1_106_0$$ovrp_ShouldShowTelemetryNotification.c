/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_ShouldShowTelemetryNotification
ENTRY_POINT: 063b0a60
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
OVRPlugin_OVRP_1_106_0__ovrp_ShouldShowTelemetryNotification
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  
  FUN_062dc8f8(param_2,param_3,*param_1);
  *(undefined4 *)(unaff_x19 + 0x9c) = 2;
  return 1;
}


