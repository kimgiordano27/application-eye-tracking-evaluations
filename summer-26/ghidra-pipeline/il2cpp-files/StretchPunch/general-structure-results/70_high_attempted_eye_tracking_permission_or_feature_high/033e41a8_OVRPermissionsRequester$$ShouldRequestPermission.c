/*
FUNCTION_NAME: OVRPermissionsRequester$$ShouldRequestPermission
ENTRY_POINT: 033e41a8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable
*/


void OVRPermissionsRequester__ShouldRequestPermission(undefined8 param_1)

{
  undefined1 auVar1 [16];
  
  auVar1 = FUN_033e3f94();
  FUN_033e4118(param_1,auVar1._0_8_,auVar1._8_8_ & 0xffffffff);
  return;
}


