/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$ToggleMenu
ENTRY_POINT: 0773d940
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


bool Meta_XR_MRUtilityKit_SceneDebugger__ToggleMenu(code *param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  int *piVar20;
  long unaff_x20;
  long lVar21;
  long *unaff_x22;
  long *unaff_x25;
  long unaff_x26;
  long *unaff_x29;
  int iStack0000000000000040;
  int iStack0000000000000044;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000068;
  undefined8 in_stack_00000078;
  long *in_stack_00000080;
  long in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined4 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  int iStack00000000000000b8;
  undefined4 uStack00000000000000bc;
  undefined8 in_stack_000000c0;
  undefined4 in_stack_000000c8;
  undefined8 in_stack_000000d8;
  undefined4 in_stack_000000e8;
  long in_stack_00000160;
  long in_stack_00000168;
  undefined8 in_stack_00000170;
  long in_stack_00000180;
  
  (*param_1)();
  lVar17 = in_stack_00000160;
  if (unaff_x25 != (long *)0x0) {
    lVar15 = *unaff_x25;
    uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar18 != 0) {
      piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_09f312c0) {
          puVar9 = (undefined8 *)(lVar15 + (long)(*piVar20 + 2) * 0x10 + 0x138);
          goto LAB_0773d9b0;
        }
        uVar18 = uVar18 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar18 != 0);
    }
    puVar9 = (undefined8 *)FUN_044822ac();
LAB_0773d9b0:
    (*(code *)*puVar9)();
    if (unaff_x26 != 0) {
      FUN_07732130();
      if (*(long *)(unaff_x20 + 200) != 0) {
        FUN_087dae58(*(long *)(unaff_x20 + 200),0);
        if (3 < in_stack_00000090._4_4_) {
          lVar15 = *unaff_x29;
          uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar18 != 0) {
            piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_09f313c8) {
                puVar9 = (undefined8 *)(lVar15 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_0773da50;
              }
              uVar18 = uVar18 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar18 != 0);
          }
          puVar9 = (undefined8 *)FUN_044822ac();
LAB_0773da50:
          in_stack_000000a8 = (*(code *)*puVar9)();
          in_stack_00000098 = *(undefined8 *)PTR_DAT_09f31420;
          in_stack_000000a0 = 0xffffffffffffffff;
          uVar10 = FUN_07a742b0(&stack0x00000098,0);
          uVar11 = FUN_07a3b850(&stack0x000000cc,0);
          uVar10 = FUN_078b56f4(*(undefined8 *)PTR_DAT_09f31bd0,uVar10,
                                *(undefined8 *)PTR_DAT_09f31c58,uVar11,0);
          if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
            thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
          }
          FUN_094c652c(uVar10,0);
        }
        if (in_stack_00000088 != 0) {
          FUN_05baf848(in_stack_00000088,*(undefined8 *)PTR_DAT_09f31bb8);
          in_stack_000000c0._4_4_ = 0;
          lVar15 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,in_stack_000000d8._4_4_);
          if (*(long *)(unaff_x20 + 0xd0) != 0) {
            FUN_087dab38(*(long *)(unaff_x20 + 0xd0),0);
            lVar16 = *unaff_x22;
            uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar18 != 0) {
              piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_09f30ab8) {
                  puVar9 = (undefined8 *)(lVar16 + (long)(*piVar20 + 0x22) * 0x10 + 0x138);
                  goto LAB_0773db88;
                }
                uVar18 = uVar18 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar18 != 0);
            }
            puVar9 = (undefined8 *)FUN_044822ac();
