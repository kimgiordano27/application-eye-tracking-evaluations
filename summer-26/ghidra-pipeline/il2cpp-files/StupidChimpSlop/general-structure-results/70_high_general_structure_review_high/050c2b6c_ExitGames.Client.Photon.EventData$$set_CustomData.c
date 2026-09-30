/*
FUNCTION_NAME: ExitGames.Client.Photon.EventData$$set_CustomData
ENTRY_POINT: 050c2b6c
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

void ExitGames_Client_Photon_EventData__set_CustomData(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong in_x9;
  ulong uVar9;
  int *in_x10;
  int *piVar10;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long lVar11;
  undefined8 *unaff_x25;
  long lVar12;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x29;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    do {
      if (*(long *)(in_x10 + -2) == param_3) {
        puVar3 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
        goto LAB_050c2d6c;
      }
      in_x9 = in_x9 - 1;
      in_x10 = in_x10 + 4;
    } while (in_x9 != 0);
    do {
      puVar3 = (undefined8 *)FUN_02d87540();
LAB_050c2d6c:
      plVar4 = (long *)(*(code *)*puVar3)();
joined_r0x050c2d88:
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar8 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_066479b0) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto ExitGames_Client_Photon_SerializeMethod__Invoke;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_02d87540(plVar4,*(long *)PTR_DAT_066479b0,0);
ExitGames_Client_Photon_SerializeMethod__Invoke:
      uVar9 = (*(code *)*puVar3)(plVar4,puVar3[1]);
      if ((uVar9 & 1) != 0) {
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        lVar8 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0665ea40) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_050c2e4c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)FUN_02d87540(plVar4,*(long *)PTR_DAT_0665ea40,0);
LAB_050c2e4c:
        lVar8 = (*(code *)*puVar3)(plVar4,puVar3[1]);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        lVar8 = *(long *)(lVar8 + 0xa8);
        if (lVar8 != 0) {
          if (*(int *)(*(long *)PTR_DAT_0664abf0 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar5 = FUN_0512a8f8(0);
          uVar9 = FUN_0319a124(lVar8,unaff_x21,uVar5,*(undefined8 *)PTR_DAT_0665ebd8);
          if ((uVar9 & 1) == 0) {
            if (*(int *)(*(long *)PTR_DAT_06649f98 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            uVar5 = FUN_04f9d780(0);
            plVar6 = (long *)thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_06659b70);
            FUN_04fd4da0(plVar6,uVar5,0);
            uVar5 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665d860);
            FUN_050b6dd4(uVar5,plVar6,0);
            lVar11 = *(long *)PTR_DAT_0665ebd0;
            lVar8 = *(long *)(lVar11 + 0x38);
            if (lVar8 == 0) {
              FUN_02d87268(lVar11);
              lVar8 = *(long *)(lVar11 + 0x38);
            }
            lVar8 = *(long *)(lVar8 + 0x10);
            if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_02d8720c();
            }
            if (*(int *)(lVar8 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            lVar8 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
            if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_02d8720c();
            }
            if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            (**(code **)(*unaff_x21 + 0x2b8))
                      (unaff_x21,uVar5,**(undefined8 **)(lVar8 + 0xb8),
                       *(undefined8 *)(*unaff_x21 + 0x2c0));
            uVar5 = FUN_04f9d780(0);
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            uVar7 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
            FUN_050ec388(*(undefined8 *)PTR_DAT_0665ec40,uVar5,uVar7,0);
            FUN_050bff28();
          }
        }
        goto joined_r0x050c2d88;
      }
      if (plVar4 != (long *)0x0) {
        lVar8 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_066479a8) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto ExitGames_Client_Photon_DeserializeMethod__Invoke;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)FUN_02d87540(plVar4,*(long *)PTR_DAT_066479a8,0);
ExitGames_Client_Photon_DeserializeMethod__Invoke:
        (*(code *)*puVar3)(plVar4,puVar3[1]);
      }
LAB_050c2908:
      do {
        uVar9 = FUN_049c7970(&stack0x00000030,*unaff_x29);
        if ((uVar9 & 1) == 0) {
          FUN_049c7964(in_stack_00000018,*unaff_x26);
          if (in_stack_00000010 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee0(in_stack_00000010);
          }
          return;
        }
        lVar8 = FUN_049c7a54(&stack0x00000030,*unaff_x25);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        if (((*(int *)(lVar8 + 0x10) == 2) && (*(char *)(lVar8 + 0x34) != '\0')) &&
           (0 < *(int *)(lVar8 + 0x30))) {
          bVar1 = false;
        }
        else {
          lVar11 = *unaff_x27;
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
            lVar11 = *unaff_x27;
          }
          puVar3 = *(undefined8 **)(lVar11 + 0xb8);
          if (puVar3[1] == 0) {
            if (*(int *)(lVar11 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
              puVar3 = *(undefined8 **)(*unaff_x27 + 0xb8);
            }
            uVar7 = *puVar3;
            uVar5 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665eb28);
            FUN_04c523a8(uVar5,uVar7,*(undefined8 *)PTR_DAT_0665ec20,0);
            puVar3 = (undefined8 *)(*(long *)(*unaff_x27 + 0xb8) + 8);
            *puVar3 = uVar5;
            thunk_FUN_02dc1ef0(puVar3,uVar5);
          }
          uVar9 = FUN_031cd5e8();
          if ((uVar9 & 1) == 0) goto LAB_050c2908;
          bVar1 = true;
        }
        plVar4 = (long *)(lVar8 + 0x40);
        lVar11 = *plVar4;
        if (lVar11 == 0) {
          plVar6 = *(long **)(unaff_x20 + 0x78);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          uVar5 = (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
          uVar9 = FUN_050d1b30(uVar5,0);
          if ((uVar9 & 1) != 0) goto LAB_050c2908;
          lVar11 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665ec10);
          FUN_05140450(lVar11,0);
          *plVar4 = lVar11;
          thunk_FUN_02dc1ef0(plVar4,lVar11);
          lVar11 = *plVar4;
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
        }
        FUN_050c4a14(lVar11,*(undefined8 *)(unaff_x20 + 0x78),0);
        if (*plVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        iVar2 = FUN_050b9144();
        if (iVar2 != 0) goto LAB_050c2908;
        plVar6 = *(long **)(unaff_x20 + 0x78);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        iVar2 = (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
        if (iVar2 == 4) goto LAB_050c2908;
        if (*plVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        unaff_x21 = (long *)FUN_0514038c(*plVar4,0);
        *plVar4 = 0;
        thunk_FUN_02dc1ef0(plVar4,0);
        if (!bVar1) {
          uVar5 = *(undefined8 *)(lVar8 + 0x38);
          if (*(int *)(*(long *)PTR_DAT_0664abf0 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar7 = FUN_0512a8f8(0);
          uVar9 = FUN_031d1c70(uVar5,unaff_x21,uVar7,*(undefined8 *)PTR_DAT_0665ebe0);
          if ((uVar9 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_06649f98 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            uVar5 = FUN_04f9d780(0);
            uVar7 = thunk_FUN_02d8a270(*(undefined8 *)(PTR_DAT_066462a0 + 0x48));
            FUN_050ec388(*(undefined8 *)PTR_DAT_0665ec48,uVar5,uVar7,0);
            lVar11 = *unaff_x27;
            uVar5 = *(undefined8 *)(lVar8 + 0x18);
            if (*(int *)(lVar11 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
              lVar11 = *unaff_x27;
            }
            puVar3 = *(undefined8 **)(lVar11 + 0xb8);
            lVar12 = puVar3[2];
            if (lVar12 == 0) {
              if (*(int *)(lVar11 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
                puVar3 = *(undefined8 **)(*unaff_x27 + 0xb8);
              }
              uVar7 = *puVar3;
              lVar12 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665eb28);
              FUN_04c523a8(lVar12,uVar7,*(undefined8 *)PTR_DAT_0665ec28,0);
              plVar4 = (long *)(*(long *)(*unaff_x27 + 0xb8) + 0x10);
              *plVar4 = lVar12;
              unaff_x26 = (undefined8 *)PTR_DAT_0665ebf0;
              thunk_FUN_02dc1ef0(plVar4,lVar12);
            }
            FUN_031d8420(uVar5,lVar12,*(undefined8 *)PTR_DAT_0665ebe8);
            FUN_050bff28();
          }
          plVar4 = *(long **)(lVar8 + 0x38);
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          lVar8 = *plVar4;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0665ec08) {
                puVar3 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                goto LAB_050c2d4c;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar3 = (undefined8 *)FUN_02d87540(plVar4,*(long *)PTR_DAT_0665ec08,2);
LAB_050c2d4c:
          (*(code *)*puVar3)(plVar4,unaff_x21,puVar3[1]);
          goto LAB_050c2908;
        }
        lVar8 = *unaff_x27;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar8 = *unaff_x27;
        }
        puVar3 = *(undefined8 **)(lVar8 + 0xb8);
        if (puVar3[3] == 0) {
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
            puVar3 = *(undefined8 **)(*unaff_x27 + 0xb8);
          }
          uVar7 = *puVar3;
          uVar5 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665eb28);
          FUN_04c523a8(uVar5,uVar7,*(undefined8 *)PTR_DAT_0665ec30,0);
          puVar3 = (undefined8 *)(*(long *)(*unaff_x27 + 0xb8) + 0x18);
          *puVar3 = uVar5;
          thunk_FUN_02dc1ef0(puVar3,uVar5);
        }
        uVar9 = FUN_031cd5e8();
      } while ((uVar9 & 1) == 0);
      if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      param_1 = *unaff_x19;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      param_3 = *(long *)PTR_DAT_0665ea30;
    } while (in_x9 == 0);
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  } while( true );
}


