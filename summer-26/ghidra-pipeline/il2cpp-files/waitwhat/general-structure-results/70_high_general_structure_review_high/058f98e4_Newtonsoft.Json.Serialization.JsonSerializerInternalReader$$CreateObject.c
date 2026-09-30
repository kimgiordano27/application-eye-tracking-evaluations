/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateObject
ENTRY_POINT: 058f98e4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateObject
               (undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_07104b90;
  if ((DAT_0754c7d7 & 1) == 0) {
    FUN_03188a78(PTR_DAT_07104c18);
    FUN_03188a78(PTR_DAT_07104c20);
    FUN_03188a78(PTR_DAT_07104c28);
    FUN_03188a78(PTR_DAT_07104c30);
    FUN_03188a78(PTR_DAT_07104c38);
    FUN_03188a78(PTR_DAT_07104c40);
    FUN_03188a78(PTR_DAT_07104b90);
    DAT_0754c7d7 = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar3 = *(long *)puVar1;
  }
  puVar4 = *(undefined8 **)(lVar3 + 0xb8);
  lVar5 = puVar4[4];
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar4 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar6 = *puVar4;
    lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_07104c20);
    FUN_03e0a94c(lVar5,uVar6,*(undefined8 *)PTR_DAT_07104c38,0);
    lVar3 = *(long *)puVar1;
    *(long *)(*(long *)(lVar3 + 0xb8) + 0x20) = lVar5;
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar3 = *(long *)puVar1;
  }
  puVar2 = PTR_DAT_07104c28;
  puVar4 = *(undefined8 **)(lVar3 + 0xb8);
  lVar7 = puVar4[5];
  if (lVar7 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar4 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar6 = *puVar4;
    lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_07104c18);
    FUN_03e06c84(lVar7,uVar6,*(undefined8 *)PTR_DAT_07104c40,0);
    *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28) = lVar7;
  }
  FUN_036e6b50(param_1,param_2,param_3 & 0xffffffff | param_4 << 0x20,lVar5,lVar7,
               *(undefined8 *)puVar2);
  return;
}


