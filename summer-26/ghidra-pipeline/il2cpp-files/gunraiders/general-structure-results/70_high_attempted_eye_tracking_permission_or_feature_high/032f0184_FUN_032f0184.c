/*
FUNCTION_NAME: FUN_032f0184
ENTRY_POINT: 032f0184
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


void FUN_032f0184(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
  if ((DAT_0453308a & 1) == 0) {
    FUN_01c5d288(VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo);
    DAT_0453308a = 1;
  }
  uVar2 = FUN_032f0108(param_1,param_2);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*(long *)puVar1);
  }
  FUN_0322441c(uVar2,param_3,0);
  return;
}


