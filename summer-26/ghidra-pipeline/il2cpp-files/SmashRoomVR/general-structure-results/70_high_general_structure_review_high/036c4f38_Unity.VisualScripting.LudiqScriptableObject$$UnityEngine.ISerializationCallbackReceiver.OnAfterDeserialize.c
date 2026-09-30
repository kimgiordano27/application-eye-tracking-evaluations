/*
FUNCTION_NAME: Unity.VisualScripting.LudiqScriptableObject$$UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize
ENTRY_POINT: 036c4f38
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_8;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void Unity_VisualScripting_LudiqScriptableObject__UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
               (ulong param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  ulong unaff_x20;
  int unaff_w21;
  long unaff_x22;
  undefined8 uVar6;
  long *unaff_x23;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d9ced0);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_4934);
    thunk_FUN_01ad9084(PTR_DAT_03d9cee0);
    *(undefined1 *)(unaff_x22 + 0x543) = 1;
  }
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar4 = UnityEngine_UIElements_BaseVisualTreeHierarchyTrackerUpdater__ProcessRemove(0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(unaff_x19 + 0x130) == unaff_w21) {
      return;
    }
    if ((*(long *)(unaff_x19 + 0x138) == 0) ||
       (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x138) + 0x10), lVar5 == 0)) goto LAB_036c5074;
    if (*(int *)(lVar5 + 0x18) == 0) {
      return;
    }
  }
  uVar6 = *(undefined8 *)(unaff_x19 + 0x118);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_03923030(uVar6,0);
  if ((*(long *)(unaff_x19 + 0x138) != 0) &&
     (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x138) + 0x10), lVar5 != 0)) {
    iVar2 = *(int *)(lVar5 + 0x18) + -1;
    if (unaff_w21 <= iVar2) {
      iVar2 = unaff_w21;
    }
    iVar1 = -(uVar3 & 1);
    if ((int)-(uVar3 & 1) <= unaff_w21) {
      iVar1 = iVar2;
    }
    *(int *)(unaff_x19 + 0x130) = iVar1;
    FUN_036c4b58();
    if ((unaff_x20 & 1) == 0) {
      return;
    }
    FUN_03afb534(*(undefined8 *)PTR_DAT_03d9cee0);
    if (*(long *)(unaff_x19 + 0x140) != 0) {
      FUN_0220330c(*(long *)(unaff_x19 + 0x140),*(undefined4 *)(unaff_x19 + 0x130),
                   *(undefined8 *)StringLiteral_4934);
      return;
    }
  }
LAB_036c5074:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


