/*
FUNCTION_NAME: OVRSceneModelLoader$$<RequestScenePermissionAsync>g__RequestPermissionOnAndroid|9_0
ENTRY_POINT: 07429f80
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable
*/


bool OVRSceneModelLoader__<RequestScenePermissionAsync>g__RequestPermissionOnAndroid_9_0
               (long param_1,undefined8 param_2)

{
  int iVar1;
  code *pcVar2;
  long unaff_x20;
  long lStack0000000000000000;
  undefined8 uStack0000000000000008;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  lStack0000000000000000 = param_1 + 0x891;
  uStack0000000000000008 = 0x11;
  pcStack0000000000000010 = "ovr_UserReportID_GetDidCancel";
  uStack0000000000000018 = 0x1d;
  uStack0000000000000028 = 8;
  uStack000000000000002c = 0;
  uStack0000000000000020 = param_2;
  pcVar2 = (code *)thunk_FUN_03cf54f0();
  *(code **)(unaff_x20 + 0x5a0) = pcVar2;
  iVar1 = (*pcVar2)();
  return iVar1 != 0;
}


