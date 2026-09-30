/*
FUNCTION_NAME: OVRSceneModelLoader$$<RequestScenePermissionAsync>g__RequestPermissionOnAndroid|9_0
ENTRY_POINT: 0340c784
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_5;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable
*/


void OVRSceneModelLoader__<RequestScenePermissionAsync>g__RequestPermissionOnAndroid_9_0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 in_w8;
  long unaff_x19;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  long *unaff_x21;
  
  *(undefined1 *)(unaff_x20 + 0xd2b) = in_w8;
  puVar1 = StringLiteral_9665;
  lVar5 = **(long **)(*(long *)StringLiteral_9665 + 0xb8);
  if (lVar5 == 0) {
    lVar5 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_5918);
    FUN_033f7080(lVar5,0,*(undefined8 *)StringLiteral_9717,0);
    **(long **)(*(long *)puVar1 + 0xb8) = lVar5;
    thunk_FUN_01e10808(*(undefined8 *)(*(long *)puVar1 + 0xb8),lVar5);
  }
  lVar3 = *unaff_x21;
  uVar4 = *(undefined8 *)(unaff_x19 + 0x18);
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar3 = *unaff_x21;
  }
  uVar2 = FUN_01d7d930(lVar3);
  FUN_0340c804(uVar2,lVar5,uVar4,uVar2);
  return;
}


