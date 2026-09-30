/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_participant_updated_t_sessiongroup_handle_set
ENTRY_POINT: 0854a08c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_participant_updated_t_sessiongroup_handle_set
               (void)

{
  ulong in_x9;
  long unaff_x19;
  
  if ((in_x9 & 0xfffffffc) == 0) {
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_participant_updated_t_sessiongroup_handle_get:
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
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
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


