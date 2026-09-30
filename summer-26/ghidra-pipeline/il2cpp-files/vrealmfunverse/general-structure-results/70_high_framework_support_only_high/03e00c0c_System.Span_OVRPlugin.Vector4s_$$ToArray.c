/*
FUNCTION_NAME: System.Span<OVRPlugin.Vector4s>$$ToArray
ENTRY_POINT: 03e00c0c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Span<OVRPlugin_Vector4s>__ToArray(long param_1)

{
  long in_x9;
  uint in_w11;
  undefined4 in_register_0000405c;
  undefined8 unaff_x19;
  
  if (in_w11 < *(uint *)(in_x9 + 0x18)) {
    *(uint *)(param_1 + 0x18) = in_w11 + 1;
    *(undefined8 *)(in_x9 + CONCAT44(in_register_0000405c,in_w11) * 8 + 0x20) = unaff_x19;
    thunk_FUN_02bb0e9c();
    return;
  }
  FUN_037a6538(param_1);
  return;
}


