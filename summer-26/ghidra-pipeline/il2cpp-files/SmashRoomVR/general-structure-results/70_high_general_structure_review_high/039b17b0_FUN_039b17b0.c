/*
FUNCTION_NAME: FUN_039b17b0
ENTRY_POINT: 039b17b0
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


long FUN_039b17b0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if ((DAT_03ffc7d1 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ffc7d1 = 1;
  }
  lVar2 = FUN_039b02f4(param_1);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  iVar1 = FUN_03afa68c(lVar2,0);
  if (iVar1 == 0) {
    lVar2 = 0;
  }
  else {
    if (iVar1 == 1) {
      uVar3 = FUN_03afb088(lVar2,0);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar4 = FUN_03922f24(uVar3,0,0);
      if ((uVar4 & 1) != 0) {
        return 0;
      }
    }
    lVar2 = FUN_03afb088(lVar2,0);
    if (lVar2 == 0) {
      lVar2 = FUN_038f1768();
      return lVar2;
    }
  }
  return lVar2;
}


