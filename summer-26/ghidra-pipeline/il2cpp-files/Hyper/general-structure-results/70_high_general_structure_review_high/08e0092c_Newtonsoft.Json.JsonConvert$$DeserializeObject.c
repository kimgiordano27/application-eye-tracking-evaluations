/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject
ENTRY_POINT: 08e0092c
PROGRAM: Hyper-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__DeserializeObject(uint param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((param_1 & 1) == 0) {
    if (param_1 < 0x20) {
      return;
    }
    thunk_FUN_049ae08c(PTR_DAT_0ac0c088);
    uVar1 = thunk_FUN_04983f60();
    uVar2 = thunk_FUN_049ae08c(PTR_DAT_0ac69bf8);
    FUN_08cc57b4(uVar1,uVar2,0);
  }
  else {
    thunk_FUN_049ae08c(PTR_DAT_0ac0c088);
    uVar1 = thunk_FUN_04983f60();
    uVar2 = thunk_FUN_049ae08c(PTR_DAT_0ac69bf8);
    uVar3 = thunk_FUN_049ae08c(PTR_DAT_0ac6a030);
    FUN_08cc1128(uVar1,uVar2,uVar3,0);
  }
  uVar2 = thunk_FUN_049ae08c(PTR_DAT_0ac6a038);
                    /* WARNING: Subroutine does not return */
  FUN_04948050(uVar1,uVar2);
}


