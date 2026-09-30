/*
FUNCTION_NAME: FUN_02dcf72c
ENTRY_POINT: 02dcf72c
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


undefined8 FUN_02dcf72c(long param_1)

{
  undefined8 uVar1;
  
  if ((DAT_03fefee0 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fefee0 = 1;
  }
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_02de31b4(*(long *)(param_1 + 0x20),0);
      if (*(long *)(param_1 + 0x20) != 0) {
        uVar1 = FUN_0391c2b8(*(long *)(param_1 + 0x20),0);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                            );
        }
        FUN_03923a90(uVar1,0);
        return 0;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x18),0);
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}


