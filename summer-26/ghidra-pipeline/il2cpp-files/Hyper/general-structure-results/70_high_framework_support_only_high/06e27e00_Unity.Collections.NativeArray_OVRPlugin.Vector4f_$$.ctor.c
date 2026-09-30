/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$.ctor
ENTRY_POINT: 06e27e00
PROGRAM: Hyper-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>___ctor(long param_1,int param_2,int param_3)

{
  if (param_2 < 0) {
    FUN_08d9d780(0);
  }
  if (param_3 < 0) {
    FUN_08d9d3c4(0x10,4,0);
  }
  if (*(int *)(param_1 + 0x18) - param_2 < param_3) {
    FUN_08d9cf18(0x17,0);
  }
  System_Array__InternalArray__ICollection_Contains<XRHandRecordingRawFrame>
            (*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  return;
}


