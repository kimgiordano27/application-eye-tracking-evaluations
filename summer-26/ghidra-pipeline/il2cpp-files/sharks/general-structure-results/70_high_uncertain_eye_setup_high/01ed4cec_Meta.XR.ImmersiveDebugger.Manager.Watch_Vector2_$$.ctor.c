/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$.ctor
ENTRY_POINT: 01ed4cec
PROGRAM: sharks-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>___ctor(long param_1)

{
  long unaff_x19;
  
  FUN_02c108e4();
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02be0698(1,0);
  }
  *(long *)(param_1 + 0x10) = unaff_x19;
  thunk_FUN_0188fd20((long *)(param_1 + 0x10));
  return;
}


