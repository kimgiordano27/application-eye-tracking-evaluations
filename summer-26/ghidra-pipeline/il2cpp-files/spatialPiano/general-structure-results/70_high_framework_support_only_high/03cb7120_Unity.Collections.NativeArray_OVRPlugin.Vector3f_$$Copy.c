/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Copy
ENTRY_POINT: 03cb7120
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined1 param_4 [16]
               ,undefined1 param_5 [16])

{
  *(long *)(param_1 + 0x48) = param_3._8_8_;
  *(long *)(param_1 + 0x40) = param_3._0_8_;
  *(long *)(param_1 + 0x58) = param_2._8_8_;
  *(long *)(param_1 + 0x50) = param_2._0_8_;
  *(long *)(param_1 + 0x28) = param_4._8_8_;
  *(long *)(param_1 + 0x20) = param_4._0_8_;
  *(long *)(param_1 + 0x38) = param_5._8_8_;
  *(long *)(param_1 + 0x30) = param_5._0_8_;
  return;
}


