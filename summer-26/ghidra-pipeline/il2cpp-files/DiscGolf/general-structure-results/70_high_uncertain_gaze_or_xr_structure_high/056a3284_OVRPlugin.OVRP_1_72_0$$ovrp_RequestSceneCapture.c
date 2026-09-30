/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_RequestSceneCapture
ENTRY_POINT: 056a3284
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint OVRPlugin_OVRP_1_72_0__ovrp_RequestSceneCapture(undefined8 param_1)

{
  uint uVar1;
  undefined4 unaff_w21;
  undefined8 uStack0000000000000040;
  
  uStack0000000000000040 = param_1;
  uVar1 = FUN_05642b54(unaff_w21);
  return uVar1 & 1;
}


