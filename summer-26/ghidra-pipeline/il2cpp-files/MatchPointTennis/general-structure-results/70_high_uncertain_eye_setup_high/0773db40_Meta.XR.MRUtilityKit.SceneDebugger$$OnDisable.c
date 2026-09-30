/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$OnDisable
ENTRY_POINT: 0773db40
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


bool Meta_XR_MRUtilityKit_SceneDebugger__OnDisable(long param_1)

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
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long in_x9;
  ulong uVar17;
  long *in_x10;
  int *piVar18;
  long unaff_x20;
  long lVar19;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x25;
  long lVar20;
  long *unaff_x29;
  int iStack0000000000000040;
  int iStack0000000000000044;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000068;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  long *in_stack_00000080;
  long in_stack_00000088;
  undefined8 in_stack_00000090;
  int in_stack_00000098;
  undefined8 in_stack_000000b0;
  int iStack00000000000000b8;
  undefined4 uStack00000000000000bc;
  undefined4 in_stack_000000e8;
  long in_stack_00000168;
  undefined8 in_stack_00000170;
  long in_stack_00000180;
  
  if (in_x9 != 0) {
    piVar18 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) == *in_x10) {
        puVar9 = (undefined8 *)(param_1 + (long)(*piVar18 + 0x22) * 0x10 + 0x138);
        goto LAB_0773db88;
      }
      in_x9 = in_x9 + -1;
      piVar18 = piVar18 + 4;
    } while (in_x9 != 0);
  }
  puVar9 = (undefined8 *)FUN_044822ac();
LAB_0773db88:
  uVar10 = (*(code *)*puVar9)();
  puVar4 = PTR_DAT_09f31320;
  if (((uVar10 & 1) == 0) && (0 < *(int *)(in_stack_00000088 + 0x18))) {
    iStack00000000000000b8 = 0;
    iVar8 = 0;
    lVar16 = in_stack_00000070 + 0x20;
    do {
      lVar11 = FUN_05badb74(in_stack_00000088,iStack00000000000000b8,*(undefined8 *)puVar4);
      if (lVar11 == 0) goto LAB_0773ecc8;
      if (*(char *)(lVar11 + 0xb9) == '\0') {
        if (3 < in_stack_00000090._4_4_) {
          uVar12 = FUN_07a3b850(&stack0x000000b8,0);
          uVar12 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f31bf8,uVar12,0);
          plVar13 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
          in_stack_00000098 = in_stack_00000090._4_4_;
          lVar14 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f31348,&stack0x00000098);
          if (plVar13 == (long *)0x0) goto LAB_0773ecc8;
          if ((lVar14 != 0) &&
             (lVar20 = thunk_FUN_04485110(lVar14,*(undefined8 *)(*plVar13 + 0x40)), lVar20 == 0))
          goto LAB_0773eccc;
          if ((int)plVar13[3] == 0) goto LAB_0773ecc4;
          plVar13[4] = lVar14;
          thunk_FUN_044bb4b4(plVar13 + 4,lVar14);
          FUN_0771ec00(uVar12,plVar13,0);
        }
        lVar14 = *unaff_x29;
        uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar10 != 0) {
          piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_09f313c8) {
              puVar9 = (undefined8 *)(lVar14 + (long)(*piVar18 + 9) * 0x10 + 0x138);
              goto LAB_0773ddc0;
            }
            uVar10 = uVar10 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar10 != 0);
        }
        puVar9 = (undefined8 *)FUN_044822ac();
LAB_0773ddc0:
        (*(code *)*puVar9)();
        lVar14 = *unaff_x22;
        uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar10 != 0) {
          piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_09f30ab8) {
              puVar9 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_0773de38;
            }
            uVar10 = uVar10 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar10 != 0);
        }
        puVar9 = (undefined8 *)FUN_044822ac();
LAB_0773de38:
        uVar10 = (*(code *)*puVar9)();
        if ((uVar10 & 1) != 0) {
          FUN_077322fc(in_stack_00000050,&stack0x000000c4,lVar11,0);
        }
        lVar14 = *unaff_x22;
        uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar10 != 0) {
          piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_09f30ab8) {
              puVar9 = (undefined8 *)(lVar14 + (long)(*piVar18 + 0x24) * 0x10 + 0x138);
              goto LAB_0773deb4;
            }
            uVar10 = uVar10 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar10 != 0);
        }
        puVar9 = (undefined8 *)FUN_044822ac();
