/*
FUNCTION_NAME: System.Array.InternalEnumerator<XmlTextWriter.Namespace>$$.ctor
ENTRY_POINT: 04657f4c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_4
*/


void System_Array_InternalEnumerator<XmlTextWriter_Namespace>___ctor
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long in_x9;
  int *in_x10;
  long unaff_x20;
  long unaff_x21;
  
  do {
    if ((bool)in_ZR) {
      puVar1 = (undefined8 *)FUN_0377596c();
System_Array_InternalEnumerator<XmlTextWriter_Namespace>__MoveNext:
      (*(code *)*puVar1)();
      if (unaff_x21 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7ac();
      }
      if (unaff_x20 != 0) {
        FUN_06c1197c();
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)in_x10[4] * 0x10 + 0x138);
      goto System_Array_InternalEnumerator<XmlTextWriter_Namespace>__MoveNext;
    }
    in_x9 = in_x9 + -1;
    in_ZR = in_x9 == 0;
    in_x10 = in_x10 + 4;
  } while( true );
}


