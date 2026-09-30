/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspectorManager.WatchManagerFromInspector$$get_TelemetryAnnotation
ENTRY_POINT: 06350860
PROGRAM: Waifu-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_DebugInspectorManager_WatchManagerFromInspector__get_TelemetryAnnotation
               (void *param_1)

{
  memcpy(param_1,&stack0x00000010,0x60);
  System_Collections_Generic_HashSet<OVRTask<OVRSceneManager_Metrics>>__IntersectWithEnumerable();
  return;
}


