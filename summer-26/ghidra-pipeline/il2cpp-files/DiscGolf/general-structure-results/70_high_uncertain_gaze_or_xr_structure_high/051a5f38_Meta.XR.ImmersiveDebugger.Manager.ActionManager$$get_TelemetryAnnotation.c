/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.ActionManager$$get_TelemetryAnnotation
ENTRY_POINT: 051a5f38
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_ActionManager__get_TelemetryAnnotation
               (long param_1,long param_2)

{
  int in_w9;
  
  if (in_w9 != *(int *)(param_1 + 0x2c)) {
    FUN_055095dc(0);
  }
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  return;
}


