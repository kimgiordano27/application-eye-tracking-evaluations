/*
FUNCTION_NAME: OVRSceneModelLoader$$<RequestScenePermissionAsync>g__RequestPermissionOnAndroid|9_0
ENTRY_POINT: 05d64c64
PROGRAM: ZombiesMRFree-libil2cpp.so
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
               (long param_1)

{
  long unaff_x20;
  long *unaff_x21;
  
  FUN_02fe925c(*(undefined8 *)(param_1 + 0x3c0));
  *(undefined1 *)(unaff_x20 + 0xd48) = 1;
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_05d64c98();
  FUN_05d52e4c();
  return;
}


