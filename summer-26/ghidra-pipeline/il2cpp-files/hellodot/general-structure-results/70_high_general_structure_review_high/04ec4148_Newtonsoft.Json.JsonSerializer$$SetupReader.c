/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$SetupReader
ENTRY_POINT: 04ec4148
PROGRAM: hellodot-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonSerializer__SetupReader(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_stack_00000008;
  
  uVar1 = Newtonsoft_Json_JsonTextReader__ReadAsync();
  if (in_stack_00000008._4_4_ == 0) {
    if ((int)uVar1 == -1) {
      thunk_FUN_02c7737c(PTR_DAT_065cfd98);
      uVar1 = thunk_FUN_02cea894();
      FUN_04e80678(uVar1,0);
      goto LAB_04ec41e4;
    }
  }
  else {
    if (in_stack_00000008._4_4_ != 0x6d) {
      uVar1 = FUN_04ec2c20();
      thunk_FUN_02c7737c(PTR_DAT_065f1670);
      FUN_028be084();
      uVar1 = FUN_04ec2c98(uVar1,in_stack_00000008._4_4_);
LAB_04ec41e4:
      uVar2 = thunk_FUN_02c7737c(PTR_DAT_065f7e58);
                    /* WARNING: Subroutine does not return */
      FUN_02ce7b54(uVar1,uVar2);
    }
    uVar1 = 0;
  }
  return uVar1;
}


