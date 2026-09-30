/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 03c69900
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy(long param_1)

{
  long unaff_x19;
  uint unaff_w20;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  if (unaff_w20 < *(uint *)(param_1 + 0x18)) {
    param_1 = param_1 + (long)(int)unaff_w20 * 0x40;
    *(undefined8 *)(param_1 + 0x48) = in_stack_00000028;
    *(undefined8 *)(param_1 + 0x40) = in_stack_00000020;
    *(undefined8 *)(param_1 + 0x58) = in_stack_00000038;
    *(undefined8 *)(param_1 + 0x50) = in_stack_00000030;
    *(undefined8 *)(param_1 + 0x28) = in_stack_00000008;
    *(undefined8 *)(param_1 + 0x20) = in_stack_00000000;
    *(undefined8 *)(param_1 + 0x38) = in_stack_00000018;
    *(undefined8 *)(param_1 + 0x30) = in_stack_00000010;
    thunk_FUN_02dd37b4(param_1 + 0x20,0);
    *(ulong *)(unaff_x19 + 0x18) =
         CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x18) >> 0x20) + 1,
                  (int)*(undefined8 *)(unaff_x19 + 0x18) + 1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60af0();
}


