/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_GetMrcAudioSampleRate
ENTRY_POINT: 069676a0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_GetMrcAudioSampleRate(void)

{
  uint unaff_w19;
  long unaff_x20;
  
  if ((unaff_w19 >> 6 & 1) == 0) {
    FUN_069673d4();
  }
  else {
    FUN_0696733c();
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    if ((unaff_w19 >> 7 & 1) == 0) {
      FUN_069673d4();
      return;
    }
    FUN_0696733c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


