/*
FUNCTION_NAME: FUN_01c5356c
ENTRY_POINT: 01c5356c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_7;telemetry_or_network_hits_3
*/


undefined4 FUN_01c5356c(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 local_40 [16];
  undefined8 local_30;
  undefined8 uStack_28;
  
  if ((DAT_03fed638 & 1) == 0) {
    thunk_FUN_01ad9084(Method_System_Resources_ResourceReader_ResourceEnumerator_Reset__);
    DAT_03fed638 = 1;
  }
  local_30 = 0;
  uStack_28 = 0;
  local_40._0_8_ = 0;
  local_40._8_8_ = 0;
  if (DAT_03fed256 == '\0') {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
    DAT_03fed256 = '\x01';
  }
  uStack_28 = (*(undefined8 **)
                (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
                0xb8))[1];
  local_30 = **(undefined8 **)
               (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
               0xb8);
  if (param_2 == 1) {
    local_40 = FUN_01c50ff8();
  }
  else {
    if (param_2 != 0) goto LAB_01c53630;
    local_40 = FUN_01c50f28();
  }
  puVar1 = Method_System_Resources_ResourceReader_ResourceEnumerator_Reset__;
  lVar2 = *(long *)Method_System_Resources_ResourceReader_ResourceEnumerator_Reset__;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar2 = *(long *)puVar1;
  }
  FUN_03b39aec(local_40,*(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x160),&local_30,0);
LAB_01c53630:
  return (undefined4)local_30;
}


