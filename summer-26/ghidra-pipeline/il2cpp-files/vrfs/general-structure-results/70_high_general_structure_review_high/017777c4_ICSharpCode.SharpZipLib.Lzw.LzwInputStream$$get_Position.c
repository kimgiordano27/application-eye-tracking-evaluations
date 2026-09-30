/*
FUNCTION_NAME: ICSharpCode.SharpZipLib.Lzw.LzwInputStream$$get_Position
ENTRY_POINT: 017777c4
PROGRAM: vrfs-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_3;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01777850) */

void ICSharpCode_SharpZipLib_Lzw_LzwInputStream__get_Position(undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long lVar6;
  long *unaff_x24;
  
                    /* try { // try from 017777c4 to 0187780f has its CatchHandler @ 0177796c */
  if (param_2 != 1) {
    lVar3 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0xe) * 0x10 + 0x138);
          goto ICSharpCode_SharpZipLib_Lzw_LzwInputStream__Flush;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_015c2a80();
ICSharpCode_SharpZipLib_Lzw_LzwInputStream__Flush:
    (*(code *)*puVar1)();
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  plVar2 = (long *)__cxa_begin_catch();
  lVar6 = *plVar2;
  __cxa_end_catch();
  lVar3 = *unaff_x19;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x24) {
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0xe) * 0x10 + 0x138);
        goto LAB_01777644;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_015c2a80();
LAB_01777644:
  (*(code *)*puVar1)();
  if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0164c380(lVar6);
  }
  lVar3 = *unaff_x19;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x24) {
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0x25) * 0x10 + 0x138);
        goto LAB_017776a8;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_015c2a80();
LAB_017776a8:
  (*(code *)*puVar1)();
  return;
}


