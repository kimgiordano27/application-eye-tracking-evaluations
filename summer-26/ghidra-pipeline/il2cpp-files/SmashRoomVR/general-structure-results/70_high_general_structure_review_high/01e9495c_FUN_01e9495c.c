/*
FUNCTION_NAME: FUN_01e9495c
ENTRY_POINT: 01e9495c
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


undefined8 FUN_01e9495c(long param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if (*(long *)(param_2 + 0x38) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    if (*(long *)(param_2 + 0x38) == 0) {
      FUN_01ae9ed0(param_2);
    }
  }
  if (param_1 != 0) {
    uVar1 = FUN_01ed712c(param_1,**(undefined8 **)(param_2 + 0x38));
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar2 = FUN_03923030(uVar1,0);
    if ((uVar2 & 1) != 0) {
      return uVar1;
    }
    uVar1 = FUN_01ed7044(param_1,*(undefined8 *)(*(long *)(param_2 + 0x38) + 0x10));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


