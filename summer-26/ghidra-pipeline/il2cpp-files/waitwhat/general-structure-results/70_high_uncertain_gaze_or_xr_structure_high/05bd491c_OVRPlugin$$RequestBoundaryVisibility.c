/*
FUNCTION_NAME: OVRPlugin$$RequestBoundaryVisibility
ENTRY_POINT: 05bd491c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__RequestBoundaryVisibility(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  
  uVar1 = FUN_03188b1c();
  uVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(*unaff_x23);
  FUN_043a7c94(uVar2,uVar1,*unaff_x22);
  *(undefined8 *)(unaff_x19 + 0x80) = uVar2;
  return;
}


