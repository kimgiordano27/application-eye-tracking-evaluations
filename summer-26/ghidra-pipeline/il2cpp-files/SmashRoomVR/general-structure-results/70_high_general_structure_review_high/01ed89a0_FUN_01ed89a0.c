/*
FUNCTION_NAME: FUN_01ed89a0
ENTRY_POINT: 01ed89a0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_9;telemetry_or_network_hits_3
*/


undefined8 FUN_01ed89a0(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_2 + 0x38) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    if (*(long *)(param_2 + 0x38) == 0) {
      FUN_01ae9ed0(param_2);
    }
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_0391f968(param_1,0,0);
  uVar3 = 0;
  if ((uVar2 & 1) != 0) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar3 = FUN_01ed74d4(param_1,1,*(undefined8 *)(*(long *)(param_2 + 0x38) + 8));
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03922f24(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_01f25510(*(undefined8 *)(*(long *)(param_2 + 0x38) + 0x10));
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_0391f968(uVar3,0,0);
  return uVar3;
}


