/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakManager$$get_TelemetryAnnotation
ENTRY_POINT: 051ad418
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


void Meta_XR_ImmersiveDebugger_Manager_TweakManager__get_TelemetryAnnotation(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  
  FUN_02dcfd18();
  lVar1 = *(long *)(unaff_x19 + 0x20);
  in_stack_00000028 = *(undefined8 *)(unaff_x20 + 0x18);
  in_stack_00000020 = *(undefined8 *)(unaff_x20 + 0x10);
  in_stack_00000030 = *(undefined8 *)(unaff_x20 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02dcfd18();
  }
  thunk_FUN_02dd2d7c(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x28),&stack0x00000020);
  if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_02dcfd18(*(long *)(unaff_x19 + 0x20));
  }
  FUN_05488220();
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  thunk_FUN_02dd2d7c(*(undefined8 *)PTR_DAT_069fc6f8,&stack0x00000060);
  return;
}


