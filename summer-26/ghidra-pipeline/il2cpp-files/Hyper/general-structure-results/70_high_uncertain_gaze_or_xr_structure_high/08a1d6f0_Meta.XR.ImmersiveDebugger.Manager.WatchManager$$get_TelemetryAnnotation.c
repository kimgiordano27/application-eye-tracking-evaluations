/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchManager$$get_TelemetryAnnotation
ENTRY_POINT: 08a1d6f0
PROGRAM: Hyper-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_WatchManager__get_TelemetryAnnotation(void)

{
  undefined8 uVar1;
  long unaff_x19;
  
  uVar1 = thunk_FUN_04983f60();
  FUN_08d8b404(uVar1,0);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar1;
  thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0x10),uVar1);
  FUN_08dbf2f0();
  return;
}


