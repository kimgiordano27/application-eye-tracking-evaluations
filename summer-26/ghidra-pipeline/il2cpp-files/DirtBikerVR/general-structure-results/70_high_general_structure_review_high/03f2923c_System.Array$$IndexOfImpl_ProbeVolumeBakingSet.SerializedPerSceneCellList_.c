/*
FUNCTION_NAME: System.Array$$IndexOfImpl<ProbeVolumeBakingSet.SerializedPerSceneCellList>
ENTRY_POINT: 03f2923c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void System_Array__IndexOfImpl<ProbeVolumeBakingSet_SerializedPerSceneCellList>(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined4 in_w9;
  long unaff_x19;
  long unaff_x20;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 unaff_x21;
  long *plVar11;
  undefined8 uVar12;
  undefined8 *unaff_x24;
  long lVar13;
  long lVar14;
  int iVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  undefined8 in_stack_00000008;
  double in_stack_00000018;
  
  *(undefined4 *)(unaff_x20 + 0x18) = in_w9;
  *(undefined8 *)(param_1 + 0x20) = unaff_x21;
  thunk_FUN_03afed3c();
  if (*(long *)(unaff_x19 + 0x180) != 0) {
    lVar8 = *(long *)(unaff_x19 + 0x2a8);
    in_stack_00000008._4_4_ = *(int *)(*(long *)(unaff_x19 + 0x180) + 0x18) + -1;
    uVar6 = *(undefined8 *)PTR_DAT_084867c8;
    *(int *)(unaff_x19 + 0x288) = in_stack_00000008._4_4_;
    *(int *)(unaff_x19 + 400) = in_stack_00000008._4_4_;
    uVar6 = FUN_03a8a804(uVar6);
    if (lVar8 != 0) {
      puVar9 = (undefined8 *)(lVar8 + 0xe8);
      *puVar9 = uVar6;
      thunk_FUN_03afed3c(puVar9,uVar6);
      *(undefined8 *)(unaff_x19 + 0x188) = uVar6;
      thunk_FUN_03afed3c(unaff_x19 + 0x188,uVar6);
      puVar5 = PTR_DAT_0848fce0;
      puVar4 = PTR_DAT_0848e838;
      puVar3 = PTR_DAT_0848e748;
      lVar8 = *(long *)(unaff_x19 + 0x180);
      if (lVar8 != 0) {
        uVar10 = 0;
        iVar15 = 0;
        lVar13 = 0x20;
        while ((long)uVar10 < (long)*(int *)(lVar8 + 0x18)) {
          if (*(long *)(unaff_x19 + 0x2a8) == 0) goto LAB_03f293c0;
          lVar14 = *(long *)(unaff_x19 + 0x188);
          lVar8 = *(long *)(*(long *)(unaff_x19 + 0x2a8) + 0xe8);
          in_stack_00000008._4_4_ = (int)uVar10 + 1;
          uVar6 = FUN_0674e2a4((long)&stack0x00000008 + 4,0);
          uVar6 = FUN_065c0764(*(undefined8 *)puVar5,uVar6,0);
          if (lVar8 == 0) goto LAB_03f293c0;
          if (*(uint *)(lVar8 + 0x18) <= uVar10) {
LAB_03f29964:
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c8();
          }
          *(undefined8 *)(lVar8 + lVar13) = uVar6;
          thunk_FUN_03afed3c(lVar8 + lVar13,uVar6);
          if (lVar14 == 0) goto LAB_03f293c0;
          if (*(uint *)(lVar14 + 0x18) <= uVar10) goto LAB_03f29964;
          *(undefined8 *)(lVar14 + lVar13) = uVar6;
          thunk_FUN_03afed3c(lVar14 + lVar13,uVar6);
          if ((*(long *)(unaff_x19 + 0x180) == 0) ||
             (lVar8 = FUN_04de82e0(*(long *)(unaff_x19 + 0x180),uVar10 & 0xffffffff,*unaff_x24),
             lVar8 == 0)) goto LAB_03f293c0;
          if (iVar15 < *(int *)(lVar8 + 0x44)) {
            if ((*(long *)(unaff_x19 + 0x180) == 0) ||
               (lVar8 = FUN_04de82e0(*(long *)(unaff_x19 + 0x180),uVar10 & 0xffffffff,*unaff_x24),
               lVar8 == 0)) goto LAB_03f293c0;
            iVar15 = *(int *)(lVar8 + 0x44);
          }
          lVar8 = *(long *)(unaff_x19 + 0x180);
          lVar13 = lVar13 + 8;
          uVar10 = uVar10 + 1;
          if (lVar8 == 0) goto LAB_03f293c0;
        }
        iVar1 = 5;
        if (*(int *)(unaff_x19 + 400) != 0) {
          iVar1 = iVar15;
        }
        if (*(long *)(unaff_x19 + 0x2a8) != 0) {
          lVar8 = *(long *)(*(long *)(unaff_x19 + 0x2a8) + 0x20);
          uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)puVar4);
          FUN_03f87a60(uVar6,0);
          if (lVar8 != 0) {
            lVar13 = *(long *)(lVar8 + 0x10);
            lVar14 = *(long *)PTR_DAT_0848e7f0;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            puVar4 = PTR_DAT_0848e750;
            if (lVar13 != 0) {
              uVar2 = *(uint *)(lVar8 + 0x18);
              if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                *(uint *)(lVar8 + 0x18) = uVar2 + 1;
                puVar9 = (undefined8 *)(lVar13 + (long)(int)uVar2 * 8 + 0x20);
                *puVar9 = uVar6;
                thunk_FUN_03afed3c(puVar9,uVar6);
              }
              else {
                FUN_04de85b0(lVar8,uVar6,
                             *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              }
              if ((*(long *)(unaff_x19 + 0x2a8) != 0) &&
                 (lVar8 = *(long *)(*(long *)(unaff_x19 + 0x2a8) + 0x20), lVar8 != 0)) {
                FUN_04de82e0(lVar8,*(int *)(lVar8 + 0x18) + -1,*(undefined8 *)puVar4);
                if (*(long *)(unaff_x19 + 0x2a8) != 0) {
                  lVar8 = *(long *)(*(long *)(unaff_x19 + 0x2a8) + 0x28);
                  uVar12 = *(undefined8 *)(unaff_x19 + 0x2b8);
                  uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848e840);
                  FUN_03f1fda0(uVar6,uVar12);
                  if (lVar8 != 0) {
                    lVar13 = *(long *)(lVar8 + 0x10);
                    lVar14 = *(long *)PTR_DAT_0848e800;
                    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                    if (lVar13 != 0) {
                      uVar2 = *(uint *)(lVar8 + 0x18);
                      if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                        *(uint *)(lVar8 + 0x18) = uVar2 + 1;
                        puVar9 = (undefined8 *)(lVar13 + (long)(int)uVar2 * 8 + 0x20);
                        *puVar9 = uVar6;
                        thunk_FUN_03afed3c(puVar9,uVar6);
                      }
                      else {
                        FUN_04de85b0(lVar8,uVar6,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                      }
                      if ((*(long *)(unaff_x19 + 0x2a8) != 0) &&
                         (lVar8 = *(long *)(*(long *)(unaff_x19 + 0x2a8) + 0x28), lVar8 != 0)) {
                        iVar15 = *(int *)(lVar8 + 0x18);
                        lVar8 = FUN_04de82e0(lVar8,iVar15 + -1,*(undefined8 *)puVar3);
                        if (iVar15 < 2) {
                          if (lVar8 == 0) goto LAB_03f293c0;
                          puVar7 = (undefined1 *)(unaff_x19 + 0x2d0);
                        }
                        else {
                          if ((((*(long *)(unaff_x19 + 0x2a8) == 0) ||
                               (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x2a8) + 0x28), lVar13 == 0
                               )) || (lVar13 = FUN_04de82e0(lVar13,*(int *)(lVar13 + 0x18) + -2,
                                                            *(undefined8 *)puVar3), lVar13 == 0)) ||
                             (lVar8 == 0)) goto LAB_03f293c0;
                          puVar7 = (undefined1 *)(lVar13 + 0x48);
                        }
                        *(undefined1 *)(lVar8 + 0x48) = *puVar7;
                        if ((*(long *)(unaff_x19 + 0x2a8) != 0) &&
                           (lVar8 = *(long *)(*(long *)(unaff_x19 + 0x2a8) + 0x20), lVar8 != 0)) {
                          iVar15 = *(int *)(lVar8 + 0x18);
                          lVar8 = FUN_04de82e0(lVar8,iVar15 + -1,*(undefined8 *)puVar4);
                          if (iVar15 < 2) {
                            if (lVar8 == 0) goto LAB_03f293c0;
                            *(undefined1 *)(lVar8 + 400) = *(undefined1 *)(unaff_x19 + 0x2d0);
                            if (((*(long *)(unaff_x19 + 0x2a8) == 0) ||
                                (lVar8 = *(long *)(*(long *)(unaff_x19 + 0x2a8) + 0x20), lVar8 == 0)
                                ) || (lVar8 = FUN_04de82e0(lVar8,*(int *)(lVar8 + 0x18) + -1,
                                                           *(undefined8 *)puVar4), lVar8 == 0))
                            goto LAB_03f293c0;
                            *(undefined1 *)(lVar8 + 0x191) = *(undefined1 *)(unaff_x19 + 0x2d0);
                            plVar11 = (long *)PTR_DAT_08486738;
                          }
                          else {
                            if ((((*(long *)(unaff_x19 + 0x2a8) == 0) ||
                                 (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x2a8) + 0x20),
                                 lVar13 == 0)) ||
                                (lVar13 = FUN_04de82e0(lVar13,*(int *)(lVar13 + 0x18) + -2,
                                                       *(undefined8 *)puVar4), lVar13 == 0)) ||
                               (lVar8 == 0)) goto LAB_03f293c0;
                            *(undefined1 *)(lVar8 + 0x191) = *(undefined1 *)(lVar13 + 400);
                            if ((*(long *)(unaff_x19 + 0x2a8) == 0) ||
                               (lVar8 = *(long *)(*(long *)(unaff_x19 + 0x2a8) + 0x20), lVar8 == 0))
                            goto LAB_03f293c0;
                            lVar8 = FUN_04de82e0(lVar8,*(int *)(lVar8 + 0x18) + -1,
                                                 *(undefined8 *)puVar4);
                            if (((*(long *)(unaff_x19 + 0x2a8) == 0) ||
                                ((lVar13 = *(long *)(*(long *)(unaff_x19 + 0x2a8) + 0x20),
                                 lVar13 == 0 ||
                                 (lVar13 = FUN_04de82e0(lVar13,0,*(undefined8 *)puVar4),
                                 plVar11 = (long *)PTR_DAT_08486738, lVar13 == 0)))) || (lVar8 == 0)
                               ) goto LAB_03f293c0;
                            *(undefined1 *)(lVar8 + 400) = *(undefined1 *)(lVar13 + 0x191);
                          }
                          if (((*(long *)(unaff_x19 + 0x2a8) != 0) &&
                              (lVar8 = *(long *)(*(long *)(unaff_x19 + 0x2a8) + 0x28), lVar8 != 0))
                             && (lVar8 = FUN_04de82e0(lVar8,*(int *)(lVar8 + 0x18) + -1,
                                                      *(undefined8 *)puVar3), lVar8 != 0)) {
                            uVar6 = *(undefined8 *)(lVar8 + 0x70);
                            if (*(int *)(*plVar11 + 0xe4) == 0) {
                              thunk_FUN_03ae8be4(*plVar11);
                            }
                            uVar10 = FUN_07c9e200(uVar6,0,0);
                            if ((uVar10 & 1) != 0) {
                              if ((*(long *)(unaff_x19 + 0x2a8) == 0) ||
                                 (lVar8 = *(long *)(*(long *)(unaff_x19 + 0x2a8) + 0x28), lVar8 == 0
                                 )) goto LAB_03f293c0;
                              if (1 < *(int *)(lVar8 + 0x18)) {
                                lVar8 = FUN_04de82e0(lVar8,*(int *)(lVar8 + 0x18) + -1,
                                                     *(undefined8 *)puVar3);
                                if (((*(long *)(unaff_x19 + 0x2a8) == 0) ||
                                    (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x2a8) + 0x28),
                                    lVar13 == 0)) ||
                                   ((lVar13 = FUN_04de82e0(lVar13,*(int *)(lVar13 + 0x18) + -2,
                                                           *(undefined8 *)puVar3), lVar13 == 0 ||
                                    (lVar8 == 0)))) goto LAB_03f293c0;
                                *(undefined8 *)(lVar8 + 0x70) = *(undefined8 *)(lVar13 + 0x70);
                                thunk_FUN_03afed3c((undefined8 *)(lVar8 + 0x70));
                              }
                            }
                            if (*(long *)(unaff_x19 + 0x180) != 0) {
                              lVar8 = FUN_04de82e0(*(long *)(unaff_x19 + 0x180),
                                                   *(undefined4 *)(unaff_x19 + 400),*unaff_x24);
                              if (((*(long *)(unaff_x19 + 0x2a8) != 0) &&
                                  (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x2a8) + 0x20),
                                  lVar13 != 0)) && (lVar8 != 0)) {
                                *(int *)(lVar8 + 0x168) = *(int *)(lVar13 + 0x18) + -1;
                                if ((*(long *)(unaff_x19 + 0x180) != 0) &&
                                   (lVar8 = FUN_04de82e0(*(long *)(unaff_x19 + 0x180),
                                                         *(undefined4 *)(unaff_x19 + 400),*unaff_x24
                                                        ), lVar8 != 0)) {
                                  *(undefined8 *)(lVar8 + 0x160) =
                                       *(undefined8 *)(unaff_x19 + 0x220);
                                  thunk_FUN_03afed3c(lVar8 + 0x160);
                                  uVar6 = *(undefined8 *)(unaff_x19 + 0x210);
                                  if (*(int *)(*plVar11 + 0xe4) == 0) {
                                    thunk_FUN_03ae8be4();
                                  }
                                  uVar10 = FUN_07c9e200(uVar6,0,0);
                                  if ((uVar10 & 1) != 0) {
                                    if (*(long *)(unaff_x19 + 0x2b8) == 0) goto LAB_03f293c0;
                                    *(undefined8 *)(unaff_x19 + 0x210) =
                                         *(undefined8 *)(*(long *)(unaff_x19 + 0x2b8) + 0x118);
                                    thunk_FUN_03afed3c();
                                  }
                                  if ((*(long *)(unaff_x19 + 0x180) != 0) &&
                                     (lVar8 = FUN_04de82e0(*(long *)(unaff_x19 + 0x180),
                                                           *(undefined4 *)(unaff_x19 + 400),
                                                           *unaff_x24), lVar8 != 0)) {
                                    *(undefined8 *)(lVar8 + 0x158) =
                                         *(undefined8 *)(unaff_x19 + 0x210);
                                    thunk_FUN_03afed3c(lVar8 + 0x158);
                                    if (*(long *)(unaff_x19 + 0x180) != 0) {
                                      lVar8 = FUN_04de82e0(*(long *)(unaff_x19 + 0x180),
                                                           *(undefined4 *)(unaff_x19 + 400),
                                                           *unaff_x24);
                                      if (*(long *)(unaff_x19 + 0x98) != 0) {
                                        iVar15 = *(int *)(*(long *)(unaff_x19 + 0x98) + 0x18);
                                        if (DAT_08975452 == '\0') {
                                          FUN_03a8a718(PTR_DAT_08486c60);
                                          DAT_08975452 = '\x01';
                                        }
                                        fVar18 = (float)(iVar15 - iVar1) / 2.0;
                                        if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
                                          thunk_FUN_03ae8be4();
                                        }
                                        dVar17 = (double)fVar18;
                                        dVar16 = modf(dVar17,&stack0x00000018);
                                        if (0.0 <= fVar18) {
                                          if (dVar16 == 0.5) {
                                            dVar16 = 1.0;
                                            goto LAB_03f298a0;
                                          }
                                          dVar17 = (double)(long)(dVar17 + 0.5);
                                        }
                                        else if (dVar16 == -0.5) {
                                          dVar16 = -1.0;
LAB_03f298a0:
                                          dVar17 = in_stack_00000018;
                                          if (((long)in_stack_00000018 & 1U) != 0) {
                                            dVar17 = in_stack_00000018 + dVar16;
                                          }
                                        }
                                        else {
                                          dVar17 = (double)(long)(dVar17 + -0.5);
                                        }
                                        in_stack_00000008._4_4_ = -0x80000000;
                                        if (dVar17 != INFINITY) {
                                          in_stack_00000008._4_4_ = (int)dVar17;
                                        }
                                        in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + iVar1;
                                        if (lVar8 != 0) {
                                          *(int *)(lVar8 + 0x34) = in_stack_00000008._4_4_;
                                          *(int *)(unaff_x19 + 0x178) = in_stack_00000008._4_4_;
                                          if (*(long *)(unaff_x19 + 0x180) != 0) {
                                            lVar8 = FUN_04de82e0(*(long *)(unaff_x19 + 0x180),
                                                                 *(undefined4 *)(unaff_x19 + 400),
                                                                 *unaff_x24);
                                            if ((*(long *)(unaff_x19 + 0xa0) != 0) && (lVar8 != 0))
                                            {
                                              *(float *)(lVar8 + 0x3c) =
                                                   (float)*(int *)(unaff_x19 + 0x178) /
                                                   (float)*(int *)(*(long *)(unaff_x19 + 0xa0) +
                                                                  0x18);
                                              FUN_03f29968();
                                              *(undefined1 *)(unaff_x19 + 0x2d1) = 1;
                                              return;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_03f293c0:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


