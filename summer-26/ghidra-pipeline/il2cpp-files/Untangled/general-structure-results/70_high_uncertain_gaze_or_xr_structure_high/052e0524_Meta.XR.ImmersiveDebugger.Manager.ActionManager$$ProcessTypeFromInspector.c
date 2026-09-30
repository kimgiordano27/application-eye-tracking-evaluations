/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.ActionManager$$ProcessTypeFromInspector
ENTRY_POINT: 052e0524
PROGRAM: Untangled-libil2cpp.so
SCORE: 78
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_ActionManager__ProcessTypeFromInspector(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0xa8);
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_066cdd04(uVar1,0);
  if (*(long *)(unaff_x19 + 0x1a8) != 0) {
    FUN_066cafc0();
  }
  Meta_XR_ImmersiveDebugger_Manager_ActionManager__get_TelemetryAnnotation();
  uVar1 = FUN_066cad54();
  *(undefined8 *)(unaff_x19 + 0x1a8) = uVar1;
  thunk_FUN_02f411dc(unaff_x19 + 0x1a8,uVar1);
  return;
}


