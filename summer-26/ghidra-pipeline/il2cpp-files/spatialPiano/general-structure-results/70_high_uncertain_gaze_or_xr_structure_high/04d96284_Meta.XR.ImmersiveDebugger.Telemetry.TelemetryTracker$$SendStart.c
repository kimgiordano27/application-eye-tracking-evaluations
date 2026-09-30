/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$SendStart
ENTRY_POINT: 04d96284
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 81
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__SendStart(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  uint in_w9;
  long unaff_x19;
  long unaff_x20;
  
  if ((in_w9 & 1) == 0) {
    param_1 = FUN_02f41e9c(param_1);
  }
  uVar1 = thunk_FUN_02f45270(param_1);
  FUN_03955e08(uVar1,*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8));
  lVar2 = *(long *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar1;
  if ((*(ushort *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x18) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  uVar1 = thunk_FUN_02f45270();
  FUN_0492c420(uVar1,*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20));
  *(undefined8 *)(unaff_x19 + 0x18) = uVar1;
  FUN_05116b38();
  return;
}


