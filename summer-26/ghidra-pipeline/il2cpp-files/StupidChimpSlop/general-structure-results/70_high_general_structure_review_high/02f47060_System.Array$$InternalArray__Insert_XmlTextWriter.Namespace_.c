/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<XmlTextWriter.Namespace>
ENTRY_POINT: 02f47060
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


void System_Array__InternalArray__Insert<XmlTextWriter_Namespace>
               (long param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    lVar4 = *(long *)(lVar2 + 0x10);
    lVar6 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x18);
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (lVar4 != 0) {
      uVar1 = *(uint *)(lVar2 + 0x18);
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        *(uint *)(lVar2 + 0x18) = uVar1 + 1;
        plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
        *plVar5 = (long)param_2;
        thunk_FUN_02dc1ef0(plVar5,param_2);
      }
      else {
        FUN_036a5e08(lVar2,param_2,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                    );
      }
      if (param_2 != (long *)0x0) {
        lVar2 = *(long *)(param_1 + 0x20);
        uVar3 = (**(code **)(*param_2 + 0x1f8))(param_2,*(undefined8 *)(*param_2 + 0x200));
        if (lVar2 != 0) {
          FUN_0483c224(lVar2,uVar3,param_2,
                       *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x30));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


