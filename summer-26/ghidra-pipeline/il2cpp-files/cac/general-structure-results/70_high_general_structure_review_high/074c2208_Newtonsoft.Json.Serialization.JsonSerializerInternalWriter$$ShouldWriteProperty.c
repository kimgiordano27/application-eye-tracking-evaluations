/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldWriteProperty
ENTRY_POINT: 074c2208
PROGRAM: cac-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteProperty(void)

{
  int iVar1;
  bool in_ZR;
  bool in_CY;
  bool bVar2;
  short *psVar3;
  int unaff_w19;
  int unaff_w20;
  long unaff_x21;
  
  psVar3 = (short *)(unaff_x21 + (long)unaff_w19 * 2);
  bVar2 = false;
  iVar1 = unaff_w19;
  if (!in_CY || in_ZR) {
    iVar1 = unaff_w20;
  }
  while( true ) {
    if (iVar1 == unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_03f13634();
    }
    if (*psVar3 != 0) break;
                    /* try { // try from 074c2224 to 075c2227 has its CatchHandler @ 074c2330 */
    unaff_w19 = unaff_w19 + 1;
                    /* try { // try from 074c2228 to 075c2247 has its CatchHandler @ 074c2334 */
    psVar3 = psVar3 + 1;
    bVar2 = unaff_w20 <= unaff_w19;
    if (unaff_w20 == unaff_w19) {
                    /* try { // try from 074c2248 to 075c234b has its CatchHandler @ 074c219c */
      return bVar2;
    }
  }
  return bVar2;
}


