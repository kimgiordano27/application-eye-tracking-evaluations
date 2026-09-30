/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspector$$get_Category
ENTRY_POINT: 089f44b4
PROGRAM: Hyper-libil2cpp.so
SCORE: 78
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void Meta_XR_ImmersiveDebugger_DebugInspector__get_Category(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_088ef30c(param_1,0x1d,0);
  FUN_088ee35c(*(undefined4 *)(unaff_x20 + 0x28));
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    HdyRpc_RequestHspSetup__set_StreamId();
    return;
  }
  return;
}


