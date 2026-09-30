/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.GizmoManager$$get_TelemetryAnnotation
ENTRY_POINT: 052e2dc0
PROGRAM: Untangled-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_GizmoManager__get_TelemetryAnnotation(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    uVar1 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d3d980);
    FUN_05241770();
    *(undefined8 *)(unaff_x19 + 0x78) = uVar1;
    thunk_FUN_02f411dc((undefined8 *)(unaff_x19 + 0x78),uVar1);
    return;
  }
  return;
}


