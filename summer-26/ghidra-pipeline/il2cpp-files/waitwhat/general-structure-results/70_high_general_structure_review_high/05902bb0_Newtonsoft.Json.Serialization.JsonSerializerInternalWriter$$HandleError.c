/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$HandleError
ENTRY_POINT: 05902bb0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__HandleError(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 unaff_w21;
  long unaff_x25;
  
  puVar2 = *(undefined8 **)(param_1 + 0xfb8);
  *(undefined4 *)(unaff_x25 + 0x38) = unaff_w21;
  *(undefined4 *)(unaff_x25 + 0x3c) = 0xffffffff;
  *(undefined4 *)(unaff_x25 + 0x34) = unaff_w21;
  lVar1 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(*puVar2);
  FUN_05903a20();
  if (lVar1 != 0) {
    FUN_05903ad4(lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


