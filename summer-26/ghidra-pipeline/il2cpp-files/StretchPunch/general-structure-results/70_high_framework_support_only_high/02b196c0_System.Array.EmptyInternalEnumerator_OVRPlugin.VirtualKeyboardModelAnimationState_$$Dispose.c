/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>$$Dispose
ENTRY_POINT: 02b196c0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_Array_EmptyInternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__Dispose
               (long param_1,uint param_2)

{
  undefined4 *unaff_x19;
  
  if (param_2 < *(uint *)(param_1 + 0x18)) {
    *unaff_x19 = *(undefined4 *)(param_1 + (ulong)param_2 * 0x18 + 0x30);
    return ~param_2 >> 0x1f;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


