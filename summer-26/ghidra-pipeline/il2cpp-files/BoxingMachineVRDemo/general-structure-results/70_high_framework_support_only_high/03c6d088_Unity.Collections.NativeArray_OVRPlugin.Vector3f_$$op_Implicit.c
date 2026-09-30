/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$op_Implicit
ENTRY_POINT: 03c6d088
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Vector3f>__op_Implicit
               (undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  long unaff_x21;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000030;
  long in_stack_00000038;
  
  uStack0000000000000020 = param_2;
  uStack0000000000000030 = param_1;
  uVar1 = FUN_03627da8();
  if (-1 < (int)uVar1) {
    FUN_03c6d400();
  }
  if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
    return ~uVar1 >> 0x1f;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


