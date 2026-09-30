/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$.ctor
ENTRY_POINT: 03cb77a8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>___ctor(undefined8 param_1,int param_2)

{
  bool in_ZR;
  int in_w8;
  int in_w9;
  long in_x11;
  
  if (!in_ZR) {
    in_w8 = in_w9;
  }
  if (in_w8 <= param_2) {
    in_w8 = param_2;
  }
  FUN_03cb6bdc(param_1,in_w8,*(undefined8 *)(*(long *)(in_x11 + 0xc0) + 0xf0));
  return;
}


