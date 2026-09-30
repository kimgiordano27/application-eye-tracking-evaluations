/*
FUNCTION_NAME: FUN_068b5a78
ENTRY_POINT: 068b5a78
PROGRAM: waitwhat-libil2cpp.so
SCORE: 82
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_5;functionality_data_collection_or_telemetry_hits_5
*/


void FUN_068b5a78(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  thunk_FUN_031edd38(PTR_DAT_070c2418);
  FUN_02d35640();
  puVar1 = OVRTelemetry_QPLTelemetryClient_TypeInfo;
  uVar2 = thunk_FUN_031edd38(OVRTelemetry_QPLTelemetryClient_TypeInfo);
  FUN_0698f1f0(uVar2,param_1,0);
  thunk_FUN_031edd38(PTR_DAT_070c2da8);
  uVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
  uVar3 = thunk_FUN_031edd38(puVar1);
  FUN_0592abbc(uVar2,uVar3,0);
  uVar3 = thunk_FUN_031edd38(OVRTelemetryConstants_OVRManager_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_03188b9c(uVar2,uVar3);
}


