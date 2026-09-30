/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_archive_query_end_t_last_id_set
ENTRY_POINT: 0853fd94
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_archive_query_end_t_last_id_set
               (undefined8 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  uint unaff_w19;
  uint unaff_w21;
  int unaff_w23;
  long unaff_x24;
  long lVar16;
  long unaff_x26;
  uint uStack0000000000000038;
  int iStack000000000000003c;
  int iStack0000000000000040;
  uint uStack0000000000000044;
  int iStack0000000000000048;
  int iStack000000000000004c;
  undefined8 in_stack_00000058;
  undefined8 *in_stack_00000078;
  long in_stack_000000e0;
  undefined8 *in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
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
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  
  if (param_2 != 1) {
    FUN_03b08ffc(&stack0x000000e0);
                    /* WARNING: Subroutine does not return */
    FUN_041676cc(param_1);
  }
  plVar12 = (long *)__cxa_begin_catch(param_1);
  lVar16 = *plVar12;
  in_stack_000000e0 = lVar16;
  __cxa_end_catch();
  plVar12 = (long *)*in_stack_000000e8;
  if (plVar12 != (long *)0x0) {
    lVar13 = *plVar12;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_092860c0) {
          puVar11 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_0853f834;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar11 = (undefined8 *)FUN_040b1e00(plVar12,*(long *)PTR_DAT_092860c0,0);
LAB_0853f834:
    (*(code *)*puVar11)(plVar12,puVar11[1]);
  }
  if (lVar16 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077828(lVar16);
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
      puVar11 = (undefined8 *)&stack0x00000120;
      FUN_0853a0d4();
    }
    else {
      puVar11 = (undefined8 *)&stack0x00000130;
      FUN_0853a2e0();
    }
    in_stack_00000188 = puVar11[1];
    in_stack_00000180 = *puVar11;
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
  auVar3._8_8_ = in_stack_000000f8;
  auVar3._0_8_ = in_stack_000000f0;
  if ((*(long *)(unaff_x24 + 0x1a0) != 0) &&
     (lVar16 = *(long *)(*(long *)(unaff_x24 + 0x1a0) + 0x78), _in_stack_000000f0 = auVar3,
     lVar16 != 0)) {
    thunk_FUN_08996f14(lVar16,0,0);
    if (*(long *)(unaff_x24 + 0x1d0) != 0) {
      uVar14 = FUN_085160b0(*(long *)(unaff_x24 + 0x1d0),0);
      if ((iStack0000000000000048 != 0) || ((uVar14 & 1) != 0)) {
        FUN_08537218();
        if (iStack0000000000000048 != 0) {
          FUN_08537070();
          iVar8 = FUN_08537110();
          auVar4._8_8_ = in_stack_000000f8;
          auVar4._0_8_ = in_stack_000000f0;
          if ((*(long *)(unaff_x24 + 0x1d0) == 0) ||
             (plVar12 = *(long **)(*(long *)(unaff_x24 + 0x1d0) + 0x78), _in_stack_000000f0 = auVar4
             , plVar12 == (long *)0x0)) goto LAB_0853fd68;
          iVar9 = (**(code **)(*plVar12 + 0x218))(plVar12,*(undefined8 *)(*plVar12 + 0x220));
          auVar5._8_8_ = in_stack_000000f8;
          auVar5._0_8_ = in_stack_000000f0;
          uVar2 = iVar8 - 1;
          if (iVar9 < 0) {
            iVar9 = iVar9 + 1;
          }
          uVar10 = uVar2;
          if (iVar9 >> 1 <= (int)uVar2) {
            uVar10 = iVar9 >> 1;
          }
          uVar1 = 0;
          if (-1 < (int)uVar2) {
            uVar1 = uVar10;
          }
          if ((*(long *)(unaff_x24 + 0x1c0) == 0) ||
             (plVar12 = *(long **)(*(long *)(unaff_x24 + 0x1c0) + 0x48), _in_stack_000000f0 = auVar5
             , plVar12 == (long *)0x0)) goto LAB_0853fd68;
          uVar10 = (**(code **)(*plVar12 + 0x218))(plVar12,*(undefined8 *)(*plVar12 + 0x220));
          auVar7._8_8_ = in_stack_000000f8;
          auVar7._0_8_ = in_stack_000000f0;
          auVar6._8_8_ = in_stack_000000f8;
          auVar6._0_8_ = in_stack_000000f0;
          uVar2 = uVar10;
          if ((int)uVar1 <= (int)uVar10) {
            uVar2 = uVar1;
          }
          uVar1 = 0;
          if (-1 < (int)uVar10) {
            uVar1 = uVar2;
          }
          if (*(long *)(unaff_x24 + 0x148) == 0) goto LAB_0853fd68;
          if (*(uint *)(*(long *)(unaff_x24 + 0x148) + 0x18) <= uVar1) {
LAB_0853fab8:
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          if (iVar8 == 1) {
            _in_stack_000000f0 = auVar6;
            if (*(long *)(unaff_x24 + 0x150) == 0) goto LAB_0853fd68;
            if (*(int *)(*(long *)(unaff_x24 + 0x150) + 0x18) == 0) goto LAB_0853fab8;
          }
          _in_stack_000000f0 = auVar7;
          if (*(long *)(unaff_x26 + 0x1a0) == 0) goto LAB_0853fd68;
          FUN_083e3844(*(long *)(unaff_x26 + 0x1a0),0);
          _in_stack_000000f0 = FUN_0853bab4();
        }
        if (*(long *)(unaff_x24 + 0x1a0) == 0) goto LAB_0853fd68;
        FUN_085368fc();
      }
      if (unaff_w23 != 0) {
        FUN_0853ae74();
        FUN_0853b450();
      }
      if (*(long *)(unaff_x24 + 0x1a0) != 0) {
        FUN_08532918();
        if (*(long *)(unaff_x24 + 0x1a0) != 0) {
          FUN_08532c14();
          if (*(long *)(unaff_x24 + 0x1a0) != 0) {
            FUN_08532d08();
            if (*(long *)(unaff_x24 + 0x1a0) != 0) {
              FUN_085332b0();
              if (*(long *)(unaff_x24 + 0x1a0) != 0) {
                FUN_08533360();
                uVar14 = FUN_08518834();
                if (((uVar14 & 1) != 0) && (*(char *)(unaff_x24 + 0x246) != '\0')) {
                  if ((*(long *)(unaff_x24 + 0x1a0) == 0) ||
                     (lVar16 = *(long *)(*(long *)(unaff_x24 + 0x1a0) + 0x78), lVar16 == 0))
                  goto LAB_0853fd68;
                  FUN_08995630(lVar16,*(undefined8 *)PTR_DAT_0932dc20,0);
                }
                if (*(char *)(unaff_x24 + 0x247) != '\0') {
                  if ((*(long *)(unaff_x24 + 0x1a0) == 0) ||
                     (lVar16 = *(long *)(*(long *)(unaff_x24 + 0x1a0) + 0x78), lVar16 == 0))
                  goto LAB_0853fd68;
                  FUN_08995630(lVar16,*(undefined8 *)PTR_DAT_0932dc38,0);
                }
                uVar14 = FUN_0852fbc4();
                if ((uVar14 & 1) != 0) {
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
        }
      }
    }
  }
LAB_0853fd68:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


