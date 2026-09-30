/*
FUNCTION_NAME: thunk_FUN_030c779c
ENTRY_POINT: 030c7798
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_6;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void thunk_FUN_030c779c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  puVar3 = StringLiteral_13202;
  if ((DAT_03ff1a03 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(StringLiteral_13202);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_13205);
    DAT_03ff1a03 = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  lVar4 = *(long *)puVar3;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar4 = *(long *)puVar3;
  }
  uVar6 = **(undefined8 **)(lVar4 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar1);
  }
  puVar2 = 
  Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__;
  uVar5 = FUN_0391f968(uVar6,0,0);
  if ((uVar5 & 1) == 0) {
    lVar4 = *(long *)puVar3;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar4 = *(long *)puVar3;
    }
    **(long **)(lVar4 + 0xb8) = param_1;
    thunk_FUN_01b4f09c(*(undefined8 *)(*(long *)puVar3 + 0xb8),param_1);
    lVar4 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
    if (lVar4 == 0) {
LAB_030c79dc:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)StringLiteral_13205;
    thunk_FUN_01b4f09c();
    Oculus_Platform_CAPI__ovr_TestUser_GetAccessToken_Native(param_1);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar5 = UnityEngine_UIElements_BaseVisualTreeHierarchyTrackerUpdater__ProcessRemove(0);
    if ((uVar5 & 1) != 0) {
      FUN_030c7f64(param_1);
      if (*(char *)(param_1 + 0x20) != '\0') {
        lVar4 = FUN_0391c27c(param_1,0);
        if (lVar4 == 0) goto LAB_030c79dc;
        uVar6 = FUN_03928c2c(lVar4,0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar1);
        }
        uVar5 = FUN_03922f24(uVar6,0,0);
        if ((uVar5 & 1) != 0) {
          uVar6 = FUN_0391c2b8(param_1,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)puVar1);
          }
          FUN_03923cd4(uVar6,0);
          return;
        }
      }
    }
  }
  else {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar5 = UnityEngine_UIElements_BaseVisualTreeHierarchyTrackerUpdater__ProcessRemove(0);
    if ((uVar5 & 1) != 0) {
      lVar4 = *(long *)puVar3;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar4 = *(long *)puVar3;
      }
      uVar6 = **(undefined8 **)(lVar4 + 0xb8);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar1);
      }
      uVar5 = FUN_0391f968(uVar6,param_1,0);
      if ((uVar5 & 1) != 0) {
        FUN_0391b78c(param_1,0,0);
        return;
      }
    }
  }
  return;
}


