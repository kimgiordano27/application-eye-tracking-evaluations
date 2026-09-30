/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.QueryScanFilter.<ExecuteFilter>d__2$$System.IDisposable.Dispose
ENTRY_POINT: 076c783c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


undefined8
Newtonsoft_Json_Linq_JsonPath_QueryScanFilter_<ExecuteFilter>d__2__System_IDisposable_Dispose(void)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint in_w8;
  long lVar6;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar7;
  long lVar8;
  long unaff_x27;
  
  if (0 < (int)in_w8) {
    lVar8 = 0;
    do {
      if (in_w8 <= (uint)lVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      lVar7 = *(long *)(unaff_x20 + 0x20 + lVar8 * 8);
      if (lVar7 == 0) {
        thunk_FUN_040dedf8(PTR_DAT_092dbff8);
        uVar4 = thunk_FUN_040b4efc();
        uVar5 = thunk_FUN_040dedf8(PTR_DAT_092dc000);
        FUN_0759fb44(uVar4,uVar5,0);
        uVar5 = thunk_FUN_040dedf8(PTR_DAT_092dc008);
                    /* WARNING: Subroutine does not return */
        FUN_040776f4(uVar4,uVar5);
      }
      FUN_0408781c(lVar7);
      if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_040d65a8(*(long *)(unaff_x27 + 0xe0));
      }
      uVar2 = FUN_07692be0();
      if ((uVar2 & 1) == 0) {
LAB_076c78b8:
        if (unaff_x21 == 0) goto LAB_076c7740;
        lVar6 = *(long *)(unaff_x21 + 0x10);
        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_076c7740;
        uVar1 = *(uint *)(unaff_x21 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
          plVar3 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
          *plVar3 = lVar7;
          thunk_FUN_040ec700(plVar3,lVar7);
        }
        else {
          FUN_05c26d88();
        }
      }
      else {
        if (unaff_x19 == (long *)0x0) goto LAB_076c7740;
        uVar2 = (**(code **)(*unaff_x19 + 0x2b8))();
        if ((uVar2 & 1) != 0) goto LAB_076c78b8;
      }
      in_w8 = *(uint *)(unaff_x20 + 0x18);
      lVar8 = lVar8 + 1;
    } while ((int)lVar8 < (int)in_w8);
  }
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar2 = FUN_07691f40();
  if ((uVar2 & 1) == 0) {
    if (unaff_x19 == (long *)0x0) goto LAB_076c7740;
    uVar2 = FUN_07693e44();
    if ((uVar2 & 1) == 0) {
      if (unaff_x21 == 0) goto LAB_076c7740;
      uVar4 = FUN_0769fbec();
      uVar4 = thunk_FUN_040b4e00(uVar4,*(undefined8 *)PTR_DAT_09287040);
      goto LAB_076c7a94;
    }
  }
  if (unaff_x21 != 0) {
    uVar4 = FUN_04077674(*(undefined8 *)PTR_DAT_092db2e8,*(undefined4 *)(unaff_x21 + 0x18));
LAB_076c7a94:
    FUN_05c2734c();
    return uVar4;
  }
LAB_076c7740:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


