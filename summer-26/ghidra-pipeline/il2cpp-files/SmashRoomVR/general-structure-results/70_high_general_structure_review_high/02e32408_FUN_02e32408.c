/*
FUNCTION_NAME: FUN_02e32408
ENTRY_POINT: 02e32408
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


void FUN_02e32408(long *param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((DAT_03ff01f0 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff01f0 = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(char *)((long)param_1 + 0x1a1) != '\0') {
    return;
  }
  lVar4 = param_1[0x22];
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03923030(lVar4,0);
  if ((uVar2 & 1) == 0) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar5 = *(undefined8 *)(param_2 + 0x50);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(uVar5,0);
    if ((uVar2 & 1) == 0) {
      lVar4 = param_1[0x24];
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar2 = FUN_03923030(lVar4,0);
      if ((uVar2 & 1) == 0) {
        return;
      }
      lVar3 = *param_1;
      lVar4 = param_1[0x24];
    }
    else {
      lVar3 = *param_1;
      lVar4 = *(long *)(param_2 + 0x50);
    }
  }
  else {
    lVar3 = *param_1;
    lVar4 = param_1[0x22];
  }
                    /* WARNING: Could not recover jumptable at 0x02e32504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x5c8))(param_1,lVar4,*(undefined8 *)(lVar3 + 0x5d0));
  return;
}


