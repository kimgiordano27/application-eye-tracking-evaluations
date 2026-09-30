/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$AsReadOnlySpan
ENTRY_POINT: 04507074
PROGRAM: waitwhat-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__AsReadOnlySpan(long param_1)

{
  long in_x9;
  long unaff_x19;
  long unaff_x21;
  int unaff_w24;
  long unaff_x25;
  long in_stack_00000048;
  
  (**(code **)(param_1 + in_x9 * 0x10 + 0x138))();
  if (unaff_x21 != 0) {
    if (*(long *)(unaff_x25 + 0x28) == in_stack_00000048) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd0();
    }
    goto LAB_04507184;
  }
  if (unaff_w24 == 5) {
LAB_045070b0:
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  }
  else if (unaff_w24 == 0) {
    FUN_04507a9c();
    goto LAB_045070b0;
  }
  if (*(long *)(unaff_x25 + 0x28) == in_stack_00000048) {
    return;
  }
LAB_04507184:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


