/*
FUNCTION_NAME: System.Array.InternalEnumerator<XmlTextWriter.Namespace>$$get_Current
ENTRY_POINT: 04657fc0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x04658054) */

void System_Array_InternalEnumerator<XmlTextWriter_Namespace>__get_Current
               (undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  long lVar6;
  long *unaff_x22;
  
  if (param_2 != 1) {
    if (unaff_x19 != (long *)0x0) {
      lVar6 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x22) {
            puVar1 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_0465803c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_0377596c();
LAB_0465803c:
      (*(code *)*puVar1)();
    }
                    /* WARNING: Subroutine does not return */
    FUN_0381d6e4(param_1);
  }
  plVar2 = (long *)__cxa_begin_catch();
  lVar6 = *plVar2;
  __cxa_end_catch();
  if (unaff_x19 != (long *)0x0) {
    lVar3 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto System_Array_InternalEnumerator<XmlTextWriter_Namespace>__MoveNext;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_0377596c();
System_Array_InternalEnumerator<XmlTextWriter_Namespace>__MoveNext:
    (*(code *)*puVar1)();
  }
  if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7ac(lVar6);
  }
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  FUN_06c1197c();
  return;
}


