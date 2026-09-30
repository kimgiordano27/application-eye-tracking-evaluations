/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 03c6b704
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__System_Collections_IEnumerable_GetEnumerator
               (long param_1,undefined1 param_2 [16])

{
  long unaff_x22;
  long in_stack_00000038;
  
  *(long *)(param_1 + 0x28) = param_2._8_8_;
  *(long *)(param_1 + 0x20) = param_2._0_8_;
  if (*(long *)(unaff_x22 + 0x28) == in_stack_00000038) {
                    /* try { // try from 03c6b724 to 03d6b7df has its CatchHandler @ 03c6b7e0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


