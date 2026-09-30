/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_base_t_as_vx_resp_sessiongroup_set_tx_session
ENTRY_POINT: 0817a944
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0817ae04) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_base_t_as_vx_resp_sessiongroup_set_tx_session
               (undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long *plVar9;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 uVar10;
  
  uVar3 = (*(code *)*param_1)();
  uVar4 = FUN_06f74e14(uVar3,0);
  if ((uVar4 & 1) == 0) {
    lVar7 = *unaff_x22;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x23) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0817a9b0;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348();
LAB_0817a9b0:
    uVar3 = (*(code *)*puVar5)();
    FUN_06f683f8(*(undefined8 *)PTR_DAT_08e79048,uVar3,0);
    if (unaff_x19 == 0) goto LAB_0817adf8;
    FUN_06a4e380();
  }
  if (*(int *)(*(long *)PTR_DAT_08e69810 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  FUN_0859d55c(0);
  puVar1 = PTR_DAT_08e69770;
  if (unaff_x19 != 0) {
    FUN_06a4e380();
    FUN_06a4e380();
    lVar7 = FUN_03c8f97c(*(undefined8 *)puVar1,1);
    puVar2 = PTR_DAT_08e78880;
    if (lVar7 != 0) {
      if (*(int *)(lVar7 + 0x18) != 0) {
        *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)PTR_DAT_08e78880;
        thunk_FUN_03d233cc();
        lVar6 = FUN_03c8f97c(*(undefined8 *)puVar1,2);
        if (lVar6 == 0) goto LAB_0817adf8;
        if (*(int *)(lVar6 + 0x18) != 0) {
          *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar2;
          thunk_FUN_03d233cc((undefined8 *)(lVar6 + 0x20));
          puVar1 = PTR_DAT_08e79190;
          if (1 < *(uint *)(lVar6 + 0x18)) {
            *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)PTR_DAT_08ebfa98;
            uVar3 = thunk_FUN_03d233cc();
            uVar3 = FUN_081717ec(uVar3,lVar6);
            uVar4 = FUN_06f74e14(uVar3,0);
            if ((uVar4 & 1) == 0) {
              uVar4 = FUN_06a4e380();
            }
            uVar10 = *(undefined8 *)puVar1;
            uVar3 = FUN_081718c4(uVar4,lVar7);
            uVar4 = FUN_06f74e14(uVar3,0);
            if ((((uVar4 & 1) == 0) ||
                (uVar4 = thunk_FUN_06f73d88(uVar10,*(undefined8 *)puVar1,0), (uVar4 & 1) != 0)) ||
               (uVar4 = thunk_FUN_06f73d88(uVar10,*(undefined8 *)PTR_DAT_08e82ed8,0),
               (uVar4 & 1) != 0)) {
              FUN_06a4e380();
            }
            uVar4 = FUN_06f74e14(*(undefined8 *)(unaff_x21 + 0x20),0);
            if ((uVar4 & 1) == 0) {
              FUN_06a4e380();
            }
            uVar4 = FUN_06f74e14(*(undefined8 *)(unaff_x21 + 0x28),0);
            if ((uVar4 & 1) == 0) {
              FUN_06a4e380();
            }
            if (unaff_x20 == 0) {
              return;
            }
            plVar9 = *(long **)(unaff_x20 + 0x28);
            if (plVar9 == (long *)0x0) {
              return;
            }
            lVar7 = *plVar9;
            uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar4 != 0) {
              piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08e82e00) {
                  puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_0817ac70;
                }
                uVar4 = uVar4 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar4 != 0);
            }
            puVar5 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e82e00,0);
LAB_0817ac70:
            plVar9 = (long *)(*(code *)*puVar5)(plVar9,puVar5[1]);
            puVar2 = PTR_DAT_08e82e08;
            puVar1 = PTR_DAT_08e6a290;
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            do {
              lVar7 = *plVar9;
              uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar4 != 0) {
                piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                    puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
                    goto LAB_0817ace8;
                  }
                  uVar4 = uVar4 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar4 != 0);
              }
              puVar5 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)puVar1,0);
LAB_0817ace8:
              uVar4 = (*(code *)*puVar5)(plVar9,puVar5[1]);
              if ((uVar4 & 1) == 0) goto LAB_0817ad70;
              lVar7 = *plVar9;
              uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar4 != 0) {
                piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                    puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
                    goto LAB_0817ad44;
                  }
                  uVar4 = uVar4 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar4 != 0);
              }
              puVar5 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)puVar2,0);
LAB_0817ad44:
              (*(code *)*puVar5)(plVar9,puVar5[1]);
              FUN_06a4e36c();
            } while( true );
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
  }
LAB_0817adf8:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
LAB_0817ad70:
  if (plVar9 != (long *)0x0) {
    lVar7 = *plVar9;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08e6a288) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0817adcc;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e6a288,0);
LAB_0817adcc:
    (*(code *)*puVar5)(plVar9,puVar5[1]);
  }
  return;
}


