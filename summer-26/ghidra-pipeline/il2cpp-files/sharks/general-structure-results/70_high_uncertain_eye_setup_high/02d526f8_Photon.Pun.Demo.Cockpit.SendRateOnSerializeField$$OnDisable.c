/*
FUNCTION_NAME: Photon.Pun.Demo.Cockpit.SendRateOnSerializeField$$OnDisable
ENTRY_POINT: 02d526f8
PROGRAM: sharks-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Photon_Pun_Demo_Cockpit_SendRateOnSerializeField__OnDisable(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  char *pcStack0000000000000000;
  undefined8 uStack0000000000000008;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  pcStack0000000000000000 = "OVRPlugin";
  uStack0000000000000008 = 9;
  pcStack0000000000000010 = "ovrp_GetSystemHmd3DofModeEnabled";
  uStack0000000000000018 = 0x20;
  uStack0000000000000028 = 8;
  uStack000000000000002c = 0;
  uStack0000000000000020 = param_1;
  pcVar1 = (code *)thunk_FUN_01861e78();
  *(code **)(unaff_x20 + 0x98) = pcVar1;
  (*pcVar1)();
  return;
}


