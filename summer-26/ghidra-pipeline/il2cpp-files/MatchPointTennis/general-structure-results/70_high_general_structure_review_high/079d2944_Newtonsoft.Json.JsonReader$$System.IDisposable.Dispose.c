/*
FUNCTION_NAME: Newtonsoft.Json.JsonReader$$System.IDisposable.Dispose
ENTRY_POINT: 079d2944
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_JsonReader__System_IDisposable_Dispose(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  code *in_x9;
  long unaff_x19;
  ulong unaff_x20;
  uint uVar11;
  byte *unaff_x21;
  byte *unaff_x22;
  long *unaff_x23;
  long unaff_x25;
  undefined8 uVar12;
  long *plVar13;
  long *unaff_x26;
  uint unaff_w28;
  long *in_stack_00000008;
  long *in_stack_00000018;
  
  while( true ) {
    iVar4 = (*in_x9)(param_1,param_2);
                    /* try { // try from 079d294c to 07ad2953 has its CatchHandler @ 079d2954 */
                    /* catch() { ... } // from try @ 079d2934 with catch @ 079d2954
                       catch() { ... } // from try @ 079d294c with catch @ 079d2954 */
    iVar5 = (**(code **)(*unaff_x23 + 0x228))();
    puVar1 = PTR_DAT_09f1e5b8;
    plVar6 = unaff_x26;
    if (iVar4 == iVar5) break;
    unaff_w28 = unaff_w28 + 1;
    unaff_x26 = unaff_x23;
    plVar6 = in_stack_00000018;
    if ((int)*(uint *)(unaff_x25 + 0x18) <= (int)unaff_w28) break;
    if (*(uint *)(unaff_x25 + 0x18) <= unaff_w28) goto LAB_079d2dcc;
    param_1 = *(long **)(unaff_x25 + (long)(int)unaff_w28 * 8 + 0x20);
    if (param_1 == (long *)0x0) goto LAB_079d2dc8;
    in_x9 = *(code **)(*param_1 + 0x228);
    param_2 = *(undefined8 *)(*param_1 + 0x230);
    unaff_x26 = param_1;
  }
  in_stack_00000018 = plVar6;
  uVar12 = *(undefined8 *)PTR_DAT_09f42be0;
  if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  plVar6 = (long *)FUN_07a4ce38(uVar12,0);
  puVar2 = PTR_DAT_09f42be8;
  if (plVar6 != (long *)0x0) {
    bVar3 = (**(code **)(*plVar6 + 0x2a8))();
    *unaff_x21 = bVar3 & 1;
    uVar12 = FUN_07a4ce38(*(undefined8 *)puVar2,0);
    uVar7 = FUN_07971334(unaff_x26,uVar12,0);
    if ((uVar7 & 1) != 0) {
      *unaff_x22 = 1;
      return;
    }
    uVar12 = *(undefined8 *)puVar2;
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_07a4ce38(uVar12,0);
    bVar3 = FUN_07971334();
    *unaff_x22 = bVar3 & 1;
    if ((bVar3 & 1) != 0) {
      return;
    }
    if (*unaff_x21 != 0) {
      FUN_079d2dd4(&stack0x00000018,&stack0x00000008);
    }
    if ((unaff_x20 & 1) == 0) {
      if (unaff_x19 == 0) goto LAB_079d2dc8;
    }
    else {
      FUN_07a84a68(0);
      if (unaff_x19 == 0) goto LAB_079d2dc8;
      FUN_078bb7b4();
    }
    FUN_078bb7b4();
    if (in_stack_00000008 != (long *)0x0) {
      (**(code **)(*in_stack_00000008 + 0x168))
                (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x170));
      FUN_078bb7b4();
      FUN_078bb7b4();
      if (in_stack_00000018 != (long *)0x0) {
        (**(code **)(*in_stack_00000018 + 0x1b8))
                  (in_stack_00000018,*(undefined8 *)(*in_stack_00000018 + 0x1c0));
        FUN_078bb7b4();
        if (in_stack_00000018 != (long *)0x0) {
          uVar7 = (**(code **)(*in_stack_00000018 + 0x2f8))
                            (in_stack_00000018,*(undefined8 *)(*in_stack_00000018 + 0x300));
          if ((uVar7 & 1) != 0) {
            if (in_stack_00000018 == (long *)0x0) goto LAB_079d2dc8;
            lVar10 = *in_stack_00000018;
            bVar3 = *(byte *)(*(long *)PTR_DAT_09f35308 + 0x130);
            if ((*(byte *)(lVar10 + 0x130) < bVar3) ||
               (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar3 * 8 + -8) !=
                *(long *)PTR_DAT_09f35308)) {
                    /* WARNING: Subroutine does not return */
              FUN_044481e4();
            }
            in_stack_00000018 =
                 (long *)(**(code **)(lVar10 + 1000))
                                   (in_stack_00000018,*(undefined8 *)(lVar10 + 0x3f0));
            if (in_stack_00000018 == (long *)0x0) goto LAB_079d2dc8;
            lVar10 = (**(code **)(*in_stack_00000018 + 0x318))
                               (in_stack_00000018,*(undefined8 *)(*in_stack_00000018 + 800));
            FUN_078bb7b4();
            if (lVar10 == 0) goto LAB_079d2dc8;
            uVar9 = *(uint *)(lVar10 + 0x18);
            if (0 < (int)uVar9) {
              uVar11 = 0;
              do {
                if (uVar11 != 0) {
                  FUN_078bb7b4();
                  uVar9 = *(uint *)(lVar10 + 0x18);
                }
                if (uVar9 <= uVar11) goto LAB_079d2dcc;
                plVar6 = *(long **)(lVar10 + (long)(int)uVar11 * 8 + 0x20);
                if (plVar6 == (long *)0x0) goto LAB_079d2dc8;
                (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
                FUN_078bb7b4();
                uVar9 = *(uint *)(lVar10 + 0x18);
                uVar11 = uVar11 + 1;
              } while ((int)uVar11 < (int)uVar9);
            }
            FUN_078bb7b4();
          }
          if (in_stack_00000018 != (long *)0x0) {
            lVar10 = (**(code **)(*in_stack_00000018 + 0x238))
                               (in_stack_00000018,*(undefined8 *)(*in_stack_00000018 + 0x240));
            FUN_078bb7b4();
            if (lVar10 != 0) {
              uVar9 = *(uint *)(lVar10 + 0x18);
              if (0 < (int)uVar9) {
                uVar11 = 0;
                do {
                  if (uVar11 != 0) {
                    FUN_078bb7b4();
                    uVar9 = *(uint *)(lVar10 + 0x18);
                  }
                  if (uVar9 <= uVar11) {
LAB_079d2dcc:
                    /* WARNING: Subroutine does not return */
                    FUN_04447e4c();
                  }
                  plVar13 = (long *)(lVar10 + (long)(int)uVar11 * 8 + 0x20);
                  plVar6 = (long *)*plVar13;
                  if (((plVar6 == (long *)0x0) ||
                      (plVar6 = (long *)(**(code **)(*plVar6 + 0x1e8))
                                                  (plVar6,*(undefined8 *)(*plVar6 + 0x1f0)),
                      plVar6 == (long *)0x0)) ||
                     ((uVar7 = (**(code **)(*plVar6 + 0x3c8))
                                         (plVar6,*(undefined8 *)(*plVar6 + 0x3d0)), (uVar7 & 1) != 0
                      && ((uVar7 = (**(code **)(*plVar6 + 0x3d8))
                                             (plVar6,*(undefined8 *)(*plVar6 + 0x3e0)),
                          (uVar7 & 1) == 0 &&
                          (plVar6 = (long *)(**(code **)(*plVar6 + 0x448))
                                                      (plVar6,*(undefined8 *)(*plVar6 + 0x450)),
                          plVar6 == (long *)0x0)))))) goto LAB_079d2dc8;
                  (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
                  FUN_078bb7b4();
                  if (*(uint *)(lVar10 + 0x18) <= uVar11) goto LAB_079d2dcc;
                  plVar6 = (long *)*plVar13;
                  if (plVar6 == (long *)0x0) goto LAB_079d2dc8;
                  lVar8 = (**(code **)(*plVar6 + 0x1d8))(plVar6,*(undefined8 *)(*plVar6 + 0x1e0));
                  if (lVar8 != 0) {
                    FUN_078bb7b4();
                    if (*(uint *)(lVar10 + 0x18) <= uVar11) goto LAB_079d2dcc;
                    plVar13 = (long *)*plVar13;
                    if (plVar13 == (long *)0x0) goto LAB_079d2dc8;
                    (**(code **)(*plVar13 + 0x1d8))(plVar13,*(undefined8 *)(*plVar13 + 0x1e0));
                    FUN_078bb7b4();
                  }
                  uVar9 = *(uint *)(lVar10 + 0x18);
                  uVar11 = uVar11 + 1;
                } while ((int)uVar11 < (int)uVar9);
              }
              FUN_078bb7b4();
              return;
            }
          }
        }
      }
    }
  }
LAB_079d2dc8:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


