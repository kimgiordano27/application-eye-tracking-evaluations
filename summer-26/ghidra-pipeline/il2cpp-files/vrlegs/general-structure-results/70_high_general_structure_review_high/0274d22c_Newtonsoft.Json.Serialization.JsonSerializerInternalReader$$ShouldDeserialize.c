/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ShouldDeserialize
ENTRY_POINT: 0274d22c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined1  [16] Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ShouldDeserialize(void)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined4 uVar5;
  long unaff_x24;
  long *plVar6;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  plVar6 = *(long **)(unaff_x24 + 0x80);
  if (unaff_x22 == 0) {
    uVar5 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_025bb98c();
    uVar5 = *(undefined4 *)(unaff_x22 + 0x10);
  }
  puVar3 = PTR_DAT_03cf7bd0;
  if (*(int *)(*plVar6 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  puVar2 = PTR_DAT_03cbeeb0;
  FUN_026f401c();
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)puVar3);
  }
  FUN_0274d300(uVar4,uVar5);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)puVar2);
  }
  uVar4 = FUN_0274322c();
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  FUN_02749af4(&stack0x00000010,uVar4,in_stack_00000008);
  auVar1._8_8_ = in_stack_00000018;
  auVar1._0_8_ = in_stack_00000010;
  return auVar1;
}


