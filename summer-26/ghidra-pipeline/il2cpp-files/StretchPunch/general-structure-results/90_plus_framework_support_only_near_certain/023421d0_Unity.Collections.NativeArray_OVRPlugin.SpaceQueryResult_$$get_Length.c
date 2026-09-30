/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$get_Length
ENTRY_POINT: 023421d0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__get_Length
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16])

{
  undefined8 in_x9;
  long unaff_x19;
  uint unaff_w20;
  undefined8 uStack0000000000000040;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  
  uStack0000000000000040 = param_3._0_8_;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  if (unaff_w20 < *(uint *)(param_1 + 0x18)) {
    param_1 = param_1 + (long)(int)unaff_w20 * 0x38;
    *(undefined8 *)(param_1 + 0x50) = in_x9;
    *(undefined8 *)(param_1 + 0x38) = in_stack_00000058;
    *(undefined8 *)(param_1 + 0x30) = in_stack_00000050;
    *(undefined8 *)(param_1 + 0x48) = in_stack_00000068;
    *(undefined8 *)(param_1 + 0x40) = in_stack_00000060;
    *(long *)(param_1 + 0x28) = param_3._8_8_;
    *(undefined8 *)(param_1 + 0x20) = uStack0000000000000040;
    thunk_FUN_01e10808(param_1 + 0x20,0);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


