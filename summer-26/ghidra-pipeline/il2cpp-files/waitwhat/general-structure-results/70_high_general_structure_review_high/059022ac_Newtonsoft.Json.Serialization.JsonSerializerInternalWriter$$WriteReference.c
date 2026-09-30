/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteReference
ENTRY_POINT: 059022ac
PROGRAM: waitwhat-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteReference(void)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int unaff_w21;
  int unaff_w22;
  long unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  
  FUN_03188a78(PTR_DAT_07104f58);
  FUN_03188a78(PTR_DAT_07104f60);
  *(undefined1 *)(unaff_x25 + 0x822) = 1;
  if (unaff_x24[7] == 0) {
LAB_059023b8:
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  uVar1 = FUN_05855750(unaff_x24[7],0);
  if ((uVar1 & 1) == 0) {
    uVar1 = (**(code **)(*unaff_x24 + 0x1a8))();
    if ((uVar1 & 1) == 0) {
      thunk_FUN_031edd38(PTR_DAT_070c2da8);
      uVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
      uVar6 = thunk_FUN_031edd38(PTR_DAT_07104f68);
      FUN_0592abbc(uVar5,uVar6,0);
    }
    else if (unaff_x23 == 0) {
      thunk_FUN_031edd38(PTR_DAT_070c2888);
      uVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
      uVar6 = thunk_FUN_031edd38(PTR_DAT_070f1510);
      FUN_05897880(uVar5,uVar6,0);
    }
    else {
      if (unaff_w21 < 0) {
        thunk_FUN_031edd38(PTR_DAT_070c5c08);
        uVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
        puVar3 = PTR_DAT_070ff1e8;
      }
      else {
        if (-1 < unaff_w22) {
          if (unaff_w21 <= *(int *)(unaff_x23 + 0x18) - unaff_w22) {
            if (*(char *)((long)unaff_x24 + 0x55) == '\0') {
              FUN_058f903c();
              return;
            }
            lVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                              (*(undefined8 *)PTR_DAT_07104f60);
            FUN_059038c0();
            if (lVar2 != 0) {
              FUN_05903974(lVar2);
              return;
            }
            goto LAB_059023b8;
          }
          thunk_FUN_031edd38(PTR_DAT_070c3af0);
          uVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
          uVar6 = thunk_FUN_031edd38(PTR_DAT_07104f78);
          FUN_058a1e9c(uVar5,uVar6,0);
          goto LAB_059024f0;
        }
        thunk_FUN_031edd38(PTR_DAT_070c5c08);
        uVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
        puVar3 = PTR_DAT_070cbf30;
      }
      uVar6 = thunk_FUN_031edd38(puVar3);
      uVar4 = thunk_FUN_031edd38(PTR_DAT_07104f70);
      FUN_0589ed08(uVar5,uVar6,uVar4,0);
    }
  }
  else {
    thunk_FUN_031edd38(PTR_DAT_070c2908);
    uVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
    uVar6 = thunk_FUN_031edd38(PTR_DAT_07104ee8);
    FUN_0593e4c4(uVar5,uVar6,0);
  }
LAB_059024f0:
  uVar6 = thunk_FUN_031edd38(PTR_DAT_07104f80);
                    /* WARNING: Subroutine does not return */
  FUN_03188b9c(uVar5,uVar6);
}


