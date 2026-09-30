/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$GetControllerRay
ENTRY_POINT: 0773dd38
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 100
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_MRUtilityKit_SceneDebugger__GetControllerRay(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  long unaff_x20;
  long lVar16;
  long unaff_x21;
  long *unaff_x22;
  undefined8 unaff_x23;
  long unaff_x24;
  undefined8 uVar17;
  long *unaff_x25;
  int unaff_w26;
  undefined8 *unaff_x27;
  long unaff_x28;
  long lVar18;
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
  
  while (param_1 != 0) {
    do {
      if ((int)unaff_x25[3] == 0) goto LAB_0773ecc4;
      unaff_x25[4] = unaff_x20;
      thunk_FUN_044bb4b4(unaff_x25 + 4,unaff_x20);
      FUN_0771ec00(unaff_x23,unaff_x25,0);
      do {
        lVar10 = *unaff_x29;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f313c8) {
              puVar7 = (undefined8 *)(lVar10 + (long)(*piVar14 + 9) * 0x10 + 0x138);
              goto LAB_0773ddc0;
            }
            uVar12 = uVar12 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)FUN_044822ac();
LAB_0773ddc0:
        (*(code *)*puVar7)();
        lVar10 = *unaff_x22;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f30ab8) {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0773de38;
            }
            uVar12 = uVar12 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)FUN_044822ac();
LAB_0773de38:
        uVar12 = (*(code *)*puVar7)();
        if ((uVar12 & 1) != 0) {
          FUN_077322fc(in_stack_00000050,&stack0x000000c4,unaff_x24,0);
        }
        lVar10 = *unaff_x22;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f30ab8) {
              puVar7 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0x24) * 0x10 + 0x138);
              goto LAB_0773deb4;
            }
            uVar12 = uVar12 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)FUN_044822ac();
LAB_0773deb4:
        iVar6 = (*(code *)*puVar7)();
        if (iVar6 == 1) {
          lVar10 = *in_stack_00000080;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 != 0) {
            piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f312c0) {
                puVar7 = (undefined8 *)(lVar10 + (long)(*piVar14 + 8) * 0x10 + 0x138);
                goto LAB_0773df2c;
              }
              uVar12 = uVar12 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)FUN_044822ac(in_stack_00000080,*(long *)PTR_DAT_09f312c0,8);
LAB_0773df2c:
          (*(code *)*puVar7)(in_stack_00000080,unaff_x24,unaff_w26,puVar7[1]);
        }
        *(int *)(unaff_x24 + 0x28) = unaff_w26;
        if (in_stack_00000070 == 0) goto LAB_0773ecc8;
        uVar1 = *(uint *)(in_stack_00000070 + 0x18);
        if (0 < (long)((ulong)uVar1 << 0x20)) {
          lVar10 = *(long *)(unaff_x24 + 0x70);
          uVar12 = 0;
          do {
            if (uVar1 <= uVar12) goto LAB_0773ecc4;
            if (lVar10 == 0) goto LAB_0773ecc8;
            if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_0773ecc4;
            *(undefined4 *)(lVar10 + 0x20 + uVar12 * 4) = *(undefined4 *)(unaff_x28 + uVar12 * 4);
            lVar15 = *(long *)(unaff_x24 + 0x78);
            if (lVar15 == 0) goto LAB_0773ecc8;
            if (*(uint *)(lVar15 + 0x18) <= uVar12) goto LAB_0773ecc4;
            *(int *)(unaff_x28 + uVar12 * 4) =
                 *(int *)(lVar15 + uVar12 * 4 + 0x20) + *(int *)(unaff_x28 + uVar12 * 4);
            uVar12 = uVar12 + 1;
          } while ((long)(int)uVar1 != uVar12);
        }
        unaff_w26 = *(int *)(unaff_x24 + 0x30) + unaff_w26;
        while( true ) {
          iStack00000000000000b8 = iStack00000000000000b8 + 1;
          if (*(int *)(in_stack_00000088 + 0x18) <= iStack00000000000000b8) {
            lVar10 = *unaff_x22;
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar12 == 0) goto LAB_0773e01c;
            piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            goto LAB_0773e004;
          }
          unaff_x24 = FUN_05badb74(in_stack_00000088,iStack00000000000000b8,*unaff_x27);
          if (unaff_x24 == 0) goto LAB_0773ecc8;
          if (*(char *)(unaff_x24 + 0xb9) == '\0') break;
          if (3 < in_stack_00000090._4_4_) {
            uVar17 = FUN_07a3b850(&stack0x000000b8,0);
            uVar17 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f31c00,uVar17,0);
            plVar9 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
            in_stack_00000098 = in_stack_00000090._4_4_;
            lVar10 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f31348,&stack0x00000098);
            if (plVar9 == (long *)0x0) goto LAB_0773ecc8;
            if ((lVar10 != 0) &&
               (lVar15 = thunk_FUN_04485110(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar15 == 0))
            goto LAB_0773eccc;
            if ((int)plVar9[3] == 0) goto LAB_0773ecc4;
            plVar9[4] = lVar10;
            thunk_FUN_044bb4b4(plVar9 + 4,lVar10);
            FUN_0771ec00(uVar17,plVar9,0);
          }
        }
      } while (in_stack_00000090._4_4_ < 4);
      uVar17 = FUN_07a3b850(&stack0x000000b8,0);
      unaff_x23 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f31bf8,uVar17,0);
      unaff_x25 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
      in_stack_00000098 = in_stack_00000090._4_4_;
      unaff_x20 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f31348,&stack0x00000098);
      if (unaff_x25 == (long *)0x0) goto LAB_0773ecc8;
    } while (unaff_x20 == 0);
    param_1 = thunk_FUN_04485110(unaff_x20,*(undefined8 *)(*unaff_x25 + 0x40));
  }