LAB_0773deb4:
        iVar7 = (*(code *)*puVar9)();
        if (iVar7 == 1) {
          lVar14 = *in_stack_00000080;
          uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar10 != 0) {
            piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_09f312c0) {
                puVar9 = (undefined8 *)(lVar14 + (long)(*piVar18 + 8) * 0x10 + 0x138);
                goto LAB_0773df2c;
              }
              uVar10 = uVar10 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar10 != 0);
          }
          puVar9 = (undefined8 *)FUN_044822ac(in_stack_00000080,*(long *)PTR_DAT_09f312c0,8);
LAB_0773df2c:
          (*(code *)*puVar9)(in_stack_00000080,lVar11,iVar8,puVar9[1]);
        }
        *(int *)(lVar11 + 0x28) = iVar8;
        if (in_stack_00000070 == 0) goto LAB_0773ecc8;
        uVar2 = *(uint *)(in_stack_00000070 + 0x18);
        if (0 < (long)((ulong)uVar2 << 0x20)) {
          lVar14 = *(long *)(lVar11 + 0x70);
          uVar10 = 0;
          do {
            if (uVar2 <= uVar10) goto LAB_0773ecc4;
            if (lVar14 == 0) goto LAB_0773ecc8;
            if (*(uint *)(lVar14 + 0x18) <= uVar10) goto LAB_0773ecc4;
            *(undefined4 *)(lVar14 + 0x20 + uVar10 * 4) = *(undefined4 *)(lVar16 + uVar10 * 4);
            lVar20 = *(long *)(lVar11 + 0x78);
            if (lVar20 == 0) goto LAB_0773ecc8;
            if (*(uint *)(lVar20 + 0x18) <= uVar10) goto LAB_0773ecc4;
            *(int *)(lVar16 + uVar10 * 4) =
                 *(int *)(lVar20 + uVar10 * 4 + 0x20) + *(int *)(lVar16 + uVar10 * 4);
            uVar10 = uVar10 + 1;
          } while ((long)(int)uVar2 != uVar10);
        }
        iVar8 = *(int *)(lVar11 + 0x30) + iVar8;
      }
      else if (3 < in_stack_00000090._4_4_) {
        uVar12 = FUN_07a3b850(&stack0x000000b8,0);
        uVar12 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f31c00,uVar12,0);
        plVar13 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
        in_stack_00000098 = in_stack_00000090._4_4_;
        lVar11 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f31348,&stack0x00000098);
        if (plVar13 == (long *)0x0) goto LAB_0773ecc8;
        if ((lVar11 != 0) &&
           (lVar14 = thunk_FUN_04485110(lVar11,*(undefined8 *)(*plVar13 + 0x40)), lVar14 == 0))
        goto LAB_0773eccc;
        if ((int)plVar13[3] == 0) goto LAB_0773ecc4;
        plVar13[4] = lVar11;
        thunk_FUN_044bb4b4(plVar13 + 4,lVar11);
        FUN_0771ec00(uVar12,plVar13,0);
      }
      iStack00000000000000b8 = iStack00000000000000b8 + 1;
    } while (iStack00000000000000b8 < *(int *)(in_stack_00000088 + 0x18));
    lVar16 = *unaff_x22;
    uVar10 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar10 != 0) {
      piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_09f30ab8) {
          puVar9 = (undefined8 *)(lVar16 + (long)(*piVar18 + 0x24) * 0x10 + 0x138);
          goto LAB_0773e044;
        }
        uVar10 = uVar10 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar10 != 0);
    }
    puVar9 = (undefined8 *)FUN_044822ac();
LAB_0773e044:
    iVar7 = (*(code *)*puVar9)();
    uVar6 = in_stack_000000e8;
    if (iVar7 == 1) {
      lVar16 = *in_stack_00000080;
      uVar10 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar10 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_09f312c0) {
            puVar9 = (undefined8 *)(lVar16 + (long)(*piVar18 + 4) * 0x10 + 0x138);
            goto LAB_0773e0b4;
          }
          uVar10 = uVar10 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar10 != 0);
      }
      puVar9 = (undefined8 *)FUN_044822ac(in_stack_00000080,*(long *)PTR_DAT_09f312c0,4);
