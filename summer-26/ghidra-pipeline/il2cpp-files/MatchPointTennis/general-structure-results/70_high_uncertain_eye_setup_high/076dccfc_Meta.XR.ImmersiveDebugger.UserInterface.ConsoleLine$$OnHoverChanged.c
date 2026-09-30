/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.ConsoleLine$$OnHoverChanged
ENTRY_POINT: 076dccfc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_ConsoleLine__OnHoverChanged(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  long unaff_x23;
  long *plVar17;
  
  lVar4 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,0xc);
  if (lVar4 == 0) {
LAB_076dd350:
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if (*(int *)(lVar4 + 0x18) != 0) {
    *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)PTR_DAT_09f2eea0;
    thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x20));
    if (1 < *(uint *)(lVar4 + 0x18)) {
      *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)PTR_DAT_09f2ee40;
      thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x28));
      if (2 < *(uint *)(lVar4 + 0x18)) {
        *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)PTR_DAT_09f2eef8;
        thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x30));
        if (3 < *(uint *)(lVar4 + 0x18)) {
          *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)PTR_DAT_09f2ee78;
          thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x38));
          if (4 < *(uint *)(lVar4 + 0x18)) {
            *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)PTR_DAT_09f2ee60;
            thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x40));
            if (5 < *(uint *)(lVar4 + 0x18)) {
              *(undefined8 *)(lVar4 + 0x48) = *(undefined8 *)PTR_DAT_09f2eec8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x48));
              if (6 < *(uint *)(lVar4 + 0x18)) {
                *(undefined8 *)(lVar4 + 0x50) = *(undefined8 *)PTR_DAT_09f2eeb0;
                thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x50));
                if (7 < *(uint *)(lVar4 + 0x18)) {
                  *(undefined8 *)(lVar4 + 0x58) = *(undefined8 *)PTR_DAT_09f2eed8;
                  thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x58));
                  if (8 < *(uint *)(lVar4 + 0x18)) {
                    *(undefined8 *)(lVar4 + 0x60) = *(undefined8 *)PTR_DAT_09f2eeb8;
                    thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x60));
                    if (9 < *(uint *)(lVar4 + 0x18)) {
                      *(undefined8 *)(lVar4 + 0x68) = *(undefined8 *)PTR_DAT_09f2eee8;
                      thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x68));
                      if (10 < *(uint *)(lVar4 + 0x18)) {
                        *(undefined8 *)(lVar4 + 0x70) = *(undefined8 *)PTR_DAT_09f2ee88;
                        thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x70));
                        if (0xb < *(uint *)(lVar4 + 0x18)) {
                          *(undefined8 *)(lVar4 + 0x78) = *(undefined8 *)PTR_DAT_09f2eed0;
                          thunk_FUN_044bb4b4();
                          lVar5 = thunk_FUN_04456be0(0);
                          if ((lVar5 != 0) &&
                             (lVar5 = FUN_07a832e8(lVar5,0), puVar3 = PTR_DAT_09f2ecb8,
                             puVar2 = PTR_DAT_09f2ecb0, lVar5 != 0)) {
                            uVar11 = *(uint *)(lVar5 + 0x18);
                            if (0 < (int)uVar11) {
                              uVar14 = 0;
                              do {
                                if (uVar11 <= uVar14) goto LAB_076dd34c;
                                plVar17 = *(long **)(lVar5 + (long)(int)uVar14 * 8 + 0x20);
                                if (plVar17 == (long *)0x0) {
LAB_076dd338:
                    /* WARNING: Subroutine does not return */
                                  FUN_04447e44();
                                }
                                uVar6 = (**(code **)(*plVar17 + 0x338))
                                                  (plVar17,*(undefined8 *)(*plVar17 + 0x340));
                                if ((uVar6 & 1) == 0) {
                                  lVar7 = (**(code **)(*plVar17 + 0x2a8))
                                                    (plVar17,*(undefined8 *)(*plVar17 + 0x2b0));
                                  if (lVar7 == 0) goto LAB_076dd338;
                                  uVar13 = *(undefined8 *)(lVar7 + 0x10);
                                  if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
                                    uVar6 = 0;
                                    uVar12 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
                                    do {
                                      if (uVar12 <= uVar6) goto LAB_076dd34c;
                                      plVar8 = *(long **)(*(long *)(*(long *)PTR_DAT_09f259c8 + 0xb8
                                                                   ) + 0x30);
                                      if (plVar8 == (long *)0x0) goto LAB_076dd338;
                                      uVar12 = (**(code **)(*plVar8 + 0x1c8))
                                                         (plVar8,uVar13,
                                                          *(undefined8 *)(lVar4 + 0x20 + uVar6 * 8),
                                                          1,*(undefined8 *)(*plVar8 + 0x1d0));
                                      if ((uVar12 & 1) != 0) goto LAB_076dd160;
                                      uVar6 = uVar6 + 1;
                                      uVar12 = (ulong)*(uint *)(lVar4 + 0x18);
                                    } while ((long)uVar6 < (long)(int)*(uint *)(lVar4 + 0x18));
                                  }
                                  lVar7 = (**(code **)(*plVar17 + 0x268))
                                                    (plVar17,*(undefined8 *)(*plVar17 + 0x270));
                                  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_04447e44();
                                  }
                                  uVar11 = *(uint *)(lVar7 + 0x18);
                                  if (0 < (int)uVar11) {
                                    uVar15 = 0;
                                    do {
                                      if (uVar11 <= uVar15) {
                    /* WARNING: Subroutine does not return */
                                        FUN_04447e4c();
                                      }
                                      plVar17 = *(long **)(lVar7 + (long)(int)uVar15 * 8 + 0x20);
                                      if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_04447e44();
                                      }
                                      lVar9 = (**(code **)(*plVar17 + 0x7b8))
                                                        (plVar17,0x1a,
                                                         *(undefined8 *)(*plVar17 + 0x7c0));
                                      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_04447e44();
                                      }
                                      uVar11 = *(uint *)(lVar9 + 0x18);
                                      if (0 < (int)uVar11) {
                                        uVar16 = 0;
                                        do {
                                          if (uVar11 <= uVar16) {
                    /* WARNING: Subroutine does not return */
                                            FUN_04447e4c();
                                          }
                                          plVar17 = *(long **)(lVar9 + (long)(int)uVar16 * 8 + 0x20)
                                          ;
                                          uVar13 = *(undefined8 *)puVar2;
                                          if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
                                            thunk_FUN_044a54b4();
                                          }
                                          uVar13 = FUN_07a4ce38(uVar13,0);
                                          if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                            FUN_04447e44(uVar13,uVar13);
                                          }
                                          lVar10 = (**(code **)(*plVar17 + 0x218))
                                                             (plVar17,uVar13,0,
                                                              *(undefined8 *)(*plVar17 + 0x220));
                                          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                                            FUN_04447e44();
                                          }
                                          if (0 < (int)*(ulong *)(lVar10 + 0x18)) {
                                            uVar6 = 0;
                                            uVar12 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
                                            do {
                                              if (uVar12 <= uVar6) {
                    /* WARNING: Subroutine does not return */
                                                FUN_04447e4c();
                                              }
                                              plVar8 = *(long **)(lVar10 + 0x20 + uVar6 * 8);
                                              if (plVar8 != (long *)0x0) {
                                                bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
                                                if ((bVar1 <= *(byte *)(*plVar8 + 0x130)) &&
                                                   (*(long *)(*(long *)(*plVar8 + 200) +
                                                              (ulong)bVar1 * 8 + -8) ==
                                                    *(long *)puVar3)) {
                                                  FUN_076dd504(plVar8[2],plVar8[3],plVar17,0,
                                                               plVar8[4]);
                                                }
                                              }
                                              uVar12 = (ulong)*(uint *)(lVar10 + 0x18);
                                              uVar6 = uVar6 + 1;
                                            } while ((long)uVar6 <
                                                     (long)(int)*(uint *)(lVar10 + 0x18));
                                          }
                                          uVar11 = *(uint *)(lVar9 + 0x18);
                                          uVar16 = uVar16 + 1;
                                        } while ((int)uVar16 < (int)uVar11);
                                      }
                                      uVar11 = *(uint *)(lVar7 + 0x18);
                                      uVar15 = uVar15 + 1;
                                    } while ((int)uVar15 < (int)uVar11);
                                  }
                                }
LAB_076dd160:
                                uVar11 = *(uint *)(lVar5 + 0x18);
                                uVar14 = uVar14 + 1;
                              } while ((int)uVar14 < (int)uVar11);
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
LAB_076dd34c:
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


