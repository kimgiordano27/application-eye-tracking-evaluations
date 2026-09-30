/*
FUNCTION_NAME: OVRSceneModelLoader$$<RequestScenePermissionAsync>g__RequestPermissionOnAndroid|9_0
ENTRY_POINT: 074c64dc
PROGRAM: padelvrtraining-libil2cpp.so
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
OVRSceneModelLoader__<RequestScenePermissionAsync>g__RequestPermissionOnAndroid_9_0
          (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x21;
  
  puVar1 = PTR_DAT_09223d10;
  if ((*(byte *)(unaff_x21 + 0xa8e) & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_09223d10);
    FUN_03d2d2b0(PTR_DAT_09224408);
    *(undefined1 *)(unaff_x21 + 0xa8e) = 1;
  }
  puVar2 = PTR_DAT_09224408;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  FUN_074b7d28(param_2);
  uVar3 = FUN_074b7850();
  uVar4 = thunk_FUN_03d2ef40(*(undefined8 *)puVar2);
  FUN_074dd76c(uVar4,uVar3,0);
  return uVar4;
}


