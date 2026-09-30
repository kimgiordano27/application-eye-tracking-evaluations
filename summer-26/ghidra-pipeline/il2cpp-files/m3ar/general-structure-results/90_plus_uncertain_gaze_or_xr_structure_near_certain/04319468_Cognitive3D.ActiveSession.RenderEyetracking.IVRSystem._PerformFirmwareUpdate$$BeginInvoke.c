/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._PerformFirmwareUpdate$$BeginInvoke
ENTRY_POINT: 04319468
PROGRAM: m3ar-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__PerformFirmwareUpdate__BeginInvoke(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  
  uVar1 = FUN_074c70a4();
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_08584ab0();
    if (lVar2 != 0) {
      FUN_08588638(lVar2,0,0);
      return;
    }
  }
  else if (*(long *)(unaff_x19 + 0x28) != 0) {
    FUN_04308fec(*(long *)(unaff_x19 + 0x28),*(undefined8 *)(unaff_x19 + 0x20));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


