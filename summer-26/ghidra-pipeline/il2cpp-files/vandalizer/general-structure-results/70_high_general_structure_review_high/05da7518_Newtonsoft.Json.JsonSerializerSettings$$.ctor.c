/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$.ctor
ENTRY_POINT: 05da7518
PROGRAM: vandalizer-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings___ctor(undefined8 param_1)

{
  undefined8 uVar1;
  int unaff_w20;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_075dba10;
  if (unaff_w20 == 0) {
    puVar2 = PTR_DAT_075dba18;
  }
  uVar1 = thunk_FUN_03257e30(puVar2);
  FUN_05e01578(param_1,uVar1,0);
                    /* try { // try from 05da7550 to 05ea755f has its CatchHandler @ 05da7560 */
  uVar1 = thunk_FUN_03257e30(PTR_DAT_075ea970);
                    /* WARNING: Subroutine does not return */
  FUN_031f225c(param_1,uVar1);
}


