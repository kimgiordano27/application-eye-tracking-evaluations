/*
FUNCTION_NAME: FUN_02e24658
ENTRY_POINT: 02e24658
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_6;telemetry_or_network_hits_3
*/


undefined8 FUN_02e24658(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((DAT_03ff018a & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff018a = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(char *)(param_1 + 0x73) == '\0') {
    if (*(char *)(param_1 + 0x70) == '\0') {
      return 1;
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0xa0);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(uVar3,0);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
    FUN_02e1f944(param_1,0);
  }
  uVar3 = FUN_02e20aa0(param_1,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar1);
  }
  uVar2 = FUN_03923030(uVar3,0);
  if ((uVar2 & 1) != 0) {
    FUN_02e20d00(param_1,param_1,uVar3);
    return 1;
  }
  return 0;
}


