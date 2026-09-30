/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_SerializationBinder
ENTRY_POINT: 04ec595c
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


void Newtonsoft_Json_JsonSerializerSettings__get_SerializationBinder(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int in_w8;
  undefined8 in_stack_00000008;
  
  if (in_w8 == 0) {
    return;
  }
  uVar1 = FUN_04ec2c20();
  thunk_FUN_02c7737c(PTR_DAT_065f1670);
  FUN_028be084();
  uVar1 = FUN_04ec2c98(uVar1,in_stack_00000008._4_4_);
  uVar2 = thunk_FUN_02c7737c(PTR_DAT_065f7f28);
                    /* WARNING: Subroutine does not return */
  FUN_02ce7b54(uVar1,uVar2);
}


