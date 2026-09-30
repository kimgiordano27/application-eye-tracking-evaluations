/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.QueryFilter.<ExecuteFilter>d__2$$System.IDisposable.Dispose
ENTRY_POINT: 07a8cfb0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


long * Newtonsoft_Json_Linq_JsonPath_QueryFilter_<ExecuteFilter>d__2__System_IDisposable_Dispose
                 (long param_1)

{
  uint uVar1;
  byte bVar2;
  bool in_ZR;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  uint in_w9;
  long *unaff_x19;
  long lVar6;
  long *plVar7;
  long unaff_x21;
  long lVar8;
  
  if (in_ZR) {
    plVar7 = (long *)FUN_07978d24();
  }
  else {
    bVar2 = *(byte *)(*(long *)PTR_DAT_09f3dc88 + 0x130);
    if ((in_w9 < bVar2) ||
       (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_09f3dc88)) {
      bVar2 = *(byte *)(*(long *)PTR_DAT_09f3fbb8 + 0x130);
      if ((in_w9 < bVar2) ||
         (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_09f3fbb8))
      {
        bVar2 = *(byte *)(*(long *)(unaff_x21 + 0xe0) + 0x130);
        if ((in_w9 < bVar2) ||
           (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar2 * 8 + -8) !=
            *(long *)(unaff_x21 + 0xe0))) {
          plVar7 = (long *)0x0;
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_09f3ee58 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          plVar7 = (long *)FUN_07a8d200();
        }
      }
      else {
        plVar7 = (long *)FUN_0797b3d8();
      }
    }
    else {
      plVar7 = (long *)FUN_07969860();
    }
  }
  if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar3 = FUN_07a56f5c();
  if ((plVar7 != (long *)0x0) && ((uVar3 & 1) != 0)) {
    uVar1 = *(uint *)(plVar7 + 3);
    if (0 < (int)uVar1) {
      lVar8 = 0;
      do {
        if (uVar1 <= (uint)lVar8) {
LAB_07a8d1f0:
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        if ((plVar7[lVar8 + 4] == 0) ||
           (FUN_07974a64(plVar7[lVar8 + 4],0), unaff_x19 == (long *)0x0)) {
LAB_07a8d1ec:
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        uVar3 = (**(code **)(*unaff_x19 + 0x2a8))();
        if ((uVar3 & 1) != 0) {
          if ((int)plVar7[3] == 1) {
            return plVar7;
          }
          plVar4 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f3f0b0,1);
          if ((uint)lVar8 < *(uint *)(plVar7 + 3)) {
            if (plVar4 == (long *)0x0) goto LAB_07a8d1ec;
            lVar8 = plVar7[lVar8 + 4];
            if ((lVar8 != 0) &&
               (lVar6 = thunk_FUN_04485110(lVar8,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
              uVar5 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
              FUN_04447d10(uVar5,0);
            }
            if ((int)plVar4[3] != 0) {
              plVar4[4] = lVar8;
              thunk_FUN_044bb4b4(plVar4 + 4,lVar8);
              return plVar4;
            }
          }
          goto LAB_07a8d1f0;
        }
        uVar1 = *(uint *)(plVar7 + 3);
        lVar8 = lVar8 + 1;
      } while ((int)lVar8 < (int)uVar1);
    }
    lVar6 = *(long *)PTR_DAT_09f46850;
    lVar8 = *(long *)(lVar6 + 0x38);
    if (lVar8 == 0) {
      FUN_04482014(lVar6);
      lVar8 = *(long *)(lVar6 + 0x38);
    }
    lVar8 = *(long *)(lVar8 + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_04481fb8();
    }
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    lVar8 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_04481fb8();
    }
    plVar7 = (long *)**(long **)(lVar8 + 0xb8);
  }
  return plVar7;
}


