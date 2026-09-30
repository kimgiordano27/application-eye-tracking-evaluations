/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$IsTypeCustom
ENTRY_POINT: 06dccb14
PROGRAM: padelvrtraining-libil2cpp.so
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
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined8 *param_3)

{
  *(long *)((long)param_3 + 0x3c) = param_2._8_8_;
  *(long *)((long)param_3 + 0x34) = param_2._0_8_;
  param_3[1] = param_1._8_8_;
  *param_3 = param_1._0_8_;
  *(long *)((long)param_3 + 0x4c) = param_2._8_8_;
  *(long *)((long)param_3 + 0x44) = param_2._0_8_;
  return;
}


