/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Console$$OnDisable
ENTRY_POINT: 089ffb68
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


void Meta_XR_ImmersiveDebugger_UserInterface_Console__OnDisable(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    HdyRpc_RequestHspSetup__set_StreamId();
    return;
  }
  return;
}


