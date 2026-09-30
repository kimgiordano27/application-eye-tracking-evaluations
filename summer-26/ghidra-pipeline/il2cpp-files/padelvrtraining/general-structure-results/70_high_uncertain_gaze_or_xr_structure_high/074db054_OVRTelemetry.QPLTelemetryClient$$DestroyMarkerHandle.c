/*
FUNCTION_NAME: OVRTelemetry.QPLTelemetryClient$$DestroyMarkerHandle
ENTRY_POINT: 074db054
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 82
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void OVRTelemetry_QPLTelemetryClient__DestroyMarkerHandle(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  byte bVar2;
  long unaff_x22;
  
  puVar1 = PTR_DAT_09223d10;
  if ((*(byte *)(unaff_x22 + 0xbef) & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_09223d10);
    *(undefined1 *)(unaff_x22 + 0xbef) = 1;
  }
  FUN_071bc31c(param_1,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  bVar2 = OVRPlugin_OVRP_1_78_0__ovrp_SetControllerHapticsPcm(param_2,0);
  *(byte *)(param_1 + 0x10) = bVar2 & 1;
  return;
}


