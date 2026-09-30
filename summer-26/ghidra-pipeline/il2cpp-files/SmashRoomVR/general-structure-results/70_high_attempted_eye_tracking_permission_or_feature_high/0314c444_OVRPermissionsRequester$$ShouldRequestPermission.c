/*
FUNCTION_NAME: OVRPermissionsRequester$$ShouldRequestPermission
ENTRY_POINT: 0314c444
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_6;telemetry_or_network_hits_5;attempted_eye_tracking_permission_or_feature_enable
*/


void OVRPermissionsRequester__ShouldRequestPermission(void)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  long unaff_x19;
  long *unaff_x20;
  
  lVar2 = *(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  bVar1 = *(byte *)(lVar2 + 0x130);
  if (*(byte *)(*unaff_x20 + 0x130) < bVar1) {
    plVar3 = (long *)0x0;
  }
  else {
    plVar3 = unaff_x20;
    if (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) != lVar2) {
      plVar3 = (long *)0x0;
    }
  }
  *(undefined8 *)(unaff_x19 + 0x30) = plVar3;
  if (*(byte *)(*unaff_x20 + 0x130) < bVar1) {
    unaff_x20 = (long *)0x0;
  }
  else if (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) != lVar2) {
    unaff_x20 = (long *)0x0;
  }
  thunk_FUN_01b4f09c((undefined8 *)(unaff_x19 + 0x30),unaff_x20);
  return;
}


