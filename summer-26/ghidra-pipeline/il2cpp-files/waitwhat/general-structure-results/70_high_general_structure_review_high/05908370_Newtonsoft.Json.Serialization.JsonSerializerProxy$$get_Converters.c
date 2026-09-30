/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_Converters
ENTRY_POINT: 05908370
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


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_Converters
               (undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int unaff_w19;
  int unaff_w20;
  int unaff_w21;
  uint unaff_w22;
  long lVar8;
  undefined8 uVar9;
  uint unaff_w25;
  long *unaff_x27;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  
  uVar7 = in_stack_000000a8;
  uVar6 = in_stack_000000a0;
  uVar5 = in_stack_00000098;
  uVar4 = in_stack_00000090;
  uVar3 = in_stack_00000088;
  uVar2 = in_stack_00000080;
  puVar1 = PTR_DAT_071051e8;
  lVar8 = param_1[2];
  if (lVar8 == 0) {
    if (*(int *)(param_2 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      param_1 = *(undefined8 **)(*unaff_x27 + 0xb8);
    }
    uVar9 = *param_1;
    lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_071051e0);
    FUN_04aa2870(lVar8,uVar9,*(undefined8 *)PTR_DAT_071051f0,0);
    *(long *)(*(long *)(*unaff_x27 + 0xb8) + 0x10) = lVar8;
  }
  in_stack_00000080 = uVar2;
  in_stack_00000088 = uVar3;
  in_stack_00000090 = uVar4;
  in_stack_00000098 = uVar5;
  in_stack_000000a0 = uVar6;
  in_stack_000000a8 = uVar7;
  FUN_03c41b5c(unaff_w20 + unaff_w21 + unaff_w19 + ((unaff_w22 ^ 0xffffffff) & 1) +
               ((unaff_w25 ^ 0xffffffff) & 1),&stack0x00000080,lVar8,*(undefined8 *)puVar1);
  return;
}


