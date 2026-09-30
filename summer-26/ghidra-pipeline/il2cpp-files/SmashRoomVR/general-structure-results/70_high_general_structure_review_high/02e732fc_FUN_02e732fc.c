/*
FUNCTION_NAME: FUN_02e732fc
ENTRY_POINT: 02e732fc
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


void FUN_02e732fc(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((DAT_03ff0475 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff0475 = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar1 = FUN_038eab3c(*(long *)(param_1 + 0x28),0);
    if ((uVar1 & 1) != 0) {
      return;
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar2 = FUN_038ea7cc(*(long *)(param_1 + 0x28),0);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar1 = FUN_0391f968(uVar2,0,0);
      if ((uVar1 & 1) == 0) {
        return;
      }
      if (*(long *)(param_1 + 0x28) != 0) {
        FUN_038ea890(*(long *)(param_1 + 0x28),0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


