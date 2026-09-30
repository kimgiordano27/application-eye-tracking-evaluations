/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.GizmoManager$$get_TelemetryAnnotation
ENTRY_POINT: 0315ef1c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_GizmoManager__get_TelemetryAnnotation(void)

{
  char in_NG;
  char in_OV;
  long unaff_x19;
  undefined4 unaff_w20;
  undefined4 unaff_w21;
  long unaff_x22;
  
  if (in_NG == in_OV) {
    FUN_02022bd4(*(undefined8 *)(unaff_x19 + 0x10),unaff_w21,unaff_w20,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x188));
  }
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


