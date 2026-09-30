/*
FUNCTION_NAME: OVRPermissionsRequester$$ShouldRequestPermission
ENTRY_POINT: 060fa180
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable
*/


uint OVRPermissionsRequester__ShouldRequestPermission
               (ulong param_1,undefined8 param_2,ulong param_3)

{
  return (uint)(param_1 >> (param_3 & 0x3f)) & 1;
}


