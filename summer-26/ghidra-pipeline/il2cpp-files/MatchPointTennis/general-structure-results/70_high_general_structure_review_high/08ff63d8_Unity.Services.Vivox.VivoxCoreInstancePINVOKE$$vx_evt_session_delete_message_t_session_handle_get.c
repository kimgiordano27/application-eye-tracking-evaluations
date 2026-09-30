/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_delete_message_t_session_handle_get
ENTRY_POINT: 08ff63d8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_delete_message_t_session_handle_get
               (void)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  
  if ((unaff_x20 != 0) && (uVar2 = FUN_078b6bdc(), unaff_x19 != 0)) {
    lVar3 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (lVar3 != 0) {
      uVar1 = *(uint *)(unaff_x19 + 0x18);
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = uVar2;
        thunk_FUN_044bb4b4();
      }
      else {
        FUN_05bade44();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


