/*
FUNCTION_NAME: Mono.Net.Security.AsyncWriteRequest$$Run
ENTRY_POINT: 05270fe4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 76
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void Mono_Net_Security_AsyncWriteRequest__Run(long param_1,undefined4 param_2)

{
  long lVar1;
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  if (DAT_06b7d398 == (code *)0x0) {
    local_50 = "OVRPlugin";
    uStack_48 = 9;
    local_40 = "ovrp_StartFaceTracking2";
    uStack_38 = 0x17;
    local_28 = 0xc;
    local_30 = DAT_01206d88;
    local_24 = 0;
    DAT_06b7d398 = (code *)thunk_FUN_02d9d7f0(&local_50);
  }
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + 0x20;
  }
  (*DAT_06b7d398)(lVar1,param_2);
  return;
}


