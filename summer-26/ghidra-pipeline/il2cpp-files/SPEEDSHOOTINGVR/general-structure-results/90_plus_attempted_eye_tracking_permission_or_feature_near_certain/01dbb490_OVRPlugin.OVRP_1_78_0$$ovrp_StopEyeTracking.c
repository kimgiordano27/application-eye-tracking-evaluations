/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StopEyeTracking
ENTRY_POINT: 01dbb490
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
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
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x48);
  thunk_FUN_00ffe618();
  if ((lVar1 == 0) && (lVar1 = FUN_01db85c8(param_1,1), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  thunk_FUN_00ffe618();
  *(undefined4 *)(lVar1 + 0x38) = 1;
  return;
}


