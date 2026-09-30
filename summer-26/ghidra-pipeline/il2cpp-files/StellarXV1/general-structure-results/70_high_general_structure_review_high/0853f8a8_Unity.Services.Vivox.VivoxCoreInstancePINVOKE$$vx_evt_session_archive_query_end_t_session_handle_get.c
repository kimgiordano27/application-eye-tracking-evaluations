/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_archive_query_end_t_session_handle_get
ENTRY_POINT: 0853f8a8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_archive_query_end_t_session_handle_get
               (void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  int in_w8;
  uint unaff_w19;
  int unaff_w20;
  uint unaff_w21;
  undefined8 *puVar9;
  int unaff_w23;
  long unaff_x24;
  long unaff_x26;
  uint uStack0000000000000038;
  int iStack000000000000003c;
  undefined8 in_stack_00000040;
  int in_stack_00000048;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  
  if (in_w8 == 2) {
    FUN_08535384();
    in_stack_00000188 = in_stack_00000158;
    in_stack_00000180 = in_stack_00000150;
  }
  if (unaff_w20 != 0) {
    Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_account_login_state_change_t_account_handle_set
              ();
    in_stack_00000188 = in_stack_00000148;
    in_stack_00000180 = in_stack_00000140;
  }
  if ((unaff_w21 & 1) != 0) {
    if ((unaff_w21 & uStack0000000000000038 & 1) == 0) {
      puVar9 = (undefined8 *)&stack0x00000120;
      FUN_0853a0d4();
    }
    else {
      puVar9 = (undefined8 *)&stack0x00000130;
      FUN_0853a2e0();
    }
    in_stack_00000188 = puVar9[1];
    in_stack_00000180 = *puVar9;
  }
  if (iStack000000000000003c != 0) {
    FUN_0853a58c();
    in_stack_00000188 = in_stack_00000118;
    in_stack_00000180 = in_stack_00000110;
  }
  if (((in_stack_00000040._4_4_ ^ 1 | unaff_w19) & 1) == 0) {
    FUN_08539984();
    in_stack_00000188 = in_stack_00000108;
    in_stack_00000180 = in_stack_00000100;
  }
  if ((*(long *)(unaff_x24 + 0x1a0) != 0) &&
     (lVar6 = *(long *)(*(long *)(unaff_x24 + 0x1a0) + 0x78), lVar6 != 0)) {
    thunk_FUN_08996f14(lVar6,0,0);
    if (*(long *)(unaff_x24 + 0x1d0) != 0) {
      uVar7 = FUN_085160b0(*(long *)(unaff_x24 + 0x1d0),0);
      if ((in_stack_00000048 != 0) || ((uVar7 & 1) != 0)) {
        FUN_08537218();
        if (in_stack_00000048 != 0) {
          FUN_08537070();
          iVar3 = FUN_08537110();
          if ((*(long *)(unaff_x24 + 0x1d0) == 0) ||
             (plVar8 = *(long **)(*(long *)(unaff_x24 + 0x1d0) + 0x78), plVar8 == (long *)0x0))
          goto LAB_0853fd68;
          iVar4 = (**(code **)(*plVar8 + 0x218))(plVar8,*(undefined8 *)(*plVar8 + 0x220));
          uVar2 = iVar3 - 1;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          uVar5 = uVar2;
          if (iVar4 >> 1 <= (int)uVar2) {
            uVar5 = iVar4 >> 1;
          }
          uVar1 = 0;
          if (-1 < (int)uVar2) {
            uVar1 = uVar5;
          }
          if ((*(long *)(unaff_x24 + 0x1c0) == 0) ||
             (plVar8 = *(long **)(*(long *)(unaff_x24 + 0x1c0) + 0x48), plVar8 == (long *)0x0))
          goto LAB_0853fd68;
          uVar5 = (**(code **)(*plVar8 + 0x218))(plVar8,*(undefined8 *)(*plVar8 + 0x220));
          uVar2 = uVar5;
          if ((int)uVar1 <= (int)uVar5) {
            uVar2 = uVar1;
          }
          uVar1 = 0;
          if (-1 < (int)uVar5) {
            uVar1 = uVar2;
          }
          if (*(long *)(unaff_x24 + 0x148) == 0) goto LAB_0853fd68;
          if (*(uint *)(*(long *)(unaff_x24 + 0x148) + 0x18) <= uVar1) {
LAB_0853fab8:
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          if (iVar3 == 1) {
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
        uVar7 = FUN_08518834();
        if (((uVar7 & 1) != 0) && (*(char *)(unaff_x24 + 0x246) != '\0')) {
          if ((*(long *)(unaff_x24 + 0x1a0) == 0) ||
             (lVar6 = *(long *)(*(long *)(unaff_x24 + 0x1a0) + 0x78), lVar6 == 0))
          goto LAB_0853fd68;
          FUN_08995630(lVar6,*(undefined8 *)PTR_DAT_0932dc20,0);
        }
        if (*(char *)(unaff_x24 + 0x247) != '\0') {
          if ((*(long *)(unaff_x24 + 0x1a0) == 0) ||
             (lVar6 = *(long *)(*(long *)(unaff_x24 + 0x1a0) + 0x78), lVar6 == 0))
          goto LAB_0853fd68;
          FUN_08995630(lVar6,*(undefined8 *)PTR_DAT_0932dc38,0);
        }
        uVar7 = FUN_0852fbc4();
        if ((uVar7 & 1) != 0) {
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


