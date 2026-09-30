/*
FUNCTION_NAME: FUN_03b22b24
ENTRY_POINT: 03b22b24
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


void FUN_03b22b24(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_03ffdb5c & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ffdb5c = 1;
  }
  if (*(char *)(param_1 + 0x30) == '\0') {
    uVar1 = FUN_03b22938();
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar2 = FUN_0391f968(uVar1,0,0);
    if ((uVar2 & 1) != 0) {
      lVar3 = FUN_03b22938();
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x160);
      }
      if (lVar3 != 0) {
        uVar4 = FUN_03b273dc(lVar3);
        FUN_03b25a30(lVar3,uVar1,uVar4);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
  }
  return;
}


