/*
FUNCTION_NAME: Best.HTTP.JSON.LitJson.JsonMapper$$ToJson
ENTRY_POINT: 0333fd20
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


undefined8 Best_HTTP_JSON_LitJson_JsonMapper__ToJson(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  long unaff_x21;
  undefined8 uVar6;
  undefined8 unaff_x22;
  undefined8 unaff_x24;
  ulong unaff_x25;
  undefined8 unaff_x27;
  
  FUN_032f4b0c(param_1,param_2,3,0);
  FUN_0333dd14();
  puVar1 = PTR_DAT_070c4ed8;
  lVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)PTR_DAT_070c4ed8);
  FUN_033078b8(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = unaff_x27;
  FUN_0333de64();
  FUN_0333dfb0();
  FUN_0333dfb0();
  lVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar1);
  FUN_033078b8(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = unaff_x24;
  FUN_0333dfb0();
  FUN_0333d7d8();
  FUN_0333dfb0();
  lVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar1);
  FUN_033078b8(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = unaff_x22;
  FUN_0333e0d8(*(undefined8 *)(unaff_x20 + 0x10));
  if ((unaff_x25 & 1) == 0) {
    uVar5 = *(undefined8 *)(lVar2 + 0x10);
    uVar6 = *(undefined8 *)(unaff_x21 + 0x10);
    if (*(int *)(*(long *)PTR_DAT_070c4ee0 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    FUN_0333d7d8(uVar5,uVar6,uVar5);
  }
  plVar3 = (long *)FUN_03188b1c(*(undefined8 *)PTR_DAT_070c4570,1);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  lVar4 = thunk_FUN_031c3cac(lVar2,*(undefined8 *)(*plVar3 + 0x40));
  puVar1 = PTR_DAT_070c4eb8;
  if (lVar4 == 0) {
    uVar5 = thunk_FUN_031d1698();
                    /* WARNING: Subroutine does not return */
    FUN_03188b9c(uVar5,0);
  }
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar2;
    uVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)puVar1);
    thunk_FUN_0330ca8c();
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


