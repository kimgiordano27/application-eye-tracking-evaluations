/*
FUNCTION_NAME: Photon.Voice.Fusion.FusionVoiceClient$$Fusion.INetworkRunnerCallbacks.OnConnectRequest
ENTRY_POINT: 02914bd4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Photon_Voice_Fusion_FusionVoiceClient__Fusion_INetworkRunnerCallbacks_OnConnectRequest(void)

{
  char *local_40;
  undefined8 uStack_38;
  char *local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  if (DAT_04126eb0 == (code *)0x0) {
    local_18 = 0;
    local_40 = "OVRPlugin";
    uStack_38 = 9;
    local_30 = "ovrp_GetBoundaryVisible";
    uStack_28 = 0x17;
    local_20 = DAT_00d36ff0;
    local_14 = 0;
    DAT_04126eb0 = (code *)thunk_FUN_01a8a124(&local_40);
  }
  (*DAT_04126eb0)();
  return;
}


