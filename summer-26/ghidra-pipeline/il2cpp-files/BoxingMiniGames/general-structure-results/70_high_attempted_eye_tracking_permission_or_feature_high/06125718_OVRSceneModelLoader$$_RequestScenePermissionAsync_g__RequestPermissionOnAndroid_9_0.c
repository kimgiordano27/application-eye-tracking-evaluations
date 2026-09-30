/*
FUNCTION_NAME: OVRSceneModelLoader$$<RequestScenePermissionAsync>g__RequestPermissionOnAndroid|9_0
ENTRY_POINT: 06125718
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable
*/


undefined8
OVRSceneModelLoader__<RequestScenePermissionAsync>g__RequestPermissionOnAndroid_9_0(long param_1)

{
  if ((DAT_07ee2c62 & 1) == 0) {
    FUN_03642964(PTR_DAT_07a256b0);
    DAT_07ee2c62 = 1;
  }
  return *(undefined8 *)(param_1 + 0x28);
}


