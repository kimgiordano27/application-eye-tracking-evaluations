/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKAnchor$$GetAnchorSize
ENTRY_POINT: 07732690
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


void Meta_XR_MRUtilityKit_MRUKAnchor__GetAnchorSize(long param_1)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long *plVar19;
  uint uVar20;
  uint uVar21;
  long *plVar22;
  long lVar23;
  int *piVar24;
  long unaff_x19;
  undefined4 unaff_w20;
  undefined8 uVar25;
  long lVar26;
  undefined4 uVar27;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  int iStack0000000000000058;
  int iStack000000000000005c;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  long in_stack_00000088;
  
  FUN_04447ba8(*(undefined8 *)(param_1 + 0x868));
  FUN_04447ba8(PTR_DAT_09f31870);
  FUN_04447ba8(PTR_DAT_09f31878);
  FUN_04447ba8(PTR_DAT_09f31880);
  FUN_04447ba8(PTR_DAT_09f31668);
  FUN_04447ba8(PTR_DAT_09f30ab8);
  FUN_04447ba8(PTR_DAT_09f1e538);
  FUN_04447ba8(PTR_DAT_09f31428);
  FUN_04447ba8(PTR_DAT_09f1e5f0);
  FUN_04447ba8(PTR_DAT_09f1eb88);
  FUN_04447ba8(PTR_DAT_09f1e7d0);
  FUN_04447ba8(PTR_DAT_09f31888);
  FUN_04447ba8(PTR_DAT_09f21278);
  FUN_04447ba8(PTR_DAT_09f215a0);
  FUN_04447ba8(PTR_DAT_09f1e7e8);
  *(undefined1 *)(unaff_x19 + 0x1e0) = 1;
  in_stack_00000088 = 0;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  iStack0000000000000058 = 0;
  iStack000000000000005c = 0;
  lVar16 = *(long *)(in_stack_00000038 + 0x10);
  if (lVar16 != 0) {
    plVar22 = *(long **)(lVar16 + 0x30);
    uVar17 = *(undefined8 *)(lVar16 + 0x1c0);
    iVar7 = FUN_0771f208(0);
    if ((iVar7 < 6) &&
       ((iVar7 = FUN_0771f208(0), iVar7 != 5 || (iVar7 = FUN_0771f2f4(0), iVar7 < 3)))) {
      return;
    }
    puVar6 = PTR_DAT_09f31830;
    puVar5 = PTR_DAT_09f31818;
    puVar4 = PTR_DAT_09f1eb88;
    lVar16 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1eb88,unaff_w20);
    lVar8 = FUN_04447c90(*(undefined8 *)puVar4,unaff_w20);
    lVar9 = FUN_04447c90(*(undefined8 *)puVar4,unaff_w20);
    FUN_07720304(uVar17,0);
    lVar10 = thunk_FUN_0448520c(*(undefined8 *)puVar6);
    FUN_07441bc0(lVar10,*(undefined8 *)puVar5);
    puVar6 = PTR_DAT_09f31878;
    puVar5 = PTR_DAT_09f31860;
    puVar4 = PTR_DAT_09f31810;
    lVar18 = *(long *)(in_stack_00000038 + 0x18);
    if (lVar18 != 0) {
      lVar26 = 0;
      bVar3 = false;
      while( true ) {
        uVar20 = (uint)*(undefined8 *)(lVar18 + 0x18);
        if ((int)uVar20 <= (int)(uint)lVar26) break;
        if (uVar20 <= (uint)lVar26) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        lVar18 = *(long *)(lVar18 + lVar26 * 8 + 0x20);
        if ((lVar18 == 0) || (uVar11 = FUN_07731dc8(*(undefined8 *)(lVar18 + 0x20)), lVar10 == 0))
        goto LAB_07732994;
        uVar12 = FUN_074444a8(lVar10,uVar11,&stack0x00000088,*(undefined8 *)puVar4);
        if ((uVar12 & 1) == 0) {
          lVar13 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f31880);
          FUN_05bad610(lVar13,*(undefined8 *)PTR_DAT_09f31868);
          in_stack_00000088 = lVar13;
          FUN_0744298c(lVar10,uVar11,lVar13,*(undefined8 *)PTR_DAT_09f31808);
        }
        if (in_stack_00000088 == 0) goto LAB_07732994;
        lVar13 = *(long *)(in_stack_00000088 + 0x10);
        lVar23 = *(long *)puVar5;
        *(int *)(in_stack_00000088 + 0x1c) = *(int *)(in_stack_00000088 + 0x1c) + 1;
        if (lVar13 == 0) goto LAB_07732994;
        uVar20 = *(uint *)(in_stack_00000088 + 0x18);
        if (uVar20 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(in_stack_00000088 + 0x18) = uVar20 + 1;
          plVar19 = (long *)(lVar13 + (long)(int)uVar20 * 8 + 0x20);
          *plVar19 = lVar18;
          thunk_FUN_044bb4b4(plVar19,lVar18);
        }
        else {
          FUN_05bade44(in_stack_00000088,lVar18,
                       *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
        }
        if (in_stack_00000088 == 0) goto LAB_07732994;
        if (1 < *(int *)(in_stack_00000088 + 0x18)) {
          lVar13 = FUN_05badb74(in_stack_00000088,0,*(undefined8 *)puVar6);
          if (((lVar13 == 0) || (*(long *)(lVar13 + 0x30) == 0)) || (*(long *)(lVar18 + 0x30) == 0))
          goto LAB_07732994;
          if (*(int *)(*(long *)(lVar13 + 0x30) + 0x18) != *(int *)(*(long *)(lVar18 + 0x30) + 0x18)
             ) {
            if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            FUN_094c6b48(*(undefined8 *)PTR_DAT_09f31888,0);
            bVar3 = true;
          }
        }
        lVar26 = lVar26 + 1;
        lVar18 = *(long *)(in_stack_00000038 + 0x18);
        if (lVar18 == 0) goto LAB_07732994;
      }
      if (bVar3) {
        return;
      }
      lVar18 = *(long *)(in_stack_00000038 + 0x10);
      if ((lVar18 != 0) && (*(long *)(lVar18 + 0x1a0) != 0)) {
        if (*(uint *)(*(long *)(lVar18 + 0x1a0) + 0x18) == uVar20) {
          if (lVar10 != 0) {
LAB_07732a48:
            lVar18 = FUN_0744266c(lVar10,*(undefined8 *)PTR_DAT_09f31828);
            if (lVar18 != 0) {
              FUN_058cf098(&stack0x00000040,lVar18,*(undefined8 *)PTR_DAT_09f31850);
              uVar20 = 0;
              in_stack_00000068 = in_stack_00000048;
              in_stack_00000060 = in_stack_00000040;
              in_stack_00000070 = in_stack_00000050;
              while (uVar12 = FUN_05260c20(&stack0x00000060,*(undefined8 *)PTR_DAT_09f31840),
                    uVar11 = in_stack_00000070, (uVar12 & 1) != 0) {
                lVar18 = FUN_0744290c(lVar10,in_stack_00000070,*(undefined8 *)PTR_DAT_09f31820);
                if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                lVar26 = FUN_05badb74(lVar18,0,*(undefined8 *)puVar6);
                if (lVar26 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                lVar13 = *(long *)(lVar26 + 0x30);
                if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                uVar1 = *(uint *)(lVar13 + 0x18);
                if (0 < (int)uVar1) {
                  uVar25 = *(undefined8 *)PTR_DAT_09f1e7e8;
                  uVar21 = 0;
                  while( true ) {
                    if (*(uint *)(lVar13 + 0x18) <= uVar21) {
                    /* WARNING: Subroutine does not return */
                      FUN_04447e4c();
                    }
                    lVar13 = *(long *)(lVar13 + (long)(int)uVar21 * 8 + 0x20);
                    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_04447e44();
                    }
                    uVar27 = *(undefined4 *)(lVar13 + 0x10);
                    if (0 < *(int *)(lVar18 + 0x18)) {
                      iVar7 = 0;
                      do {
                        lVar13 = FUN_05badb74(lVar18,iVar7,*(undefined8 *)puVar6);
                        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_04447e44();
                        }
                        if (*(long *)(in_stack_00000038 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_04447e44();
                        }
                        lVar23 = FUN_07726ac8(*(long *)(in_stack_00000038 + 0x10),
                                              *(undefined8 *)(lVar13 + 0x18));
                        if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_04447e44();
                        }
                        iStack000000000000005c = *(int *)(lVar23 + 0x28);
                        lVar23 = *(long *)(lVar13 + 0x30);
                        if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_04447e44();
                        }
                        if (*(uint *)(lVar23 + 0x18) <= uVar21) {
                    /* WARNING: Subroutine does not return */
                          FUN_04447e4c();
                        }
                        lVar23 = *(long *)(lVar23 + (long)(int)uVar21 * 8 + 0x20);
                        if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_04447e44();
                        }
                        lVar14 = *(long *)(lVar23 + 0x18);
                        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_04447e44();
                        }
                        FUN_07a612b4(lVar14,0,lVar16,iStack000000000000005c,
                                     *(undefined4 *)(lVar14 + 0x18),0);
                        lVar14 = *(long *)(lVar23 + 0x20);
                        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_04447e44();
                        }
                        FUN_07a612b4(lVar14,0,lVar8,iStack000000000000005c,
                                     *(undefined4 *)(lVar14 + 0x18),0);
                        lVar14 = *(long *)(lVar23 + 0x28);
                        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_04447e44();
                        }
                        FUN_07a612b4(lVar14,0,lVar9,iStack000000000000005c,
                                     *(undefined4 *)(lVar14 + 0x18),0);
                        if (uVar21 == 0) {
                          if (*(long *)(lVar23 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_04447e44();
                          }
                          lVar14 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,7);
                          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_04447e44();
                          }
                          if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_04447e4c();
                          }
                          *(undefined8 *)(lVar14 + 0x20) = uVar25;
                          thunk_FUN_044bb4b4((undefined8 *)(lVar14 + 0x20),uVar25);
                          if (*(long *)(lVar13 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_04447e44();
                          }
                          uVar25 = thunk_FUN_0952ff6c(*(long *)(lVar13 + 0x18),0);
                          if (*(uint *)(lVar14 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                            FUN_04447e4c();
                          }
                          *(undefined8 *)(lVar14 + 0x28) = uVar25;
                          thunk_FUN_044bb4b4();
                          if (*(uint *)(lVar14 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                            FUN_04447e4c();
                          }
                          *(undefined8 *)(lVar14 + 0x30) = *(undefined8 *)PTR_DAT_09f1e7d0;
                          thunk_FUN_044bb4b4();
                          uVar25 = FUN_07a3b850((long)&stack0x00000058 + 4,0);
                          if (*(uint *)(lVar14 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
                            FUN_04447e4c();
                          }
                          *(undefined8 *)(lVar14 + 0x38) = uVar25;
                          thunk_FUN_044bb4b4();
                          if (*(uint *)(lVar14 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                            FUN_04447e4c();
                          }
                          *(undefined8 *)(lVar14 + 0x40) = *(undefined8 *)PTR_DAT_09f215a0;
                          thunk_FUN_044bb4b4();
                          if (*(long *)(lVar23 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_04447e44();
                          }
                          iStack0000000000000058 =
                               iStack000000000000005c + *(int *)(*(long *)(lVar23 + 0x18) + 0x18);
                          uVar25 = FUN_07a3b850(&stack0x00000058,0);
                          if (*(uint *)(lVar14 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
                            FUN_04447e4c();
                          }
                          *(undefined8 *)(lVar14 + 0x48) = uVar25;
                          thunk_FUN_044bb4b4();
                          if (*(uint *)(lVar14 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
                            FUN_04447e4c();
                          }
                          *(undefined8 *)(lVar14 + 0x50) = *(undefined8 *)PTR_DAT_09f21278;
                          thunk_FUN_044bb4b4();
                          uVar25 = FUN_078b57fc(lVar14,0);
                        }
                        iVar7 = iVar7 + 1;
                      } while (iVar7 < *(int *)(lVar18 + 0x18));
                    }
                    FUN_077203f8(uVar27,uVar17,uVar11,lVar16,lVar8,lVar9,0);
                    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_04447e44();
                    }
                    FUN_07731e0c(lVar16,0,*(undefined4 *)(lVar16 + 0x18));
                    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_04447e44();
                    }
                    FUN_07731e0c(lVar8,0,*(undefined4 *)(lVar8 + 0x18));
                    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_04447e44();
                    }
                    FUN_07731e0c(lVar9,0,*(undefined4 *)(lVar9 + 0x18));
                    uVar21 = uVar21 + 1;
                    if (uVar21 == uVar1) break;
                    lVar13 = *(long *)(lVar26 + 0x30);
                    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_04447e44();
                    }
                  }
                }
                if (*(long *)(in_stack_00000038 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                plVar19 = *(long **)(*(long *)(in_stack_00000038 + 0x10) + 0x1a0);
                if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                lVar18 = thunk_FUN_04485110(lVar26,*(undefined8 *)(*plVar19 + 0x40));
                if (lVar18 == 0) {
                  uVar17 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                  FUN_04447d10(uVar17,0);
                }
                if (*(uint *)(plVar19 + 3) <= uVar20) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e4c();
                }
                plVar19[(long)(int)uVar20 + 4] = lVar26;
                thunk_FUN_044bb4b4(plVar19 + (long)(int)uVar20 + 4,lVar26);
                uVar20 = uVar20 + 1;
              }
              FUN_05260c1c(&stack0x00000060,*(undefined8 *)PTR_DAT_09f31838);
              puVar4 = PTR_DAT_09f31428;
              if (plVar22 == (long *)0x0) goto LAB_07732994;
              bVar2 = *(byte *)(*(long *)PTR_DAT_09f31428 + 0x130);
              if ((*(byte *)(*plVar22 + 0x130) < bVar2) ||
                 (*(long *)(*(long *)(*plVar22 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_09f31428)) {
LAB_0773318c:
                    /* WARNING: Subroutine does not return */
                FUN_044481e4(plVar22);
              }
              FUN_094edf40(plVar22,0,0);
              bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
              if ((*(byte *)(*plVar22 + 0x130) < bVar2) ||
                 (*(long *)(*(long *)(*plVar22 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4))
              goto LAB_0773318c;
              FUN_094edf40(plVar22,uVar17,0);
              if ((*(long *)(in_stack_00000038 + 0x10) == 0) ||
                 (plVar19 = (long *)FUN_07715da0(*(long *)(in_stack_00000038 + 0x10),0),
                 plVar19 == (long *)0x0)) goto LAB_07732994;
              lVar16 = *plVar19;
              uVar12 = (ulong)*(ushort *)(lVar16 + 0x12e);
              if (uVar12 == 0) {
LAB_077330a0:
                puVar15 = (undefined8 *)FUN_044822ac(plVar19,*(long *)PTR_DAT_09f30ab8,0);
              }
              else {
                piVar24 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                while (*(long *)(piVar24 + -2) != *(long *)PTR_DAT_09f30ab8) {
                  uVar12 = uVar12 - 1;
                  piVar24 = piVar24 + 4;
                  if (uVar12 == 0) goto LAB_077330a0;
                }
                puVar15 = (undefined8 *)(lVar16 + (long)*piVar24 * 0x10 + 0x138);
              }
              uVar12 = (*(code *)*puVar15)(plVar19,puVar15[1]);
              if ((uVar12 & 1) == 0) {
                return;
              }
              lVar16 = FUN_04c6bfdc(plVar22,*(undefined8 *)PTR_DAT_09f317e8);
              if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
                thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e538);
              }
              uVar12 = FUN_0952c404(lVar16,0,0);
              if ((uVar12 & 1) != 0) {
                lVar16 = FUN_095259a0(plVar22,0);
                if (lVar16 == 0) goto LAB_07732994;
                lVar16 = FUN_04d7a120(lVar16,*(undefined8 *)PTR_DAT_09f317f0);
              }
              if (lVar16 != 0) {
                uVar17 = FUN_0775d4bc(lVar16,0);
                lVar16 = *(long *)(in_stack_00000038 + 0x10);
                if (lVar16 != 0) {
                  FUN_07731ebc(lVar16,uVar17,*(undefined8 *)(lVar16 + 0x1a0));
                  return;
                }
              }
            }
          }
        }
        else if ((lVar10 != 0) &&
                (lVar26 = FUN_0744266c(lVar10,*(undefined8 *)PTR_DAT_09f31828), lVar26 != 0)) {
          uVar27 = System_Collections_Generic_List<OVRTask<OVRAnchor>>__BinarySearch
                             (lVar26,*(undefined8 *)PTR_DAT_09f31858);
          uVar11 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f31668,uVar27);
          *(undefined8 *)(lVar18 + 0x1a0) = uVar11;
          thunk_FUN_044bb4b4((undefined8 *)(lVar18 + 0x1a0),uVar11);
          goto LAB_07732a48;
        }
      }
    }
  }
LAB_07732994:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