LAB_0773eccc:
  uVar17 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
  FUN_04447d10(uVar17,0);
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar14 = piVar14 + 4;
    if (uVar12 == 0) break;
LAB_0773e004:
    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f30ab8) {
      puVar7 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0x24) * 0x10 + 0x138);
      goto LAB_0773e044;
    }
  }
LAB_0773e01c:
  puVar7 = (undefined8 *)FUN_044822ac();
LAB_0773e044:
  iVar6 = (*(code *)*puVar7)();
  uVar5 = in_stack_000000e8;
  if (iVar6 == 1) {
    lVar10 = *in_stack_00000080;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f312c0) {
          puVar7 = (undefined8 *)(lVar10 + (long)(*piVar14 + 4) * 0x10 + 0x138);
          goto LAB_0773e0b4;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_044822ac(in_stack_00000080,*(long *)PTR_DAT_09f312c0,4);
LAB_0773e0b4:
    (*(code *)*puVar7)(in_stack_00000080,uVar5,puVar7[1]);
  }
  puVar4 = PTR_DAT_09f31bb0;
  puVar3 = PTR_DAT_09f1e8b0;
  iVar6 = *(int *)(in_stack_00000088 + 0x18);
  while (iVar6 = iVar6 + -1, -1 < iVar6) {
    lVar10 = FUN_05badb74(in_stack_00000088,iVar6,*unaff_x27);
    if (lVar10 == 0) goto LAB_0773ecc8;
    if (*(char *)(lVar10 + 0xb9) != '\0') {
      lVar10 = FUN_05badb74(in_stack_00000088,iVar6,*unaff_x27);
      if ((lVar10 == 0) ||
         (FUN_0773caa0(&stack0x000000d0,*(undefined8 *)(lVar10 + 0x18)), in_stack_00000068 == 0))
      goto LAB_0773ecc8;
      FUN_05baf638(in_stack_00000068,iVar6,*(undefined8 *)puVar3);
      FUN_05baf638(in_stack_00000088,iVar6,*(undefined8 *)puVar4);
    }
  }
  if (*(long *)(in_stack_00000048 + 0xd0) != 0) {
    FUN_087dae58(*(long *)(in_stack_00000048 + 0xd0),0);
    if (*(long *)(in_stack_00000048 + 0xd8) != 0) {
      FUN_087dab38(*(long *)(in_stack_00000048 + 0xd8),0);
      lVar10 = *unaff_x22;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f30ab8) {
            puVar7 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0x24) * 0x10 + 0x138);
            goto LAB_0773e1c8;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_044822ac();
LAB_0773e1c8:
      iVar6 = (*(code *)*puVar7)();
      if (iVar6 == 1) {
        lVar10 = *in_stack_00000080;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f312c0) {
              puVar7 = (undefined8 *)(lVar10 + (long)(*piVar14 + 5) * 0x10 + 0x138);
              goto LAB_0773e234;
            }
            uVar12 = uVar12 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)FUN_044822ac(in_stack_00000080,*(long *)PTR_DAT_09f312c0,5);
