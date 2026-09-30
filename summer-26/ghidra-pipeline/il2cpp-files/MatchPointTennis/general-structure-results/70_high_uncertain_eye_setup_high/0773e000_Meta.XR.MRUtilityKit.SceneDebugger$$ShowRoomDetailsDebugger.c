/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$ShowRoomDetailsDebugger
ENTRY_POINT: 0773e000
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


bool Meta_XR_MRUtilityKit_SceneDebugger__ShowRoomDetailsDebugger
               (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long in_x9;
  ulong uVar12;
  ulong uVar13;
  long in_x10;
  int *piVar14;
  long lVar15;
  long unaff_x21;
  long *unaff_x22;
  undefined8 uVar16;
  long *unaff_x25;
  int unaff_w26;
  undefined8 *unaff_x27;
  long lVar17;
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
  int in_stack_00000098;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined4 in_stack_000000e8;
  long in_stack_00000168;
  undefined8 in_stack_00000170;
  long in_stack_00000180;
  
  piVar14 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar14 + -2) == param_3) {
      puVar6 = (undefined8 *)(param_1 + (long)(*piVar14 + 0x24) * 0x10 + 0x138);
      goto LAB_0773e044;
    }
    in_x9 = in_x9 + -1;
    piVar14 = piVar14 + 4;
  } while (in_x9 != 0);
  puVar6 = (undefined8 *)FUN_044822ac();
LAB_0773e044:
  iVar5 = (*(code *)*puVar6)();
  if (iVar5 == 1) {
    lVar10 = *unaff_x25;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f312c0) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar14 + 4) * 0x10 + 0x138);
          goto LAB_0773e0b4;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_044822ac();
LAB_0773e0b4:
    (*(code *)*puVar6)();
  }
  puVar4 = PTR_DAT_09f31bb0;
  puVar3 = PTR_DAT_09f1e8b0;
  iVar5 = *(int *)(in_stack_00000088 + 0x18);
  while (iVar5 = iVar5 + -1, -1 < iVar5) {
    lVar10 = FUN_05badb74(in_stack_00000088,iVar5,*unaff_x27);
    if (lVar10 == 0) goto LAB_0773ecc8;
    if (*(char *)(lVar10 + 0xb9) != '\0') {
      lVar10 = FUN_05badb74(in_stack_00000088,iVar5,*unaff_x27);
      if ((lVar10 == 0) ||
         (FUN_0773caa0(&stack0x000000d0,*(undefined8 *)(lVar10 + 0x18)), in_stack_00000068 == 0))
      goto LAB_0773ecc8;
      FUN_05baf638(in_stack_00000068,iVar5,*(undefined8 *)puVar3);
      FUN_05baf638(in_stack_00000088,iVar5,*(undefined8 *)puVar4);
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
            puVar6 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0x24) * 0x10 + 0x138);
            goto LAB_0773e1c8;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)FUN_044822ac();
LAB_0773e1c8:
      iVar5 = (*(code *)*puVar6)();
      if (iVar5 == 1) {
        lVar10 = *unaff_x25;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f312c0) {
              puVar6 = (undefined8 *)(lVar10 + (long)(*piVar14 + 5) * 0x10 + 0x138);
              goto LAB_0773e234;
            }
            uVar12 = uVar12 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)FUN_044822ac();
