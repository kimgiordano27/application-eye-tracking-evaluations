/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.GizmoManager$$get_TelemetryAnnotation
ENTRY_POINT: 056505b8
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


undefined8 Meta_XR_ImmersiveDebugger_Manager_GizmoManager__get_TelemetryAnnotation(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_031c09d4();
  }
  if ((*(ushort *)(*(long *)(*(long *)(param_1 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
    FUN_031c09d4();
  }
  uVar1 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_031c09d4(lVar2);
  }
  FUN_04752a88(uVar1,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x38));
  return uVar1;
}


