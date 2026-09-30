/*
FUNCTION_NAME: DeoVR.BluetoothLE.IosBleOperations$$RequestPermissions
ENTRY_POINT: 0517a278
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


long DeoVR_BluetoothLE_IosBleOperations__RequestPermissions(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_050c5a40();
  *(undefined8 *)(param_1 + 0x10) = unaff_x19;
  thunk_FUN_049ee3d8();
  return param_1;
}


