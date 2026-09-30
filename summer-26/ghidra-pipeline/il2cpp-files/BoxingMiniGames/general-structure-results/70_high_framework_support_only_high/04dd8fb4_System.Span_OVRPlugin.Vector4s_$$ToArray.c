/*
FUNCTION_NAME: System.Span<OVRPlugin.Vector4s>$$ToArray
ENTRY_POINT: 04dd8fb4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Span<OVRPlugin_Vector4s>__ToArray(long *param_1,long param_2,uint param_3,uint param_4)

{
  if (param_2 == 0) {
    if (param_4 != 0 || param_3 != 0) {
      FUN_05e38d2c(0);
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if ((*(uint *)(param_2 + 0x18) < param_3) || (*(uint *)(param_2 + 0x18) - param_3 < param_4)) {
      FUN_05e38d2c(0);
    }
    *(uint *)(param_1 + 1) = param_4;
    *param_1 = param_2 + (long)(int)param_3 * 0x84 + 0x20;
  }
  return;
}


