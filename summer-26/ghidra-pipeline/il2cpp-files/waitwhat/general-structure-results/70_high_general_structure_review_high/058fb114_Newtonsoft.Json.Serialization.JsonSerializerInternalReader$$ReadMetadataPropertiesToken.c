/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ReadMetadataPropertiesToken
ENTRY_POINT: 058fb114
PROGRAM: waitwhat-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ReadMetadataPropertiesToken
               (long *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long lVar2;
  long *unaff_x22;
  long unaff_x23;
  long *plVar3;
  
  lVar2 = *param_1;
  plVar3 = *(long **)(unaff_x23 + 0x1a0);
  *(undefined8 *)(unaff_x19 + 0x78) = 0;
  if (lVar2 == 0) {
    uVar1 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_070ff620);
    FUN_05994c44(uVar1,0,*(undefined8 *)PTR_DAT_07104cd0,0);
    **(undefined8 **)(*unaff_x22 + 0xb8) = uVar1;
  }
  if (*(int *)(*plVar3 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  FUN_05998e7c();
  return;
}


