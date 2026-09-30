/*
FUNCTION_NAME: FUN_02e25908
ENTRY_POINT: 02e25908
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_16;telemetry_or_network_hits_3
*/


void FUN_02e25908(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if ((DAT_03ff0190 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff0190 = 1;
  }
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(char *)(param_1 + 0x271) == '\0') {
    return;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x218);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar4 = FUN_03923030(uVar7,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x72) != '\0') {
    return;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x1f0);
  uVar8 = *(undefined8 *)(param_1 + 0xa0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar4 = FUN_03922f24(uVar7,uVar8,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  if (*(long *)(param_1 + 0x1f0) != 0) {
    if (*(char *)(*(long *)(param_1 + 0x1f0) + 0x69) == '\0') {
      return;
    }
    if (*(long *)(param_1 + 0x218) == 0) goto LAB_02e25b70;
    if (*(char *)(*(long *)(param_1 + 0x218) + 0x24) != '\0') {
      if (DAT_03ff000c == '\0') {
        thunk_FUN_01ad9084(StringLiteral_4236);
        DAT_03ff000c = '\x01';
      }
      puVar3 = StringLiteral_4236;
      if (**(long **)(*(long *)StringLiteral_4236 + 0xb8) == 0) goto LAB_02e25b70;
      uVar7 = *(undefined8 *)(**(long **)(*(long *)StringLiteral_4236 + 0xb8) + 0x30);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar4 = FUN_03923030(uVar7,0);
      if ((uVar4 & 1) != 0) {
        if (*(long *)(param_1 + 0x218) == 0) goto LAB_02e25b70;
        lVar5 = FUN_0391c27c(*(long *)(param_1 + 0x218),0);
        if (DAT_03ff000c == '\0') {
          thunk_FUN_01ad9084(StringLiteral_4236);
          DAT_03ff000c = '\x01';
        }
        if ((**(long **)(*(long *)puVar3 + 0xb8) == 0) || (lVar5 == 0)) goto LAB_02e25b70;
        FUN_0392a01c(lVar5,*(undefined8 *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x30),0);
      }
    }
    if (*(long *)(param_1 + 0x218) == 0) goto LAB_02e25b70;
    iVar1 = *(int *)(*(long *)(param_1 + 0x218) + 0x20);
    if (iVar1 == 1) {
      return;
    }
    if (iVar1 == 0) {
      if (*(long *)(param_1 + 0x1f0) == 0) goto LAB_02e25b70;
      uVar7 = FUN_02de1fc4(*(long *)(param_1 + 0x1f0),param_1,0,0);
      FUN_02e216fc(param_1,uVar7);
    }
    uVar7 = *(undefined8 *)(param_1 + 0x290);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_03923030(uVar7,0);
    lVar5 = *(long *)(param_1 + 0x218);
    if ((uVar4 & 1) == 0) {
      if (lVar5 == 0) goto LAB_02e25b70;
    }
    else {
      if (lVar5 == 0) goto LAB_02e25b70;
      if (*(int *)(lVar5 + 0x20) == 0) {
        lVar5 = FUN_0391c27c(lVar5,0);
        FUN_02e256a4(param_1,*(undefined8 *)(param_1 + 0x1f0),*(undefined8 *)(param_1 + 0x290),0);
        if (lVar5 == 0) goto LAB_02e25b70;
        goto LAB_02e25b5c;
      }
    }
    lVar5 = FUN_0391c27c(lVar5,0);
    if (((*(long *)(param_1 + 0x1f0) != 0) &&
        (lVar6 = FUN_0391c27c(*(long *)(param_1 + 0x1f0),0), lVar6 != 0)) &&
       (FUN_03928d34(lVar6,0), lVar5 != 0)) {
LAB_02e25b5c:
      FUN_03928dd4(lVar5,0);
      return;
    }
  }
LAB_02e25b70:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


