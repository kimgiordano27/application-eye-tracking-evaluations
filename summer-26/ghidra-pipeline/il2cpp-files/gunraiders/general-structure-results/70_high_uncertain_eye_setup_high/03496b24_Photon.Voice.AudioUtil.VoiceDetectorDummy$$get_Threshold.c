/*
FUNCTION_NAME: Photon.Voice.AudioUtil.VoiceDetectorDummy$$get_Threshold
ENTRY_POINT: 03496b24
PROGRAM: gunraiders-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Photon_Voice_AudioUtil_VoiceDetectorDummy__get_Threshold(void)

{
  char *local_40;
  undefined8 uStack_38;
  char *local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  if (DAT_04536798 == (code *)0x0) {
    local_18 = 0;
    local_40 = "OVRPlugin";
    uStack_38 = 9;
    local_30 = "ovrp_GetTrackingOrientationEnabled";
    uStack_28 = 0x22;
    local_20 = DAT_00b91518;
    local_14 = 0;
    DAT_04536798 = (code *)thunk_FUN_01c49924(&local_40);
  }
  (*DAT_04536798)();
  return;
}


