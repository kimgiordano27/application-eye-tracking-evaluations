/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetFaceTrackingEnabled
ENTRY_POINT: 0610e14c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;telemetry_or_network_hits_1;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_1
*/


bool OVRPlugin_OVRP_1_78_0__ovrp_GetFaceTrackingEnabled(undefined8 param_1)

{
  int iVar1;
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  if (DAT_07ee1930 == (code *)0x0) {
    local_50 = "ovrplatformloader";
    uStack_48 = 0x11;
    local_40 = "ovr_AvatarEditorResult_GetRequestSent";
    uStack_38 = 0x25;
    local_30 = DAT_0164fd00;
    local_28 = 8;
    local_24 = 0;
    DAT_07ee1930 = (code *)thunk_FUN_036800c0(&local_50);
  }
  iVar1 = (*DAT_07ee1930)(param_1);
  return iVar1 != 0;
}


