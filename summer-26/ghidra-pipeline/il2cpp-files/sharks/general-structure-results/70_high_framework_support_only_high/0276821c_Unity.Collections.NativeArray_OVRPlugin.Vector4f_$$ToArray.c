/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$ToArray
ENTRY_POINT: 0276821c
PROGRAM: sharks-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__ToArray
               (undefined1 param_1 [16],undefined1 param_2 [16])

{
  long unaff_x19;
  uint unaff_w20;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  long in_stack_00000018;
  
  uStack0000000000000008 = param_2._8_8_;
  uStack0000000000000000 = param_2._0_8_;
  unaff_x28[1] = param_1._8_8_;
  *unaff_x28 = param_1._0_8_;
  thunk_FUN_0188fd20(unaff_x19 + unaff_x29 * 0x10 + 0x20,0);
  if (unaff_w20 < *(uint *)(unaff_x19 + 0x18)) {
    unaff_x27[1] = uStack0000000000000008;
    *unaff_x27 = uStack0000000000000000;
    thunk_FUN_0188fd20(unaff_x19 + in_stack_00000018 * 0x10 + 0x20,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


