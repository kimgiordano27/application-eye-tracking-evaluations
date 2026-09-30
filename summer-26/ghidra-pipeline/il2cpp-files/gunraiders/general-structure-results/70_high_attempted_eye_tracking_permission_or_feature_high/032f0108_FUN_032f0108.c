/*
FUNCTION_NAME: FUN_032f0108
ENTRY_POINT: 032f0108
PROGRAM: gunraiders-libil2cpp.so
SCORE: 71
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable
*/


void FUN_032f0108(undefined4 param_1,undefined4 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
  if ((DAT_04533089 & 1) == 0) {
    FUN_01c5d288(VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo);
    DAT_04533089 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar2 = *(long *)puVar1;
  }
  uVar3 = FUN_0322441c(**(undefined4 **)(lVar2 + 0xb8),param_1,0);
  FUN_0322441c(uVar3,param_2,0);
  return;
}


