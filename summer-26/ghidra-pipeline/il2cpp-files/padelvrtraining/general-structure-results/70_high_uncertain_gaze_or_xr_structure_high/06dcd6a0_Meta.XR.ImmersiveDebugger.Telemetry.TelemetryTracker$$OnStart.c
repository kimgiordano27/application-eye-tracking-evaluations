/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$OnStart
ENTRY_POINT: 06dcd6a0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 81
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__OnStart(undefined8 param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x20);
  uVar1 = *(ushort *)(lVar2 + 0x135);
  if ((uVar1 & 1) == 0) {
    FUN_03d8f26c(lVar2);
    lVar2 = *(long *)(param_2 + 0x20);
    uVar1 = *(ushort *)(lVar2 + 0x135);
  }
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_03d8f26c(lVar2);
  }
  thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x18));
  return;
}


