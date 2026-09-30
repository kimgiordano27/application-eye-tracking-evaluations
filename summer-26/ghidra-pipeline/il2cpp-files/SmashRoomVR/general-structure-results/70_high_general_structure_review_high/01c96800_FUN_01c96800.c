/*
FUNCTION_NAME: FUN_01c96800
ENTRY_POINT: 01c96800
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


undefined8 FUN_01c96800(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if ((DAT_03fed896 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed896 = 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  iVar2 = FUN_0392a654(param_2,0);
  if (iVar2 == 0) {
    uVar3 = FUN_0391c27c(param_1,0);
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar4 = FUN_0391f968(param_2,uVar3,0);
    if ((uVar4 & 1) != 0) {
      uVar3 = FUN_03928c2c(param_2,0);
      uVar5 = FUN_0391c27c(param_1,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar1);
      }
      uVar4 = FUN_0391f968(uVar3,uVar5,0);
      if ((uVar4 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}


