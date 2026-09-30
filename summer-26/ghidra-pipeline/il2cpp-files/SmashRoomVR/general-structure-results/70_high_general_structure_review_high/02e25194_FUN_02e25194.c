/*
FUNCTION_NAME: FUN_02e25194
ENTRY_POINT: 02e25194
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_19;telemetry_or_network_hits_3
*/


void FUN_02e25194(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 local_34 [4];
  
  if ((DAT_03ff018f & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff018f = 1;
  }
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  local_34[0] = 0;
  if (*(char *)((long)param_1 + 0x73) == '\0') {
    return;
  }
  lVar5 = param_1[0x42];
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar4 = FUN_03923030(lVar5,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (param_1[0x14] == 0) goto LAB_02e25554;
  if (*(char *)(param_1[0x14] + 0x68) == '\0') {
    return;
  }
  if (param_1[0x42] == 0) goto LAB_02e25554;
  if (*(char *)(param_1[0x42] + 0x24) != '\0') {
    if (DAT_03ff000c == '\0') {
      thunk_FUN_01ad9084(StringLiteral_4236);
      DAT_03ff000c = '\x01';
    }
    puVar3 = StringLiteral_4236;
    if (**(long **)(*(long *)StringLiteral_4236 + 0xb8) == 0) goto LAB_02e25554;
    uVar6 = *(undefined8 *)(**(long **)(*(long *)StringLiteral_4236 + 0xb8) + 0x30);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_03923030(uVar6,0);
    if ((uVar4 & 1) != 0) {
      if (param_1[0x42] == 0) goto LAB_02e25554;
      lVar5 = FUN_0391c27c(param_1[0x42],0);
      if (DAT_03ff000c == '\0') {
        thunk_FUN_01ad9084(StringLiteral_4236);
        DAT_03ff000c = '\x01';
      }
      if ((**(long **)(*(long *)puVar3 + 0xb8) == 0) || (lVar5 == 0)) goto LAB_02e25554;
      FUN_0392a01c(lVar5,*(undefined8 *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x30),0);
    }
  }
  if (param_1[0x42] == 0) goto LAB_02e25554;
  iVar1 = *(int *)(param_1[0x42] + 0x20);
  if (iVar1 == 1) {
    return;
  }
  if (iVar1 == 0) {
    FUN_02e24518(param_1,param_1[0x14]);
    lVar5 = param_1[0x50];
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_03923030(lVar5,0);
    if ((uVar4 & 1) == 0) {
      lVar5 = param_1[0x14];
      if (lVar5 == 0) goto LAB_02e25554;
      if ((*(int *)(lVar5 + 0x24) != 1) && (*(char *)(lVar5 + 0xf4) == '\0')) goto LAB_02e25398;
      if ((int)param_1[0x2e] == 2) {
        FUN_02e257bc(param_1);
        FUN_02e25600(param_1);
        return;
      }
      lVar5 = param_1[0x42];
      lVar7 = param_1[0x2d];
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar4 = FUN_03923030(lVar7,0);
      if ((uVar4 & 1) != 0) {
        if ((char)param_1[0x41] == '\0') {
          FUN_02e25860(param_1);
          FUN_02e257bc(param_1);
        }
        lVar5 = param_1[0x2d];
        if (lVar5 == 0) goto LAB_02e25554;
        if (*(char *)(lVar5 + 0x24) != '\0') {
          if (DAT_03ff000c == '\0') {
            thunk_FUN_01ad9084(StringLiteral_4236);
            DAT_03ff000c = '\x01';
          }
          puVar3 = StringLiteral_4236;
          if (**(long **)(*(long *)StringLiteral_4236 + 0xb8) == 0) goto LAB_02e25554;
          uVar6 = *(undefined8 *)(**(long **)(*(long *)StringLiteral_4236 + 0xb8) + 0x30);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar4 = FUN_03923030(uVar6,0);
          if ((uVar4 & 1) != 0) {
            if (param_1[0x2d] == 0) goto LAB_02e25554;
            lVar7 = FUN_0391c27c(param_1[0x2d],0);
            if (DAT_03ff000c == '\0') {
              thunk_FUN_01ad9084(StringLiteral_4236);
              DAT_03ff000c = '\x01';
            }
            if ((**(long **)(*(long *)puVar3 + 0xb8) == 0) || (lVar7 == 0)) goto LAB_02e25554;
            FUN_0392a01c(lVar7,*(undefined8 *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x30),0);
          }
        }
      }
      if ((int)param_1[0x2e] != 0) {
        if ((int)param_1[0x2e] != 1) {
          return;
        }
        if (lVar5 == 0) goto LAB_02e25554;
        lVar5 = FUN_0391c27c(lVar5,0);
        (**(code **)(*param_1 + 0x638))
                  (param_1,param_1[0x14],local_34,*(undefined8 *)(*param_1 + 0x640));
        goto joined_r0x02e25540;
      }
      goto joined_r0x02e253ac;
    }
    FUN_02e25558(param_1);
    FUN_02e25600(param_1);
    if (param_1[0x42] == 0) goto LAB_02e25554;
    lVar5 = FUN_0391c27c(param_1[0x42],0);
    FUN_02e256a4(param_1,param_1[0x14],param_1[0x50],0);
  }
  else {
LAB_02e25398:
    FUN_02e25600(param_1);
    FUN_02e25558(param_1);
    lVar5 = param_1[0x42];
joined_r0x02e253ac:
    if (lVar5 == 0) goto LAB_02e25554;
    lVar5 = FUN_0391c27c(lVar5,0);
    if ((param_1[0x14] == 0) || (lVar7 = FUN_0391c27c(param_1[0x14],0), lVar7 == 0))
    goto LAB_02e25554;
    FUN_03928d34(lVar7,0);
  }
joined_r0x02e25540:
  if (lVar5 != 0) {
    FUN_03928dd4(lVar5,0);
    return;
  }
LAB_02e25554:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


