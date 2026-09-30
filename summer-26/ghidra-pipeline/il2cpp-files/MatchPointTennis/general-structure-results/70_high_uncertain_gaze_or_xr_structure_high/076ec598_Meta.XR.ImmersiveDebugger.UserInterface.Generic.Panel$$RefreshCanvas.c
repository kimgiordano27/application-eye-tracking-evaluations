/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Panel$$RefreshCanvas
ENTRY_POINT: 076ec598
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 78
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Panel__RefreshCanvas(undefined8 param_1)

{
  long unaff_x20;
  
  WebSocketSharp_Net_ChunkedRequestStream__onRead(0x3f800000,param_1,0);
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    FUN_09805588(*(long *)(unaff_x20 + 0x30),1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


