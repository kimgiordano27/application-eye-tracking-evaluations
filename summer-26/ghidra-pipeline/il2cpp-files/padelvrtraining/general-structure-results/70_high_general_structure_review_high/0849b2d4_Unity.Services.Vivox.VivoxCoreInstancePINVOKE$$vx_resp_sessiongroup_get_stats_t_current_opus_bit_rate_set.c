/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_sessiongroup_get_stats_t_current_opus_bit_rate_set
ENTRY_POINT: 0849b2d4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_sessiongroup_get_stats_t_current_opus_bit_rate_set
               (long param_1)

{
  uint uVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar3;
  
  FUN_03d2d2b0(*(undefined8 *)(param_1 + 0xcb0));
  FUN_03d2d2b0(PTR_DAT_091a2788);
  FUN_03d2d2b0(PTR_DAT_0927f0e8);
  FUN_03d2d2b0(PTR_DAT_0927f0f0);
  FUN_03d2d2b0(PTR_DAT_0927f118);
  FUN_03d2d2b0(PTR_DAT_0927f100);
  FUN_03d2d2b0(PTR_DAT_091add60);
  *(undefined1 *)(unaff_x21 + 0xd4) = 1;
  if ((unaff_x20 != 0) && (*(long *)(unaff_x20 + 0x18) != 0)) {
    uVar2 = FUN_06fd1c0c(*(long *)(unaff_x20 + 0x18),*(undefined8 *)PTR_DAT_0927f0f0,0);
    if ((uVar2 & 1) != 0) {
LAB_0849b350:
      FUN_0849bec8();
      return;
    }
    if (*(long *)(unaff_x20 + 0x18) != 0) {
      uVar2 = FUN_06fd1c0c(*(long *)(unaff_x20 + 0x18),*(undefined8 *)PTR_DAT_0927ccb0,0);
      if ((uVar2 & 1) != 0) {
        Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_account_delete_message_t_delete_time_get
                  ();
        return;
      }
      uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
      uVar1 = FUN_084cd478(uVar3,0);
      if (uVar1 < 0x49f653ff) {
        if (0x41802ba3 < uVar1) {
          if (uVar1 == 0x43e9f9d5) {
            uVar2 = thunk_FUN_06fd18b4(uVar3,*(undefined8 *)PTR_DAT_0927f0e0,0);
            if ((uVar2 & 1) != 0) {
              if (unaff_x19 != 0) {
                FUN_084991e0();
                return;
              }
              goto LAB_0849b64c;
            }
          }
          else if ((uVar1 == 0x49f653fe) &&
                  (uVar2 = thunk_FUN_06fd18b4(uVar3,*(undefined8 *)PTR_DAT_0927f0d0,0),
                  (uVar2 & 1) != 0)) goto LAB_0849b350;
LAB_0849b61c:
          FUN_06fd2168(*(undefined8 *)PTR_DAT_0927f118,*(undefined8 *)(unaff_x20 + 0x18),
                       *(undefined8 *)PTR_DAT_091add60,0);
          FUN_0849a35c();
          return;
        }
        if (uVar1 == 0x2a0c975e) {
          uVar2 = thunk_FUN_06fd18b4(uVar3,*(undefined8 *)PTR_DAT_091a2788,0);
          if ((uVar2 & 1) == 0) goto LAB_0849b61c;
          if (unaff_x19 != 0) {
            *(undefined1 *)(unaff_x19 + 0x10) = 1;
            return;
          }
        }
        else {
          if ((uVar1 != 0x41802ba3) ||
             (uVar2 = thunk_FUN_06fd18b4(uVar3,*(undefined8 *)PTR_DAT_0927f0b8,0), (uVar2 & 1) == 0)
             ) goto LAB_0849b61c;
          if (unaff_x19 != 0) {
            FUN_0849b9c0();
            return;
          }
        }
      }
      else if (uVar1 < 0x95e56bd2) {
        if (uVar1 == 0x95e56bd1) {
          uVar2 = thunk_FUN_06fd18b4(uVar3,*(undefined8 *)PTR_DAT_0927f100,0);
          if ((uVar2 & 1) == 0) goto LAB_0849b61c;
          if (unaff_x19 != 0) {
            FUN_08499060();
            return;
          }
        }
        else {
          if ((uVar1 != 0x7be2c3bd) ||
             (uVar2 = thunk_FUN_06fd18b4(uVar3,*(undefined8 *)PTR_DAT_0927f0d8,0), (uVar2 & 1) == 0)
             ) goto LAB_0849b61c;
          if (unaff_x19 != 0) {
            FUN_08498ff8();
            return;
          }
        }
      }
      else if (uVar1 == 0x9783b396) {
        uVar2 = thunk_FUN_06fd18b4(uVar3,*(undefined8 *)PTR_DAT_0927f0e8,0);
        if ((uVar2 & 1) == 0) goto LAB_0849b61c;
        if (unaff_x19 != 0) {
          FUN_08499128();
          return;
        }
      }
      else if (uVar1 == 0xc7e00084) {
        uVar2 = thunk_FUN_06fd18b4(uVar3,*(undefined8 *)PTR_DAT_0927f0c8,0);
        if ((uVar2 & 1) == 0) goto LAB_0849b61c;
        if (unaff_x19 != 0) {
          FUN_084990c4();
          return;
        }
      }
      else {
        if ((uVar1 != 0xf98447d2) ||
           (uVar2 = thunk_FUN_06fd18b4(uVar3,*(undefined8 *)PTR_DAT_0927f0c0,0), (uVar2 & 1) == 0))
        goto LAB_0849b61c;
        if (unaff_x19 != 0) {
          FUN_08499184();
          return;
        }
      }
    }
  }
LAB_0849b64c:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


