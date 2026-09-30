/*
FUNCTION_NAME: DeoVR.BluetoothLE.BluetoothLE$$RequestPermissions
ENTRY_POINT: 0517a478
PROGRAM: Hyper-libil2cpp.so
SCORE: 71
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable
*/


undefined8 DeoVR_BluetoothLE_BluetoothLE__RequestPermissions(long param_1)

{
  undefined8 uVar1;
  long in_x9;
  long in_x10;
  undefined8 unaff_x19;
  undefined8 *unaff_x20;
  
  if (*(long *)(in_x9 + in_x10 * 8 + -8) != param_1) {
    uVar1 = FUN_050cce48();
    unaff_x19 = thunk_FUN_04983f60(*unaff_x20);
    FUN_0517a4c0(unaff_x19,uVar1);
  }
  return unaff_x19;
}


