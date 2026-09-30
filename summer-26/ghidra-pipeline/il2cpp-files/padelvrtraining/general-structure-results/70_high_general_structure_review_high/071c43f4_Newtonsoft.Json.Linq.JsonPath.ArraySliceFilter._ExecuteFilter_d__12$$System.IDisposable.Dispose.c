/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.ArraySliceFilter.<ExecuteFilter>d__12$$System.IDisposable.Dispose
ENTRY_POINT: 071c43f4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


long * Newtonsoft_Json_Linq_JsonPath_ArraySliceFilter_<ExecuteFilter>d__12__System_IDisposable_Dispose
                 (long *param_1,long *param_2,long param_3,uint param_4,uint param_5,uint param_6)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  
  puVar12 = PTR_DAT_091a1be8;
  if ((DAT_098432aa & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_09214510);
    FUN_03d2d2b0(PTR_StringLiteral_50435_091fca28);
    FUN_03d2d2b0(PTR_DAT_091ab540);
    FUN_03d2d2b0(PTR_DAT_091a1be8);
    FUN_03d2d2b0(PTR_DAT_092144e0);
    DAT_098432aa = 1;
  }
  if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  uVar3 = FUN_07190474(param_1,0,0);
  if ((uVar3 & 1) == 0) {
    if (param_3 != 0) {
      uVar14 = *(undefined8 *)PTR_StringLiteral_50435_091fca28;
      if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      uVar14 = FUN_07186ef4(uVar14,0);
      if (param_1 == (long *)0x0) {
LAB_071c472c:
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      uVar3 = (**(code **)(*param_1 + 0x2a8))(param_1,uVar14,*(undefined8 *)(*param_1 + 0x2b0));
      if ((uVar3 & 1) != 0) {
        plVar4 = (long *)FUN_07192b6c(param_1,*(undefined8 *)PTR_DAT_092144e0,0);
        if (plVar4 != (long *)0x0) {
          lVar5 = (**(code **)(*plVar4 + 0x3a8))(plVar4,*(undefined8 *)(*plVar4 + 0x3b0));
          if (lVar5 != 0) {
            plVar6 = (long *)FUN_03d2d394(*(undefined8 *)PTR_DAT_091ab540,
                                          *(undefined4 *)(lVar5 + 0x18));
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (0 < (int)uVar1) {
              lVar13 = 0;
              plVar10 = plVar6 + 4;
              do {
                if (uVar1 <= (uint)lVar13) {
LAB_071c4730:
                    /* WARNING: Subroutine does not return */
                  FUN_03d2d550();
                }
                plVar7 = *(long **)(lVar5 + 0x20 + lVar13 * 8);
                if (plVar7 == (long *)0x0) goto LAB_071c472c;
                lVar8 = (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
                if (plVar6 == (long *)0x0) goto LAB_071c472c;
                if ((lVar8 != 0) &&
                   (lVar9 = thunk_FUN_03d2ee44(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0))
                {
                  uVar14 = thunk_FUN_03d3c630();
                    /* WARNING: Subroutine does not return */
                  FUN_03d2d414(uVar14,0);
                }
                if (*(uint *)(plVar6 + 3) <= (uint)lVar13) goto LAB_071c4730;
                *plVar10 = lVar8;
                thunk_FUN_03d1023c(plVar10,lVar8);
                uVar1 = *(uint *)(lVar5 + 0x18);
                lVar13 = lVar13 + 1;
                plVar10 = plVar10 + 1;
              } while ((int)lVar13 < (int)uVar1);
            }
            puVar2 = PTR_DAT_09214510;
            uVar1 = 0x10033;
            if ((param_5 & 1) == 0) {
              uVar1 = 0x10032;
            }
            while( true ) {
              if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
                thunk_FUN_03db619c();
              }
              uVar3 = FUN_0719124c(param_2,0,0);
              if ((uVar3 & 1) == 0) break;
              lVar13 = *(long *)puVar2;
              lVar5 = *(long *)(lVar13 + 0x38);
              if (lVar5 == 0) {
                FUN_03d8f2c8(lVar13);
                lVar5 = *(long *)(lVar13 + 0x38);
              }
              lVar5 = *(long *)(lVar5 + 0x10);
              if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                lVar5 = FUN_03d8f26c();
              }
              if (*(int *)(lVar5 + 0xe0) == 0) {
                thunk_FUN_03db619c();
              }
              lVar5 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
              if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                lVar5 = FUN_03d8f26c();
              }
              if (param_2 == (long *)0x0) goto LAB_071c472c;
              plVar10 = (long *)FUN_07192c18(param_2,param_3,uVar1 | param_4,0,plVar6,
                                             **(undefined8 **)(lVar5 + 0xb8),0);
              uVar3 = FUN_0709e02c(plVar10,0,0);
              if ((uVar3 & 1) != 0) {
                uVar14 = (**(code **)(*plVar4 + 0x408))(plVar4,*(undefined8 *)(*plVar4 + 0x410));
                if (plVar10 == (long *)0x0) goto LAB_071c472c;
                uVar11 = (**(code **)(*plVar10 + 0x408))(plVar10,*(undefined8 *)(*plVar10 + 0x410));
                uVar3 = FUN_071c393c(uVar14,uVar11);
                if ((uVar3 & 1) != 0) goto LAB_071c46e8;
              }
              param_2 = (long *)(**(code **)(*param_2 + 0x8d8))
                                          (param_2,*(undefined8 *)(*param_2 + 0x8e0));
            }
            plVar10 = (long *)0x0;
LAB_071c46e8:
            uVar3 = FUN_0709e068(plVar10,0,0);
            if (((uVar3 & 1) != 0) && ((param_6 & 1) != 0)) {
              uVar14 = thunk_FUN_03d1e194(PTR_DAT_09214528);
              uVar11 = thunk_FUN_03d1e194(PTR_DAT_091aa3c0);
              uVar14 = FUN_06fd2168(uVar14,param_3,uVar11,0);
              thunk_FUN_03d1e194(PTR_DAT_091ab1c0);
              uVar11 = thunk_FUN_03d2ef40();
              FUN_070cb7ec(uVar11,uVar14,0);
              uVar14 = thunk_FUN_03d1e194(PTR_DAT_09214520);
                    /* WARNING: Subroutine does not return */
              FUN_03d2d414(uVar11,uVar14);
            }
            plVar4 = (long *)0x0;
            if ((uVar3 & 1) == 0) {
              plVar4 = plVar10;
            }
            return plVar4;
          }
        }
        goto LAB_071c472c;
      }
      thunk_FUN_03d1e194(PTR_DAT_091ab1c0);
      uVar14 = thunk_FUN_03d2ef40();
      uVar11 = thunk_FUN_03d1e194(PTR_DAT_09214518);
      FUN_070cb7ec(uVar14,uVar11,0);
      goto LAB_071c47c4;
    }
    thunk_FUN_03d1e194(PTR_DAT_091adab0);
    uVar14 = thunk_FUN_03d2ef40();
    puVar12 = PTR_DAT_091fa350;
  }
  else {
    thunk_FUN_03d1e194(PTR_DAT_091adab0);
    uVar14 = thunk_FUN_03d2ef40();
    puVar12 = PTR_DAT_091b37c0;
  }
  uVar11 = thunk_FUN_03d1e194(puVar12);
  FUN_070c4c34(uVar14,uVar11,0);
LAB_071c47c4:
  uVar11 = thunk_FUN_03d1e194(PTR_DAT_09214520);
                    /* WARNING: Subroutine does not return */
  FUN_03d2d414(uVar14,uVar11);
}