LAB_0773e234:
        (*(code *)*puVar6)();
      }
      lVar10 = in_stack_00000168;
      if (unaff_x21 != 0) {
        if (0 < *(int *)(unaff_x21 + 0x18)) {
          uVar12 = 0;
          do {
            lVar7 = FUN_05badb74();
            if (lVar10 == 0) goto LAB_0773ecc8;
            if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_0773ecc4;
            if (lVar7 == 0) goto LAB_0773ecc8;
            lVar11 = *unaff_x29;
            uVar16 = *(undefined8 *)(lVar10 + uVar12 * 8 + 0x20);
            lVar17 = *(long *)(lVar7 + 0xc0);
            uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f313c8) {
                  puVar6 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_0773e2ec;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar6 = (undefined8 *)FUN_044822ac();
LAB_0773e2ec:
            (*(code *)*puVar6)();
            lVar11 = *unaff_x29;
            uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f313c8) {
                  puVar6 = (undefined8 *)(lVar11 + (long)(*piVar14 + 10) * 0x10 + 0x138);
                  goto LAB_0773e354;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar6 = (undefined8 *)FUN_044822ac();
LAB_0773e354:
            (*(code *)*puVar6)();
            if (lVar17 == 0) goto LAB_0773ecc8;
            iVar5 = FUN_094d3ba4(lVar17,0);
            if (*(long *)(lVar7 + 0x88) == 0) goto LAB_0773ecc8;
            iVar1 = *(int *)(*(long *)(lVar7 + 0x88) + 0x18);
            if (iVar1 < iVar5) {
              if (3 < in_stack_00000090._4_4_) {
                uVar8 = FUN_078b4f58(*(undefined8 *)PTR_DAT_09f31b40,*(undefined8 *)(lVar7 + 0x20),
                                     *(undefined8 *)PTR_DAT_09f31c30,0);
                lVar15 = *(long *)PTR_DAT_09f22e40;
                lVar11 = *(long *)(lVar15 + 0x38);
                if (lVar11 == 0) {
                  FUN_04482014(lVar15);
                  lVar11 = *(long *)(lVar15 + 0x38);
                }
                lVar11 = *(long *)(lVar11 + 0x10);
                if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                  lVar11 = FUN_04481fb8();
                }
                if (*(int *)(lVar11 + 0xe4) == 0) {
                  thunk_FUN_044a54b4();
                }
                lVar11 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
                if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                  lVar11 = FUN_04481fb8();
                }
                FUN_0771ec00(uVar8,**(undefined8 **)(lVar11 + 0xb8),0);
              }
            }
            else if ((1 < in_stack_00000090._4_4_) && (iVar5 < iVar1)) {
              uVar8 = FUN_078b4f58(*(undefined8 *)PTR_DAT_09f31b40,*(undefined8 *)(lVar7 + 0x20),
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
                  puVar6 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_0773e514;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar6 = (undefined8 *)FUN_044822ac();
LAB_0773e514:
            uVar13 = (*(code *)*puVar6)();
            if ((uVar13 & 1) != 0) {
              FUN_07732404(in_stack_00000050,&stack0x000000c4,lVar7,lVar17,in_stack_00000078,0);
            }
            lVar11 = *unaff_x22;
            uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f30ab8) {
                  puVar6 = (undefined8 *)(lVar11 + (long)(*piVar14 + 0x24) * 0x10 + 0x138);
                  goto LAB_0773e59c;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar6 = (undefined8 *)FUN_044822ac();
LAB_0773e59c:
            iVar5 = (*(code *)*puVar6)();
            if (iVar5 == 1) {
              lVar11 = *in_stack_00000080;
              uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f312c0) {
                    puVar6 = (undefined8 *)(lVar11 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                    goto LAB_0773e608;
                  }
                  uVar13 = uVar13 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
              puVar6 = (undefined8 *)FUN_044822ac(in_stack_00000080,*(long *)PTR_DAT_09f312c0,1);
LAB_0773e608:
              (*(code *)*puVar6)(in_stack_00000080,lVar7,unaff_w26,puVar6[1]);
            }
            *(int *)(lVar7 + 0x28) = unaff_w26;
            FUN_0773ca38(&stack0x000000d0,uVar16,lVar7);
            if (in_stack_00000068 == 0) goto LAB_0773ecc8;
            lVar11 = *(long *)(in_stack_00000068 + 0x10);
            lVar17 = *(long *)PTR_DAT_09f1e870;
            *(int *)(in_stack_00000068 + 0x1c) = *(int *)(in_stack_00000068 + 0x1c) + 1;
            if (lVar11 == 0) goto LAB_0773ecc8;
            uVar2 = *(uint *)(in_stack_00000068 + 0x18);
            if (uVar2 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(in_stack_00000068 + 0x18) = uVar2 + 1;
              puVar6 = (undefined8 *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
              *puVar6 = uVar16;
              thunk_FUN_044bb4b4(puVar6,uVar16);
            }
            else {
              FUN_05bade44(in_stack_00000068,uVar16,
                           *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
            }
            lVar11 = *(long *)(in_stack_00000088 + 0x10);
            lVar17 = *(long *)PTR_DAT_09f31558;
            *(int *)(in_stack_00000088 + 0x1c) = *(int *)(in_stack_00000088 + 0x1c) + 1;
            if (lVar11 == 0) goto LAB_0773ecc8;
            uVar2 = *(uint *)(in_stack_00000088 + 0x18);
            if (uVar2 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(in_stack_00000088 + 0x18) = uVar2 + 1;
              plVar9 = (long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
              *plVar9 = lVar7;
              thunk_FUN_044bb4b4(plVar9,lVar7);
            }
            else {
              FUN_05bade44(in_stack_00000088,lVar7,
                           *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
            }
            plVar9 = (long *)(lVar7 + 0xd0);
            lVar11 = *plVar9;
            if (lVar11 == 0) goto LAB_0773ecc8;
            uVar13 = 0;
            lVar17 = 0x20;
            unaff_w26 = *(int *)(lVar7 + 0x30) + unaff_w26;
            while ((long)uVar13 < (long)(int)*(uint *)(lVar11 + 0x18)) {
              if (*(uint *)(lVar11 + 0x18) <= uVar13) goto LAB_0773ecc4;
              *(undefined8 *)(lVar11 + lVar17) = 0;
              thunk_FUN_044bb4b4((undefined8 *)(lVar11 + lVar17),0);
              lVar11 = *plVar9;
              uVar13 = uVar13 + 1;
              lVar17 = lVar17 + 8;
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
              *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)(lVar7 + 0x20);
              thunk_FUN_044bb4b4((undefined8 *)(lVar11 + 0x28));
              if (*(uint *)(lVar11 + 0x18) < 3) goto LAB_0773ecc4;
              *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)PTR_DAT_09f31c20;
              thunk_FUN_044bb4b4();
              lVar7 = *unaff_x29;
              uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f313c8) {
                    puVar6 = (undefined8 *)(lVar7 + (long)(*piVar14 + 6) * 0x10 + 0x138);
                    goto LAB_0773e850;
                  }
                  uVar13 = uVar13 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
              puVar6 = (undefined8 *)FUN_044822ac();
LAB_0773e850:
              in_stack_000000b8._4_4_ = (*(code *)*puVar6)();
              uVar16 = FUN_07a3b850((long)&stack0x000000b8 + 4,0);
              if (*(uint *)(lVar11 + 0x18) < 4) goto LAB_0773ecc4;
              *(undefined8 *)(lVar11 + 0x38) = uVar16;
              thunk_FUN_044bb4b4((undefined8 *)(lVar11 + 0x38),uVar16);
              if (*(uint *)(lVar11 + 0x18) < 5) goto LAB_0773ecc4;
              *(undefined8 *)(lVar11 + 0x40) = *(undefined8 *)PTR_DAT_09f31c60;
              thunk_FUN_044bb4b4();
              lVar7 = *in_stack_00000080;
              uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f312c0) {
                    puVar6 = (undefined8 *)(lVar7 + (long)(*piVar14 + 6) * 0x10 + 0x138);
                    goto LAB_0773e908;
                  }
                  uVar13 = uVar13 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
              puVar6 = (undefined8 *)FUN_044822ac(in_stack_00000080,*(long *)PTR_DAT_09f312c0,6);
LAB_0773e908:
              in_stack_000000b8._4_4_ = (*(code *)*puVar6)(in_stack_00000080,puVar6[1]);
              uVar16 = FUN_07a3b850((long)&stack0x000000b8 + 4,0);
              if (*(uint *)(lVar11 + 0x18) < 6) goto LAB_0773ecc4;
              *(undefined8 *)(lVar11 + 0x48) = uVar16;
              thunk_FUN_044bb4b4();
              uVar16 = FUN_078b57fc(lVar11,0);
              plVar9 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
              in_stack_00000098 = in_stack_00000090._4_4_;
              lVar7 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f31348,&stack0x00000098);
              if (plVar9 == (long *)0x0) goto LAB_0773ecc8;
              if ((lVar7 != 0) &&
                 (lVar11 = thunk_FUN_04485110(lVar7,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0))
              goto LAB_0773eccc;
              if ((int)plVar9[3] == 0) goto LAB_0773ecc4;
              plVar9[4] = lVar7;
              thunk_FUN_044bb4b4(plVar9 + 4,lVar7);
              FUN_0771ec00(uVar16,plVar9,0);
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
              puVar6 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0x16) * 0x10 + 0x138);
              goto LAB_0773ea3c;
            }
            uVar12 = uVar12 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)FUN_044822ac();
