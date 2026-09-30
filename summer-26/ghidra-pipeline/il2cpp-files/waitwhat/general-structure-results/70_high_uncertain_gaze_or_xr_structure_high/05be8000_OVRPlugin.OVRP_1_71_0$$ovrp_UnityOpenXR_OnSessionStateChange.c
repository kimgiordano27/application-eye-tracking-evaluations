/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionStateChange
ENTRY_POINT: 05be8000
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionStateChange
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
               undefined8 param_4)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uStack0000000000000020;
  undefined8 uStack000000000000002c;
  
  uStack0000000000000020 =
       CONCAT44((param_2._4_4_ / param_3._4_4_) * *(float *)(unaff_x20 + 0x80),
                (param_2._0_4_ / param_3._0_4_) * *(float *)(unaff_x20 + 0x80));
  uStack000000000000002c = param_4;
  FUN_05b5ed20();
  *(undefined4 *)(unaff_x19 + 0x60) = *(undefined4 *)(unaff_x20 + 0x80);
  return;
}


