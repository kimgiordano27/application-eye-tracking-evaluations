/*
FUNCTION_NAME: FUN_01c42c04
ENTRY_POINT: 01c42c04
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


undefined8 FUN_01c42c04(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((DAT_03fed5a1 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed5a1 = 1;
  }
  uVar1 = FUN_0391b7d0(param_1,0);
  if ((uVar1 & 1) == 0) {
LAB_01c42cd0:
    uVar2 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x20) != '\0') {
      if (*(int *)(param_1 + 0xa0) == 0) goto LAB_01c42cd0;
      if (*(int *)(param_1 + 0xa0) == 2) {
        uVar2 = *(undefined8 *)(param_1 + 0xc0);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar1 = FUN_0391f968(uVar2,0,0);
        if ((uVar1 & 1) != 0) goto LAB_01c42cd0;
      }
    }
    uVar2 = *(undefined8 *)(param_1 + 200);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar1 = FUN_0391f968(uVar2,0,0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      if (*(char *)(*(long *)(param_1 + 200) + 0x20) == '\0') goto LAB_01c42cd0;
    }
    uVar2 = 1;
  }
  return uVar2;
}


