/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 02f9394c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


int System_Array__InternalArray__set_Item<OVRPlugin_SpaceQueryResult>(ulong param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x22;
  long unaff_x23;
  
  do {
    memcpy(&stack0x00000018,(void *)(unaff_x23 + unaff_x22 * *(uint *)(*unaff_x20 + 0x104)),
           (ulong)*(uint *)(*unaff_x20 + 0x104));
    uVar2 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                      (*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8));
    uVar3 = FUN_04b32234(&stack0x00000018,uVar2,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10))
    ;
    if ((uVar3 & 1) != 0) {
      iVar1 = thunk_FUN_02b4b9cc();
      return iVar1 + (int)unaff_x22;
    }
    unaff_x22 = unaff_x22 + 1;
  } while ((param_1 & 0xffffffff) != unaff_x22);
  iVar1 = thunk_FUN_02b4b9cc();
  return iVar1 + -1;
}


