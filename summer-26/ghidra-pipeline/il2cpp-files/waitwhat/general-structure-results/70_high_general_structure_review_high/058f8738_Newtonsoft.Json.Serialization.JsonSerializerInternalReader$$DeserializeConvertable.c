/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$DeserializeConvertable
ENTRY_POINT: 058f8738
PROGRAM: waitwhat-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__DeserializeConvertable(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x22;
  
  FUN_03188a78();
  FUN_03188a78(PTR_DAT_070fcaa8);
  FUN_03188a78(PTR_DAT_07104b98);
  FUN_03188a78(PTR_DAT_07104b90);
  *(undefined1 *)(unaff_x20 + 0x7cb) = 1;
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar2 = *unaff_x22;
  }
  puVar1 = PTR_DAT_070fcaa8;
  puVar3 = *(undefined8 **)(lVar2 + 0xb8);
  lVar4 = puVar3[1];
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar5 = *puVar3;
    lVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_070fcaa0);
    FUN_0570ec28(lVar4,uVar5,*(undefined8 *)PTR_DAT_07104b98,0);
    *(long *)(*(long *)(*unaff_x22 + 0xb8) + 8) = lVar4;
  }
  FUN_03b01528(unaff_x19 + 0x20,lVar4,*(undefined8 *)puVar1);
  return;
}


