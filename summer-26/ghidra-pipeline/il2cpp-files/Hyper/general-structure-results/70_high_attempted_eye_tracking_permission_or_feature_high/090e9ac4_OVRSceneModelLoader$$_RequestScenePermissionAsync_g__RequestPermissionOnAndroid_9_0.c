/*
FUNCTION_NAME: OVRSceneModelLoader$$<RequestScenePermissionAsync>g__RequestPermissionOnAndroid|9_0
ENTRY_POINT: 090e9ac4
PROGRAM: Hyper-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable
*/


void OVRSceneModelLoader__<RequestScenePermissionAsync>g__RequestPermissionOnAndroid_9_0
               (undefined8 param_1)

{
  code *pcVar1;
  long in_x9;
  long unaff_x20;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  uStack0000000000000020 = *(undefined8 *)(in_x9 + 0xb68);
  uStack0000000000000028 = 8;
  uStack000000000000002c = 0;
  uStack0000000000000010 = param_1;
  pcVar1 = (code *)thunk_FUN_04984200();
  *(code **)(unaff_x20 + 0x278) = pcVar1;
  (*pcVar1)();
  return;
}


