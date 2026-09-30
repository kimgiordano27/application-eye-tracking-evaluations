/*
FUNCTION_NAME: ExitGames.Client.Photon.EventData$$ToStringFull
ENTRY_POINT: 050c2c0c
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

void ExitGames_Client_Photon_EventData__ToStringFull(void)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined *in_x9;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 *unaff_x25;
  long lVar10;
  undefined8 *unaff_x26;
  undefined8 uVar11;
  long *unaff_x27;
  undefined8 *unaff_x29;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
code_r0x050c2c0c:
  uVar4 = thunk_FUN_02d8a270(*(undefined8 *)(in_x9 + 0x48));
  FUN_050ec388(*(undefined8 *)PTR_DAT_0665ec48,unaff_x23,uVar4,0);
  lVar5 = *unaff_x27;
  uVar4 = *(undefined8 *)(unaff_x22 + 0x18);
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
    lVar5 = *unaff_x27;
  }
  puVar7 = *(undefined8 **)(lVar5 + 0xb8);
  lVar10 = puVar7[2];
  if (lVar10 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      puVar7 = *(undefined8 **)(*unaff_x27 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar10 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665eb28);
    FUN_04c523a8(lVar10,uVar11,*(undefined8 *)PTR_DAT_0665ec28,0);
    plVar6 = (long *)(*(long *)(*unaff_x27 + 0xb8) + 0x10);
    *plVar6 = lVar10;
    unaff_x26 = (undefined8 *)PTR_DAT_0665ebf0;
    thunk_FUN_02dc1ef0(plVar6,lVar10);
  }
  FUN_031d8420(uVar4,lVar10,*(undefined8 *)PTR_DAT_0665ebe8);
  FUN_050bff28();
LAB_050c2cec:
  plVar6 = *(long **)(unaff_x22 + 0x38);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  lVar5 = *plVar6;
  uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0665ec08) {
        puVar7 = (undefined8 *)(lVar5 + (long)(*piVar9 + 2) * 0x10 + 0x138);
        goto LAB_050c2d4c;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar7 = (undefined8 *)FUN_02d87540(plVar6,*(long *)PTR_DAT_0665ec08,2);
LAB_050c2d4c:
  (*(code *)*puVar7)(plVar6,unaff_x21,puVar7[1]);
LAB_050c2908:
  uVar8 = FUN_049c7970(&stack0x00000030,*unaff_x29);
  if ((uVar8 & 1) == 0) {
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
  if (((*(int *)(unaff_x22 + 0x10) != 2) || (*(char *)(unaff_x22 + 0x34) == '\0')) ||
     (*(int *)(unaff_x22 + 0x30) < 1)) goto LAB_050c2954;
  bVar1 = false;
  goto ExitGames_Client_Photon_EventData___ctor;
LAB_050c2954:
  lVar5 = *unaff_x27;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
    lVar5 = *unaff_x27;
  }
  puVar7 = *(undefined8 **)(lVar5 + 0xb8);
  if (puVar7[1] == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      puVar7 = *(undefined8 **)(*unaff_x27 + 0xb8);
    }
    uVar11 = *puVar7;
    uVar4 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665eb28);
    FUN_04c523a8(uVar4,uVar11,*(undefined8 *)PTR_DAT_0665ec20,0);
    puVar7 = (undefined8 *)(*(long *)(*unaff_x27 + 0xb8) + 8);
    *puVar7 = uVar4;
    thunk_FUN_02dc1ef0(puVar7,uVar4);
  }
  uVar8 = FUN_031cd5e8();
  if ((uVar8 & 1) == 0) goto LAB_050c2908;
  bVar1 = true;
ExitGames_Client_Photon_EventData___ctor:
  plVar6 = (long *)(unaff_x22 + 0x40);
  lVar5 = *plVar6;
  if (lVar5 == 0) {
    plVar3 = *(long **)(unaff_x20 + 0x78);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    uVar4 = (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240));
    uVar8 = FUN_050d1b30(uVar4,0);
    if ((uVar8 & 1) != 0) goto LAB_050c2908;
    lVar5 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665ec10);
    FUN_05140450(lVar5,0);
    *plVar6 = lVar5;
    thunk_FUN_02dc1ef0(plVar6,lVar5);
    lVar5 = *plVar6;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
  }
  FUN_050c4a14(lVar5,*(undefined8 *)(unaff_x20 + 0x78),0);
  if (*plVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  iVar2 = FUN_050b9144();
  if (iVar2 != 0) goto LAB_050c2908;
  plVar3 = *(long **)(unaff_x20 + 0x78);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  iVar2 = (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240));
  if (iVar2 == 4) goto LAB_050c2908;
  if (*plVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  unaff_x21 = (long *)FUN_0514038c(*plVar6,0);
  *plVar6 = 0;
  thunk_FUN_02dc1ef0(plVar6,0);
  if (bVar1) {
    lVar5 = *unaff_x27;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar5 = *unaff_x27;
    }
    puVar7 = *(undefined8 **)(lVar5 + 0xb8);
    if (puVar7[3] == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        puVar7 = *(undefined8 **)(*unaff_x27 + 0xb8);
      }
      uVar11 = *puVar7;
      uVar4 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665eb28);
      FUN_04c523a8(uVar4,uVar11,*(undefined8 *)PTR_DAT_0665ec30,0);
      puVar7 = (undefined8 *)(*(long *)(*unaff_x27 + 0xb8) + 0x18);
      *puVar7 = uVar4;
      thunk_FUN_02dc1ef0(puVar7,uVar4);
    }
    uVar8 = FUN_031cd5e8();
    if ((uVar8 & 1) != 0) {
      if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar5 = *unaff_x19;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0665ea30) {
            puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_050c2d6c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_02d87540();
LAB_050c2d6c:
      plVar6 = (long *)(*(code *)*puVar7)();
joined_r0x050c2d88:
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar5 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_066479b0) {
            puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto ExitGames_Client_Photon_SerializeMethod__Invoke;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_02d87540(plVar6,*(long *)PTR_DAT_066479b0,0);
ExitGames_Client_Photon_SerializeMethod__Invoke:
      uVar8 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if ((uVar8 & 1) != 0) {
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        lVar5 = *plVar6;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0665ea40) {
              puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_050c2e4c;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)FUN_02d87540(plVar6,*(long *)PTR_DAT_0665ea40,0);
LAB_050c2e4c:
        lVar5 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        lVar5 = *(long *)(lVar5 + 0xa8);
        if (lVar5 != 0) {
          if (*(int *)(*(long *)PTR_DAT_0664abf0 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar4 = FUN_0512a8f8(0);
          uVar8 = FUN_0319a124(lVar5,unaff_x21,uVar4,*(undefined8 *)PTR_DAT_0665ebd8);
          if ((uVar8 & 1) == 0) {
            if (*(int *)(*(long *)PTR_DAT_06649f98 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            uVar4 = FUN_04f9d780(0);
            plVar3 = (long *)thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_06659b70);
            FUN_04fd4da0(plVar3,uVar4,0);
            uVar4 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665d860);
            FUN_050b6dd4(uVar4,plVar3,0);
            lVar10 = *(long *)PTR_DAT_0665ebd0;
            lVar5 = *(long *)(lVar10 + 0x38);
            if (lVar5 == 0) {
              FUN_02d87268(lVar10);
              lVar5 = *(long *)(lVar10 + 0x38);
            }
            lVar5 = *(long *)(lVar5 + 0x10);
            if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_02d8720c();
            }
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            lVar5 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
            if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_02d8720c();
            }
            if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            (**(code **)(*unaff_x21 + 0x2b8))
                      (unaff_x21,uVar4,**(undefined8 **)(lVar5 + 0xb8),
                       *(undefined8 *)(*unaff_x21 + 0x2c0));
            uVar4 = FUN_04f9d780(0);
            if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            uVar11 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
            FUN_050ec388(*(undefined8 *)PTR_DAT_0665ec40,uVar4,uVar11,0);
            FUN_050bff28();
          }
        }
        goto joined_r0x050c2d88;
      }
      if (plVar6 != (long *)0x0) {
        lVar5 = *plVar6;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_066479a8) {
              puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
              goto ExitGames_Client_Photon_DeserializeMethod__Invoke;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)FUN_02d87540(plVar6,*(long *)PTR_DAT_066479a8,0);
ExitGames_Client_Photon_DeserializeMethod__Invoke:
        (*(code *)*puVar7)(plVar6,puVar7[1]);
      }
    }
    goto LAB_050c2908;
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  if (*(int *)(*(long *)PTR_DAT_0664abf0 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar11 = FUN_0512a8f8(0);
  uVar8 = FUN_031d1c70(uVar4,unaff_x21,uVar11,*(undefined8 *)PTR_DAT_0665ebe0);
  if ((uVar8 & 1) != 0) goto code_r0x050c2bd8;
  goto LAB_050c2cec;
code_r0x050c2bd8:
  if (*(int *)(*(long *)PTR_DAT_06649f98 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  unaff_x23 = FUN_04f9d780(0);
  in_x9 = PTR_DAT_066462a0;
  goto code_r0x050c2c0c;
}


