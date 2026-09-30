/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$SendComponentTracked
ENTRY_POINT: 04d962a8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__SendComponentTracked
               (long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  
  FUN_03955e08(param_2,*(undefined8 *)(param_1 + 8));
  lVar2 = *(long *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x10) = unaff_x21;
  if ((*(ushort *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x18) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  uVar1 = thunk_FUN_02f45270();
  FUN_0492c420(uVar1,*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20));
  *(undefined8 *)(unaff_x19 + 0x18) = uVar1;
  FUN_05116b38();
  return;
}


