/*
FUNCTION_NAME: FUN_032aa548
ENTRY_POINT: 032aa548
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_8;telemetry_or_network_hits_3
*/


undefined8 FUN_032aa548(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((DAT_03ff584e & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff584e = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(char *)(param_1 + 0x58) != '\0') {
    return 0;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03922f24(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_0391f968(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_032aa634;
    if (*(char *)(*(long *)(param_1 + 0x28) + 0x38) == '\0') {
      return 0;
    }
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_0391f968(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x30) == 0) {
LAB_032aa634:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(char *)(*(long *)(param_1 + 0x30) + 0x98) == '\0') {
      return 0;
    }
  }
  return 1;
}


