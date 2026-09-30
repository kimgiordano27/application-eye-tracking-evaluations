/*
FUNCTION_NAME: FUN_03815298
ENTRY_POINT: 03815298
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


void FUN_03815298(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff83c0 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff83c0 = 1;
  }
  puVar3 = (undefined8 *)(param_1 + 0x30);
  uVar4 = *puVar3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03922f24(uVar4,param_2,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if (*(int *)(*(long *)
                Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
              + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = UnityEngine_UIElements_BaseVisualTreeHierarchyTrackerUpdater__ProcessRemove(0);
  if (((uVar2 & 1) != 0) && (uVar2 = FUN_0391b7d0(param_1,0), (uVar2 & 1) != 0)) {
    FUN_038153a8(param_1);
    *(undefined8 *)(param_1 + 0x30) = param_2;
    thunk_FUN_01b4f09c(puVar3,param_2);
    FUN_03815450(param_1);
    FUN_038155d0(param_1);
    FUN_03815014(param_1);
    return;
  }
  *puVar3 = param_2;
  thunk_FUN_01b4f09c(puVar3,param_2);
  return;
}


