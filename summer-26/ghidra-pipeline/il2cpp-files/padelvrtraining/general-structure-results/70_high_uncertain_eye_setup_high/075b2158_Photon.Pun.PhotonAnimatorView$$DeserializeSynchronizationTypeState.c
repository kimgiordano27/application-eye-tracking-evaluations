/*
FUNCTION_NAME: Photon.Pun.PhotonAnimatorView$$DeserializeSynchronizationTypeState
ENTRY_POINT: 075b2158
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Photon_Pun_PhotonAnimatorView__DeserializeSynchronizationTypeState(void)

{
  code *pcVar1;
  undefined4 unaff_w20;
  undefined4 unaff_w21;
  long unaff_x22;
  char *pcStack0000000000000000;
  undefined8 uStack0000000000000008;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  pcStack0000000000000000 = "OVRPlugin";
  uStack0000000000000008 = 9;
  pcStack0000000000000010 = "ovrp_GetBodyState4";
  uStack0000000000000018 = 0x12;
  uStack0000000000000028 = 0x10;
  uStack0000000000000020 = DAT_01910f80;
  uStack000000000000002c = 0;
  pcVar1 = (code *)thunk_FUN_03d2f1fc();
  *(code **)(unaff_x22 + 0x1e8) = pcVar1;
  (*pcVar1)(unaff_w21,unaff_w20);
  return;
}


