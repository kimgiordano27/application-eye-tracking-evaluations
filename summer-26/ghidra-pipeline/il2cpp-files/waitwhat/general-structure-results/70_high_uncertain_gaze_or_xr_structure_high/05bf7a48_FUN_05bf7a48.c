/*
FUNCTION_NAME: FUN_05bf7a48
ENTRY_POINT: 05bf7a48
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_05bf7a48(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = PTR_DAT_07116bb8;
  puVar1 = PTR_DAT_07114688;
  if ((DAT_0754ee3b & 1) == 0) {
    FUN_03188a78(PTR_DAT_07116bb8);
    FUN_03188a78(PTR_DAT_07114688);
    DAT_0754ee3b = 1;
  }
  uVar3 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_1 + 0x88) = 0xffffffffffffffff;
  uVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar3);
  FUN_05bdd8f8(uVar3,0);
  lVar4 = *(long *)puVar2;
  *(undefined8 *)(param_1 + 0xc0) = uVar3;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionBegin(param_1,0);
  return;
}


