/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 021176e8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


uint System_Array__InternalArray__ICollection_Contains<OVRPassthroughLayer_SerializedSurfaceGeometry>
               (long param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5)

{
  uint uVar1;
  ulong uVar2;
  long unaff_x22;
  long in_stack_00000008;
  
  if (param_1 == 0) {
    FUN_01dde854();
    param_1 = *(long *)(unaff_x22 + 0x38);
  }
  in_stack_00000008 = 0;
  uVar2 = FUN_02119bfc(&stack0x00000008,*(undefined8 *)(param_1 + 0x20));
  if ((uVar2 & 1) == 0) {
    if (param_5 <= param_3) {
      uVar1 = FUN_0215d3d0(param_2,param_4,param_5,
                           *(undefined8 *)(*(long *)(unaff_x22 + 0x38) + 0x38));
      goto LAB_02117768;
    }
  }
  else if (param_5 <= param_3) {
    uVar1 = FUN_033a618c(param_2,param_4,in_stack_00000008 * param_5,0);
    goto LAB_02117768;
  }
  uVar1 = 0;
LAB_02117768:
  return uVar1 & 1;
}


