/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$delete_vx_evt_participant_removed_t
ENTRY_POINT: 08549f10
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_evt_participant_removed_t(void)

{
  undefined *puVar1;
  long unaff_x19;
  undefined4 unaff_w22;
  long lVar2;
  undefined8 uVar3;
  
  FUN_089af880();
  puVar1 = PTR_DAT_0932c538;
  lVar2 = *(long *)(unaff_x19 + 0xf8);
  if (lVar2 != 0) {
    if (*(int *)(*(long *)PTR_DAT_0932c538 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    if (*(int *)(lVar2 + 0x18) == 0) {
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_participant_updated_t_sessiongroup_handle_get:
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    FUN_0855b8d0(0,lVar2 + 0x20);
    lVar2 = *(long *)(unaff_x19 + 0xf8);
    if (lVar2 != 0) {
      if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) == 0)
      goto 
      Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_participant_updated_t_sessiongroup_handle_get
      ;
      FUN_0855b8d0(0,lVar2 + 0x28);
      lVar2 = *(long *)(unaff_x19 + 0xf8);
      if (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x18) < 3)
        goto 
        Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_participant_updated_t_sessiongroup_handle_get
        ;
        FUN_0855b8d0(0,lVar2 + 0x30);
        uVar3 = NEON_ushl(*(undefined8 *)(unaff_x19 + 0x120),CONCAT44(unaff_w22,unaff_w22),4);
        *(undefined8 *)(unaff_x19 + 0x120) = uVar3;
        FUN_089af880();
        lVar2 = *(long *)(unaff_x19 + 0xf8);
        if (lVar2 != 0) {
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) == 0)
          goto 
          Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_participant_updated_t_sessiongroup_handle_get
          ;
          FUN_0855b8d0(0,lVar2 + 0x38);
          if (*(long *)(unaff_x19 + 0xf8) != 0) {
            if ((*(uint *)(*(long *)(unaff_x19 + 0xf8) + 0x18) & 0xfffffffc) == 0)
            goto 
            Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_participant_updated_t_sessiongroup_handle_get
            ;
            FUN_08542848();
            if (*(long *)(unaff_x19 + 0x158) != 0) {
              if (*(char *)(*(long *)(unaff_x19 + 0x158) + 0x15) == '\0') {
                if (*(long *)(unaff_x19 + 0xf8) != 0) {
                  if ((*(uint *)(*(long *)(unaff_x19 + 0xf8) + 0x18) & 0xfffffffc) == 0)
                  goto 
                  Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_participant_updated_t_sessiongroup_handle_get
                  ;
                  goto LAB_0854a0e0;
                }
              }
              else if (*(long *)(unaff_x19 + 0x118) != 0) {
                FUN_085061d8(*(long *)(unaff_x19 + 0x118),0);
LAB_0854a0e0:
                FUN_08505d24();
                FUN_08505e50(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


