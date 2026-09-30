/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetEyeTrackingEnabled
ENTRY_POINT: 0290ee90
PROGRAM: vrfs-libil2cpp.so
SCORE: 100
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_3;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVRPlugin_OVRP_1_78_0__ovrp_GetEyeTrackingEnabled(undefined8 *param_1)

{
  long lVar1;
  undefined8 *unaff_x19;
  
  lVar1 = thunk_FUN_015d056c(*param_1);
  if (lVar1 != 0) {
    FUN_02d76b34(lVar1,0);
    FUN_01600498();
    return *unaff_x19;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


