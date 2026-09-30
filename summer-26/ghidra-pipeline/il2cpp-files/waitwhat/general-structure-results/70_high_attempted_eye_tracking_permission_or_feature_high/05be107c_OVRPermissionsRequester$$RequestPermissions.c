/*
FUNCTION_NAME: OVRPermissionsRequester$$RequestPermissions
ENTRY_POINT: 05be107c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable
*/


void OVRPermissionsRequester__RequestPermissions(void)

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
  
  pcStack0000000000000000 = "InteractionSdk";
  uStack0000000000000008 = 0xe;
  pcStack0000000000000010 = "isdk_FingerPinchGrabAPI_GetFingerPinchDistance";
  uStack0000000000000018 = 0x2e;
  uStack0000000000000020 = DAT_012e27c8;
  uStack0000000000000028 = 0x10;
  uStack000000000000002c = 0;
  pcVar1 = (code *)thunk_FUN_031c3fd8();
  *(code **)(unaff_x22 + 0xc90) = pcVar1;
  (*pcVar1)(unaff_w21,unaff_w20);
  return;
}


