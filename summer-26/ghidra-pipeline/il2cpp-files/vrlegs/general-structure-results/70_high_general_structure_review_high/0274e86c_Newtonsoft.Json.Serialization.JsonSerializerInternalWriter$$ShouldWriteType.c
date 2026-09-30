/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldWriteType
ENTRY_POINT: 0274e86c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteType(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *unaff_x19;
  long unaff_x21;
  undefined4 unaff_w22;
  long *unaff_x23;
  long unaff_x24;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  FUN_01ab69ac(*(undefined8 *)(param_1 + 0xbd0));
  FUN_01ab69ac(PTR_DAT_03cbeeb0);
  FUN_01ab69ac(PTR_DAT_03cfa3a0);
  *(undefined1 *)(unaff_x24 + 0xa5b) = 1;
  puVar2 = PTR_DAT_03cfa3a0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar4 = FUN_0274c9b0(unaff_w22,*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_03cf6080;
  if (unaff_x21 == 0) {
    uVar5 = 0;
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
  }
  else {
    if (DAT_041221cf == '\0') {
      FUN_01ab69ac(PTR_DAT_03cdba00);
      DAT_041221cf = '\x01';
    }
    puVar3 = PTR_DAT_03cf7bd0;
    uVar6 = FUN_025bb98c();
    uVar1 = *(undefined4 *)(unaff_x21 + 0x10);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)puVar2);
    }
    puVar2 = PTR_DAT_03cbeeb0;
    uVar7 = FUN_026f401c();
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)puVar3);
    }
    uVar5 = FUN_0274e5a4(uVar6,uVar1,uVar7,uVar4,&stack0x00000010,&stack0x00000018);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)puVar2);
    }
    FUN_0274322c(&stack0x00000010);
    FUN_02749af4();
    unaff_x19[1] = 0;
    *unaff_x19 = 0;
  }
  return uVar5 & 1;
}


