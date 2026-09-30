/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_PreserveReferencesHandling
ENTRY_POINT: 0559c5dc
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_PreserveReferencesHandling(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint in_w8;
  undefined4 in_register_00004044;
  
  if (in_w8 < 0x12) {
                    /* WARNING: Could not recover jumptable at 0x0559c5f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(&switchD_0559c5f8::switchdataD_0150bb1a)
                      [CONCAT44(in_register_00004044,in_w8)] * 4 + 0x559c5fc))();
    return;
  }
  uVar1 = thunk_FUN_02f239f0(PTR_DAT_06d02598);
  uVar1 = thunk_FUN_02ef1438(uVar1,&stack0x0000000c);
  uVar2 = thunk_FUN_02f239f0(PTR_DAT_06d4f3a8);
  uVar1 = System_Reflection_Emit_PropertyBuilder__get_Attributes(uVar2,uVar1,0);
  thunk_FUN_02f239f0(PTR_DAT_06d02080);
  uVar2 = thunk_FUN_02ef1808();
  uVar3 = thunk_FUN_02f239f0(PTR_DAT_06d05bb8);
  FUN_05558580(uVar2,uVar1,uVar3,0);
  uVar1 = thunk_FUN_02f239f0(PTR_DAT_06d4f3b0);
                    /* WARNING: Subroutine does not return */
  FUN_02f07f94(uVar2,uVar1);
}


