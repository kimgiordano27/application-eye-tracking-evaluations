/*
FUNCTION_NAME: FUN_01e94a00
ENTRY_POINT: 01e94a00
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_21;telemetry_or_network_hits_6
*/


undefined4 FUN_01e94a00(long param_1,uint param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  
  plVar1 = (long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  puVar2 = (undefined8 *)StringLiteral_2358;
  puVar3 = (undefined8 *)StringLiteral_2359;
  if (*(long *)(param_3 + 0x38) == 0) {
    thunk_FUN_01ad9084(StringLiteral_2358);
    thunk_FUN_01ad9084(StringLiteral_2359);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    plVar1 = (long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    puVar2 = (undefined8 *)StringLiteral_2358;
    puVar3 = (undefined8 *)StringLiteral_2359;
    if (*(long *)(param_3 + 0x38) == 0) {
      FUN_01ae9ed0(param_3);
      plVar1 = (long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      puVar2 = (undefined8 *)StringLiteral_2358;
      puVar3 = (undefined8 *)StringLiteral_2359;
    }
  }
  if ((int)param_2 < 0) {
    StringLiteral_2359 = (undefined *)puVar3;
    StringLiteral_2358 = (undefined *)puVar2;
    Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ = (undefined *)plVar1;
    return 0;
  }
  lVar5 = *(long *)(param_1 + 0x20);
  Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ = (undefined *)plVar1;
  StringLiteral_2358 = (undefined *)puVar2;
  StringLiteral_2359 = (undefined *)puVar3;
  if (lVar5 != 0) {
    uVar7 = *(undefined8 *)(lVar5 + 0x18);
    uVar6 = (uint)uVar7;
    if ((int)uVar6 <= (int)param_2) {
      return 0;
    }
    if (0 < (int)uVar6) {
      uVar8 = 0;
      do {
        if ((uint)uVar7 <= uVar8) goto LAB_01e94c64;
        lVar9 = (long)(int)uVar8;
        lVar5 = *(long *)(lVar5 + lVar9 * 8 + 0x20);
        if (lVar5 == 0) goto LAB_01e94c60;
        FUN_0391fb70(lVar5,0,0);
        lVar5 = *(long *)(param_1 + 0x20);
        if (lVar5 == 0) goto LAB_01e94c60;
        if (*(uint *)(lVar5 + 0x18) <= uVar8) goto LAB_01e94c64;
        lVar5 = *(long *)(lVar5 + lVar9 * 8 + 0x20);
        if (lVar5 == 0) goto LAB_01e94c60;
        lVar5 = FUN_01ed712c(lVar5,*puVar2);
        if (*(int *)(*plVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*plVar1);
        }
        uVar4 = FUN_03923030(lVar5,0);
        if ((uVar4 & 1) != 0) {
          if (lVar5 == 0) goto LAB_01e94c60;
          FUN_0391b78c(lVar5,0,0);
        }
        lVar5 = *(long *)(param_1 + 0x20);
        if (lVar5 == 0) goto LAB_01e94c60;
        if (*(uint *)(lVar5 + 0x18) <= uVar8) goto LAB_01e94c64;
        lVar5 = *(long *)(lVar5 + lVar9 * 8 + 0x20);
        if (lVar5 == 0) goto LAB_01e94c60;
        lVar5 = FUN_01ed712c(lVar5,*puVar3);
        if (*(int *)(*plVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*plVar1);
        }
        uVar4 = FUN_03923030(lVar5,0);
        if ((uVar4 & 1) != 0) {
          if (lVar5 == 0) goto LAB_01e94c60;
          FUN_0391b78c(lVar5,0,0);
        }
        lVar5 = *(long *)(param_1 + 0x20);
        if (lVar5 == 0) goto LAB_01e94c60;
        uVar7 = *(undefined8 *)(lVar5 + 0x18);
        uVar8 = uVar8 + 1;
        uVar6 = (uint)uVar7;
      } while ((int)uVar8 < (int)uVar6);
    }
    if (uVar6 <= param_2) {
LAB_01e94c64:
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    lVar5 = *(long *)(lVar5 + (long)(int)param_2 * 8 + 0x20);
    if (lVar5 != 0) {
      FUN_0391fb70(lVar5,1,0);
      lVar5 = *(long *)(param_1 + 0x20);
      if (lVar5 != 0) {
        if (*(uint *)(lVar5 + 0x18) <= param_2) goto LAB_01e94c64;
        lVar5 = *(long *)(lVar5 + (long)(int)param_2 * 8 + 0x20);
        if (lVar5 != 0) {
          lVar5 = FUN_01ed712c(lVar5,**(undefined8 **)(param_3 + 0x38));
          if (*(int *)(*plVar1 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*plVar1);
          }
          uVar4 = FUN_0391f968(lVar5,0,0);
          if ((uVar4 & 1) == 0) {
            return 1;
          }
          if (lVar5 != 0) {
            FUN_0391b78c(lVar5,1,0);
            return 1;
          }
        }
      }
    }
  }
LAB_01e94c60:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


