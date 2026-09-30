/*
FUNCTION_NAME: ExitGames.Client.Photon.OperationResponse$$ToString
ENTRY_POINT: 050c2760
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_19;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x050c3050) */

void ExitGames_Client_Photon_OperationResponse__ToString(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  int *piVar12;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *puVar16;
  long in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 in_stack_00000020;
  long *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  if ((*(byte *)(unaff_x21 + 0x7b3) & 1) == 0) {
    FUN_02d4dc40(PTR_DAT_0665ebd0);
    FUN_02d4dc40(PTR_DAT_0665ebd8);
    FUN_02d4dc40(PTR_DAT_06649f98);
    FUN_02d4dc40(PTR_DAT_0665eb80);
    FUN_02d4dc40(PTR_DAT_0665ebe0);
    FUN_02d4dc40(PTR_DAT_0665ebe8);
    FUN_02d4dc40(PTR_DAT_0665ebf0);
    FUN_02d4dc40(PTR_DAT_0665ebf8);
    FUN_02d4dc40(PTR_DAT_0665ec00);
    FUN_02d4dc40(PTR_DAT_0665eb28);
    FUN_02d4dc40(PTR_DAT_0665ec08);
    FUN_02d4dc40(PTR_DAT_066479a8);
    FUN_02d4dc40(PTR_DAT_0665ea30);
    FUN_02d4dc40(PTR_DAT_0665ea40);
    FUN_02d4dc40(PTR_DAT_066479b0);
    FUN_02d4dc40(PTR_DAT_0665ec10);
    FUN_02d4dc40(PTR_DAT_0664abf0);
    FUN_02d4dc40(PTR_DAT_0665d860);
    FUN_02d4dc40(PTR_DAT_0665ec18);
    FUN_02d4dc40(PTR_DAT_06659b70);
    FUN_02d4dc40(PTR_DAT_0665ec20);
    FUN_02d4dc40(PTR_DAT_0665ec28);
    FUN_02d4dc40(PTR_DAT_0665ec30);
    FUN_02d4dc40(PTR_DAT_0665ec38);
    FUN_02d4dc40(PTR_DAT_0665ec40);
    FUN_02d4dc40(PTR_DAT_0665ec48);
    *(undefined1 *)(unaff_x21 + 0x7b3) = 1;
  }
  puVar4 = PTR_DAT_0665ec38;
  puVar3 = PTR_DAT_0665ec00;
  puVar2 = PTR_DAT_0665ebf8;
  puVar16 = (undefined8 *)PTR_DAT_0665ebf0;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  in_stack_00000028 = (long *)0x0;
  if (*(long *)(unaff_x20 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  FUN_03ca60cc(&stack0x00000010,*(long *)(unaff_x20 + 0x80),*(undefined8 *)PTR_DAT_0665ec18);
  in_stack_00000030 = in_stack_00000010;
  in_stack_00000010 = 0;
  in_stack_00000038 = in_stack_00000018;
  in_stack_00000040 = in_stack_00000020;
  in_stack_00000018 = &stack0x00000030;
LAB_050c2908:
  uVar6 = FUN_049c7970(&stack0x00000030,*(undefined8 *)puVar2);
  lVar7 = in_stack_00000010;
  if ((uVar6 & 1) == 0) {
    FUN_049c7964(in_stack_00000018,*puVar16);
    if (lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee0(lVar7);
    }
    return;
  }
  lVar7 = FUN_049c7a54(&stack0x00000030,*(undefined8 *)puVar3);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  if (((*(int *)(lVar7 + 0x10) != 2) || (*(char *)(lVar7 + 0x34) == '\0')) ||
     (*(int *)(lVar7 + 0x30) < 1)) goto LAB_050c2954;
  bVar1 = false;
  goto ExitGames_Client_Photon_EventData___ctor;
LAB_050c2954:
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
    lVar8 = *(long *)puVar4;
  }
  puVar11 = *(undefined8 **)(lVar8 + 0xb8);
  if (puVar11[1] == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      puVar11 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar14 = *puVar11;
    uVar10 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665eb28);
    FUN_04c523a8(uVar10,uVar14,*(undefined8 *)PTR_DAT_0665ec20,0);
    puVar11 = (undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
    *puVar11 = uVar10;
    thunk_FUN_02dc1ef0(puVar11,uVar10);
  }
  uVar6 = FUN_031cd5e8();
  if ((uVar6 & 1) != 0) {
    bVar1 = true;
ExitGames_Client_Photon_EventData___ctor:
    plVar13 = (long *)(lVar7 + 0x40);
    lVar8 = *plVar13;
    if (lVar8 == 0) {
      plVar9 = *(long **)(unaff_x20 + 0x78);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      uVar10 = (**(code **)(*plVar9 + 0x238))(plVar9,*(undefined8 *)(*plVar9 + 0x240));
      uVar6 = FUN_050d1b30(uVar10,0);
      if ((uVar6 & 1) != 0) goto LAB_050c2908;
      lVar8 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665ec10);
      FUN_05140450(lVar8,0);
      *plVar13 = lVar8;
      thunk_FUN_02dc1ef0(plVar13,lVar8);
      lVar8 = *plVar13;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
    }
    FUN_050c4a14(lVar8,*(undefined8 *)(unaff_x20 + 0x78),0);
    if (*plVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    iVar5 = FUN_050b9144();
    if (iVar5 == 0) {
      plVar9 = *(long **)(unaff_x20 + 0x78);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      iVar5 = (**(code **)(*plVar9 + 0x238))(plVar9,*(undefined8 *)(*plVar9 + 0x240));
      if (iVar5 != 4) {
        if (*plVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        plVar9 = (long *)FUN_0514038c(*plVar13,0);
        *plVar13 = 0;
        thunk_FUN_02dc1ef0(plVar13,0);
        if (bVar1) {
          lVar7 = *(long *)puVar4;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
            lVar7 = *(long *)puVar4;
          }
          puVar11 = *(undefined8 **)(lVar7 + 0xb8);
          if (puVar11[3] == 0) {
            if (*(int *)(lVar7 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
              puVar11 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
            }
            uVar14 = *puVar11;
            uVar10 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665eb28);
            FUN_04c523a8(uVar10,uVar14,*(undefined8 *)PTR_DAT_0665ec30,0);
            puVar11 = (undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
            *puVar11 = uVar10;
            thunk_FUN_02dc1ef0(puVar11,uVar10);
          }
          uVar6 = FUN_031cd5e8();
          if ((uVar6 & 1) != 0) {
            if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            lVar7 = *unaff_x19;
            uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar6 != 0) {
              piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0665ea30) {
                  puVar11 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_050c2d6c;
                }
                uVar6 = uVar6 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar6 != 0);
            }
            puVar11 = (undefined8 *)FUN_02d87540();
LAB_050c2d6c:
            plVar13 = (long *)(*(code *)*puVar11)();
joined_r0x050c2d88:
            in_stack_00000028 = plVar13;
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            lVar7 = *plVar13;
            uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar6 != 0) {
              piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_066479b0) {
                  puVar11 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
                  goto ExitGames_Client_Photon_SerializeMethod__Invoke;
                }
                uVar6 = uVar6 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar6 != 0);
            }
            puVar11 = (undefined8 *)FUN_02d87540(plVar13,*(long *)PTR_DAT_066479b0,0);
ExitGames_Client_Photon_SerializeMethod__Invoke:
            uVar6 = (*(code *)*puVar11)(plVar13,puVar11[1]);
            plVar13 = in_stack_00000028;
            if ((uVar6 & 1) != 0) {
              if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d4dee8();
              }
              lVar7 = *in_stack_00000028;
              uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar6 != 0) {
                piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0665ea40) {
                    puVar11 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
                    goto LAB_050c2e4c;
                  }
                  uVar6 = uVar6 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar6 != 0);
              }
              puVar11 = (undefined8 *)FUN_02d87540(in_stack_00000028,*(long *)PTR_DAT_0665ea40,0);
