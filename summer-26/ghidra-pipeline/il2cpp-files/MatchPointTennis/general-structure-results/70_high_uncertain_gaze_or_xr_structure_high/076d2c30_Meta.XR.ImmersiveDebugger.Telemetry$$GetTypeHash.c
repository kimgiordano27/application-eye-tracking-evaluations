/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$GetTypeHash
ENTRY_POINT: 076d2c30
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Telemetry__GetTypeHash(long param_1)

{
  bool in_CY;
  int in_w10;
  undefined4 in_register_00004054;
  long unaff_x21;
  undefined8 unaff_x22;
  
  if (!in_CY) {
    *(int *)(unaff_x21 + 0x18) = in_w10 + 1;
    *(undefined8 *)(param_1 + CONCAT44(in_register_00004054,in_w10) * 8 + 0x20) = unaff_x22;
    thunk_FUN_044bb4b4();
    return;
  }
  FUN_05bade44();
  return;
}