LAB_0773e0b4:
      (*(code *)*puVar9)(in_stack_00000080,uVar6,puVar9[1]);
    }
    puVar5 = PTR_DAT_09f31bb0;
    puVar3 = PTR_DAT_09f1e8b0;
    iVar7 = *(int *)(in_stack_00000088 + 0x18);
    while (iVar7 = iVar7 + -1, unaff_x20 = in_stack_00000048, unaff_x25 = in_stack_00000080,
          -1 < iVar7) {
      lVar16 = FUN_05badb74(in_stack_00000088,iVar7,*(undefined8 *)puVar4);
      if (lVar16 == 0) goto LAB_0773ecc8;
      if (*(char *)(lVar16 + 0xb9) != '\0') {
        lVar16 = FUN_05badb74(in_stack_00000088,iVar7,*(undefined8 *)puVar4);
        if ((lVar16 == 0) ||
           (FUN_0773caa0(&stack0x000000d0,*(undefined8 *)(lVar16 + 0x18)), in_stack_00000068 == 0))
        goto LAB_0773ecc8;
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
      lVar16 = *unaff_x22;
      uVar10 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar10 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_09f30ab8) {
            puVar9 = (undefined8 *)(lVar16 + (long)(*piVar18 + 0x24) * 0x10 + 0x138);
            goto LAB_0773e1c8;
          }
          uVar10 = uVar10 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar10 != 0);
      }
      puVar9 = (undefined8 *)FUN_044822ac();
LAB_0773e1c8:
      iVar7 = (*(code *)*puVar9)();
      if (iVar7 == 1) {
        lVar16 = *unaff_x25;
        uVar10 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar10 != 0) {
          piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_09f312c0) {
              puVar9 = (undefined8 *)(lVar16 + (long)(*piVar18 + 5) * 0x10 + 0x138);
              goto LAB_0773e234;
            }
            uVar10 = uVar10 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar10 != 0);
        }
        puVar9 = (undefined8 *)FUN_044822ac(unaff_x25,*(long *)PTR_DAT_09f312c0,5);
LAB_0773e234:
        (*(code *)*puVar9)(unaff_x25,puVar9[1]);
      }
      lVar16 = in_stack_00000168;
      if (unaff_x21 != 0) {
        if (0 < *(int *)(unaff_x21 + 0x18)) {
          uVar10 = 0;
          do {
            lVar11 = FUN_05badb74();
            if (lVar16 == 0) goto LAB_0773ecc8;
            if (*(uint *)(lVar16 + 0x18) <= uVar10) goto LAB_0773ecc4;
            if (lVar11 == 0) goto LAB_0773ecc8;
            lVar14 = *unaff_x29;
            uVar12 = *(undefined8 *)(lVar16 + uVar10 * 8 + 0x20);
            lVar20 = *(long *)(lVar11 + 0xc0);
            uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar17 != 0) {
              piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_09f313c8) {
                  puVar9 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
                  goto LAB_0773e2ec;
                }
                uVar17 = uVar17 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar17 != 0);
            }
            puVar9 = (undefined8 *)FUN_044822ac();
LAB_0773e2ec:
            (*(code *)*puVar9)();
            lVar14 = *unaff_x29;
            uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar17 != 0) {
              piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_09f313c8) {
                  puVar9 = (undefined8 *)(lVar14 + (long)(*piVar18 + 10) * 0x10 + 0x138);
                  goto LAB_0773e354;
                }
                uVar17 = uVar17 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar17 != 0);
            }
            puVar9 = (undefined8 *)FUN_044822ac();
