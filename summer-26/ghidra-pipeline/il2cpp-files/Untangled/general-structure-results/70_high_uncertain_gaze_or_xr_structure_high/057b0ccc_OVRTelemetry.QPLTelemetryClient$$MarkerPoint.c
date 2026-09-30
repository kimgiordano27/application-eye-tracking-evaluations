/*
FUNCTION_NAME: OVRTelemetry.QPLTelemetryClient$$MarkerPoint
ENTRY_POINT: 057b0ccc
PROGRAM: Untangled-libil2cpp.so
SCORE: 82
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void OVRTelemetry_QPLTelemetryClient__MarkerPoint(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  byte bVar2;
  
  puVar1 = PTR_DAT_06d5a000;
  if ((DAT_071c5bb0 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d5a000);
    DAT_071c5bb0 = 1;
  }
  FUN_05645a04(param_1,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  bVar2 = OVRPlugin_OVRP_1_82_0___cctor(param_2,0);
  *(byte *)(param_1 + 0x10) = bVar2 & 1;
  return;
}


