/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.GizmoManager$$get_TelemetryAnnotation
ENTRY_POINT: 051a8728
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


void Meta_XR_ImmersiveDebugger_Manager_GizmoManager__get_TelemetryAnnotation(void)

{
  long lVar1;
  long unaff_x19;
  int unaff_w21;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  
  lVar1 = FUN_02dcfd18();
  FUN_03e47ac0(&stack0x00000018,unaff_w21 != 0,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x38));
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02dcfd18();
  }
  thunk_FUN_02dd2d7c(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x10));
  return;
}