LAB_0773e354:
            (*(code *)*puVar9)();
            if (lVar20 == 0) goto LAB_0773ecc8;
            iVar7 = FUN_094d3ba4(lVar20,0);
            if (*(long *)(lVar11 + 0x88) == 0) goto LAB_0773ecc8;
            iVar1 = *(int *)(*(long *)(lVar11 + 0x88) + 0x18);
            if (iVar1 < iVar7) {
              if (3 < in_stack_00000090._4_4_) {
                uVar15 = FUN_078b4f58(*(undefined8 *)PTR_DAT_09f31b40,*(undefined8 *)(lVar11 + 0x20)
                                      ,*(undefined8 *)PTR_DAT_09f31c30,0);
                lVar19 = *(long *)PTR_DAT_09f22e40;
                lVar14 = *(long *)(lVar19 + 0x38);
                if (lVar14 == 0) {
                  FUN_04482014(lVar19);
                  lVar14 = *(long *)(lVar19 + 0x38);
                }
                lVar14 = *(long *)(lVar14 + 0x10);
                if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
                  lVar14 = FUN_04481fb8();
                }
                if (*(int *)(lVar14 + 0xe4) == 0) {
                  thunk_FUN_044a54b4();
                }
                lVar14 = *(long *)(*(long *)(lVar19 + 0x38) + 0x10);
                if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
                  lVar14 = FUN_04481fb8();
                }
                FUN_0771ec00(uVar15,**(undefined8 **)(lVar14 + 0xb8),0);
              }
            }
            else if ((1 < in_stack_00000090._4_4_) && (iVar7 < iVar1)) {
              uVar15 = FUN_078b4f58(*(undefined8 *)PTR_DAT_09f31b40,*(undefined8 *)(lVar11 + 0x20),
                                    *(undefined8 *)PTR_DAT_09f31c38,0);
              if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
                thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
              }
              FUN_094c33b0(uVar15,0);
            }
            lVar14 = *unaff_x22;
            uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar17 != 0) {
              piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_09f30ab8) {
                  puVar9 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
                  goto LAB_0773e514;
                }
                uVar17 = uVar17 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar17 != 0);
            }
            puVar9 = (undefined8 *)FUN_044822ac();
LAB_0773e514:
            uVar17 = (*(code *)*puVar9)();
            if ((uVar17 & 1) != 0) {
              FUN_07732404(in_stack_00000050,&stack0x000000c4,lVar11,lVar20,in_stack_00000078,0);
            }
            lVar14 = *unaff_x22;
            uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar17 != 0) {
              piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_09f30ab8) {
                  puVar9 = (undefined8 *)(lVar14 + (long)(*piVar18 + 0x24) * 0x10 + 0x138);
                  goto LAB_0773e59c;
                }
                uVar17 = uVar17 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar17 != 0);
            }
            puVar9 = (undefined8 *)FUN_044822ac();
LAB_0773e59c:
            iVar7 = (*(code *)*puVar9)();
            if (iVar7 == 1) {
              lVar14 = *in_stack_00000080;
              uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar17 != 0) {
                piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_09f312c0) {
                    puVar9 = (undefined8 *)(lVar14 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                    goto LAB_0773e608;
                  }
                  uVar17 = uVar17 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar17 != 0);
              }
              puVar9 = (undefined8 *)FUN_044822ac(in_stack_00000080,*(long *)PTR_DAT_09f312c0,1);
