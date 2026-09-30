/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_set_voice_font_t_session_handle_set
ENTRY_POINT: 0813d84c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_set_voice_font_t_session_handle_set
               (void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  
  lVar1 = thunk_FUN_03cf5138();
  if (lVar1 == 0) {
    uVar2 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
    FUN_03c8f9fc(uVar2,0);
  }
  if (1 < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined8 *)(unaff_x20 + 0x28) = unaff_x21;
    thunk_FUN_03d233cc();
    if (unaff_x19 != 0) {
      FUN_0484ea0c();
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


