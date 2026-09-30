/*
FUNCTION_NAME: System.Array.InternalEnumerator<XmlTextWriter.Namespace>$$get_Current
ENTRY_POINT: 024d35e8
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x024d3958) */

undefined8
System_Array_InternalEnumerator<XmlTextWriter_Namespace>__get_Current
          (undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x20;
  long unaff_x26;
  long unaff_x29;
  
  lVar2 = *unaff_x20;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == param_2) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_024d3894;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_0185dba8();
LAB_024d3894:
  (*(code *)*puVar1)();
  if (unaff_x20 != (long *)0x0) {
    lVar2 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_037f3288) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto 
          System_Array_InternalEnumerator<XmlTextWriter_TagInfo>__System_Collections_IEnumerator_get_Current
          ;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_0185dba8();
System_Array_InternalEnumerator<XmlTextWriter_TagInfo>__System_Collections_IEnumerator_get_Current:
    (*(code *)*puVar1)();
  }
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0x100000000;
}


