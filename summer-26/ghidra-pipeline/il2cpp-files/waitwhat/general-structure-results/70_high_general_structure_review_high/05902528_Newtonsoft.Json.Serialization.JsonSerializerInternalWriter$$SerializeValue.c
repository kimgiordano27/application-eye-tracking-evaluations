/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeValue
ENTRY_POINT: 05902528
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeValue(long param_1)

{
  byte bVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  FUN_03188a78(*(undefined8 *)(param_1 + 0xf88));
  FUN_03188a78(PTR_DAT_07104f60);
  *(undefined1 *)(unaff_x21 + 0x823) = 1;
  if (unaff_x19 == (long *)0x0) {
    thunk_FUN_031edd38(PTR_DAT_070c2888);
    uVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
    uVar4 = thunk_FUN_031edd38(PTR_DAT_070f6618);
    FUN_05897880(uVar3,uVar4,0);
  }
  else {
    if (*(char *)(unaff_x20 + 0x55) == '\0') {
      FUN_058f95b0();
      return;
    }
    lVar6 = *unaff_x19;
    bVar1 = *(byte *)(*(long *)PTR_DAT_07104f88 + 0x130);
    if ((((bVar1 <= *(byte *)(lVar6 + 0x130)) &&
         (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_07104f88))
        && (plVar2 = (long *)(**(code **)(lVar6 + 0x238))(), plVar2 != (long *)0x0)) &&
       (*plVar2 == *(long *)PTR_DAT_07104f60)) {
      FUN_059039f8();
      return;
    }
    thunk_FUN_031edd38(PTR_DAT_070c3af0);
    uVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
    uVar4 = thunk_FUN_031edd38(PTR_DAT_07104f90);
    uVar5 = thunk_FUN_031edd38(PTR_DAT_070f6618);
    FUN_0589b344(uVar3,uVar4,uVar5,0);
  }
  uVar4 = thunk_FUN_031edd38(PTR_DAT_07104f98);
                    /* WARNING: Subroutine does not return */
  FUN_03188b9c(uVar3,uVar4);
}


