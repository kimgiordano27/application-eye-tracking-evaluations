/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_archive_query_end_t_base__get
ENTRY_POINT: 0853f668
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0853f84c) */
/* WARNING: Removing unreachable block (ram,0x0853fd70) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_archive_query_end_t_base__get
               (void)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  uint unaff_w19;
  long *unaff_x20;
  undefined8 uVar13;
  long lVar14;
  uint unaff_w21;
  int unaff_w23;
  long unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  long lVar15;
  uint uStack0000000000000038;
  int iStack000000000000003c;
  int iStack0000000000000040;
  uint uStack0000000000000044;
  int iStack0000000000000048;
  int iStack000000000000004c;
  undefined8 in_stack_00000058;
  undefined8 *in_stack_00000078;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  long *in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  
  lVar10 = *unaff_x25;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *unaff_x20) {
        puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0xc) * 0x10 + 0x138);
        goto LAB_0853f6b8;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)FUN_040b1e00();
LAB_0853f6b8:
  (*(code *)*puVar7)();
  plVar9 = in_stack_00000178;
  puVar3 = PTR_DAT_0932dd00;
  lVar10 = *(long *)PTR_DAT_0932dd00;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar10 = *(long *)puVar3;
  }
  puVar7 = *(undefined8 **)(lVar10 + 0xb8);
  lVar15 = puVar7[0x18];
  if (lVar15 == 0) {
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      puVar7 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
    }
    uVar13 = *puVar7;
    lVar15 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932e080);
    FUN_06ac88dc(lVar15,uVar13,*(undefined8 *)PTR_DAT_0932e0a0,0);
    plVar8 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xc0);
    *plVar8 = lVar15;
    thunk_FUN_040ec700(plVar8,lVar15);
  }
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar10 = *plVar9;
  lVar14 = *(long *)PTR_DAT_0932e090;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)(lVar14 + 0x20)) {
        lVar10 = lVar10 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar14 + 0x50)) * 0x10 + 0x138;
        goto LAB_0853f7ac;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  lVar10 = FUN_040b1e00(plVar9);
LAB_0853f7ac:
  lVar10 = thunk_FUN_04096bb4(*(undefined8 *)(lVar10 + 8),lVar14);
  (**(code **)(lVar10 + 8))(plVar9,lVar15,lVar10);
  plVar9 = in_stack_00000178;
  if (in_stack_00000178 != (long *)0x0) {
    lVar10 = *in_stack_00000178;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_092860c0) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0853f834;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_040b1e00(in_stack_00000178,*(long *)PTR_DAT_092860c0,0);
LAB_0853f834:
    (*(code *)*puVar7)(plVar9,puVar7[1]);
  }
  in_stack_00000188 = in_stack_00000078[1];
  in_stack_00000180 = *in_stack_00000078;
  if (in_stack_00000058._4_4_ != 0) {
    FUN_08534df0();
    in_stack_00000188 = in_stack_00000168;
    in_stack_00000180 = in_stack_00000160;
  }
  if (iStack0000000000000040 == 2) {
    FUN_08535384();
    in_stack_00000188 = in_stack_00000158;
    in_stack_00000180 = in_stack_00000150;
  }
  if (iStack000000000000004c != 0) {
    Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_account_login_state_change_t_account_handle_set
              ();
    in_stack_00000188 = in_stack_00000148;
    in_stack_00000180 = in_stack_00000140;
  }
  if ((unaff_w21 & 1) != 0) {
    if ((unaff_w21 & uStack0000000000000038 & 1) == 0) {
      puVar7 = (undefined8 *)&stack0x00000120;
      FUN_0853a0d4();
    }
    else {
      puVar7 = (undefined8 *)&stack0x00000130;
      FUN_0853a2e0();
    }
    in_stack_00000188 = puVar7[1];
    in_stack_00000180 = *puVar7;
  }
  if (iStack000000000000003c != 0) {
    FUN_0853a58c();
    in_stack_00000188 = in_stack_00000118;
    in_stack_00000180 = in_stack_00000110;
  }
  if (((uStack0000000000000044 ^ 1 | unaff_w19) & 1) == 0) {
    FUN_08539984();
    in_stack_00000188 = in_stack_00000108;
    in_stack_00000180 = in_stack_00000100;
  }
  if ((*(long *)(unaff_x24 + 0x1a0) != 0) &&
     (lVar10 = *(long *)(*(long *)(unaff_x24 + 0x1a0) + 0x78), lVar10 != 0)) {
    thunk_FUN_08996f14(lVar10,0,0);
    if (*(long *)(unaff_x24 + 0x1d0) != 0) {
      uVar11 = FUN_085160b0(*(long *)(unaff_x24 + 0x1d0),0);
      if ((iStack0000000000000048 != 0) || ((uVar11 & 1) != 0)) {
        FUN_08537218();
        if (iStack0000000000000048 != 0) {
          FUN_08537070();
          iVar4 = FUN_08537110();
          if ((*(long *)(unaff_x24 + 0x1d0) == 0) ||
             (plVar9 = *(long **)(*(long *)(unaff_x24 + 0x1d0) + 0x78), plVar9 == (long *)0x0))
          goto LAB_0853fd68;
          iVar5 = (**(code **)(*plVar9 + 0x218))(plVar9,*(undefined8 *)(*plVar9 + 0x220));
          uVar2 = iVar4 - 1;
          if (iVar5 < 0) {
            iVar5 = iVar5 + 1;
          }
          uVar6 = uVar2;
          if (iVar5 >> 1 <= (int)uVar2) {
            uVar6 = iVar5 >> 1;
          }
          uVar1 = 0;
          if (-1 < (int)uVar2) {
            uVar1 = uVar6;
          }
          if ((*(long *)(unaff_x24 + 0x1c0) == 0) ||
             (plVar9 = *(long **)(*(long *)(unaff_x24 + 0x1c0) + 0x48), plVar9 == (long *)0x0))
          goto LAB_0853fd68;
          uVar6 = (**(code **)(*plVar9 + 0x218))(plVar9,*(undefined8 *)(*plVar9 + 0x220));
          uVar2 = uVar6;
          if ((int)uVar1 <= (int)uVar6) {
            uVar2 = uVar1;
          }
          uVar1 = 0;
          if (-1 < (int)uVar6) {
            uVar1 = uVar2;
          }
          if (*(long *)(unaff_x24 + 0x148) == 0) goto LAB_0853fd68;
          if (*(uint *)(*(long *)(unaff_x24 + 0x148) + 0x18) <= uVar1) {
LAB_0853fab8:
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          if (iVar4 == 1) {
            if (*(long *)(unaff_x24 + 0x150) == 0) goto LAB_0853fd68;
            if (*(int *)(*(long *)(unaff_x24 + 0x150) + 0x18) == 0) goto LAB_0853fab8;
          }
          if (*(long *)(unaff_x26 + 0x1a0) == 0) goto LAB_0853fd68;
          FUN_083e3844(*(long *)(unaff_x26 + 0x1a0),0);
          FUN_0853bab4();
        }
        if (*(long *)(unaff_x24 + 0x1a0) == 0) goto LAB_0853fd68;
        FUN_085368fc();
      }
      if (unaff_w23 != 0) {
        FUN_0853ae74();
        FUN_0853b450();
      }
      if ((((*(long *)(unaff_x24 + 0x1a0) != 0) &&
           (FUN_08532918(), *(long *)(unaff_x24 + 0x1a0) != 0)) &&
          (FUN_08532c14(), *(long *)(unaff_x24 + 0x1a0) != 0)) &&
         ((FUN_08532d08(), *(long *)(unaff_x24 + 0x1a0) != 0 &&
          (FUN_085332b0(), *(long *)(unaff_x24 + 0x1a0) != 0)))) {
        FUN_08533360();
        uVar11 = FUN_08518834();
        if (((uVar11 & 1) != 0) && (*(char *)(unaff_x24 + 0x246) != '\0')) {
          if ((*(long *)(unaff_x24 + 0x1a0) == 0) ||
             (lVar10 = *(long *)(*(long *)(unaff_x24 + 0x1a0) + 0x78), lVar10 == 0))
          goto LAB_0853fd68;
          FUN_08995630(lVar10,*(undefined8 *)PTR_DAT_0932dc20,0);
        }
        if (*(char *)(unaff_x24 + 0x247) != '\0') {
          if ((*(long *)(unaff_x24 + 0x1a0) == 0) ||
             (lVar10 = *(long *)(*(long *)(unaff_x24 + 0x1a0) + 0x78), lVar10 == 0))
          goto LAB_0853fd68;
          FUN_08995630(lVar10,*(undefined8 *)PTR_DAT_0932dc38,0);
        }
        uVar11 = FUN_0852fbc4();
        if ((uVar11 & 1) != 0) {
          FUN_08518b68();
          FUN_08518c60();
          if (*(long *)(unaff_x24 + 0x1a0) == 0) goto LAB_0853fd68;
          FUN_08518cf0();
          FUN_085333fc();
        }
        if (*(int *)(*(long *)PTR_DAT_0932c870 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        FUN_085057d4();
        FUN_0853e140();
        return;
      }
    }
  }
LAB_0853fd68:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


