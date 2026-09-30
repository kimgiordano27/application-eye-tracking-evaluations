/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.QueryScanFilter.<ExecuteFilter>d__2$$System.IDisposable.Dispose
ENTRY_POINT: 05972694
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


undefined8
Newtonsoft_Json_Linq_JsonPath_QueryScanFilter_<ExecuteFilter>d__2__System_IDisposable_Dispose
          (long *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long lVar7;
  long *unaff_x21;
  long *unaff_x23;
  
  lVar7 = *param_1;
  __cxa_end_catch();
  if (unaff_x19 != (long *)0x0) {
    lVar4 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_07279f60) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_059722b8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_032937ac();
LAB_059722b8:
    (*(code *)*puVar2)();
  }
  if (lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032c82b0(lVar7);
  }
  lVar7 = *unaff_x21;
  uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x23) {
        puVar2 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_05972320;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_032937ac();
LAB_05972320:
  uVar1 = (*(code *)*puVar2)();
  uVar3 = FUN_032d5d3c(*(undefined8 *)PTR_DAT_07294720,uVar1);
  lVar7 = *unaff_x21;
  uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x23) {
        puVar2 = (undefined8 *)(lVar7 + (long)(*piVar6 + 5) * 0x10 + 0x138);
        goto LAB_05972398;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_032937ac();
LAB_05972398:
  (*(code *)*puVar2)();
  return uVar3;
}


