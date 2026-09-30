/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Dispose
ENTRY_POINT: 0417ab88
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Dispose
               (double param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int in_w8;
  int in_w9;
  double in_x10;
  
  iVar1 = -0x80000000;
  if ((double)in_w9 * param_1 != in_x10) {
    iVar1 = (int)((double)in_w9 * param_1);
  }
  if (in_w8 < iVar1) {
    FUN_0417882c(param_2,in_w8,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xf0));
    return;
  }
  return;
}