LAB_0773db88:
            uVar18 = (*(code *)*puVar9)();
            puVar4 = PTR_DAT_09f31320;
            if (((uVar18 & 1) == 0) && (0 < *(int *)(in_stack_00000088 + 0x18))) {
              iStack00000000000000b8 = 0;
              iVar8 = 0;
              lVar16 = lVar15 + 0x20;
              do {
                lVar12 = FUN_05badb74(in_stack_00000088,iStack00000000000000b8,*(undefined8 *)puVar4
                                     );
                if (lVar12 == 0) goto LAB_0773ecc8;
                if (*(char *)(lVar12 + 0xb9) == '\0') {
                  if (3 < in_stack_00000090._4_4_) {
                    uVar10 = FUN_07a3b850(&stack0x000000b8,0);
                    uVar10 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f31bf8,uVar10,0);
                    plVar13 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
                    in_stack_00000098 = CONCAT44(in_stack_00000098._4_4_,in_stack_00000090._4_4_);
                    lVar14 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f31348,&stack0x00000098);
                    if (plVar13 == (long *)0x0) goto LAB_0773ecc8;
                    if ((lVar14 != 0) &&
                       (lVar21 = thunk_FUN_04485110(lVar14,*(undefined8 *)(*plVar13 + 0x40)),
                       lVar21 == 0)) goto LAB_0773eccc;
                    if ((int)plVar13[3] == 0) goto LAB_0773ecc4;
                    plVar13[4] = lVar14;
                    thunk_FUN_044bb4b4(plVar13 + 4,lVar14);
                    FUN_0771ec00(uVar10,plVar13,0);
                  }
                  lVar14 = *unaff_x29;
                  uVar18 = (ulong)*(ushort *)(lVar14 + 0x12e);
                  if (uVar18 != 0) {
                    piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_09f313c8) {
                        puVar9 = (undefined8 *)(lVar14 + (long)(*piVar20 + 9) * 0x10 + 0x138);
                        goto LAB_0773ddc0;
                      }
                      uVar18 = uVar18 - 1;
                      piVar20 = piVar20 + 4;
                    } while (uVar18 != 0);
                  }
                  puVar9 = (undefined8 *)FUN_044822ac();
LAB_0773ddc0:
                  (*(code *)*puVar9)();
                  lVar14 = *unaff_x22;
                  uVar18 = (ulong)*(ushort *)(lVar14 + 0x12e);
                  if (uVar18 != 0) {
                    piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_09f30ab8) {
                        puVar9 = (undefined8 *)(lVar14 + (long)*piVar20 * 0x10 + 0x138);
                        goto LAB_0773de38;
                      }
                      uVar18 = uVar18 - 1;
                      piVar20 = piVar20 + 4;
                    } while (uVar18 != 0);
                  }
                  puVar9 = (undefined8 *)FUN_044822ac();
LAB_0773de38:
                  uVar18 = (*(code *)*puVar9)();
                  if ((uVar18 & 1) != 0) {
                    FUN_077322fc(in_stack_00000050,(long)&stack0x000000c0 + 4,lVar12,0);
                  }
                  lVar14 = *unaff_x22;
                  uVar18 = (ulong)*(ushort *)(lVar14 + 0x12e);
                  if (uVar18 != 0) {
                    piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_09f30ab8) {
                        puVar9 = (undefined8 *)(lVar14 + (long)(*piVar20 + 0x24) * 0x10 + 0x138);
                        goto LAB_0773deb4;
                      }
                      uVar18 = uVar18 - 1;
                      piVar20 = piVar20 + 4;
                    } while (uVar18 != 0);
                  }
                  puVar9 = (undefined8 *)FUN_044822ac();
LAB_0773deb4:
                  iVar7 = (*(code *)*puVar9)();
                  if (iVar7 == 1) {
                    lVar14 = *in_stack_00000080;
                    uVar18 = (ulong)*(ushort *)(lVar14 + 0x12e);
                    if (uVar18 != 0) {
                      piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_09f312c0) {
                          puVar9 = (undefined8 *)(lVar14 + (long)(*piVar20 + 8) * 0x10 + 0x138);
                          goto LAB_0773df2c;
                        }
                        uVar18 = uVar18 - 1;
                        piVar20 = piVar20 + 4;
                      } while (uVar18 != 0);
                    }
                    puVar9 = (undefined8 *)
                             FUN_044822ac(in_stack_00000080,*(long *)PTR_DAT_09f312c0,8);
