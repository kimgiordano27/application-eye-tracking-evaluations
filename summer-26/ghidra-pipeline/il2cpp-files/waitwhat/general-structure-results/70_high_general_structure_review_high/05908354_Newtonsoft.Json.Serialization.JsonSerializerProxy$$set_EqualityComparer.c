/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_EqualityComparer
ENTRY_POINT: 05908354
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


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_EqualityComparer(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  int unaff_w19;
  int unaff_w20;
  int unaff_w21;
  uint unaff_w22;
  long lVar10;
  undefined8 uVar11;
  uint unaff_w25;
  long *unaff_x27;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  
  FUN_04e1e41c();
  lVar8 = *unaff_x27;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar8 = *unaff_x27;
  }
  uVar7 = in_stack_000000a8;
  uVar6 = in_stack_000000a0;
  uVar5 = in_stack_00000098;
  uVar4 = in_stack_00000090;
  uVar3 = in_stack_00000088;
  uVar2 = in_stack_00000080;
  puVar1 = PTR_DAT_071051e8;
  puVar9 = *(undefined8 **)(lVar8 + 0xb8);
  lVar10 = puVar9[2];
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar9 = *(undefined8 **)(*unaff_x27 + 0xb8);
    }
    uVar11 = *puVar9;
    lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)PTR_DAT_071051e0);
    FUN_04aa2870(lVar10,uVar11,*(undefined8 *)PTR_DAT_071051f0,0);
    *(long *)(*(long *)(*unaff_x27 + 0xb8) + 0x10) = lVar10;
  }
  in_stack_00000080 = uVar2;
  in_stack_00000088 = uVar3;
  in_stack_00000090 = uVar4;
  in_stack_00000098 = uVar5;
  in_stack_000000a0 = uVar6;
  in_stack_000000a8 = uVar7;
  FUN_03c41b5c(unaff_w20 + unaff_w21 + unaff_w19 + ((unaff_w22 ^ 0xffffffff) & 1) +
               ((unaff_w25 ^ 0xffffffff) & 1),&stack0x00000080,lVar10,*(undefined8 *)puVar1);
  return;
}


