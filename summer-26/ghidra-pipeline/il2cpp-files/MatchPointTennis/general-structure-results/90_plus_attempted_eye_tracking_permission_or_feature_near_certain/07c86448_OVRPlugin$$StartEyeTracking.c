/*
FUNCTION_NAME: OVRPlugin$$StartEyeTracking
ENTRY_POINT: 07c86448
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 98
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void OVRPlugin__StartEyeTracking(long param_1)

{
  long in_x9;
  long unaff_x20;
  
  (**(code **)(param_1 + in_x9 * 0x10 + 0x138))();
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0452a004();
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e3c();
}


