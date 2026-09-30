/*
FUNCTION_NAME: OVRDebugInfo$$UpdateLatencyValues
ENTRY_POINT: 04fd339c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable
*/


void OVRDebugInfo__UpdateLatencyValues(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined8 *unaff_x21;
  long *unaff_x22;
  
  FUN_04dbdb8c();
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar2 = OVRSceneModelLoader__get_SceneManager();
  *(undefined8 *)(unaff_x19 + 0x10) = uVar2;
  thunk_FUN_02bb0e9c();
  uVar2 = FUN_04fa9c40();
  *(undefined8 *)(unaff_x19 + 0x18) = uVar2;
  thunk_FUN_02bb0e9c();
  uVar2 = FUN_04fa9e20();
  *(undefined8 *)(unaff_x19 + 0x20) = uVar2;
  uVar1 = FUN_04fa9e9c();
  *(undefined4 *)(unaff_x19 + 0x28) = uVar1;
  uVar2 = FUN_04fa9f18();
  *(undefined8 *)(unaff_x19 + 0x30) = uVar2;
  uVar2 = FUN_04fa9f94();
  *(undefined8 *)(unaff_x19 + 0x38) = uVar2;
  uVar2 = OVRSceneModelLoader__<RequestScenePermissionAsync>g__RequestPermissionOnAndroid_9_0();
  uVar3 = thunk_FUN_02b79644(*unaff_x21);
  FUN_04fd346c(uVar3,uVar2);
  *(undefined8 *)(unaff_x19 + 0x40) = uVar3;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x40),uVar3);
  return;
}


