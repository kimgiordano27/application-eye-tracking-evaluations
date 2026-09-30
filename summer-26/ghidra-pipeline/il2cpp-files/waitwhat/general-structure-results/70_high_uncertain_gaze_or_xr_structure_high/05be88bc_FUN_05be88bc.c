/*
FUNCTION_NAME: FUN_05be88bc
ENTRY_POINT: 05be88bc
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


void FUN_05be88bc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = PTR_DAT_07116bb8;
  puVar1 = PTR_DAT_07112b20;
  if ((DAT_0754ed3a & 1) == 0) {
    FUN_03188a78(PTR_DAT_07112b20);
    FUN_03188a78(PTR_DAT_07116bb8);
    DAT_0754ed3a = 1;
  }
  uVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar1);
  FUN_05be5b08();
  lVar4 = *(long *)puVar2;
  *(undefined8 *)(param_1 + 0x80) = uVar3;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionBegin(param_1);
  return;
}