LAB_0773df2c:
                    (*(code *)*puVar9)(in_stack_00000080,lVar12,iVar8,puVar9[1]);
                  }
                  *(int *)(lVar12 + 0x28) = iVar8;
                  if (lVar15 == 0) goto LAB_0773ecc8;
                  uVar2 = *(uint *)(lVar15 + 0x18);
                  if (0 < (long)((ulong)uVar2 << 0x20)) {
                    lVar14 = *(long *)(lVar12 + 0x70);
                    uVar18 = 0;
                    do {
                      if (uVar2 <= uVar18) goto LAB_0773ecc4;
                      if (lVar14 == 0) goto LAB_0773ecc8;
                      if (*(uint *)(lVar14 + 0x18) <= uVar18) goto LAB_0773ecc4;
                      *(undefined4 *)(lVar14 + 0x20 + uVar18 * 4) =
                           *(undefined4 *)(lVar16 + uVar18 * 4);
                      lVar21 = *(long *)(lVar12 + 0x78);
                      if (lVar21 == 0) goto LAB_0773ecc8;
                      if (*(uint *)(lVar21 + 0x18) <= uVar18) goto LAB_0773ecc4;
                      *(int *)(lVar16 + uVar18 * 4) =
                           *(int *)(lVar21 + uVar18 * 4 + 0x20) + *(int *)(lVar16 + uVar18 * 4);
                      uVar18 = uVar18 + 1;
                    } while ((long)(int)uVar2 != uVar18);
                  }
                  iVar8 = *(int *)(lVar12 + 0x30) + iVar8;
                }
                else if (3 < in_stack_00000090._4_4_) {
                  uVar10 = FUN_07a3b850(&stack0x000000b8,0);
                  uVar10 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f31c00,uVar10,0);
                  plVar13 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
                  in_stack_00000098 = CONCAT44(in_stack_00000098._4_4_,in_stack_00000090._4_4_);
                  lVar12 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f31348,&stack0x00000098);
                  if (plVar13 == (long *)0x0) goto LAB_0773ecc8;
                  if ((lVar12 != 0) &&
                     (lVar14 = thunk_FUN_04485110(lVar12,*(undefined8 *)(*plVar13 + 0x40)),
                     lVar14 == 0)) goto LAB_0773eccc;
                  if ((int)plVar13[3] == 0) goto LAB_0773ecc4;
                  plVar13[4] = lVar12;
                  thunk_FUN_044bb4b4(plVar13 + 4,lVar12);
                  FUN_0771ec00(uVar10,plVar13,0);
                }
                iStack00000000000000b8 = iStack00000000000000b8 + 1;
              } while (iStack00000000000000b8 < *(int *)(in_stack_00000088 + 0x18));
              lVar15 = *unaff_x22;
              uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar18 != 0) {
                piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_09f30ab8) {
                    puVar9 = (undefined8 *)(lVar15 + (long)(*piVar20 + 0x24) * 0x10 + 0x138);
                    goto LAB_0773e044;
                  }
                  uVar18 = uVar18 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar18 != 0);
              }
              puVar9 = (undefined8 *)FUN_044822ac();
LAB_0773e044:
              iVar7 = (*(code *)*puVar9)();
              uVar6 = in_stack_000000e8;
              if (iVar7 == 1) {
                lVar15 = *in_stack_00000080;
                uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar18 != 0) {
                  piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_09f312c0) {
                      puVar9 = (undefined8 *)(lVar15 + (long)(*piVar20 + 4) * 0x10 + 0x138);
                      goto LAB_0773e0b4;
                    }
                    uVar18 = uVar18 - 1;
                    piVar20 = piVar20 + 4;
                  } while (uVar18 != 0);
                }
                puVar9 = (undefined8 *)FUN_044822ac(in_stack_00000080,*(long *)PTR_DAT_09f312c0,4);
