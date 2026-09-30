/*
FUNCTION_NAME: FUN_02e249bc
ENTRY_POINT: 02e249bc
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


void FUN_02e249bc(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  long lVar5;
  
  if ((DAT_03ff018d & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff018d = 1;
  }
  uVar2 = (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(char *)((long)param_1 + 0x72) != '\0') {
    return;
  }
  lVar5 = param_1[0x13];
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03923030(lVar5,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  uVar2 = (**(code **)(*param_1 + 0x538))(param_1,*(undefined8 *)(*param_1 + 0x540));
  if ((uVar2 & 1) != 0) {
    return;
  }
  lVar5 = param_1[0x14];
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03923030(lVar5,0);
  if ((uVar2 & 1) != 0) {
    lVar5 = param_1[0x14];
    if (lVar5 == 0) goto LAB_02e24b50;
    if (*(char *)(lVar5 + 0x1b8) == '\0') {
      puVar3 = (undefined4 *)(lVar5 + 0x30);
    }
    else {
      if (*(long *)(lVar5 + 0x208) == 0) goto LAB_02e24b50;
      puVar3 = (undefined4 *)(*(long *)(lVar5 + 0x208) + 0xc0);
    }
    uVar4 = *puVar3;
    uVar2 = FUN_02e24b54(param_1,uVar4);
    if (((uVar2 & 1) != 0) &&
       (uVar2 = (**(code **)(*param_1 + 0x3a8))
                          (param_1,param_1[0x14],0,*(undefined8 *)(*param_1 + 0x3b0)),
       (uVar2 & 1) != 0)) goto LAB_02e24b40;
  }
  lVar5 = param_1[0x3e];
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03923030(lVar5,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar5 = param_1[0x3e];
  if (lVar5 != 0) {
    if (*(char *)(lVar5 + 0x1b8) == '\0') {
      puVar3 = (undefined4 *)(lVar5 + 0x30);
    }
    else {
      if (*(long *)(lVar5 + 0x208) == 0) goto LAB_02e24b50;
      puVar3 = (undefined4 *)(*(long *)(lVar5 + 0x208) + 0xc0);
    }
    uVar4 = *puVar3;
    uVar2 = FUN_02e24b54(param_1,uVar4);
    if ((uVar2 & 1) == 0) {
      return;
    }
    uVar2 = (**(code **)(*param_1 + 0x3a8))
                      (param_1,param_1[0x3e],0,*(undefined8 *)(*param_1 + 0x3b0));
    if ((uVar2 & 1) == 0) {
      return;
    }
LAB_02e24b40:
    *(undefined4 *)((long)param_1 + 0x3fc) = uVar4;
    return;
  }
LAB_02e24b50:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


