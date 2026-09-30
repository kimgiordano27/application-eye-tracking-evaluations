/*
FUNCTION_NAME: Photon.Pun.PhotonStream$$Serialize
ENTRY_POINT: 061425c8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Photon_Pun_PhotonStream__Serialize(void)

{
  code *pcVar1;
  long in_x12;
  long unaff_x20;
  char *pcStack0000000000000030;
  undefined8 uStack0000000000000038;
  char *pcStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined4 uStack0000000000000058;
  undefined1 uStack000000000000005c;
  
  uStack0000000000000050 = *(undefined8 *)(in_x12 + 0x208);
  pcStack0000000000000030 = "OVRPlugin";
  uStack0000000000000038 = 9;
  pcStack0000000000000040 = "ovrp_SuggestVirtualKeyboardLocation";
  uStack0000000000000048 = 0x23;
  uStack0000000000000058 = 0x28;
  uStack000000000000005c = 0;
  pcVar1 = (code *)thunk_FUN_0322f404(&stack0x00000030);
  *(code **)(unaff_x20 + 0xf10) = pcVar1;
  (*pcVar1)();
  return;
}


