/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$Copy
ENTRY_POINT: 05ce47e0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05ce482c) */

void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Copy(void)

{
  long unaff_x22;
  undefined8 in_stack_00000018;
  
  if (*(long *)(unaff_x22 + 0x18) != 0) {
    FUN_06b6f2d8();
    if (in_stack_00000018._4_1_ != '\0') {
      thunk_FUN_03d180a8();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


