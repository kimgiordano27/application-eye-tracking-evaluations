/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchManagerForAddon$$get_TelemetryAnnotation
ENTRY_POINT: 056543f4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_WatchManagerForAddon__get_TelemetryAnnotation
               (long param_1,undefined8 param_2,long param_3)

{
  long in_x9;
  
  if (*(long *)(param_1 + in_x9 * 8 + -8) == param_3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03189058();
}


