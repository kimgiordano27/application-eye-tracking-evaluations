/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ScrollViewport$$Setup
ENTRY_POINT: 08a11c48
PROGRAM: Hyper-libil2cpp.so
SCORE: 93
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ScrollViewport__Setup(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_088ef30c(param_1,8,0);
  FUN_088ee62c();
  if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  if (*(int *)(*(long *)(unaff_x20 + 0x20) + 0x10) != 0) {
    FUN_088ef30c();
    FUN_088ee8d4();
  }
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    HdyRpc_RequestHspSetup__set_StreamId();
    return;
  }
  return;
}


