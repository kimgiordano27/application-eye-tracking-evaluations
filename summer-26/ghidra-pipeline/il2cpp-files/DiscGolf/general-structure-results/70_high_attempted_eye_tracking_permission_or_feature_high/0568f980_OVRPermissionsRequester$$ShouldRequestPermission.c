/*
FUNCTION_NAME: OVRPermissionsRequester$$ShouldRequestPermission
ENTRY_POINT: 0568f980
PROGRAM: DiscGolf-libil2cpp.so
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
  undefined *puVar1;
  undefined4 *unaff_x19;
  long *unaff_x23;
  
  puVar1 = Unity_Netcode_NetworkList<ulong>_TypeInfo;
  *(undefined8 *)(unaff_x19 + 0xe) = 0;
  *unaff_x19 = 0xfffffffe;
  LeanTween__value(unaff_x19 + 0xe,0);
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_03fa5794(unaff_x19 + 2,2,*(undefined8 *)puVar1);
  return;
}