LAB_0773e0b4:
                (*(code *)*puVar9)(in_stack_00000080,uVar6,puVar9[1]);
              }
              puVar5 = PTR_DAT_09f31bb0;
              puVar3 = PTR_DAT_09f1e8b0;
              iVar7 = *(int *)(in_stack_00000088 + 0x18);
              while (iVar7 = iVar7 + -1, unaff_x20 = in_stack_00000048,
                    unaff_x25 = in_stack_00000080, -1 < iVar7) {
                lVar15 = FUN_05badb74(in_stack_00000088,iVar7,*(undefined8 *)puVar4);
                if (lVar15 == 0) goto LAB_0773ecc8;
                if (*(char *)(lVar15 + 0xb9) != '\0') {
                  lVar15 = FUN_05badb74(in_stack_00000088,iVar7,*(undefined8 *)puVar4);
                  if ((lVar15 == 0) ||
                     (FUN_0773caa0(&stack0x000000d0,*(undefined8 *)(lVar15 + 0x18)),
                     in_stack_00000068 == 0)) goto LAB_0773ecc8;
                  FUN_05baf638(in_stack_00000068,iVar7,*(undefined8 *)puVar3);
                  FUN_05baf638(in_stack_00000088,iVar7,*(undefined8 *)puVar5);
                }
              }
            }
            else {
              iVar8 = 0;
            }
            if (*(long *)(unaff_x20 + 0xd0) != 0) {
              FUN_087dae58(*(long *)(unaff_x20 + 0xd0),0);
              if (*(long *)(unaff_x20 + 0xd8) != 0) {
                FUN_087dab38(*(long *)(unaff_x20 + 0xd8),0);
                lVar15 = *unaff_x22;
                uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar18 != 0) {
                  piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_09f30ab8) {
                      puVar9 = (undefined8 *)(lVar15 + (long)(*piVar20 + 0x24) * 0x10 + 0x138);
                      goto LAB_0773e1c8;
                    }
                    uVar18 = uVar18 - 1;
                    piVar20 = piVar20 + 4;
                  } while (uVar18 != 0);
                }
                puVar9 = (undefined8 *)FUN_044822ac();
LAB_0773e1c8:
                iVar7 = (*(code *)*puVar9)();
                if (iVar7 == 1) {
                  lVar15 = *unaff_x25;
                  uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
                  if (uVar18 != 0) {
                    piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_09f312c0) {
                        puVar9 = (undefined8 *)(lVar15 + (long)(*piVar20 + 5) * 0x10 + 0x138);
                        goto LAB_0773e234;
                      }
                      uVar18 = uVar18 - 1;
                      piVar20 = piVar20 + 4;
                    } while (uVar18 != 0);
                  }
                  puVar9 = (undefined8 *)FUN_044822ac(unaff_x25,*(long *)PTR_DAT_09f312c0,5);
LAB_0773e234:
                  (*(code *)*puVar9)(unaff_x25,puVar9[1]);
                }
                lVar15 = in_stack_00000168;
                if (lVar17 != 0) {
                  if (0 < *(int *)(lVar17 + 0x18)) {
                    uVar18 = 0;
                    do {
                      lVar16 = FUN_05badb74(lVar17,uVar18 & 0xffffffff,
                                            *(undefined8 *)PTR_DAT_09f31320);
                      if (lVar15 == 0) goto LAB_0773ecc8;
                      if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_0773ecc4;
                      if (lVar16 == 0) goto LAB_0773ecc8;
                      lVar12 = *unaff_x29;
                      uVar10 = *(undefined8 *)(lVar15 + uVar18 * 8 + 0x20);
                      lVar14 = *(long *)(lVar16 + 0xc0);
                      uVar19 = (ulong)*(ushort *)(lVar12 + 0x12e);
                      if (uVar19 != 0) {
                        piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_09f313c8) {
                            puVar9 = (undefined8 *)(lVar12 + (long)*piVar20 * 0x10 + 0x138);
                            goto LAB_0773e2ec;
                          }
                          uVar19 = uVar19 - 1;
                          piVar20 = piVar20 + 4;
                        } while (uVar19 != 0);
                      }
                      puVar9 = (undefined8 *)FUN_044822ac();
LAB_0773e2ec:
                      (*(code *)*puVar9)();
                      lVar12 = *unaff_x29;
                      uVar19 = (ulong)*(ushort *)(lVar12 + 0x12e);
                      if (uVar19 != 0) {
                        piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_09f313c8) {
                            puVar9 = (undefined8 *)(lVar12 + (long)(*piVar20 + 10) * 0x10 + 0x138);
                            goto LAB_0773e354;
                          }
                          uVar19 = uVar19 - 1;
                          piVar20 = piVar20 + 4;
                        } while (uVar19 != 0);
                      }
                      puVar9 = (undefined8 *)FUN_044822ac();
