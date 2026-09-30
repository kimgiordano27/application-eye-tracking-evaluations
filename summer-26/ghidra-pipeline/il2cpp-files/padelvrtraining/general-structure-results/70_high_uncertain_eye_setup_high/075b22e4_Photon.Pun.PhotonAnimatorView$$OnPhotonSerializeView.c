/*
FUNCTION_NAME: Photon.Pun.PhotonAnimatorView$$OnPhotonSerializeView
ENTRY_POINT: 075b22e4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Photon_Pun_PhotonAnimatorView__OnPhotonSerializeView(void)

{
  code *pcVar1;
  long in_x12;
  undefined4 unaff_w19;
  long unaff_x20;
  char *pcStack0000000000000000;
  undefined8 uStack0000000000000008;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  uStack0000000000000020 = *(undefined8 *)(in_x12 + 0xf80);
  pcStack0000000000000000 = "OVRPlugin";
  uStack0000000000000008 = 9;
  pcStack0000000000000010 = "ovrp_QplSetConsent";
  uStack0000000000000018 = 0x12;
  uStack0000000000000028 = 4;
  uStack000000000000002c = 0;
  pcVar1 = (code *)thunk_FUN_03d2f1fc();
  *(code **)(unaff_x20 + 0x200) = pcVar1;
  (*pcVar1)(unaff_w19);
  return;
}


