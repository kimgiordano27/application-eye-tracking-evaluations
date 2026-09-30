/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StopEyeTracking
ENTRY_POINT: 02c565f8
PROGRAM: sharks-libil2cpp.so
SCORE: 79
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void OVRPlugin_OVRP_1_78_0__ovrp_StopEyeTracking(void)

{
  thunk_FUN_01851c08(PTR_DAT_0380ccb0);
  FUN_033ea810();
  thunk_FUN_01851c08(PTR_DAT_0380ccb8);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474();
}


