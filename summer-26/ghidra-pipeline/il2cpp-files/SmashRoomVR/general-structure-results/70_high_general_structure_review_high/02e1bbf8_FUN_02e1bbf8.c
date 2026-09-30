/*
FUNCTION_NAME: FUN_02e1bbf8
ENTRY_POINT: 02e1bbf8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_11;telemetry_or_network_hits_3
*/


void FUN_02e1bbf8(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((DAT_03ff015b & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff015b = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(long *)(param_1 + 200) == 0) goto LAB_02e1bd5c;
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 200) + 0x118);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03923030(uVar4,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  uVar4 = *(undefined8 *)(param_1 + 0xd8);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03923030(uVar4,0);
  if ((uVar2 & 1) == 0) {
LAB_02e1bcbc:
    uVar4 = *(undefined8 *)(param_1 + 0xe0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(uVar4,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if ((*(long *)(param_1 + 200) == 0) ||
       (lVar3 = *(long *)(*(long *)(param_1 + 200) + 0x118), lVar3 == 0)) goto LAB_02e1bd5c;
    uVar4 = *(undefined8 *)(lVar3 + 0x48);
    uVar5 = *(undefined8 *)(param_1 + 0xe0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03922f24(uVar4,uVar5,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
  }
  else {
    if ((*(long *)(param_1 + 200) == 0) ||
       (lVar3 = *(long *)(*(long *)(param_1 + 200) + 0x118), lVar3 == 0)) goto LAB_02e1bd5c;
    uVar4 = *(undefined8 *)(lVar3 + 0x48);
    uVar5 = *(undefined8 *)(param_1 + 0xd8);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03922f24(uVar4,uVar5,0);
    if ((uVar2 & 1) == 0) goto LAB_02e1bcbc;
  }
  if (((*(long *)(param_1 + 200) != 0) &&
      (lVar3 = *(long *)(*(long *)(param_1 + 200) + 0x118), lVar3 != 0)) &&
     (FUN_02e0f810(lVar3,0), *(long *)(param_1 + 200) != 0)) {
    FUN_02e1c54c();
    return;
  }
LAB_02e1bd5c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


