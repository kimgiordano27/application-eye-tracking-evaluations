/*
FUNCTION_NAME: ExitGames.Client.Photon.EventData$$get_Item
ENTRY_POINT: 050c2a70
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_17;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x050c3050) */

void ExitGames_Client_Photon_EventData__get_Item(long *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long *unaff_x23;
  undefined8 uVar10;
  uint unaff_w24;
  long lVar11;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x29;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    iVar1 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
    if (iVar1 != 4) {
      if (*unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      plVar2 = (long *)FUN_0514038c(*unaff_x23,0);
      *unaff_x23 = 0;
      thunk_FUN_02dc1ef0(unaff_x23,0);
      if ((unaff_w24 & 1) == 0) {
        uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
        if (*(int *)(*(long *)PTR_DAT_0664abf0 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar10 = FUN_0512a8f8(0);
        uVar5 = FUN_031d1c70(uVar4,plVar2,uVar10,*(undefined8 *)PTR_DAT_0665ebe0);
        if ((uVar5 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_06649f98 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar4 = FUN_04f9d780(0);
          uVar10 = thunk_FUN_02d8a270(*(undefined8 *)(PTR_DAT_066462a0 + 0x48));
          FUN_050ec388(*(undefined8 *)PTR_DAT_0665ec48,uVar4,uVar10,0);
          lVar3 = *unaff_x27;
          uVar4 = *(undefined8 *)(unaff_x22 + 0x18);
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
            lVar3 = *unaff_x27;
          }
          puVar8 = *(undefined8 **)(lVar3 + 0xb8);
          lVar11 = puVar8[2];
          if (lVar11 == 0) {
            if (*(int *)(lVar3 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
              puVar8 = *(undefined8 **)(*unaff_x27 + 0xb8);
            }
            uVar10 = *puVar8;
            lVar11 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665eb28);
            FUN_04c523a8(lVar11,uVar10,*(undefined8 *)PTR_DAT_0665ec28,0);
            plVar6 = (long *)(*(long *)(*unaff_x27 + 0xb8) + 0x10);
            *plVar6 = lVar11;
            unaff_x26 = (undefined8 *)PTR_DAT_0665ebf0;
            thunk_FUN_02dc1ef0(plVar6,lVar11);
          }
          FUN_031d8420(uVar4,lVar11,*(undefined8 *)PTR_DAT_0665ebe8);
          FUN_050bff28();
        }
        plVar6 = *(long **)(unaff_x22 + 0x38);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        lVar3 = *plVar6;
        uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar5 != 0) {
          piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0665ec08) {
              puVar8 = (undefined8 *)(lVar3 + (long)(*piVar9 + 2) * 0x10 + 0x138);
              goto LAB_050c2d4c;
            }
            uVar5 = uVar5 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar5 != 0);
        }
        puVar8 = (undefined8 *)FUN_02d87540(plVar6,*(long *)PTR_DAT_0665ec08,2);
LAB_050c2d4c:
        (*(code *)*puVar8)(plVar6,plVar2,puVar8[1]);
      }
      else {
        lVar3 = *unaff_x27;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar3 = *unaff_x27;
        }
        puVar8 = *(undefined8 **)(lVar3 + 0xb8);
        if (puVar8[3] == 0) {
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
            puVar8 = *(undefined8 **)(*unaff_x27 + 0xb8);
          }
          uVar10 = *puVar8;
          uVar4 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665eb28);
          FUN_04c523a8(uVar4,uVar10,*(undefined8 *)PTR_DAT_0665ec30,0);
          puVar8 = (undefined8 *)(*(long *)(*unaff_x27 + 0xb8) + 0x18);
          *puVar8 = uVar4;
          thunk_FUN_02dc1ef0(puVar8,uVar4);
        }
        uVar5 = FUN_031cd5e8();
        if ((uVar5 & 1) != 0) {
          if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          lVar3 = *unaff_x19;
          uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar5 != 0) {
            piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0665ea30) {
                puVar8 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_050c2d6c;
              }
              uVar5 = uVar5 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar5 != 0);
          }
          puVar8 = (undefined8 *)FUN_02d87540();
LAB_050c2d6c:
          plVar6 = (long *)(*(code *)*puVar8)();
joined_r0x050c2d88:
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          lVar3 = *plVar6;
          uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar5 != 0) {
            piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_066479b0) {
                puVar8 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
                goto ExitGames_Client_Photon_SerializeMethod__Invoke;
              }
              uVar5 = uVar5 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar5 != 0);
          }
          puVar8 = (undefined8 *)FUN_02d87540(plVar6,*(long *)PTR_DAT_066479b0,0);
ExitGames_Client_Photon_SerializeMethod__Invoke:
          uVar5 = (*(code *)*puVar8)(plVar6,puVar8[1]);
          if ((uVar5 & 1) != 0) {
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            lVar3 = *plVar6;
            uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
            if (uVar5 != 0) {
              piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0665ea40) {
                  puVar8 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_050c2e4c;
                }
                uVar5 = uVar5 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar5 != 0);
            }
            puVar8 = (undefined8 *)FUN_02d87540(plVar6,*(long *)PTR_DAT_0665ea40,0);
