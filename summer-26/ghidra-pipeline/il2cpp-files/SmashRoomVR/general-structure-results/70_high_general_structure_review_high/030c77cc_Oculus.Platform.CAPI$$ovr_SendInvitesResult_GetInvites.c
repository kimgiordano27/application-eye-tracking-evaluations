/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_SendInvitesResult_GetInvites
ENTRY_POINT: 030c77cc
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


void Oculus_Platform_CAPI__ovr_SendInvitesResult_GetInvites(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  long *unaff_x22;
  
  thunk_FUN_01ad9084(StringLiteral_13202);
  thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
  thunk_FUN_01ad9084(StringLiteral_13205);
  *(undefined1 *)(unaff_x20 + 0xa03) = 1;
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar3 = *unaff_x22;
  }
  uVar5 = **(undefined8 **)(lVar3 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar1);
  }
  puVar2 = 
  Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__;
  uVar4 = FUN_0391f968(uVar5,0,0);
  if ((uVar4 & 1) == 0) {
    lVar3 = *unaff_x22;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar3 = *unaff_x22;
    }
    **(long **)(lVar3 + 0xb8) = unaff_x19;
    thunk_FUN_01b4f09c(*(undefined8 *)(*unaff_x22 + 0xb8));
    lVar3 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
    if (lVar3 == 0) {
LAB_030c79dc:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)StringLiteral_13205;
    thunk_FUN_01b4f09c();
    Oculus_Platform_CAPI__ovr_TestUser_GetAccessToken_Native();
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = UnityEngine_UIElements_BaseVisualTreeHierarchyTrackerUpdater__ProcessRemove(0);
    if ((uVar4 & 1) != 0) {
      FUN_030c7f64();
      if (*(char *)(unaff_x19 + 0x20) != '\0') {
        lVar3 = FUN_0391c27c();
        if (lVar3 == 0) goto LAB_030c79dc;
        uVar5 = FUN_03928c2c(lVar3,0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar1);
        }
        uVar4 = FUN_03922f24(uVar5,0,0);
        if ((uVar4 & 1) != 0) {
          uVar5 = FUN_0391c2b8();
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)puVar1);
          }
          FUN_03923cd4(uVar5,0);
          return;
        }
      }
    }
  }
  else {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = UnityEngine_UIElements_BaseVisualTreeHierarchyTrackerUpdater__ProcessRemove(0);
    if ((uVar4 & 1) != 0) {
      lVar3 = *unaff_x22;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar3 = *unaff_x22;
      }
      uVar5 = **(undefined8 **)(lVar3 + 0xb8);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar1);
      }
      uVar4 = FUN_0391f968(uVar5);
      if ((uVar4 & 1) != 0) {
        FUN_0391b78c();
        return;
      }
    }
  }
  return;
}


