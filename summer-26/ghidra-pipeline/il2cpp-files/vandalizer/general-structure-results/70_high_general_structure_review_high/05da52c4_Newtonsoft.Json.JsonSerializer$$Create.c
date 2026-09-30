/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Create
ENTRY_POINT: 05da52c4
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


void Newtonsoft_Json_JsonSerializer__Create(long param_1,long param_2,byte param_3)

{
  undefined4 uVar1;
  
                    /* try { // try from 05da52c8 to 05ea52d7 has its CatchHandler @ 05da52e4 */
  FUN_05e44034(param_1,0);
                    /* catch() { ... } // from try @ 05da528c with catch @ 05da52dc */
                    /* catch() { ... } // from try @ 05da5290 with catch @ 05da52e0 */
  *(long *)(param_1 + 0x10) = param_2;
                    /* catch() { ... } // from try @ 05da5258 with catch @ 05da52e4
                       catch() { ... } // from try @ 05da52c8 with catch @ 05da52e4 */
                    /* try { // try from 05da52ec to 05ea52ef has its CatchHandler @ 05da54b0 */
  thunk_FUN_0329bf60((long *)(param_1 + 0x10),param_2);
                    /* try { // try from 05da52f0 to 05ea5313 has its CatchHandler @ 05da4dac */
  *(byte *)(param_1 + 0x24) = param_3 & 1;
                    /* catch() { ... } // from try @ 05da4eb8 with catch @ 05da52f4 */
  if (param_2 != 0) {
                    /* catch() { ... } // from try @ 05da4ed4 with catch @ 05da52f8 */
    uVar1 = *(undefined4 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined1 *)(param_1 + 0x25) = 1;
    *(undefined4 *)(param_1 + 0x20) = uVar1;
    thunk_FUN_0329bf60((undefined8 *)(param_1 + 0x18),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


