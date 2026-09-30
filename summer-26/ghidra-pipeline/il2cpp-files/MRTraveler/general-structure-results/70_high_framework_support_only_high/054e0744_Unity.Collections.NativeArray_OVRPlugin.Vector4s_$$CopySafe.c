/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$CopySafe
ENTRY_POINT: 054e0744
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__CopySafe
               (undefined8 *param_1,undefined1 param_2 [16])

{
  undefined8 in_x9;
  long unaff_x19;
  uint unaff_w20;
  undefined8 *unaff_x21;
  long unaff_x23;
  long unaff_x24;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  
  param_1[2] = in_x9;
  param_1[1] = param_2._8_8_;
  *param_1 = param_2._0_8_;
  thunk_FUN_03d233cc(unaff_x19 + unaff_x24 * 0x18 + 0x20,0);
  if (unaff_w20 < *(uint *)(unaff_x19 + 0x18)) {
    unaff_x21[2] = in_stack_000000d0;
    unaff_x21[1] = in_stack_000000c8;
    *unaff_x21 = in_stack_000000c0;
    thunk_FUN_03d233cc(unaff_x19 + unaff_x23 * 0x18 + 0x20,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


