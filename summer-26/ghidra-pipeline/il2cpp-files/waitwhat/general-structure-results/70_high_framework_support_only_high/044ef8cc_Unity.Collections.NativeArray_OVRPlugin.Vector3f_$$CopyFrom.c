/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$CopyFrom
ENTRY_POINT: 044ef8cc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector3f>__CopyFrom
              (long param_1,undefined1 param_2 [16])

{
  int in_w10;
  long unaff_x19;
  undefined8 in_stack_00000010;
  
  *(int *)(unaff_x19 + 0x18) = in_w10 + 1;
  *(long *)(param_1 + 0x28) = param_2._8_8_;
  *(long *)(param_1 + 0x20) = param_2._0_8_;
  *(undefined8 *)(param_1 + 0x30) = in_stack_00000010;
  return *(int *)(unaff_x19 + 0x18) + -1;
}


