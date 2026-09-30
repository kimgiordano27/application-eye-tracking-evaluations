/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 03553934
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Remove<OVRPlugin_SpaceQueryResult>
               (ulong param_1,long param_2)

{
  long unaff_x20;
  void *unaff_x22;
  undefined8 in_stack_00000078;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_032934b8();
  }
  if (*(int *)(param_2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_032934b8();
  }
  FUN_045ff0cc();
  memcpy(&stack0x00000008,unaff_x22,0x68);
  thunk_FUN_032a52d0(*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 8),&stack0x00000008);
  FUN_0584f87c();
  FUN_0584d7ac();
  return;
}


