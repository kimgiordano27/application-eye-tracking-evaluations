/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<XmlTextWriter.Namespace>
ENTRY_POINT: 02eab898
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


bool System_Array__InternalArray__IEnumerable_GetEnumerator<XmlTextWriter_Namespace>(void)

{
  undefined1 in_CY;
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  uint uVar4;
  long unaff_x26;
  
  while (!(bool)in_CY) {
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if (lVar3 == 0) {
LAB_02eab938:
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    if (*(uint *)(lVar3 + 0x18) <= (uint)unaff_x26) break;
    lVar2 = *(long *)(unaff_x19 + unaff_x25 * 8);
    if (lVar2 == 0) goto LAB_02eab938;
    lVar3 = lVar3 + unaff_x23;
    FUN_05ef082c(*(undefined4 *)(lVar3 + 0x30),*(undefined4 *)(lVar3 + 0x34),
                 *(undefined4 *)(lVar3 + 0x38),*(undefined4 *)(lVar3 + 0x3c),lVar2,0);
    lVar3 = unaff_x25 + 1;
    unaff_x24 = unaff_x24 + 0xc;
    unaff_x23 = unaff_x23 + 0x10;
    if ((int)*(uint *)(unaff_x19 + 0x18) <= (int)lVar3 + -4) {
      return unaff_w21 == unaff_w22;
    }
    unaff_x26 = unaff_x25 + -3;
    uVar4 = (uint)unaff_x26;
    if (*(uint *)(unaff_x19 + 0x18) <= uVar4) break;
    lVar2 = *(long *)(unaff_x20 + 0x18);
    if (lVar2 == 0) goto LAB_02eab938;
    if (*(uint *)(lVar2 + 0x18) <= uVar4) break;
    lVar1 = *(long *)(unaff_x19 + lVar3 * 8);
    if (lVar1 == 0) goto LAB_02eab938;
    lVar2 = lVar2 + unaff_x24;
    FUN_05eef728(*(undefined4 *)(lVar2 + 0x2c),*(undefined4 *)(lVar2 + 0x30),
                 *(undefined4 *)(lVar2 + 0x34),lVar1,0);
    unaff_x25 = lVar3;
    in_CY = *(uint *)(unaff_x19 + 0x18) <= uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4def0();
}


