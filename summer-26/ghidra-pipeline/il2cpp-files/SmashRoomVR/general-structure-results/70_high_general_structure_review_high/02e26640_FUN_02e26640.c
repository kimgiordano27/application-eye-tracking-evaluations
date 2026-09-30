/*
FUNCTION_NAME: FUN_02e26640
ENTRY_POINT: 02e26640
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


void FUN_02e26640(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  
  if ((DAT_03ff019e & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff019e = 1;
  }
  if ((*(char *)((long)param_1 + 0x72) == '\0') &&
     (uVar2 = FUN_02e1b3c8(param_1),
     puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__,
     (uVar2 & 1) == 0)) {
    lVar3 = param_1[0x18];
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(lVar3,0);
    if (((uVar2 & 1) != 0) && (uVar2 = FUN_02e264c4(param_1), (uVar2 & 1) == 0)) {
      lVar3 = (**(code **)(*param_1 + 0x5c8))(param_1,*(undefined8 *)(*param_1 + 0x5d0));
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar1);
      }
      uVar2 = FUN_03923030(lVar3,0);
      if ((uVar2 & 1) != 0) {
        param_1[0x3f] = lVar3;
        thunk_FUN_01b4f09c(param_1 + 0x3f,lVar3);
        if (param_1[0x3f] != 0) {
          FUN_02e310d8(param_1[0x3f],0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
    }
  }
  return;
}


