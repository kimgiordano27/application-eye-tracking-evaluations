/*
FUNCTION_NAME: OVRPermissionsRequester$$ShouldRequestPermission
ENTRY_POINT: 0749bae4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable
*/


void OVRPermissionsRequester__ShouldRequestPermission(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0xb8);
  uVar3 = *(undefined8 *)(param_2 + 0xb4);
  uVar2 = *(undefined8 *)(param_2 + 0xac);
  *(undefined8 *)((long)param_1 + 0x14) = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)((long)param_1 + 0xc) = uVar1;
  param_1[1] = uVar3;
  *param_1 = uVar2;
  return;
}


