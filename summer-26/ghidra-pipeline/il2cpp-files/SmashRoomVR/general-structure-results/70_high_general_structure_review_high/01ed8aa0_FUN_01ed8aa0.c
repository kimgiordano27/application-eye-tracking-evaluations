/*
FUNCTION_NAME: FUN_01ed8aa0
ENTRY_POINT: 01ed8aa0
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


long FUN_01ed8aa0(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  
  if (*(long *)(param_3 + 0x38) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    if (*(long *)(param_3 + 0x38) == 0) {
      FUN_01ae9ed0(param_3);
    }
  }
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_0391f968(param_1,0,0);
  lVar6 = 0;
  if ((uVar3 & 1) != 0) {
    if ((param_1 == 0) ||
       (lVar4 = FUN_01ed7dcc(param_1,1,*(undefined8 *)(*(long *)(param_3 + 0x38) + 8)), lVar4 == 0))
    goto LAB_01ed8c94;
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar1) {
      uVar7 = 0;
      do {
        if (uVar1 <= uVar7) goto LAB_01ed8c98;
        lVar6 = *(long *)(lVar4 + (long)(int)uVar7 * 8 + 0x20);
        if ((lVar6 == 0) || (lVar5 = FUN_0391c2b8(lVar6,0), lVar5 == 0)) goto LAB_01ed8c94;
        uVar3 = FUN_0391fce8(lVar5,param_2,0);
        if ((uVar3 & 1) != 0) goto LAB_01ed8b88;
        uVar1 = *(uint *)(lVar4 + 0x18);
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)uVar1);
    }
    lVar6 = 0;
  }
LAB_01ed8b88:
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_03922f24(lVar6,0,0);
  if ((uVar3 & 1) != 0) {
    lVar4 = FUN_0391fd68(param_2,0);
    if (lVar4 == 0) {
LAB_01ed8c94:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar1) {
      uVar7 = 0;
      do {
        if (uVar1 <= uVar7) {
LAB_01ed8c98:
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        lVar6 = *(long *)(lVar4 + (long)(int)uVar7 * 8 + 0x20);
        if (lVar6 == 0) goto LAB_01ed8c94;
        lVar6 = FUN_01ed712c(lVar6,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x18));
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar2);
        }
        uVar3 = FUN_0391f968(lVar6,0,0);
        if ((uVar3 & 1) != 0) break;
        uVar1 = *(uint *)(lVar4 + 0x18);
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)uVar1);
    }
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_03922f24(lVar6,0,0);
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    lVar6 = FUN_01f25510(*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x20));
    return lVar6;
  }
  return lVar6;
}


