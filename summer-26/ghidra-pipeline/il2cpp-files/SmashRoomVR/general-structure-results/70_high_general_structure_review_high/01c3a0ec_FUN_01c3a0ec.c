/*
FUNCTION_NAME: FUN_01c3a0ec
ENTRY_POINT: 01c3a0ec
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_6;telemetry_or_network_hits_3
*/


void FUN_01c3a0ec(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((DAT_03fed559 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed559 = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(char *)(param_1 + 0x38) == '\0') {
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03922f24(uVar3,0,0);
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x70);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03922f24(uVar3,0,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
  }
  FUN_01c39ef4(param_1);
  return;
}


