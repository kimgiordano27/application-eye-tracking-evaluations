/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionDestroy
ENTRY_POINT: 05b8fd4c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFeature__OnSessionDestroy(long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_DAT_07115a68;
  puVar1 = PTR_DAT_07115a60;
  if ((DAT_0754e91f & 1) == 0) {
    FUN_03188a78(PTR_DAT_07115a68);
    FUN_03188a78(PTR_DAT_07115a60);
    DAT_0754e91f = 1;
  }
  FUN_05971910(param_1,0);
  uVar3 = *(undefined8 *)puVar1;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  uVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar3);
  FUN_042e4394(uVar3,param_3,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  return;
}