LAB_0773e234:
        (*(code *)*puVar7)(in_stack_00000080,puVar7[1]);
      }
      lVar10 = in_stack_00000168;
      if (unaff_x21 != 0) {
        if (0 < *(int *)(unaff_x21 + 0x18)) {
          uVar12 = 0;
          do {
            lVar15 = FUN_05badb74();
            if (lVar10 == 0) goto LAB_0773ecc8;
            if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_0773ecc4;
            if (lVar15 == 0) goto LAB_0773ecc8;
            lVar11 = *unaff_x29;
            uVar17 = *(undefined8 *)(lVar10 + uVar12 * 8 + 0x20);
            lVar18 = *(long *)(lVar15 + 0xc0);
            uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f313c8) {
                  puVar7 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_0773e2ec;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar7 = (undefined8 *)FUN_044822ac();
LAB_0773e2ec:
            (*(code *)*puVar7)();
            lVar11 = *unaff_x29;
            uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f313c8) {
                  puVar7 = (undefined8 *)(lVar11 + (long)(*piVar14 + 10) * 0x10 + 0x138);
                  goto LAB_0773e354;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar7 = (undefined8 *)FUN_044822ac();
LAB_0773e354:
            (*(code *)*puVar7)();
            if (lVar18 == 0) goto LAB_0773ecc8;
            iVar6 = FUN_094d3ba4(lVar18,0);
            if (*(long *)(lVar15 + 0x88) == 0) goto LAB_0773ecc8;
            iVar2 = *(int *)(*(long *)(lVar15 + 0x88) + 0x18);
            if (iVar2 < iVar6) {
              if (3 < in_stack_00000090._4_4_) {
                uVar8 = FUN_078b4f58(*(undefined8 *)PTR_DAT_09f31b40,*(undefined8 *)(lVar15 + 0x20),
                                     *(undefined8 *)PTR_DAT_09f31c30,0);
                lVar16 = *(long *)PTR_DAT_09f22e40;
                lVar11 = *(long *)(lVar16 + 0x38);
                if (lVar11 == 0) {
                  FUN_04482014(lVar16);
                  lVar11 = *(long *)(lVar16 + 0x38);
                }
                lVar11 = *(long *)(lVar11 + 0x10);
                if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                  lVar11 = FUN_04481fb8();
                }
                if (*(int *)(lVar11 + 0xe4) == 0) {
                  thunk_FUN_044a54b4();
                }
                lVar11 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
                if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                  lVar11 = FUN_04481fb8();
                }
                FUN_0771ec00(uVar8,**(undefined8 **)(lVar11 + 0xb8),0);
              }
            }
            else if ((1 < in_stack_00000090._4_4_) && (iVar6 < iVar2)) {
              uVar8 = FUN_078b4f58(*(undefined8 *)PTR_DAT_09f31b40,*(undefined8 *)(lVar15 + 0x20),
                                   *(undefined8 *)PTR_DAT_09f31c38,0);
              if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
                thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
              }
              FUN_094c33b0(uVar8,0);
            }
            lVar11 = *unaff_x22;
            uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f30ab8) {
                  puVar7 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_0773e514;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar7 = (undefined8 *)FUN_044822ac();
LAB_0773e514:
            uVar13 = (*(code *)*puVar7)();
            if ((uVar13 & 1) != 0) {
              FUN_07732404(in_stack_00000050,&stack0x000000c4,lVar15,lVar18,in_stack_00000078,0);
            }
            lVar11 = *unaff_x22;
            uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f30ab8) {
                  puVar7 = (undefined8 *)(lVar11 + (long)(*piVar14 + 0x24) * 0x10 + 0x138);
                  goto LAB_0773e59c;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar7 = (undefined8 *)FUN_044822ac();
LAB_0773e59c:
            iVar6 = (*(code *)*puVar7)();
            if (iVar6 == 1) {
              lVar11 = *in_stack_00000080;
              uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f312c0) {
                    puVar7 = (undefined8 *)(lVar11 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                    goto LAB_0773e608;
                  }
                  uVar13 = uVar13 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
              puVar7 = (undefined8 *)FUN_044822ac(in_stack_00000080,*(long *)PTR_DAT_09f312c0,1);
LAB_0773e608:
              (*(code *)*puVar7)(in_stack_00000080,lVar15,unaff_w26,puVar7[1]);
            }
            *(int *)(lVar15 + 0x28) = unaff_w26;
            FUN_0773ca38(&stack0x000000d0,uVar17,lVar15);
            if (in_stack_00000068 == 0) goto LAB_0773ecc8;
            lVar11 = *(long *)(in_stack_00000068 + 0x10);
            lVar18 = *(long *)PTR_DAT_09f1e870;
            *(int *)(in_stack_00000068 + 0x1c) = *(int *)(in_stack_00000068 + 0x1c) + 1;
            if (lVar11 == 0) goto LAB_0773ecc8;
            uVar1 = *(uint *)(in_stack_00000068 + 0x18);
            if (uVar1 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(in_stack_00000068 + 0x18) = uVar1 + 1;
              puVar7 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
              *puVar7 = uVar17;
              thunk_FUN_044bb4b4(puVar7,uVar17);
            }
            else {
              FUN_05bade44(in_stack_00000068,uVar17,
                           *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
            }
            lVar11 = *(long *)(in_stack_00000088 + 0x10);
            lVar18 = *(long *)PTR_DAT_09f31558;
            *(int *)(in_stack_00000088 + 0x1c) = *(int *)(in_stack_00000088 + 0x1c) + 1;
            if (lVar11 == 0) goto LAB_0773ecc8;
            uVar1 = *(uint *)(in_stack_00000088 + 0x18);
            if (uVar1 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(in_stack_00000088 + 0x18) = uVar1 + 1;
              plVar9 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
              *plVar9 = lVar15;
              thunk_FUN_044bb4b4(plVar9,lVar15);
            }
            else {
              FUN_05bade44(in_stack_00000088,lVar15,
                           *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
            }
            plVar9 = (long *)(lVar15 + 0xd0);
            lVar11 = *plVar9;
            if (lVar11 == 0) goto LAB_0773ecc8;
            uVar13 = 0;
            lVar18 = 0x20;
            unaff_w26 = *(int *)(lVar15 + 0x30) + unaff_w26;
            while ((long)uVar13 < (long)(int)*(uint *)(lVar11 + 0x18)) {
              if (*(uint *)(lVar11 + 0x18) <= uVar13) goto LAB_0773ecc4;
              *(undefined8 *)(lVar11 + lVar18) = 0;
              thunk_FUN_044bb4b4((undefined8 *)(lVar11 + lVar18),0);
              lVar11 = *plVar9;
              uVar13 = uVar13 + 1;
              lVar18 = lVar18 + 8;
              if (lVar11 == 0) goto LAB_0773ecc8;
            }
            *plVar9 = 0;
            thunk_FUN_044bb4b4(plVar9,0);
            if (3 < in_stack_00000090._4_4_) {
              lVar11 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,6);
              if (lVar11 == 0) goto LAB_0773ecc8;
              if (*(int *)(lVar11 + 0x18) == 0) goto LAB_0773ecc4;
              *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)PTR_DAT_09f31bc8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar11 + 0x20));
              if (*(uint *)(lVar11 + 0x18) < 2) goto LAB_0773ecc4;
              *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)(lVar15 + 0x20);
              thunk_FUN_044bb4b4((undefined8 *)(lVar11 + 0x28));
              if (*(uint *)(lVar11 + 0x18) < 3) goto LAB_0773ecc4;
              *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)PTR_DAT_09f31c20;
              thunk_FUN_044bb4b4();
              lVar15 = *unaff_x29;
              uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f313c8) {
                    puVar7 = (undefined8 *)(lVar15 + (long)(*piVar14 + 6) * 0x10 + 0x138);
                    goto LAB_0773e850;
                  }
                  uVar13 = uVar13 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
              puVar7 = (undefined8 *)FUN_044822ac();
