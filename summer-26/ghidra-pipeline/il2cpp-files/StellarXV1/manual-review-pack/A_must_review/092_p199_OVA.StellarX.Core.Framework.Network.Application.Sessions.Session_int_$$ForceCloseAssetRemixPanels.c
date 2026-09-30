/*
FUNCTION_NAME: OVA.StellarX.Core.Framework.Network.Application.Sessions.Session<int>$$ForceCloseAssetRemixPanels
ENTRY_POINT: 063decc8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void OVA_StellarX_Core_Framework_Network_Application_Sessions_Session<int>__ForceCloseAssetRemixPanels
               (void)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *plVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined4 uStack0000000000000018;
  
  uStack0000000000000018 = 0;
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0768bcbc(3,0);
  }
  iVar1 = thunk_FUN_04086990();
  if (iVar1 != 1) {
    FUN_0769a8c0(7,0);
  }
  iVar1 = thunk_FUN_04086950();
  if (iVar1 != 0) {
    FUN_0769a8c0(6,0);
  }
  if ((int)unaff_w19 < 0) {
    FUN_0769b128(0);
  }
  iVar1 = FUN_0769286c();
  iVar2 = FUN_063de624();
  if ((int)(iVar1 - unaff_w19) < iVar2) {
    FUN_0769a8c0(5,0);
  }
  lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x38);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    FUN_040b1acc(lVar5);
  }
  lVar5 = thunk_FUN_040b4e00();
  if (lVar5 == 0) {
    plVar10 = (long *)thunk_FUN_0408781c();
    if (plVar10 != (long *)0x0) {
      plVar10 = (long *)(**(code **)(*plVar10 + 0x438))(plVar10,*(undefined8 *)(*plVar10 + 0x440));
      uVar11 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x70);
      if (*(int *)(*(long *)(PTR_DAT_09285980 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_040d65a8(*(long *)(PTR_DAT_09285980 + 0xe0));
      }
      plVar4 = (long *)FUN_0768890c(uVar11,0);
      if (plVar10 != (long *)0x0) {
        uVar8 = (**(code **)(*plVar10 + 0x2b8))(plVar10,plVar4,*(undefined8 *)(*plVar10 + 0x2c0));
        if ((uVar8 & 1) == 0) {
          if (plVar4 == (long *)0x0) goto LAB_063df0b4;
          uVar8 = (**(code **)(*plVar4 + 0x2b8))(plVar4,plVar10,*(undefined8 *)(*plVar4 + 0x2c0));
          if ((uVar8 & 1) == 0) {
            FUN_0769b160(0);
          }
        }
        plVar10 = (long *)thunk_FUN_040b4e00();
        if (plVar10 == (long *)0x0) {
          FUN_0769b160();
        }
        plVar4 = *(long **)(unaff_x21 + 0x10);
        if (plVar4 != (long *)0x0) {
          lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_040b1acc(lVar5);
          }
          lVar6 = *plVar4;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar5) {
                puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_063def68;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar3 = (undefined8 *)FUN_040b1e00(plVar4,lVar5,0);
LAB_063def68:
          iVar1 = (*(code *)*puVar3)(plVar4,puVar3[1]);
          if (0 < iVar1) {
            iVar2 = 0;
            do {
              plVar4 = *(long **)(unaff_x21 + 0x10);
              if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              lVar5 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
              if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                lVar5 = FUN_040b1acc(lVar5);
              }
              lVar6 = *plVar4;
              uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == lVar5) {
                    puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                    goto LAB_063deffc;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar3 = (undefined8 *)FUN_040b1e00(plVar4,lVar5,0);
LAB_063deffc:
              (*(code *)*puVar3)(plVar4,iVar2,puVar3[1]);
              lVar5 = thunk_FUN_040b4b34(*(undefined8 *)
                                          (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28));
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              if ((lVar5 != 0) &&
                 (lVar6 = thunk_FUN_040b4e00(lVar5,*(undefined8 *)(*plVar10 + 0x40)), lVar6 == 0)) {
                uVar11 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                FUN_040776f4(uVar11,0);
              }
              if (*(uint *)(plVar10 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              plVar10[(long)(int)unaff_w19 + 4] = lVar5;
              thunk_FUN_040ec700(plVar10 + (long)(int)unaff_w19 + 4,lVar5);
              iVar2 = iVar2 + 1;
              unaff_w19 = unaff_w19 + 1;
            } while (iVar2 != iVar1);
          }
          return;
        }
      }
    }
  }
  else {
    plVar10 = *(long **)(unaff_x21 + 0x10);
    if (plVar10 != (long *)0x0) {
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_040b1acc(lVar6);
      }
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) {
            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 5) * 0x10 + 0x138);
            goto LAB_063def30;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_040b1e00(plVar10,lVar6,5);
LAB_063def30:
                    /* WARNING: Could not recover jumptable at 0x063def58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar3)(plVar10,lVar5,unaff_w19,puVar3[1]);
      return;
    }
  }
LAB_063df0b4:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


