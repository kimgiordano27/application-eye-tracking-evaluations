/*
FUNCTION_NAME: FUN_02132734
ENTRY_POINT: 02132734
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


void FUN_02132734(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_DAT_042393a8;
  if ((DAT_0452f994 & 1) == 0) {
    FUN_01c5d288(PTR_DAT_042393a8);
    FUN_01c5d288(
                VoxelBusters_CoreLibrary_EventCallback<NotificationServicesRequestPermissionResult>_TypeInfo
                );
    DAT_0452f994 = 1;
  }
  puVar2 = 
  VoxelBusters_CoreLibrary_EventCallback<NotificationServicesRequestPermissionResult>_TypeInfo;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  FUN_0210eb50(*(undefined8 *)puVar2,1,0,1,0,0,0,1,0);
  return;
}


