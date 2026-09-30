/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionExiting
ENTRY_POINT: 060a0da8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFeature__OnSessionExiting(long param_1,undefined4 param_2)

{
  long unaff_x19;
  undefined8 uVar1;
  
  *(undefined4 *)(unaff_x19 + 0x2c) = param_2;
  uVar1 = *(undefined8 *)(param_1 + 0x728);
  *(undefined4 *)(unaff_x19 + 0x38) = 3;
  *(undefined8 *)(unaff_x19 + 0x30) = uVar1;
  thunk_FUN_071bca40();
  return;
}