LAB_050c2e4c:
            lVar3 = (*(code *)*puVar8)(plVar6,puVar8[1]);
            if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            lVar3 = *(long *)(lVar3 + 0xa8);
            if (lVar3 != 0) {
              if (*(int *)(*(long *)PTR_DAT_0664abf0 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              uVar4 = FUN_0512a8f8(0);
              uVar5 = FUN_0319a124(lVar3,plVar2,uVar4,*(undefined8 *)PTR_DAT_0665ebd8);
              if ((uVar5 & 1) == 0) {
                if (*(int *)(*(long *)PTR_DAT_06649f98 + 0xe4) == 0) {
                  thunk_FUN_02dabd98();
                }
                uVar4 = FUN_04f9d780(0);
                plVar7 = (long *)thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_06659b70);
                FUN_04fd4da0(plVar7,uVar4,0);
                uVar4 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665d860);
                FUN_050b6dd4(uVar4,plVar7,0);
                lVar11 = *(long *)PTR_DAT_0665ebd0;
                lVar3 = *(long *)(lVar11 + 0x38);
                if (lVar3 == 0) {
                  FUN_02d87268(lVar11);
                  lVar3 = *(long *)(lVar11 + 0x38);
                }
                lVar3 = *(long *)(lVar3 + 0x10);
                if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                  lVar3 = FUN_02d8720c();
                }
                if (*(int *)(lVar3 + 0xe4) == 0) {
                  thunk_FUN_02dabd98();
                }
                lVar3 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
                if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                  lVar3 = FUN_02d8720c();
                }
                if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d4dee8();
                }
                (**(code **)(*plVar2 + 0x2b8))
                          (plVar2,uVar4,**(undefined8 **)(lVar3 + 0xb8),
                           *(undefined8 *)(*plVar2 + 0x2c0));
                uVar4 = FUN_04f9d780(0);
                if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d4dee8();
                }
                uVar10 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
                FUN_050ec388(*(undefined8 *)PTR_DAT_0665ec40,uVar4,uVar10,0);
                FUN_050bff28();
              }
            }
            goto joined_r0x050c2d88;
          }
          if (plVar6 != (long *)0x0) {
            lVar3 = *plVar6;
            uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
            if (uVar5 != 0) {
              piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_066479a8) {
                  puVar8 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
                  goto ExitGames_Client_Photon_DeserializeMethod__Invoke;
                }
                uVar5 = uVar5 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar5 != 0);
            }
            puVar8 = (undefined8 *)FUN_02d87540(plVar6,*(long *)PTR_DAT_066479a8,0);
ExitGames_Client_Photon_DeserializeMethod__Invoke:
            (*(code *)*puVar8)(plVar6,puVar8[1]);
          }
        }
      }
    }
LAB_050c2908:
    do {
      uVar5 = FUN_049c7970(&stack0x00000030,*unaff_x29);
      if ((uVar5 & 1) == 0) {
        FUN_049c7964(in_stack_00000018,*unaff_x26);
        if (in_stack_00000010 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee0(in_stack_00000010);
        }
        return;
      }
      unaff_x22 = FUN_049c7a54(&stack0x00000030,*unaff_x25);
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      if (((*(int *)(unaff_x22 + 0x10) == 2) && (*(char *)(unaff_x22 + 0x34) != '\0')) &&
         (0 < *(int *)(unaff_x22 + 0x30))) {
        unaff_w24 = 0;
      }
      else {
        lVar3 = *unaff_x27;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar3 = *unaff_x27;
        }
        puVar8 = *(undefined8 **)(lVar3 + 0xb8);
        if (puVar8[1] == 0) {
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
            puVar8 = *(undefined8 **)(*unaff_x27 + 0xb8);
          }
          uVar10 = *puVar8;
          uVar4 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665eb28);
          FUN_04c523a8(uVar4,uVar10,*(undefined8 *)PTR_DAT_0665ec20,0);
          puVar8 = (undefined8 *)(*(long *)(*unaff_x27 + 0xb8) + 8);
          *puVar8 = uVar4;
          thunk_FUN_02dc1ef0(puVar8,uVar4);
        }
        uVar5 = FUN_031cd5e8();
        if ((uVar5 & 1) == 0) goto LAB_050c2908;
        unaff_w24 = 1;
      }
      unaff_x23 = (long *)(unaff_x22 + 0x40);
      lVar3 = *unaff_x23;
      if (lVar3 == 0) {
        plVar2 = *(long **)(unaff_x20 + 0x78);
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        uVar4 = (**(code **)(*plVar2 + 0x238))(plVar2,*(undefined8 *)(*plVar2 + 0x240));
        uVar5 = FUN_050d1b30(uVar4,0);
        if ((uVar5 & 1) != 0) goto LAB_050c2908;
        lVar3 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665ec10);
        FUN_05140450(lVar3,0);
        *unaff_x23 = lVar3;
        thunk_FUN_02dc1ef0(unaff_x23,lVar3);
        lVar3 = *unaff_x23;
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
      }
      FUN_050c4a14(lVar3,*(undefined8 *)(unaff_x20 + 0x78),0);
      if (*unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      iVar1 = FUN_050b9144();
    } while (iVar1 != 0);
    param_1 = *(long **)(unaff_x20 + 0x78);
  } while( true );
}


