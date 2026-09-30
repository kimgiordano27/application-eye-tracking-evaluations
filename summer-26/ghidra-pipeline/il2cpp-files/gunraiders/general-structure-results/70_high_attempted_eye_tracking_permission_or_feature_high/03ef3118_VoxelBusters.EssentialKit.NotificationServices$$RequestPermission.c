/*
FUNCTION_NAME: VoxelBusters.EssentialKit.NotificationServices$$RequestPermission
ENTRY_POINT: 03ef3118
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


void VoxelBusters_EssentialKit_NotificationServices__RequestPermission
               (undefined8 *param_1,long param_2)

{
  long lVar1;
  long unaff_x19;
  
  lVar1 = FUN_030d5820(unaff_x19 + 0x28,*param_1);
  *(undefined8 *)(param_2 + 0xb4) = *(undefined8 *)(lVar1 + 0xb4);
  return;
}


