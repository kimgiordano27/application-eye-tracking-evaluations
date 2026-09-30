/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$OnError
ENTRY_POINT: 04d0b858
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__OnError(double param_1)

{
  int in_w8;
  uint in_w9;
  int iVar1;
  int *unaff_x19;
  int *unaff_x20;
  int *unaff_x21;
  int unaff_w26;
  double dVar2;
  
  while( true ) {
                    /* catch() { ... } // from try @ 04d0b6cc with catch @ 04d0b858 */
    in_w8 = in_w8 + 1;
                    /* catch() { ... } // from try @ 04d0b65c with catch @ 04d0b85c */
    dVar2 = (double)((in_w9 & 1) + 0x1d);
    if (param_1 < dVar2) break;
    in_w9 = (int)in_w9 >> 1;
    param_1 = param_1 - dVar2;
  }
                    /* try { // try from 04d0b878 to 04e0b87b has its CatchHandler @ 04d0b888 */
  iVar1 = -0x7fffffff;
  if (param_1 != INFINITY) {
    iVar1 = (int)param_1 + 1;
  }
  *unaff_x21 = iVar1;
  *unaff_x20 = in_w8;
  *unaff_x19 = unaff_w26 + 0x526;
  return;
}