LAB_050c2e4c:
              lVar7 = (*(code *)*puVar11)(plVar13,puVar11[1]);
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d4dee8();
              }
              lVar7 = *(long *)(lVar7 + 0xa8);
              plVar13 = in_stack_00000028;
              if (lVar7 != 0) {
                if (*(int *)(*(long *)PTR_DAT_0664abf0 + 0xe4) == 0) {
                  thunk_FUN_02dabd98();
                }
                uVar10 = FUN_0512a8f8(0);
                uVar6 = FUN_0319a124(lVar7,plVar9,uVar10,*(undefined8 *)PTR_DAT_0665ebd8);
                plVar13 = in_stack_00000028;
                if ((uVar6 & 1) == 0) {
                  if (*(int *)(*(long *)PTR_DAT_06649f98 + 0xe4) == 0) {
                    thunk_FUN_02dabd98();
                  }
                  uVar10 = FUN_04f9d780(0);
                  plVar13 = (long *)thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_06659b70);
                  FUN_04fd4da0(plVar13,uVar10,0);
                  uVar10 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665d860);
                  FUN_050b6dd4(uVar10,plVar13,0);
                  lVar8 = *(long *)PTR_DAT_0665ebd0;
                  lVar7 = *(long *)(lVar8 + 0x38);
                  if (lVar7 == 0) {
                    FUN_02d87268(lVar8);
                    lVar7 = *(long *)(lVar8 + 0x38);
                  }
                  lVar7 = *(long *)(lVar7 + 0x10);
                  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
                    lVar7 = FUN_02d8720c();
                  }
                  if (*(int *)(lVar7 + 0xe4) == 0) {
                    thunk_FUN_02dabd98();
                  }
                  lVar7 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
                  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
                    lVar7 = FUN_02d8720c();
                  }
                  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d4dee8();
                  }
                  (**(code **)(*plVar9 + 0x2b8))
                            (plVar9,uVar10,**(undefined8 **)(lVar7 + 0xb8),
                             *(undefined8 *)(*plVar9 + 0x2c0));
                  uVar10 = FUN_04f9d780(0);
                  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d4dee8();
                  }
                  uVar14 = (**(code **)(*plVar13 + 0x168))
                                     (plVar13,*(undefined8 *)(*plVar13 + 0x170));
                  FUN_050ec388(*(undefined8 *)PTR_DAT_0665ec40,uVar10,uVar14,0);
                  FUN_050bff28();
                  plVar13 = in_stack_00000028;
                }
              }
              goto joined_r0x050c2d88;
            }
            if (in_stack_00000028 != (long *)0x0) {
              lVar7 = *in_stack_00000028;
              uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar6 != 0) {
                piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_066479a8) {
                    puVar11 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
                    goto ExitGames_Client_Photon_DeserializeMethod__Invoke;
                  }
                  uVar6 = uVar6 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar6 != 0);
              }
              puVar11 = (undefined8 *)FUN_02d87540(in_stack_00000028,*(long *)PTR_DAT_066479a8,0);
