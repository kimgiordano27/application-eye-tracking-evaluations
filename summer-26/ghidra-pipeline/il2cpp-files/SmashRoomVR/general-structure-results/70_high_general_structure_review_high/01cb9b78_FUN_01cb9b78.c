/*
FUNCTION_NAME: FUN_01cb9b78
ENTRY_POINT: 01cb9b78
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


void FUN_01cb9b78(long *param_1)

{
  undefined8 uVar1;
  
  if ((DAT_03feda38 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_1081);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03feda38 = 1;
  }
  (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
  if (param_1[8] != 0) {
    if (*(int *)(param_1[8] + 0x18) != 0) {
      return;
    }
    uVar1 = FUN_0391c2b8(param_1,0);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    FUN_03923b4c(uVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


