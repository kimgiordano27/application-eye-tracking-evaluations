/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$HasCreatorParameter
ENTRY_POINT: 059078dc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__HasCreatorParameter(void)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 in_w8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined *puVar5;
  
  *(undefined1 *)(unaff_x22 + 0x855) = in_w8;
  if (unaff_x21 == 0) {
    thunk_FUN_031edd38(PTR_DAT_070c2888);
                    /* try { // try from 05907968 to 05a07977 has its CatchHandler @ 05907ab4 */
    uVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
    puVar5 = PTR_DAT_071050f0;
  }
  else if (unaff_x20 == 0) {
                    /* try { // try from 05907984 to 05a07997 has its CatchHandler @ 05907ab0 */
    thunk_FUN_031edd38(PTR_DAT_070c2888);
    uVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
    puVar5 = PTR_DAT_071050f8;
  }
  else {
    if (unaff_x19 != 0) {
      lVar2 = FUN_03188b1c(*(undefined8 *)PTR_DAT_070c28d8,3);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 059079e4 to 05a079f7 has its CatchHandler @ 05907a9c */
        FUN_03188cd8();
      }
      uVar1 = *(uint *)(lVar2 + 0x18);
      if (((uVar1 != 0) && (*(long *)(lVar2 + 0x20) = unaff_x21, uVar1 != 1)) &&
         (*(long *)(lVar2 + 0x28) = unaff_x20, puVar5 = PTR_DAT_070c9c80, 2 < uVar1)) {
        *(long *)(lVar2 + 0x30) = unaff_x19;
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        FUN_059075ac(lVar2);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    thunk_FUN_031edd38(PTR_DAT_070c2888);
    uVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
    puVar5 = PTR_DAT_07105198;
  }
  uVar4 = thunk_FUN_031edd38(puVar5);
  FUN_05897880(uVar3,uVar4,0);
  uVar4 = thunk_FUN_031edd38(PTR_DAT_071051a0);
                    /* WARNING: Subroutine does not return */
  FUN_03188b9c(uVar3,uVar4);
}


