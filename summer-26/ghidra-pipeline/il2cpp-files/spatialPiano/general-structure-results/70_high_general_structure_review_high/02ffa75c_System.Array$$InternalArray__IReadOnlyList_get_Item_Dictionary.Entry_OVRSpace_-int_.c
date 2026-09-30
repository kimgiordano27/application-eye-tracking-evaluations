/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<Dictionary.Entry<OVRSpace,-int>>
ENTRY_POINT: 02ffa75c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
System_Array__InternalArray__IReadOnlyList_get_Item<Dictionary_Entry<OVRSpace,_int>>(uint param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  byte *pbVar3;
  long unaff_x19;
  byte *unaff_x20;
  long unaff_x26;
  long unaff_x27;
  long unaff_x29;
  
  puVar1 = StringLiteral_9859;
  if (0x1c < param_1) {
    fprintf((FILE *)(StringLiteral_9859 + 0x130),"libunwind: %s - %s\n","getRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(unaff_x27 + 8) = *(undefined8 *)(unaff_x19 + (ulong)param_1 * 8);
  pbVar3 = *(byte **)(unaff_x29 + -8);
  if (pbVar3 < unaff_x20) {
    *(byte **)(unaff_x29 + -8) = pbVar3 + 1;
    puVar1 = StringLiteral_9859;
    if (*pbVar3 - 3 < 0x92) {
                    /* WARNING: Could not recover jumptable at 0x02ffa0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)((ulong)*(ushort *)(unaff_x26 + (ulong)(*pbVar3 - 3) * 2) * 4 + 0x2ffa0f4))
                        ();
      return uVar2;
    }
    fprintf((FILE *)(StringLiteral_9859 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
            "DWARF opcode not implemented");
    fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *(undefined8 *)(unaff_x27 + 8);
}


