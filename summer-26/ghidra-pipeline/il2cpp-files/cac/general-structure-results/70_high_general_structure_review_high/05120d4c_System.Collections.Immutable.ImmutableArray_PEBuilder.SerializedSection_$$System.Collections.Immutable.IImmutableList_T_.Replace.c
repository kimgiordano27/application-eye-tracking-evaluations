/*
FUNCTION_NAME: System.Collections.Immutable.ImmutableArray<PEBuilder.SerializedSection>$$System.Collections.Immutable.IImmutableList<T>.Replace
ENTRY_POINT: 05120d4c
PROGRAM: cac-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


undefined8
System_Collections_Immutable_ImmutableArray<PEBuilder_SerializedSection>__System_Collections_Immutable_IImmutableList<T>_Replace
          (void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x26;
  long unaff_x29;
  
  if (*(undefined8 **)(unaff_x29 + -0x10) != (undefined8 *)0x0) {
    uVar1 = FUN_08b3bef4(**(undefined8 **)(unaff_x29 + -0x10));
    return uVar1;
  }
  if (unaff_x19 == 0) {
    if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return 0;
    }
  }
  else if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f13624();
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


