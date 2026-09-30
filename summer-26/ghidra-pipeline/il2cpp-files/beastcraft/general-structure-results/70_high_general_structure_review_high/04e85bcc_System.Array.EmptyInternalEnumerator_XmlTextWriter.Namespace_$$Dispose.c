/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<XmlTextWriter.Namespace>$$Dispose
ENTRY_POINT: 04e85bcc
PROGRAM: beastcraft-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2
*/


void System_Array_EmptyInternalEnumerator<XmlTextWriter_Namespace>__Dispose(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  long unaff_x22;
  long lVar4;
  ulong uVar5;
  long *unaff_x26;
  
  if (unaff_x22 != 0) {
    lVar1 = FUN_0550fda0();
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02e7568c(lVar4);
    }
    if (lVar1 == 0) {
      FUN_05627134(0x10,0);
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    lVar2 = thunk_FUN_02e789bc(lVar1,lVar4);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3d044(lVar1,lVar4);
    }
    if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
      uVar5 = 0;
      uVar3 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
      do {
        if (uVar3 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3cccc();
        }
        FUN_04e854c8();
        uVar3 = (ulong)*(uint *)(lVar2 + 0x18);
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)(int)*(uint *)(lVar2 + 0x18));
    }
    lVar1 = *unaff_x26;
    *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    lVar1 = FUN_055a7c74(0);
    if (lVar1 != 0) {
      FUN_04ca02c8();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


