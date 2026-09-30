/*
FUNCTION_NAME: FUN_01c4d8ac
ENTRY_POINT: 01c4d8ac
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_14;telemetry_or_network_hits_4
*/


void FUN_01c4d8ac(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  if ((DAT_03fed60a & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_40);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_36);
    thunk_FUN_01ad9084(StringLiteral_38);
    DAT_03fed60a = 1;
  }
  if (*(int *)(param_1 + 0x20) != 1) {
    return;
  }
  lVar2 = FUN_0391c27c(param_1,0);
  if (lVar2 != 0) {
    lVar2 = FUN_0392a75c(lVar2,*(undefined8 *)StringLiteral_38,0);
    lVar3 = FUN_0391c27c(param_1,0);
    if (lVar3 != 0) {
      lVar3 = FUN_0392a75c(lVar3,*(undefined8 *)StringLiteral_36,0);
      puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar4 = FUN_03923030(lVar2,0);
      if ((uVar4 & 1) != 0) {
        if (lVar2 == 0) goto LAB_01c4da74;
        lVar2 = FUN_01e8ac5c(lVar2,*(undefined8 *)StringLiteral_40);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar1);
        }
        uVar4 = FUN_0391f968(lVar2,0,0);
        if ((uVar4 & 1) != 0) {
          if (lVar2 == 0) goto LAB_01c4da74;
          *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)(param_1 + 0x28);
          thunk_FUN_01b4f09c((undefined8 *)(lVar2 + 0x38));
        }
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar4 = FUN_03923030(lVar3,0);
      if ((uVar4 & 1) == 0) {
        return;
      }
      if (lVar3 != 0) {
        lVar2 = FUN_01e8ac5c(lVar3,*(undefined8 *)StringLiteral_40);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar1);
        }
        uVar4 = FUN_0391f968(lVar2,0,0);
        if ((uVar4 & 1) == 0) {
          return;
        }
        if (lVar2 != 0) {
          *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)(param_1 + 0x28);
          thunk_FUN_01b4f09c((undefined8 *)(lVar2 + 0x38));
          return;
        }
      }
    }
  }
LAB_01c4da74:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


