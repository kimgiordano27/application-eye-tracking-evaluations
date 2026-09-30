/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$op_Implicit
ENTRY_POINT: 050a6004
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__op_Implicit
               (undefined8 *param_1,undefined1 param_2 [16])

{
  uint unaff_w19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
                    /* try { // try from 050a6004 to 051a601b has its CatchHandler @ 050a6090 */
  param_1[1] = param_2._8_8_;
  *param_1 = param_2._0_8_;
  thunk_FUN_03afed3c();
  if (unaff_w19 < *(uint *)(unaff_x20 + 0x18)) {
                    /* try { // try from 050a601c to 051a607f has its CatchHandler @ 050a5f3c */
    unaff_x21[1] = in_stack_00000008;
    *unaff_x21 = in_stack_00000000;
    thunk_FUN_03afed3c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