ExitGames_Client_Photon_DeserializeMethod__Invoke:
              (*(code *)*puVar11)(plVar13,puVar11[1]);
            }
          }
        }
        else {
          uVar10 = *(undefined8 *)(lVar7 + 0x38);
          if (*(int *)(*(long *)PTR_DAT_0664abf0 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar14 = FUN_0512a8f8(0);
          uVar6 = FUN_031d1c70(uVar10,plVar9,uVar14,*(undefined8 *)PTR_DAT_0665ebe0);
          if ((uVar6 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_06649f98 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            uVar10 = FUN_04f9d780(0);
            uVar14 = thunk_FUN_02d8a270(*(undefined8 *)(PTR_DAT_066462a0 + 0x48));
            FUN_050ec388(*(undefined8 *)PTR_DAT_0665ec48,uVar10,uVar14,0);
            lVar8 = *(long *)puVar4;
            uVar10 = *(undefined8 *)(lVar7 + 0x18);
            if (*(int *)(lVar8 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
              lVar8 = *(long *)puVar4;
            }
            puVar11 = *(undefined8 **)(lVar8 + 0xb8);
            lVar15 = puVar11[2];
            if (lVar15 == 0) {
              if (*(int *)(lVar8 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
                puVar11 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
              }
              uVar14 = *puVar11;
              lVar15 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665eb28);
              FUN_04c523a8(lVar15,uVar14,*(undefined8 *)PTR_DAT_0665ec28,0);
              plVar13 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
              *plVar13 = lVar15;
              puVar16 = (undefined8 *)PTR_DAT_0665ebf0;
              thunk_FUN_02dc1ef0(plVar13,lVar15);
            }
            FUN_031d8420(uVar10,lVar15,*(undefined8 *)PTR_DAT_0665ebe8);
            FUN_050bff28();
          }
          plVar13 = *(long **)(lVar7 + 0x38);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          lVar7 = *plVar13;
          uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar6 != 0) {
            piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0665ec08) {
                puVar11 = (undefined8 *)(lVar7 + (long)(*piVar12 + 2) * 0x10 + 0x138);
                goto LAB_050c2d4c;
              }
              uVar6 = uVar6 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar6 != 0);
          }
          puVar11 = (undefined8 *)FUN_02d87540(plVar13,*(long *)PTR_DAT_0665ec08,2);
LAB_050c2d4c:
          (*(code *)*puVar11)(plVar13,plVar9,puVar11[1]);
        }
      }
    }
  }
  goto LAB_050c2908;
}


