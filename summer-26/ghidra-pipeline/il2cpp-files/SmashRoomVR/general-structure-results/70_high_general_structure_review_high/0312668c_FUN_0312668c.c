/*
FUNCTION_NAME: FUN_0312668c
ENTRY_POINT: 0312668c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_8;telemetry_or_network_hits_4
*/


void FUN_0312668c(byte param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_03d7ee50;
  if ((DAT_03ff1dfa & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d7ee50);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff1dfa = 1;
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar3 = *(long *)puVar2;
  }
  lVar6 = *(long *)(lVar3 + 0xb8);
  if (*(byte *)(lVar6 + 8) != (param_1 & 1)) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar6 = *(long *)(*(long *)puVar2 + 0xb8);
    }
    *(byte *)(lVar6 + 8) = param_1 & 1;
    uVar4 = FUN_0312567c();
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar5 = FUN_0391f968(uVar4,0,0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar4 = FUN_0312567c();
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar1);
      }
      FUN_03923a90(uVar4,0);
      return;
    }
  }
  return;
}


