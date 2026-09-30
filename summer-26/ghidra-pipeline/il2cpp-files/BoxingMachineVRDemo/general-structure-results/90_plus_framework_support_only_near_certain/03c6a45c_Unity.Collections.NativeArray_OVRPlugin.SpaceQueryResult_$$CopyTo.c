/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$CopyTo
ENTRY_POINT: 03c6a45c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
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
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined1 param_4 [16]
               ,undefined1 param_5 [16])

{
  long unaff_x19;
  
  *(long *)(param_1 + 0x48) = param_2._8_8_;
  *(long *)(param_1 + 0x40) = param_2._0_8_;
  *(long *)(param_1 + 0x58) = param_3._8_8_;
  *(long *)(param_1 + 0x50) = param_3._0_8_;
  *(long *)(param_1 + 0x28) = param_4._8_8_;
  *(long *)(param_1 + 0x20) = param_4._0_8_;
  *(long *)(param_1 + 0x38) = param_5._8_8_;
  *(long *)(param_1 + 0x30) = param_5._0_8_;
  thunk_FUN_02dd37b4(param_1 + 0x20,0);
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


