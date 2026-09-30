/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$Equals
ENTRY_POINT: 03b68b78
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Equals(long param_1,long param_2)

{
  undefined4 unaff_w19;
  undefined4 unaff_w20;
  long unaff_x21;
  
                    /* try { // try from 03b68b7c to 03c68c3b has its CatchHandler @ 03b687b8 */
  FUN_03b675b0(param_2,unaff_w19,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x148));
  if (param_2 != 0) {
    FUN_04f53d58(*(undefined8 *)(unaff_x21 + 0x10),unaff_w20,*(undefined8 *)(param_2 + 0x10),0,
                 unaff_w19,0);
    *(undefined4 *)(param_2 + 0x18) = unaff_w19;
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


