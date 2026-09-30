/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Qpl.Annotation>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 03ce179c
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Qpl_Annotation>__System_Collections_IEnumerator_Reset
               (code *param_1)

{
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  
  (*param_1)();
  if (unaff_x22 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ecbb70();
  }
  if (((unaff_w23 == 7) || (unaff_w23 == 0)) && (*(long *)(unaff_x19 + 0x28) != 0)) {
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_03fd0ea8();
  }
  return;
}


