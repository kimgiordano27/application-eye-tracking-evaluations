/*
FUNCTION_NAME: FUN_01cbeb38
ENTRY_POINT: 01cbeb38
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_01cbeb38(long param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03feda63 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03feda63 = 1;
  }
  puVar4 = (undefined8 *)(param_1 + 0xa8);
  uVar5 = *puVar4;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_0391f968(uVar5,0,0);
  if ((uVar2 & 1) != 0) {
    if ((param_2 & 1) != 0) {
      if (*(int *)(*(long *)
                    Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar2 = UnityEngine_UIElements_BaseVisualTreeHierarchyTrackerUpdater__ProcessRemove(0);
      lVar3 = *(long *)puVar1;
      uVar5 = *puVar4;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298(lVar3);
      }
      if ((uVar2 & 1) == 0) {
        FUN_03923b4c(uVar5,0);
      }
      else {
        FUN_03923a90();
      }
    }
    *puVar4 = 0;
    thunk_FUN_01b4f09c(puVar4,0);
    return;
  }
  return;
}


