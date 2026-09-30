/*
FUNCTION_NAME: Newtonsoft.Json.JsonReader$$ReadArrayIntoByteArray
ENTRY_POINT: 0710ce6c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2
*/


ulong Newtonsoft_Json_JsonReader__ReadArrayIntoByteArray(void)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  
  FUN_03d2d2b0();
  *(undefined1 *)(unaff_x23 + 0xbf2) = 1;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  uVar2 = FUN_0710ecb0();
  if ((uVar2 & 1) == 0) {
    if ((unaff_x21 != 0) && (unaff_x20 != 0)) {
      if (*(int *)(unaff_x21 + 0x10) < *(int *)(unaff_x20 + 0x10)) {
        uVar2 = 0;
      }
      else {
        iVar1 = (**(code **)(*unaff_x22 + 0x1b8))();
        uVar2 = (ulong)(iVar1 == 0);
      }
      return uVar2;
    }
  }
  else {
    plVar3 = (long *)FUN_0710edfc();
    if (plVar3 != (long *)0x0) {
      lVar5 = *plVar3;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0920fcc8) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_0710cf64;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)FUN_03d8f370(plVar3,*(long *)PTR_DAT_0920fcc8,2);
LAB_0710cf64:
                    /* WARNING: Could not recover jumptable at 0x0710cf8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)*puVar4)(plVar3);
      return uVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


