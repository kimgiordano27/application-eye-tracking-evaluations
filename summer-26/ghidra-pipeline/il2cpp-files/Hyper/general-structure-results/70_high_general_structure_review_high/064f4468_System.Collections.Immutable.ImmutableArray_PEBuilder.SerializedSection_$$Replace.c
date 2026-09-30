/*
FUNCTION_NAME: System.Collections.Immutable.ImmutableArray<PEBuilder.SerializedSection>$$Replace
ENTRY_POINT: 064f4468
PROGRAM: Hyper-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void System_Collections_Immutable_ImmutableArray<PEBuilder_SerializedSection>__Replace(long param_1)

{
  uint uVar1;
  long lVar2;
  void *unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0xc0) + 8);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_04980b34();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  if ((*(ushort *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
    FUN_04980b34();
  }
  if (*unaff_x21 == 0) {
    FUN_08d9d460(0x32,0);
  }
  if ((unaff_w20 < 0) || (*(int *)((long)unaff_x21 + 0xc) <= unaff_w20)) {
    FUN_08d9d748(0);
  }
  lVar2 = *unaff_x21;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  uVar1 = (int)unaff_x21[1] + unaff_w20;
  if (*(uint *)(lVar2 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_04948194();
  }
  memmove((void *)(lVar2 + (long)(int)uVar1 * 0x60 + 0x20),unaff_x19,0x60);
  return;
}


