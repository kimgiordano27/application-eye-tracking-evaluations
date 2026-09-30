/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Dispose
ENTRY_POINT: 03200660
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Dispose(long param_1,int param_2)

{
  int unaff_w21;
  
  if (param_2 < 0) {
    FUN_0358b9dc(0);
  }
  if (unaff_w21 < 0) {
    FUN_0358b620(0x10,4,0);
  }
  if (*(int *)(param_1 + 0x18) - param_2 < unaff_w21) {
    FUN_0358b15c(0x17,0);
  }
  if (1 < unaff_w21) {
    FUN_02266a68(*(undefined8 *)(param_1 + 0x10),param_2,unaff_w21);
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  return;
}


