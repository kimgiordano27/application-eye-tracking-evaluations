/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.ActionManager$$get_TelemetryAnnotation
ENTRY_POINT: 052e0594
PROGRAM: Untangled-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long Meta_XR_ImmersiveDebugger_Manager_ActionManager__get_TelemetryAnnotation
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_06d3d888;
  if ((DAT_071c112b & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d3d888);
    DAT_071c112b = 1;
  }
  lVar2 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
  FUN_05645a04(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x28) = param_1;
  thunk_FUN_02f411dc((undefined8 *)(lVar2 + 0x28),param_1);
  *(undefined8 *)(lVar2 + 0x20) = param_2;
  thunk_FUN_02f411dc((undefined8 *)(lVar2 + 0x20),param_2);
  return lVar2;
}


