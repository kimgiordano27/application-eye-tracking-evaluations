/*
FUNCTION_NAME: System.Collections.Generic.List<OVRPassthroughLayer.SerializedSurfaceGeometry>$$ToArray
ENTRY_POINT: 026c1c34
PROGRAM: sharks-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void System_Collections_Generic_List<OVRPassthroughLayer_SerializedSurfaceGeometry>__ToArray(void)

{
  uint in_w8;
  long lVar1;
  long in_x9;
  long unaff_x19;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  uStack0000000000000008 = in_stack_00000038;
  uStack0000000000000000 = in_stack_00000030;
  uStack0000000000000018 = in_stack_00000048;
  uStack0000000000000010 = in_stack_00000040;
  uStack0000000000000020 = in_stack_00000050;
  if (in_w8 < *(uint *)(in_x9 + 0x18)) {
    lVar1 = in_x9 + (long)(int)in_w8 * 0x28;
    *(undefined8 *)(lVar1 + 0x40) = in_stack_00000050;
    *(undefined8 *)(lVar1 + 0x28) = in_stack_00000038;
    *(undefined8 *)(lVar1 + 0x20) = in_stack_00000030;
    *(undefined8 *)(lVar1 + 0x38) = in_stack_00000048;
    *(undefined8 *)(lVar1 + 0x30) = in_stack_00000040;
    thunk_FUN_0188fd20(lVar1 + 0x28,0);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


