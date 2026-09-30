/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.ScanFilter.<ExecuteFilter>d__2$$System.IDisposable.Dispose
ENTRY_POINT: 0504ee5c
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


long * Newtonsoft_Json_Linq_JsonPath_ScanFilter_<ExecuteFilter>d__2__System_IDisposable_Dispose
                 (long param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  
  if (param_1 != 0) {
    if ((*(long *)(unaff_x20 + 0x20) == 0) || (FUN_02d5dae8(), unaff_x19 == (long *)0x0)) {
LAB_0504f1a8:
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    uVar1 = (**(code **)(*unaff_x19 + 0x298))();
    if ((uVar1 & 1) == 0) {
      lVar2 = FUN_05028a08();
      if (lVar2 == 0) {
        plVar3 = (long *)0x0;
      }
      else {
        uVar5 = *(undefined8 *)PTR_DAT_066463a0;
        plVar3 = (long *)thunk_FUN_02d8a53c(lVar2,uVar5);
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4e268(lVar2,uVar5);
        }
      }
      return plVar3;
    }
    lVar2 = FUN_05028a08();
    if (lVar2 == 0) {
      if (*(int *)(unaff_x20 + 0x18) != 0) goto LAB_0504f1a8;
    }
    else {
      uVar5 = *(undefined8 *)PTR_DAT_066463a0;
      plVar3 = (long *)thunk_FUN_02d8a53c(lVar2,uVar5);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4e268(lVar2,uVar5);
      }
      if (*(int *)(unaff_x20 + 0x18) != 0) {
        lVar2 = *(long *)(unaff_x20 + 0x20);
        if ((lVar2 != 0) &&
           (lVar4 = thunk_FUN_02d8a53c(lVar2,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
          uVar5 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
          FUN_02d4ddac(uVar5,0);
        }
        if ((int)plVar3[3] != 0) {
          plVar3[4] = lVar2;
          thunk_FUN_02dc1ef0(plVar3 + 4,lVar2);
          return plVar3;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4def0();
}


