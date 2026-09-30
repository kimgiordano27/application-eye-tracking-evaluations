/*
FUNCTION_NAME: FUN_03125fb8
ENTRY_POINT: 03125fb8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_7;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_03125fb8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if ((DAT_03ff1e04 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff1e04 = 1;
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    thunk_FUN_039250c8(*(long *)(param_1 + 0x60),0);
    if (*(long *)(param_1 + 0x68) != 0) {
      thunk_FUN_039250c8(*(long *)(param_1 + 0x68),0);
      puVar2 = 
      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
      ;
      puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      if (*(long *)(param_1 + 0x70) != 0) {
        thunk_FUN_039250c8(*(long *)(param_1 + 0x70),0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar3 = UnityEngine_UIElements_BaseVisualTreeHierarchyTrackerUpdater__ProcessRemove(0);
        uVar4 = *(undefined8 *)(param_1 + 0x50);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar1);
        }
        if ((uVar3 & 1) != 0) {
          FUN_03923a90();
          return;
        }
        FUN_03923b4c(uVar4,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


