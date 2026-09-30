/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetInternalSerializer
ENTRY_POINT: 058f906c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer
          (ulong param_1,long *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long unaff_x20;
  uint unaff_w21;
  ulong unaff_x26;
  long lVar7;
  undefined8 uVar8;
  
  if ((param_1 & 1) == 0) {
    FUN_03188a78(PTR_DAT_071047f8);
    FUN_03188a78(PTR_DAT_07104bd8);
    FUN_03188a78(PTR_DAT_07104be0);
    FUN_03188a78(PTR_DAT_07104b90);
    *(undefined1 *)(unaff_x20 + 0x7d2) = 1;
  }
  uVar2 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
  if ((uVar2 & 1) == 0) {
    uVar8 = FUN_058e22a4(0);
    uVar5 = thunk_FUN_031edd38(PTR_DAT_07104be8);
                    /* WARNING: Subroutine does not return */
    FUN_03188b9c(uVar8,uVar5);
  }
  lVar3 = FUN_058f870c(param_2);
  if ((unaff_x26 & 1) == 0) {
    if (lVar3 == 0) goto LAB_058f9230;
    FUN_05995108(lVar3,0);
    lVar3 = 0;
  }
  else {
    if (lVar3 == 0) {
LAB_058f9230:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    lVar3 = FUN_05995b2c(lVar3,0);
  }
  puVar1 = PTR_DAT_07104b90;
  lVar4 = *(long *)PTR_DAT_07104b90;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar4 = *(long *)puVar1;
  }
  puVar6 = *(undefined8 **)(lVar4 + 0xb8);
  lVar7 = puVar6[3];
  if (lVar7 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar6 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar8 = *puVar6;
    lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_071047f8);
    FUN_03dfdd50(lVar7,uVar8,*(undefined8 *)PTR_DAT_07104be0,0);
    *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18) = lVar7;
  }
  uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)PTR_DAT_07104bd8);
  FUN_058f9234(uVar8,1,unaff_w21 & 1,lVar7);
  if (lVar3 == 0) {
    FUN_058f94fc(param_2,uVar8);
  }
  else {
    FUN_058f937c(param_2,lVar3,uVar8);
  }
  return uVar8;
}


