/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_ContractResolver
ENTRY_POINT: 05da4fc4
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


void Newtonsoft_Json_JsonSerializer__set_ContractResolver(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  if (*(int *)(param_1 + 0x20) == *(int *)(*(long *)(param_1 + 0x10) + 0x18)) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined1 *)(param_1 + 0x24) = 1;
                    /* try { // try from 05da4ff0 to 05ea5013 has its CatchHandler @ 05da5034 */
    thunk_FUN_0329bf60((undefined8 *)(param_1 + 0x18),0);
    return;
  }
  thunk_FUN_03257e30(PTR_DAT_0759bb58);
  uVar1 = thunk_FUN_0322f148();
                    /* try { // try from 05da5014 to 05ea5027 has its CatchHandler @ 05da4dac */
  uVar2 = thunk_FUN_03257e30(PTR_DAT_075d9dd8);
                    /* try { // try from 05da5028 to 05ea502b has its CatchHandler @ 05da523c */
  FUN_05e01578(uVar1,uVar2,0);
                    /* try { // try from 05da502c to 05ea502f has its CatchHandler @ 05da5108 */
                    /* catch() { ... } // from try @ 05da4f10 with catch @ 05da5030
                       try { // try from 05da5030 to 05ea504f has its CatchHandler @ 05da4dac */
                    /* catch() { ... } // from try @ 05da4ff0 with catch @ 05da5034 */
  uVar2 = thunk_FUN_03257e30(PTR_DAT_075ea888);
                    /* WARNING: Subroutine does not return */
  FUN_031f225c(uVar1,uVar2);
}


