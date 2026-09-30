/*
FUNCTION_NAME: FUN_03afb578
ENTRY_POINT: 03afb578
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_7;telemetry_or_network_hits_8
*/


undefined8 FUN_03afb578(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  puVar2 = Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__;
  if ((DAT_03ffd9db & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ffd9db = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_03b26f4c(0);
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ac7298(lVar5);
  }
  uVar4 = FUN_03923030(uVar3,0);
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  lVar5 = FUN_03b26f4c(0);
  if (lVar5 != 0) {
    lVar6 = *(long *)puVar1;
    uVar3 = *(undefined8 *)(lVar5 + 0x28);
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ac7298(lVar6);
    }
    uVar4 = FUN_03923030(uVar3,0);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    lVar5 = FUN_03b26f4c(0);
    if ((lVar5 != 0) && (*(long *)(lVar5 + 0x28) != 0)) {
      uVar3 = FUN_03b2b0bc(*(long *)(lVar5 + 0x28),0);
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


