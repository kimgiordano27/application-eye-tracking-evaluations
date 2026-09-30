/*
FUNCTION_NAME: System.Array.InternalEnumerator<XmlTextWriter.Namespace>$$Dispose
ENTRY_POINT: 03f4f940
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2
*/


void System_Array_InternalEnumerator<XmlTextWriter_Namespace>__Dispose(ushort *param_1,long param_2)

{
  long lVar1;
  long in_x9;
  int *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long *unaff_x22;
  
  if (in_x9 == 0) {
    if ((*param_1 & 1) == 0) {
      param_2 = FUN_031c09d4();
    }
    lVar1 = *(long *)(*(long *)(param_2 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_031c09d4();
    }
    lVar1 = FUN_03188b1c(lVar1,1);
    *unaff_x22 = lVar1;
    if (lVar1 == 0) goto LAB_03f4f9fc;
    if (*(int *)(lVar1 + 0x18) == 0) goto LAB_03f4fa00;
    *(undefined8 *)(lVar1 + 0x20) = unaff_x21;
  }
  else {
    if ((*param_1 & 1) == 0) {
      FUN_031c09d4();
    }
    FUN_03953368();
    lVar1 = *unaff_x22;
    if (lVar1 == 0) {
LAB_03f4f9fc:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    if (*(uint *)(lVar1 + 0x18) <= *unaff_x19 - 1U) {
LAB_03f4fa00:
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    lVar1 = lVar1 + (long)(int)(*unaff_x19 - 1U) * 0x10;
    *(undefined8 *)(lVar1 + 0x20) = unaff_x21;
  }
  *(undefined8 *)(lVar1 + 0x28) = unaff_x20;
  *unaff_x19 = *unaff_x19 + 1;
  return;
}


