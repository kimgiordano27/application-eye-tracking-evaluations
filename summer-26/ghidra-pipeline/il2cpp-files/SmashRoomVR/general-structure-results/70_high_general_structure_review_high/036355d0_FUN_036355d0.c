/*
FUNCTION_NAME: FUN_036355d0
ENTRY_POINT: 036355d0
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


void FUN_036355d0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff72a0 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d9a950);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d9a938);
    DAT_03ff72a0 = 1;
  }
  plVar5 = (long *)(param_1 + 0xc0);
  lVar6 = *plVar5;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_0391f968(lVar6,0,0);
  if (((uVar3 & 1) != 0) ||
     (uVar3 = FUN_01e8b8bc(param_1,plVar5,*(undefined8 *)PTR_DAT_03d9a950), (uVar3 & 1) != 0)) {
    if (*plVar5 == 0) goto Unity_VisualScripting_MemberUtility_<>c__<ParametersMatch>b__45_0;
    FUN_03923d4c(*plVar5,0,0);
  }
  puVar1 = PTR_DAT_03d9a938;
  lVar6 = *(long *)PTR_DAT_03d9a938;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar6 = *(long *)puVar1;
  }
  lVar4 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
  if (lVar4 != 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar4 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
      if (lVar4 == 0) {
Unity_VisualScripting_MemberUtility_<>c__<ParametersMatch>b__45_0:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
    }
    (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),param_1,*(undefined8 *)(lVar4 + 0x28))
    ;
  }
  puVar1 = 
  Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__;
  if (*(char *)(param_1 + 0xa0) == '\0') {
    if (*(int *)(*(long *)
                  Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_038f032c(0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = UnityEngine_UIElements_BaseVisualTreeHierarchyTrackerUpdater__ProcessRemove(0);
      if (((uVar3 & 1) == 0) && (iVar2 = FUN_03925ea4(0), 0 < iVar2)) {
        FUN_03635760(param_1);
        return;
      }
    }
  }
  return;
}


