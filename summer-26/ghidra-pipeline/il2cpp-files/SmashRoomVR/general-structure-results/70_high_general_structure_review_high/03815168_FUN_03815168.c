/*
FUNCTION_NAME: FUN_03815168
ENTRY_POINT: 03815168
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


void FUN_03815168(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
  if ((DAT_03ff83c2 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff83c2 = 1;
  }
  puVar2 = 
  Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__;
  *(long *)(param_1 + 0x48) = (long)param_2;
  thunk_FUN_01b4f09c((long *)(param_1 + 0x48),param_2);
  if (param_2 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    plVar4 = (long *)0x0;
  }
  else {
    lVar5 = *(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    bVar1 = *(byte *)(lVar5 + 0x130);
    if (*(byte *)(*param_2 + 0x130) < bVar1) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar4 = param_2;
      if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != lVar5) {
        plVar4 = (long *)0x0;
      }
    }
    *(long **)(param_1 + 0x28) = plVar4;
    if (*(byte *)(*param_2 + 0x130) < bVar1) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar4 = param_2;
      if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != lVar5) {
        plVar4 = (long *)0x0;
      }
    }
  }
  thunk_FUN_01b4f09c(param_1 + 0x28,plVar4);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = UnityEngine_UIElements_BaseVisualTreeHierarchyTrackerUpdater__ProcessRemove(0);
  if (((uVar3 & 1) != 0) && (uVar3 = FUN_0391b7d0(param_1,0), (uVar3 & 1) != 0)) {
    FUN_03815748(param_1,param_2);
    return;
  }
  return;
}


