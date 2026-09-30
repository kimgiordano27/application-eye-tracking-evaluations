/*
FUNCTION_NAME: ExitGames.Client.Photon.DeserializeMethod$$Invoke
ENTRY_POINT: 050c3040
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


void ExitGames_Client_Photon_DeserializeMethod__Invoke(undefined8 *param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x29;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
code_r0x050c3040:
  do {
    (*(code *)*param_1)(unaff_x22,param_1[1]);
    do {
      if (unaff_x21 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee0(unaff_x21);
      }
LAB_050c2908:
      do {
        uVar3 = FUN_049c7970(&stack0x00000030,*unaff_x29);
        if ((uVar3 & 1) == 0) {
          FUN_049c7964(in_stack_00000018,*unaff_x26);
          if (in_stack_00000010 == 0) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee0(in_stack_00000010);
        }
        lVar4 = FUN_049c7a54(&stack0x00000030,*unaff_x25);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        if (((*(int *)(lVar4 + 0x10) == 2) && (*(char *)(lVar4 + 0x34) != '\0')) &&
           (0 < *(int *)(lVar4 + 0x30))) {
          bVar1 = false;
        }
        else {
          lVar5 = *unaff_x27;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
            lVar5 = *unaff_x27;
          }
          puVar8 = *(undefined8 **)(lVar5 + 0xb8);
          if (puVar8[1] == 0) {
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
              puVar8 = *(undefined8 **)(*unaff_x27 + 0xb8);
            }
            uVar11 = *puVar8;
            uVar7 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665eb28);
            FUN_04c523a8(uVar7,uVar11,*(undefined8 *)PTR_DAT_0665ec20,0);
            puVar8 = (undefined8 *)(*(long *)(*unaff_x27 + 0xb8) + 8);
            *puVar8 = uVar7;
            thunk_FUN_02dc1ef0(puVar8,uVar7);
          }
          uVar3 = FUN_031cd5e8();
          if ((uVar3 & 1) == 0) goto LAB_050c2908;
          bVar1 = true;
        }
        plVar10 = (long *)(lVar4 + 0x40);
        lVar5 = *plVar10;
        if (lVar5 == 0) {
          plVar6 = *(long **)(unaff_x20 + 0x78);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          uVar7 = (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
          uVar3 = FUN_050d1b30(uVar7,0);
          if ((uVar3 & 1) != 0) goto LAB_050c2908;
          lVar5 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665ec10);
          FUN_05140450(lVar5,0);
          *plVar10 = lVar5;
          thunk_FUN_02dc1ef0(plVar10,lVar5);
          lVar5 = *plVar10;
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
        }
        FUN_050c4a14(lVar5,*(undefined8 *)(unaff_x20 + 0x78),0);
        if (*plVar10 == 0) {
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
        if (*plVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        plVar6 = (long *)FUN_0514038c(*plVar10,0);
        *plVar10 = 0;
        thunk_FUN_02dc1ef0(plVar10,0);
        if (!bVar1) {
          uVar7 = *(undefined8 *)(lVar4 + 0x38);
          if (*(int *)(*(long *)PTR_DAT_0664abf0 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar11 = FUN_0512a8f8(0);
          uVar3 = FUN_031d1c70(uVar7,plVar6,uVar11,*(undefined8 *)PTR_DAT_0665ebe0);
          if ((uVar3 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_06649f98 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            uVar7 = FUN_04f9d780(0);
            uVar11 = thunk_FUN_02d8a270(*(undefined8 *)(PTR_DAT_066462a0 + 0x48));
            FUN_050ec388(*(undefined8 *)PTR_DAT_0665ec48,uVar7,uVar11,0);
            lVar5 = *unaff_x27;
            uVar7 = *(undefined8 *)(lVar4 + 0x18);
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
              lVar5 = *unaff_x27;
            }
            puVar8 = *(undefined8 **)(lVar5 + 0xb8);
            lVar12 = puVar8[2];
            if (lVar12 == 0) {
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
                puVar8 = *(undefined8 **)(*unaff_x27 + 0xb8);
              }
              uVar11 = *puVar8;
              lVar12 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665eb28);
              FUN_04c523a8(lVar12,uVar11,*(undefined8 *)PTR_DAT_0665ec28,0);
              plVar10 = (long *)(*(long *)(*unaff_x27 + 0xb8) + 0x10);
              *plVar10 = lVar12;
              unaff_x26 = (undefined8 *)PTR_DAT_0665ebf0;
              thunk_FUN_02dc1ef0(plVar10,lVar12);
            }
            FUN_031d8420(uVar7,lVar12,*(undefined8 *)PTR_DAT_0665ebe8);
            FUN_050bff28();
          }
          plVar10 = *(long **)(lVar4 + 0x38);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          lVar4 = *plVar10;
          uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar3 != 0) {
            piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0665ec08) {
                puVar8 = (undefined8 *)(lVar4 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                goto LAB_050c2d4c;
              }
              uVar3 = uVar3 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar3 != 0);
          }
          puVar8 = (undefined8 *)FUN_02d87540(plVar10,*(long *)PTR_DAT_0665ec08,2);
LAB_050c2d4c:
          (*(code *)*puVar8)(plVar10,plVar6,puVar8[1]);
          goto LAB_050c2908;
        }
        lVar4 = *unaff_x27;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar4 = *unaff_x27;
        }
        puVar8 = *(undefined8 **)(lVar4 + 0xb8);
        if (puVar8[3] == 0) {
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
            puVar8 = *(undefined8 **)(*unaff_x27 + 0xb8);
          }
          uVar11 = *puVar8;
          uVar7 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665eb28);
          FUN_04c523a8(uVar7,uVar11,*(undefined8 *)PTR_DAT_0665ec30,0);
          puVar8 = (undefined8 *)(*(long *)(*unaff_x27 + 0xb8) + 0x18);
          *puVar8 = uVar7;
          thunk_FUN_02dc1ef0(puVar8,uVar7);
        }
        uVar3 = FUN_031cd5e8();
      } while ((uVar3 & 1) == 0);
      if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar4 = *unaff_x19;
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar3 != 0) {
        piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0665ea30) {
            puVar8 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_050c2d6c;
          }
          uVar3 = uVar3 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar3 != 0);
      }
      puVar8 = (undefined8 *)FUN_02d87540();
LAB_050c2d6c:
      unaff_x22 = (long *)(*(code *)*puVar8)();
joined_r0x050c2d88:
      if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar4 = *unaff_x22;
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar3 != 0) {
        piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_066479b0) {
            puVar8 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
            goto ExitGames_Client_Photon_SerializeMethod__Invoke;
          }
          uVar3 = uVar3 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar3 != 0);
      }
      puVar8 = (undefined8 *)FUN_02d87540(unaff_x22,*(long *)PTR_DAT_066479b0,0);
ExitGames_Client_Photon_SerializeMethod__Invoke:
      uVar3 = (*(code *)*puVar8)(unaff_x22,puVar8[1]);
      if ((uVar3 & 1) != 0) {
        if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        lVar4 = *unaff_x22;
        uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar3 != 0) {
          piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0665ea40) {
              puVar8 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_050c2e4c;
            }
            uVar3 = uVar3 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar3 != 0);
        }
        puVar8 = (undefined8 *)FUN_02d87540(unaff_x22,*(long *)PTR_DAT_0665ea40,0);
LAB_050c2e4c:
        lVar4 = (*(code *)*puVar8)(unaff_x22,puVar8[1]);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        lVar4 = *(long *)(lVar4 + 0xa8);
        if (lVar4 != 0) {
          if (*(int *)(*(long *)PTR_DAT_0664abf0 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar7 = FUN_0512a8f8(0);
          uVar3 = FUN_0319a124(lVar4,plVar6,uVar7,*(undefined8 *)PTR_DAT_0665ebd8);
          if ((uVar3 & 1) == 0) {
            if (*(int *)(*(long *)PTR_DAT_06649f98 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            uVar7 = FUN_04f9d780(0);
            plVar10 = (long *)thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_06659b70);
            FUN_04fd4da0(plVar10,uVar7,0);
            uVar7 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665d860);
            FUN_050b6dd4(uVar7,plVar10,0);
            lVar5 = *(long *)PTR_DAT_0665ebd0;
            lVar4 = *(long *)(lVar5 + 0x38);
            if (lVar4 == 0) {
              FUN_02d87268(lVar5);
              lVar4 = *(long *)(lVar5 + 0x38);
            }
            lVar4 = *(long *)(lVar4 + 0x10);
            if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_02d8720c();
            }
            if (*(int *)(lVar4 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            lVar4 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
            if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_02d8720c();
            }
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            (**(code **)(*plVar6 + 0x2b8))
                      (plVar6,uVar7,**(undefined8 **)(lVar4 + 0xb8),*(undefined8 *)(*plVar6 + 0x2c0)
                      );
            uVar7 = FUN_04f9d780(0);
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            uVar11 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
            FUN_050ec388(*(undefined8 *)PTR_DAT_0665ec40,uVar7,uVar11,0);
            FUN_050bff28();
          }
        }
        goto joined_r0x050c2d88;
      }
      unaff_x21 = 0;
    } while (unaff_x22 == (long *)0x0);
    lVar4 = *unaff_x22;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_066479a8) {
          param_1 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
          goto code_r0x050c3040;
        }
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
    param_1 = (undefined8 *)FUN_02d87540(unaff_x22,*(long *)PTR_DAT_066479a8,0);
  } while( true );
}


