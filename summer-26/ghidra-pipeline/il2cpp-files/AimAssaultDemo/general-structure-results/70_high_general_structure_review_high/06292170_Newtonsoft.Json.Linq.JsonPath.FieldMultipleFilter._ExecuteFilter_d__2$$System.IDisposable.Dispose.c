/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter.<ExecuteFilter>d__2$$System.IDisposable.Dispose
ENTRY_POINT: 06292170
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


undefined8
Newtonsoft_Json_Linq_JsonPath_FieldMultipleFilter_<ExecuteFilter>d__2__System_IDisposable_Dispose
          (void)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  long *unaff_x19;
  
  plVar1 = (long *)FUN_06183650();
  uVar2 = FUN_06176248(plVar1,0,0);
  if (((uVar2 & 1) == 0) || (uVar2 = FUN_06176248(plVar1), (uVar2 & 1) == 0)) {
    return 0;
  }
  lVar3 = (**(code **)(*unaff_x19 + 0x248))();
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x18) == 0)) {
    if (plVar1 != (long *)0x0) {
      lVar3 = (**(code **)(*plVar1 + 0x1c8))(plVar1,*(undefined8 *)(*plVar1 + 0x1d0));
      uVar8 = (**(code **)(*unaff_x19 + 0x1b8))();
      uVar9 = (**(code **)(*unaff_x19 + 0x238))();
      if (lVar3 != 0) {
        uVar8 = FUN_0625d5e8(lVar3,uVar8,uVar9,0);
        return uVar8;
      }
    }
  }
  else {
    plVar4 = (long *)RootMotion_FinalIK_Finger___ctor(*(undefined8 *)PTR_DAT_07d92630);
    if (plVar4 != (long *)0x0) {
      if (0 < (int)plVar4[3]) {
        uVar10 = 0;
        do {
          if (*(uint *)(lVar3 + 0x18) <= uVar10) {
LAB_06292348:
                    /* WARNING: Subroutine does not return */
            FUN_0373b7bc();
          }
          plVar5 = *(long **)(lVar3 + (long)(int)uVar10 * 8 + 0x20);
          if (plVar5 == (long *)0x0) goto LAB_06292344;
          lVar6 = (**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0));
          if ((lVar6 != 0) &&
             (lVar7 = thunk_FUN_037787d0(lVar6,*(undefined8 *)(*plVar4 + 0x40)), lVar7 == 0)) {
            uVar8 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
            FUN_0373b680(uVar8,0);
          }
          if (*(uint *)(plVar4 + 3) <= uVar10) goto LAB_06292348;
          plVar4[(long)(int)uVar10 + 4] = lVar6;
          thunk_FUN_037aeb94(plVar4 + (long)(int)uVar10 + 4,lVar6);
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)plVar4[3]);
      }
      if (plVar1 != (long *)0x0) {
        lVar3 = (**(code **)(*plVar1 + 0x1c8))(plVar1,*(undefined8 *)(*plVar1 + 0x1d0));
        uVar8 = (**(code **)(*unaff_x19 + 0x1b8))();
        uVar9 = (**(code **)(*unaff_x19 + 0x238))();
        if (lVar3 != 0) {
          uVar8 = FUN_0625d6b8(lVar3,uVar8,uVar9,plVar4,0);
          return uVar8;
        }
      }
    }
  }
LAB_06292344:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


