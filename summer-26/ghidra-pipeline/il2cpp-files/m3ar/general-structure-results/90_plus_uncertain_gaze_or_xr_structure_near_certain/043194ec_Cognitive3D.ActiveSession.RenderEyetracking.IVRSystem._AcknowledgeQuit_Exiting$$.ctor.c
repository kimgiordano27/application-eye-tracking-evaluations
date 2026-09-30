/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._AcknowledgeQuit_Exiting$$.ctor
ENTRY_POINT: 043194ec
PROGRAM: m3ar-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__AcknowledgeQuit_Exiting___ctor(void)

{
  long unaff_x19;
  undefined1 auVar1 [16];
  
  FUN_043195a8();
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_04308fec(*(long *)(unaff_x19 + 0x30),*(undefined8 *)(unaff_x19 + 0x20));
    auVar1 = FUN_043197a4();
    FUN_07df56d4(auVar1._0_8_,auVar1._8_8_,0);
    FUN_04319830();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


