/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$AsReadOnlySpan
ENTRY_POINT: 06e27c50
PROGRAM: Hyper-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector3f>__AsReadOnlySpan
              (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16])

{
  long in_x9;
  long unaff_x19;
  
  *(long *)(in_x9 + 0x48) = param_3._8_8_;
  *(long *)(in_x9 + 0x40) = param_3._0_8_;
  *(long *)(in_x9 + 0x58) = param_1._8_8_;
  *(long *)(in_x9 + 0x50) = param_1._0_8_;
  thunk_FUN_049ee3d8(in_x9 + 0x20,0);
  return *(int *)(unaff_x19 + 0x18) + -1;
}


