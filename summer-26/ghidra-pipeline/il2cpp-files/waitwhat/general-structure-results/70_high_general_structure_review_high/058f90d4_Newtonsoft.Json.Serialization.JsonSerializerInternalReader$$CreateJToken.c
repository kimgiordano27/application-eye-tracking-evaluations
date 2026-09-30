/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateJToken
ENTRY_POINT: 058f90d4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateJToken(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  uint unaff_w21;
  ulong unaff_x26;
  long lVar5;
  undefined8 uVar6;
  
  lVar2 = FUN_058f870c();
  if ((unaff_x26 & 1) == 0) {
    if (lVar2 == 0) goto LAB_058f9230;
    FUN_05995108(lVar2,0);
    lVar2 = 0;
  }
  else {
    if (lVar2 == 0) {
LAB_058f9230:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    lVar2 = FUN_05995b2c(lVar2,0);
  }
  puVar1 = PTR_DAT_07104b90;
  lVar3 = *(long *)PTR_DAT_07104b90;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar3 = *(long *)puVar1;
  }
  puVar4 = *(undefined8 **)(lVar3 + 0xb8);
  lVar5 = puVar4[3];
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar4 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar6 = *puVar4;
    lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_071047f8);
    FUN_03dfdd50(lVar5,uVar6,*(undefined8 *)PTR_DAT_07104be0,0);
    *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18) = lVar5;
  }
  uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)PTR_DAT_07104bd8);
  FUN_058f9234(uVar6,1,unaff_w21 & 1,lVar5);
  if (lVar2 == 0) {
    FUN_058f94fc();
  }
  else {
    FUN_058f937c();
  }
  return uVar6;
}


