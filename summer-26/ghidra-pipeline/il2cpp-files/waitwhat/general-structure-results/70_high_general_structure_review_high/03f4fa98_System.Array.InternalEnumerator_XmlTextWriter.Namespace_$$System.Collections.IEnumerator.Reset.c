/*
FUNCTION_NAME: System.Array.InternalEnumerator<XmlTextWriter.Namespace>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 03f4fa98
PROGRAM: waitwhat-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void System_Array_InternalEnumerator<XmlTextWriter_Namespace>__System_Collections_IEnumerator_Reset
               (int *param_1,int *param_2,long param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  if ((*(ushort *)(*(long *)(param_3 + 0x20) + 0x135) & 1) == 0) {
    FUN_031c09d4(*(long *)(param_3 + 0x20));
  }
  lVar1 = *(long *)(param_1 + 6);
  if (lVar1 == 0) {
    iVar3 = 1;
  }
  else {
    iVar3 = *(int *)(lVar1 + 0x18) + 1;
  }
  iVar2 = *param_2;
  if ((iVar3 < iVar2) && (iVar2 + -1 != 0 && 0 < iVar2)) {
    lVar1 = *(long *)(param_3 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_031c09d4();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_031c09d4();
    }
    lVar1 = FUN_03188b1c(lVar1,iVar2 + -1);
    *(long *)(param_1 + 6) = lVar1;
    iVar2 = *param_2;
  }
  *param_1 = iVar2;
  if (0 < iVar2) {
    uVar4 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 2) = uVar4;
    if (iVar2 + -1 != 0) {
      FUN_05953590(*(undefined8 *)(param_2 + 6),lVar1,iVar2 + -1,0);
      return;
    }
  }
  return;
}


