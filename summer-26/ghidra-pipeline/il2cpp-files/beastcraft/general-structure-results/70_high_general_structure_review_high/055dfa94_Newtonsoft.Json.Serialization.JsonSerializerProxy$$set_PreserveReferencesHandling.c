/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_PreserveReferencesHandling
ENTRY_POINT: 055dfa94
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


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_PreserveReferencesHandling(void)

{
  uint unaff_w20;
  long unaff_x21;
  long lVar1;
  long *unaff_x24;
  int unaff_w25;
  undefined4 uStack000000000000000c;
  
  if (unaff_w25 < 0) {
    FUN_056265f0(0);
  }
                    /* try { // try from 055dfaa0 to 056dfaa7 has its CatchHandler @ 055dfb00 */
                    /* try { // try from 055dfaac to 056dfabb has its CatchHandler @ 055dfafc */
  lVar1 = *unaff_x24;
  uStack000000000000000c = 0;
  if (unaff_w20 < *(int *)(unaff_x21 + 8) + ((*(byte *)(unaff_x21 + 0x1c) ^ 0xffffffff) & 1)) {
    FUN_056265f0(0);
  }
  if ((*(ushort *)(*(long *)(lVar1 + 0x20) + 0x135) & 1) == 0) {
    FUN_02e7568c();
  }
  FUN_045dab70();
  return;
}


