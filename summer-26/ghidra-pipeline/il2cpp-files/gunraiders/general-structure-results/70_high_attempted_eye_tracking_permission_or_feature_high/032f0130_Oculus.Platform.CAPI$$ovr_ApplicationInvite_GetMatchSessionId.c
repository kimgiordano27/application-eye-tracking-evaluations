/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_ApplicationInvite_GetMatchSessionId
ENTRY_POINT: 032f0130
PROGRAM: gunraiders-libil2cpp.so
SCORE: 71
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_3;attempted_eye_tracking_permission_or_feature_enable
*/


void Oculus_Platform_CAPI__ovr_ApplicationInvite_GetMatchSessionId(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 unaff_w19;
  undefined4 unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  
  FUN_01c5d288(VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo);
  *(undefined1 *)(unaff_x22 + 0x89) = 1;
  lVar1 = *unaff_x21;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar1 = *unaff_x21;
  }
  uVar2 = FUN_0322441c(**(undefined4 **)(lVar1 + 0xb8),unaff_w20,0);
  FUN_0322441c(uVar2,unaff_w19,0);
  return;
}


