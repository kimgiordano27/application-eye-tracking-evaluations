/*
FUNCTION_NAME: FUN_070d34a4
ENTRY_POINT: 070d34a4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_070d34a4(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  
  puVar1 = OVRTelemetryConstants_OVRManager_TypeInfo;
  if ((DAT_07a5a9ce & 1) == 0) {
    FUN_031f20f4(OVRTelemetryConstants_OVRManager_TypeInfo);
    DAT_07a5a9ce = 1;
  }
  FUN_045e7cc8(0,param_2 >> 0x20,param_2 & 0xffffffff,*(undefined8 *)puVar1);
  return;
}


