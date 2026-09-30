/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$SetPropertyPresence
ENTRY_POINT: 055d9160
PROGRAM: beastcraft-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__SetPropertyPresence
               (ulong param_1,long param_2)

{
  int iVar1;
  long unaff_x21;
  long *plVar2;
  long unaff_x22;
  
  plVar2 = *(long **)(unaff_x21 + 0x8c0);
  if ((param_1 & 1) == 0) {
                    /* try { // try from 055d9174 to 056d9177 has its CatchHandler @ 055d9180 */
    FUN_02e3ca1c(PTR_DAT_06a368c0);
    *(undefined1 *)(unaff_x22 + 0x614) = 1;
  }
                    /* catch() { ... } // from try @ 055d9174 with catch @ 055d9180 */
                    /* try { // try from 055d9184 to 056d918b has its CatchHandler @ 055d9194 */
  iVar1 = *(int *)(*plVar2 + 0xe4);
                    /* try { // try from 055d918c to 056d9197 has its CatchHandler @ 055d8e70 */
  if (*(char *)(param_2 + 0x57) != '\0') {
    if (iVar1 == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 055d9184 with catch @ 055d9194
                        */
      thunk_FUN_02e9a04c();
    }
    FUN_055d3ea4();
    return;
  }
  if (iVar1 == 0) {
    thunk_FUN_02e9a04c();
  }
  FUN_055d9040();
  return;
}


