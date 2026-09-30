/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.QueryScanFilter.<ExecuteFilter>d__2$$System.IDisposable.Dispose
ENTRY_POINT: 07151088
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x071514b0) */

undefined8
Newtonsoft_Json_Linq_JsonPath_QueryScanFilter_<ExecuteFilter>d__2__System_IDisposable_Dispose(void)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x23;
  long *unaff_x24;
  
  do {
    FUN_05212cf4();
LAB_07150f54:
    do {
      lVar6 = *unaff_x21;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x23) {
            puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_07150fa0;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar2 = (undefined8 *)FUN_03cf1348();
LAB_07150fa0:
      uVar8 = (*(code *)*puVar2)();
      if ((uVar8 & 1) == 0) {
        if (unaff_x21 == (long *)0x0) goto LAB_07151360;
        lVar6 = *unaff_x21;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 == 0) goto LAB_071510e0;
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_071510c8;
      }
      lVar6 = *unaff_x21;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x24) {
            puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_07150ffc;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar2 = (undefined8 *)FUN_03cf1348();
LAB_07150ffc:
      lVar6 = (*(code *)*puVar2)();
      if (lVar6 == 0) {
        thunk_FUN_03ce5214(PTR_DAT_08ea7220);
        uVar3 = thunk_FUN_03cf5234();
        uVar5 = thunk_FUN_03ce5214(PTR_DAT_08ea72a8);
        FUN_0702b9e8(uVar3,uVar5,0);
        uVar5 = thunk_FUN_03ce5214(PTR_DAT_08ea72b0);
                    /* WARNING: Subroutine does not return */
        FUN_03c8f9fc(uVar3,uVar5);
      }
      uVar3 = FUN_07037a80(lVar6,0);
      if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30(uVar3,uVar3);
      }
      uVar8 = (**(code **)(*unaff_x19 + 0x2c8))();
    } while ((uVar8 & 1) == 0);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar7 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar1 = *(uint *)(unaff_x20 + 0x18);
  } while (*(uint *)(lVar7 + 0x18) <= uVar1);
  *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
  plVar4 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
  *plVar4 = lVar6;
  thunk_FUN_03d233cc(plVar4,lVar6);
  goto LAB_07150f54;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_071510c8:
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08e6a288) {
      puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_07151354;
    }
  }
LAB_071510e0:
  puVar2 = (undefined8 *)FUN_03cf1348();
LAB_07151354:
  (*(code *)*puVar2)();
LAB_07151360:
  if (unaff_x20 != 0) {
    uVar3 = FUN_05214770();
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


