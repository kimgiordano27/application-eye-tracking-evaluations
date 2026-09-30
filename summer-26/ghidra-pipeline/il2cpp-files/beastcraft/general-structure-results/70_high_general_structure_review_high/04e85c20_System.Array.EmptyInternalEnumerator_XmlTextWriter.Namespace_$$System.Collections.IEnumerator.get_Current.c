/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<XmlTextWriter.Namespace>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 04e85c20
PROGRAM: beastcraft-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void System_Array_EmptyInternalEnumerator<XmlTextWriter_Namespace>__System_Collections_IEnumerator_get_Current
               (void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  undefined4 unaff_w21;
  ulong uVar3;
  long *unaff_x26;
  
  lVar1 = thunk_FUN_02e789bc();
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3d044();
  }
  if (0 < (int)*(ulong *)(lVar1 + 0x18)) {
    uVar3 = 0;
    uVar2 = *(ulong *)(lVar1 + 0x18) & 0xffffffff;
    do {
      if (uVar2 <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3cccc();
      }
      FUN_04e854c8();
      uVar2 = (ulong)*(uint *)(lVar1 + 0x18);
      uVar3 = uVar3 + 1;
    } while ((long)uVar3 < (long)(int)*(uint *)(lVar1 + 0x18));
  }
  lVar1 = *unaff_x26;
  *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  lVar1 = FUN_055a7c74(0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  FUN_04ca02c8();
  return;
}


