/*
FUNCTION_NAME: FUN_01ed6660
ENTRY_POINT: 01ed6660
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_10;telemetry_or_network_hits_3
*/


undefined8 FUN_01ed6660(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_28;
  
  if ((*(long *)(param_3 + 0x38) == 0) &&
     (thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__),
     *(long *)(param_3 + 0x38) == 0)) {
    FUN_01ae9ed0(param_3);
  }
  local_28 = 0;
  if (param_1 == 0) {
LAB_01ed6750:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar1 = FUN_01e8b8bc(param_1,&local_28,**(undefined8 **)(param_3 + 0x38));
  if ((uVar1 & 1) == 0) {
    uVar2 = FUN_03959e14(param_1,0);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar1 = FUN_03923030(uVar2,0);
    if ((uVar1 & 1) != 0) {
      lVar3 = FUN_03959e14(param_1,0);
      if (lVar3 == 0) goto LAB_01ed6750;
      uVar1 = FUN_01e8b8bc(lVar3,&local_28,**(undefined8 **)(param_3 + 0x38));
      if ((uVar1 & 1) != 0) {
        return local_28;
      }
    }
    if ((param_2 & 1) == 0) {
      local_28 = 0;
    }
    else {
      local_28 = FUN_01e8b0b4(param_1,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x18));
    }
  }
  return local_28;
}


