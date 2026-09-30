/*
FUNCTION_NAME: FUN_0386c780
ENTRY_POINT: 0386c780
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_10;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void FUN_0386c780(undefined8 param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  
  puVar1 = 
  Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__;
  if ((DAT_03ff870f & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff870f = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = UnityEngine_UIElements_BaseVisualTreeHierarchyTrackerUpdater__ProcessRemove(0);
  if ((uVar2 & 1) != 0) {
    lVar3 = *param_2;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_0391f968(lVar3,0,0);
    if ((uVar2 & 1) != 0) {
      if (*param_2 == 0) goto LAB_0386c8d8;
      lVar3 = FUN_03452478(*param_2,0);
      if (lVar3 != 0) {
        FUN_034415d8(lVar3,0);
      }
    }
  }
  *param_2 = param_3;
  thunk_FUN_01b4f09c(param_2,param_3);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = UnityEngine_UIElements_BaseVisualTreeHierarchyTrackerUpdater__ProcessRemove(0);
  if (((uVar2 & 1) != 0) && (uVar2 = FUN_0391b7d0(param_1,0), (uVar2 & 1) != 0)) {
    lVar3 = *param_2;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_0391f968(lVar3,0,0);
    if ((uVar2 & 1) != 0) {
      if (*param_2 == 0) {
LAB_0386c8d8:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar3 = FUN_03452478(*param_2,0);
      if (lVar3 != 0) {
        FUN_03441550(lVar3,0);
        return;
      }
    }
  }
  return;
}


