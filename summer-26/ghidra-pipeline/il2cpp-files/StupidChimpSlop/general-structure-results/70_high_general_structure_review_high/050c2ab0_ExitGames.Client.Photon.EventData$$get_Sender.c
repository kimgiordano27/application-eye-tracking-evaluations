/*
FUNCTION_NAME: ExitGames.Client.Photon.EventData$$get_Sender
ENTRY_POINT: 050c2ab0
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_18;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x050c3050) */

void ExitGames_Client_Photon_EventData__get_Sender(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 uVar9;
  uint unaff_w24;
  long lVar10;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x29;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    if ((unaff_w24 & 1) == 0) {
      uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
      if (*(int *)(*(long *)PTR_DAT_0664abf0 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar9 = FUN_0512a8f8(0);
      uVar4 = FUN_031d1c70(uVar3,unaff_x21,uVar9,*(undefined8 *)PTR_DAT_0665ebe0);
      if ((uVar4 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_06649f98 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar3 = FUN_04f9d780(0);
        uVar9 = thunk_FUN_02d8a270(*(undefined8 *)(PTR_DAT_066462a0 + 0x48));
        FUN_050ec388(*(undefined8 *)PTR_DAT_0665ec48,uVar3,uVar9,0);
        lVar2 = *unaff_x27;
        uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar2 = *unaff_x27;
        }
        puVar7 = *(undefined8 **)(lVar2 + 0xb8);
        lVar10 = puVar7[2];
        if (lVar10 == 0) {
          if (*(int *)(lVar2 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
            puVar7 = *(undefined8 **)(*unaff_x27 + 0xb8);
          }
          uVar9 = *puVar7;
          lVar10 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665eb28);
          FUN_04c523a8(lVar10,uVar9,*(undefined8 *)PTR_DAT_0665ec28,0);
          plVar5 = (long *)(*(long *)(*unaff_x27 + 0xb8) + 0x10);
          *plVar5 = lVar10;
          unaff_x26 = (undefined8 *)PTR_DAT_0665ebf0;
          thunk_FUN_02dc1ef0(plVar5,lVar10);
        }
        FUN_031d8420(uVar3,lVar10,*(undefined8 *)PTR_DAT_0665ebe8);
        FUN_050bff28();
      }
      plVar5 = *(long **)(unaff_x22 + 0x38);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar2 = *plVar5;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 != 0) {
        piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0665ec08) {
            puVar7 = (undefined8 *)(lVar2 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto LAB_050c2d4c;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar4 != 0);
      }
      puVar7 = (undefined8 *)FUN_02d87540(plVar5,*(long *)PTR_DAT_0665ec08,2);
LAB_050c2d4c:
      (*(code *)*puVar7)(plVar5,unaff_x21,puVar7[1]);
    }
    else {
      lVar2 = *unaff_x27;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar2 = *unaff_x27;
      }
      puVar7 = *(undefined8 **)(lVar2 + 0xb8);
      if (puVar7[3] == 0) {
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          puVar7 = *(undefined8 **)(*unaff_x27 + 0xb8);
        }
        uVar9 = *puVar7;
        uVar3 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665eb28);
        FUN_04c523a8(uVar3,uVar9,*(undefined8 *)PTR_DAT_0665ec30,0);
        puVar7 = (undefined8 *)(*(long *)(*unaff_x27 + 0xb8) + 0x18);
        *puVar7 = uVar3;
        thunk_FUN_02dc1ef0(puVar7,uVar3);
      }
      uVar4 = FUN_031cd5e8();
      if ((uVar4 & 1) != 0) {
        if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        lVar2 = *unaff_x19;
        uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar4 != 0) {
          piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0665ea30) {
              puVar7 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_050c2d6c;
            }
            uVar4 = uVar4 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar4 != 0);
        }
        puVar7 = (undefined8 *)FUN_02d87540();
LAB_050c2d6c:
        plVar5 = (long *)(*(code *)*puVar7)();
joined_r0x050c2d88:
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        lVar2 = *plVar5;
        uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar4 != 0) {
          piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_066479b0) {
              puVar7 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
              goto ExitGames_Client_Photon_SerializeMethod__Invoke;
            }
            uVar4 = uVar4 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar4 != 0);
        }
        puVar7 = (undefined8 *)FUN_02d87540(plVar5,*(long *)PTR_DAT_066479b0,0);
ExitGames_Client_Photon_SerializeMethod__Invoke:
        uVar4 = (*(code *)*puVar7)(plVar5,puVar7[1]);
        if ((uVar4 & 1) != 0) {
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          lVar2 = *plVar5;
          uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar4 != 0) {
            piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0665ea40) {
                puVar7 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_050c2e4c;
              }
              uVar4 = uVar4 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar4 != 0);
          }
          puVar7 = (undefined8 *)FUN_02d87540(plVar5,*(long *)PTR_DAT_0665ea40,0);
