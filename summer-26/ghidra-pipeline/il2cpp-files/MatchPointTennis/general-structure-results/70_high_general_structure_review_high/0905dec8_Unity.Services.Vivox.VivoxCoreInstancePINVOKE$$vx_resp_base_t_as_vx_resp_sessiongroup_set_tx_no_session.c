/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_base_t_as_vx_resp_sessiongroup_set_tx_no_session
ENTRY_POINT: 0905dec8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0905e3dc) */

long Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_base_t_as_vx_resp_sessiongroup_set_tx_no_session
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar12;
  long unaff_x21;
  long *unaff_x22;
  undefined1 auVar13 [16];
  
  FUN_07441bc0(param_1,*unaff_x19);
  puVar1 = PTR_DAT_09fba378;
  if (unaff_x22 == (long *)0x0) {
LAB_0905e3d0:
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar9 = *unaff_x22;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_09fba378) {
        puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_0905df2c;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)FUN_044822ac();
LAB_0905df2c:
  puVar2 = PTR_DAT_09f20720;
  uVar7 = (*(code *)*puVar6)();
  uVar10 = FUN_078b4450(uVar7,0);
  if ((uVar10 & 1) == 0) {
    lVar9 = *unaff_x22;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0905df98;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_044822ac();
LAB_0905df98:
    uVar7 = (*(code *)*puVar6)();
    uVar7 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f22d90,uVar7,0);
    if (param_1 == 0) goto LAB_0905e3d0;
    FUN_0744298c(param_1,*(undefined8 *)PTR_DAT_09fbae10,uVar7,*(undefined8 *)puVar2);
  }
  if (*(int *)(*(long *)PTR_DAT_09f1e6b8 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar7 = FUN_094bc3a0(0);
  puVar5 = PTR_DAT_09fc1890;
  puVar4 = PTR_DAT_09fbae08;
  puVar6 = (undefined8 *)PTR_DAT_09fbae00;
  puVar3 = PTR_DAT_09fbadf8;
  puVar1 = PTR_DAT_09f1e5f0;
  if (param_1 == 0) goto LAB_0905e3d0;
  FUN_0744298c(param_1,*(undefined8 *)PTR_DAT_09fbadf0,uVar7,*(undefined8 *)puVar2);
  if (**(char **)(*(long *)puVar5 + 0xb8) != '\0') {
    puVar6 = (undefined8 *)puVar3;
  }
  FUN_0744298c(param_1,*(undefined8 *)puVar4,*puVar6,*(undefined8 *)puVar2);
  uVar7 = FUN_04447c90(*(undefined8 *)puVar1,0);
  lVar9 = FUN_04447c90(*(undefined8 *)puVar1,2);
  puVar1 = PTR_DAT_09f20e28;
  if (lVar9 == 0) goto LAB_0905e3d0;
  if (*(int *)(lVar9 + 0x18) == 0) {
LAB_0905e3d4:
                    /* WARNING: Subroutine does not return */
    FUN_04447e4c();
  }
  *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)PTR_DAT_09f20e28;
  thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x20));
  puVar3 = PTR_DAT_09f20d70;
  if (*(uint *)(lVar9 + 0x18) < 2) goto LAB_0905e3d4;
  *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)PTR_DAT_09fb9e28;
  uVar8 = thunk_FUN_044bb4b4();
  uVar8 = FUN_0905ad54(uVar8,lVar9);
  uVar10 = FUN_078b4450(uVar8,0);
  if ((uVar10 & 1) == 0) {
    uVar10 = FUN_0744298c(param_1,*(undefined8 *)PTR_DAT_09f22ad0,uVar8,*(undefined8 *)puVar2);
  }
  uVar8 = *(undefined8 *)puVar3;
  uVar7 = FUN_0905ae2c(uVar10,uVar7);
  uVar10 = FUN_078b4450(uVar7,0);
  if ((uVar10 & 1) != 0) {
    uVar10 = thunk_FUN_078b3114(uVar8,*(undefined8 *)PTR_DAT_09f20c90,0);
    if (((uVar10 & 1) == 0) &&
       (uVar10 = thunk_FUN_078b3114(uVar8,*(undefined8 *)PTR_DAT_09f22ec0,0), (uVar10 & 1) == 0))
    goto LAB_0905e190;
    uVar7 = *(undefined8 *)puVar1;
  }
  FUN_0744298c(param_1,*(undefined8 *)PTR_DAT_09f20e08,uVar7,*(undefined8 *)puVar2);
LAB_0905e190:
  uVar10 = FUN_078b4450(*(undefined8 *)(unaff_x21 + 0x10),0);
  if ((uVar10 & 1) == 0) {
    FUN_0744298c(param_1,*(undefined8 *)PTR_DAT_09fc1e20,*(undefined8 *)(unaff_x21 + 0x10),
                 *(undefined8 *)puVar2);
  }
  uVar10 = FUN_078b4450(*(undefined8 *)(unaff_x21 + 0x18),0);
  if ((uVar10 & 1) == 0) {
    FUN_0744298c(param_1,*(undefined8 *)PTR_DAT_09fc1e28,*(undefined8 *)(unaff_x21 + 0x18),
                 *(undefined8 *)puVar2);
  }
  if ((unaff_x20 == 0) || (plVar12 = *(long **)(unaff_x20 + 0x28), plVar12 == (long *)0x0)) {
    return param_1;
  }
  lVar9 = *plVar12;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_09f2bbb0) {
        puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_0905e248;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)FUN_044822ac(plVar12,*(long *)PTR_DAT_09f2bbb0,0);
LAB_0905e248:
  plVar12 = (long *)(*(code *)*puVar6)(plVar12,puVar6[1]);
  puVar3 = PTR_DAT_09f2bbb8;
  puVar2 = PTR_DAT_09f20670;
  puVar1 = PTR_DAT_09f1f018;
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  do {
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0905e2c0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_044822ac(plVar12,*(long *)puVar1,0);
LAB_0905e2c0:
    uVar10 = (*(code *)*puVar6)(plVar12,puVar6[1]);
    if ((uVar10 & 1) == 0) break;
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0905e31c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_044822ac(plVar12,*(long *)puVar3,0);
LAB_0905e31c:
    auVar13 = (*(code *)*puVar6)(plVar12,puVar6[1]);
    FUN_07442978(param_1,auVar13._0_8_,auVar13._8_8_,*(undefined8 *)puVar2);
  } while( true );
  if (plVar12 == (long *)0x0) {
    return param_1;
  }
  lVar9 = *plVar12;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_09f1f008) {
        puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_0905e3a4;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)FUN_044822ac(plVar12,*(long *)PTR_DAT_09f1f008,0);
LAB_0905e3a4:
  (*(code *)*puVar6)(plVar12,puVar6[1]);
  return param_1;
}