LAB_0773e850:
              uStack00000000000000bc = (*(code *)*puVar7)();
              uVar17 = FUN_07a3b850((long)&stack0x000000b8 + 4,0);
              if (*(uint *)(lVar11 + 0x18) < 4) goto LAB_0773ecc4;
              *(undefined8 *)(lVar11 + 0x38) = uVar17;
              thunk_FUN_044bb4b4((undefined8 *)(lVar11 + 0x38),uVar17);
              if (*(uint *)(lVar11 + 0x18) < 5) goto LAB_0773ecc4;
              *(undefined8 *)(lVar11 + 0x40) = *(undefined8 *)PTR_DAT_09f31c60;
              thunk_FUN_044bb4b4();
              lVar15 = *in_stack_00000080;
              uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f312c0) {
                    puVar7 = (undefined8 *)(lVar15 + (long)(*piVar14 + 6) * 0x10 + 0x138);
                    goto LAB_0773e908;
                  }
                  uVar13 = uVar13 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
              puVar7 = (undefined8 *)FUN_044822ac(in_stack_00000080,*(long *)PTR_DAT_09f312c0,6);
LAB_0773e908:
              uStack00000000000000bc = (*(code *)*puVar7)(in_stack_00000080,puVar7[1]);
              uVar17 = FUN_07a3b850((long)&stack0x000000b8 + 4,0);
              if (*(uint *)(lVar11 + 0x18) < 6) goto LAB_0773ecc4;
              *(undefined8 *)(lVar11 + 0x48) = uVar17;
              thunk_FUN_044bb4b4();
              uVar17 = FUN_078b57fc(lVar11,0);
              plVar9 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
              in_stack_00000098 = in_stack_00000090._4_4_;
              lVar15 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f31348,&stack0x00000098);
              if (plVar9 == (long *)0x0) goto LAB_0773ecc8;
              if ((lVar15 != 0) &&
                 (lVar11 = thunk_FUN_04485110(lVar15,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0))
              goto LAB_0773eccc;
              if ((int)plVar9[3] == 0) goto LAB_0773ecc4;
              plVar9[4] = lVar15;
              thunk_FUN_044bb4b4(plVar9 + 4,lVar15);
              FUN_0771ec00(uVar17,plVar9,0);
            }
            uVar12 = uVar12 + 1;
          } while ((long)uVar12 < (long)*(int *)(unaff_x21 + 0x18));
        }
        lVar10 = *unaff_x22;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f30ab8) {
              puVar7 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0x16) * 0x10 + 0x138);
              goto LAB_0773ea3c;
            }
            uVar12 = uVar12 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)FUN_044822ac();
