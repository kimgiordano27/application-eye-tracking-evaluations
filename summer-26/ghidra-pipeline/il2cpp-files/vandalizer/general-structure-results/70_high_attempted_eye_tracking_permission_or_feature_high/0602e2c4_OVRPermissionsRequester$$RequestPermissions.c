/*
FUNCTION_NAME: OVRPermissionsRequester$$RequestPermissions
ENTRY_POINT: 0602e2c4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable
*/


void OVRPermissionsRequester__RequestPermissions(long param_1)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  *(undefined8 *)(*(long *)(param_1 + 0xb8) + 8) = unaff_x20;
  thunk_FUN_0329bf60();
  *(undefined8 *)(unaff_x19 + 0x48) = unaff_x20;
  thunk_FUN_0329bf60();
  thunk_FUN_06e54964();
  return;
}


