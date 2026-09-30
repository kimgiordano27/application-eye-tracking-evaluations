/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 059ce1a8
PROGRAM: m3ar-libil2cpp.so
SCORE: 93
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16])

{
  *(long *)(param_1 + 0x28) = param_3._8_8_;
  *(long *)(param_1 + 0x20) = param_3._0_8_;
  *(long *)(param_1 + 0x38) = param_2._8_8_;
  *(long *)(param_1 + 0x30) = param_2._0_8_;
  return;
}


