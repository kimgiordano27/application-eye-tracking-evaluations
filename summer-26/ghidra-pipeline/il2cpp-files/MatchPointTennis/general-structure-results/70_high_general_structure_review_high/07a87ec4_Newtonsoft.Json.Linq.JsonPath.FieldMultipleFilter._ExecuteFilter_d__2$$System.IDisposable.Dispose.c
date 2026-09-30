/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter.<ExecuteFilter>d__2$$System.IDisposable.Dispose
ENTRY_POINT: 07a87ec4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


long Newtonsoft_Json_Linq_JsonPath_FieldMultipleFilter_<ExecuteFilter>d__2__System_IDisposable_Dispose
               (long *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 unaff_x19;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  uint unaff_w26;
  ulong unaff_x28;
  
  lVar3 = (**(code **)(*param_1 + 0x1e8))(param_1,*(undefined8 *)(*param_1 + 0x1f0));
  if (lVar3 == 0) goto LAB_07a882d0;
  uVar4 = FUN_07a5840c(lVar3,0);
  if ((uVar4 & 1) == 0) {
    if (*(int *)(unaff_x25 + 0x18) == 0) {
LAB_07a88180:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    plVar5 = *(long **)(unaff_x25 + 0x20);
    if (plVar5 == (long *)0x0) goto LAB_07a882d0;
    lVar3 = (**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0));
    if (lVar3 == 0) goto LAB_07a882d0;
    uVar1 = FUN_07a57f50(lVar3,0);
    uVar1 = ~uVar1 & 1;
  }
  else {
    uVar1 = 0;
  }
  uVar8 = *(uint *)(unaff_x24 + 0x18);
  uVar1 = unaff_w26 & uVar1;
  if (0 < (int)uVar8) {
    lVar3 = 0;
    do {
      if (uVar8 <= (uint)lVar3) goto LAB_07a88180;
      plVar5 = *(long **)(unaff_x24 + 0x20 + lVar3 * 8);
      if (plVar5 == (long *)0x0) goto LAB_07a882d0;
      uVar6 = (**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0));
      uVar8 = (uint)lVar3 + 1;
      if (*(uint *)(unaff_x25 + 0x18) <= uVar8) goto LAB_07a88180;
      plVar5 = *(long **)(unaff_x25 + (long)(int)uVar8 * 8 + 0x20);
      if (plVar5 == (long *)0x0) goto LAB_07a882d0;
      uVar7 = (**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0));
      uVar2 = FUN_07a876e4(uVar6,uVar7);
      uVar8 = *(uint *)(unaff_x24 + 0x18);
      uVar1 = uVar2 & uVar1;
      lVar3 = lVar3 + 1;
    } while ((int)lVar3 < (int)uVar8);
  }
  if (unaff_x23 != 0) {
    *(undefined1 *)(unaff_x23 + 0x20) = 1;
    if (uVar1 == 0) {
      if ((unaff_x28 & 1) != 0) {
        thunk_FUN_044adef4(PTR_DAT_09f217f8);
        uVar7 = thunk_FUN_0448520c();
        uVar6 = thunk_FUN_044adef4(PTR_DAT_09f466e8);
        FUN_0799d598(uVar7,uVar6,0);
        uVar6 = thunk_FUN_044adef4(PTR_DAT_09f466e0);
                    /* WARNING: Subroutine does not return */
        FUN_04447d10(uVar7,uVar6);
      }
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_0445ec30();
      if (lVar3 == 0) {
        if (unaff_x23 != 0) goto LAB_07a882d0;
      }
      else {
        *(undefined8 *)(lVar3 + 0x60) = unaff_x19;
        thunk_FUN_044bb4b4();
        if (unaff_x23 != 0) {
          *(long *)(lVar3 + 0x68) = unaff_x23;
          thunk_FUN_044bb4b4();
        }
      }
    }
    return lVar3;
  }
LAB_07a882d0:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


