/*
FUNCTION_NAME: Newtonsoft.Json.JsonReader$$Dispose
ENTRY_POINT: 079d29b4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_JsonReader__Dispose(long *param_1)

{
  undefined *puVar1;
  byte bVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long unaff_x19;
  ulong unaff_x20;
  uint uVar8;
  byte *unaff_x21;
  byte *unaff_x22;
  undefined8 uVar9;
  long *plVar10;
  long unaff_x26;
  long *in_stack_00000008;
  long *in_stack_00000018;
  
  puVar1 = PTR_DAT_09f42be8;
  if (param_1 != (long *)0x0) {
    bVar2 = (**(code **)(*param_1 + 0x2a8))();
    *unaff_x21 = bVar2 & 1;
    FUN_07a4ce38(*(undefined8 *)puVar1,0);
    uVar3 = FUN_07971334();
    if ((uVar3 & 1) != 0) {
      *unaff_x22 = 1;
      return;
    }
    uVar9 = *(undefined8 *)puVar1;
    if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_07a4ce38(uVar9,0);
    bVar2 = FUN_07971334();
    *unaff_x22 = bVar2 & 1;
    if ((bVar2 & 1) != 0) {
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
          uVar3 = (**(code **)(*in_stack_00000018 + 0x2f8))
                            (in_stack_00000018,*(undefined8 *)(*in_stack_00000018 + 0x300));
          if ((uVar3 & 1) != 0) {
            if (in_stack_00000018 == (long *)0x0) goto LAB_079d2dc8;
            lVar7 = *in_stack_00000018;
            bVar2 = *(byte *)(*(long *)PTR_DAT_09f35308 + 0x130);
            if ((*(byte *)(lVar7 + 0x130) < bVar2) ||
               (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) !=
                *(long *)PTR_DAT_09f35308)) {
                    /* WARNING: Subroutine does not return */
              FUN_044481e4();
            }
            in_stack_00000018 =
                 (long *)(**(code **)(lVar7 + 1000))
                                   (in_stack_00000018,*(undefined8 *)(lVar7 + 0x3f0));
            if (in_stack_00000018 == (long *)0x0) goto LAB_079d2dc8;
            lVar7 = (**(code **)(*in_stack_00000018 + 0x318))
                              (in_stack_00000018,*(undefined8 *)(*in_stack_00000018 + 800));
            FUN_078bb7b4();
            if (lVar7 == 0) goto LAB_079d2dc8;
            uVar6 = *(uint *)(lVar7 + 0x18);
            if (0 < (int)uVar6) {
              uVar8 = 0;
              do {
                if (uVar8 != 0) {
                  FUN_078bb7b4();
                  uVar6 = *(uint *)(lVar7 + 0x18);
                }
                if (uVar6 <= uVar8) goto LAB_079d2dcc;
                plVar4 = *(long **)(lVar7 + (long)(int)uVar8 * 8 + 0x20);
                if (plVar4 == (long *)0x0) goto LAB_079d2dc8;
                (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
                FUN_078bb7b4();
                uVar6 = *(uint *)(lVar7 + 0x18);
                uVar8 = uVar8 + 1;
              } while ((int)uVar8 < (int)uVar6);
            }
            FUN_078bb7b4();
          }
          if (in_stack_00000018 != (long *)0x0) {
            lVar7 = (**(code **)(*in_stack_00000018 + 0x238))
                              (in_stack_00000018,*(undefined8 *)(*in_stack_00000018 + 0x240));
            FUN_078bb7b4();
            if (lVar7 != 0) {
              uVar6 = *(uint *)(lVar7 + 0x18);
              if (0 < (int)uVar6) {
                uVar8 = 0;
                do {
                  if (uVar8 != 0) {
                    FUN_078bb7b4();
                    uVar6 = *(uint *)(lVar7 + 0x18);
                  }
                  if (uVar6 <= uVar8) {
LAB_079d2dcc:
                    /* WARNING: Subroutine does not return */
                    FUN_04447e4c();
                  }
                  plVar10 = (long *)(lVar7 + (long)(int)uVar8 * 8 + 0x20);
                  plVar4 = (long *)*plVar10;
                  if (((plVar4 == (long *)0x0) ||
                      (plVar4 = (long *)(**(code **)(*plVar4 + 0x1e8))
                                                  (plVar4,*(undefined8 *)(*plVar4 + 0x1f0)),
                      plVar4 == (long *)0x0)) ||
                     ((uVar3 = (**(code **)(*plVar4 + 0x3c8))
                                         (plVar4,*(undefined8 *)(*plVar4 + 0x3d0)), (uVar3 & 1) != 0
                      && ((uVar3 = (**(code **)(*plVar4 + 0x3d8))
                                             (plVar4,*(undefined8 *)(*plVar4 + 0x3e0)),
                          (uVar3 & 1) == 0 &&
                          (plVar4 = (long *)(**(code **)(*plVar4 + 0x448))
                                                      (plVar4,*(undefined8 *)(*plVar4 + 0x450)),
                          plVar4 == (long *)0x0)))))) goto LAB_079d2dc8;
                  (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
                  FUN_078bb7b4();
                  if (*(uint *)(lVar7 + 0x18) <= uVar8) goto LAB_079d2dcc;
                  plVar4 = (long *)*plVar10;
                  if (plVar4 == (long *)0x0) goto LAB_079d2dc8;
                  lVar5 = (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
                  if (lVar5 != 0) {
                    FUN_078bb7b4();
                    if (*(uint *)(lVar7 + 0x18) <= uVar8) goto LAB_079d2dcc;
                    plVar10 = (long *)*plVar10;
                    if (plVar10 == (long *)0x0) goto LAB_079d2dc8;
                    (**(code **)(*plVar10 + 0x1d8))(plVar10,*(undefined8 *)(*plVar10 + 0x1e0));
                    FUN_078bb7b4();
                  }
                  uVar6 = *(uint *)(lVar7 + 0x18);
                  uVar8 = uVar8 + 1;
                } while ((int)uVar8 < (int)uVar6);
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


