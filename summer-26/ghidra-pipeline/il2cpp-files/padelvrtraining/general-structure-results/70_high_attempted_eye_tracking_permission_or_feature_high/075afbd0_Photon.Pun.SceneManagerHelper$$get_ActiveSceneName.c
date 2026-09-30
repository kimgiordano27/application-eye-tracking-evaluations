/*
FUNCTION_NAME: Photon.Pun.SceneManagerHelper$$get_ActiveSceneName
ENTRY_POINT: 075afbd0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;attempted_use
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_eye_api_context_without_clear_sink_hits_3
*/


void Photon_Pun_SceneManagerHelper__get_ActiveSceneName(void)

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
  pcStack0000000000000010 = "ovrp_GetEyeGazesState";
  uStack0000000000000018 = 0x15;
  uStack0000000000000028 = 0x10;
  uStack0000000000000020 = DAT_01910f80;
  uStack000000000000002c = 0;
  pcVar1 = (code *)thunk_FUN_03d2f1fc();
  *(code **)(unaff_x22 + 0xfd0) = pcVar1;
  (*pcVar1)(unaff_w21,unaff_w20);
  return;
}


