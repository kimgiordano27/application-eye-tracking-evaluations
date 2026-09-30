/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 056fa954
PROGRAM: Hyper-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_SpaceQueryResult>(long param_1)

{
  long lVar1;
  long unaff_x20;
  void *unaff_x22;
  undefined8 in_stack_00000068;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_04980b34();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_04980b34();
  }
  FUN_07b6c540();
  memcpy(&stack0x00000008,unaff_x22,0x48);
  thunk_FUN_04983b98(*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 8),&stack0x00000008);
  FUN_08c82160();
  FUN_076844f4();
  return;
}


