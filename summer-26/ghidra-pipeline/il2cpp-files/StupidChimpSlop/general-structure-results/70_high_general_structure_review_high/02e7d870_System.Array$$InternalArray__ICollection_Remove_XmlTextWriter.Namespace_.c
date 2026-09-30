/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<XmlTextWriter.Namespace>
ENTRY_POINT: 02e7d870
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


void System_Array__InternalArray__ICollection_Remove<XmlTextWriter_Namespace>(void)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  
  FUN_05ef0384();
  if ((*(long *)(unaff_x19 + 0x80) != 0) && (lVar2 = *(long *)(unaff_x19 + 0xb0), lVar2 != 0)) {
    if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) == 0) {
LAB_02e7d8e4:
                    /* WARNING: Subroutine does not return */
      FUN_02d4def0();
    }
    lVar1 = *(long *)(*(long *)(unaff_x19 + 0x80) + 0x10);
    if (lVar1 != 0) {
      FUN_05ef01d0(*(undefined4 *)(lVar2 + 0x44),*(undefined4 *)(lVar2 + 0x48),
                   *(undefined4 *)(lVar2 + 0x4c),lVar1,0);
      if ((*(long *)(unaff_x19 + 0x88) != 0) && (lVar2 = *(long *)(unaff_x19 + 0xb0), lVar2 != 0)) {
        if (*(uint *)(lVar2 + 0x18) < 5) goto LAB_02e7d8e4;
        lVar1 = *(long *)(*(long *)(unaff_x19 + 0x88) + 0x10);
        if (lVar1 != 0) {
          FUN_05ef01d0(*(undefined4 *)(lVar2 + 0x50),*(undefined4 *)(lVar2 + 0x54),
                       *(undefined4 *)(lVar2 + 0x58),lVar1,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


