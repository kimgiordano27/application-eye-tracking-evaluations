/*
FUNCTION_NAME: VoxelBusters.EssentialKit.NotificationServicesRequestPermissionResult$$.ctor
ENTRY_POINT: 03ef5304
PROGRAM: gunraiders-libil2cpp.so
SCORE: 74
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable
*/


void VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult___ctor(long param_1)

{
  long unaff_x19;
  undefined4 unaff_w20;
  
  *(undefined4 *)(param_1 + 0x38) = unaff_w20;
  if (unaff_x19 != 0) {
    FUN_03f0ab18();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


