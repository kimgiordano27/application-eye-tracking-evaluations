/*
FUNCTION_NAME: System.Array$$IndexOfImpl<OVRSceneManager.Metrics>
ENTRY_POINT: 03f28fb0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void System_Array__IndexOfImpl<OVRSceneManager_Metrics>(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  long unaff_x19;
  long unaff_x20;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 uVar15;
  int iVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  int iStack000000000000000c;
  double in_stack_00000018;
  
  FUN_03a8a718();
  FUN_03a8a718(PTR_DAT_0848e740);
  FUN_03a8a718(PTR_DAT_0848e748);
  FUN_03a8a718(PTR_DAT_0848ecd0);
  FUN_03a8a718(PTR_DAT_0848e750);
  FUN_03a8a718(PTR_DAT_08486738);
  FUN_03a8a718(PTR_DAT_0848e838);
  FUN_03a8a718(PTR_DAT_0848e840);
  FUN_03a8a718(PTR_DAT_084867c8);
  FUN_03a8a718(PTR_DAT_084907f8);
  FUN_03a8a718(PTR_DAT_0848fce0);
  *(undefined1 *)(unaff_x20 + 0xcd2) = 1;
  fVar20 = DAT_015c5bb8;
  fVar17 = *(float *)(unaff_x19 + 0x20);
  iStack000000000000000c = 0;
  if (DAT_08975452 == '\0') {
    FUN_03a8a718(PTR_DAT_08486c60);
    DAT_08975452 = '\x01';
  }
  fVar20 = (fVar17 + fVar17) * fVar20;
  if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  dVar19 = (double)fVar20;
  dVar18 = modf(dVar19,&stack0x00000018);
  puVar5 = PTR_DAT_0848ecd0;
  if (0.0 <= fVar20) {
    if (dVar18 == 0.5) {
      dVar18 = 1.0;
      goto System_Array__IndexOfImpl<OpenXRInput_SerializedBinding>;
    }
    dVar19 = (double)(long)(dVar19 + 0.5);
  }
  else if (dVar18 == -0.5) {
    dVar18 = -1.0;
System_Array__IndexOfImpl<OpenXRInput_SerializedBinding>:
    dVar19 = in_stack_00000018;
    if (((long)in_stack_00000018 & 1U) != 0) {
      dVar19 = in_stack_00000018 + dVar18;
    }
  }
  else {
    dVar19 = (double)(long)(dVar19 + -0.5);
  }
  lVar12 = *(long *)(unaff_x19 + 0x180);
  if (lVar12 != 0) {
    iVar16 = *(int *)(lVar12 + 0x18);
    fVar20 = -2.1474836e+09;
    if (dVar19 != INFINITY) {
      fVar20 = (float)(int)dVar19;
    }
    if (0 < iVar16) {
      fVar21 = *(float *)(unaff_x19 + 0x2c);
      fVar17 = *(float *)(unaff_x19 + 0x5c);
      lVar12 = FUN_04de82e0(lVar12,iVar16 + -1,*(undefined8 *)PTR_DAT_0848ecd0);
      if ((lVar12 == 0) || (*(long *)(unaff_x19 + 0xa0) == 0)) goto LAB_03f293c0;
      if ((fVar20 / ((float)(int)((360.0 / ((360.0 / fVar20) * fVar21)) / (float)iVar16) *
                    (float)iVar16)) *
          (float)(*(int *)(*(long *)(unaff_x19 + 0xa0) + 0x18) - *(int *)(lVar12 + 0x44)) <
          fVar17 + fVar17) {
        if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_07c4adbc(*(undefined8 *)PTR_DAT_084907f8,0);
        return;
      }
      lVar12 = *(long *)(unaff_x19 + 0x180);
    }
    uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084907e8);
    FUN_03f24b10();
    if (lVar12 != 0) {
      lVar9 = *(long *)(lVar12 + 0x10);
      lVar11 = *(long *)PTR_DAT_084907f0;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      if (lVar9 != 0) {
        uVar2 = *(uint *)(lVar12 + 0x18);
        if (uVar2 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar2 + 1;
          puVar8 = (undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
          *puVar8 = uVar7;
          thunk_FUN_03afed3c(puVar8,uVar7);
        }
        else {
          FUN_04de85b0(lVar12,uVar7,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        if (*(long *)(unaff_x19 + 0x180) != 0) {
          lVar12 = *(long *)(unaff_x19 + 0x2a8);
          iStack000000000000000c = *(int *)(*(long *)(unaff_x19 + 0x180) + 0x18) + -1;
          uVar7 = *(undefined8 *)PTR_DAT_084867c8;
          *(int *)(unaff_x19 + 0x288) = iStack000000000000000c;
          *(int *)(unaff_x19 + 400) = iStack000000000000000c;
          uVar7 = FUN_03a8a804(uVar7);
          if (lVar12 != 0) {
            puVar8 = (undefined8 *)(lVar12 + 0xe8);
            *puVar8 = uVar7;
            thunk_FUN_03afed3c(puVar8,uVar7);
            *(undefined8 *)(unaff_x19 + 0x188) = uVar7;
            thunk_FUN_03afed3c(unaff_x19 + 0x188,uVar7);
            puVar6 = PTR_DAT_0848fce0;
            puVar4 = PTR_DAT_0848e838;
            puVar3 = PTR_DAT_0848e748;
            lVar12 = *(long *)(unaff_x19 + 0x180);
            if (lVar12 != 0) {
              uVar13 = 0;
              iVar16 = 0;
              lVar9 = 0x20;
              while ((long)uVar13 < (long)*(int *)(lVar12 + 0x18)) {
                if (*(long *)(unaff_x19 + 0x2a8) == 0) goto LAB_03f293c0;
                lVar11 = *(long *)(unaff_x19 + 0x188);
                lVar12 = *(long *)(*(long *)(unaff_x19 + 0x2a8) + 0xe8);
                iStack000000000000000c = (int)uVar13 + 1;
                uVar7 = FUN_0674e2a4(&stack0x0000000c,0);
                uVar7 = FUN_065c0764(*(undefined8 *)puVar6,uVar7,0);
                if (lVar12 == 0) goto LAB_03f293c0;
                if (*(uint *)(lVar12 + 0x18) <= uVar13) {
LAB_03f29964:
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c8();
                }
                *(undefined8 *)(lVar12 + lVar9) = uVar7;
                thunk_FUN_03afed3c(lVar12 + lVar9,uVar7);
                if (lVar11 == 0) goto LAB_03f293c0;
                if (*(uint *)(lVar11 + 0x18) <= uVar13) goto LAB_03f29964;
                *(undefined8 *)(lVar11 + lVar9) = uVar7;
                thunk_FUN_03afed3c(lVar11 + lVar9,uVar7);
                if ((*(long *)(unaff_x19 + 0x180) == 0) ||
                   (lVar12 = FUN_04de82e0(*(long *)(unaff_x19 + 0x180),uVar13 & 0xffffffff,
                                          *(undefined8 *)puVar5), lVar12 == 0)) goto LAB_03f293c0;
                if (iVar16 < *(int *)(lVar12 + 0x44)) {
                  if ((*(long *)(unaff_x19 + 0x180) == 0) ||
                     (lVar12 = FUN_04de82e0(*(long *)(unaff_x19 + 0x180),uVar13 & 0xffffffff,
                                            *(undefined8 *)puVar5), lVar12 == 0)) goto LAB_03f293c0;
                  iVar16 = *(int *)(lVar12 + 0x44);
                }
                lVar12 = *(long *)(unaff_x19 + 0x180);
                lVar9 = lVar9 + 8;
                uVar13 = uVar13 + 1;
                if (lVar12 == 0) goto LAB_03f293c0;
              }
              iVar1 = 5;
              if (*(int *)(unaff_x19 + 400) != 0) {
                iVar1 = iVar16;
              }
              if (*(long *)(unaff_x19 + 0x2a8) != 0) {
                lVar12 = *(long *)(*(long *)(unaff_x19 + 0x2a8) + 0x20);
                uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)puVar4);
                FUN_03f87a60(uVar7,0);
                if (lVar12 != 0) {
                  lVar9 = *(long *)(lVar12 + 0x10);
                  lVar11 = *(long *)PTR_DAT_0848e7f0;
                  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                  puVar4 = PTR_DAT_0848e750;
                  if (lVar9 != 0) {
                    uVar2 = *(uint *)(lVar12 + 0x18);
                    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                      puVar8 = (undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
                      *puVar8 = uVar7;
                      thunk_FUN_03afed3c(puVar8,uVar7);
                    }
                    else {
                      FUN_04de85b0(lVar12,uVar7,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                    }
                    if ((*(long *)(unaff_x19 + 0x2a8) != 0) &&
                       (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x2a8) + 0x20), lVar12 != 0)) {
                      FUN_04de82e0(lVar12,*(int *)(lVar12 + 0x18) + -1,*(undefined8 *)puVar4);
                      if (*(long *)(unaff_x19 + 0x2a8) != 0) {
                        lVar12 = *(long *)(*(long *)(unaff_x19 + 0x2a8) + 0x28);
                        uVar15 = *(undefined8 *)(unaff_x19 + 0x2b8);
                        uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848e840);
                        FUN_03f1fda0(uVar7,uVar15);
                        if (lVar12 != 0) {
                          lVar9 = *(long *)(lVar12 + 0x10);
                          lVar11 = *(long *)PTR_DAT_0848e800;
                          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                          if (lVar9 != 0) {
                            uVar2 = *(uint *)(lVar12 + 0x18);
                            if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                              *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                              puVar8 = (undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
                              *puVar8 = uVar7;
                              thunk_FUN_03afed3c(puVar8,uVar7);
                            }
                            else {
                              FUN_04de85b0(lVar12,uVar7,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                            }
                            if ((*(long *)(unaff_x19 + 0x2a8) != 0) &&
                               (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x2a8) + 0x28), lVar12 != 0
                               )) {
                              iVar16 = *(int *)(lVar12 + 0x18);
                              lVar12 = FUN_04de82e0(lVar12,iVar16 + -1,*(undefined8 *)puVar3);
                              if (iVar16 < 2) {
                                if (lVar12 == 0) goto LAB_03f293c0;
                                puVar10 = (undefined1 *)(unaff_x19 + 0x2d0);
                              }
                              else {
                                if ((((*(long *)(unaff_x19 + 0x2a8) == 0) ||
                                     (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x2a8) + 0x28),
                                     lVar9 == 0)) ||
                                    (lVar9 = FUN_04de82e0(lVar9,*(int *)(lVar9 + 0x18) + -2,
                                                          *(undefined8 *)puVar3), lVar9 == 0)) ||
                                   (lVar12 == 0)) goto LAB_03f293c0;
                                puVar10 = (undefined1 *)(lVar9 + 0x48);
                              }
                              *(undefined1 *)(lVar12 + 0x48) = *puVar10;
                              if ((*(long *)(unaff_x19 + 0x2a8) != 0) &&
                                 (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x2a8) + 0x20),
                                 lVar12 != 0)) {
                                iVar16 = *(int *)(lVar12 + 0x18);
                                lVar12 = FUN_04de82e0(lVar12,iVar16 + -1,*(undefined8 *)puVar4);
                                if (iVar16 < 2) {
                                  if (lVar12 == 0) goto LAB_03f293c0;
                                  *(undefined1 *)(lVar12 + 400) = *(undefined1 *)(unaff_x19 + 0x2d0)
                                  ;
                                  if (((*(long *)(unaff_x19 + 0x2a8) == 0) ||
                                      (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x2a8) + 0x20),
                                      lVar12 == 0)) ||
                                     (lVar12 = FUN_04de82e0(lVar12,*(int *)(lVar12 + 0x18) + -1,
                                                            *(undefined8 *)puVar4), lVar12 == 0))
                                  goto LAB_03f293c0;
                                  *(undefined1 *)(lVar12 + 0x191) =
                                       *(undefined1 *)(unaff_x19 + 0x2d0);
                                  plVar14 = (long *)PTR_DAT_08486738;
                                }
                                else {
                                  if ((((*(long *)(unaff_x19 + 0x2a8) == 0) ||
                                       (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x2a8) + 0x20),
                                       lVar9 == 0)) ||
                                      (lVar9 = FUN_04de82e0(lVar9,*(int *)(lVar9 + 0x18) + -2,
                                                            *(undefined8 *)puVar4), lVar9 == 0)) ||
                                     (lVar12 == 0)) goto LAB_03f293c0;
                                  *(undefined1 *)(lVar12 + 0x191) = *(undefined1 *)(lVar9 + 400);
                                  if ((*(long *)(unaff_x19 + 0x2a8) == 0) ||
                                     (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x2a8) + 0x20),
                                     lVar12 == 0)) goto LAB_03f293c0;
                                  lVar12 = FUN_04de82e0(lVar12,*(int *)(lVar12 + 0x18) + -1,
                                                        *(undefined8 *)puVar4);
                                  if (((*(long *)(unaff_x19 + 0x2a8) == 0) ||
                                      ((lVar9 = *(long *)(*(long *)(unaff_x19 + 0x2a8) + 0x20),
                                       lVar9 == 0 ||
                                       (lVar9 = FUN_04de82e0(lVar9,0,*(undefined8 *)puVar4),
                                       plVar14 = (long *)PTR_DAT_08486738, lVar9 == 0)))) ||
                                     (lVar12 == 0)) goto LAB_03f293c0;
                                  *(undefined1 *)(lVar12 + 400) = *(undefined1 *)(lVar9 + 0x191);
                                }
                                if (((*(long *)(unaff_x19 + 0x2a8) != 0) &&
                                    (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x2a8) + 0x28),
                                    lVar12 != 0)) &&
                                   (lVar12 = FUN_04de82e0(lVar12,*(int *)(lVar12 + 0x18) + -1,
                                                          *(undefined8 *)puVar3), lVar12 != 0)) {
                                  uVar7 = *(undefined8 *)(lVar12 + 0x70);
                                  if (*(int *)(*plVar14 + 0xe4) == 0) {
                                    thunk_FUN_03ae8be4(*plVar14);
                                  }
                                  uVar13 = FUN_07c9e200(uVar7,0,0);
                                  if ((uVar13 & 1) != 0) {
                                    if ((*(long *)(unaff_x19 + 0x2a8) == 0) ||
                                       (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x2a8) + 0x28),
                                       lVar12 == 0)) goto LAB_03f293c0;
                                    if (1 < *(int *)(lVar12 + 0x18)) {
                                      lVar12 = FUN_04de82e0(lVar12,*(int *)(lVar12 + 0x18) + -1,
                                                            *(undefined8 *)puVar3);
                                      if (((*(long *)(unaff_x19 + 0x2a8) == 0) ||
                                          (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x2a8) + 0x28),
                                          lVar9 == 0)) ||
                                         ((lVar9 = FUN_04de82e0(lVar9,*(int *)(lVar9 + 0x18) + -2,
                                                                *(undefined8 *)puVar3), lVar9 == 0
                                          || (lVar12 == 0)))) goto LAB_03f293c0;
                                      *(undefined8 *)(lVar12 + 0x70) = *(undefined8 *)(lVar9 + 0x70)
                                      ;
                                      thunk_FUN_03afed3c((undefined8 *)(lVar12 + 0x70));
                                    }
                                  }
                                  if (*(long *)(unaff_x19 + 0x180) != 0) {
                                    lVar12 = FUN_04de82e0(*(long *)(unaff_x19 + 0x180),
                                                          *(undefined4 *)(unaff_x19 + 400),
                                                          *(undefined8 *)puVar5);
                                    if (((*(long *)(unaff_x19 + 0x2a8) != 0) &&
                                        (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x2a8) + 0x20),
                                        lVar9 != 0)) && (lVar12 != 0)) {
                                      *(int *)(lVar12 + 0x168) = *(int *)(lVar9 + 0x18) + -1;
                                      if ((*(long *)(unaff_x19 + 0x180) != 0) &&
                                         (lVar12 = FUN_04de82e0(*(long *)(unaff_x19 + 0x180),
                                                                *(undefined4 *)(unaff_x19 + 400),
                                                                *(undefined8 *)puVar5), lVar12 != 0)
                                         ) {
                                        *(undefined8 *)(lVar12 + 0x160) =
                                             *(undefined8 *)(unaff_x19 + 0x220);
                                        thunk_FUN_03afed3c(lVar12 + 0x160);
                                        uVar7 = *(undefined8 *)(unaff_x19 + 0x210);
                                        if (*(int *)(*plVar14 + 0xe4) == 0) {
                                          thunk_FUN_03ae8be4();
                                        }
                                        uVar13 = FUN_07c9e200(uVar7,0,0);
                                        if ((uVar13 & 1) != 0) {
                                          if (*(long *)(unaff_x19 + 0x2b8) == 0) goto LAB_03f293c0;
                                          *(undefined8 *)(unaff_x19 + 0x210) =
                                               *(undefined8 *)(*(long *)(unaff_x19 + 0x2b8) + 0x118)
                                          ;
                                          thunk_FUN_03afed3c();
                                        }
                                        if ((*(long *)(unaff_x19 + 0x180) != 0) &&
                                           (lVar12 = FUN_04de82e0(*(long *)(unaff_x19 + 0x180),
                                                                  *(undefined4 *)(unaff_x19 + 400),
                                                                  *(undefined8 *)puVar5),
                                           lVar12 != 0)) {
                                          *(undefined8 *)(lVar12 + 0x158) =
                                               *(undefined8 *)(unaff_x19 + 0x210);
                                          thunk_FUN_03afed3c(lVar12 + 0x158);
                                          if (*(long *)(unaff_x19 + 0x180) != 0) {
                                            lVar12 = FUN_04de82e0(*(long *)(unaff_x19 + 0x180),
                                                                  *(undefined4 *)(unaff_x19 + 400),
                                                                  *(undefined8 *)puVar5);
                                            if (*(long *)(unaff_x19 + 0x98) != 0) {
                                              iVar16 = *(int *)(*(long *)(unaff_x19 + 0x98) + 0x18);
                                              if (DAT_08975452 == '\0') {
                                                FUN_03a8a718(PTR_DAT_08486c60);
                                                DAT_08975452 = '\x01';
                                              }
                                              fVar20 = (float)(iVar16 - iVar1) / 2.0;
                                              if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
                                                thunk_FUN_03ae8be4();
                                              }
                                              dVar19 = (double)fVar20;
                                              dVar18 = modf(dVar19,&stack0x00000018);
                                              if (0.0 <= fVar20) {
                                                if (dVar18 == 0.5) {
                                                  dVar18 = 1.0;
                                                  goto LAB_03f298a0;
                                                }
                                                dVar19 = (double)(long)(dVar19 + 0.5);
                                              }
                                              else if (dVar18 == -0.5) {
                                                dVar18 = -1.0;
LAB_03f298a0:
                                                dVar19 = in_stack_00000018;
                                                if (((long)in_stack_00000018 & 1U) != 0) {
                                                  dVar19 = in_stack_00000018 + dVar18;
                                                }
                                              }
                                              else {
                                                dVar19 = (double)(long)(dVar19 + -0.5);
                                              }
                                              iStack000000000000000c = -0x80000000;
                                              if (dVar19 != INFINITY) {
                                                iStack000000000000000c = (int)dVar19;
                                              }
                                              iStack000000000000000c =
                                                   iStack000000000000000c + iVar1;
                                              if (lVar12 != 0) {
                                                *(int *)(lVar12 + 0x34) = iStack000000000000000c;
                                                *(int *)(unaff_x19 + 0x178) = iStack000000000000000c
                                                ;
                                                if (*(long *)(unaff_x19 + 0x180) != 0) {
                                                  lVar12 = FUN_04de82e0(*(long *)(unaff_x19 + 0x180)
                                                                        ,*(undefined4 *)
                                                                          (unaff_x19 + 400),
                                                                        *(undefined8 *)puVar5);
                                                  if ((*(long *)(unaff_x19 + 0xa0) != 0) &&
                                                     (lVar12 != 0)) {
                                                    *(float *)(lVar12 + 0x3c) =
                                                         (float)*(int *)(unaff_x19 + 0x178) /
                                                         (float)*(int *)(*(long *)(unaff_x19 + 0xa0)
                                                                        + 0x18);
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
      }
    }
  }
LAB_03f293c0:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


