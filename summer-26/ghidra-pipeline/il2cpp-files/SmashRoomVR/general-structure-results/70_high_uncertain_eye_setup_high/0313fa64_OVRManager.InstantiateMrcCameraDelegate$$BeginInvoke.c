/*
FUNCTION_NAME: OVRManager.InstantiateMrcCameraDelegate$$BeginInvoke
ENTRY_POINT: 0313fa64
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_InstantiateMrcCameraDelegate__BeginInvoke(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_02755d2c(&stack0x00000050,*(undefined8 *)PTR_DAT_03d7fa18);
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bbda54(param_1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab0160();
}