LAB_0773e354:
                      (*(code *)*puVar9)();
                      if (lVar14 == 0) goto LAB_0773ecc8;
                      iVar7 = FUN_094d3ba4(lVar14,0);
                      if (*(long *)(lVar16 + 0x88) == 0) goto LAB_0773ecc8;
                      iVar1 = *(int *)(*(long *)(lVar16 + 0x88) + 0x18);
                      if (iVar1 < iVar7) {
                        if (3 < in_stack_00000090._4_4_) {
                          uVar11 = FUN_078b4f58(*(undefined8 *)PTR_DAT_09f31b40,
                                                *(undefined8 *)(lVar16 + 0x20),
                                                *(undefined8 *)PTR_DAT_09f31c30,0);
                          lVar21 = *(long *)PTR_DAT_09f22e40;
                          lVar12 = *(long *)(lVar21 + 0x38);
                          if (lVar12 == 0) {
                            FUN_04482014(lVar21);
                            lVar12 = *(long *)(lVar21 + 0x38);
                          }
                          lVar12 = *(long *)(lVar12 + 0x10);
                          if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                            lVar12 = FUN_04481fb8();
                          }
                          if (*(int *)(lVar12 + 0xe4) == 0) {
                            thunk_FUN_044a54b4();
                          }
                          lVar12 = *(long *)(*(long *)(lVar21 + 0x38) + 0x10);
                          if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                            lVar12 = FUN_04481fb8();
                          }
                          FUN_0771ec00(uVar11,**(undefined8 **)(lVar12 + 0xb8),0);
                        }
                      }
                      else if ((1 < in_stack_00000090._4_4_) && (iVar7 < iVar1)) {
                        uVar11 = FUN_078b4f58(*(undefined8 *)PTR_DAT_09f31b40,
                                              *(undefined8 *)(lVar16 + 0x20),
                                              *(undefined8 *)PTR_DAT_09f31c38,0);
                        if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
                          thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
                        }
                        FUN_094c33b0(uVar11,0);
                      }
                      lVar12 = *unaff_x22;
                      uVar19 = (ulong)*(ushort *)(lVar12 + 0x12e);
                      if (uVar19 != 0) {
                        piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_09f30ab8) {
                            puVar9 = (undefined8 *)(lVar12 + (long)*piVar20 * 0x10 + 0x138);
                            goto LAB_0773e514;
                          }
                          uVar19 = uVar19 - 1;
                          piVar20 = piVar20 + 4;
                        } while (uVar19 != 0);
                      }
                      puVar9 = (undefined8 *)FUN_044822ac();
LAB_0773e514:
                      uVar19 = (*(code *)*puVar9)();
                      if ((uVar19 & 1) != 0) {
                        FUN_07732404(in_stack_00000050,(long)&stack0x000000c0 + 4,lVar16,lVar14,
                                     in_stack_00000078,0);
                      }
                      lVar12 = *unaff_x22;
                      uVar19 = (ulong)*(ushort *)(lVar12 + 0x12e);
                      if (uVar19 != 0) {
                        piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_09f30ab8) {
                            puVar9 = (undefined8 *)(lVar12 + (long)(*piVar20 + 0x24) * 0x10 + 0x138)
                            ;
                            goto LAB_0773e59c;
                          }
                          uVar19 = uVar19 - 1;
                          piVar20 = piVar20 + 4;
                        } while (uVar19 != 0);
                      }
                      puVar9 = (undefined8 *)FUN_044822ac();
