/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StopEyeTracking
ENTRY_POINT: 07cae234
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 92
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void OVRPlugin_OVRP_1_78_0__ovrp_StopEyeTracking(long param_1)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x3c) = 0x3fc00000;
    *(undefined1 *)(param_1 + 0x38) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


