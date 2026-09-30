/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$op_Equality
ENTRY_POINT: 0399da34
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__op_Equality(long param_1)

{
  void *unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  uint unaff_w22;
  
  *(undefined4 *)(unaff_x20 + 0x18) = unaff_w21;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if (unaff_w22 < *(uint *)(param_1 + 0x18)) {
    param_1 = param_1 + (long)(int)unaff_w22 * 0xd0;
    memmove((void *)(param_1 + 0x20),unaff_x19,0xd0);
    thunk_FUN_02bb0e9c(param_1 + 0x48,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


