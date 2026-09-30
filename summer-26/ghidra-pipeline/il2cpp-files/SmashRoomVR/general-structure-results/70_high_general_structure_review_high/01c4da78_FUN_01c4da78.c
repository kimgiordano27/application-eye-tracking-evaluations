/*
FUNCTION_NAME: FUN_01c4da78
ENTRY_POINT: 01c4da78
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_14;validity_or_gating_hits_21;telemetry_or_network_hits_7
*/


void FUN_01c4da78(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  if ((DAT_03fed60b & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_41);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_36);
    thunk_FUN_01ad9084(StringLiteral_38);
    DAT_03fed60b = 1;
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  lVar3 = FUN_0391c27c(param_1,0);
  if ((uVar1 & 0xfffffffe) == 2) {
    if (lVar3 != 0) {
      lVar3 = FUN_0392a75c(lVar3,*(undefined8 *)StringLiteral_38,0);
      lVar4 = FUN_0391c27c(param_1,0);
      if (lVar4 != 0) {
        lVar4 = FUN_0392a75c(lVar4,*(undefined8 *)StringLiteral_36,0);
        puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                            );
        }
        uVar5 = FUN_03923030(lVar3,0);
        if ((uVar5 & 1) != 0) {
          if (lVar3 == 0) goto LAB_01c4dd4c;
          lVar3 = FUN_01e8ac5c(lVar3,*(undefined8 *)StringLiteral_41);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)puVar2);
          }
          uVar5 = FUN_0391f968(lVar3,0,0);
          if ((uVar5 & 1) != 0) {
            if (lVar3 == 0) goto LAB_01c4dd4c;
            *(undefined1 *)(lVar3 + 0x60) = 1;
          }
        }
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar5 = FUN_03923030(lVar4,0);
        if ((uVar5 & 1) != 0) {
          if (lVar4 == 0) goto LAB_01c4dd4c;
          lVar3 = FUN_01e8ac5c(lVar4,*(undefined8 *)StringLiteral_41);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)puVar2);
          }
          uVar5 = FUN_0391f968(lVar3,0,0);
          if ((uVar5 & 1) != 0) {
            if (lVar3 == 0) goto LAB_01c4dd4c;
            *(undefined1 *)(lVar3 + 0x60) = 1;
          }
        }
        return;
      }
    }
  }
  else if (lVar3 != 0) {
    lVar3 = FUN_0392a75c(lVar3,*(undefined8 *)StringLiteral_38,0);
    lVar4 = FUN_0391c27c(param_1,0);
    if (lVar4 != 0) {
      lVar4 = FUN_0392a75c(lVar4,*(undefined8 *)StringLiteral_36,0);
      puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar5 = FUN_03923030(lVar3,0);
      if ((uVar5 & 1) != 0) {
        if (lVar3 == 0) goto LAB_01c4dd4c;
        lVar3 = FUN_01e8ac5c(lVar3,*(undefined8 *)StringLiteral_41);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar2);
        }
        uVar5 = FUN_0391f968(lVar3,0,0);
        if ((uVar5 & 1) != 0) {
          if (lVar3 == 0) goto LAB_01c4dd4c;
          *(undefined1 *)(lVar3 + 0x60) = 0;
        }
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar5 = FUN_03923030(lVar4,0);
      if ((uVar5 & 1) == 0) {
        return;
      }
      if (lVar4 != 0) {
        lVar3 = FUN_01e8ac5c(lVar4,*(undefined8 *)StringLiteral_41);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar2);
        }
        uVar5 = FUN_0391f968(lVar3,0,0);
        if ((uVar5 & 1) == 0) {
          return;
        }
        if (lVar3 != 0) {
          *(undefined1 *)(lVar3 + 0x60) = 0;
          return;
        }
      }
    }
  }
LAB_01c4dd4c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


