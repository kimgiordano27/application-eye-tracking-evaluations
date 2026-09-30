/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Copy
ENTRY_POINT: 041793dc
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy
               (long param_1,int param_2,undefined8 param_3,undefined4 param_4,int param_5)

{
  int in_w8;
  undefined4 unaff_w19;
  
  if (in_w8 - param_2 < param_5) {
    FUN_05622cbc(0x17,0);
  }
  FUN_0562505c(*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4,unaff_w19,0);
  return;
}


