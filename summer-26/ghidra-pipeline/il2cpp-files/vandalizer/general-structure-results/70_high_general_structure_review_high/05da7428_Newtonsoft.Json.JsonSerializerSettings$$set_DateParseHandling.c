/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_DateParseHandling
ENTRY_POINT: 05da7428
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


uint Newtonsoft_Json_JsonSerializerSettings__set_DateParseHandling(void)

{
  int iVar1;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  
  thunk_FUN_0329bf60();
                    /* try { // try from 05da7438 to 05ea743f has its CatchHandler @ 05da74f0 */
  iVar1 = *(int *)(unaff_x21 + -8) + 1;
  *(int *)(unaff_x21 + -8) = iVar1;
  if (*(long *)(unaff_x21 + -0x10) != 0) {
                    /* try { // try from 05da7450 to 05ea747b has its CatchHandler @ 05da74f8 */
    if (iVar1 == *(int *)(*(long *)(unaff_x21 + -0x10) + 0x20)) {
      *(undefined4 *)(unaff_x19 + 0x18) = 0xffffffff;
    }
    return ~unaff_w20 >> 0x1f;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


