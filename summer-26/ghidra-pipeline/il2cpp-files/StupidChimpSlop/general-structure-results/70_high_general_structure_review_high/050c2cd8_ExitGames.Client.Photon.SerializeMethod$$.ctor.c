/*
FUNCTION_NAME: ExitGames.Client.Photon.SerializeMethod$$.ctor
ENTRY_POINT: 050c2cd8
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_18;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x050c3050) */

void ExitGames_Client_Photon_SerializeMethod___ctor
               (undefined8 param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
code_r0x050c2cd8:
  FUN_031d8420(param_1,param_2,param_3);
  FUN_050bff28();
LAB_050c2cec:
  plVar9 = *(long **)(unaff_x22 + 0x38);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  lVar6 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0665ec08) {
        puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
        goto LAB_050c2d4c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_02d87540(plVar9,*(long *)PTR_DAT_0665ec08,2);
LAB_050c2d4c:
  (*(code *)*puVar5)(plVar9,unaff_x21,puVar5[1]);
LAB_050c2908:
  uVar7 = FUN_049c7970(&stack0x00000030,*unaff_x29);
  if ((uVar7 & 1) == 0) {
    FUN_049c7964(in_stack_00000018,*unaff_x26);
    if (in_stack_00000010 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee0(in_stack_00000010);
    }
    return;
  }
  unaff_x22 = FUN_049c7a54(&stack0x00000030,*unaff_x28);
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  if (((*(int *)(unaff_x22 + 0x10) != 2) || (*(char *)(unaff_x22 + 0x34) == '\0')) ||
     (*(int *)(unaff_x22 + 0x30) < 1)) goto LAB_050c2954;
  bVar1 = false;
  goto ExitGames_Client_Photon_EventData___ctor;
LAB_050c2954:
  lVar6 = *unaff_x27;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
    lVar6 = *unaff_x27;
  }
  puVar5 = *(undefined8 **)(lVar6 + 0xb8);
  if (puVar5[1] == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      puVar5 = *(undefined8 **)(*unaff_x27 + 0xb8);
    }
    uVar10 = *puVar5;
    uVar4 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665eb28);
    FUN_04c523a8(uVar4,uVar10,*(undefined8 *)PTR_DAT_0665ec20,0);
    puVar5 = (undefined8 *)(*(long *)(*unaff_x27 + 0xb8) + 8);
    *puVar5 = uVar4;
    thunk_FUN_02dc1ef0(puVar5,uVar4);
  }
  uVar7 = FUN_031cd5e8();
  if ((uVar7 & 1) == 0) goto LAB_050c2908;
  bVar1 = true;
ExitGames_Client_Photon_EventData___ctor:
  plVar9 = (long *)(unaff_x22 + 0x40);
  lVar6 = *plVar9;
  if (lVar6 == 0) {
    plVar3 = *(long **)(unaff_x20 + 0x78);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    uVar4 = (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240));
    uVar7 = FUN_050d1b30(uVar4,0);
    if ((uVar7 & 1) != 0) goto LAB_050c2908;
    lVar6 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665ec10);
    FUN_05140450(lVar6,0);
    *plVar9 = lVar6;
    thunk_FUN_02dc1ef0(plVar9,lVar6);
    lVar6 = *plVar9;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
  }
  FUN_050c4a14(lVar6,*(undefined8 *)(unaff_x20 + 0x78),0);
  if (*plVar9 == 0) {
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
  if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  unaff_x21 = (long *)FUN_0514038c(*plVar9,0);
  *plVar9 = 0;
  thunk_FUN_02dc1ef0(plVar9,0);
  if (bVar1) {
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
      uVar10 = *puVar5;
      uVar4 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665eb28);
      FUN_04c523a8(uVar4,uVar10,*(undefined8 *)PTR_DAT_0665ec30,0);
      puVar5 = (undefined8 *)(*(long *)(*unaff_x27 + 0xb8) + 0x18);
      *puVar5 = uVar4;
      thunk_FUN_02dc1ef0(puVar5,uVar4);
    }
    uVar7 = FUN_031cd5e8();
    if ((uVar7 & 1) != 0) {
      if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar6 = *unaff_x19;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0665ea30) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_050c2d6c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_02d87540();
LAB_050c2d6c:
      plVar9 = (long *)(*(code *)*puVar5)();
