/*
FUNCTION_NAME: OVRPlugin.OVRP_1_68_0$$.cctor
ENTRY_POINT: 074ad624
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 93
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin_OVRP_1_68_0___cctor(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  long unaff_x19;
  long unaff_x20;
  char *pcStack0000000000000000;
  undefined8 uStack0000000000000008;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  pcStack0000000000000000 = "ovrplatformloader";
  uStack0000000000000008 = 0x11;
  pcStack0000000000000010 = "ovr_Voip_ReportAppVoipSessions";
  uStack0000000000000018 = 0x1e;
  uStack0000000000000028 = 8;
  uStack000000000000002c = 0;
  uStack0000000000000020 = param_1;
  pcVar2 = (code *)thunk_FUN_03d2f1fc();
  *(code **)(unaff_x20 + 0x4b0) = pcVar2;
  lVar1 = 0;
  if (unaff_x19 != 0) {
    lVar1 = unaff_x19 + 0x20;
  }
  (*pcVar2)(lVar1);
  return;
}