LAB_050c2e4c:
          lVar2 = (*(code *)*puVar7)(plVar5,puVar7[1]);
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          lVar2 = *(long *)(lVar2 + 0xa8);
          if (lVar2 != 0) {
            if (*(int *)(*(long *)PTR_DAT_0664abf0 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            uVar3 = FUN_0512a8f8(0);
            uVar4 = FUN_0319a124(lVar2,unaff_x21,uVar3,*(undefined8 *)PTR_DAT_0665ebd8);
            if ((uVar4 & 1) == 0) {
              if (*(int *)(*(long *)PTR_DAT_06649f98 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              uVar3 = FUN_04f9d780(0);
              plVar6 = (long *)thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_06659b70);
              FUN_04fd4da0(plVar6,uVar3,0);
              uVar3 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665d860);
              FUN_050b6dd4(uVar3,plVar6,0);
              lVar10 = *(long *)PTR_DAT_0665ebd0;
              lVar2 = *(long *)(lVar10 + 0x38);
              if (lVar2 == 0) {
                FUN_02d87268(lVar10);
                lVar2 = *(long *)(lVar10 + 0x38);
              }
              lVar2 = *(long *)(lVar2 + 0x10);
              if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
                lVar2 = FUN_02d8720c();
              }
              if (*(int *)(lVar2 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              lVar2 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
              if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
                lVar2 = FUN_02d8720c();
              }
              if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d4dee8();
              }
              (**(code **)(*unaff_x21 + 0x2b8))
                        (unaff_x21,uVar3,**(undefined8 **)(lVar2 + 0xb8),
                         *(undefined8 *)(*unaff_x21 + 0x2c0));
              uVar3 = FUN_04f9d780(0);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d4dee8();
              }
              uVar9 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
              FUN_050ec388(*(undefined8 *)PTR_DAT_0665ec40,uVar3,uVar9,0);
              FUN_050bff28();
            }
          }
          goto joined_r0x050c2d88;
        }
        if (plVar5 != (long *)0x0) {
          lVar2 = *plVar5;
          uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar4 != 0) {
            piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_066479a8) {
                puVar7 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
                goto ExitGames_Client_Photon_DeserializeMethod__Invoke;
              }
              uVar4 = uVar4 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar4 != 0);
          }
          puVar7 = (undefined8 *)FUN_02d87540(plVar5,*(long *)PTR_DAT_066479a8,0);
ExitGames_Client_Photon_DeserializeMethod__Invoke:
          (*(code *)*puVar7)(plVar5,puVar7[1]);
        }
      }
    }
LAB_050c2908:
    do {
      uVar4 = FUN_049c7970(&stack0x00000030,*unaff_x29);
      if ((uVar4 & 1) == 0) {
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
        lVar2 = *unaff_x27;
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar2 = *unaff_x27;
        }
        puVar7 = *(undefined8 **)(lVar2 + 0xb8);
        if (puVar7[1] == 0) {
          if (*(int *)(lVar2 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
            puVar7 = *(undefined8 **)(*unaff_x27 + 0xb8);
          }
          uVar9 = *puVar7;
          uVar3 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665eb28);
          FUN_04c523a8(uVar3,uVar9,*(undefined8 *)PTR_DAT_0665ec20,0);
          puVar7 = (undefined8 *)(*(long *)(*unaff_x27 + 0xb8) + 8);
          *puVar7 = uVar3;
          thunk_FUN_02dc1ef0(puVar7,uVar3);
        }
        uVar4 = FUN_031cd5e8();
        if ((uVar4 & 1) == 0) goto LAB_050c2908;
        unaff_w24 = 1;
      }
      plVar5 = (long *)(unaff_x22 + 0x40);
      lVar2 = *plVar5;
      if (lVar2 == 0) {
        plVar6 = *(long **)(unaff_x20 + 0x78);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        uVar3 = (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
        uVar4 = FUN_050d1b30(uVar3,0);
        if ((uVar4 & 1) != 0) goto LAB_050c2908;
        lVar2 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665ec10);
        FUN_05140450(lVar2,0);
        *plVar5 = lVar2;
        thunk_FUN_02dc1ef0(plVar5,lVar2);
        lVar2 = *plVar5;
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
      }
      FUN_050c4a14(lVar2,*(undefined8 *)(unaff_x20 + 0x78),0);
      if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      iVar1 = FUN_050b9144();
      if (iVar1 != 0) goto LAB_050c2908;
      plVar6 = *(long **)(unaff_x20 + 0x78);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      iVar1 = (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
    } while (iVar1 == 4);
    if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    unaff_x21 = (long *)FUN_0514038c(*plVar5,0);
    *plVar5 = 0;
    thunk_FUN_02dc1ef0(plVar5,0);
  } while( true );
}


