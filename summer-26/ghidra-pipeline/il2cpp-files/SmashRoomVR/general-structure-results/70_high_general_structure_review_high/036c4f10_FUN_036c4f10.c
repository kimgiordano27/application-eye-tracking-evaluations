/*
FUNCTION_NAME: FUN_036c4f10
ENTRY_POINT: 036c4f10
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_8;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_036c4f10(long param_1,int param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar3 = 
  Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__;
  if ((DAT_03ff7543 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d9ced0);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_4934);
    thunk_FUN_01ad9084(PTR_DAT_03d9cee0);
    DAT_03ff7543 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar5 = UnityEngine_UIElements_BaseVisualTreeHierarchyTrackerUpdater__ProcessRemove(0);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(param_1 + 0x130) == param_2) {
      return;
    }
    if ((*(long *)(param_1 + 0x138) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_1 + 0x138) + 0x10), lVar6 == 0)) goto LAB_036c5074;
    if (*(int *)(lVar6 + 0x18) == 0) {
      return;
    }
  }
  uVar7 = *(undefined8 *)(param_1 + 0x118);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar4 = FUN_03923030(uVar7,0);
  if ((*(long *)(param_1 + 0x138) != 0) &&
     (lVar6 = *(long *)(*(long *)(param_1 + 0x138) + 0x10), lVar6 != 0)) {
    iVar2 = *(int *)(lVar6 + 0x18) + -1;
    if (param_2 <= iVar2) {
      iVar2 = param_2;
    }
    iVar1 = -(uVar4 & 1);
    if ((int)-(uVar4 & 1) <= param_2) {
      iVar1 = iVar2;
    }
    *(int *)(param_1 + 0x130) = iVar1;
    FUN_036c4b58(param_1);
    if ((param_3 & 1) == 0) {
      return;
    }
    FUN_03afb534(*(undefined8 *)PTR_DAT_03d9cee0,param_1,0);
    if (*(long *)(param_1 + 0x140) != 0) {
      FUN_0220330c(*(long *)(param_1 + 0x140),*(undefined4 *)(param_1 + 0x130),
                   *(undefined8 *)StringLiteral_4934);
      return;
    }
  }
LAB_036c5074:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