LAB_0773e59c:
                      iVar7 = (*(code *)*puVar9)();
                      if (iVar7 == 1) {
                        lVar12 = *in_stack_00000080;
                        uVar19 = (ulong)*(ushort *)(lVar12 + 0x12e);
                        if (uVar19 != 0) {
                          piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_09f312c0) {
                              puVar9 = (undefined8 *)(lVar12 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                              goto LAB_0773e608;
                            }
                            uVar19 = uVar19 - 1;
                            piVar20 = piVar20 + 4;
                          } while (uVar19 != 0);
                        }
                        puVar9 = (undefined8 *)
                                 FUN_044822ac(in_stack_00000080,*(long *)PTR_DAT_09f312c0,1);
LAB_0773e608:
                        (*(code *)*puVar9)(in_stack_00000080,lVar16,iVar8,puVar9[1]);
                      }
                      *(int *)(lVar16 + 0x28) = iVar8;
                      FUN_0773ca38(&stack0x000000d0,uVar10,lVar16);
                      if (in_stack_00000068 == 0) goto LAB_0773ecc8;
                      lVar12 = *(long *)(in_stack_00000068 + 0x10);
                      lVar14 = *(long *)PTR_DAT_09f1e870;
                      *(int *)(in_stack_00000068 + 0x1c) = *(int *)(in_stack_00000068 + 0x1c) + 1;
                      if (lVar12 == 0) goto LAB_0773ecc8;
                      uVar2 = *(uint *)(in_stack_00000068 + 0x18);
                      if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                        *(uint *)(in_stack_00000068 + 0x18) = uVar2 + 1;
                        puVar9 = (undefined8 *)(lVar12 + (long)(int)uVar2 * 8 + 0x20);
                        *puVar9 = uVar10;
                        thunk_FUN_044bb4b4(puVar9,uVar10);
                      }
                      else {
                        FUN_05bade44(in_stack_00000068,uVar10,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                      }
                      lVar12 = *(long *)(in_stack_00000088 + 0x10);
                      lVar14 = *(long *)PTR_DAT_09f31558;
                      *(int *)(in_stack_00000088 + 0x1c) = *(int *)(in_stack_00000088 + 0x1c) + 1;
                      if (lVar12 == 0) goto LAB_0773ecc8;
                      uVar2 = *(uint *)(in_stack_00000088 + 0x18);
                      if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                        *(uint *)(in_stack_00000088 + 0x18) = uVar2 + 1;
                        plVar13 = (long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20);
                        *plVar13 = lVar16;
                        thunk_FUN_044bb4b4(plVar13,lVar16);
                      }
                      else {
                        FUN_05bade44(in_stack_00000088,lVar16,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                      }
                      plVar13 = (long *)(lVar16 + 0xd0);
                      lVar12 = *plVar13;
                      if (lVar12 == 0) goto LAB_0773ecc8;
                      uVar19 = 0;
                      lVar14 = 0x20;
                      iVar8 = *(int *)(lVar16 + 0x30) + iVar8;
                      while ((long)uVar19 < (long)(int)*(uint *)(lVar12 + 0x18)) {
                        if (*(uint *)(lVar12 + 0x18) <= uVar19) goto LAB_0773ecc4;
                        *(undefined8 *)(lVar12 + lVar14) = 0;
                        thunk_FUN_044bb4b4((undefined8 *)(lVar12 + lVar14),0);
                        lVar12 = *plVar13;
                        uVar19 = uVar19 + 1;
                        lVar14 = lVar14 + 8;
                        if (lVar12 == 0) goto LAB_0773ecc8;
                      }
                      *plVar13 = 0;
                      thunk_FUN_044bb4b4(plVar13,0);
                      if (3 < in_stack_00000090._4_4_) {
                        lVar12 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,6);
                        if (lVar12 == 0) goto LAB_0773ecc8;
                        if (*(int *)(lVar12 + 0x18) == 0) goto LAB_0773ecc4;
                        *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)PTR_DAT_09f31bc8;
                        thunk_FUN_044bb4b4((undefined8 *)(lVar12 + 0x20));
                        if (*(uint *)(lVar12 + 0x18) < 2) goto LAB_0773ecc4;
                        *(undefined8 *)(lVar12 + 0x28) = *(undefined8 *)(lVar16 + 0x20);
                        thunk_FUN_044bb4b4((undefined8 *)(lVar12 + 0x28));
                        if (*(uint *)(lVar12 + 0x18) < 3) goto LAB_0773ecc4;
                        *(undefined8 *)(lVar12 + 0x30) = *(undefined8 *)PTR_DAT_09f31c20;
                        thunk_FUN_044bb4b4();
                        lVar16 = *unaff_x29;
                        uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
                        if (uVar19 != 0) {
                          piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_09f313c8) {
                              puVar9 = (undefined8 *)(lVar16 + (long)(*piVar20 + 6) * 0x10 + 0x138);
                              goto LAB_0773e850;
                            }
                            uVar19 = uVar19 - 1;
                            piVar20 = piVar20 + 4;
                          } while (uVar19 != 0);
                        }
                        puVar9 = (undefined8 *)FUN_044822ac();
