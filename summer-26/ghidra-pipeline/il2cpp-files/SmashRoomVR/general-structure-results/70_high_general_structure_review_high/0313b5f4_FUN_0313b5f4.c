/*
FUNCTION_NAME: FUN_0313b5f4
ENTRY_POINT: 0313b5f4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_10;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_0313b5f4(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
  puVar1 = 
  Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__;
  if ((DAT_03ff1ef3 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(
                      Method_Unity_VisualScripting_StringUtility_<AllIndexesOf>d__8_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d7f908);
    DAT_03ff1ef3 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = UnityEngine_UIElements_BaseVisualTreeHierarchyTrackerUpdater__ProcessRemove(0);
  if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 0x68) != '\0')) {
    plVar3 = (long *)(param_1 + 0x60);
    lVar4 = *plVar3;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03922f24(lVar4,0,0);
    if ((uVar2 & 1) != 0) {
      lVar4 = FUN_0313bf58(param_1,*(undefined8 *)PTR_DAT_03d7f908);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar4 = FUN_01ed7044(lVar4,*(undefined8 *)
                                  Method_Unity_VisualScripting_StringUtility_<AllIndexesOf>d__8_System_Collections_IEnumerator_Reset__
                          );
      *plVar3 = lVar4;
      thunk_FUN_01b4f09c(plVar3);
      if (*plVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      FUN_038f09c4(*plVar3,1,0);
      if (*plVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      FUN_038f070c(DAT_00b555e4,*plVar3,0);
      if (*plVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      FUN_038f0794(DAT_00b55290,*plVar3,0);
      if (*plVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      FUN_038f0c70(0,0,0,0,*plVar3,0);
      if (*plVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      FUN_038f0d44(*plVar3,2,0);
    }
    FUN_0313c100(param_1);
    FUN_0313c37c(param_1);
    FUN_0313c440(param_1);
  }
  return;
}