LAB_0773e608:
              (*(code *)*puVar9)(in_stack_00000080,lVar11,iVar8,puVar9[1]);
            }
            *(int *)(lVar11 + 0x28) = iVar8;
            FUN_0773ca38(&stack0x000000d0,uVar12,lVar11);
            if (in_stack_00000068 == 0) goto LAB_0773ecc8;
            lVar14 = *(long *)(in_stack_00000068 + 0x10);
            lVar20 = *(long *)PTR_DAT_09f1e870;
            *(int *)(in_stack_00000068 + 0x1c) = *(int *)(in_stack_00000068 + 0x1c) + 1;
            if (lVar14 == 0) goto LAB_0773ecc8;
            uVar2 = *(uint *)(in_stack_00000068 + 0x18);
            if (uVar2 < *(uint *)(lVar14 + 0x18)) {
              *(uint *)(in_stack_00000068 + 0x18) = uVar2 + 1;
              puVar9 = (undefined8 *)(lVar14 + (long)(int)uVar2 * 8 + 0x20);
              *puVar9 = uVar12;
              thunk_FUN_044bb4b4(puVar9,uVar12);
            }
            else {
              FUN_05bade44(in_stack_00000068,uVar12,
                           *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
            }
            lVar14 = *(long *)(in_stack_00000088 + 0x10);
            lVar20 = *(long *)PTR_DAT_09f31558;
            *(int *)(in_stack_00000088 + 0x1c) = *(int *)(in_stack_00000088 + 0x1c) + 1;
            if (lVar14 == 0) goto LAB_0773ecc8;
            uVar2 = *(uint *)(in_stack_00000088 + 0x18);
            if (uVar2 < *(uint *)(lVar14 + 0x18)) {
              *(uint *)(in_stack_00000088 + 0x18) = uVar2 + 1;
              plVar13 = (long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20);
              *plVar13 = lVar11;
              thunk_FUN_044bb4b4(plVar13,lVar11);
            }
            else {
              FUN_05bade44(in_stack_00000088,lVar11,
                           *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
            }
            plVar13 = (long *)(lVar11 + 0xd0);
            lVar14 = *plVar13;
            if (lVar14 == 0) goto LAB_0773ecc8;
            uVar17 = 0;
            lVar20 = 0x20;
            iVar8 = *(int *)(lVar11 + 0x30) + iVar8;
            while ((long)uVar17 < (long)(int)*(uint *)(lVar14 + 0x18)) {
              if (*(uint *)(lVar14 + 0x18) <= uVar17) goto LAB_0773ecc4;
              *(undefined8 *)(lVar14 + lVar20) = 0;
              thunk_FUN_044bb4b4((undefined8 *)(lVar14 + lVar20),0);
              lVar14 = *plVar13;
              uVar17 = uVar17 + 1;
              lVar20 = lVar20 + 8;
              if (lVar14 == 0) goto LAB_0773ecc8;
            }
            *plVar13 = 0;
            thunk_FUN_044bb4b4(plVar13,0);
            if (3 < in_stack_00000090._4_4_) {
              lVar14 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,6);
              if (lVar14 == 0) goto LAB_0773ecc8;
              if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0773ecc4;
              *(undefined8 *)(lVar14 + 0x20) = *(undefined8 *)PTR_DAT_09f31bc8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar14 + 0x20));
              if (*(uint *)(lVar14 + 0x18) < 2) goto LAB_0773ecc4;
              *(undefined8 *)(lVar14 + 0x28) = *(undefined8 *)(lVar11 + 0x20);
              thunk_FUN_044bb4b4((undefined8 *)(lVar14 + 0x28));
              if (*(uint *)(lVar14 + 0x18) < 3) goto LAB_0773ecc4;
              *(undefined8 *)(lVar14 + 0x30) = *(undefined8 *)PTR_DAT_09f31c20;
              thunk_FUN_044bb4b4();
              lVar11 = *unaff_x29;
              uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar17 != 0) {
                piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_09f313c8) {
                    puVar9 = (undefined8 *)(lVar11 + (long)(*piVar18 + 6) * 0x10 + 0x138);
                    goto LAB_0773e850;
                  }
                  uVar17 = uVar17 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar17 != 0);
              }
              puVar9 = (undefined8 *)FUN_044822ac();
LAB_0773e850:
              uStack00000000000000bc = (*(code *)*puVar9)();
              uVar12 = FUN_07a3b850((long)&stack0x000000b8 + 4,0);
              if (*(uint *)(lVar14 + 0x18) < 4) goto LAB_0773ecc4;
              *(undefined8 *)(lVar14 + 0x38) = uVar12;
              thunk_FUN_044bb4b4((undefined8 *)(lVar14 + 0x38),uVar12);
              if (*(uint *)(lVar14 + 0x18) < 5) goto LAB_0773ecc4;
              *(undefined8 *)(lVar14 + 0x40) = *(undefined8 *)PTR_DAT_09f31c60;
              thunk_FUN_044bb4b4();
              lVar11 = *in_stack_00000080;
              uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar17 != 0) {
                piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_09f312c0) {
                    puVar9 = (undefined8 *)(lVar11 + (long)(*piVar18 + 6) * 0x10 + 0x138);
                    goto LAB_0773e908;
                  }
                  uVar17 = uVar17 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar17 != 0);
              }
              puVar9 = (undefined8 *)FUN_044822ac(in_stack_00000080,*(long *)PTR_DAT_09f312c0,6);
