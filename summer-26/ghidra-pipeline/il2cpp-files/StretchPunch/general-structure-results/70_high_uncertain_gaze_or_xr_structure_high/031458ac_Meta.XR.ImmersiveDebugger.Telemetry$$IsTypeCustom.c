/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$IsTypeCustom
ENTRY_POINT: 031458ac
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Telemetry__IsTypeCustom
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long in_x9;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000030;
  
  uStack0000000000000020 = param_2;
  uStack0000000000000030 = param_1;
  FUN_031458cc(param_3,param_4,*(undefined8 *)(in_x9 + 0x70));
  return;
}


