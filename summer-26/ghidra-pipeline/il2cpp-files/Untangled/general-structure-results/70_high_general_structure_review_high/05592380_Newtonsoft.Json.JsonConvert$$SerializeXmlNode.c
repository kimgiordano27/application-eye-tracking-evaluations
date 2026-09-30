/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeXmlNode
ENTRY_POINT: 05592380
PROGRAM: Untangled-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__SerializeXmlNode
               (long param_1,long param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_4 < 0) {
    thunk_FUN_02f239f0(PTR_DAT_06d0e378);
    uVar2 = thunk_FUN_02ef1808();
    uVar3 = thunk_FUN_02f239f0(PTR_DAT_06d04c48);
    uVar1 = thunk_FUN_02f239f0(PTR_DAT_06d47430);
    FUN_0555b650(uVar2,uVar3,uVar1,0);
  }
  else {
    if (param_3 <= *(int *)(param_2 + 0x18) - param_4) {
      if (*(long *)(param_1 + 0x60) != 0) {
        FUN_05657788();
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    thunk_FUN_02f239f0(PTR_DAT_06d02080);
    uVar2 = thunk_FUN_02ef1808();
    uVar3 = thunk_FUN_02f239f0(PTR_DAT_06d4f0c0);
    FUN_0555e840(uVar2,uVar3,0);
  }
  uVar3 = thunk_FUN_02f239f0(PTR_DAT_06d4f0c8);
                    /* WARNING: Subroutine does not return */
  FUN_02f07f94(uVar2,uVar3);
}


