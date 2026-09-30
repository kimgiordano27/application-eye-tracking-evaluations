/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchManagerForAddon$$get_TelemetryAnnotation
ENTRY_POINT: 06461474
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_WatchManagerForAddon__get_TelemetryAnnotation(uint param_1)

{
  code *pcVar1;
  long unaff_x19;
  
  if ((param_1 & 1) == 0) {
    pcVar1 = FUN_03692788;
  }
  else {
    pcVar1 = FUN_036927bc;
  }
  *(code **)(unaff_x19 + 0x18) = pcVar1;
  *(code **)(unaff_x19 + 0x38) = FUN_03692684;
  return;
}


