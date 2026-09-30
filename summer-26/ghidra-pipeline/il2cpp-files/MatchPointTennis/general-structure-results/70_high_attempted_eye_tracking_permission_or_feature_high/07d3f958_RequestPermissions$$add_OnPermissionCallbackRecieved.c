/*
FUNCTION_NAME: RequestPermissions$$add_OnPermissionCallbackRecieved
ENTRY_POINT: 07d3f958
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 79
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable
*/


void RequestPermissions__add_OnPermissionCallbackRecieved(void)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  *(undefined8 *)(unaff_x19 + 0x100) = unaff_x20;
  thunk_FUN_044bb4b4(unaff_x19 + 0x100);
  FUN_0983c674();
  return;
}