LAB_0773ea3c:
        iVar5 = (*(code *)*puVar6)();
        if (iVar5 == 4) {
          lVar10 = *unaff_x22;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 != 0) {
            piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f30ab8) {
                puVar6 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0x1a) * 0x10 + 0x138);
                goto LAB_0773eaa8;
              }
              uVar12 = uVar12 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar12 != 0);
          }
          puVar6 = (undefined8 *)FUN_044822ac();
LAB_0773eaa8:
          uVar16 = (*(code *)*puVar6)();
          lVar10 = *unaff_x29;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 != 0) {
            piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f313c8) {
                puVar6 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
                goto LAB_0773eb18;
              }
              uVar12 = uVar12 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar12 != 0);
          }
          puVar6 = (undefined8 *)FUN_044822ac();
LAB_0773eb18:
          (*(code *)*puVar6)(uVar16);
        }
        lVar10 = in_stack_00000180;
        if (3 < in_stack_00000090._4_4_) {
          lVar7 = *unaff_x29;
          uVar12 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar12 != 0) {
            piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f313c8) {
                puVar6 = (undefined8 *)(lVar7 + (long)(*piVar14 + 6) * 0x10 + 0x138);
                goto LAB_0773eb94;
              }
              uVar12 = uVar12 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar12 != 0);
          }
          puVar6 = (undefined8 *)FUN_044822ac();
