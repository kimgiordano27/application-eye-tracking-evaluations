/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 048d81bc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 System_Array__InternalArray__Insert<OVRPlugin_SpaceQueryResult>(void)

{
  long *unaff_x20;
  int unaff_w21;
  undefined8 in_stack_00000008;
  
  memcpy((void *)((long)&stack0x00000008 + 4),
         (void *)((long)unaff_x20 + (ulong)*(uint *)(*unaff_x20 + 0x104) * (long)unaff_w21 + 0x20),
         (ulong)*(uint *)(*unaff_x20 + 0x104));
  return in_stack_00000008._4_4_;
}


