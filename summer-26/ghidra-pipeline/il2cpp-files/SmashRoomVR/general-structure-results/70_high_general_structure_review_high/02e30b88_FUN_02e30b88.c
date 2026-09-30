/*
FUNCTION_NAME: FUN_02e30b88
ENTRY_POINT: 02e30b88
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_8;telemetry_or_network_hits_3
*/


undefined8 FUN_02e30b88(long *param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((DAT_03ff01e1 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_4019);
    thunk_FUN_01ad9084(StringLiteral_4747);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff01e1 = 1;
  }
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (param_2 == 0) goto LAB_02e30dbc;
  uVar6 = *(undefined8 *)(param_2 + 0x1f8);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar4 = FUN_03923030(uVar6,0);
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  if (*(long *)(param_2 + 0x1f8) == 0) goto LAB_02e30dbc;
  uVar4 = FUN_02dfb124(*(long *)(param_2 + 0x1f8),0);
  if ((uVar4 & 1) != 0) {
    return 0;
  }
  uVar4 = (**(code **)(*param_1 + 0x4c8))(param_1,*(undefined8 *)(*param_1 + 0x4d0));
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  if ((*(char *)((long)param_1 + 0x72) != '\0') && (*(char *)((long)param_1 + 0xc9) == '\0')) {
    return 0;
  }
  uVar6 = *(undefined8 *)(param_2 + 0x1f0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar4 = FUN_03923030(uVar6,0);
  if ((uVar4 & 1) != 0) {
    uVar6 = *(undefined8 *)(param_2 + 0x1f0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_0391f968(uVar6,param_1,0);
    if ((uVar4 & 1) != 0) {
      return 0;
    }
  }
  if ((*(char *)((long)param_1 + 0xdc) != '\0') && (iVar3 = FUN_02ddfc1c(param_2,0), iVar3 != 1)) {
    return 0;
  }
  plVar5 = *(long **)(param_2 + 0x1e8);
  if (plVar5 == (long *)0x0) {
LAB_02e30cd0:
    plVar5 = (long *)0x0;
  }
  else {
    bVar1 = *(byte *)(*(long *)StringLiteral_4019 + 0x130);
    if (*(byte *)(*plVar5 + 0x130) < bVar1) goto LAB_02e30cd0;
    if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)StringLiteral_4019)
    {
      plVar5 = (long *)0x0;
    }
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar4 = FUN_03923030(plVar5,0);
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  lVar7 = param_1[0x30];
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar4 = FUN_03923030(lVar7,0);
  if ((uVar4 & 1) != 0) {
    lVar7 = param_1[0x30];
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_03922f24(lVar7,param_2,0);
    if ((uVar4 & 1) != 0) {
      return 0;
    }
  }
  if ((char)param_1[0x19] != '\0') {
    if (((plVar5 == (long *)0x0) || (plVar5[0x18] == 0)) ||
       (lVar7 = *(long *)(plVar5[0x18] + 0x50), lVar7 == 0)) {
LAB_02e30dbc:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar4 = FUN_029072e4(lVar7,param_1,*(undefined8 *)StringLiteral_4747);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
  }
  uVar6 = FUN_02e1b5b8(param_1,param_2,0);
  return uVar6;
}


