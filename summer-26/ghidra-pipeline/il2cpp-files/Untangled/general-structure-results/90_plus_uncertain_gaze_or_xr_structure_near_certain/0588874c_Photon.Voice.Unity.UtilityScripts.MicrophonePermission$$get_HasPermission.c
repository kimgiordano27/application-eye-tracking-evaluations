/*
FUNCTION_NAME: Photon.Voice.Unity.UtilityScripts.MicrophonePermission$$get_HasPermission
ENTRY_POINT: 0588874c
PROGRAM: Untangled-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_8;validity_or_gating_hits_4;telemetry_or_network_hits_1;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_1
*/


void Photon_Voice_Unity_UtilityScripts_MicrophonePermission__get_HasPermission(undefined4 param_1)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  if (DAT_071c7268 == (code *)0x0) {
    local_50 = "OVRPlugin";
    uStack_48 = 9;
    local_40 = "ovrp_SetTrackingPoseEnabledForInvisibleSession";
    uStack_38 = 0x2e;
    local_28 = 4;
    local_30 = DAT_013f53a0;
    local_24 = 0;
    DAT_071c7268 = (code *)thunk_FUN_02ef1ac4(&local_50);
  }
  (*DAT_071c7268)(param_1);
  return;
}


