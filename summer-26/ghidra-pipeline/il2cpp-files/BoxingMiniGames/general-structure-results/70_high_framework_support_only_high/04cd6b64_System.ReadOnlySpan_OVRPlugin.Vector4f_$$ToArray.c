/*
FUNCTION_NAME: System.ReadOnlySpan<OVRPlugin.Vector4f>$$ToArray
ENTRY_POINT: 04cd6b64
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_ReadOnlySpan<OVRPlugin_Vector4f>__ToArray(long param_1)

{
  int iVar1;
  undefined4 in_w9;
  undefined4 *unaff_x19;
  
  iVar1 = *(int *)(param_1 + 0xe4);
  *unaff_x19 = in_w9;
  if (iVar1 == 0) {
    thunk_FUN_036a1978();
  }
  FUN_04ec96a8(unaff_x19 + 2);
  return;
}


