/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_base_t_as_vx_resp_sessiongroup_set_tx_no_session
ENTRY_POINT: 0817aa3c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0817ae04) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_base_t_as_vx_resp_sessiongroup_set_tx_no_session
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int *piVar8;
  long unaff_x20;
  long *plVar9;
  long unaff_x21;
  undefined8 uVar10;
  
  puVar1 = PTR_DAT_08e69770;
  FUN_06a4e380();
  FUN_06a4e380();
  lVar3 = FUN_03c8f97c(*(undefined8 *)puVar1,1);
  puVar2 = PTR_DAT_08e78880;
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)PTR_DAT_08e78880;
      thunk_FUN_03d233cc();
      lVar4 = FUN_03c8f97c(*(undefined8 *)puVar1,2);
      if (lVar4 == 0) goto LAB_0817adf8;
      if (*(int *)(lVar4 + 0x18) != 0) {
        *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)puVar2;
        thunk_FUN_03d233cc((undefined8 *)(lVar4 + 0x20));
        puVar1 = PTR_DAT_08e79190;
        if (1 < *(uint *)(lVar4 + 0x18)) {
          *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)PTR_DAT_08ebfa98;
          uVar5 = thunk_FUN_03d233cc();
          uVar5 = FUN_081717ec(uVar5,lVar4);
          uVar6 = FUN_06f74e14(uVar5,0);
          if ((uVar6 & 1) == 0) {
            uVar6 = FUN_06a4e380();
          }
          uVar10 = *(undefined8 *)puVar1;
          uVar5 = FUN_081718c4(uVar6,lVar3);
          uVar6 = FUN_06f74e14(uVar5,0);
          if ((((uVar6 & 1) == 0) ||
              (uVar6 = thunk_FUN_06f73d88(uVar10,*(undefined8 *)puVar1,0), (uVar6 & 1) != 0)) ||
             (uVar6 = thunk_FUN_06f73d88(uVar10,*(undefined8 *)PTR_DAT_08e82ed8,0), (uVar6 & 1) != 0
             )) {
            FUN_06a4e380();
          }
          uVar6 = FUN_06f74e14(*(undefined8 *)(unaff_x21 + 0x20),0);
          if ((uVar6 & 1) == 0) {
            FUN_06a4e380();
          }
          uVar6 = FUN_06f74e14(*(undefined8 *)(unaff_x21 + 0x28),0);
          if ((uVar6 & 1) == 0) {
            FUN_06a4e380();
          }
          if (unaff_x20 == 0) {
            return;
          }
          plVar9 = *(long **)(unaff_x20 + 0x28);
          if (plVar9 == (long *)0x0) {
            return;
          }
          lVar3 = *plVar9;
          uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar6 != 0) {
            piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08e82e00) {
                puVar7 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_0817ac70;
              }
              uVar6 = uVar6 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar6 != 0);
          }
          puVar7 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e82e00,0);
LAB_0817ac70:
          plVar9 = (long *)(*(code *)*puVar7)(plVar9,puVar7[1]);
          puVar2 = PTR_DAT_08e82e08;
          puVar1 = PTR_DAT_08e6a290;
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          do {
            lVar3 = *plVar9;
            uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
            if (uVar6 != 0) {
              piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                  puVar7 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_0817ace8;
                }
                uVar6 = uVar6 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar6 != 0);
            }
            puVar7 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)puVar1,0);
LAB_0817ace8:
            uVar6 = (*(code *)*puVar7)(plVar9,puVar7[1]);
            if ((uVar6 & 1) == 0) goto LAB_0817ad70;
            lVar3 = *plVar9;
            uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
            if (uVar6 != 0) {
              piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                  puVar7 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_0817ad44;
                }
                uVar6 = uVar6 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar6 != 0);
            }
            puVar7 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)puVar2,0);
LAB_0817ad44:
            (*(code *)*puVar7)(plVar9,puVar7[1]);
            FUN_06a4e36c();
          } while( true );
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb38();
  }
LAB_0817adf8:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
LAB_0817ad70:
  if (plVar9 != (long *)0x0) {
    lVar3 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08e6a288) {
          puVar7 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0817adcc;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e6a288,0);
LAB_0817adcc:
    (*(code *)*puVar7)(plVar9,puVar7[1]);
  }
  return;
}


