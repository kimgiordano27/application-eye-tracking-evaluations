/*
FUNCTION_NAME: Best.HTTP.JSON.LitJson.JsonData$$ToJsonData
ENTRY_POINT: 03338b24
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


undefined8 Best_HTTP_JSON_LitJson_JsonData__ToJsonData(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long unaff_x22;
  undefined8 unaff_x27;
  undefined8 unaff_x29;
  ulong in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  uVar2 = FUN_032f8954(0);
  Best_HTTP_Caching_CacheMetadataIndexingService___ctor();
  Best_HTTP_Caching_CacheMetadataIndexingService___ctor();
  FUN_0333749c(uVar2,uVar2);
  FUN_032f902c();
  uVar3 = FUN_032f82e8();
  FUN_03337624(uVar3,uVar2);
  puVar1 = PTR_DAT_070c4e00;
  lVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)PTR_DAT_070c4e00);
  FUN_033078b8(lVar4,0);
  *(undefined8 *)(lVar4 + 0x10) = unaff_x29;
  FUN_0333775c();
  FUN_033378a8(*(undefined8 *)(lVar4 + 0x10),uVar2,*(undefined8 *)(lVar4 + 0x10));
  lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar1);
  FUN_033078b8(lVar5,0);
  *(undefined8 *)(lVar5 + 0x10) = uVar2;
  FUN_033378a8();
  FUN_0333736c(*(undefined8 *)(lVar5 + 0x10));
  FUN_03337198(in_stack_00000018,*(undefined8 *)(lVar5 + 0x10));
  lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar1);
  FUN_033078b8(lVar6,0);
  *(undefined8 *)(lVar6 + 0x10) = unaff_x27;
  if ((in_stack_00000008 & 0x100000000) == 0) {
    if (*(int *)(*(long *)PTR_DAT_070c4e08 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    Best_HTTP_Caching_CacheMetadataIndexingService___ctor();
  }
  if ((in_stack_00000008 & 1) == 0) {
    uVar2 = *(undefined8 *)(lVar6 + 0x10);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x10);
    if (*(int *)(*(long *)PTR_DAT_070c4e08 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    Best_HTTP_Caching_CacheMetadataIndexingService___ctor(uVar2,uVar3,uVar2);
  }
  plVar7 = (long *)FUN_03188b1c(*(undefined8 *)PTR_DAT_070c4570,1);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  lVar8 = thunk_FUN_031c3cac(lVar6,*(undefined8 *)(*plVar7 + 0x40));
  puVar1 = PTR_DAT_070c4de0;
  if (lVar8 == 0) {
    uVar2 = thunk_FUN_031d1698();
                    /* WARNING: Subroutine does not return */
    FUN_03188b9c(uVar2,0);
  }
  if ((int)plVar7[3] != 0) {
    plVar7[4] = lVar6;
    uVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)puVar1);
    thunk_FUN_0330ca8c(uVar2,in_stack_00000010,lVar4,lVar5,plVar7,0);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


