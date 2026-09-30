/*
FUNCTION_NAME: OVRPermissionsRequester$$RequestPermissions
ENTRY_POINT: 076c2438
PROGRAM: m3ar-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable
*/


undefined8 OVRPermissionsRequester__RequestPermissions(void)

{
  undefined8 uVar1;
  undefined4 unaff_w19;
  long unaff_x20;
  undefined8 *unaff_x21;
  
  *(undefined1 *)(unaff_x20 + 0x16a) = 1;
  uVar1 = thunk_FUN_0406deb8(*unaff_x21);
  FUN_076c1ab8(uVar1,unaff_w19,0);
  return uVar1;
}


