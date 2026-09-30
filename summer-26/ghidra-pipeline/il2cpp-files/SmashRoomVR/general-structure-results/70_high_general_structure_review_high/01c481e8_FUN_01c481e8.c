/*
FUNCTION_NAME: FUN_01c481e8
ENTRY_POINT: 01c481e8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_10;telemetry_or_network_hits_3
*/


void FUN_01c481e8(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_03fed5c4 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed5c4 = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (param_2 == 0) {
LAB_01c482d8:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar4 = *(undefined8 *)(param_2 + 0x50);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_0391f968(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x130);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_0391f968(uVar4,0,0);
    if (*(long *)(param_2 + 0x50) == 0) goto LAB_01c482d8;
    lVar3 = FUN_0391c27c(*(long *)(param_2 + 0x50),0);
    if ((uVar2 & 1) == 0) {
      uVar4 = FUN_0391c27c(param_1,0);
      if (lVar3 == 0) goto LAB_01c482d8;
    }
    else {
      if (lVar3 == 0) goto LAB_01c482d8;
      uVar4 = *(undefined8 *)(param_1 + 0x130);
    }
    FUN_039294c8(lVar3,uVar4,0);
    *(undefined1 *)(param_1 + 0x1e0) = 1;
  }
  return;
}