LAB_0773ea3c:
        iVar6 = (*(code *)*puVar7)();
        if (iVar6 == 4) {
          lVar10 = *unaff_x22;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 != 0) {
            piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f30ab8) {
                puVar7 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0x1a) * 0x10 + 0x138);
                goto LAB_0773eaa8;
              }
              uVar12 = uVar12 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)FUN_044822ac();
LAB_0773eaa8:
          uVar17 = (*(code *)*puVar7)();
          lVar10 = *unaff_x29;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 != 0) {
            piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f313c8) {
                puVar7 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
                goto LAB_0773eb18;
              }
              uVar12 = uVar12 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)FUN_044822ac();
LAB_0773eb18:
          (*(code *)*puVar7)(uVar17);
        }
        lVar10 = in_stack_00000180;
        if (3 < in_stack_00000090._4_4_) {
          lVar15 = *unaff_x29;
          uVar12 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar12 != 0) {
            piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f313c8) {
                puVar7 = (undefined8 *)(lVar15 + (long)(*piVar14 + 6) * 0x10 + 0x138);
                goto LAB_0773eb94;
              }
              uVar12 = uVar12 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)FUN_044822ac();
LAB_0773eb94:
          uStack00000000000000bc = (*(code *)*puVar7)();
          uVar17 = FUN_07a3b850((long)&stack0x000000b8 + 4,0);
          if (lVar10 == 0) goto LAB_0773ecc8;
          in_stack_000000b0 = FUN_087dad08(lVar10,0);
          uVar8 = FUN_07a3c8f0(&stack0x000000b0,0);
          uVar17 = FUN_078b56f4(*(undefined8 *)PTR_DAT_09f31c18,uVar17,
                                *(undefined8 *)PTR_DAT_09f31c28,uVar8,0);
          plVar9 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
          in_stack_00000098 = in_stack_00000090._4_4_;
          lVar10 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f31348,&stack0x00000098);
          if (plVar9 == (long *)0x0) goto LAB_0773ecc8;
          if ((lVar10 != 0) &&
             (lVar15 = thunk_FUN_04485110(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar15 == 0))
          goto LAB_0773eccc;
          if ((int)plVar9[3] == 0) {
LAB_0773ecc4:
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          plVar9[4] = lVar10;
          thunk_FUN_044bb4b4(plVar9 + 4,lVar10);
          FUN_0771ec00(uVar17,plVar9,0);
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


