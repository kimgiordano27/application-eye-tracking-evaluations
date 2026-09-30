/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_base_t_as_vx_resp_sessiongroup_remove_session
ENTRY_POINT: 0817a754
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_11;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_8
*/


/* WARNING: Removing unreachable block (ram,0x0817ae04) */

long Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_base_t_as_vx_resp_sessiongroup_remove_session
               (long param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  
  puVar3 = PTR_DAT_08e7a2d0;
  puVar1 = PTR_DAT_08e7a2c8;
  if ((DAT_0942906e & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e69810);
    FUN_03c8f898(PTR_DAT_08e7a2d8);
    FUN_03c8f898(PTR_DAT_08e7a2d0);
    FUN_03c8f898(PTR_DAT_08e7a650);
    FUN_03c8f898(PTR_DAT_08e7a2c8);
    FUN_03c8f898(PTR_DAT_08f04e40);
    FUN_03c8f898(PTR_DAT_08f05540);
    FUN_03c8f898(PTR_DAT_08e6a288);
    FUN_03c8f898(PTR_DAT_08e82e00);
    FUN_03c8f898(PTR_DAT_08e82e08);
    FUN_03c8f898(PTR_DAT_08e6a290);
    FUN_03c8f898(PTR_DAT_08e6a428);
    FUN_03c8f898(PTR_DAT_08e6a488);
    FUN_03c8f898(PTR_DAT_08e69770);
    FUN_03c8f898(PTR_DAT_08e79190);
    FUN_03c8f898(PTR_DAT_08e92b90);
    FUN_03c8f898(PTR_DAT_08f05548);
    FUN_03c8f898(PTR_DAT_08ebfa98);
    FUN_03c8f898(PTR_DAT_08f05550);
    FUN_03c8f898(PTR_DAT_08e78878);
    FUN_03c8f898(PTR_DAT_08f05558);
    FUN_03c8f898(PTR_DAT_08f05560);
    FUN_03c8f898(PTR_DAT_08e78880);
    FUN_03c8f898(PTR_DAT_08f03748);
    FUN_03c8f898(PTR_DAT_08f05568);
    FUN_03c8f898(PTR_DAT_08f05570);
    FUN_03c8f898(PTR_DAT_08e82ed8);
    FUN_03c8f898(PTR_DAT_08e79048);
    DAT_0942906e = 1;
  }
  lVar6 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
  FUN_06a4d5c4(lVar6,*(undefined8 *)puVar3);
  puVar1 = PTR_DAT_08f05540;
  if (param_2 == (long *)0x0) {
LAB_0817adf8:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar10 = *param_2;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08f05540) {
        puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto 
        Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_base_t_as_vx_resp_sessiongroup_set_tx_session
        ;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)FUN_03cf1348(param_2,*(long *)PTR_DAT_08f05540,0);
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_base_t_as_vx_resp_sessiongroup_set_tx_session
  :
  puVar3 = PTR_DAT_08e7a2d8;
  uVar8 = (*(code *)*puVar7)(param_2,puVar7[1]);
  uVar11 = FUN_06f74e14(uVar8,0);
  if ((uVar11 & 1) == 0) {
    lVar10 = *param_2;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0817a9b0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_03cf1348(param_2,*(long *)puVar1,0);
LAB_0817a9b0:
    uVar8 = (*(code *)*puVar7)(param_2,puVar7[1]);
    uVar8 = FUN_06f683f8(*(undefined8 *)PTR_DAT_08e79048,uVar8,0);
    if (lVar6 == 0) goto LAB_0817adf8;
    FUN_06a4e380(lVar6,*(undefined8 *)PTR_DAT_08f05570,uVar8,*(undefined8 *)puVar3);
  }
  if (*(int *)(*(long *)PTR_DAT_08e69810 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar8 = FUN_0859d55c(0);
  puVar5 = PTR_DAT_08f05568;
  puVar4 = PTR_DAT_08f05550;
  puVar2 = PTR_DAT_08f04e40;
  puVar7 = (undefined8 *)PTR_DAT_08f03748;
  puVar1 = PTR_DAT_08e69770;
  if (lVar6 == 0) goto LAB_0817adf8;
  FUN_06a4e380(lVar6,*(undefined8 *)PTR_DAT_08f05548,uVar8,*(undefined8 *)puVar3);
  if (**(char **)(*(long *)puVar2 + 0xb8) != '\0') {
    puVar7 = (undefined8 *)puVar4;
  }
  FUN_06a4e380(lVar6,*(undefined8 *)puVar5,*puVar7,*(undefined8 *)puVar3);
  lVar10 = FUN_03c8f97c(*(undefined8 *)puVar1,1);
  puVar2 = PTR_DAT_08e78880;
  if (lVar10 == 0) goto LAB_0817adf8;
  if (*(int *)(lVar10 + 0x18) == 0) goto LAB_0817adfc;
  *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)PTR_DAT_08e78880;
  thunk_FUN_03d233cc();
  lVar9 = FUN_03c8f97c(*(undefined8 *)puVar1,2);
  if (lVar9 == 0) goto LAB_0817adf8;
  if (*(int *)(lVar9 + 0x18) == 0) {
LAB_0817adfc:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb38();
  }
  *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)puVar2;
  thunk_FUN_03d233cc((undefined8 *)(lVar9 + 0x20));
  puVar1 = PTR_DAT_08e79190;
  if (*(uint *)(lVar9 + 0x18) < 2) goto LAB_0817adfc;
  *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)PTR_DAT_08ebfa98;
  uVar8 = thunk_FUN_03d233cc();
  uVar8 = FUN_081717ec(uVar8,lVar9);
  uVar11 = FUN_06f74e14(uVar8,0);
  if ((uVar11 & 1) == 0) {
    uVar11 = FUN_06a4e380(lVar6,*(undefined8 *)PTR_DAT_08e92b90,uVar8,*(undefined8 *)puVar3);
  }
  uVar14 = *(undefined8 *)puVar1;
  uVar8 = FUN_081718c4(uVar11,lVar10);
  uVar11 = FUN_06f74e14(uVar8,0);
  if ((uVar11 & 1) != 0) {
    uVar11 = thunk_FUN_06f73d88(uVar14,*(undefined8 *)puVar1,0);
    if (((uVar11 & 1) == 0) &&
       (uVar11 = thunk_FUN_06f73d88(uVar14,*(undefined8 *)PTR_DAT_08e82ed8,0), (uVar11 & 1) == 0))
    goto LAB_0817abb8;
    uVar8 = *(undefined8 *)puVar2;
  }
  FUN_06a4e380(lVar6,*(undefined8 *)PTR_DAT_08e78878,uVar8,*(undefined8 *)puVar3);
