/*
FUNCTION_NAME: FUN_01c828f4
ENTRY_POINT: 01c828f4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_10;telemetry_or_network_hits_4
*/


void FUN_01c828f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                 undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03fed7dc & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_391);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_0__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed7dc = 1;
  }
  uVar5 = *(undefined8 *)(param_8 + 0xd8);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_03923030(uVar5,0);
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_0__;
  if ((uVar3 & 1) == 0) {
    return;
  }
  uVar5 = *(undefined8 *)(param_8 + 0xd8);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  lVar4 = FUN_01f259b0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar5,
                       *(undefined8 *)puVar1);
  if (lVar4 != 0) {
    lVar4 = FUN_01ed712c(lVar4,*(undefined8 *)StringLiteral_391);
    uVar3 = FUN_03923030(lVar4,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (lVar4 != 0) {
      FUN_01c65c44(lVar4,param_9,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