LAB_0773e850:
                        uStack00000000000000bc = (*(code *)*puVar9)();
                        uVar10 = FUN_07a3b850((long)&stack0x000000b8 + 4,0);
                        if (*(uint *)(lVar12 + 0x18) < 4) goto LAB_0773ecc4;
                        *(undefined8 *)(lVar12 + 0x38) = uVar10;
                        thunk_FUN_044bb4b4((undefined8 *)(lVar12 + 0x38),uVar10);
                        if (*(uint *)(lVar12 + 0x18) < 5) goto LAB_0773ecc4;
                        *(undefined8 *)(lVar12 + 0x40) = *(undefined8 *)PTR_DAT_09f31c60;
                        thunk_FUN_044bb4b4();
                        lVar16 = *in_stack_00000080;
                        uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
                        if (uVar19 != 0) {
                          piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_09f312c0) {
                              puVar9 = (undefined8 *)(lVar16 + (long)(*piVar20 + 6) * 0x10 + 0x138);
                              goto LAB_0773e908;
                            }
                            uVar19 = uVar19 - 1;
                            piVar20 = piVar20 + 4;
                          } while (uVar19 != 0);
                        }
                        puVar9 = (undefined8 *)
                                 FUN_044822ac(in_stack_00000080,*(long *)PTR_DAT_09f312c0,6);
LAB_0773e908:
                        uStack00000000000000bc = (*(code *)*puVar9)(in_stack_00000080,puVar9[1]);
                        uVar10 = FUN_07a3b850((long)&stack0x000000b8 + 4,0);
                        if (*(uint *)(lVar12 + 0x18) < 6) goto LAB_0773ecc4;
                        *(undefined8 *)(lVar12 + 0x48) = uVar10;
                        thunk_FUN_044bb4b4();
                        uVar10 = FUN_078b57fc(lVar12,0);
                        plVar13 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
                        in_stack_00000098 =
                             CONCAT44(in_stack_00000098._4_4_,in_stack_00000090._4_4_);
                        lVar16 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f31348,&stack0x00000098
                                                   );
                        if (plVar13 == (long *)0x0) goto LAB_0773ecc8;
                        if ((lVar16 != 0) &&
                           (lVar12 = thunk_FUN_04485110(lVar16,*(undefined8 *)(*plVar13 + 0x40)),
                           lVar12 == 0)) goto LAB_0773eccc;
                        if ((int)plVar13[3] == 0) goto LAB_0773ecc4;
                        plVar13[4] = lVar16;
                        thunk_FUN_044bb4b4(plVar13 + 4,lVar16);
                        FUN_0771ec00(uVar10,plVar13,0);
                      }
                      uVar18 = uVar18 + 1;
                    } while ((long)uVar18 < (long)*(int *)(lVar17 + 0x18));
                  }
                  lVar17 = *unaff_x22;
                  uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                  if (uVar18 != 0) {
                    piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_09f30ab8) {
                        puVar9 = (undefined8 *)(lVar17 + (long)(*piVar20 + 0x16) * 0x10 + 0x138);
                        goto LAB_0773ea3c;
                      }
                      uVar18 = uVar18 - 1;
                      piVar20 = piVar20 + 4;
                    } while (uVar18 != 0);
                  }
                  puVar9 = (undefined8 *)FUN_044822ac();
