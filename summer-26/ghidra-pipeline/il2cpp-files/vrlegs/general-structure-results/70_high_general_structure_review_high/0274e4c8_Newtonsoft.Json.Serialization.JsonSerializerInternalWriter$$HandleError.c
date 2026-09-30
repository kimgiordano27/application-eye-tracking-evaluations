/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$HandleError
ENTRY_POINT: 0274e4c8
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


uint Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__HandleError(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 in_w8;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined4 uVar6;
  long unaff_x21;
  undefined8 in_stack_00000018;
  
  *(undefined1 *)(unaff_x21 + 0x1cf) = in_w8;
  puVar1 = PTR_DAT_03cf6080;
  if (unaff_x20 == 0) {
    uVar6 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_025bb98c();
    uVar6 = *(undefined4 *)(unaff_x20 + 0x10);
  }
  puVar2 = PTR_DAT_03cf7bd0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  puVar1 = PTR_DAT_03cbeeb0;
  uVar5 = FUN_026f3f10(0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)puVar2);
  }
  uVar3 = FUN_0274e5a4(uVar4,uVar6,uVar5,0,&stack0x00000010,&stack0x00000018);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)puVar1);
  }
  FUN_0274322c(&stack0x00000010);
  FUN_02749af4();
  unaff_x19[1] = 0;
  *unaff_x19 = 0;
  return uVar3 & 1;
}


