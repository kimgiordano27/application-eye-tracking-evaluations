/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StopEyeTracking
ENTRY_POINT: 051ec5e8
PROGRAM: hellodot-libil2cpp.so
SCORE: 92
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void OVRPlugin_OVRP_1_78_0__ovrp_StopEyeTracking(code *param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x22;
  long unaff_x23;
  
  if (param_1 == (code *)0x0) {
    param_1 = (code *)thunk_FUN_02ceaad8();
    *(code **)(unaff_x23 + 0x860) = param_1;
  }
  lVar1 = 0;
  if (unaff_x22 != 0) {
    lVar1 = unaff_x22 + 0x20;
  }
  (*param_1)(param_2,lVar1);
  return;
}


