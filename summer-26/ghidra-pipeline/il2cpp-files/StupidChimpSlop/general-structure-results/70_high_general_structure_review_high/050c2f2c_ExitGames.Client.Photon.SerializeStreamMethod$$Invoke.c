/*
FUNCTION_NAME: ExitGames.Client.Photon.SerializeStreamMethod$$Invoke
ENTRY_POINT: 050c2f2c
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_17;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x050c3050) */

void ExitGames_Client_Photon_SerializeStreamMethod__Invoke(long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *plVar11;
  undefined8 unaff_x23;
  long unaff_x24;
  long lVar12;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x29;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  long *in_stack_00000028;
  
  do {
    if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
      param_1 = FUN_02d8720c();
    }
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    lVar6 = *(long *)(*(long *)(unaff_x24 + 0x38) + 0x10);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02d8720c();
    }
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    (**(code **)(*unaff_x21 + 0x2b8))
              (unaff_x21,unaff_x23,**(undefined8 **)(lVar6 + 0xb8),
               *(undefined8 *)(*unaff_x21 + 0x2c0));
    uVar7 = FUN_04f9d780(0);
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    uVar8 = (**(code **)(*unaff_x22 + 0x168))(unaff_x22,*(undefined8 *)(*unaff_x22 + 0x170));
    FUN_050ec388(*(undefined8 *)PTR_DAT_0665ec40,uVar7,uVar8,0);
    FUN_050bff28();
