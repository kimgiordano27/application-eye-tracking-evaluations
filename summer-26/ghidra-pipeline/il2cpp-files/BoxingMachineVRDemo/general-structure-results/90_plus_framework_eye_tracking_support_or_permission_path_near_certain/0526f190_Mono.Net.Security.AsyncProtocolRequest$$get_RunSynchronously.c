/*
FUNCTION_NAME: Mono.Net.Security.AsyncProtocolRequest$$get_RunSynchronously
ENTRY_POINT: 0526f190
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 94
LABEL: framework_eye_tracking_support_or_permission_path_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_1;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void Mono_Net_Security_AsyncProtocolRequest__get_RunSynchronously(undefined8 param_1)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  if (DAT_06b7d1b0 == (code *)0x0) {
    local_50 = "OVRPlugin";
    uStack_48 = 9;
    local_40 = "ovrp_GetEyeTrackingEnabled";
    uStack_38 = 0x1a;
    local_28 = 8;
    local_30 = DAT_01206d88;
    local_24 = 0;
    DAT_06b7d1b0 = (code *)thunk_FUN_02d9d7f0(&local_50);
  }
  (*DAT_06b7d1b0)(param_1);
  return;
}


