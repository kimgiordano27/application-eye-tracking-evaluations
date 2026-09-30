/*
FUNCTION_NAME: FUN_02dfcda0
ENTRY_POINT: 02dfcda0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_9;telemetry_or_network_hits_4
*/


void FUN_02dfcda0(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  plVar1 = (long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff0084 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff0084 = 1;
    plVar1 = (long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  }
  Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ = (undefined *)plVar1;
  if (((param_4 & 1) != 0) || (*(char *)(param_1 + 0x38) != '\0')) {
    lVar3 = *(long *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x30);
    if (lVar3 != 0) {
      FUN_03920f1c(param_1,lVar3,0);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(*plVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(uVar4,0);
    if ((uVar2 & 1) != 0) {
      uVar4 = FUN_02dfce7c(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                           *(undefined4 *)(param_1 + 0x30),param_1);
      uVar4 = FUN_03920cb0(param_1,uVar4,0);
      *(undefined8 *)(param_1 + 0x48) = uVar4;
      thunk_FUN_01b4f09c((long *)(param_1 + 0x48),uVar4);
      return;
    }
  }
  return;
}


