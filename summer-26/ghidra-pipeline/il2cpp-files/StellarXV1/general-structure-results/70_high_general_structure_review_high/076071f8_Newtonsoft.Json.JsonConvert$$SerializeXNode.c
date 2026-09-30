/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeXNode
ENTRY_POINT: 076071f8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined4 Newtonsoft_Json_JsonConvert__SerializeXNode(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int in_w8;
  
  if (in_w8 - 1U < 4) {
    return *(undefined4 *)(&DAT_01aefce0 + (ulong)(in_w8 - 1U) * 4);
  }
  thunk_FUN_040dedf8(PTR_DAT_09285a38);
  uVar1 = thunk_FUN_040b4efc();
  uVar2 = thunk_FUN_040dedf8(PTR_DAT_092d7d40);
  FUN_0767bcbc(uVar1,uVar2,0);
  uVar2 = thunk_FUN_040dedf8(PTR_DAT_092d7d48);
                    /* WARNING: Subroutine does not return */
  FUN_040776f4(uVar1,uVar2);
}


