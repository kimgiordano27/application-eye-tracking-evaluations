/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_ConstructorHandling
ENTRY_POINT: 04ec290c
PROGRAM: hellodot-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonSerializer__get_ConstructorHandling(long param_1)

{
  ulong uVar1;
  int in_w9;
  undefined8 unaff_x19;
  short unaff_w20;
  long *unaff_x23;
  undefined8 in_stack_00000008;
  
  if (in_w9 == 0) {
    thunk_FUN_02cd038c(param_1);
    param_1 = *unaff_x23;
  }
  if (*(short *)(*(long *)(param_1 + 0xb8) + 10) != unaff_w20) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_02cd038c(param_1);
    }
    if (*(int *)(*(long *)PTR_DAT_065c9808 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_04e945d8(*(long *)(*unaff_x23 + 0xb8) + 10,0);
    unaff_x19 = FUN_04db00f0();
  }
  if (*(int *)(*(long *)PTR_DAT_065f1670 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar1 = FUN_02ccba1c(unaff_x19,&stack0x00000008);
  if ((uVar1 & 1) == 0) {
    in_stack_00000008 = unaff_x19;
  }
  return in_stack_00000008;
}


