/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_ShouldShowTelemetryNotification
ENTRY_POINT: 074b4814
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


bool OVRPlugin_OVRP_1_106_0__ovrp_ShouldShowTelemetryNotification(void)

{
  int iVar1;
  code *pcVar2;
  long unaff_x20;
  undefined1 uStack000000000000002c;
  
  uStack000000000000002c = 0;
  pcVar2 = (code *)thunk_FUN_03d2f1fc();
  *(code **)(unaff_x20 + 0xc98) = pcVar2;
  iVar1 = (*pcVar2)();
  return iVar1 != 0;
}


