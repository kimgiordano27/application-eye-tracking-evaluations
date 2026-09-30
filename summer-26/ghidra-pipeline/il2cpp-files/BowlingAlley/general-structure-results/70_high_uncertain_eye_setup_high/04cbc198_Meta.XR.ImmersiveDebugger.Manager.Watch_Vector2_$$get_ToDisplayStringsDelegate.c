/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$get_ToDisplayStringsDelegate
ENTRY_POINT: 04cbc198
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__get_ToDisplayStringsDelegate
               (undefined8 *param_1,long param_2)

{
  undefined2 unaff_w20;
  undefined8 unaff_x21;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_05935240(0x27);
  }
  *param_1 = unaff_x21;
  thunk_FUN_0333a630(param_1);
  *(undefined2 *)(param_1 + 2) = unaff_w20;
  param_1[1] = 0;
  *(undefined1 *)((long)param_1 + 0x12) = 1;
  return;
}


