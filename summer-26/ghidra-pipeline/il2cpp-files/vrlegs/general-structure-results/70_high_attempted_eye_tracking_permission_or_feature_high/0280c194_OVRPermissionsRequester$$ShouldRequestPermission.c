/*
FUNCTION_NAME: OVRPermissionsRequester$$ShouldRequestPermission
ENTRY_POINT: 0280c194
PROGRAM: vrlegs-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable
*/


void OVRPermissionsRequester__ShouldRequestPermission(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_018748a8();
  FUN_019a7458();
  uVar1 = FUN_0280d99c();
  uVar2 = thunk_FUN_01a6ca08(PTR_DAT_03cfe128);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar1,uVar2);
}


