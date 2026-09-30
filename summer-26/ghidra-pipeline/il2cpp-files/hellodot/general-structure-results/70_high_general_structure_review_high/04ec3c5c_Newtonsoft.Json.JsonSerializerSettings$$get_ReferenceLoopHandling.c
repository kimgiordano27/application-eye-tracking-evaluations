/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_ReferenceLoopHandling
ENTRY_POINT: 04ec3c5c
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


void Newtonsoft_Json_JsonSerializerSettings__get_ReferenceLoopHandling(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_stack_00000008;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_04ec37c0();
  if (in_stack_00000008._4_4_ != 0) {
    uVar1 = FUN_04ec2c20();
    thunk_FUN_02c7737c(PTR_DAT_065f1670);
    FUN_028be084();
    uVar1 = FUN_04ec2c98(uVar1,in_stack_00000008._4_4_);
    uVar2 = thunk_FUN_02c7737c(PTR_DAT_065f7e30);
                    /* WARNING: Subroutine does not return */
    FUN_02ce7b54(uVar1,uVar2);
  }
  return;
}