joined_r0x050c2d88:
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_066479b0) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto ExitGames_Client_Photon_SerializeMethod__Invoke;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_02d87540(plVar9,*(long *)PTR_DAT_066479b0,0);
ExitGames_Client_Photon_SerializeMethod__Invoke:
      uVar7 = (*(code *)*puVar5)(plVar9,puVar5[1]);
      if ((uVar7 & 1) != 0) {
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        lVar6 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0665ea40) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_050c2e4c;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_02d87540(plVar9,*(long *)PTR_DAT_0665ea40,0);
LAB_050c2e4c:
        lVar6 = (*(code *)*puVar5)(plVar9,puVar5[1]);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        lVar6 = *(long *)(lVar6 + 0xa8);
        if (lVar6 != 0) {
          if (*(int *)(*(long *)PTR_DAT_0664abf0 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar4 = FUN_0512a8f8(0);
          uVar7 = FUN_0319a124(lVar6,unaff_x21,uVar4,*(undefined8 *)PTR_DAT_0665ebd8);
          if ((uVar7 & 1) == 0) {
            if (*(int *)(*(long *)PTR_DAT_06649f98 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            uVar4 = FUN_04f9d780(0);
            plVar3 = (long *)thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_06659b70);
            FUN_04fd4da0(plVar3,uVar4,0);
            uVar4 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665d860);
            FUN_050b6dd4(uVar4,plVar3,0);
            lVar11 = *(long *)PTR_DAT_0665ebd0;
            lVar6 = *(long *)(lVar11 + 0x38);
            if (lVar6 == 0) {
              FUN_02d87268(lVar11);
              lVar6 = *(long *)(lVar11 + 0x38);
            }
            lVar6 = *(long *)(lVar6 + 0x10);
            if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_02d8720c();
            }
            if (*(int *)(lVar6 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            lVar6 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
            if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_02d8720c();
            }
            if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            (**(code **)(*unaff_x21 + 0x2b8))
                      (unaff_x21,uVar4,**(undefined8 **)(lVar6 + 0xb8),
                       *(undefined8 *)(*unaff_x21 + 0x2c0));
            uVar4 = FUN_04f9d780(0);
            if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            uVar10 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
            FUN_050ec388(*(undefined8 *)PTR_DAT_0665ec40,uVar4,uVar10,0);
            FUN_050bff28();
          }
        }
        goto joined_r0x050c2d88;
      }
      if (plVar9 != (long *)0x0) {
        lVar6 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_066479a8) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto ExitGames_Client_Photon_DeserializeMethod__Invoke;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_02d87540(plVar9,*(long *)PTR_DAT_066479a8,0);
ExitGames_Client_Photon_DeserializeMethod__Invoke:
        (*(code *)*puVar5)(plVar9,puVar5[1]);
      }
    }
    goto LAB_050c2908;
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  if (*(int *)(*(long *)PTR_DAT_0664abf0 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar10 = FUN_0512a8f8(0);
  uVar7 = FUN_031d1c70(uVar4,unaff_x21,uVar10,*(undefined8 *)PTR_DAT_0665ebe0);
  if ((uVar7 & 1) != 0) goto code_r0x050c2bd8;
  goto LAB_050c2cec;
code_r0x050c2bd8:
  if (*(int *)(*(long *)PTR_DAT_06649f98 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar4 = FUN_04f9d780(0);
  uVar10 = thunk_FUN_02d8a270(*(undefined8 *)(PTR_DAT_066462a0 + 0x48));
  FUN_050ec388(*(undefined8 *)PTR_DAT_0665ec48,uVar4,uVar10,0);
  lVar6 = *unaff_x27;
  param_1 = *(undefined8 *)(unaff_x22 + 0x18);
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
    lVar6 = *unaff_x27;
  }
  puVar5 = *(undefined8 **)(lVar6 + 0xb8);
  param_2 = puVar5[2];
  if (param_2 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      puVar5 = *(undefined8 **)(*unaff_x27 + 0xb8);
    }
    uVar4 = *puVar5;
    param_2 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665eb28);
    FUN_04c523a8(param_2,uVar4,*(undefined8 *)PTR_DAT_0665ec28,0);
    plVar9 = (long *)(*(long *)(*unaff_x27 + 0xb8) + 0x10);
    *plVar9 = param_2;
    unaff_x26 = (undefined8 *)PTR_DAT_0665ebf0;
    thunk_FUN_02dc1ef0(plVar9,param_2);
  }
  param_3 = *(undefined8 *)PTR_DAT_0665ebe8;
  goto code_r0x050c2cd8;
}


