/*
FUNCTION_NAME: ExitGames.Client.Photon.SerializeStreamMethod$$.ctor
ENTRY_POINT: 050c2e20
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_19;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x050c3050) */

void ExitGames_Client_Photon_SerializeStreamMethod___ctor
               (long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined1 in_ZR;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong in_x9;
  int *piVar10;
  int *in_x10;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long lVar11;
  long lVar12;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x29;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  long *in_stack_00000028;
  
code_r0x050c2e20:
  if ((bool)in_ZR) {
    puVar4 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
    goto LAB_050c2e4c;
  }
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 == 0) {
LAB_050c2e30:
    puVar4 = (undefined8 *)FUN_02d87540(unaff_x22,param_3,0);
LAB_050c2e4c:
    lVar5 = (*(code *)*puVar4)(unaff_x22,puVar4[1]);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    lVar5 = *(long *)(lVar5 + 0xa8);
    unaff_x22 = in_stack_00000028;
    if (lVar5 != 0) {
      if (*(int *)(*(long *)PTR_DAT_0664abf0 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar6 = FUN_0512a8f8(0);
      uVar7 = FUN_0319a124(lVar5,unaff_x21,uVar6,*(undefined8 *)PTR_DAT_0665ebd8);
      if ((uVar7 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_06649f98 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar6 = FUN_04f9d780(0);
        plVar8 = (long *)thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_06659b70);
                    /* try { // try from 050c2ed8 to 051c2f83 has its CatchHandler @ 050c2ed8
                       catch() { ... } // from try @ 050c2ed8 with catch @ 050c2ed8
                       catch() { ... } // from try @ 050c31b8 with catch @ 050c2ed8
                       catch() { ... } // from try @ 050c32b0 with catch @ 050c2ed8
                       catch() { ... } // from try @ 050c331c with catch @ 050c2ed8
                       catch() { ... } // from try @ 050c339c with catch @ 050c2ed8 */
        FUN_04fd4da0(plVar8,uVar6,0);
        uVar6 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665d860);
        FUN_050b6dd4(uVar6,plVar8,0);
        lVar11 = *(long *)PTR_DAT_0665ebd0;
        lVar5 = *(long *)(lVar11 + 0x38);
        if (lVar5 == 0) {
          FUN_02d87268(lVar11);
          lVar5 = *(long *)(lVar11 + 0x38);
        }
        lVar5 = *(long *)(lVar5 + 0x10);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02d8720c();
        }
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        lVar5 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02d8720c();
        }
        if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        (**(code **)(*unaff_x21 + 0x2b8))
                  (unaff_x21,uVar6,**(undefined8 **)(lVar5 + 0xb8),
                   *(undefined8 *)(*unaff_x21 + 0x2c0));
        uVar6 = FUN_04f9d780(0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        uVar9 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        FUN_050ec388(*(undefined8 *)PTR_DAT_0665ec40,uVar6,uVar9,0);
        FUN_050bff28();
      }
    }
    do {
      if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar5 = *unaff_x22;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_066479b0) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
            goto ExitGames_Client_Photon_SerializeMethod__Invoke;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_02d87540(unaff_x22,*(long *)PTR_DAT_066479b0,0);
ExitGames_Client_Photon_SerializeMethod__Invoke:
      uVar7 = (*(code *)*puVar4)(unaff_x22,puVar4[1]);
      if ((uVar7 & 1) != 0) goto code_r0x050c2df0;
      if (unaff_x22 != (long *)0x0) {
        lVar5 = *unaff_x22;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_066479a8) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
              goto ExitGames_Client_Photon_DeserializeMethod__Invoke;
            }
            uVar7 = uVar7 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_02d87540(unaff_x22,*(long *)PTR_DAT_066479a8,0);
ExitGames_Client_Photon_DeserializeMethod__Invoke:
        (*(code *)*puVar4)(unaff_x22,puVar4[1]);
      }
