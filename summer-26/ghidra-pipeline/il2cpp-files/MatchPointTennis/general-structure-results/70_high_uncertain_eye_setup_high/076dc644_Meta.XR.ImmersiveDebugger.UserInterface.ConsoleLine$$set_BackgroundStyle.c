/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.ConsoleLine$$set_BackgroundStyle
ENTRY_POINT: 076dc644
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_ConsoleLine__set_BackgroundStyle(undefined8 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  uint uVar23;
  uint uVar24;
  undefined8 unaff_x19;
  uint uVar25;
  long unaff_x23;
  undefined8 *unaff_x24;
  
  FUN_07a4ce38(*param_1,0);
  uVar11 = thunk_FUN_0448520c(*unaff_x24);
  FUN_076dd3bc(uVar11,0,*(undefined8 *)PTR_DAT_09f2ed30);
  FUN_0744298c();
  FUN_07a4ce38(*(undefined8 *)PTR_DAT_09f2edf8,0);
  uVar11 = thunk_FUN_0448520c(*unaff_x24);
  FUN_076dd3bc(uVar11,0,*(undefined8 *)PTR_DAT_09f2ed98);
  FUN_0744298c();
  FUN_07a4ce38(*(undefined8 *)PTR_DAT_09f2ee00,0);
  uVar11 = thunk_FUN_0448520c(*unaff_x24);
  FUN_076dd3bc(uVar11,0,*(undefined8 *)PTR_DAT_09f2eda8);
  FUN_0744298c();
  FUN_07a4ce38(*(undefined8 *)PTR_DAT_09f2edf0,0);
  uVar11 = thunk_FUN_0448520c(*unaff_x24);
  FUN_076dd3bc(uVar11,0,*(undefined8 *)PTR_DAT_09f2ed50);
  FUN_0744298c();
  FUN_07a4ce38(*(undefined8 *)PTR_DAT_09f2eca0,0);
  uVar11 = thunk_FUN_0448520c(*unaff_x24);
  FUN_076dd3bc(uVar11,0,*(undefined8 *)PTR_DAT_09f2ece8);
  FUN_0744298c();
  puVar4 = PTR_DAT_09f259c8;
  *(undefined8 *)(*(long *)(*(long *)PTR_DAT_09f259c8 + 0xb8) + 0x10) = unaff_x19;
  thunk_FUN_044bb4b4();
  lVar12 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2edd8);
  FUN_07441bc0(lVar12,*(undefined8 *)PTR_DAT_09f2edd0);
  uVar11 = FUN_07a4ce38(*(long *)(unaff_x23 + 0x90) + 0x20,0);
  puVar10 = PTR_DAT_09f2eef0;
  puVar9 = PTR_DAT_09f2eee0;
  puVar8 = PTR_DAT_09f2ee80;
  puVar7 = PTR_DAT_09f2ee70;
  puVar6 = PTR_DAT_09f2ee58;
  puVar5 = PTR_DAT_09f2ee18;
  puVar3 = PTR_DAT_09f2ee08;
  puVar2 = PTR_DAT_09f2edc8;
  if (lVar12 != 0) {
    FUN_0744298c(lVar12,uVar11,*(undefined8 *)PTR_DAT_09f2eec0,*(undefined8 *)PTR_DAT_09f2edc8);
    uVar11 = FUN_07a4ce38(*(long *)(unaff_x23 + 0x28) + 0x20,0);
    FUN_0744298c(lVar12,uVar11,*(undefined8 *)puVar6,*(undefined8 *)puVar2);
    uVar11 = FUN_07a4ce38(*(long *)(unaff_x23 + 0x48) + 0x20,0);
    FUN_0744298c(lVar12,uVar11,*(undefined8 *)puVar10,*(undefined8 *)puVar2);
    uVar11 = FUN_07a4ce38(*(long *)(unaff_x23 + 0x50) + 0x20,0);
    FUN_0744298c(lVar12,uVar11,*(undefined8 *)puVar7,*(undefined8 *)puVar2);
    uVar11 = FUN_07a4ce38(*(long *)(unaff_x23 + 0x68) + 0x20,0);
    FUN_0744298c(lVar12,uVar11,*(undefined8 *)puVar8,*(undefined8 *)puVar2);
    uVar11 = FUN_07a4ce38(*(long *)(unaff_x23 + 0x70) + 0x20,0);
    FUN_0744298c(lVar12,uVar11,*(undefined8 *)puVar9,*(undefined8 *)puVar2);
    uVar11 = FUN_07a4ce38(*(long *)(unaff_x23 + 0x18) + 0x20,0);
    FUN_0744298c(lVar12,uVar11,*(undefined8 *)puVar3,*(undefined8 *)puVar2);
    uVar11 = FUN_07a4ce38(*(long *)(unaff_x23 + 0x30) + 0x20,0);
    FUN_0744298c(lVar12,uVar11,*(undefined8 *)puVar5,*(undefined8 *)puVar2);
    uVar11 = FUN_07a4ce38(*(long *)(unaff_x23 + 0x38) + 0x20,0);
    FUN_0744298c(lVar12,uVar11,*(undefined8 *)PTR_DAT_09f2ee50,*(undefined8 *)puVar2);
    uVar11 = FUN_07a4ce38(*(long *)(unaff_x23 + 0x40) + 0x20,0);
    FUN_0744298c(lVar12,uVar11,*(undefined8 *)PTR_DAT_09f2ee30,*(undefined8 *)puVar2);
    uVar11 = FUN_07a4ce38(*(long *)(unaff_x23 + 0x88) + 0x20,0);
    FUN_0744298c(lVar12,uVar11,*(undefined8 *)PTR_DAT_09f2ef00,*(undefined8 *)puVar2);
    uVar11 = FUN_07a4ce38(*(long *)(unaff_x23 + 0x78) + 0x20,0);
    FUN_0744298c(lVar12,uVar11,*(undefined8 *)PTR_DAT_09f2ee68,*(undefined8 *)puVar2);
    uVar11 = FUN_07a4ce38(*(long *)(unaff_x23 + 0x80) + 0x20,0);
    FUN_0744298c(lVar12,uVar11,*(undefined8 *)PTR_DAT_09f2ef08,*(undefined8 *)puVar2);
    uVar11 = FUN_07a4ce38(*(undefined8 *)PTR_DAT_09f21c90,0);
    FUN_0744298c(lVar12,uVar11,*(undefined8 *)PTR_DAT_09f2ee38,*(undefined8 *)puVar2);
    plVar13 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
    *plVar13 = lVar12;
    thunk_FUN_044bb4b4(plVar13,lVar12);
    uVar11 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f1ee00);
    FUN_05bad680(uVar11,8,*(undefined8 *)PTR_DAT_09f2ede0);
    puVar14 = (undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20);
    *puVar14 = uVar11;
    thunk_FUN_044bb4b4(puVar14,uVar11);
    lVar12 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,5);
    if (lVar12 != 0) {
      if (*(int *)(lVar12 + 0x18) != 0) {
        *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)PTR_DAT_09f2ef18;
        thunk_FUN_044bb4b4((undefined8 *)(lVar12 + 0x20));
        if (1 < *(uint *)(lVar12 + 0x18)) {
          *(undefined8 *)(lVar12 + 0x28) = *(undefined8 *)PTR_DAT_09f2ee48;
          thunk_FUN_044bb4b4((undefined8 *)(lVar12 + 0x28));
          if (2 < *(uint *)(lVar12 + 0x18)) {
            *(undefined8 *)(lVar12 + 0x30) = *(undefined8 *)PTR_DAT_09f2eea8;
            thunk_FUN_044bb4b4((undefined8 *)(lVar12 + 0x30));
            if (3 < *(uint *)(lVar12 + 0x18)) {
              *(undefined8 *)(lVar12 + 0x38) = *(undefined8 *)PTR_DAT_09f27f70;
              thunk_FUN_044bb4b4((undefined8 *)(lVar12 + 0x38));
              puVar3 = PTR_DAT_09f2ee28;
              puVar2 = PTR_DAT_09f21428;
              if (4 < *(uint *)(lVar12 + 0x18)) {
                *(undefined8 *)(lVar12 + 0x40) = *(undefined8 *)PTR_DAT_09f215b8;
                thunk_FUN_044bb4b4();
                plVar13 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x28);
                *plVar13 = lVar12;
                thunk_FUN_044bb4b4(plVar13,lVar12);
                plVar13 = (long *)thunk_FUN_0448520c(*(undefined8 *)puVar2);
                FUN_079caa98(plVar13,*(undefined8 *)puVar3,0);
                puVar10 = PTR_DAT_09f2ef10;
                puVar9 = PTR_DAT_09f2ee98;
                puVar8 = PTR_DAT_09f2ee90;
                puVar7 = PTR_DAT_09f2ecd0;
                puVar6 = PTR_DAT_09f2ecc8;
                puVar5 = PTR_DAT_09f2ecc0;
                puVar3 = PTR_DAT_09f22468;
                puVar2 = PTR_DAT_09f1ea48;
                if (plVar13 != (long *)0x0) {
                  uVar11 = (**(code **)(*plVar13 + 0x1f8))
                                     (plVar13,*(undefined8 *)(*plVar13 + 0x200));
                  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x30);
                  *puVar14 = uVar11;
                  thunk_FUN_044bb4b4(puVar14,uVar11);
                  uVar11 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
                  FUN_0799ce68(uVar11,0,*(undefined8 *)puVar7,0);
                  FUN_076dd470(*(undefined8 *)puVar9,*(undefined8 *)puVar8,uVar11);
                  uVar11 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
                  FUN_073ab0a8(uVar11,0,*(undefined8 *)puVar6,0);
                  FUN_04cb4e94(*(undefined8 *)puVar9,*(undefined8 *)puVar10,uVar11,
                               *(undefined8 *)puVar5);
                  uVar11 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
                  FUN_0799ce68(uVar11,0,*(undefined8 *)PTR_DAT_09f2ecd8,0);
                  FUN_076dd470(*(undefined8 *)PTR_DAT_09f2ee10,*(undefined8 *)PTR_DAT_09f2ee20,
                               uVar11);
                  lVar12 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,0xc);
                  if (lVar12 != 0) {
                    if (*(int *)(lVar12 + 0x18) != 0) {
                      *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)PTR_DAT_09f2eea0;
                      thunk_FUN_044bb4b4((undefined8 *)(lVar12 + 0x20));
                      if (1 < *(uint *)(lVar12 + 0x18)) {
                        *(undefined8 *)(lVar12 + 0x28) = *(undefined8 *)PTR_DAT_09f2ee40;
                        thunk_FUN_044bb4b4((undefined8 *)(lVar12 + 0x28));
                        if (2 < *(uint *)(lVar12 + 0x18)) {
                          *(undefined8 *)(lVar12 + 0x30) = *(undefined8 *)PTR_DAT_09f2eef8;
                          thunk_FUN_044bb4b4((undefined8 *)(lVar12 + 0x30));
                          if (3 < *(uint *)(lVar12 + 0x18)) {
                            *(undefined8 *)(lVar12 + 0x38) = *(undefined8 *)PTR_DAT_09f2ee78;
                            thunk_FUN_044bb4b4((undefined8 *)(lVar12 + 0x38));
                            if (4 < *(uint *)(lVar12 + 0x18)) {
                              *(undefined8 *)(lVar12 + 0x40) = *(undefined8 *)PTR_DAT_09f2ee60;
                              thunk_FUN_044bb4b4((undefined8 *)(lVar12 + 0x40));
                              if (5 < *(uint *)(lVar12 + 0x18)) {
                                *(undefined8 *)(lVar12 + 0x48) = *(undefined8 *)PTR_DAT_09f2eec8;
                                thunk_FUN_044bb4b4((undefined8 *)(lVar12 + 0x48));
                                if (6 < *(uint *)(lVar12 + 0x18)) {
                                  *(undefined8 *)(lVar12 + 0x50) = *(undefined8 *)PTR_DAT_09f2eeb0;
                                  thunk_FUN_044bb4b4((undefined8 *)(lVar12 + 0x50));
                                  if (7 < *(uint *)(lVar12 + 0x18)) {
                                    *(undefined8 *)(lVar12 + 0x58) = *(undefined8 *)PTR_DAT_09f2eed8
                                    ;
                                    thunk_FUN_044bb4b4((undefined8 *)(lVar12 + 0x58));
                                    if (8 < *(uint *)(lVar12 + 0x18)) {
                                      *(undefined8 *)(lVar12 + 0x60) =
                                           *(undefined8 *)PTR_DAT_09f2eeb8;
                                      thunk_FUN_044bb4b4((undefined8 *)(lVar12 + 0x60));
                                      if (9 < *(uint *)(lVar12 + 0x18)) {
                                        *(undefined8 *)(lVar12 + 0x68) =
                                             *(undefined8 *)PTR_DAT_09f2eee8;
                                        thunk_FUN_044bb4b4((undefined8 *)(lVar12 + 0x68));
                                        if (10 < *(uint *)(lVar12 + 0x18)) {
                                          *(undefined8 *)(lVar12 + 0x70) =
                                               *(undefined8 *)PTR_DAT_09f2ee88;
                                          thunk_FUN_044bb4b4((undefined8 *)(lVar12 + 0x70));
                                          if (0xb < *(uint *)(lVar12 + 0x18)) {
                                            *(undefined8 *)(lVar12 + 0x78) =
                                                 *(undefined8 *)PTR_DAT_09f2eed0;
                                            thunk_FUN_044bb4b4();
                                            lVar15 = thunk_FUN_04456be0(0);
                                            if ((lVar15 != 0) &&
                                               (lVar15 = FUN_07a832e8(lVar15,0),
                                               puVar2 = PTR_DAT_09f2ecb8, puVar4 = PTR_DAT_09f2ecb0,
                                               lVar15 != 0)) {
                                              uVar21 = *(uint *)(lVar15 + 0x18);
                                              if (0 < (int)uVar21) {
                                                uVar23 = 0;
                                                do {
                                                  if (uVar21 <= uVar23) goto LAB_076dd34c;
                                                  plVar13 = *(long **)(lVar15 + (long)(int)uVar23 *
                                                                                8 + 0x20);
                                                  if (plVar13 == (long *)0x0) {
LAB_076dd338:
                    /* WARNING: Subroutine does not return */
                                                    FUN_04447e44();
                                                  }
                                                  uVar16 = (**(code **)(*plVar13 + 0x338))
                                                                     (plVar13,*(undefined8 *)
                                                                               (*plVar13 + 0x340));
                                                  if ((uVar16 & 1) == 0) {
                                                    lVar17 = (**(code **)(*plVar13 + 0x2a8))
                                                                       (plVar13,*(undefined8 *)
                                                                                 (*plVar13 + 0x2b0))
                                                    ;
                                                    if (lVar17 == 0) goto LAB_076dd338;
                                                    uVar11 = *(undefined8 *)(lVar17 + 0x10);
                                                    if (0 < (int)*(ulong *)(lVar12 + 0x18)) {
                                                      uVar16 = 0;
                                                      uVar22 = *(ulong *)(lVar12 + 0x18) &
                                                               0xffffffff;
                                                      do {
                                                        if (uVar22 <= uVar16) goto LAB_076dd34c;
                                                        plVar18 = *(long **)(*(long *)(*(long *)
                                                  PTR_DAT_09f259c8 + 0xb8) + 0x30);
                                                  if (plVar18 == (long *)0x0) goto LAB_076dd338;
                                                  uVar22 = (**(code **)(*plVar18 + 0x1c8))
                                                                     (plVar18,uVar11,
                                                                      *(undefined8 *)
                                                                       (lVar12 + 0x20 + uVar16 * 8),
                                                                      1,*(undefined8 *)
                                                                         (*plVar18 + 0x1d0));
                                                  if ((uVar22 & 1) != 0) goto LAB_076dd160;
                                                  uVar16 = uVar16 + 1;
                                                  uVar22 = (ulong)*(uint *)(lVar12 + 0x18);
                                                  } while ((long)uVar16 <
                                                           (long)(int)*(uint *)(lVar12 + 0x18));
                                                  }
                                                  lVar17 = (**(code **)(*plVar13 + 0x268))
                                                                     (plVar13,*(undefined8 *)
                                                                               (*plVar13 + 0x270));
                                                  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_04447e44();
                                                  }
                                                  uVar21 = *(uint *)(lVar17 + 0x18);
                                                  if (0 < (int)uVar21) {
                                                    uVar24 = 0;
                                                    do {
                                                      if (uVar21 <= uVar24) {
                    /* WARNING: Subroutine does not return */
                                                        FUN_04447e4c();
                                                      }
                                                      plVar13 = *(long **)(lVar17 + (long)(int)
                                                  uVar24 * 8 + 0x20);
                                                  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_04447e44();
                                                  }
                                                  lVar19 = (**(code **)(*plVar13 + 0x7b8))
                                                                     (plVar13,0x1a,
                                                                      *(undefined8 *)
                                                                       (*plVar13 + 0x7c0));
                                                  if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_04447e44();
                                                  }
                                                  uVar21 = *(uint *)(lVar19 + 0x18);
                                                  if (0 < (int)uVar21) {
                                                    uVar25 = 0;
                                                    do {
                                                      if (uVar21 <= uVar25) {
                    /* WARNING: Subroutine does not return */
                                                        FUN_04447e4c();
                                                      }
                                                      plVar13 = *(long **)(lVar19 + (long)(int)
                                                  uVar25 * 8 + 0x20);
                                                  uVar11 = *(undefined8 *)puVar4;
                                                  if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4)
                                                      == 0) {
                                                    thunk_FUN_044a54b4();
                                                  }
                                                  uVar11 = FUN_07a4ce38(uVar11,0);
                                                  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_04447e44(uVar11,uVar11);
                                                  }
                                                  lVar20 = (**(code **)(*plVar13 + 0x218))
                                                                     (plVar13,uVar11,0,
                                                                      *(undefined8 *)
                                                                       (*plVar13 + 0x220));
                                                  if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_04447e44();
                                                  }
                                                  if (0 < (int)*(ulong *)(lVar20 + 0x18)) {
                                                    uVar16 = 0;
                                                    uVar22 = *(ulong *)(lVar20 + 0x18) & 0xffffffff;
                                                    do {
                                                      if (uVar22 <= uVar16) {
                    /* WARNING: Subroutine does not return */
                                                        FUN_04447e4c();
                                                      }
                                                      plVar18 = *(long **)(lVar20 + 0x20 +
                                                                          uVar16 * 8);
                                                      if (plVar18 != (long *)0x0) {
                                                        bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
                                                        if ((bVar1 <= *(byte *)(*plVar18 + 0x130))
                                                           && (*(long *)(*(long *)(*plVar18 + 200) +
                                                                         (ulong)bVar1 * 8 + -8) ==
                                                               *(long *)puVar2)) {
                                                          FUN_076dd504(plVar18[2],plVar18[3],plVar13
                                                                       ,0,plVar18[4]);
                                                        }
                                                      }
                                                      uVar22 = (ulong)*(uint *)(lVar20 + 0x18);
                                                      uVar16 = uVar16 + 1;
                                                    } while ((long)uVar16 <
                                                             (long)(int)*(uint *)(lVar20 + 0x18));
                                                  }
                                                  uVar21 = *(uint *)(lVar19 + 0x18);
                                                  uVar25 = uVar25 + 1;
                                                  } while ((int)uVar25 < (int)uVar21);
                                                  }
                                                  uVar21 = *(uint *)(lVar17 + 0x18);
                                                  uVar24 = uVar24 + 1;
                                                  } while ((int)uVar24 < (int)uVar21);
                                                  }
                                                  }
LAB_076dd160:
                                                  uVar21 = *(uint *)(lVar15 + 0x18);
                                                  uVar23 = uVar23 + 1;
                                                } while ((int)uVar23 < (int)uVar21);
                                              }
                                              return;
                                            }
                                            goto LAB_076dd350;
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
                    goto LAB_076dd34c;
                  }
                }
                goto LAB_076dd350;
              }
            }
          }
        }
      }
LAB_076dd34c:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
  }
LAB_076dd350:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


