/*
FUNCTION_NAME: OVRPlugin.OVRP_1_93_0$$ovrp_SetWideMotionModeHandPoses
ENTRY_POINT: 05bf7ab8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1;functionality_possible_biometrics_hits_2
*/


void OVRPlugin_OVRP_1_93_0__ovrp_SetWideMotionModeHandPoses(long param_1)

{
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionBegin();
  return;
}


