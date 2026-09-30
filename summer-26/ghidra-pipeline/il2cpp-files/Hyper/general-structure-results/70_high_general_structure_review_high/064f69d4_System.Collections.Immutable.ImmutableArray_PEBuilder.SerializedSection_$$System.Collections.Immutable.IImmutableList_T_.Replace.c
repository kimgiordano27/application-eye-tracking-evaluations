/*
FUNCTION_NAME: System.Collections.Immutable.ImmutableArray<PEBuilder.SerializedSection>$$System.Collections.Immutable.IImmutableList<T>.Replace
ENTRY_POINT: 064f69d4
PROGRAM: Hyper-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


int System_Collections_Immutable_ImmutableArray<PEBuilder_SerializedSection>__System_Collections_Immutable_IImmutableList<T>_Replace
              (ulong param_1)

{
  int iVar1;
  long unaff_x19;
  
  if ((param_1 & 1) == 0) {
    FUN_04980b34();
  }
  iVar1 = FUN_05635f14();
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = iVar1 - *(int *)(unaff_x19 + 8);
  }
  return iVar1;
}