LAB_0773eb94:
          in_stack_000000b8._4_4_ = (*(code *)*puVar6)();
          uVar16 = FUN_07a3b850((long)&stack0x000000b8 + 4,0);
          if (lVar10 == 0) goto LAB_0773ecc8;
          in_stack_000000b0 = FUN_087dad08(lVar10,0);
          uVar8 = FUN_07a3c8f0(&stack0x000000b0,0);
          uVar16 = FUN_078b56f4(*(undefined8 *)PTR_DAT_09f31c18,uVar16,
                                *(undefined8 *)PTR_DAT_09f31c28,uVar8,0);
          plVar9 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
          in_stack_00000098 = in_stack_00000090._4_4_;
          lVar10 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f31348,&stack0x00000098);
          if (plVar9 == (long *)0x0) goto LAB_0773ecc8;
          if ((lVar10 != 0) &&
             (lVar7 = thunk_FUN_04485110(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar7 == 0)) {
LAB_0773eccc:
            uVar16 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
            FUN_04447d10(uVar16,0);
          }
          if ((int)plVar9[3] == 0) {
LAB_0773ecc4:
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          plVar9[4] = lVar10;
          thunk_FUN_044bb4b4(plVar9 + 4,lVar10);
          FUN_0771ec00(uVar16,plVar9,0);
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


