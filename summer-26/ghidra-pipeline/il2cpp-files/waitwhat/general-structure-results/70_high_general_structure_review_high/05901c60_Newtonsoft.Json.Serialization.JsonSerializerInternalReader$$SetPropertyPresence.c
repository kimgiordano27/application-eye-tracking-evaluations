/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$SetPropertyPresence
ENTRY_POINT: 05901c60
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


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalReader__SetPropertyPresence(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x24;
  long unaff_x25;
  int iStack000000000000000c;
  
  FUN_03188a78(PTR_DAT_070fbbf0);
  *(undefined1 *)(unaff_x25 + 0x82c) = 1;
  iStack000000000000000c = 0;
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar2 = FUN_05904824();
  if (iStack000000000000000c == 0) {
    if ((int)uVar2 == -1) {
      thunk_FUN_031edd38(PTR_DAT_070c70f0);
      uVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
      FUN_058e2d04(uVar2,0);
      goto LAB_05901d34;
    }
  }
  else {
    if (iStack000000000000000c != 0x6d) {
      uVar2 = FUN_05901240();
      iVar1 = iStack000000000000000c;
      thunk_FUN_031edd38(PTR_DAT_070fbbf0);
      FUN_02d35640();
      uVar2 = FUN_05903dfc(uVar2,iVar1,0);
LAB_05901d34:
      uVar3 = thunk_FUN_031edd38(PTR_DAT_07104f28);
                    /* WARNING: Subroutine does not return */
      FUN_03188b9c(uVar2,uVar3);
    }
    uVar2 = 0;
  }
  return uVar2;
}


