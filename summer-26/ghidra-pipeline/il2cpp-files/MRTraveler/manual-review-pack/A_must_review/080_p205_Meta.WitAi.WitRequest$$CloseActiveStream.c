/*
FUNCTION_NAME: Meta.WitAi.WitRequest$$CloseActiveStream
ENTRY_POINT: 06ccde98
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Meta_WitAi_WitRequest__CloseActiveStream
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4,
               long *param_5)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  float unaff_s8;
  float fVar14;
  float fVar15;
  float unaff_s9;
  float fVar16;
  float fVar17;
  float fVar18;
  float unaff_s12;
  float fVar19;
  float fVar20;
  float unaff_s14;
  float fVar21;
  float fVar22;
  int iVar23;
  float fStack0000000000000004;
  float fStack000000000000000c;
  float fStack0000000000000014;
  float fStack000000000000001c;
  float fStack0000000000000024;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  ulong in_stack_00000050;
  undefined8 in_stack_00000058;
  float fStack00000000000000a8;
  float fStack00000000000000ac;
  
  iVar2 = (**(code **)(*param_5 + 0x188))(param_5,*(undefined8 *)(*param_5 + 400));
  plVar9 = *(long **)(unaff_x19 + 0x20);
  if (plVar9 != (long *)0x0) {
    iVar3 = (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
    plVar9 = *(long **)(unaff_x19 + 0x20);
    if (plVar9 != (long *)0x0) {
      iVar4 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
      plVar9 = *(long **)(unaff_x19 + 0x20);
      if (plVar9 != (long *)0x0) {
        iVar5 = (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
        lVar10 = *(long *)(unaff_x21 + 0x10);
        if (lVar10 != 0) {
          if (*(uint *)(lVar10 + 0x18) <= *(uint *)(unaff_x19 + 0x48)) {
LAB_06cce6f0:
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb38();
          }
          lVar10 = *(long *)(lVar10 + (long)(int)*(uint *)(unaff_x19 + 0x48) * 8 + 0x20);
          if (lVar10 != 0) {
            in_stack_00000048 = *(undefined8 *)(lVar10 + 0x28);
            in_stack_00000040 = *(undefined8 *)(lVar10 + 0x20);
            in_stack_00000058 = *(undefined8 *)(lVar10 + 0x38);
            uVar13 = *(ulong *)(lVar10 + 0x30);
            iVar23 = *(int *)(unaff_x19 + 0x30);
            in_stack_00000050 = uVar13;
            uVar12 = FUN_06cc0b94(&stack0x00000040,0);
            fStack00000000000000ac = param_3;
            if ((unaff_x20 != 0) && (plVar9 = (long *)FUN_06cd4d5c(), plVar9 != (long *)0x0)) {
              fStack00000000000000a8 = unaff_s9 * (float)iVar4;
              fVar19 = unaff_s12 * (float)iVar2;
              fVar21 = (1.0 - (unaff_s14 + unaff_s8)) * (float)iVar3;
              fVar16 = unaff_s8 * (float)iVar5;
              uVar6 = FUN_085c1e5c(plVar9,0);
              fVar17 = (float)uVar12;
              fVar15 = (float)uVar13;
              FUN_085c1e98(plVar9,fVar15 == 0.0 &&
                                  (fVar17 == 0.0 &&
                                  (fStack00000000000000ac == 1.0 && param_4 == 1.0)),0);
              if (*(int *)(unaff_x19 + 0x10) < 5) {
LAB_06cce1b8:
                puVar1 = PTR_DAT_08e6aa68;
                fVar14 = fVar21 - (float)iVar23;
                fStack000000000000002c = param_4;
                iVar3 = (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
                iVar4 = (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
                iVar2 = *(int *)(unaff_x19 + 0x30);
                uVar7 = FUN_085c8064(0);
                FUN_085c808c(*(undefined8 *)(unaff_x19 + 0x20),0);
                uVar11 = *(undefined8 *)(unaff_x19 + 0x18);
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_03cd7500();
                }
                fVar18 = fStack00000000000000ac;
                fVar22 = fStack00000000000000a8;
                fVar20 = fVar19 - (float)iVar23;
                fStack000000000000000c = fVar15 + 1.0;
                fStack0000000000000014 = fVar14;
                FUN_085af55c(fVar19,fVar14,fStack00000000000000a8,(float)iVar2,uVar12,
                             (fVar15 + 1.0) - 1.0 / (float)iVar3,fStack00000000000000ac,
                             1.0 / (float)iVar4,plVar9,0,0,0,0,uVar11,0);
                iVar2 = (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
                fVar14 = fVar21 + fVar16;
                fStack000000000000001c = fVar19;
                FUN_085af55c(fVar19,fVar14,fVar22,(float)*(int *)(unaff_x19 + 0x30),uVar12,uVar13,
                             fVar18,1.0 / (float)iVar2,plVar9,0,0,0,0,
                             *(undefined8 *)(unaff_x19 + 0x18),0);
                iVar2 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
                fVar15 = fStack000000000000002c;
                FUN_085af55c(fVar20,fVar21,(float)*(int *)(unaff_x19 + 0x30),fVar16,uVar12,uVar13,
                             1.0 / (float)iVar2,fStack000000000000002c,plVar9,0,0,0,0,
                             *(undefined8 *)(unaff_x19 + 0x18),0);
                iVar2 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
                fStack0000000000000024 = fVar17 + 1.0;
                fVar18 = fStack0000000000000024 - 1.0 / (float)iVar2;
                fStack0000000000000004 = fVar17;
                iVar2 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
                fVar19 = fVar19 + fVar22;
                FUN_085af55c(fVar19,fVar21,(float)*(int *)(unaff_x19 + 0x30),fVar16,fVar18,uVar13,
                             1.0 / (float)iVar2,fVar15,plVar9,0,0,0,0,
                             *(undefined8 *)(unaff_x19 + 0x18),0);
                iVar2 = (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
                fVar17 = fStack000000000000000c;
                fVar22 = fStack000000000000000c - 1.0 / (float)iVar2;
                iVar2 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
                iVar3 = (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
                fVar15 = fStack0000000000000014;
                FUN_085af55c(fVar20,fStack0000000000000014,(float)*(int *)(unaff_x19 + 0x30),
                             (float)*(int *)(unaff_x19 + 0x30),uVar12,fVar22,1.0 / (float)iVar2,
                             1.0 / (float)iVar3,plVar9,0,0,0,0,*(undefined8 *)(unaff_x19 + 0x18),0);
                iVar2 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
                fVar22 = fStack0000000000000024 - 1.0 / (float)iVar2;
                iVar2 = (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
                iVar3 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
                iVar4 = (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
                FUN_085af55c(fVar19,fVar15,(float)*(int *)(unaff_x19 + 0x30),
                             (float)*(int *)(unaff_x19 + 0x30),fVar22,fVar17 - 1.0 / (float)iVar2,
                             1.0 / (float)iVar3,1.0 / (float)iVar4,plVar9,0,0,0,0,
                             *(undefined8 *)(unaff_x19 + 0x18),0);
                iVar2 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
                iVar3 = (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
                fVar17 = fStack0000000000000004;
                uVar13 = uVar13 & 0xffffffff;
                FUN_085af55c(fVar20,fVar14,(float)*(int *)(unaff_x19 + 0x30),
                             (float)*(int *)(unaff_x19 + 0x30),fStack0000000000000004,uVar13,
                             1.0 / (float)iVar2,1.0 / (float)iVar3,plVar9,0,0,0,0,
                             *(undefined8 *)(unaff_x19 + 0x18),0);
                iVar2 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
                fVar15 = fStack0000000000000024 - 1.0 / (float)iVar2;
                iVar2 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
                iVar3 = (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
                FUN_085af55c(fVar19,fVar14,(float)*(int *)(unaff_x19 + 0x30),
                             (float)*(int *)(unaff_x19 + 0x30),fVar15,uVar13,1.0 / (float)iVar2,
                             1.0 / (float)iVar3,plVar9,0,0,0,0,*(undefined8 *)(unaff_x19 + 0x18),0);
                FUN_085af55c(fStack000000000000001c,fVar21,fStack00000000000000a8,fVar16,fVar17,
                             uVar13,fStack00000000000000ac,fStack000000000000002c,plVar9,0,0,0,0,
                             *(undefined8 *)(unaff_x19 + 0x18),0);
                FUN_085c808c(uVar7,0);
                FUN_085c1e98(plVar9,uVar6,0);
                return;
              }
              lVar10 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e69770,8);
              if (lVar10 != 0) {
                if (*(int *)(lVar10 + 0x18) != 0) {
                  *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)PTR_DAT_08e8b398;
                  thunk_FUN_03d233cc((undefined8 *)(lVar10 + 0x20));
                  uVar7 = FUN_085e29cc(plVar9,0);
                  if (1 < *(uint *)(lVar10 + 0x18)) {
                    *(undefined8 *)(lVar10 + 0x28) = uVar7;
                    thunk_FUN_03d233cc((undefined8 *)(lVar10 + 0x28),uVar7);
                    if (2 < *(uint *)(lVar10 + 0x18)) {
                      *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)PTR_DAT_08e8b3a0;
                      thunk_FUN_03d233cc((undefined8 *)(lVar10 + 0x30));
                      fStack0000000000000038 = fStack00000000000000a8;
                      fStack0000000000000030 = fVar19;
                      fStack0000000000000034 = fVar21;
                      fStack000000000000003c = fVar16;
                      uVar7 = FUN_085a9da4(&stack0x00000030,0,0,0);
                      if (3 < *(uint *)(lVar10 + 0x18)) {
                        *(undefined8 *)(lVar10 + 0x38) = uVar7;
                        thunk_FUN_03d233cc((undefined8 *)(lVar10 + 0x38),uVar7);
                        if (4 < *(uint *)(lVar10 + 0x18)) {
                          *(undefined8 *)(lVar10 + 0x40) = *(undefined8 *)PTR_DAT_08e8b390;
                          thunk_FUN_03d233cc((undefined8 *)(lVar10 + 0x40));
                          fStack0000000000000038 = fStack00000000000000ac;
                          fStack0000000000000030 = fVar17;
                          fStack0000000000000034 = fVar15;
                          fStack000000000000003c = param_4;
                          uVar7 = FUN_085a9da4(&stack0x00000030,0,0,0);
                          if (5 < *(uint *)(lVar10 + 0x18)) {
                            *(undefined8 *)(lVar10 + 0x48) = uVar7;
                            thunk_FUN_03d233cc((undefined8 *)(lVar10 + 0x48),uVar7);
                            if (6 < *(uint *)(lVar10 + 0x18)) {
                              *(undefined8 *)(lVar10 + 0x50) = *(undefined8 *)PTR_DAT_08e8b3a8;
                              thunk_FUN_03d233cc();
                              plVar8 = *(long **)(unaff_x19 + 0x18);
                              if (plVar8 == (long *)0x0) {
                                uVar7 = 0;
                              }
                              else {
                                uVar7 = (**(code **)(*plVar8 + 0x168))
                                                  (plVar8,*(undefined8 *)(*plVar8 + 0x170));
                              }
                              if (7 < *(uint *)(lVar10 + 0x18)) {
                                *(undefined8 *)(lVar10 + 0x58) = uVar7;
                                thunk_FUN_03d233cc();
                                uVar7 = FUN_06f74f38(lVar10,0);
                                if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
                                  thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
                                }
                                FUN_085a3c50(uVar7,0);
                                goto LAB_06cce1b8;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                goto LAB_06cce6f0;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


