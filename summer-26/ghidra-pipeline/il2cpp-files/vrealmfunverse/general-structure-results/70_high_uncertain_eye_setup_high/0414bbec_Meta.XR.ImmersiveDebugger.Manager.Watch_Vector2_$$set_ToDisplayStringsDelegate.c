/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$set_ToDisplayStringsDelegate
ENTRY_POINT: 0414bbec
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__set_ToDisplayStringsDelegate(long param_1)

{
  long lVar1;
  long in_x9;
  int *in_x10;
  uint unaff_w19;
  long unaff_x20;
  
  while (in_x9 != 0) {
    if (-1 < in_x10[8]) {
      if (*(uint *)(unaff_x20 + 0x18) <= unaff_w19) break;
      lVar1 = (long)(int)unaff_w19;
      unaff_w19 = unaff_w19 + 1;
      *(int *)(unaff_x20 + lVar1 * 4 + 0x20) = in_x10[0xe];
    }
    param_1 = param_1 + -1;
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 8;
    if (param_1 == 0) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


