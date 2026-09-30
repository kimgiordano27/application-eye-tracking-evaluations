/*
FUNCTION_NAME: OVRSceneModelLoader$$<RequestScenePermissionAsync>g__RequestPermissionOnAndroid|9_0
ENTRY_POINT: 063d0dc8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable
*/


void OVRSceneModelLoader__<RequestScenePermissionAsync>g__RequestPermissionOnAndroid_9_0(void)

{
  code *pcVar1;
  long in_x12;
  long unaff_x20;
  char *pcStack0000000000000000;
  undefined8 uStack0000000000000008;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  uStack0000000000000020 = *(undefined8 *)(in_x12 + 0xbc0);
  pcStack0000000000000000 = "ovrplatformloader";
  uStack0000000000000008 = 0x11;
  pcStack0000000000000010 = "ovr_InstalledApplicationArray_GetSize";
  uStack0000000000000018 = 0x25;
  uStack0000000000000028 = 8;
  uStack000000000000002c = 0;
  pcVar1 = (code *)thunk_FUN_03778b88();
  *(code **)(unaff_x20 + 0x810) = pcVar1;
  (*pcVar1)();
  return;
}


