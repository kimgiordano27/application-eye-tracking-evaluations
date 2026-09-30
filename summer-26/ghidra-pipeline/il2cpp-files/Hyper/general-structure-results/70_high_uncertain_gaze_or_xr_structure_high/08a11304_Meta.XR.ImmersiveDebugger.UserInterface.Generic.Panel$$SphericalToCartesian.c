/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Panel$$SphericalToCartesian
ENTRY_POINT: 08a11304
PROGRAM: Hyper-libil2cpp.so
SCORE: 81
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Panel__SphericalToCartesian
               (undefined8 param_1,undefined8 param_2)

{
  int in_w8;
  long unaff_x20;
  
  if (in_w8 != 0) {
    FUN_088ef30c(param_2,8,0);
    FUN_088eebec(param_2,*(undefined4 *)(unaff_x20 + 0x18),0);
  }
  if (*(int *)(unaff_x20 + 0x1c) != 0) {
    FUN_088ef30c(param_2,0x10,0);
    FUN_088eebec(param_2,*(undefined4 *)(unaff_x20 + 0x1c),0);
  }
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    HdyRpc_RequestHspSetup__set_StreamId(*(long *)(unaff_x20 + 0x10),param_2,0);
    return;
  }
  return;
}