joined_r0x050c2fd0:
    do {
      do {
        if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        lVar6 = *in_stack_00000028;
        uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_066479b0) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
              goto ExitGames_Client_Photon_SerializeMethod__Invoke;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_02d87540(in_stack_00000028,*(long *)PTR_DAT_066479b0,0);
ExitGames_Client_Photon_SerializeMethod__Invoke:
        uVar9 = (*(code *)*puVar5)(in_stack_00000028,puVar5[1]);
        if ((uVar9 & 1) == 0) {
          if (in_stack_00000028 != (long *)0x0) {
            lVar6 = *in_stack_00000028;
            uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_066479a8) {
                  puVar5 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
                  goto ExitGames_Client_Photon_DeserializeMethod__Invoke;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_02d87540(in_stack_00000028,*(long *)PTR_DAT_066479a8,0);
ExitGames_Client_Photon_DeserializeMethod__Invoke:
            (*(code *)*puVar5)(in_stack_00000028,puVar5[1]);
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
            lVar6 = FUN_049c7a54(&stack0x00000030,*unaff_x25);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            if (((*(int *)(lVar6 + 0x10) == 2) && (*(char *)(lVar6 + 0x34) != '\0')) &&
               (0 < *(int *)(lVar6 + 0x30))) {
              bVar1 = false;
            }
            else {
              lVar3 = *unaff_x27;
              if (*(int *)(lVar3 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
                lVar3 = *unaff_x27;
              }
              puVar5 = *(undefined8 **)(lVar3 + 0xb8);
              if (puVar5[1] == 0) {
                if (*(int *)(lVar3 + 0xe4) == 0) {
                  thunk_FUN_02dabd98();
                  puVar5 = *(undefined8 **)(*unaff_x27 + 0xb8);
                }
                uVar8 = *puVar5;
                uVar7 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665eb28);
                FUN_04c523a8(uVar7,uVar8,*(undefined8 *)PTR_DAT_0665ec20,0);
                puVar5 = (undefined8 *)(*(long *)(*unaff_x27 + 0xb8) + 8);
                *puVar5 = uVar7;
                thunk_FUN_02dc1ef0(puVar5,uVar7);
              }
              uVar9 = FUN_031cd5e8();
              if ((uVar9 & 1) == 0) goto LAB_050c2908;
              bVar1 = true;
            }
            plVar11 = (long *)(lVar6 + 0x40);
            lVar3 = *plVar11;
            if (lVar3 == 0) {
              plVar4 = *(long **)(unaff_x20 + 0x78);
              if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d4dee8();
              }
              uVar7 = (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
              uVar9 = FUN_050d1b30(uVar7,0);
              if ((uVar9 & 1) != 0) goto LAB_050c2908;
              lVar3 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665ec10);
              FUN_05140450(lVar3,0);
              *plVar11 = lVar3;
              thunk_FUN_02dc1ef0(plVar11,lVar3);
              lVar3 = *plVar11;
              if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d4dee8();
              }
            }
            FUN_050c4a14(lVar3,*(undefined8 *)(unaff_x20 + 0x78),0);
            if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            iVar2 = FUN_050b9144();
            if (iVar2 != 0) goto LAB_050c2908;
            plVar4 = *(long **)(unaff_x20 + 0x78);
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            iVar2 = (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
            if (iVar2 == 4) goto LAB_050c2908;
            if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            unaff_x21 = (long *)FUN_0514038c(*plVar11,0);
            *plVar11 = 0;
            thunk_FUN_02dc1ef0(plVar11,0);
            if (!bVar1) {
              uVar7 = *(undefined8 *)(lVar6 + 0x38);
              if (*(int *)(*(long *)PTR_DAT_0664abf0 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              uVar8 = FUN_0512a8f8(0);
              uVar9 = FUN_031d1c70(uVar7,unaff_x21,uVar8,*(undefined8 *)PTR_DAT_0665ebe0);
              if ((uVar9 & 1) != 0) {
                if (*(int *)(*(long *)PTR_DAT_06649f98 + 0xe4) == 0) {
                  thunk_FUN_02dabd98();
                }
                uVar7 = FUN_04f9d780(0);
                uVar8 = thunk_FUN_02d8a270(*(undefined8 *)(PTR_DAT_066462a0 + 0x48));
                FUN_050ec388(*(undefined8 *)PTR_DAT_0665ec48,uVar7,uVar8,0);
                lVar3 = *unaff_x27;
                uVar7 = *(undefined8 *)(lVar6 + 0x18);
                if (*(int *)(lVar3 + 0xe4) == 0) {
                  thunk_FUN_02dabd98();
                  lVar3 = *unaff_x27;
                }
                puVar5 = *(undefined8 **)(lVar3 + 0xb8);
                lVar12 = puVar5[2];
                if (lVar12 == 0) {
                  if (*(int *)(lVar3 + 0xe4) == 0) {
                    thunk_FUN_02dabd98();
                    puVar5 = *(undefined8 **)(*unaff_x27 + 0xb8);
                  }
                  uVar8 = *puVar5;
                  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665eb28);
                  FUN_04c523a8(lVar12,uVar8,*(undefined8 *)PTR_DAT_0665ec28,0);
                  plVar11 = (long *)(*(long *)(*unaff_x27 + 0xb8) + 0x10);
                  *plVar11 = lVar12;
                  unaff_x26 = (undefined8 *)PTR_DAT_0665ebf0;
                  thunk_FUN_02dc1ef0(plVar11,lVar12);
                }
                FUN_031d8420(uVar7,lVar12,*(undefined8 *)PTR_DAT_0665ebe8);
                FUN_050bff28();
              }
              plVar11 = *(long **)(lVar6 + 0x38);
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d4dee8();
              }
              lVar6 = *plVar11;
              uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0665ec08) {
                    puVar5 = (undefined8 *)(lVar6 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                    goto LAB_050c2d4c;
                  }
                  uVar9 = uVar9 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar9 != 0);
              }
              puVar5 = (undefined8 *)FUN_02d87540(plVar11,*(long *)PTR_DAT_0665ec08,2);
LAB_050c2d4c:
              (*(code *)*puVar5)(plVar11,unaff_x21,puVar5[1]);
              goto LAB_050c2908;
            }
            lVar6 = *unaff_x27;
            if (*(int *)(lVar6 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
              lVar6 = *unaff_x27;
            }
            puVar5 = *(undefined8 **)(lVar6 + 0xb8);
            if (puVar5[3] == 0) {
              if (*(int *)(lVar6 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
                puVar5 = *(undefined8 **)(*unaff_x27 + 0xb8);
              }
              uVar8 = *puVar5;
              uVar7 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665eb28);
              FUN_04c523a8(uVar7,uVar8,*(undefined8 *)PTR_DAT_0665ec30,0);
              puVar5 = (undefined8 *)(*(long *)(*unaff_x27 + 0xb8) + 0x18);
              *puVar5 = uVar7;
              thunk_FUN_02dc1ef0(puVar5,uVar7);
            }
            uVar9 = FUN_031cd5e8();
          } while ((uVar9 & 1) == 0);
          if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          lVar6 = *unaff_x19;
          uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0665ea30) {
                puVar5 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_050c2d6c;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar5 = (undefined8 *)FUN_02d87540();
LAB_050c2d6c:
          in_stack_00000028 = (long *)(*(code *)*puVar5)();
          goto joined_r0x050c2fd0;
        }
        if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        lVar6 = *in_stack_00000028;
        uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0665ea40) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_050c2e4c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_02d87540(in_stack_00000028,*(long *)PTR_DAT_0665ea40,0);
LAB_050c2e4c:
        lVar6 = (*(code *)*puVar5)(in_stack_00000028,puVar5[1]);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        lVar6 = *(long *)(lVar6 + 0xa8);
      } while (lVar6 == 0);
      if (*(int *)(*(long *)PTR_DAT_0664abf0 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar7 = FUN_0512a8f8(0);
      uVar9 = FUN_0319a124(lVar6,unaff_x21,uVar7,*(undefined8 *)PTR_DAT_0665ebd8);
    } while ((uVar9 & 1) != 0);
    if (*(int *)(*(long *)PTR_DAT_06649f98 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar7 = FUN_04f9d780(0);
    unaff_x22 = (long *)thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_06659b70);
    FUN_04fd4da0(unaff_x22,uVar7,0);
    unaff_x23 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665d860);
    FUN_050b6dd4(unaff_x23,unaff_x22,0);
    unaff_x24 = *(long *)PTR_DAT_0665ebd0;
    lVar6 = *(long *)(unaff_x24 + 0x38);
    if (lVar6 == 0) {
      FUN_02d87268(unaff_x24);
      lVar6 = *(long *)(unaff_x24 + 0x38);
    }
    param_1 = *(long *)(lVar6 + 0x10);
  } while( true );
}


