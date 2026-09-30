/*
FUNCTION_NAME: FUN_037ffa94
ENTRY_POINT: 037ffa94
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


void FUN_037ffa94(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff82ff & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff82ff = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  puVar1 = 
  Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__;
  uVar2 = FUN_03922f24(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
    uVar3 = FUN_0391c2b8(param_1,0);
    *(undefined8 *)(param_1 + 0x38) = uVar3;
    thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x38),uVar3);
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = UnityEngine_UIElements_BaseVisualTreeHierarchyTrackerUpdater__ProcessRemove(0);
  if (((uVar2 & 1) != 0) && (uVar2 = FUN_0391b7d0(param_1,0), (uVar2 & 1) != 0)) {
    uVar2 = FUN_037ffb98(param_1);
    if ((uVar2 & 1) != 0) {
      FUN_037fe3a8(param_1);
      return;
    }
    FUN_037fe30c(param_1);
    return;
  }
  return;
}