LAB_0773e908:
              uStack00000000000000bc = (*(code *)*puVar9)(in_stack_00000080,puVar9[1]);
              uVar12 = FUN_07a3b850((long)&stack0x000000b8 + 4,0);
              if (*(uint *)(lVar14 + 0x18) < 6) goto LAB_0773ecc4;
              *(undefined8 *)(lVar14 + 0x48) = uVar12;
              thunk_FUN_044bb4b4();
              uVar12 = FUN_078b57fc(lVar14,0);
              plVar13 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
              in_stack_00000098 = in_stack_00000090._4_4_;
              lVar11 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f31348,&stack0x00000098);
              if (plVar13 == (long *)0x0) goto LAB_0773ecc8;
              if ((lVar11 != 0) &&
                 (lVar14 = thunk_FUN_04485110(lVar11,*(undefined8 *)(*plVar13 + 0x40)), lVar14 == 0)
                 ) goto LAB_0773eccc;
              if ((int)plVar13[3] == 0) goto LAB_0773ecc4;
              plVar13[4] = lVar11;
              thunk_FUN_044bb4b4(plVar13 + 4,lVar11);
              FUN_0771ec00(uVar12,plVar13,0);
            }
            uVar10 = uVar10 + 1;
          } while ((long)uVar10 < (long)*(int *)(unaff_x21 + 0x18));
        }
        lVar16 = *unaff_x22;
        uVar10 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar10 != 0) {
          piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_09f30ab8) {
              puVar9 = (undefined8 *)(lVar16 + (long)(*piVar18 + 0x16) * 0x10 + 0x138);
              goto LAB_0773ea3c;
            }
            uVar10 = uVar10 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar10 != 0);
        }
        puVar9 = (undefined8 *)FUN_044822ac();
LAB_0773ea3c:
        iVar8 = (*(code *)*puVar9)();
        if (iVar8 == 4) {
          lVar16 = *unaff_x22;
          uVar10 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar10 != 0) {
            piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_09f30ab8) {
                puVar9 = (undefined8 *)(lVar16 + (long)(*piVar18 + 0x1a) * 0x10 + 0x138);
                goto LAB_0773eaa8;
              }
              uVar10 = uVar10 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar10 != 0);
          }
          puVar9 = (undefined8 *)FUN_044822ac();
LAB_0773eaa8:
          uVar12 = (*(code *)*puVar9)();
          lVar16 = *unaff_x29;
          uVar10 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar10 != 0) {
            piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_09f313c8) {
                puVar9 = (undefined8 *)(lVar16 + (long)(*piVar18 + 0xe) * 0x10 + 0x138);
                goto LAB_0773eb18;
              }
              uVar10 = uVar10 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar10 != 0);
          }
          puVar9 = (undefined8 *)FUN_044822ac();
LAB_0773eb18:
          (*(code *)*puVar9)(uVar12);
        }
        lVar16 = in_stack_00000180;
        if (3 < in_stack_00000090._4_4_) {
          lVar11 = *unaff_x29;
          uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar10 != 0) {
            piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_09f313c8) {
                puVar9 = (undefined8 *)(lVar11 + (long)(*piVar18 + 6) * 0x10 + 0x138);
                goto LAB_0773eb94;
              }
              uVar10 = uVar10 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar10 != 0);
          }
          puVar9 = (undefined8 *)FUN_044822ac();
LAB_0773eb94:
          uStack00000000000000bc = (*(code *)*puVar9)();
          uVar12 = FUN_07a3b850((long)&stack0x000000b8 + 4,0);
          if (lVar16 == 0) goto LAB_0773ecc8;
          in_stack_000000b0 = FUN_087dad08(lVar16,0);
          uVar15 = FUN_07a3c8f0(&stack0x000000b0,0);
          uVar12 = FUN_078b56f4(*(undefined8 *)PTR_DAT_09f31c18,uVar12,
                                *(undefined8 *)PTR_DAT_09f31c28,uVar15,0);
          plVar13 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
          in_stack_00000098 = in_stack_00000090._4_4_;
          lVar16 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f31348,&stack0x00000098);
          if (plVar13 == (long *)0x0) goto LAB_0773ecc8;
          if ((lVar16 != 0) &&
             (lVar11 = thunk_FUN_04485110(lVar16,*(undefined8 *)(*plVar13 + 0x40)), lVar11 == 0)) {
LAB_0773eccc:
            uVar12 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
            FUN_04447d10(uVar12,0);
          }
          if ((int)plVar13[3] == 0) {
LAB_0773ecc4:
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          plVar13[4] = lVar16;
          thunk_FUN_044bb4b4(plVar13 + 4,lVar16);
          FUN_0771ec00(uVar12,plVar13,0);
        }
        if (*(long *)(in_stack_00000048 + 0xd8) != 0) {
          FUN_087dae58(*(long *)(in_stack_00000048 + 0xd8),0);
          return iStack0000000000000044 < iStack0000000000000040;
        }
      }
    }
  }
LAB_0773ecc8:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


