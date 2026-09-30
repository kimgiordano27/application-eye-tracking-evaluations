/*
FUNCTION_NAME: VoxelBusters.EssentialKit.NotificationServices$$RequestPermissionInternal
ENTRY_POINT: 03ef32e8
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


void VoxelBusters_EssentialKit_NotificationServices__RequestPermissionInternal
               (undefined1 param_1 [16])

{
  long unaff_x20;
  
  *(long *)(unaff_x20 + 0x20) = param_1._8_8_;
  *(long *)(unaff_x20 + 0x18) = param_1._0_8_;
  return;
}


