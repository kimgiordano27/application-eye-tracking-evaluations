/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_TraceWriter
ENTRY_POINT: 05908338
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


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_TraceWriter
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  int unaff_w19;
  int unaff_w20;
  int unaff_w21;
  uint unaff_w22;
  long lVar7;
  undefined8 uVar8;
  uint unaff_w25;
  long *unaff_x27;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000090;
  undefined8 uStack00000000000000a0;
  
  uStack0000000000000008 = param_1;
  uStack0000000000000080 = param_2;
  uStack0000000000000090 = param_2;
  uStack00000000000000a0 = param_2;
                    /* try { // try from 05908348 to 05a0841f has its CatchHandler @ 05907f80 */
  FUN_04e1e41c(param_3,param_4,unaff_w21);
  lVar5 = *unaff_x27;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar5 = *unaff_x27;
  }
  uVar4 = uStack00000000000000a0;
  uVar3 = uStack0000000000000090;
  uVar2 = uStack0000000000000080;
  puVar1 = PTR_DAT_071051e8;
  puVar6 = *(undefined8 **)(lVar5 + 0xb8);
  lVar7 = puVar6[2];
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar6 = *(undefined8 **)(*unaff_x27 + 0xb8);
    }
    uVar8 = *puVar6;
    lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_071051e0);
    FUN_04aa2870(lVar7,uVar8,*(undefined8 *)PTR_DAT_071051f0,0);
    *(long *)(*(long *)(*unaff_x27 + 0xb8) + 0x10) = lVar7;
  }
  uStack0000000000000080 = uVar2;
  uStack0000000000000090 = uVar3;
  uStack00000000000000a0 = uVar4;
  FUN_03c41b5c(unaff_w20 + unaff_w21 + unaff_w19 + ((unaff_w22 ^ 0xffffffff) & 1) +
               ((unaff_w25 ^ 0xffffffff) & 1),&stack0x00000080,lVar7,*(undefined8 *)puVar1);
  return;
}


