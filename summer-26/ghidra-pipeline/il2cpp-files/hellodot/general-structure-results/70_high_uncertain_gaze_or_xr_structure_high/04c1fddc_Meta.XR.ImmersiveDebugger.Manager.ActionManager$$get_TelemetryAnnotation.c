/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.ActionManager$$get_TelemetryAnnotation
ENTRY_POINT: 04c1fddc
PROGRAM: hellodot-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_ActionManager__get_TelemetryAnnotation(long param_1)

{
  uint in_w8;
  long unaff_x19;
  undefined8 unaff_x21;
  
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(unaff_x19 + 0x10);
  if (4 < in_w8) {
    *(undefined8 *)(param_1 + 0x40) = unaff_x21;
    FUN_04db97ac(param_1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}