LAB_0773ea3c:
                  iVar8 = (*(code *)*puVar9)();
                  if (iVar8 == 4) {
                    lVar17 = *unaff_x22;
                    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                    if (uVar18 != 0) {
                      piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_09f30ab8) {
                          puVar9 = (undefined8 *)(lVar17 + (long)(*piVar20 + 0x1a) * 0x10 + 0x138);
                          goto LAB_0773eaa8;
                        }
                        uVar18 = uVar18 - 1;
                        piVar20 = piVar20 + 4;
                      } while (uVar18 != 0);
                    }
                    puVar9 = (undefined8 *)FUN_044822ac();
LAB_0773eaa8:
                    uVar10 = (*(code *)*puVar9)();
                    lVar17 = *unaff_x29;
                    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                    if (uVar18 != 0) {
                      piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_09f313c8) {
                          puVar9 = (undefined8 *)(lVar17 + (long)(*piVar20 + 0xe) * 0x10 + 0x138);
                          goto LAB_0773eb18;
                        }
                        uVar18 = uVar18 - 1;
                        piVar20 = piVar20 + 4;
                      } while (uVar18 != 0);
                    }
                    puVar9 = (undefined8 *)FUN_044822ac();
LAB_0773eb18:
                    (*(code *)*puVar9)(uVar10);
                  }
                  lVar17 = in_stack_00000180;
                  if (3 < in_stack_00000090._4_4_) {
                    lVar15 = *unaff_x29;
                    uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
                    if (uVar18 != 0) {
                      piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_09f313c8) {
                          puVar9 = (undefined8 *)(lVar15 + (long)(*piVar20 + 6) * 0x10 + 0x138);
                          goto LAB_0773eb94;
                        }
                        uVar18 = uVar18 - 1;
                        piVar20 = piVar20 + 4;
                      } while (uVar18 != 0);
                    }
                    puVar9 = (undefined8 *)FUN_044822ac();
LAB_0773eb94:
                    uStack00000000000000bc = (*(code *)*puVar9)();
                    uVar10 = FUN_07a3b850((long)&stack0x000000b8 + 4,0);
                    if (lVar17 == 0) goto LAB_0773ecc8;
                    in_stack_000000b0 = FUN_087dad08(lVar17,0);
                    uVar11 = FUN_07a3c8f0(&stack0x000000b0,0);
                    uVar10 = FUN_078b56f4(*(undefined8 *)PTR_DAT_09f31c18,uVar10,
                                          *(undefined8 *)PTR_DAT_09f31c28,uVar11,0);
                    plVar13 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
                    in_stack_00000098 = CONCAT44(in_stack_00000098._4_4_,in_stack_00000090._4_4_);
                    lVar17 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f31348,&stack0x00000098);
                    if (plVar13 == (long *)0x0) goto LAB_0773ecc8;
                    if ((lVar17 != 0) &&
                       (lVar15 = thunk_FUN_04485110(lVar17,*(undefined8 *)(*plVar13 + 0x40)),
                       lVar15 == 0)) {
LAB_0773eccc:
                      uVar10 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                      FUN_04447d10(uVar10,0);
                    }
                    if ((int)plVar13[3] == 0) {
LAB_0773ecc4:
                    /* WARNING: Subroutine does not return */
                      FUN_04447e4c();
                    }
                    plVar13[4] = lVar17;
                    thunk_FUN_044bb4b4(plVar13 + 4,lVar17);
                    FUN_0771ec00(uVar10,plVar13,0);
                  }
                  if (*(long *)(in_stack_00000048 + 0xd8) != 0) {
                    FUN_087dae58(*(long *)(in_stack_00000048 + 0xd8),0);
                    return iStack0000000000000044 < iStack0000000000000040;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0773ecc8:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


