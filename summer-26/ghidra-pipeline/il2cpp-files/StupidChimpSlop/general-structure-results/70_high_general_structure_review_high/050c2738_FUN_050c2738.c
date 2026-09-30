/*
FUNCTION_NAME: FUN_050c2738
ENTRY_POINT: 050c2738
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

void FUN_050c2738(long param_1,long *param_2)

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
  undefined8 uVar11;
  undefined8 *puVar12;
  int *piVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 local_b0;
  long **pplStack_a8;
  long local_a0;
  long *plStack_98;
  undefined8 local_90;
  long *local_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_06a4f7b3 & 1) == 0) {
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
    DAT_06a4f7b3 = 1;
  }
  puVar4 = PTR_DAT_0665ec38;
  puVar3 = PTR_DAT_0665ec00;
  puVar2 = PTR_DAT_0665ebf8;
  puVar17 = (undefined8 *)PTR_DAT_0665ebf0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_88 = (long *)0x0;
  if (*(long *)(param_1 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  FUN_03ca60cc(&local_a0,*(long *)(param_1 + 0x80),*(undefined8 *)PTR_DAT_0665ec18);
  local_80 = local_a0;
  local_a0 = 0;
  uStack_78 = plStack_98;
  local_70 = local_90;
  plStack_98 = &local_80;
LAB_050c2908:
  uVar6 = FUN_049c7970(&local_80,*(undefined8 *)puVar2);
  lVar7 = local_a0;
  if ((uVar6 & 1) == 0) {
    FUN_049c7964(plStack_98,*puVar17);
    if (lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee0(lVar7);
    }
    return;
  }
  lVar7 = FUN_049c7a54(&local_80,*(undefined8 *)puVar3);
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
  puVar12 = *(undefined8 **)(lVar8 + 0xb8);
  lVar15 = puVar12[1];
  if (lVar15 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      puVar12 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar10 = *puVar12;
    lVar15 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665eb28);
    FUN_04c523a8(lVar15,uVar10,*(undefined8 *)PTR_DAT_0665ec20,0);
    plVar14 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
    *plVar14 = lVar15;
    thunk_FUN_02dc1ef0(plVar14,lVar15);
  }
  uVar6 = FUN_031cd5e8(param_2,lVar15,*(undefined8 *)PTR_DAT_0665eb80);
  if ((uVar6 & 1) != 0) {
    bVar1 = true;
ExitGames_Client_Photon_EventData___ctor:
    plVar14 = (long *)(lVar7 + 0x40);
    lVar8 = *plVar14;
    if (lVar8 == 0) {
      plVar9 = *(long **)(param_1 + 0x78);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      uVar10 = (**(code **)(*plVar9 + 0x238))(plVar9,*(undefined8 *)(*plVar9 + 0x240));
      uVar6 = FUN_050d1b30(uVar10,0);
      if ((uVar6 & 1) != 0) goto LAB_050c2908;
      lVar8 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665ec10);
      FUN_05140450(lVar8,0);
      *plVar14 = lVar8;
      thunk_FUN_02dc1ef0(plVar14,lVar8);
      lVar8 = *plVar14;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
    }
    FUN_050c4a14(lVar8,*(undefined8 *)(param_1 + 0x78),0);
    if (*plVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    iVar5 = FUN_050b9144();
    if (iVar5 == 0) {
      plVar9 = *(long **)(param_1 + 0x78);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      iVar5 = (**(code **)(*plVar9 + 0x238))(plVar9,*(undefined8 *)(*plVar9 + 0x240));
      if (iVar5 != 4) {
        if (*plVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        plVar9 = (long *)FUN_0514038c(*plVar14,0);
        *plVar14 = 0;
        thunk_FUN_02dc1ef0(plVar14,0);
        if (bVar1) {
          lVar7 = *(long *)puVar4;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
            lVar7 = *(long *)puVar4;
          }
          puVar12 = *(undefined8 **)(lVar7 + 0xb8);
          lVar8 = puVar12[3];
          if (lVar8 == 0) {
            if (*(int *)(lVar7 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
              puVar12 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
            }
            uVar10 = *puVar12;
            lVar8 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665eb28);
            FUN_04c523a8(lVar8,uVar10,*(undefined8 *)PTR_DAT_0665ec30,0);
            plVar14 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
            *plVar14 = lVar8;
            thunk_FUN_02dc1ef0(plVar14,lVar8);
          }
          uVar6 = FUN_031cd5e8(param_2,lVar8,*(undefined8 *)PTR_DAT_0665eb80);
          if ((uVar6 & 1) != 0) {
            if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            lVar7 = *param_2;
            uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar6 != 0) {
              piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0665ea30) {
                  puVar12 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_050c2d6c;
                }
                uVar6 = uVar6 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar6 != 0);
            }
            puVar12 = (undefined8 *)FUN_02d87540(param_2,*(long *)PTR_DAT_0665ea30,0);
LAB_050c2d6c:
            plVar14 = (long *)(*(code *)*puVar12)(param_2,puVar12[1]);
            pplStack_a8 = &local_88;
            local_b0 = 0;
joined_r0x050c2d88:
            local_88 = plVar14;
            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            lVar7 = *plVar14;
            uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar6 != 0) {
              piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_066479b0) {
                  puVar12 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
                  goto ExitGames_Client_Photon_SerializeMethod__Invoke;
                }
                uVar6 = uVar6 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar6 != 0);
            }
            puVar12 = (undefined8 *)FUN_02d87540(plVar14,*(long *)PTR_DAT_066479b0,0);
ExitGames_Client_Photon_SerializeMethod__Invoke:
            uVar6 = (*(code *)*puVar12)(plVar14,puVar12[1]);
            plVar14 = local_88;
            if ((uVar6 & 1) != 0) {
              if (local_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d4dee8();
              }
              lVar7 = *local_88;
              uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar6 != 0) {
                piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0665ea40) {
                    puVar12 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
                    goto LAB_050c2e4c;
                  }
                  uVar6 = uVar6 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar6 != 0);
              }
              puVar12 = (undefined8 *)FUN_02d87540(local_88,*(long *)PTR_DAT_0665ea40,0);
LAB_050c2e4c:
              lVar7 = (*(code *)*puVar12)(plVar14,puVar12[1]);
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d4dee8();
              }
              lVar7 = *(long *)(lVar7 + 0xa8);
              plVar14 = local_88;
              if (lVar7 != 0) {
                if (*(int *)(*(long *)PTR_DAT_0664abf0 + 0xe4) == 0) {
                  thunk_FUN_02dabd98();
                }
                uVar10 = FUN_0512a8f8(0);
                uVar6 = FUN_0319a124(lVar7,plVar9,uVar10,*(undefined8 *)PTR_DAT_0665ebd8);
                plVar14 = local_88;
                if ((uVar6 & 1) == 0) {
                  if (*(int *)(*(long *)PTR_DAT_06649f98 + 0xe4) == 0) {
                    thunk_FUN_02dabd98();
                  }
                  uVar10 = FUN_04f9d780(0);
                  plVar14 = (long *)thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_06659b70);
                  FUN_04fd4da0(plVar14,uVar10,0);
                  uVar10 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665d860);
                  FUN_050b6dd4(uVar10,plVar14,0);
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
                  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d4dee8();
                  }
                  uVar11 = (**(code **)(*plVar14 + 0x168))
                                     (plVar14,*(undefined8 *)(*plVar14 + 0x170));
                  uVar10 = FUN_050ec388(*(undefined8 *)PTR_DAT_0665ec40,uVar10,uVar11,0);
                  FUN_050bff28(param_1,uVar10);
                  plVar14 = local_88;
                }
              }
              goto joined_r0x050c2d88;
            }
            if (local_88 != (long *)0x0) {
              lVar7 = *local_88;
              uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar6 != 0) {
                piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_066479a8) {
                    puVar12 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
                    goto ExitGames_Client_Photon_DeserializeMethod__Invoke;
                  }
                  uVar6 = uVar6 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar6 != 0);
              }
              puVar12 = (undefined8 *)FUN_02d87540(local_88,*(long *)PTR_DAT_066479a8,0);
ExitGames_Client_Photon_DeserializeMethod__Invoke:
              (*(code *)*puVar12)(plVar14,puVar12[1]);
            }
          }
        }
        else {
          uVar10 = *(undefined8 *)(lVar7 + 0x38);
          if (*(int *)(*(long *)PTR_DAT_0664abf0 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar11 = FUN_0512a8f8(0);
          uVar6 = FUN_031d1c70(uVar10,plVar9,uVar11,*(undefined8 *)PTR_DAT_0665ebe0);
          if ((uVar6 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_06649f98 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            uVar10 = FUN_04f9d780(0);
            local_b0 = CONCAT44(local_b0._4_4_,*(int *)(lVar7 + 0x30) + -1);
            uVar11 = thunk_FUN_02d8a270(*(undefined8 *)(PTR_DAT_066462a0 + 0x48),&local_b0);
            uVar10 = FUN_050ec388(*(undefined8 *)PTR_DAT_0665ec48,uVar10,uVar11,0);
            lVar8 = *(long *)puVar4;
            uVar11 = *(undefined8 *)(lVar7 + 0x18);
            if (*(int *)(lVar8 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
              lVar8 = *(long *)puVar4;
            }
            puVar12 = *(undefined8 **)(lVar8 + 0xb8);
            lVar15 = puVar12[2];
            if (lVar15 == 0) {
              if (*(int *)(lVar8 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
                puVar12 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
              }
              uVar16 = *puVar12;
              lVar15 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665eb28);
              FUN_04c523a8(lVar15,uVar16,*(undefined8 *)PTR_DAT_0665ec28,0);
              plVar14 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
              *plVar14 = lVar15;
              puVar17 = (undefined8 *)PTR_DAT_0665ebf0;
              thunk_FUN_02dc1ef0(plVar14,lVar15);
            }
            FUN_031d8420(uVar11,lVar15,*(undefined8 *)PTR_DAT_0665ebe8);
            FUN_050bff28(param_1,uVar10);
          }
          plVar14 = *(long **)(lVar7 + 0x38);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          lVar7 = *plVar14;
          uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar6 != 0) {
            piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0665ec08) {
                puVar12 = (undefined8 *)(lVar7 + (long)(*piVar13 + 2) * 0x10 + 0x138);
                goto LAB_050c2d4c;
              }
              uVar6 = uVar6 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar6 != 0);
          }
          puVar12 = (undefined8 *)FUN_02d87540(plVar14,*(long *)PTR_DAT_0665ec08,2);
LAB_050c2d4c:
          (*(code *)*puVar12)(plVar14,plVar9,puVar12[1]);
        }
      }
    }
  }
  goto LAB_050c2908;
}


