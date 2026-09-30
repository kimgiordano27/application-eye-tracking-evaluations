/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$.cctor
ENTRY_POINT: 027833c8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>___cctor(long param_1,long param_2)

{
  FUN_033d8040(param_1,0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033a44fc(1,0);
  }
  *(long *)(param_1 + 0x10) = param_2;
  thunk_FUN_01e10808((long *)(param_1 + 0x10),param_2);
  return;
}


