/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$Copy
ENTRY_POINT: 045069d0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Copy
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16])

{
  long unaff_x19;
  
  *(long *)(param_1 + 0x28) = param_2._8_8_;
  *(long *)(param_1 + 0x20) = param_2._0_8_;
  *(ulong *)(unaff_x19 + 0x18) =
       CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x18) >> 0x20) + param_3._4_4_,
                (int)*(undefined8 *)(unaff_x19 + 0x18) + param_3._0_4_);
                    /* try { // try from 045069e8 to 046069eb has its CatchHandler @ 045069f4 */
  return;
}


