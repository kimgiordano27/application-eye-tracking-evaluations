/*
FUNCTION_NAME: FUN_03182230
ENTRY_POINT: 03182230
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_15;telemetry_or_network_hits_5
*/


void FUN_03182230(undefined8 *param_1,long *param_2,int param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  
  if ((DAT_03ff21f9 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_13297);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff21f9 = 1;
  }
  puVar1 = StringLiteral_13297;
  if (param_3 == 2) {
    if (param_2 == (long *)0x0) goto LAB_031824d4;
    lVar4 = *param_2;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)StringLiteral_13297) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_031823b0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ae9f78(param_2,*(long *)StringLiteral_13297,2);
LAB_031823b0:
    uVar3 = (*(code *)*puVar2)(param_2,puVar2[1]);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar7 = FUN_0391f968(uVar3,0,0);
    if ((uVar7 & 1) != 0) {
      lVar5 = *param_2;
      lVar4 = *(long *)puVar1;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar4) {
            iVar6 = *piVar8 + 2;
            goto LAB_0318248c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      uVar3 = 2;
      goto LAB_03182460;
    }
  }
  else if (param_3 == 3) {
    if (param_2 == (long *)0x0) goto LAB_031824d4;
    lVar4 = *param_2;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)StringLiteral_13297) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar8 + 3) * 0x10 + 0x138);
          goto LAB_03182328;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ae9f78(param_2,*(long *)StringLiteral_13297,3);
LAB_03182328:
    uVar3 = (*(code *)*puVar2)(param_2,puVar2[1]);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar7 = FUN_0391f968(uVar3,0,0);
    if ((uVar7 & 1) != 0) {
      lVar5 = *param_2;
      lVar4 = *(long *)puVar1;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar4) {
            iVar6 = *piVar8 + 3;
LAB_0318248c:
            puVar2 = (undefined8 *)(lVar5 + (long)iVar6 * 0x10 + 0x138);
            goto LAB_03182494;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      uVar3 = 3;
      goto LAB_03182460;
    }
  }
  if (param_2 != (long *)0x0) {
    lVar5 = *param_2;
    lVar4 = *(long *)puVar1;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar4) {
          iVar6 = *piVar8 + 1;
          goto LAB_0318248c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    uVar3 = 1;
LAB_03182460:
    puVar2 = (undefined8 *)FUN_01ae9f78(param_2,lVar4,uVar3);
LAB_03182494:
    uVar3 = (*(code *)*puVar2)(param_2,puVar2[1]);
    FUN_03136ee0(&uStack_50,uVar3,0,0);
    *(undefined8 *)((long)param_1 + 0x14) = uStack_3c;
    *(ulong *)((long)param_1 + 0xc) = CONCAT44(uStack_40,local_44);
    param_1[1] = CONCAT44(local_44,uStack_48);
    *param_1 = uStack_50;
    return;
  }
LAB_031824d4:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


