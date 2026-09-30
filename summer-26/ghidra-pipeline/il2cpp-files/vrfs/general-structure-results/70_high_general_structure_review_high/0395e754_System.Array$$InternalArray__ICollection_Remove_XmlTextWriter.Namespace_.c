/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<XmlTextWriter.Namespace>
ENTRY_POINT: 0395e754
PROGRAM: vrfs-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


undefined8 System_Array__InternalArray__ICollection_Remove<XmlTextWriter_Namespace>(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  uint in_w8;
  int in_w9;
  uint uVar6;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x25;
  long unaff_x26;
  int unaff_w27;
  int *unaff_x28;
  undefined8 in_stack_00000018;
  
  if (in_w9 < 1) {
    uVar6 = *(uint *)(unaff_x20 + 0x20);
                    /* try { // try from 0395e770 to 03a5e77f has its CatchHandler @ 0395e7b4 */
    if (uVar6 == in_w8) {
                    /* try { // try from 0395e788 to 03a5e78f has its CatchHandler @ 0395e7b0 */
      (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x168) + 8))();
                    /* try { // try from 0395e790 to 03a5e7cb has its CatchHandler @ 0395e714 */
      lVar4 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x20) = uVar6 + 1;
      if (lVar4 == 0) goto LAB_0395e92c;
      uVar1 = *(uint *)(lVar4 + 0x18);
      iVar3 = 0;
      if (uVar1 != 0) {
        iVar3 = unaff_w27 / (int)uVar1;
      }
      uVar2 = unaff_w27 - iVar3 * uVar1;
      if (uVar1 <= uVar2) goto LAB_0395e928;
      unaff_x26 = *(long *)(unaff_x20 + 0x18);
      unaff_x28 = (int *)(lVar4 + (ulong)uVar2 * 4 + 0x20);
    }
    else {
      unaff_x26 = *(long *)(unaff_x20 + 0x18);
      *(uint *)(unaff_x20 + 0x20) = uVar6 + 1;
    }
    if (unaff_x26 == 0) {
LAB_0395e92c:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    bVar5 = false;
  }
  else {
    uVar6 = *(uint *)(unaff_x20 + 0x24);
    *(int *)(unaff_x20 + 0x28) = in_w9 + -1;
    bVar5 = true;
  }
  if (uVar6 < *(uint *)(unaff_x26 + 0x18)) {
    if (bVar5) {
      *(undefined4 *)(unaff_x20 + 0x24) =
           *(undefined4 *)(unaff_x26 + (long)(int)uVar6 * 0x18 + 0x24);
    }
    lVar4 = unaff_x26 + (long)(int)uVar6 * 0x18;
    *(int *)(lVar4 + 0x20) = unaff_w27;
    *(int *)(lVar4 + 0x24) = *unaff_x28 + -1;
    *(undefined8 *)(lVar4 + 0x30) = unaff_x25;
    *(undefined2 *)(lVar4 + 0x28) = in_stack_00000018._4_2_;
    thunk_FUN_01656ef8();
    *unaff_x28 = uVar6 + 1;
    return 1;
  }
LAB_0395e928:
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
}


