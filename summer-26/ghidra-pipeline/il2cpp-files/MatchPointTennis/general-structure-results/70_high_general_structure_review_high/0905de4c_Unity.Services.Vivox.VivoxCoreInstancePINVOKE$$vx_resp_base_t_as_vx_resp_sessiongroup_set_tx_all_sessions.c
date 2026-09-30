/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_base_t_as_vx_resp_sessiongroup_set_tx_all_sessions
ENTRY_POINT: 0905de4c
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

long Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_base_t_as_vx_resp_sessiongroup_set_tx_all_sessions
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar13;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  undefined1 auVar14 [16];
  
  FUN_04447ba8(PTR_DAT_09f20e08);
  FUN_04447ba8(PTR_DAT_09fc1e20);
  FUN_04447ba8(PTR_DAT_09fc1e28);
  FUN_04447ba8(PTR_DAT_09f20e28);
  FUN_04447ba8(PTR_DAT_09fbae00);
  FUN_04447ba8(PTR_DAT_09fbae08);
  FUN_04447ba8(PTR_DAT_09fbae10);
  FUN_04447ba8(PTR_DAT_09f22ec0);
  FUN_04447ba8(PTR_DAT_09f22d90);
  *(undefined1 *)(unaff_x23 + 0x838) = 1;
  lVar6 = thunk_FUN_0448520c(*unaff_x24);
  FUN_07441bc0(lVar6,*unaff_x19);
  puVar1 = PTR_DAT_09fba378;
  if (unaff_x22 == (long *)0x0) {
LAB_0905e3d0:
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar10 = *unaff_x22;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_09fba378) {
        puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_0905df2c;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)FUN_044822ac();
LAB_0905df2c:
  puVar2 = PTR_DAT_09f20720;
  uVar8 = (*(code *)*puVar7)();
  uVar11 = FUN_078b4450(uVar8,0);
  if ((uVar11 & 1) == 0) {
    lVar10 = *unaff_x22;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0905df98;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_044822ac();
LAB_0905df98:
    uVar8 = (*(code *)*puVar7)();
    uVar8 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f22d90,uVar8,0);
    if (lVar6 == 0) goto LAB_0905e3d0;
    FUN_0744298c(lVar6,*(undefined8 *)PTR_DAT_09fbae10,uVar8,*(undefined8 *)puVar2);
  }
  if (*(int *)(*(long *)PTR_DAT_09f1e6b8 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar8 = FUN_094bc3a0(0);
  puVar5 = PTR_DAT_09fc1890;
  puVar4 = PTR_DAT_09fbae08;
  puVar7 = (undefined8 *)PTR_DAT_09fbae00;
  puVar3 = PTR_DAT_09fbadf8;
  puVar1 = PTR_DAT_09f1e5f0;
  if (lVar6 == 0) goto LAB_0905e3d0;
  FUN_0744298c(lVar6,*(undefined8 *)PTR_DAT_09fbadf0,uVar8,*(undefined8 *)puVar2);
  if (**(char **)(*(long *)puVar5 + 0xb8) != '\0') {
    puVar7 = (undefined8 *)puVar3;
  }
  FUN_0744298c(lVar6,*(undefined8 *)puVar4,*puVar7,*(undefined8 *)puVar2);
  uVar8 = FUN_04447c90(*(undefined8 *)puVar1,0);
  lVar10 = FUN_04447c90(*(undefined8 *)puVar1,2);
  puVar1 = PTR_DAT_09f20e28;
  if (lVar10 == 0) goto LAB_0905e3d0;
  if (*(int *)(lVar10 + 0x18) == 0) {
LAB_0905e3d4:
                    /* WARNING: Subroutine does not return */
    FUN_04447e4c();
  }
  *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)PTR_DAT_09f20e28;
  thunk_FUN_044bb4b4((undefined8 *)(lVar10 + 0x20));
  puVar3 = PTR_DAT_09f20d70;
  if (*(uint *)(lVar10 + 0x18) < 2) goto LAB_0905e3d4;
  *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)PTR_DAT_09fb9e28;
  uVar9 = thunk_FUN_044bb4b4();
  uVar9 = FUN_0905ad54(uVar9,lVar10);
  uVar11 = FUN_078b4450(uVar9,0);
  if ((uVar11 & 1) == 0) {
    uVar11 = FUN_0744298c(lVar6,*(undefined8 *)PTR_DAT_09f22ad0,uVar9,*(undefined8 *)puVar2);
  }
  uVar9 = *(undefined8 *)puVar3;
  uVar8 = FUN_0905ae2c(uVar11,uVar8);
  uVar11 = FUN_078b4450(uVar8,0);
  if ((uVar11 & 1) != 0) {
    uVar11 = thunk_FUN_078b3114(uVar9,*(undefined8 *)PTR_DAT_09f20c90,0);
    if (((uVar11 & 1) == 0) &&
       (uVar11 = thunk_FUN_078b3114(uVar9,*(undefined8 *)PTR_DAT_09f22ec0,0), (uVar11 & 1) == 0))
    goto LAB_0905e190;
    uVar8 = *(undefined8 *)puVar1;
  }
  FUN_0744298c(lVar6,*(undefined8 *)PTR_DAT_09f20e08,uVar8,*(undefined8 *)puVar2);
LAB_0905e190:
  uVar11 = FUN_078b4450(*(undefined8 *)(unaff_x21 + 0x10),0);
  if ((uVar11 & 1) == 0) {
    FUN_0744298c(lVar6,*(undefined8 *)PTR_DAT_09fc1e20,*(undefined8 *)(unaff_x21 + 0x10),
                 *(undefined8 *)puVar2);
  }
  uVar11 = FUN_078b4450(*(undefined8 *)(unaff_x21 + 0x18),0);
  if ((uVar11 & 1) == 0) {
    FUN_0744298c(lVar6,*(undefined8 *)PTR_DAT_09fc1e28,*(undefined8 *)(unaff_x21 + 0x18),
                 *(undefined8 *)puVar2);
  }
  if ((unaff_x20 == 0) || (plVar13 = *(long **)(unaff_x20 + 0x28), plVar13 == (long *)0x0)) {
    return lVar6;
  }
  lVar10 = *plVar13;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_09f2bbb0) {
        puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_0905e248;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)FUN_044822ac(plVar13,*(long *)PTR_DAT_09f2bbb0,0);
LAB_0905e248:
  plVar13 = (long *)(*(code *)*puVar7)(plVar13,puVar7[1]);
  puVar3 = PTR_DAT_09f2bbb8;
  puVar2 = PTR_DAT_09f20670;
  puVar1 = PTR_DAT_09f1f018;
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  do {
    lVar10 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0905e2c0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_044822ac(plVar13,*(long *)puVar1,0);
LAB_0905e2c0:
    uVar11 = (*(code *)*puVar7)(plVar13,puVar7[1]);
    if ((uVar11 & 1) == 0) break;
    lVar10 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0905e31c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_044822ac(plVar13,*(long *)puVar3,0);
LAB_0905e31c:
    auVar14 = (*(code *)*puVar7)(plVar13,puVar7[1]);
    FUN_07442978(lVar6,auVar14._0_8_,auVar14._8_8_,*(undefined8 *)puVar2);
  } while( true );
  if (plVar13 == (long *)0x0) {
    return lVar6;
  }
  lVar10 = *plVar13;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_09f1f008) {
        puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_0905e3a4;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)FUN_044822ac(plVar13,*(long *)PTR_DAT_09f1f008,0);
LAB_0905e3a4:
  (*(code *)*puVar7)(plVar13,puVar7[1]);
  return lVar6;
}


