/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeList
ENTRY_POINT: 05903f24
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeList(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  uint unaff_w19;
  long lVar7;
  long unaff_x21;
  
  FUN_03188a78(PTR_DAT_071050b0);
  FUN_03188a78(PTR_DAT_071050b8);
  FUN_03188a78(PTR_DAT_071050c0);
  FUN_03188a78(PTR_DAT_071050c8);
  FUN_03188a78(PTR_DAT_071050d0);
  *(undefined1 *)(unaff_x21 + 0x835) = 1;
  puVar1 = PTR_DAT_070fbbf0;
  if ((int)unaff_w19 < 0x51) {
    if (0x11 < (int)unaff_w19) {
      if ((int)unaff_w19 < 0x21) {
        if (unaff_w19 != 0x1d) {
          if (unaff_w19 == 0x20) {
            uVar3 = FUN_057b5e54(*(undefined8 *)PTR_DAT_07105080);
            uVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                              (*(undefined8 *)PTR_DAT_070c70f0);
            uVar4 = 0x80070020;
            goto LAB_059043d8;
          }
          goto LAB_059041b0;
        }
        uVar3 = FUN_057b5e54(*(undefined8 *)PTR_DAT_07105098);
        uVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*(undefined8 *)PTR_DAT_070c70f0);
        uVar4 = 0x1d;
      }
      else if (unaff_w19 == 0x21) {
        uVar3 = FUN_057b5e54(*(undefined8 *)PTR_DAT_071050c0);
        uVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*(undefined8 *)PTR_DAT_070c70f0);
        uVar4 = 0x21;
      }
      else if (unaff_w19 == 0x27) {
        uVar3 = FUN_057b5e54(*(undefined8 *)PTR_DAT_071050b0);
        uVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*(undefined8 *)PTR_DAT_070c70f0);
        uVar4 = 0x27;
      }
      else {
        if (unaff_w19 != 0x50) goto LAB_059041b0;
        uVar3 = FUN_057b5e54(*(undefined8 *)PTR_DAT_07105048);
        uVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*(undefined8 *)PTR_DAT_070c70f0);
        uVar4 = 0x50;
      }
      uVar4 = uVar4 | 0x80070000;
      goto LAB_059043d8;
    }
    if ((int)unaff_w19 < 5) {
      if (unaff_w19 == 2) {
        uVar2 = FUN_057b5e54(*(undefined8 *)PTR_DAT_071050c8);
        uVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*(undefined8 *)PTR_DAT_070fb4b0);
        FUN_058e28ac(uVar3,uVar2);
        return uVar3;
      }
      if (unaff_w19 == 3) {
        uVar2 = FUN_057b5e54(*(undefined8 *)PTR_DAT_07105050);
        uVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*(undefined8 *)PTR_DAT_070fb4a8);
        FUN_058e2100(uVar3,uVar2,0);
        return uVar3;
      }
      if (unaff_w19 == 4) {
        lVar5 = *(long *)PTR_DAT_070fbbf0;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_031e5338();
          lVar5 = *(long *)puVar1;
        }
        if (*(char *)(*(long *)(lVar5 + 0xb8) + 8) != '\0') {
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          thunk_FUN_031d719c();
        }
        uVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*(undefined8 *)PTR_DAT_070c70f0);
        uVar3 = *(undefined8 *)PTR_DAT_071050d0;
        uVar4 = 0x80070004;
        goto LAB_059043d8;
      }
    }
    else if ((int)unaff_w19 < 0xf) {
      if (unaff_w19 == 5) {
        uVar2 = FUN_057b5e54(*(undefined8 *)PTR_DAT_07105040);
        uVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*(undefined8 *)PTR_DAT_070cacb8);
        FUN_0594def4(uVar3,uVar2,0);
        return uVar3;
      }
      if (unaff_w19 == 6) {
        uVar3 = FUN_057b5e54(*(undefined8 *)PTR_DAT_07105068);
        uVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*(undefined8 *)PTR_DAT_070c70f0);
        uVar4 = 0x80070006;
        goto LAB_059043d8;
      }
    }
    else {
      if (unaff_w19 == 0xf) {
        uVar3 = FUN_057b5e54(*(undefined8 *)PTR_DAT_07105088);
        uVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*(undefined8 *)PTR_DAT_070c70f0);
        uVar4 = 0x8007000f;
        goto LAB_059043d8;
      }
      if (unaff_w19 == 0x11) {
        uVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*(undefined8 *)PTR_DAT_070c70f0);
        uVar3 = *(undefined8 *)PTR_DAT_07105090;
        uVar4 = 0x11;
        goto LAB_05904210;
      }
    }
LAB_059041b0:
    uVar2 = thunk_FUN_031c39fc(*(undefined8 *)PTR_DAT_07105038,&stack0x0000000c);
    uVar3 = FUN_057c02e8(*(undefined8 *)PTR_DAT_07105058,uVar2);
  }
  else {
    if (0x91 < unaff_w19) {
      if (unaff_w19 == 0xce) {
        uVar2 = FUN_057b5e54(*(undefined8 *)PTR_DAT_071050b8);
        uVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*(undefined8 *)PTR_DAT_070fb4b8);
        FUN_058e5fb0(uVar3,uVar2,0);
        return uVar3;
      }
      if (unaff_w19 == 0x10b) {
        uVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*(undefined8 *)PTR_DAT_070c70f0);
        uVar3 = *(undefined8 *)PTR_DAT_071050a8;
        uVar4 = 0x10b;
LAB_05904210:
        uVar4 = uVar4 | 0x80070000;
        goto LAB_059043d8;
      }
      if (unaff_w19 == 6000) {
        uVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*(undefined8 *)PTR_DAT_070c70f0);
        uVar4 = 0x80071770;
        uVar3 = *(undefined8 *)PTR_DAT_07105060;
        goto LAB_059043d8;
      }
      goto LAB_059041b0;
    }
    uVar4 = unaff_w19 & 0xff;
    puVar6 = (undefined8 *)PTR_DAT_07105070;
    if (uVar4 == 0x52) {
LAB_059042e0:
      uVar3 = FUN_057b5e54(*puVar6);
    }
    else {
      if (uVar4 != 0x57) {
        puVar6 = (undefined8 *)PTR_DAT_071050a0;
        if (uVar4 != 0x91) goto LAB_059041b0;
        goto LAB_059042e0;
      }
      lVar7 = *(long *)PTR_DAT_070c6d58;
      lVar5 = *(long *)(lVar7 + 0x38);
      if (lVar5 == 0) {
        FUN_031c0a30(lVar7);
        lVar5 = *(long *)(lVar7 + 0x38);
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_031c09d4();
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_031c09d4();
      }
      uVar3 = FUN_057c0370(*(undefined8 *)PTR_DAT_07105078,**(undefined8 **)(lVar5 + 0xb8),0);
    }
  }
  uVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)PTR_DAT_070c70f0);
  uVar4 = unaff_w19 | 0x80070000;
LAB_059043d8:
  FUN_058e2d60(uVar2,uVar3,uVar4,0);
  return uVar2;
}


