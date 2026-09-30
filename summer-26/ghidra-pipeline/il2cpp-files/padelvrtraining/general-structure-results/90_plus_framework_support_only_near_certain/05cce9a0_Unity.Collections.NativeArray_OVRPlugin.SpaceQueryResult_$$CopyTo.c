/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$CopyTo
ENTRY_POINT: 05cce9a0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 93
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopyTo
               (undefined8 param_1,undefined1 param_2 [16])

{
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *unaff_x24;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  
  *(undefined8 *)(unaff_x19 + 0xa8) = param_1;
  *(long *)(unaff_x19 + 0xa0) = param_2._8_8_;
  *(long *)(unaff_x19 + 0x98) = param_2._0_8_;
  thunk_FUN_03d1023c();
  FUN_06092a44();
  in_stack_00000100 = unaff_x21[2];
  in_stack_000000f8 = unaff_x21[1];
  in_stack_000000f0 = *unaff_x21;
  FUN_060921c8(&stack0x000000d8,&stack0x000000f0,*unaff_x24);
  FUN_07f09544();
  return;
}