LAB_0817abb8:
  uVar11 = FUN_06f74e14(*(undefined8 *)(param_1 + 0x20),0);
  if ((uVar11 & 1) == 0) {
    FUN_06a4e380(lVar6,*(undefined8 *)PTR_DAT_08f05558,*(undefined8 *)(param_1 + 0x20),
                 *(undefined8 *)puVar3);
  }
  uVar11 = FUN_06f74e14(*(undefined8 *)(param_1 + 0x28),0);
  if ((uVar11 & 1) == 0) {
    FUN_06a4e380(lVar6,*(undefined8 *)PTR_DAT_08f05560,*(undefined8 *)(param_1 + 0x28),
                 *(undefined8 *)puVar3);
  }
  if ((param_3 == 0) || (plVar13 = *(long **)(param_3 + 0x28), plVar13 == (long *)0x0)) {
    return lVar6;
  }
  lVar10 = *plVar13;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08e82e00) {
        puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_0817ac70;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)FUN_03cf1348(plVar13,*(long *)PTR_DAT_08e82e00,0);
LAB_0817ac70:
  plVar13 = (long *)(*(code *)*puVar7)(plVar13,puVar7[1]);
  puVar2 = PTR_DAT_08e82e08;
  puVar3 = PTR_DAT_08e7a650;
  puVar1 = PTR_DAT_08e6a290;
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  do {
    lVar10 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0817ace8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_03cf1348(plVar13,*(long *)puVar1,0);
LAB_0817ace8:
    uVar11 = (*(code *)*puVar7)(plVar13,puVar7[1]);
    if ((uVar11 & 1) == 0) break;
    lVar10 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0817ad44;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_03cf1348(plVar13,*(long *)puVar2,0);
LAB_0817ad44:
    auVar15 = (*(code *)*puVar7)(plVar13,puVar7[1]);
    FUN_06a4e36c(lVar6,auVar15._0_8_,auVar15._8_8_,*(undefined8 *)puVar3);
  } while( true );
  if (plVar13 == (long *)0x0) {
    return lVar6;
  }
  lVar10 = *plVar13;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08e6a288) {
        puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_0817adcc;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)FUN_03cf1348(plVar13,*(long *)PTR_DAT_08e6a288,0);
LAB_0817adcc:
  (*(code *)*puVar7)(plVar13,puVar7[1]);
  return lVar6;
}


