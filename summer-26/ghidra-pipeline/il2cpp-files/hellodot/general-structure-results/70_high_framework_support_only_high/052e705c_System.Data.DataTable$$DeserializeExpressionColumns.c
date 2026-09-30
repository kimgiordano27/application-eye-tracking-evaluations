/*
FUNCTION_NAME: System.Data.DataTable$$DeserializeExpressionColumns
ENTRY_POINT: 052e705c
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_Data_DataTable__DeserializeExpressionColumns(undefined8 param_1)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  if (DAT_06a74340 == (code *)0x0) {
    local_50 = "OVRPlugin";
    uStack_48 = 9;
    local_40 = "ovrp_GetCurrentTrackingTransformPose";
    uStack_38 = 0x24;
    local_28 = 8;
    local_30 = DAT_0137dfe0;
    local_24 = 0;
    DAT_06a74340 = (code *)thunk_FUN_02ceaad8(&local_50);
  }
  (*DAT_06a74340)(param_1);
  return;
}