LAB_050c2908:
      do {
        uVar7 = FUN_049c7970(&stack0x00000030,*unaff_x29);
        if ((uVar7 & 1) == 0) {
          FUN_049c7964(in_stack_00000018,*unaff_x26);
          if (in_stack_00000010 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee0(in_stack_00000010);
          }
          return;
        }
        lVar5 = FUN_049c7a54(&stack0x00000030,*unaff_x25);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        if (((*(int *)(lVar5 + 0x10) == 2) && (*(char *)(lVar5 + 0x34) != '\0')) &&
           (0 < *(int *)(lVar5 + 0x30))) {
          bVar1 = false;
        }
        else {
          lVar11 = *unaff_x27;
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
            lVar11 = *unaff_x27;
          }
          puVar4 = *(undefined8 **)(lVar11 + 0xb8);
          if (puVar4[1] == 0) {
            if (*(int *)(lVar11 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
              puVar4 = *(undefined8 **)(*unaff_x27 + 0xb8);
            }
            uVar9 = *puVar4;
            uVar6 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665eb28);
            FUN_04c523a8(uVar6,uVar9,*(undefined8 *)PTR_DAT_0665ec20,0);
            puVar4 = (undefined8 *)(*(long *)(*unaff_x27 + 0xb8) + 8);
            *puVar4 = uVar6;
            thunk_FUN_02dc1ef0(puVar4,uVar6);
          }
          uVar7 = FUN_031cd5e8();
          if ((uVar7 & 1) == 0) goto LAB_050c2908;
          bVar1 = true;
        }
        plVar8 = (long *)(lVar5 + 0x40);
        lVar11 = *plVar8;
        if (lVar11 == 0) {
          plVar3 = *(long **)(unaff_x20 + 0x78);
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          uVar6 = (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240));
          uVar7 = FUN_050d1b30(uVar6,0);
          if ((uVar7 & 1) != 0) goto LAB_050c2908;
          lVar11 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665ec10);
          FUN_05140450(lVar11,0);
          *plVar8 = lVar11;
          thunk_FUN_02dc1ef0(plVar8,lVar11);
          lVar11 = *plVar8;
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
        }
        FUN_050c4a14(lVar11,*(undefined8 *)(unaff_x20 + 0x78),0);
        if (*plVar8 == 0) {
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
        if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        unaff_x21 = (long *)FUN_0514038c(*plVar8,0);
        *plVar8 = 0;
        thunk_FUN_02dc1ef0(plVar8,0);
        if (!bVar1) {
          uVar6 = *(undefined8 *)(lVar5 + 0x38);
          if (*(int *)(*(long *)PTR_DAT_0664abf0 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar9 = FUN_0512a8f8(0);
          uVar7 = FUN_031d1c70(uVar6,unaff_x21,uVar9,*(undefined8 *)PTR_DAT_0665ebe0);
          if ((uVar7 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_06649f98 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            uVar6 = FUN_04f9d780(0);
            uVar9 = thunk_FUN_02d8a270(*(undefined8 *)(PTR_DAT_066462a0 + 0x48));
            FUN_050ec388(*(undefined8 *)PTR_DAT_0665ec48,uVar6,uVar9,0);
            lVar11 = *unaff_x27;
            uVar6 = *(undefined8 *)(lVar5 + 0x18);
            if (*(int *)(lVar11 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
              lVar11 = *unaff_x27;
            }
            puVar4 = *(undefined8 **)(lVar11 + 0xb8);
            lVar12 = puVar4[2];
            if (lVar12 == 0) {
              if (*(int *)(lVar11 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
                puVar4 = *(undefined8 **)(*unaff_x27 + 0xb8);
              }
              uVar9 = *puVar4;
              lVar12 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665eb28);
              FUN_04c523a8(lVar12,uVar9,*(undefined8 *)PTR_DAT_0665ec28,0);
              plVar8 = (long *)(*(long *)(*unaff_x27 + 0xb8) + 0x10);
              *plVar8 = lVar12;
              unaff_x26 = (undefined8 *)PTR_DAT_0665ebf0;
              thunk_FUN_02dc1ef0(plVar8,lVar12);
            }
            FUN_031d8420(uVar6,lVar12,*(undefined8 *)PTR_DAT_0665ebe8);
            FUN_050bff28();
          }
          plVar8 = *(long **)(lVar5 + 0x38);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          lVar5 = *plVar8;
          uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar7 != 0) {
            piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0665ec08) {
                puVar4 = (undefined8 *)(lVar5 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                goto LAB_050c2d4c;
              }
              uVar7 = uVar7 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined8 *)FUN_02d87540(plVar8,*(long *)PTR_DAT_0665ec08,2);
LAB_050c2d4c:
          (*(code *)*puVar4)(plVar8,unaff_x21,puVar4[1]);
          goto LAB_050c2908;
        }
        lVar5 = *unaff_x27;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar5 = *unaff_x27;
        }
        puVar4 = *(undefined8 **)(lVar5 + 0xb8);
        if (puVar4[3] == 0) {
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
            puVar4 = *(undefined8 **)(*unaff_x27 + 0xb8);
          }
          uVar9 = *puVar4;
          uVar6 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665eb28);
          FUN_04c523a8(uVar6,uVar9,*(undefined8 *)PTR_DAT_0665ec30,0);
          puVar4 = (undefined8 *)(*(long *)(*unaff_x27 + 0xb8) + 0x18);
          *puVar4 = uVar6;
          thunk_FUN_02dc1ef0(puVar4,uVar6);
        }
        uVar7 = FUN_031cd5e8();
      } while ((uVar7 & 1) == 0);
      if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar5 = *unaff_x19;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0665ea30) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_050c2d6c;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_02d87540();
LAB_050c2d6c:
      unaff_x22 = (long *)(*(code *)*puVar4)();
    } while( true );
  }
  goto LAB_050c2e18;
code_r0x050c2df0:
  if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  param_1 = *unaff_x22;
  in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  param_3 = *(long *)PTR_DAT_0665ea40;
  in_stack_00000028 = unaff_x22;
  if (in_x9 != 0) goto code_r0x050c2e10;
  goto LAB_050c2e30;
code_r0x050c2e10:
  in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_050c2e18:
  in_ZR = *(long *)(in_x10 + -2) == param_3;
  goto code_r0x050c2e20;
}


