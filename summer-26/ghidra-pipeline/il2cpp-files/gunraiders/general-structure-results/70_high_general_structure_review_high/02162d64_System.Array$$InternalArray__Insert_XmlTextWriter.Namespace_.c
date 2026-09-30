/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<XmlTextWriter.Namespace>
ENTRY_POINT: 02162d64
PROGRAM: gunraiders-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


void System_Array__InternalArray__Insert<XmlTextWriter_Namespace>(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long lVar4;
  undefined8 in_stack_00000008;
  
  if (param_1 != 0) {
    uVar3 = *(uint *)(unaff_x21 + 3);
    if (1 < uVar3) {
      unaff_x21[5] = unaff_x22;
      lVar4 = *(long *)(unaff_x19 + 0x150);
      if (lVar4 != 0) {
        lVar1 = thunk_FUN_01c495e4(lVar4,*(undefined8 *)(*unaff_x21 + 0x40));
        if (lVar1 == 0) goto LAB_02162e54;
        uVar3 = *(uint *)(unaff_x21 + 3);
      }
      if (2 < uVar3) {
        unaff_x21[6] = lVar4;
        lVar4 = *(long *)(unaff_x19 + 0x158);
        if (lVar4 != 0) {
          lVar1 = thunk_FUN_01c495e4(lVar4,*(undefined8 *)(*unaff_x21 + 0x40));
          if (lVar1 == 0) goto LAB_02162e54;
          uVar3 = *(uint *)(unaff_x21 + 3);
        }
        if (3 < uVar3) {
          unaff_x21[7] = lVar4;
          in_stack_00000008._4_1_ = 0;
          lVar4 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fa08,(long)&stack0x00000008 + 4);
          if ((lVar4 != 0) &&
             (lVar1 = thunk_FUN_01c495e4(lVar4,*(undefined8 *)(*unaff_x21 + 0x40)), lVar1 == 0))
          goto LAB_02162e54;
          if (4 < *(uint *)(unaff_x21 + 3)) {
            unaff_x21[8] = lVar4;
            if (unaff_x20 != 0) {
              FUN_0357c4c8();
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4ac();
  }
LAB_02162e54:
  uVar2 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar2,0);
}


